#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *link;
};
void add_a_node(node*head,int data)
{
    node*ptr;
    ptr=head;
    node*temp=new node();
    temp->data=data;
    temp->link=NULL;
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=temp;

}
void after_add_a_node_then_the_linked_list(node*head)
{
    node*p;
    p=head;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->link;
    }
}
int main()
{
    int n;
    cout<<"enter your node number:";
    cin>>n;
    node*head=NULL;
    for(int i=0;i<n;i++)
    {
        int data;
        cout<<"Enter your data:";
        cin>>data;
        node*p=new node();
        p->data=data;
        p->link=NULL;
        node*ptr;
        if(head==NULL)
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
    int data1;
    cout<<"enter your insert data:";
    cin>>data1;
    add_a_node(head,data1);
    after_add_a_node_then_the_linked_list(head);
}
