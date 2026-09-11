class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        ListNode* l1;
        ListNode* l;

        if(left == 1) {
            l1 = nullptr;
            l = head;
        }
        else {
            ListNode* temp1 = head;

            while(left > 2) {
                temp1 = temp1->next;
                left--;
            }

            l1 = temp1;
            l = l1->next;
        }

        ListNode* temp2 = head;

        while(right > 1) {
            temp2 = temp2->next;
            right--;
        }

        ListNode* r = temp2;
        ListNode* r1 = r->next;

        // reversing
        ListNode* slow = nullptr;
        ListNode* temp = l;

        while(temp != r1) {
            ListNode* fast = temp->next;
            temp->next = slow;
            slow = temp;
            temp = fast;
        }

        // reconnecting
        if(l1 == nullptr) {
            head = r;
        }
        else {
            l1->next = r;
        }

        l->next = r1;

        return head;
    }
};