#include"pch.h"

int myAtoi_8(string s) {
	int ret = 0;
	if (s.empty()) {
		return 0;
	}
	int i = 0;
	bool nega = false;
	while (s[i] == ' ') {
		i++;
	}
	if (s[i] == '-') {
		nega = true; i++;
	}
	else if (s[i] == '+') {
		i++;
	}
	for (; i < s.size(); i++) {
		if (!isdigit(s[i])) {
			break;
		}
		if (nega) {
			if (ret * (-1) < INT_MIN / 10)
				return INT_MIN;
			else if (ret * (-1) == INT_MIN / 10 && (int)s[i] - 48 > abs(INT_MIN % 10))
				return INT_MIN;
		}
		else {
			if (ret > INT_MAX / 10) {
				return INT_MAX;
			}
			else if (ret == INT_MAX / 10 && (int)s[i] - 48 > INT_MAX % 10) {
				return INT_MAX;
			}
		}
		ret = ret * 10 + (int)s[i] - 48;
	}
	return nega ? ret * (-1) : ret;
}