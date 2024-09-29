#include<iostream>
using namespace std;
class route
	{
		public:
		string data;
		route*next;
	   route(string stop )
	   {
        data=stop;
        next=NULL;
      }
	};
class linked
    {
    	public:
    	void insertstart(route* &head,string stop)
    	    {
    	    
    	      	route*n=new route(stop);
    	      	if(head==NULL)
    	      	{
    	      		head=n;
    	      		n->next=head;
				  }
				  else
				    {   route*temp=head;
				         while(temp->next!=head)
				        {
				        	temp=temp->next;
						}
				    	temp->next=n;
				    	n->next=head;
				    	head=n;
				       
				     }
				     
			}
	    	void insertAtend(route*&head,string stop)
			   {
			   	route*nn=new route(stop);
			   	if(head==NULL)
			   	   {
			   	   	head=nn;
			   	   	nn->next=head;
					}
				else
				   {
				   	route*temp=head;
				   	 while(temp->next!=head)
				   	   {
				   	   	temp=temp->next;
						  }
						temp->next=nn;
						nn->next=head;
						
				   }
			   }
			void insertinbet(route*&head,string stop,string e)
		      {
		      	route*nn=new route(stop);
		      	if(head==NULL)
		      	 {
		      	 	head=nn;
		      	 	nn->next=head;
				   }
				else
				  {
				  	route*temp=head;
				  	while(temp->next->data!=e)
				  	   {
				  	   	temp=temp->next;
						}
					 route*a=temp->next;
					 temp->next=nn;
					 nn->next=a;
				  }
			  }
	     void deletestart(route* &head)
              {
        	
             	if(head==NULL)
        	     {
        	     	cout<<"list is empty";
			     }
		    	else
			     {
			     	route*temp=head;
			     	while(temp->next!=head)
			     	  {
			     	  	temp=temp->next;
					   }
					temp->next=head->next;
					route*todelete=head;
					head=head->next;
					delete todelete;
			    	
			   }
		}
void deletbetween(route* &head,string stop)
        {
           	
        	if(head==NULL)
        	   {
        	   	cout<<"Empty list";
			   }
			else
			   {
			   	 route*temp=head;
			   	while(temp->next->data!=stop && temp->next!=NULL)
			   	  {
			   	  	temp=temp->next;
					 }
					route*deletes=temp->next;
					temp->next=temp->next->next;
					delete deletes;
			   }
		}
 void deleteatend(route *&head)
         {
     	
          if (head == NULL) {
    
              return;
            }
          if (head->next == head) {
               delete head;
               head=head->next;
                return;
            }
           route*temp = head;
         while (temp->next->next!= head) {
               temp = temp->next;
           }
        delete temp->next;
         temp->next = head;
         }
void display(route*head)
		{
			if(head==NULL)
			{
				cout<<"Empty list";
				
			}
			else
			   {
			   	route *temp=head;
			   	while(temp->next!=head)
			   	   {
			   	   	cout<<temp->data;
			   	   	temp=temp->next;
					}
					cout<<temp->data;
			   }
		}
	};
int main()
  {
  	route*head=NULL;
  	
  	linked a;
  	string d;
  	string e;
  	int f;
  	int n;
  	int b=0;
	while(b==0)
   {
  	cout << "\n********press 1 to insert route at start ********\n********press 2 to insert route at end********\n*****Press 3 to insert route in between*****\n*******Press 4 to Delete route in between******\n******press 5 to Delete route at top******\n*******Press 6 to Delete the  route at end*******\n";
    cin >> n;
   if(n==1)
   {
   	cout<<"Enter the no of route you wann enter :";
  	cin>>f;
  	for(int i=0;i<f;i++)
  	   {
  	   	cout<<"Enter the route :";
  	   	 cin>>d;
  	   	a.insertstart(head,d);
	   }
	 a.display(head);
   }
   if(n==2)
    {
     		cout<<"Enter the no of route you wann enter :";
  	    cin>>f;
  	  for(int i=0;i<f;i++)
  	     {
  	   	    cout<<"Enter the route :";
  	   	    cin>>d;
  	   	    a.insertAtend(head,d);
	     }
	  a.display(head);
    }
    if(n==3)
    {
    
	  	cout<<"Enter the no of route you wann enter :";
  	    cin>>f;
     	for(int i=0;i<f;i++)
  	      {
  	   	   cout<<"Enter the route before which you want to insert :";
  	   	    cin>>d;
  	   	    cout<<"Enter the route which you want to insert :";
  	   	    cin>>e;
  	   	    a.insertinbet(head,d,e);
	      }
	 a.display(head);
   }
   if(n==4)
   {
   	cout<<"Enter the route you wan to delete :";
   	cin>>d;
   	a.deletbetween(head,d);
   	a.display(head);
   }
   if(n==5)
    {
     a.deletestart(head);
     a.display(head);
    }
    if(n==6)
    {
      a.deleteatend(head);
      a.display(head);
    }
    cout<<"\nEnter 1 to stop and 0 to continue :";
	cin>>b;
  }
}
