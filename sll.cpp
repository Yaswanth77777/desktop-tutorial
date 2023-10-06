#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL,*p,*t=NULL,*j=NULL;
void creation()
{
    
    int n,i;
    cout<<"enter number of elements:";
    cin>>n;
    cout<<"enter elements :"<<endl;
    for(i=1;i<=n;i++)
    {
        p= (struct node *)malloc(sizeof(struct node));
        cin>>p->data;
        p->next=NULL;

        if(head==NULL)
        {
            head=p;
        }
        else{
            t=head;
            while(t->next!=NULL)
            {
                t=t->next;
            }
            t->next=p;
        }
  

    }
          j=head;
        while(j!=NULL)
        {
            cout<<j->data<<endl;
            j=j->next;
        }
}
void insertion()
{
 struct node *q;
q=(struct node *)malloc(sizeof(struct node));
cout<<"enter new node data : ";
cin>>q->data;
q->next=NULL;
    int opt;
    cout<<"enter insert option : ";
    cin>>opt;
    switch(opt)
    {
        case 1:
        q->next=head;
        head=q;
        break;


        case 2:
       t=head;
       while(t->next!=NULL)
       {
        t=t->next;
       }
       t->next=q;
       break;


       case 3:
       int pos,i=1;
       cout<<"enter position : ";
       cin>>pos;
       t=head;
       j=head;
       while(i<=pos)
       {
        j=t;
        t=t->next;
        i++;
       }
       j->next=q;
       q->next=t;
        break;


    }
    cout<<"elements after insertion are :"<<endl;
       t=head;
while(t!=NULL)
{
    cout<<t->data<<endl;
    t=t->next;
}
}
void deletion()
{
    int option,i;
    cout<<"enter delete option : ";
    cin>>option;
    t=head;
    switch (option)
    {
        case 1:
        head=t->next;
        free(t);
        break;

        case 2:
        while(t->next!=NULL)
        {
            j=t;
            t=t->next;
        }
        j->next=NULL;
        free(t);
        break;

        case 3:
        int position,i=1;
        cout<<"enter position' : ";
        cin>>position;
        while(i<position)
        {
            j=t;
            t=t->next;
            i++;
        }
        if(position==1)
        {
            head=t->next;
        }
        else
        {
        j->next=t->next;
        }
        cout<<t->data<<" is deleted"<<endl;
        free(t);
        break;
    }
         t=head;
         cout<<"elements after deletion:"<<endl;
while(t!=NULL)
{
    cout<<t->data<<endl;
    t=t->next;
}
}
int main()
{
   
creation();
insertion();
deletion();

}