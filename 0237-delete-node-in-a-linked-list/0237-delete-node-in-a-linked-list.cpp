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
    void deleteNode(ListNode* node) {
        
        // first method********************
        
        
        // ListNode *cur=node;
        // cur->val=cur->next->val;
        // cur->next=cur->next->next;
        
        
        // %%%%%%%%%%%%%%%%%%%%Second method%%%%%%%%%%%%%%%%%%%%
        
        swap(node->val,node->next->val);
        ListNode *temp=node->next;
        node->next=node->next->next;
        
        delete temp;
       
       
        
       
    }
};