//链表的复杂拷贝
//深拷贝：拷贝的内容一样，但地址不一样的拷贝
//在每一个节点后都拷贝一个相同的节点，并将拷贝的节点和原来的节点按照顺序连接
//给一个 cur 来扫过每一个节点，然后拷贝新的节点在 cur 后面，cur 更新往后走
//random 的指向，将拷贝的 random 指向被拷贝的 random 的 next ，因为被拷贝的 random
//就是拷贝的 random 相同的节点，而被拷贝的 random 的 next 就是深拷贝过后拷贝节点的正确 random
//最后利用三个指针来还原链表
typedef struct Node Node;
class Solution {
public:
    Node* copyRandomList(Node* head) {
    Node * cur = head;
    while(cur)
    {
        Node * copy =(Node*)malloc(sizeof(Node));
        copy->val = cur->val;
        copy->next = cur->next;
        cur->next = copy;
        cur = copy->next;
    }
    cur = head;
    while(cur)
    {
        Node * copy = cur->next;
        if(cur->random == NULL)
        {
            copy->random = NULL;
        }else{
            copy->random = cur->random->next;
        }
        cur = copy->next;
    }
    cur = head;
    Node * listtail = NULL, * listhead = NULL;
    while(cur)
    {
        Node * copy = cur->next;
        Node * next = copy->next;
        if(listhead == NULL)
        {
            listhead = listtail = copy;
        }else{
            listtail ->next = copy;
            listtail = listtail->next;
        }
        cur->next = next;
        cur = next;
    }
};