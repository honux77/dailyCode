/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
	bool hasCycle(ListNode *head) {
	    ListNode *curr, *temp; 
	    curr = head;
		while(curr) {
		  temp = curr;
		  curr = curr->next;
		  temp->next = head;
		  if (curr == head)
		    return true;
		}
		return false;
	}
};
