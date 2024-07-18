#include <iostream>
using namespace std;
class Node{
    public:
     int data;
     Node* left;
     Node* right;
     Node(int val){
        data=val;
        left=NULL;
        right=NULL;

     }
};
void Preorder(Node* root){
    if(root==NULL){
        return ;
    }
cout<<root->data<<" ";
Preorder(root->left);
Preorder(root->right);
}
void Inorder(Node* root){
    if(root==NULL){
        return;
    }
   Preorder(root->left);
   cout<<root->data<<" ";
   Preorder(root->right);
   cout<<endl;
}

void postorder(Node* root){
    if(root==NULL){
        return;
    }
    Preorder(root->left);
    Preorder(root->right);
    cout<<root->data;
    cout<<endl;
}
int CountNodes(Node* root){
    if(root==NULL){
        return 0;
    }
    return CountNodes(root->left)+CountNodes(root->right)+1;
}
int maxHeight(Node* root){
    if(root==NULL){
        return 0;
    }
    return max(maxHeight(root->left),maxHeight(root->right))+1;
}
int sum(Node* root){
    if(root==NULL){
        return 0;
    }
    return sum(root->left)+sum(root->right)+root->data;
}
int sumlevel(Node* root){
    if(root==NULL){
        return 0;
    }
    int sum=root->data;
    int x=sumlevel(root->left);
    int y=sumlevel(root->right);
    if(x!=NULL){
        return root->data+=root->left->data;
    }
    if(y!=NULL){
        return root->data+=root->right->data;
    }
    root->data=sum;
}
int main() {
    Node * root=new Node(31);
    root->left=new Node(20);
    root->right=new Node(34);
    root->left->left=new Node(42);
    root->left->right=new Node(53);
     root->right->left=new Node(26);
      root->right->right=new Node(71);
      Preorder(root);
      Inorder(root);
      postorder(root);
      cout<<CountNodes(root)<<endl;;
      cout<<maxHeight(root)<<endl;;
      cout<<sum(root)<<endl;
     cout<<sumlevel(root);
    return 0;
}