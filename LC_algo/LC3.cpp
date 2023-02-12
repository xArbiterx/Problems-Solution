#include"pch.h"

int lengthOfLongestSubstring_3(string s) {
	int m = 0, n = 0;
	bool f = false;
	vector<char> v;
	for (int i = 0; i < static_cast<int>(s.size()); i++)
	{
		f = false;
		for (int j = i; j < static_cast<int>(s.size()); j++) {
			for (auto k : v) {
				if (k == s[j]) {
					m = max(m, static_cast<int>(v.size()));
					v.clear();
					f = true;
					break;
				}
			}
			if (f) {
				break;
			}
			v.push_back(s[j]);
		}
	}
	m = max(m, static_cast<int>(v.size()));
	return m;
}