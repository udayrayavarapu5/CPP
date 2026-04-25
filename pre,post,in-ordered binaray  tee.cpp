#include<iostream>
using namespace std;

class Tree{
   	public:
   		     int data;
		     Tree* left;
		     Tree* right;
   		     Tree(int value){
   		   	 data=value;
   		   	 left=NULL;
   		   	 right=NULL;
			  }
		   void preorderTranseversal(Tree* root){
		   	  if(root){
		   	  	 cout<<root->data<<"->";
		   	     preorderTranseversal(root->left);
		   	     preorderTranseversal(root->right);
				 }
		   }
		   void inorderedTraansversal(Tree* root){
		   	  if(root){
		   	  	   inorderedTraansversal(root->left);
		   	       cout<<root->data<<"->";
		   	       inorderedTraansversal(root->right);
				 }
		   }
		   void postorderTransversal(Tree* root){
		   	if(root){
		   		postorderTransversal(root->right);
		   	    postorderTransversal(root->left);
		   	    cout<<root->data<<"->";
			   }
		   }
};
int main()
{
	Tree*  root=new Tree(5);
	root->left=new Tree(6);
	root->right=new Tree(7);
	root->left->left=new Tree(8);
	root->left->right=new Tree(9);
	root->left->left->left=new Tree(10);
	root->left->left->left=new Tree(10);	
	cout<<"The preorder transversal:";
	root->preorderTranseversal( root);
	cout<<endl;
	cout<<"The inorder transversal:";
	 root->inorderedTraansversal( root);
	cout<<endl;
	cout<<"The postorder transversal:";
	root->postorderTransversal( root);
	return 0;
}
