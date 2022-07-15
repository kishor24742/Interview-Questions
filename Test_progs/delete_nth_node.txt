/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Test program
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void print_list(struct Node* head)
{
    struct Node* temp=head;
    while(temp)
    {
        printf("%d->", temp->data);
        temp=temp->next;
    }
    printf("\n");
}

struct Node* create_node(int data)
{
    struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=data;
    new_node->next=NULL;
    return new_node;
}

int delete_nth_node(struct Node**headref, int pos)
{
    int len=0;
    struct Node* temp= *headref;
    if(temp == NULL)
        return -1;
    while(temp)
    {
        len++;
        temp=temp->next;
    }
    printf("length=%d\n",len);
    if(pos>len)
        return -1;
    else
    {
        int i=0;
        temp=*headref;
        while(i<(pos-1))
        {
            i++;
            temp=temp->next;
        }
        printf("temp=%d\n",temp->data);
        struct Node* temp2;
        temp2=temp->next;
        printf("temp=%d\n",temp2->data);
        temp->next=temp2->next;
        free(temp2);
    }
}

int main()
{
    struct Node* head=create_node(1);
    head->next=create_node(2);
    head->next->next=create_node(3);
    head->next->next->next=create_node(4);
    head->next->next->next->next=create_node(5);
    printf("Deleting nth node\n");
    print_list(head);
    if(delete_nth_node(&head, 3))
        printf("Deleted %d node\n", 3);
    else
        printf("error, cant delete %d node\n", 3);
    print_list(head);
    return 0;
}

