#include<iostream>
using namespace std;
struct node//declaration of node
{
    int data;
    node* left;
    node* right;
};
 node *createnode(int data){//createnode function to create new nodes
   node* newnode =new node();
   newnode ->data = data;
   newnode -> left = newnode -> right = nullptr;
   return newnode;
   
 }
int main()
{
    node* root=createnode(1);//for creating a tree
    root->left=createnode(2);//for creating a left branch
    root->right=createnode(3);//for creating a right branch
    root->left->left=createnode(4);//for creating a left branch of the left subtree 
    root->left->right=createnode(5);//for creating a right branch of the left subtree
    root->right->left=createnode(6);//for creating a left branch of the right subtree
    root->right->right=createnode(7);//for creating a right branch of the right subtree
 return 0;
}