/*
(Easy) 13. Roman to Integer.c
Runtime: 0 ms, faster than 100.00% of C online submissions for Roman to Integer.
Memory Usage: 5.8 MB, less than 98.65% of C online submissions for Roman to Integer.
*/


int f(char a, char b)
{
    if( a == 'I')
    {
	if( ( b != 'V' ) && (b != 'X' ) )
            return 1;
	else
            return -1;
    }
    else if( a == 'V' )

	return 5;

    else if( a == 'X' )
    {
        if( ( b != 'L' ) && ( b != 'C' ) )
            return 10;
	else
	    return -10;
    }
    else if( a == 'L' )

	return 50;

    else if( a == 'C' )
    {
	if( ( b != 'D' ) && ( b != 'M' ) )
	    return 100;
	else
            return -100;
    }
    else if( a == 'D' )

	return 500;

    else if( a == 'M' )
	
	return 1000;

    else

	return -9999999;

}
int romanToInt(char *s){
    int sum = 0;
    for( int i = 0; s[i] != '\0'; i++ )
    {
        sum = sum + f( s[i], s[i+1] );
    }

    return sum;
}

// 44  XLIV
// 444 CD

