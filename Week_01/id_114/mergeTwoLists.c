/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* head;
    struct ListNode* res;
    res = (struct ListNode*)malloc(sizeof(struct ListNode));
    head = res;
    
    while(l1 && l2){
        if(l1->val < l2->val){
            res->next = l1;
            l1 = l1->next;
        }else{
            res->next = l2;
            l2 = l2->next;
        }
        res = res->next;
    }
    
    if(l1){
        res->next = l1;
    }else{
        res->next = l2;
    }
    
    return head->next;
}
