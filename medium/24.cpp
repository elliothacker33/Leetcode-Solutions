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
ListNode* swapPairs(ListNode* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;  
    }

    ListNode* dummy = new ListNode();
    dummy->next = head;
    ListNode* prev = dummy;
    ListNode* curr = head;

    while (curr != nullptr && curr->next != nullptr) {
        ListNode* nextPair = curr->next->next; 

        prev->next = curr->next;
        curr->next->next = curr;
        curr->next = nextPair;

        prev = curr;
        curr = nextPair;
    }

    ListNode* newHead = dummy->next;
    delete dummy;
    return newHead;
}
    
};
