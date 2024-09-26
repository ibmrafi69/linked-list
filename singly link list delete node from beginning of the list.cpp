//delete node beginning of the list
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
    for(int i=0; i<n; i++)
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
    else
    {
        node*temp;
        temp=head;
        head=head->link;
        free(temp);
    }
    cout<<"after delete "<<endl;
    node*ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->link;
    }
    cout<<endl;

}
