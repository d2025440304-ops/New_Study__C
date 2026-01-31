//判断一个链表是否为回文链表
//例如 1 2 3 4 3 2 1
//逆置到中点之前的，然后再从一开始和中点之后的进行比较，如果相同，那就是回文结构
typedef struct Listnode Listnode;
Listnode * listmiddle(Listnode * head)
{
    Listnode * fast = head, * slow = head;
    while(fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
Listnode * reverselist(Listnode * head)
{
    Listnode * p1 = NULL;
    Listnode * p2 = head;
    Listnode * p3 = p2->next;
    while(p2)
    {
        p2->next = p1;
        p1 = p2;
        p2 = p3;
        if(p3)
        p3 = p3->next;
    }
    return p1;//此时p2已经走到空，而 p1 就在链表的最后节点
}

bool check_huiwen(Listnode * A)
{
    Listnode * phead = listmiddle(A);
    Listnode * pcur = reverselist(phead);
    while(pcur && A)
    {
        if(pcur->val != A->val)
        {
            return false;
        }
        pcur = pcur->next;
        A = A->next;
    }

    return true;
}
