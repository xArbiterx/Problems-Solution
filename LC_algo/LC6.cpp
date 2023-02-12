#include"pch.h"

string convert_6(string s, int numRows) {
	vector<string> v(numRows);
	if (numRows == 1) {
		return s;
	}
	string ret;
	int x = 0;
	bool flag = true;

	for (int i = 0; i < s.size(); i++) {
		if (flag) {
			v[x] += s[i];
			x++;
		}
		else {
			x--;
			v[x] += s[i];
		}
		if (x == v.size()) {
			flag = false;
			x--;
		}
		if (!flag && x == 0) {
			flag = true;
			x++;
		}
	}
	for (int i = 0; i < v.size(); i++) {
		ret += v[i];
	}
	return ret;
}