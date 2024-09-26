#include<iostream>
#include<cstdlib>
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
    cout<<"Enter your element number:";
    cin>>n;
    node*head=NULL;
    for (int i = 0; i < n; i++)
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
    int search_value;
    cout<<"Enter your searching value:";
    cin>>search_value;
    int count=0;
    node*temp=head;
    while(temp!=NULL)
    {
        if(temp->data==search_value)
        {
            count++;
        }
        temp=temp->link;
    }
    if(count==0)
    {
        cout<<"data not found"<<endl;
    }
    else
    {
        cout<<"data found"<<endl;
    }
}
