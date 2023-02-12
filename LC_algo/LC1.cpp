#include"pch.h"

vector<int> twoSum_1(vector<int>& nums, int target) {
	vector<int> ret(2);
	map<int, int> m;
	for (int i = 0; i < nums.size(); i++) {
		int tmp = target - nums[i];
		auto it = m.find(tmp);
		if (it != m.end()) {
			ret[1] = i;
			ret[0] = it->second;
			break;
		}
		m[nums[i]] = i;
	}
	return ret;
}
