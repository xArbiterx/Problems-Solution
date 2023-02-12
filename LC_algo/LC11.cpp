#include"pch.h"

int maxArea_11(vector<int>& height) {
	int l = 0, ret = 0, r = (int)height.size() - 1;
	while (l != r) {
		int x = r - l, y = min(height[l], height[r]);
		ret = max(ret, x * y);
		if (height[l] > height[r]) {
			r--;
		}
		else {
			l++;
		}
	}
	return ret;
}