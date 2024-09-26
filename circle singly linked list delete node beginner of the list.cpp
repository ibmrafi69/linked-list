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
    cout<<"Enter the number of nodes you want to create: ";
    cin>>n;
    node*tail;
    for(int i=1;i<=n;i++)
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
    } while (p!=head);
    cout<<endl;
    node*temp=head;
    head=head->link;
    free(temp);
    tail->link=head;
    cout<<"after delete"<<endl;
    node*x=head;
    do
    {
        cout<<x->data<<" ";
        x=x->link;
    } while (x!=head);
    
    
}