#include"pch.h"

bool isPalindrome_9(int x) {
	vector<int> v;
	if (x < 0) {
		return false;
	}
	while (x) {
		v.push_back(x % 10);
		x /= 10;
	}
	auto j = v.size() - 1;
	for (int i = 0; i < j; i++, j--) {
		if (v[i] != v[j]) {
			return false;
		}
	}
	return true;
}