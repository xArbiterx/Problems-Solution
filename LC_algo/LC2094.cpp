#include"pch.h"

vector<int> findEvenNumbers_2094(vector<int>& digits) {
	vector<int> v;
	set<int> s;
	auto n = digits.size();
	for (int i = 0; i < n; i++) {
		if (digits[i] == 0) {
			continue;
		}
		for (int j = 0; j < n; j++) {
			if (i == j) {
				continue;
			}
			for (int k = 0; k < n; k++) {
				if (k == j || k == i || digits[k] % 2) {
					continue;
				}
				s.insert(digits[i] * 100 + digits[j] * 10 + digits[k]);
			}
		}
	}
	v.assign(s.begin(), s.end());
	return v;
}