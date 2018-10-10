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
    ListNode* middleNode(ListNode* head) {
        int length=0;
        struct ListNode *temp = head;
        while(temp!=NULL)
        {
            length++;
            temp=temp->next;
            
        }
        int middle = length/2;
        temp = head;
        while(middle--)
        {
            temp=temp->next;
        }
        return temp;
        
    }
};