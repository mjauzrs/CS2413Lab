/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;           //previous node initialized to NULL
    struct ListNode* ptr = head;            //pointer node to hold current head value

    while(ptr != NULL)                      //run as long as the list isn't empty
    {
        struct ListNode* temp = ptr->next;  //temporary node to save next value
        ptr->next = prev;                   
        prev = ptr;                         //previous node is set to current pointer 
        ptr = temp;                         //current pointer is set to saved next
    }

    return prev;
}
