#include<iostream>

using namespace std;

struct  node
{
    int data;
    struct node * next;

};

struct node * insert(struct node * head){


    
    int data;
    cout<<"enter element :";
    cin>>data;

    if(head->data==0 && head->next==NULL){

        head->data=data;
        return(head);


    }

    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=head;
    head=ptr;

    return(head);


}

void view(struct node * head){


        
    while (head->next!=NULL)
    {
        cout<<head->data<<"-->";
        head=head->next;
    }
    if(head->next==NULL){

                cout<<head->data<<"->";


        }
    
}


struct  node * insertatend( struct node * head) {


struct node * p;
struct node * ptr=(struct node *) malloc(sizeof(struct node));

p=head;
int data;

    if(head->data==0 && head->next==NULL){

        head->data=data;
        return(head);


    }

cout<<"enter element :";
cin>>data;
ptr->data=data;
while (p->next!=NULL)
{

 p=p->next;

 
}
p->next=ptr;
ptr->next=NULL;
return(head);

}

struct node * insertatbet(struct node * head){

    int data,index;
    cout<<"enter element : ";
    cin>>data;
    cout<<"enter index of the node :";
    cin>>index;

    struct node * ptr = (struct node *)malloc(sizeof(struct node));

    ptr=head;
    int i=0;
    cout<<"loading";
    while(i!=index-1){

            cout<<".";
            ptr=ptr->next;    
            i++;

    }

    cout<<"100% \n";

    struct node * p =(struct node *)malloc(sizeof(struct node)) ;
    
    p->data=data;
    p->next=ptr->next;
    ptr->next=p;

    return (head);


}

struct node * delstart( struct node * head){


        if(head->next==NULL){

                cout<<"FAILED! ( last element of the linked list ) \n";


        }

        struct node * ptr = ( struct node *) malloc(sizeof(struct node));
        ptr=head;
        head=head->next;
        free(ptr);
        return (head);
}

struct node * delbet(struct node * head){

int count=0,index,i=0;

    cout<<"enter index of the element ";
    cin>>index;

    struct node * p =(struct node * ) malloc(sizeof(struct node));
    p=head;

    while(p->next!=NULL){

            p=p->next;
            count++;
            if(count==3){
                break;
            }

    }
    cout<<"count="<<count<<"\n";
    if(count<=2){

            cout<<"ERROR less than 3 elements in the list ! \n";
            return(head);


    }

    p=head;

    while(i!=index-1){

            p=p->next;
            i++;


    }


    struct node * ptr=(struct node *)malloc(sizeof(struct node));
    ptr=p->next;
    p->next=ptr->next;
    free(ptr);

    return(head);



}


int main(){
    int ch;
    char ch1;
    struct node * head=(struct node *)malloc(sizeof(struct node));
    head->data=0;
    head->next=NULL;

do{
    cout<<"\n...............Linked list................\n \n";
    cout<<" 1. insert at begining \n 2. view linked list\n 3. delete from start \n 4. insert at end \n 5. insert in between \n 6. deleting a node between \n 7.delete from end \n.........................................\n";
    cin>>ch;
    system("CLS");



    switch(ch){

            case 1:

                    head=insert(head);
                    break;
            case 2:

                    view(head);
                    break;
            case 3:

                    head=delstart(head);
                    break;
        
            case 4:

                    head=insertatend(head);
                    break;
            case 5:

                    head=insertatbet(head);
                    break;

            case 6:

                    head=delbet(head);
                    break;

            case 7:
                    head=delend(head);
                    break;
                    
            default: 
                    cout<<"wrong choice !!";
                    break;



    }

    cout<<"\n do you want to continue ?";
    cin>>ch1;
    system("CLS");

}while (ch1!='n');




}
