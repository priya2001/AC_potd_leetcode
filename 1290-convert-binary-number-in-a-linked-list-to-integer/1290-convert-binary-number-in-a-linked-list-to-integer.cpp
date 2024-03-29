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
    
            // ----------------------------------------Reverse Approach----------------------------
//      ListNode *reverse(ListNode *head)
//    {   
        
//         ListNode *current=head;
//         ListNode *prev=NULL,*next=NULL;
//         while(current!=NULL)
//         {
//             next=current->next;
//             current->next=prev;
//             prev=current;
//             current=next;
//         }
//         head=prev;
//         return head;
//     }
    
    int getDecimalValue(ListNode* head) {
//         int sum=0,i=0;
//         ListNode *temp=reverse(head);
//         while(temp!=nullptr)
//         {
             
//              sum=sum+(temp->val)*pow(2,i);
//              i++;
//              temp=temp->next;
//         }
//         return sum;
        
        
        // -----------------------------------------------2nd approach ---------------------------------
// first count the lenght of node then solve the binary to integer
        
        // ListNode *temp=head;
        // int count=0;
        // while(temp!=NULL)
        // {
        //     count++;
        //     temp=temp->next;
        // }
        // int sum=0;
        // temp=head;
        // int i=1;
        // while(i<=count)
        // {
        //     sum=sum+(temp->val)*pow(2,count-i);
        //     temp=temp->next;
        //     i++;
        // }
        // return sum;
            
         // --------------------------------------3rd approach------------------------------------
        // without reverse and length count
/* first step-> assumed my first node is last Node pow(2,0) but we check first node is not a last node then we 
come next node is pow(2,0) but our first node is pow(2,1)
second step-> angin we assume the second node is last node but it is not true second Node pow(2,1)orfirst node
pow(2,2);  this is contiune till meet last code
 */
        
        int ans=0;
        ListNode *temp=head;
        while(temp!=NULL)
        {
            ans=ans*2;
            ans=ans+(temp->val);
            temp=temp->next;
        }
        return ans;
        
    }
};