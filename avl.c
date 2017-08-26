#include <stdio.h>
#include <stdlib.h>

struct node {
	int data = 0;
	int bal = 0;
	int lft = 0;
	int rigt = 0;
	struct node *right = NULL;
	struct node *left = NULL;
	struct node *parent = NULL;
};

struct node *create (struct node *root) {
	root = (struct node *) malloc (sizeof (node));
	return root;
}

void rrotate (struct node *root) {
	root -> left -> parent = root -> parent;
	struct node *temp = 
}

void balance (struct node * root) {
	if (root == NULL) {
		return ;
	}
	if (root -> bal < 2 && root -> bal > -2) {
		balance (root -> parent);
	}
	else {

	}
}

struct node *insert (struct node *root, int new){
	if (root == NULL) {
		root = create (root);
		root -> data = new;
		return root; 
	}
	struct node *temp = root;
	while (1){
		if (temp -> data < temp){
			temp -> rigt = temp -> rgt + 1;
			temp -> bal = temp -> bal - 1;
			if(temp -> right ! = NULL){
				temp = temp -> right;
				continue;
			}
			else {
				struct node *tempp = create (tempp);
				tempp -> data = new;
				tempp -> parent = temp;
				temp -> right =tempp;
				balance (temp);
				break;
			}
		}
		else {
			temp -> lft = temp -> lft + 1;
			temp -> bal = temp -> bal + 1;
			if(temp -> left ! = NULL){
				temp = temp -> left;
				continue;
			}
			else {
				struct node *tempp = create (tempp);
				tempp -> data = new;
				tempp -> parent = temp;
				temp -> left =tempp;
				balance (temp);
				break;
			}
		}
	}
	return root;
}

int main () {
	struct node *root=NULL;
	int ch;
	scanf ("%d",&ch);
	switch (ch) {
		case 1 :
			int new;
			scanf ("%d",&new);
			root = insert (root , new);
			break;
		case 2 :
			traverse (root);
	}
	return 0;
}