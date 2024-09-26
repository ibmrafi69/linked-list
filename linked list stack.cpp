//stack
#include<iostream>
using namespace std;
class node
{
    public:
   int data;
   node*link;
};
node*top=NULL;
void push(int data)
{
    node*nn=new node();
    nn->data=data;
    nn->link=top;
    top=nn;
}
void pop()
{
    node*temp=top;
    if(top==NULL)
    {
        cout<<"stack empty"<<endl;
    }
    else
    {
        cout<<top->data<<endl;
        node*temp=top;
        top=top->link;
        free(temp);
        
    }
}
void print()
{
    if(top==NULL)
    {
        cout<<"stack empty"<<endl;
    }
    else
    { 
    node*temp=top;
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
        cout<<"enter your choice[push][pop][print]:";
        cin>>ch;
        switch (ch)
            {
            case 1:
                {
                    cout<<"Enter your insert data:";
                    cin>>data;
                    push(data);
                    break;
                }
            case 2:
                {
                    pop();
                    break;
                }
                case 3:
                {
                    print();
                    break;
                }
            default:
                {
                    cout<<"Incorrect choice"<<endl;
                }
            }
    }
    return 0;
}

