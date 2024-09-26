//queue
#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*link;
};
node*front=NULL;
node*rear=NULL;
void enqueue(int data)
{
    node*nn=new node();
    nn->data=data;
    nn->link=NULL;
    if(front==NULL && rear==NULL)
    {
        front=rear=nn;
    }
    else
    {
        rear->link=nn;
        rear=nn;
    }
}
void dequeue()
{
    if(front==NULL && rear==NULL)
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<front->data<<endl;
        node*temp=front;
        front=front->link;
        free(temp);
    }
}
void display()
{
    if(front==NULL && rear==NULL)
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        node*temp=front;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->link;
        }
        cout<<endl;
    }
}
int main()
{
    int data;
    int ch;
    while(1)
    {
        cout<<"Enter your choice:1.enqueue/2.dequeue/3.display:";
        cin>>ch;
        switch (ch)
        {
        case 1:
        {
            cout<<"Enter your data:";
            cin>>data;
            enqueue(data);
            break;
        }
        case 2:
        {
            dequeue();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        default:
        {
            cout<<"Invalid choice"<<endl;
        }
        }
    }
    return 0;
}