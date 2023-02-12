#include"pch.h"

double findMedianSortedArrays_4(vector<int>& nums1, vector<int>& nums2) {
	int i1 = 0, i2 = 0;
	auto n1 = nums1.size(), n2 = nums2.size();
	vector<double> v;
	int ret = 0;
	while (i1 < n1 || i2 < n2)
	{
		if (i1 == n1) {
			v.push_back(nums2[i2++]);
		}
		else if (i2 == n2) {
			v.push_back(nums1[i1++]);
		}
		else
		{
			if (nums1[i1] < nums2[i2]) {
				v.push_back(nums1[i1++]);
			}
			else {
				v.push_back(nums2[i2++]);
			}
		}
	}

	auto n3 = v.size();
	if (n3 % 2 == 0) {
		return (v[n3 / 2] + v[n3 / 2 - 1]) / 2;
	}
	else {
		return v[n3 / 2];
	}
}