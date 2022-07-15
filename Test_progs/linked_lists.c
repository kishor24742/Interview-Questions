/************************************************************************
 * Program to Perform on singly Linked List Operations                  *
 * General Operations                                                   *
 *  	1. create                                          				*
 *  	2. print                                           				*
 *  	3. count no. of nodes(length)					                *
 * Insert Operations                                   					*
 *  	1. Insert node at start(before head)               				*
 *  	2. Insert node at end(after tail)                  				*
 *  	3. Insert node after Kth node					                *
 *  	4. Insert node before Kth node					                *
 * Delete Operations                                   					*
 *  	1. Delete node at start(delete head)               				*
 *  	2. Delete node at end(delete tail)                  			*
 *  	3. Delete node after Kth node					                *
 *  	4. Delete node before Kth node					                *
 * Misc Operations					                                    *
 *  	1. reverse                                         				*
 *  	2. sort					                                        *
 ************************************************************************/
  #include <stdio.h>
 #include <stdlib.h>
 
 struct Node
 {
	int data;
	struct Node* next;
 };
 
 void print_list(struct Node *head)
 {
	while(head != NULL)
	{
		printf("%d\t",head->data);
		head=head->next;
	}
	printf("\n");
 }
 
 int get_len(struct Node *head)
 {
	int len=0;
	while(head != NULL)
	{
		len++;
		head=head->next;
	}
	return len;
 }
 
 void insert_at_end(struct Node** headref, int data)
 {
	struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=data;
	temp->next=NULL;
	if ((*headref) == NULL)
	{
		*headref=temp;
	}
	else
	{
		struct Node* last= *headref;
		while(last->next != NULL)
		{
			last=last->next;
		}
		last->next=temp;
	}
	return;
 }
 
 int main()
 {
	 struct Node* first=NULL;
	 struct Node* second=NULL;
	 struct Node* third=NULL;
	 
	 first = (struct Node*)malloc(sizeof(struct Node));
	 second = (struct Node*)malloc(sizeof(struct Node));
	 third = (struct Node*)malloc(sizeof(struct Node));
	 
	 first->data=1;
	 first->next= second;
	 
	 second->data=2;
	 second->next= third;
	 
	 third->data=3;
	 third->next= NULL;
	 
	 print_list(first);
	 printf("defalut list len:%d\n",get_len(first));
	 insert_at_end(&first, 4);
	 insert_at_end(&first, 5);
	 print_list(first);
	 printf("updated list len:%d\n",get_len(first));
	 
	return 0;
 }