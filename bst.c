#include <stdio.h>
#include <stdlib.h>
//yo bro
struct node {
	int data;
	struct node *right;
	struct node *left;
	struct node *parent;
};

struct node *create (struct node *new) {
	new = (struct node *) malloc (sizeof (struct node));
	new -> left = NULL;
	new -> right = NULL;
	new -> parent = NULL;
	return new;
}

struct node *insert (struct node *root, int x) {
	struct node *new = NULL;
	if (root == NULL) {
		new = create (new);
		new -> data = x;
		root =new;
		return root;
	}
	if (root -> data < x) {
		if (root -> right == NULL) {
			new = create (new);
			new -> data = x;
			new -> parent = root;
			root -> right = new;
		}
		else {
			insert (root -> right,x);
		}
	}
	else {
		if (root -> left == NULL) {
			new = create (new);
			new -> data = x;
			new -> parent = root;
			root -> left = new;
		}
		else {
			insert (root -> left,x);
		}
	}
	return root;
}

void print (struct node *root) {
	if (root == NULL) {
		return;
	}
	
	print (root -> left);
	printf ("%d ",root -> data);
	print (root -> right);
}

struct node * search (struct node *root , int x) {
	if (root -> data == x){
		return root;
	}
	if (x > root -> data) {
		return search (root -> right,x); 
	}
	else {
		return search (root -> left,x);
	}
}

struct node *sucessor (struct node *del) {
	struct node *temp;
	temp = del -> right;
	while (temp -> left != NULL) {
		temp = temp -> left;
	}
	if (temp -> right == NULL) {
		temp -> parent -> left = NULL;
	}
	else {
		temp -> right ->parent = temp -> parent;
		temp -> parent -> left = temp -> right;
	}
	temp -> parent = del;
	temp -> right = del -> right;
	temp -> right -> parent = temp;
	del -> right = temp;
	return del;
}

struct node *delete (struct node *root,int x) {
	struct node *del = NULL;
	if (root -> data == x) {
		del = root;
	}
	else {
		del = search (root,x);
	}
	if (del -> right == NULL && del -> left != NULL) {
		if (del -> parent == NULL ) {
			del -> left -> parent = del -> parent;
			root = del -> left;
		}
		else {
			if(x > del -> parent -> data) {
				del -> parent -> right = del -> left;
			}
			else {
				del -> parent -> left = del -> left;
			}
			del -> left -> parent = del -> parent;
		}
	}
	else if (del -> right ==NULL){
		if (del -> parent == NULL) {
			root = NULL;
		}
		else {
			if(x > del -> parent -> data) {
				del -> parent -> right = NULL;
			}
			else {
				del -> parent -> left = NULL;
			}
		}
	}
	
	else {
		if(del -> right -> left != NULL)
		del = sucessor (del);
		del -> right -> parent = del -> parent;
		del -> right -> left =del -> left;
		del -> left -> parent = del -> right;
		if (del -> parent == NULL) {
			root = del -> right;
		}
		else {	
			if(x > del -> parent -> data) {
				del -> parent -> right = del -> right;
			}
			else {
				del -> parent -> left = del -> right;
			}

		}
	}

	free (del);
	return root;
}

int main () {
	struct node *root = NULL;
	int n;
	int i, tmp;
	scanf ("%d",&n);
	
	for (i = 0;i < n;i++) {
		scanf ("%d",&tmp);
		root = insert (root,tmp);
	}
	print (root);
	scanf ("%d",&tmp);
	root = delete (root,tmp);
	print (root);
	return 0;
}
