// https://leetcode.com/problems/reverse-linked-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
      ListNode* curr = head, *prev=NULL, *next =NULL;
      while(curr){
        // assign the next pointer
        next = curr->next;
        //reverse the pointer
        curr->next = prev;
        //assign the next value
        prev =curr;
        curr=next;
      }
      return prev;
    }
};

