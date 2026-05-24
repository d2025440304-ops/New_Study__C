#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <assert.h>
using namespace std;
typedef int BTDataType;

typedef struct BinaryTreeNode
{
  BTDataType data;
  struct BinaryTreeNode * left;
  struct BinaryTreeNode * right;
}Treenode;

typedef struct HeapTree{
    BTDataType * a;
    int size ;
    int capacity;
}HP;

typedef struct BinaryTreeNode * QDatatype;

typedef struct QueueNode
{
  QDatatype data;
  struct QueueNode * next;
}QNode;

//将整个队列用头节点和尾节点管理
typedef struct Queue
{
  QNode * phead;
  QNode * ptail;
  int size;
}Que;

HP &hp;
void AdjustDonw(HP * hp,int parent,int size)
{
    assert(hp);
    while(2*parent+1 > size)
    {
        if(hp->a[parent])
    }
}


Treenode * BuyNode(BTDataType x)
{
  Treenode * NODE =  (Treenode*)malloc(sizeof(Treenode));
  if (NODE == NULL)
  {
    perror("malloc fail");
    exit(1);
  }
  NODE->data = x;
  NODE->left = NODE->right = NULL;
  return NODE;
}

Treenode * CreatBinaryTree()
{
  Treenode* node1 = BuyNode(1);
  Treenode* node2 = BuyNode(2);
  Treenode* node3 = BuyNode(3);
  Treenode* node4 = BuyNode(4);
  Treenode* node5 = BuyNode(5);
  Treenode* node6 = BuyNode(6);
  node1->left = node2;
  node1->right = node4;
  node2->left = node3;
  node4->left = node5;
  node4->right = node6;

  return node1;
}
void PreOrder(Treenode * root)
{
    if(root == NULL)
    {
        cout << "N ";
        return;
    }

    cout << root->data << " ";

    PreOrder(root->left);
    PreOrder(root->right);
}
void InOrder(Treenode * root)
{
    if(root == nullptr)
    {
        cout << "N ";
        return;
    }
    InOrder(root->left);

    cout << root->data << " ";
    
    InOrder(root->right);
}

void QueInit(Que * pq)
{
  assert(pq);
  pq->size = 0;
  pq->phead = pq->ptail = NULL;
}

//尾插
void QuePush(Que * pq,QDatatype x)
{
  //pq是装了头尾节点的结构体，nwenode 是一个节点
  assert(pq);
  QNode * newnode = (QNode *)malloc(sizeof(QNode));
  if (newnode == NULL)
  {
    perror("malloc fail");
    return;
  }
  newnode->next = NULL;
  newnode->data = x;
  if (pq->ptail == NULL)
  {
    pq->phead = pq->ptail = newnode;
  }
  else
  {
    pq->ptail->next = newnode;
    pq->ptail = newnode;
  }
   pq->size++;
}
//队列数量
int Quesize(Que * pq)
{
  assert(pq);
  return pq->size;
}

//头删
void QuePop(Que * pq)
{
  assert(pq);
  assert(pq->size != 0);

  if (pq->phead->next == NULL)
  {
    free(pq->phead);
    pq->phead = pq->ptail = NULL;
  }
  else
  {
    QNode * next = pq->phead->next;
    free(pq->phead);
    pq->phead = next;
  }
  pq->size--;
}

//取队头
QDatatype QueFront(Que * pq)
{
  assert(pq);
  assert(pq->phead);
  return pq->phead->data;
}

//取队尾
QDatatype QueBack(Que *pq)
{
  assert(pq);
  assert(pq->ptail);
  return pq->ptail->data;
}

//判空
bool QueEmpty(Que* pq)
{
  assert(pq);
  return pq->size == 0;
}

//销毁
void QueDestroy(Que * pq)
{
  assert(pq);
  QNode * cur = pq->phead;
  while (cur)
  {
    QNode * next = cur->next;
    free(cur);
    cur = next;
  }
  pq->phead = pq->ptail = NULL;
  pq->size = 0;
}

// // 二叉树结点个数
// int BinaryTreeSize(Treenode * root)
// {
//     if(root == NULL)    return 0;

//     return BinaryTreeSize(root->left) + BinaryTreeSize(root->right) + 1;
// }
// // 二叉树叶子结点个数
// int BinaryTreeLeafSize(Treenode* root)
// {
//     if(root == NULL)    return 0;

//     if(root->left == NULL && root->right == NULL)    return 1;

//     return BinaryTreeLeafSize(root->left) + BinaryTreeLeafSize(root->right);
// }
// // 二叉树第k层结点个数
// int BinaryTreeLevelKSize(Treenode* root, int k)
// {
//     if(root == NULL)    return 0;

//     if(k == 1)  return 1;

//     return BinaryTreeLevelKSize(root->left,k-1) + BinaryTreeLevelKSize(root->right,k-1);
// }
// // 二叉树查找值为x的结点
// Treenode* BinaryTreeFind(Treenode* root, BTDataType x)
// {
//     if(root == NULL)    return NULL;

//     if(root->data == x) return root;

//     Treenode * left = BinaryTreeFind(root->left,x);
//     if(left != NULL)    return left;

//     return BinaryTreeFind(root->right,x);
// }


int Treesize(Treenode * root)
{
    return root == NULL ? 0 : Treesize(root->left)+Treesize(root->right)+1;
}

int Treeleafsize(Treenode * root)
{
    if(root == NULL)    return 0;

    if(root->left == NULL && root->right == NULL)   return 1;

    return Treeleafsize(root->left) + Treeleafsize(root->right);
}

int TreeHeight(Treenode * root)
{
    if(root == NULL)    return 0;

    int left = TreeHeight(root->left);
    int right = TreeHeight(root->right);

    return left > right ? left +1 : right+1;
}

int TreeLevelKsize(Treenode * root,int k)
{
    if(root == 0)   return 0;
    
    if(k == 1)  return 1;
    //第一层的第 k 层，是子树的k-1 层
    return TreeLevelKsize(root->left,k-1) + TreeLevelKsize(root->right,k-1);
}

Treenode * TreeFind(Treenode * root,BTDataType x)
{
    if(root == NULL)    return NULL;

    if(root->data == x)  return root;

    Treenode * left = TreeFind(root->left,x);
    if(left != NULL)
    return left;

    return TreeFind(root,x);
}


void TreeDestroy(Treenode * root)
{
    if(root == NULL)    return ;

    TreeDestroy(root->left); 
    TreeDestroy(root->right);
    free(root);
}

void TreeLevelOrder(Treenode * root)
{
    Que q;
    QueInit(&q);

    if(root)
        QuePush(&q,root);

    while(!QueEmpty(&q))
    {
        Treenode * node = QueFront(&q);
        QuePop(&q);

        cout << node->data << endl;

        if(node->left) 
        QuePush(&q,node->left);
        if(node->right)
        QuePush(&q,node->right);
    }
    QueDestroy(&q);

}

bool CompeletTree(Treenode * root)
{
    Que q;
    QueInit(&q);

    if(root)
    QuePush(&q,root);

    while(!QueEmpty(&q))
    {
        Treenode * front = QueFront(&q);
        QuePop(&q);

        if(front == NULL)
        break;

        QuePush(&q,front->left);
        QuePush(&q,front->right);
    }

    while(!QueEmpty(&q))
    {
        Treenode * front = QueFront(&q);
        QuePop(&q);

        if(front)
        {
            QueDestroy(&q);
            return false;
        }
    }
    QueDestroy(&q);
    return true;
}