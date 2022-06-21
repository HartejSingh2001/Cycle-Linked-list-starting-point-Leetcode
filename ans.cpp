class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)
        {
            return NULL;
        }
        if(head->next == head)
        {
            return head;
        }
        ListNode *slow=head,*fast=head;
        while(fast!= NULL && fast->next!= NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
               break;
            }
        }
        slow=head;
        while(slow!=fast &&slow!=NULL &&fast!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
         }
        if(slow==fast)
        {
            return slow;
        }
        
        return NULL; 
    }
};
