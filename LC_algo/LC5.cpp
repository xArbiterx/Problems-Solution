#include"pch.h"

bool hw(string s) {
	for (int i = 0; i < s.size() / 2; i++) {
		if (s[i] != s[s.size() - i - 1]) {
			return false;
		}
	}
	return true;
}

string longestPalindrome_5(string s) {
	string str;
	for (int i = 0; i < s.size(); i++) {
		if (s.size() - i < str.size()) {
			break;
		}
		for (int j = 1; j <= s.size() - i; j++) {
			string ss = s.substr(i, j);
			if (ss.size() > str.size() && hw(ss)) {
				str = ss;
			}
		}
	}
	return str;
}

