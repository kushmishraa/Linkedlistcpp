#include<stdio.h>
#include<stdlib.h>
struct node{

        int data;
        struct node * next;


};

struct node * traversal(struct node * head)
{
        while(head->next!=NULL)
            {
                    printf("%d\n",head->data);
                    head=head->next;

            }

}

struct node * insertatbegin(struct node * head, int data)
{
        struct node * ptr ;
        ptr=(struct node *)malloc(sizeof(struct node));
        ptr->data=data;
        ptr->next=head;
        head=ptr;
        return(ptr);

}

struct node * insertatbet(struct node * head, int index,int data){

    int i=0;
    struct node * ptr;
    struct node * p;
    p=head;
    ptr=(struct node *) malloc(sizeof(struct node));

    while(i!=index-1){

            p=p->next;
            i++;

    }

    ptr->next=p->next;
    p->next=ptr;
    ptr->data=data;

    return(head);
}

struct node * insertatend(struct node * head , int data)
{
        struct node * ptr;
        ptr=(struct node *)malloc(sizeof(struct node));
        ptr->data=data;
        struct node * p = head;
        while(p->next!=NULL)
        {
               p=p->next;


        }
        
        p->next=ptr;
        ptr->next=NULL;
        
        return head;
}

void main()
{
        struct node * head;
        struct node * second;
        struct node * third;
        struct node * fourth;

        head=(struct node *)malloc(sizeof(struct node));
        second=(struct node *)malloc(sizeof(struct node));
        third=(struct node *)malloc(sizeof(struct node));
        fourth=(struct node *)malloc(sizeof(struct node));


        head->data=55;
        head->next=second;

        second->data=66;
        second->next=third;

        third->data=77;
        third->next=fourth;

        fourth->data=88;
        fourth->next=NULL;
       
        head=insertatend(head,67);
        traversal(head);


}