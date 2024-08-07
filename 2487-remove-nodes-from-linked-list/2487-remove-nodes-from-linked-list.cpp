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
    ListNode* removeNodes(ListNode* head) {
        
        if(head==NULL||head->next==NULL)return head;
        
        ListNode *newNode=removeNodes(head->next);
        
        if(head->val<newNode->val)
        {
            delete head;
            return newNode;
        }
        head->next=newNode;
        return head;
    }
};