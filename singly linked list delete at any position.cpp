//delete node at any position
#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*link;
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
    while (p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->link;
    }
    cout<<endl;
    int position;
    cout<<"Enter your position which you want to delete:";
    cin>>position;
    node*current=head;
    node*previous=head;
    if(position==1)
    {
        head=current;
        free(current);
        current=NULL;
    }
    else
    {
        while (position!=1)
        {
            previous=current;
            current=current->link;
            position--;
        }
        previous->link=current->link;
        free(current);
        current=NULL;
    }
    node*x=head;
    while(x!=NULL)
    {
        cout<<x->data<<" ";
        x=x->link;
    }
    return 0;  
}