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
    node*tail=new node();
    tail->data=50;
    tail->link=tail;

    node*newp=new node();
    newp->data=55;
    newp->link=tail->link;
    tail->link=newp;

    node*newy=new node();
    newy->data=60;
    newy->link=tail->link;
    tail->link=newy;

    node*newx=new node();
    newx->data=65;
    newx->link=tail->link;
    tail->link=newx;

    node*p=tail->link;
    do
    {
        cout<<p->data<<" ";
        p=p->link;
    }while(p!=tail->link);

    return 0;
}
