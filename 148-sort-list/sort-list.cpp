class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);
        ListNode* temp = &dummy;
        while (list1 != NULL && list2 != NULL) {
            if (list1->val <= list2->val) {
                temp->next = list1;
                list1 = list1->next;
            }
            else {
                temp->next = list2;
                list2 = list2->next;
            }
            temp = temp->next;
        }
        if (list1 != NULL) {
            temp->next = list1;
        }
        else {
            temp->next = list2;
        }
        return dummy.next;
    }
    ListNode* sortList(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }
        ListNode* slow = head;
        ListNode* fast = head->next;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* head2 = slow->next;
        slow->next = NULL;
        ListNode* l = sortList(head);
        ListNode* r = sortList(head2);
        return mergeTwoLists(l, r);
    }
};