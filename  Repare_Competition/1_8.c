/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     struct Node *next;
 *     struct Node *random;
 * };
 */
typedef struct Node Node;
struct Node* copyRandomList(struct Node* head) {
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
    return listhead;
}