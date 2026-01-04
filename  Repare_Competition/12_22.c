// int removeElement(int* nums, int numsSize, int val)
// {
//     //定义双指针，一个快指针搜索，一个慢指针被覆盖
//     //在双指针的解题里大多都用的是反面的思想
//     //当 src 指向value 时，src++，会将 value 留下来给dest，当 src 遇到不是 value 时，将 src 的值赋给 dest，也就是将 value 覆盖，这样 dest 加几次，就证明覆盖了几次 value，也就是数组中的真实有效元素
//     int src,dest;
//     while(src < numsSize)
//     {
//         if(nums[src] == val)
//         {
//             src++;
//         }
//         else 
//         {
//             nums[dest] = nums[src];
//             src++;
//             dest++;
//         }
//     }
//     return dest;
// }

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 typedef struct ListNode ListNode;
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) 
{
    //考虑空链表的情况
    if(list1==NULL)//如果 p1 等于空
    return list2;
    if(list2==NULL)
    return list1;
    //双指针
    ListNode *p1 = list1;
    ListNode *p2 = list2;
    //哨兵位
    ListNode * phead,*ptail;
    ptail = phead = (ListNode *)malloc(sizeof(ListNode));
    while(p1 && p2)
    {
        if(p1->val > p2->val)
        {
            ptail->next = p2;
            ptail = ptail->next;
            p2 = p2->next;
        }else{
            ptail->next = p1;
            ptail = ptail->next;
            p1 = p1->next;
        }
    }
    if(p1)//如果p1 不为空
    ptail->next = p1;
    if(p2)
    ptail->next = p2;
    ListNode * ret = phead->next;
    free(phead);
    phead = NULL;
    return ret;
}