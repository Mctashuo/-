#include <stdio.h>

struct ListNode {
	int val;
	ListNode *next;
};
ListNode * reverseList(ListNode *head) {
	ListNode * new_head = NULL;
	while(head) {
		ListNode * next = head->next;
		head->next = new_head;
		new_head = head;
		head = next;
	}
	return new_head;
}
int main() {
	ListNode a;
	ListNode b;
	ListNode c;
	ListNode d;
	ListNode e;
	a.val = 10;
	b.val = 20;
	c.val = 30;
	d.val = 40;
	e.val = 50;
	a.next = &b;
	b.next = &c;
	c.next = &d;
	d.next = &e;
	e.next = NULL;
	ListNode *head = &a;
	while(head)
	{
		printf("%d\n",head->val);
		head = head->next;
	}
	
	printf("·´×ª\n");
	head = &a;
	head = reverseList(head);
	while(head)
	{
		printf("%d\n",head->val);
		head = head->next;
	}
}
