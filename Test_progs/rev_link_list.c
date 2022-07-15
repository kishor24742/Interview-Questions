/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
} Node;

void print_list(Node* head)
{
    while(head)
    {
        printf("%d->",head->data);
        head=head->next;
    }
    printf("NULL\n");
}

Node* creat_list(Node**headref, int n_node)
{
    Node* temp=*headref;
    int data;
    for(int i=0; i<n_node; i++)
    {
        printf("Enter data\n");
        scanf("%d", &data);
        Node* new_node=(Node*)malloc(sizeof(Node));
        new_node->data=data;
        new_node->next=NULL;
        if(temp==NULL)
        {
            *headref=new_node;
            temp=*headref;
        }
        else if(temp && (temp->next==NULL))
        {
            temp->next=new_node;
            temp=new_node;
        }
    }
}

void rev_list(Node**head)
{
    Node *prev=NULL, *next=NULL, *curr=*head;
    while(curr)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    *head=prev;
}

int main()
{
    Node* head=NULL;
    int n_node;
    printf("Enter the no.of nodes\n");
    scanf("%d",&n_node);
    creat_list(&head, n_node);
    print_list(head);
    rev_list(&head);
    print_list(head);
    return 0;
}
