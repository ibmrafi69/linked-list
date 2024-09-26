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
    cout<<"Enter the number of nodes: ";
    cin>>n;
    node*head=NULL;
    for(int i=1;i<=n;i++)
    {
        int data;
        cout<<"Enter the data for node "<<i<<": ";
        cin>>data;
        node*nn=new node();
        nn->data=data;
        nn->link=NULL;
        node*temp;
        if(head==NULL)
        {
            head=nn;
            temp=head;
        }
        else
        {
            temp->link=nn;
            temp=nn;
        }
    }
    node*p=head;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->link;
    }
    cout<<endl;
    int dataa;
    cout<<"Enter your insert data:";
    cin>>dataa;
    node*nn=new node();
    nn->data=dataa;
    nn->link=head;
    head=nn;
    node*x=head;
    while(x!=NULL)
    {
        cout<<x->data<<" ";
        x=x->link;
    }
    return 0;
}
