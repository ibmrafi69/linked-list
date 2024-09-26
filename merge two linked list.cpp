//merge 2 linked list
#include<iostream>
using namespace std;
class node
{
    public:
    int  data;
    node*link;
};
node*MergeTwoNode(node*firstNode,node*secondNode)
{
    node*head=new node();
    node*current=head;
    while(firstNode != NULL && secondNode !=NULL)
    {
        if(firstNode->data <= secondNode->data)
        {
            current->link=firstNode;
            firstNode=firstNode->link;
        }
        else
        {
            current->link=secondNode;
            secondNode=secondNode->link;
        }
        current=current->link;
    }
    if(firstNode != NULL)
    {
        current->link=firstNode;
    }
    else
    {
        current->link=secondNode;
    }
    return head->link;
}
int main()
{
    int n;
    cout<<"Enter the number of nodes you want to create: ";
    cin>>n;
    cout<<"For 1st linked list"<<endl;
    node*firstNode=NULL;
    for(int i=1;i<=n;i++)
    {
        int data;
        cout<<"Enter your data for "<<i<<" number node:";
        cin>>data;
        node*p=new node();
        p->data=data;
        p->link=NULL;
        node*ptr;
        if(firstNode ==NULL)
        {
            firstNode=p;
            ptr=firstNode;
        }
        else
        {
            ptr->link=p;
            ptr=p;
        }
    }
    cout<<"For 2nd linked list"<<endl;
    node*secondNode=NULL;
    for(int i=1;i<=n;i++)
    {
        int data;
        cout<<"Enter your data for "<<i<<" number node:";
        cin>>data;
        node*p=new node();
        p->data=data;
        p->link=NULL;
        node*ptr;
        if(secondNode ==NULL)
        {
            secondNode=p;
            ptr=secondNode;
        }
        else
        {
            ptr->link=p;
            ptr=p;
        }
    }
    cout<<"1st linked list is:";
    node*ptr1=firstNode;
    while(ptr1 !=NULL)
    {
        cout<<ptr1->data<<" ";
        ptr1=ptr1->link;
    }
    cout<<endl;
    cout<<"2nd linked list is:";
    node*ptr2=secondNode;
    while(ptr2 !=NULL)
    {
        cout<<ptr2->data<<" ";
        ptr2=ptr2->link;
    }
    cout<<endl;
    node*head=MergeTwoNode(firstNode,secondNode);
    cout<<"After merge linked list:";
    while(head !=NULL)
    {
        cout<<head->data<<" ";
        head=head->link;
    }
    return 0;
}