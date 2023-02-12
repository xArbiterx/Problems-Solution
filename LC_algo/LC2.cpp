#include"pch.h"

ListNode* addTwoNumbers_2(ListNode* l1, ListNode* l2) {
	int tmp = 0, val1, val2, sum;
	ListNode* first = new ListNode(0);
	ListNode* l3 = first;

	while (l1 || l2) {
		if (l1) {
			val1 = l1->val;
			l1 = l1->next;
		}
		else {
			val1 = 0;
		}
		if (l2) {
			val2 = l2->val;
			l2 = l2->next;
		}
		else {
			val2 = 0;
		}
		sum = val1 + val2 + tmp;
		l3->next = new ListNode(sum % 10);
		tmp = sum / 10;
		l3 = l3->next;
	}
	if (tmp) {
		l3->next = new ListNode(1);
	}
	return first->next;
}
