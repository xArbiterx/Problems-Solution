#pragma once

#ifdef LCALGO_EXPORTS
#define LCALGO __declspec(dllexport)
#else                                                                            
#define LCALGO _declspec(dllimport)
#endif
#include "commonStd.h"

struct LCALGO ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
};

struct LCALGO TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

LCALGO vector<int> twoSum_1(vector<int>& nums, int target);
LCALGO ListNode* addTwoNumbers_2(ListNode* l1, ListNode* l2);
LCALGO int lengthOfLongestSubstring_3(string s);
LCALGO double findMedianSortedArrays_4(vector<int>& nums1, vector<int>& nums2);
LCALGO string longestPalindrome_5(string s);
LCALGO string convert_6(string s, int numRows);
LCALGO int reverse_7(int x);
LCALGO int myAtoi_8(string s);
LCALGO bool isPalindrome_9(int x);
LCALGO int maxArea_11(vector<int>& height);



LCALGO vector<int> findEvenNumbers_2094(vector<int>& digits);
