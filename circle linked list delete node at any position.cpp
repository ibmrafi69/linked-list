#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node*link;
};
node*head;
int main()
{
    int n;
    cout<<"Enter the number of nodes: ";
    cin>>n;
    node*tail;
    for(int i=1; i<=n; i++)
    {
        int data;
        cout<<"Enter the data for node "<<i<<": ";
        cin>>data;
        node*nn=new node();
        nn->data=data;
        nn->link=NULL;
        if(head==NULL)
        {
            head=nn;
            tail=head;
            tail->link=head;
        }
        else
        {
            tail->link=nn;
            tail=nn;
            tail->link=head;
        }
    }
    node*p=head;
    do
    {
        cout<<p->data<<" ";
        p=p->link;
    }
    while (p!=head);
    cout<<endl;
    int position;
    cout<<"Enter the position of the node to be deleted:";
    cin>>position;
    node*temp=tail;
    node*temp1=tail;
    for(int i=1; i<=position; i++)
    {
        temp1=temp;
        temp=temp->link;
    }
    temp1->link=temp->link;
    free(temp);
    cout<<"after delete node,linked list is:";
    node*x=head;
    do
    {
        cout<<x->data<<" ";
        x=x->link;
    }
    while (x!=head);
    return 0;
}
