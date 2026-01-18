#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int SLDataType;
typedef struct SLList{
    SLDataType data;
    struct SLList *next;
}SLTNode;
//打印
void SLList_print(SLTNode * phead,SLDataType x)
{
    assert(phead);
    while(phead)
    {
        printf("%d->",phead->data);
        phead = phead->next;
    }
    printf("NLLL\n");
}

SLTNode *  SLT_Buy_Node(SLDataType x)
{
    SLTNode * pnewnode = (SLTNode *)maclloc(sizeof(SLTNode));
    if(pnewnode == NULL)
    {
        perror("malloc fail !");
        return ;
    }
    return pnewnode;
}

//尾插
void SLList_Push_Back(SLTNode ** pphead,SLDataType x)
{
    assert(pphead);
    SLTNode * pnewnode = SLT_Buy_Node(x);
    if(*pphead == NULL)
    {
        *pphead = pnewnode;
    }else{  
        SLTNode *pcur = *pphead;
        while(pcur->next)
        {
            pcur = pcur->next;
        }
        pcur->next = pnewnode;
    }
}

//尾删
void SLTPop_Back(SLTNode **pphead)
{
    assert(pphead && *pphead);
    if((*pphead)->next == NULL)
    {
        free(*pphead);
        *pphead = NULL;
    }else{
        SLTNode * ptail = *pphead;
        SLTNode * prev  = *pphead;
        while(ptail->next)
        {
        prev = ptail;
        ptail = ptail->next;
        } 
    free(ptail);
    ptail = NULL;
    prev->next = NULL;
    }
} 