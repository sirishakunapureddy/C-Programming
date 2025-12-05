//Binary search tree
#include <stdio.h>
#include <stdlib.h>
struct TreeNode{
	int data;
	struct TreeNode *left;
	struct TreeNode *right;
};
struct TreeNode *CreateAnode(int key){
	struct TreeNode *temp =(struct TreeNode*) malloc(sizeof(struct TreeNode));
	temp->data=key;
	temp->left = temp->right=NULL;
	return temp;
}
struct TreeNode *insert(struct TreeNode *root,int key){
	if(root==NULL) return CreateAnode(key);
	if(root -> data == key) return root;
	if(key<root->data){
		root->left=insert(root->left,key);
	}
	if(key>root->data){
		root -> right=insert(root->right,key);
	}
	return root;
}
void inorder(struct TreeNode *root){
	if(root==NULL) return;
	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);
}
int main(){
	int n,i;
	scanf("%d",&n);
	int nodes[i];
	for(i=0;i<n;i++){
		scanf("%d",&nodes[i]);
	}
	struct TreeNode *root = CreateAnode(nodes[0]);
	for(i=1;i<n;i++){
		root=insert(root,nodes[i]);
	}
	inorder(root);
}
