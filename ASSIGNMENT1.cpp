#include<iostream>
using namespace std;
class student
  {
    private:
   
   string div;
   string prn;
   float sgpa;
   float cgpa;
   
   public:
   int rollno;
   string name;
   void input()
   {
    cout<<"\n";
    cout<<"Enter the Name :";
    cin>>name;
    cout<<"Enter the div :";
    cin>>div;
    cout<<"Enter the prn:";
    cin>>prn;
    cout<<"Enter your last Sem SGPA :";
    cin>>sgpa;
    cout<<"Enter your last year CGPA :";
    cin>>cgpa;
     cout<<"Enter the Roll Number:";
    cin>>rollno;

}
    void display()
   {
   
    cout<<" The Name :"<<name<<"\n";
    cout<<" The div :"<<div<<"\n";
    cout<<" The prn:"<<prn<<"\n";
    cout<<" Your last Sem SGPA :"<<sgpa<<"\n";
    cout<<" Your last year CGPA :"<<cgpa<<"\n";
    cout<<"Roll No :"<<rollno<<"\n\n";
   }
  };
  
 
int main()
{
    int  n;
    cout<<"Enter the no. of Student you want to Enter (The Member Should Be more than 15 or atleast 15):";
    cin>>n;
    if(n>=15)
    {
    int data;
	 cout<<"Enter 1 for arranging the students data in accending order according their rollno :\nEnter 2 for arranging the students data in alphabetical manner :";
	 cin>>data;
	 
	 
    student a[n];
    student b;
     
     for(int i=0;i<n;i++)
      {
        a[i].input();
      }
    if(data==1)
    {
	
    for(int i=1;i<n;i++)
      {
          int j=i-1;
          b =a[i];
          while(j>=0 && a[j].rollno>b.rollno)
          {
              a[j+1]=a[j];
              j=j-1;
          }
          a[j+1]=b;
         
      }
       cout<<"\n"<<"\t***THE DATABASE IS SORTED BY ROLL NUMBER :***\n";
       for(int i=0;i<n;i++)
	  {

	  		a[i].display();
	
	 }
   }
      //part 2
   else
   {
	 
      int gap=n/2;
      while(gap>=1)
      {
      	for(int j=gap;j<n-1;j++)
      	  {
      	  	for(int i=j-gap;i>=0;i=i-gap)
      	  	{
      	  		if(a[i].name>a[i+gap].name)
      	  		{
      	  		   student temp=a[i];
      	  		   a[i]=a[i+gap];
      	  		   a[i+gap]=temp;
      	  		//	swap(c[i],c[i+gap]);
					}
				}
			}
		gap=gap/2;
	  }
      cout<<"\n"<<"\t***THE DATABASE IS  ALPHABETICALLY SORTED:***\n";
    for(int i=0;i<n;i++)
	  {

	  		a[i].display();
	
		}
   }
   }
else
   {
     cout<<"*****************Wrong Data*********************";	
   }
}




