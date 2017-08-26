#include <stdio.h>
#include <stdlib.h>
struct list{
	int data;
	struct list *next;
};

struct list *insert(struct list *head,int ele){
	struct list *temp,*temp2;
	temp=(struct list *)malloc(sizeof(temp));
	temp->data=ele;
	temp->next=NULL;
	if(head==NULL){
		head=temp;
	}
	else{
		for(temp2=head;temp2->next!=NULL;temp2=temp2->next);
		temp2->next=temp;
	}
	return head;
}

void display(struct list *head){
	struct list *temp=head;
	for(;temp!=NULL;temp=temp->next){
		printf("%d ",temp->data);
	}
	printf("\n");
}

struct list *sort(struct list *head){
	struct list *ptr1,*ptr2;
	int temp;
	for(ptr1=head;ptr1->next!=NULL;ptr1=ptr1->next){
		for(ptr2=head;ptr2->next!=NULL;ptr2=ptr2->next){
			if(ptr2->data>ptr2->next->data){
				temp=ptr2->data;
				ptr2->data=ptr2->next->data;
				ptr2->next->data=temp;
			}
		}
	}
	return head;
}

int main(){
	struct list *head=NULL;
	int n,i,dta;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&dta);
		head=insert(head,dta);
		//printf("%d",head->data);
	}
	head=sort(head);
	display(head);
	return 0;
}
