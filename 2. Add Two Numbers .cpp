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
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int add = 0;//add means sum of two num
        ListNode newHead(0);
        ListNode *t = &newHead;
        while(add || l1 || l2) {
            add += (l1? l1->val : 0) + (l2? l2->val : 0);//add + L1 + L2
            t->next = new ListNode(add%10);// add note for remainder
            t = t->next;
            add /= 10; // carry 
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }
        return newHead.next;
    }
};
