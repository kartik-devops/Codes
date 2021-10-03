class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int len=0;
        ListNode *tmp=head;
        
        while(tmp!=NULL)
        {
            
            tmp=tmp->next;
            len ++;
            
        }
        int ans=0;
        for(tmp=head ;tmp!=NULL;tmp=tmp->next)
        {
            ans+=((tmp->val)*pow(2,len));
            len--;
        }
        return ans/2 ; 
    }
};
