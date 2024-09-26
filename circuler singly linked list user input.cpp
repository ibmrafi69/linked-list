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
    cout<<"Enter your node number:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int data;
        cout<<"Enter your data for "<<i<<"  node:";
        cin>>data;
        node*nn=new node();
        nn->data=data;
        nn->link=NULL;
        node*temp;
        if(head==NULL)
        {
            head=nn;
            temp=head;
            temp->link=head;
        }
        else
        {
            temp->link=nn;
            temp=nn;
            temp->link=head;
        }
    }
    node*p=head;
    do
    {
        cout<<p->data<<" ";
        p=p->link;
    } while(p!=head);
}