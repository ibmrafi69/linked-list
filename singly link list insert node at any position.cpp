//insert node at any position
#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *link;
};
int main()
{
    int n;
    cout<<"Enter your node number:";
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
    cout<<"Enter your insert data:";
    cin>>data1;
    int posi;
    cout<<"Enter your position number:";
    cin>>posi;
    node*ptr=new node();
    ptr->data=data1;
    ptr->link=NULL;
    node*temp=head;
    posi--;
    while(posi!=1)
    {
        temp=temp->link;
        posi--;
    }
    ptr->link=temp->link;
    temp->link=ptr;
    cout<<"after insert data"<<endl;
    node*x=head;
    while(x!=NULL)
    {
        cout<<x->data<<" ";
        x=x->link;
    }
    return 0;
}