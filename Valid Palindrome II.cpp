//Program to Valid Palindrome II
//Created by Aryan
//Created on 21/09/2021

class Solution {
public:
      bool validPalindrome(string s) {
         int len = s.size(), i = 0, j = len - 1;
	while (i < j) {
		if (s[i] == s[j]) {
			++i;
			--j;
		}
		else {
		return f(s, i + 1, j) || f(s, i, j - 1);
		}
	}
	return true;
	}
private:
       bool f(const string & s, int i, int j) {
	while (i < j) {
		if (s[i] == s[j]) {
			++i;
			--j;
		}
		else {
		return false;
		}
	}
	return true;
	}
};