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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int c1=0;
        ListNode* t1= headA;
        while(t1!=nullptr){c1++; t1= t1->next;}

        int c2=0;
        ListNode* t2= headB;
        while(t2!=nullptr){c2++; t2= t2->next;}

        int d= abs(c1-c2);
        ListNode* t11= headA;
        ListNode* t22= headB;
        if(c1>c2){  while(d>0){t11=t11->next; d--;}}

        else{  while(d>0){t22=t22->next; d--;}}

        while(t11!=nullptr){
            if(t11==t22){return t11;}
            else{t11=t11->next;
                 t22=t22->next;}
        }
        return nullptr;

        
    }
};