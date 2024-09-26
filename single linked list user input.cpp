#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
    int data;
    node *link;
};
node*create_node_in_linked_list(node*head)
{
    int data;
    cout<<"Enter your data:";
    cin>>data;
    node*p=(node*)malloc(sizeof(node));
    p->data=data;
    p->link=NULL;
    node*ptr;
    if(head==NULL)
    {
        head=p;
        ptr=head;
        return head;
    }
    else
    {
        ptr->link=p;
        ptr=p;
        return head;
    }
}
void print_linked_list(node*head)
{
    node*p=head;
    while (p!=NULL)
    {
        cout<<"Element is:"<<p->data<<endl;
        p=p->link;
    }

}
int main()
{
   int n;
   cout<<"Enter your number of node:";
   cin>>n;
   node*head=NULL;
   for (int i = 0; i < n; i++)
   {
     head=create_node_in_linked_list(head);
   }
   print_linked_list(head);

}
