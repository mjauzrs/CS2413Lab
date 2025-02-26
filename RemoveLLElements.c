/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    
    if(head == NULL)        //if the linked list is empty, exit
        return NULL;
    
    while(head != NULL && head->val == val)  //in case the head contains the given integer
    {
        struct ListNode* temp = head;   //set a new pointer temp to hold value to be deleted
        head = head->next;              //move head to point to next, deleting previous
        free(temp);                     //free previous head 
    }

    struct ListNode* ptr = head;        //pointer to go through list

    while(ptr != NULL && ptr->next != NULL)        //go through the linked list until end
    {
        if(ptr->next->val == val)                  //if the next node contains the value
        {
            struct ListNode* temp = ptr->next;     //set temp to the next node
            ptr->next = ptr->next->next;           //skip over the node to delete
            free(temp);                            //free deleted node
        }
        else
        {
            ptr = ptr->next;                       //move on to the next node
        }
    }

    return head;
    
}
