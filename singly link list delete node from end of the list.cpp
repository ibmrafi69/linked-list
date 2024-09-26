//delete node end of the list
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
    cout<<"Enter your node numner:";
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
    if(head==NULL)
    {
        cout<<"linked list already empty"<<endl;
    }
    else if(head->link==NULL)
    {
        free(head);
        head=NULL;
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
    cout<<"After delete node"<<endl;
    node*ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->link;
    }
    return 0;
}