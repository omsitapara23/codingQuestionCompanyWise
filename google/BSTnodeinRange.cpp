#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

struct node
{
    int data;
    struct node *left, *right;
};
  
// A utility function to create a new BST node
struct node *newNode(int item)
{
    struct node *temp =  (struct node *)malloc(sizeof(struct node));
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}
  
// A utility function to do inorder traversal of BST
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d \n", root->data);
        inorder(root->right);
    }
}
  
/* A utility function to insert a new node with given data in BST */
struct node* insert(struct node* node, int data)
{
    /* If the tree is empty, return a new node */
    if (node == NULL) return newNode(data);
 
    /* Otherwise, recur down the tree */
    if (data < node->data)
        node->left  = insert(node->left, data);
    else if (data > node->data)
        node->right = insert(node->right, data);   
 
    /* return the (unchanged) node pointer */
    return node;
}


int getCountOfNode(struct node *root, int l, int h)
{
  // your code goes here   
    struct node* trev = root;
    int low = 1, high = 1;
    int count = 0;
    while()

}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int data;
        int l,r;
        cin >> l >> r;
        struct node* start = NULL;
        for(int i = 0; i < n; i++)
        {
            cin >> data;
            start = insert(start, data);
        }



    }
    return 0;
}