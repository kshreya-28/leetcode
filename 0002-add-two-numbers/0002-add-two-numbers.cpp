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

        ListNode* t1=l1;
        ListNode* t2=l2;

        ListNode* dummy= new ListNode(-1);
        ListNode* temp= dummy;

        int carry=0;
        while(t1!=nullptr|| t2!=nullptr){
            int sum=0;
            if(t1!=nullptr) {sum= sum+ t1->val;}
            if(t2!=nullptr) {sum= sum+ t2->val;}
            sum=sum+carry;

            ListNode* neww= new ListNode(sum%10);
            carry=sum/10;

            temp->next=neww;
            temp=neww;

            if(t1!=nullptr) {t1=t1->next;}
            if(t2!=nullptr) {t2=t2->next;}

        }
        if(carry==1){
        ListNode* neww= new ListNode(carry);
        temp->next=neww;
                temp=neww;}

    return dummy->next;
    }
    
};