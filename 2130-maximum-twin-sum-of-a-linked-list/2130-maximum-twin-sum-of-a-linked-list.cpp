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
    ListNode* reverse(ListNode* head){
    ListNode* prev = NULL;
    ListNode* curr = head;

    while(curr){
        ListNode* next = curr->next;

        curr->next = prev;

        prev = curr;
        curr = next;
    }

    return prev;
}
public:
    int pairSum(ListNode* head) {
        ListNode* newhead = new ListNode(head->val);

        ListNode* temp = head->next, *newtemp= newhead;
        while(temp){
            ListNode* newtail = new ListNode(temp->val);
            newtemp->next = newtail;
            newtemp = newtemp->next;
            temp = temp->next;
        }

        ListNode *revHead = reverse(newhead);

        int sum = 0;
        while(head){
            sum = max(sum, head->val + revHead->val);

            head = head->next;
            revHead = revHead->next;
        }

        return sum;
    }
};