#include<iostream>
using namespace std;
class employee
		{
		 public:
      	 string employeename;
      	 int emploslary;
      	 int employeeid;
      	 void input()
      	 	{
      	 		cout<<"\n\nEnter the Name :";
      	 		cin>>employeename;
      	 		cout<<"Enter the salary ";
      	 		cin>>emploslary;
      	 		cout<<"Enter the ID :";
      	 		cin>>employeeid;
			 }
			void display(){
				
			 	cout<<"\n\nEnter the Name :"<<employeename<<"\n";
      	 		cout<<"Enter the salary "<<emploslary<<"\n";
      	 		cout<<"Enter the ID :"<<employeeid<<"\n";
      	 		
			 
			 }
			 int getid(){
			 	return employeeid;
			 }
		};
void quicksort(employee a[],int f,int l){
	
	   if(f<l)
    	{
    	int pivot=f;
	  	int i=f+1;
	  	int j=l;
	  	
    	
    		while(i<=j)
    		  {
    		  	while(a[pivot].employeeid>= a[i].employeeid)
    		  	{
    		  		i++;
				}
				while(a[pivot].employeeid<=a[j].employeeid)
				{
				  	j--;
				}
				if(i<j)
				{
					swap(a[i].employeeid,a[j].employeeid);
				}
				else
					break;
					
			  }
			  swap(a[f].employeeid,a[j].employeeid);
		}
	quicksort(a,f,l);
	quicksort(a,f,l);
	}
	
	
int main()
   {
   	int n;
   	cout<<"Enter the number of Employee  to be Enter  (Atleast 20): ";
   	cin>>n;
   	employee a[n];
   	if(n>=2)
   	{
	   
    	
    	for(int i=0;i<n;i++)
	 		{
	 	   	 a[i].input();
			}
   
    	for(int i=0;i<n;i++)
	 		{
	 	   	 a[i].display();
			}
   }
   else{
       	cout<<"**********Wrong Data *************";
	   }
	   
	   int f,l;
	   f=0;
	   l=n-1;
	quicksort(a,f,l);
	
	
   }
