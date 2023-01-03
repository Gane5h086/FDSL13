#include<iostream>
#include<string.h>
using namespace std;
 struct node
{    int prn,rollno;
      char name[50];
      struct node *next;
};
class info
{        node *s=NULL,*head1=NULL,*temp1=NULL,*head2=NULL,*temp2=NULL,*head=NULL,*temp=NULL;
        int b,c,i,j,ct;
        char a[20];
        public:
    
            node *create();
            void insertp();
            void insertm();
            void delm();
            void delp();
            void dels();
            void count();
            void display();
}  ;        
node *info::create()
{   node *p=new(struct node);
     cout<<"enter name of student ";
     cin>>a;
     strcpy(p->name,a);
       cout<<"\n  enter prn no. of student \n";
     cin>>b;
     p->prn=b;
     cout<<"enter student rollno";
     cin>>c;
     p->rollno=c;
     p->next=NULL;
     return  p;
  } 
  void info::insertm()
  { 
       node *p=create();
   
     if(head==NULL)
     {    head=p;
     }
    else
    {      temp=head;
          while(temp->next!=NULL)
          {    temp=temp->next;   }
              temp->next=p;
     }        
         
   }
     void info::insertp()
  { 
       node *p=create();
   
     if(head==NULL)
     {    head=p;
     }
    else
    {      temp=head;
            head=p;
              head->next=temp->next;
             
     }        
         
   }
  
   void info::count()
   {      temp=head;    ct=0;
          while(temp->next!=NULL)
          {    temp=temp->next; ct++;   }
             ct++;
             cout<<"  Count of members is:"<<ct;
             
     }
     
   void info::display()
   {          if(head==NULL)
               {    cout<<"linklist is empty";
                }
              else
              {   
                temp=head;
                          cout<<"     prn     rolln0    NAME   \n";
                          while(temp->next!=NULL)
                          {     cout<<"    \n"<<temp->prn<<"    "<<temp->rollno<<"    "<<temp->name;
                                temp=temp->next;
                          }
                         cout<<"    "<<temp->prn<<"    "<<temp->rollno<<"    "<<temp->name;
               }     
  }
   
  int main()
  { info s;
  int i;
   
          char ch;
       do{
          cout<<"\n choice the options";
          cout<<"\n  1. To insert president   ";
          cout<<"\n  2. To insert member   ";
          cout<<"\n  3. To insert secretary ";
          cout<<"\n  4. Count of members";
          cout<<"\n  5. To display data   ";
          cin>>i;
         switch(i)
         {        case 1:   s.insertp();
                                  break;
                  case 2:   s.insertm();
                                  break;
                  case 3:   s.insertm();
                                  break;
                  
                  case 4:   s.count();
                                  break;
                  case 5:   s.display();   
                                  break;
                                                     
                  default:  cout<<"\n unknown choice";
          }
            cout<<"\n do you want to continue enter y/Y \n";
            cin>>ch;
       
       }while(ch=='y'||ch=='Y');                                                                                                   
                     
   return 0;
 } 

