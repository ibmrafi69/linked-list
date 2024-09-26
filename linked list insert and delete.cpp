#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *link;
};
void insert_beginning_of_the_list(node*head,int data)
{
    node*temp=new node();
    temp->data=data;
    temp->link=head;
    head=temp;
}
void insert_end_of_the_list(node*head,int data)
{
    node*temp=new node();
    temp->data=data;
    temp->link=NULL;
    node*ptr=head;
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=temp;

}
void insert_any_position_of_the_list(node*head,int data,int position)
{
    node*ptr=new node();
    ptr->data=data;
    ptr->link=NULL;
    node*temp=head;
    while(position!=1)
    {
        temp=temp->link;
        position--;
    }
    ptr->link=temp->link;
    temp->link=ptr;
}
void delete_beginning_of_the_list(node*head)
{
    if(head==NULL)
    {
        cout<<"Link list already empty."<<endl;
    }
    else
    {
        node*temp;
        temp=head;
        head=head->link;
        free(temp);
        temp=NULL;
    }
}
void delete_end_of_the_list(node*head)
{
    if(head==NULL)
    {
        cout<<"Link list already empty."<<endl;
    }
    else
    {
        node*temp=head;
        node*temp2=head;
        while(temp->link!=NULL)
        {
            temp2=temp;
            temp=temp->link;
        }
        temp2->link=NULL;
        free(temp);
        temp=NULL;
    }
}
void delete_at_any_position(node*head,int position)
{
    if(head==NULL)
    {
        cout<<"Link list already empty."<<endl;
    }
    else
    {
        node*current=head;
        node*previous=head;
        while(position!=1)
        {
            previous=current;
            current=current->link;
            position--;
        }
        previous->link=current->link;
        free(current);
        current=NULL;
    }
}
void print(node*head)
{
    node*p=head;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->link;
    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter your element number:";
    cin>>n;
    node*head=NULL;
    for(int i=0; i<n; i++)
    {
        int data;
        cout<<"Enter your data:";
        cin>>data;
        node*p=new node();
        p->data=data;
        p->link=NULL;
        node*ptr;
        if (head==NULL)
        {
            head=p;
            ptr=head;
        }
        else
        {
            ptr->link=p;
            ptr=p;
        }

    }
    node*p=head;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->link;
    }
    cout<<endl;
    int position;
    int data;
    int ch;
    while(1)
    {
        cout<<"Enter your choice[1.insert beginning][2.insert end][3.insert any position][4.delete beginning][5.delete end][6.delete any position]:";
        cin>>ch;
        switch (ch)
        {
        case 1:
        {
            cout<<"Enter your insert data:";
            cin>>data;
            insert_beginning_of_the_list(head,data);
            print(head);
            break;
        }
        case 2:
        {
            cout<<"Enter your insert data:";
            cin>>data;
            insert_end_of_the_list(head,data);
            print(head);
            break;
        }
        case 3:
        {
            cout<<"Enter your insert data:";
            cin>>data;
            cout<<"Enter your position:";
            cin>>position;
            insert_any_position_of_the_list(head,data,position);
            print(head);
            break;
        }
        case 4:
        {
            delete_beginning_of_the_list(head);
            print(head);
            break;
        }
        case 5:
        {
            delete_end_of_the_list(head);
            print(head);
            break;
        }
        case 6:
        {
            cout<<"Enter your position:";
            cin>>position;
            delete_at_any_position(head,position);
            print(head);
            break;
        }
        default:
        {
            cout<<"incorrect choice!!!!"<<endl;
        }
        }
    }
}
