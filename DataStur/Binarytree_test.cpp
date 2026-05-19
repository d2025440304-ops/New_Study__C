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


// 二叉树结点个数
int BinaryTreeSize(Treenode * root)
{
    if(root == NULL)    return 0;

    return BinaryTreeSize(root->left) + BinaryTreeSize(root->right) + 1;
}
// 二叉树叶子结点个数
int BinaryTreeLeafSize(Treenode* root)
{
    if(root == NULL)    return 0;

    if(root->left == NULL && root->right == NULL)    return 1;

    return BinaryTreeLeafSize(root->left) + BinaryTreeLeafSize(root->right);
}
// 二叉树第k层结点个数
int BinaryTreeLevelKSize(Treenode* root, int k)
{
    if(root == NULL)    return 0;

    if(k == 1)  return 1;

    return BinaryTreeLevelKSize(root->left,k-1) + BinaryTreeLevelKSize(root->right,k-1);
}
// 二叉树查找值为x的结点
Treenode* BinaryTreeFind(Treenode* root, BTDataType x)
{
    if(root == NULL)    return NULL;

    if(root->data == x) return root;

    Treenode * left = BinaryTreeFind(root->left,x);
    if(left != NULL)    return left;

    return BinaryTreeFind(root->right,x);
}