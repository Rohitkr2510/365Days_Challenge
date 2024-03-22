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
    bool isPalindrome(ListNode* head) {
        if(head->next == NULL) return true;
        ListNode * fast = head;
        ListNode * slow = head;
        ListNode * curr = head;
        ListNode * Next = head;
        ListNode * prev = NULL;

        do
        {
            fast = fast->next->next;
            curr = slow;
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            slow = Next;

        }while(fast && fast->next);

         if(fast)
            slow = slow->next;

            while(curr && slow)
            {
                if(curr->val != slow->val)return false;
                curr = curr->next;
                slow = slow->next;
            }
        

        return true;
        
    }
};