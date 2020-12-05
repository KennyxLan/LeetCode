/*
(Medium) 241. Different Ways to Add Parentheses.cpp
Runtime: 8 ms, faster than 39.96% of C++ online submissions for Different Ways to Add Parentheses.
Memory Usage: 13.8 MB, less than 7.49% of C++ online submissions for Different Ways to Add Parentheses.
*/


class Solution {
public:
    
    ////////////////////////
    vector<int> dnc(string inputString, int start, int end) {
	// if the string is just a number, no +-*
	bool isOneNumber = true;
	int total = 0;
	//cout << "inputString =" << inputString << ";" << endl;
	for (int i = start; i <= end; i++) {
		if (inputString[i] >= '0' && inputString[i] <= '9') {
			total = total * 10 + (inputString[i] - '0');
		}
		else {
			isOneNumber = false;
			break;
		}
	}
	if (isOneNumber) {
		vector<int> a = { total };
		//cout << "a =" << a[0] << endl;
		return a;
	}

	// isOneNumber == false
	vector<int> answer{};
	for (int i = start; i <= end; i++) {
		if (inputString[i] < '0' || inputString[i] > '9') {
			vector<int> lVector = dnc(inputString, start, i - 1);
			vector<int> rVector = dnc(inputString, i + 1, end);
			for (int j = 0; j < lVector.size(); j++) {
				for (int k = 0; k < rVector.size(); k++) {
					if (inputString[i] == '+')
						answer.push_back(lVector[j] + rVector[k]);
					else if (inputString[i] == '-')
						answer.push_back(lVector[j] - rVector[k]);
					else // inputString[i] == '*'
						answer.push_back(lVector[j] * rVector[k]);


				}
			}
		}
	}
	return answer;

}
    
    ////////////////////////
    vector<int> diffWaysToCompute(string input) {
        vector<int> answer = dnc(input, 0, input.length() - 1);
        //for (int i = 0; i < answer.size(); i++) {
        //    cout << i << " ; " << answer[i] << endl;
        //}
        return answer;
        
    }
};
