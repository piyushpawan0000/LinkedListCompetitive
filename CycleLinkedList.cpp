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
        bool result = false;
        struct ListNode *slow = head;
        struct ListNode *fast = head;
        while(slow && fast && slow->next!=NULL && fast->next!=NULL)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
            if(slow == fast)
            {
                result = true;
                break;
            }
        }
        return result;
    }
};