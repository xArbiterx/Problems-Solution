#include"pch.h"

int reverse_7(int x) {
	int ret = 0;
	if (x == 0) {
		return ret;
	}
	int a = x > 0 ? 1 : -1;
	while (x) {
		int asd = x % 10;
		if (a == 1) {
			if (ret == INT_MAX / 10) {
				if (asd > INT_MAX % 10)
					return 0;
			}
			else if (ret > INT_MAX / 10) {
				return 0;
			}
		}
		else {
			if (ret == abs(INT_MIN / 10)) {
				if (asd < INT_MIN % 10)
					return 0;
			}
			else if (ret < INT_MIN / 10) {
				return 0;
			}
		}
		ret = ret * 10 + asd;
		x /= 10;
	}
	return ret;
}