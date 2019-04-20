/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    struct ListNode* temp;
    
    if(!head){
        return NULL;
    }
    if(!head->next){
        return head;
    }
    
    temp = (struct ListNode*)malloc(sizeof(struct ListNode));
    
    temp = head->next;
    head->next=swapPairs(temp->next);
    temp->next=head;
    return temp;
}
