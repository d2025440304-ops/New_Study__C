//OJ
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//判断一个链表是否带环

 typedef struct ListNode ListNode;
bool hasCycle(struct ListNode *head) {
    ListNode * slow  = head, * fast = head;
    while(fast && fast ->next)
    {
        fast = fast->next->next;
        slow = slow->next;
        if(slow == fast)
        {
            return true;
        }
    }
    return false;
}