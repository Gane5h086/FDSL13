#include<iostream>
using namespace std;
struct node
{    int roll;
      struct node *next;
};
class info
{        node *head1=NULL,*temp1=NULL,*head2=NULL,*temp2=NULL,*head=NULL,*temp=NULL,*h1=NULL,*head3=NULL,*temp3=NULL;
        int c,i,f,j,k;
       
        public:
    
            node  *create();
            void insert();
            void vanila();
            void butters();
            void either();
            void both();
            void none();
            void display();
           
            
} ;        
node *info::create()
{   node *p=new(struct node);
     cout<<"enter student rollno";
     cin>>c;
     p->roll=c;
     p->next=NULL;
     return  p;
  } 
  void info::insert()
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
   void info::display()
   {  temp=head;
      while(temp->next!=NULL)
      { cout<<"\n"<<temp->roll;
        temp=temp->next;
      } cout<<"\n"<<temp->roll;
   }
  
    void info::vanila()
    {
       cout<<"enter no. of  students who like vanila";
       cin>>k;
        head=NULL;
       for(i=0;i<k;i++)
       { insert();
         head1=head;
          
       }  display();
        head=NULL;
     }
     void info::butters()
     {
      cout<<"enter no. of students who like butterscotch";
       cin>>j;
       for(i=0;i<j;i++)
       { insert();
         head2=head;
        
       } display();
       head=NULL;
     }
      void info::either()
{    cout<<"students who like either vanila or butterscotch\n";
     temp1=head1;
     while(temp1!=NULL)
     {
       node *p=new(struct node);
       p->roll=temp1->roll;
       p->next=NULL;     
     if(head3==NULL)
     {    head3=p;
     }
    else
    {      temp3=head3;
          while(temp3->next!=NULL)
          {    temp3=temp3->next;   }
              temp3->next=p;
     }
       
       temp1=temp1->next;
     }
     temp2=head2;
     while(temp2!=NULL)
     {    f=0;
         temp1=head1;
         while(temp1!=NULL)
         {
         if(temp2->roll==temp1->roll)
         { f=1;                   }
          temp1=temp1->next;
         } 
       
        
    
     if(f==0)
     {  
         node *p=new(struct node);
       p->roll=temp2->roll;
       p->next=NULL;     
       if(head3==NULL)
        {    head3=p;
        }
       else
       {      temp3=head3;
          while(temp3->next!=NULL)
          {    temp3=temp3->next;   }
              temp3->next=p;
       }
  }
      temp2=temp2->next;     
     }
     temp3=head3;
      while(temp3->next!=NULL)
      { cout<<"\n"<<temp3->roll;
        temp3=temp3->next;
      } cout<<"\n"<<temp3->roll;
}



void info::both()
{
       cout<<"\nstudents who like both vanila and butterscotch\n";
       temp1=head1;
       while(temp1!=NULL)
       { temp2=head2;
         while(temp2!=NULL)
         {  if(temp1->roll==temp2->roll)
             { cout<<"\n"<<temp1->roll;   }
              temp2=temp2->next;
          }
            
            temp1=temp1->next;
        }
        
}
 void info::none()
 {

    cout<<"\nstudents who like neither vanila nor butterscotch\n";
    temp=h1;
       while(temp!=NULL)
       {  temp3=head3;
          f=0;
          while(temp3!=NULL)
          {   if(temp->roll==temp3->roll)
              {  f=1;              }
               temp3=temp3->next;
          } 
         
          if(f==0)
          { cout<<"\n"<<temp->roll;    }
             temp=temp->next;
        }
      
}
 
int main()
  { info s;
  int i;
   
          char ch;
       do{
          cout<<"\n MENU : ";
          cout<<"\n Choose the action";
          cout<<"\n  1. Display Students who like both  ";
          cout<<"\n  2. Display students who like either vanilla or butterscotch";
          cout<<"\n  3. Display students who neither like vanila nor butterscotch";
        
  
          cin>>i;
         switch(i)
         {         
                   case 1:   s.vanila(); 
                                  break;
                   case 2: s.butters();
                                  break;
                   case 3: s.either();
                                  break;
                   case 4: s.both();
                                  break;
                   case 5: s.none();
                                  break;
                  
               
                                        
                  default:  cout<<"\n unknown choice";
          }
            cout<<"\n do you want to continue enter y/n \n";
            cin>>ch;
       
       }while(ch=='y'||ch=='n');   

return 0;
}