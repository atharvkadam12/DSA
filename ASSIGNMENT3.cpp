#include <iostream>
using namespace std;

class song {
public:
    string music;
    song* add;
    song() {
        music= "0";
        add = NULL;
    }
    song(string d) {
        music= d;
        add = NULL;
    }
};

class playlist {
public:
    song* head;
    playlist() {
        head = NULL;
    }
    void insert_start(string d);
    void insert_end(string d);
    void insertatpostion(string d);
    void search(string d);
    void deleteatstart();
    void deleteatend();
    void deletebet(string d);
    void print();
};

void playlist::insert_start(string d) {
    song* nm = new song(d);
    if (head != NULL) {
        nm->add = head;
        head = nm;
    } else {
        head = nm;
    }
}

void playlist::insert_end(string d) {
    song* nm = new song(d);
    if (head == NULL) {
        head = nm;
    } else {
        song* temp = head;
        while (temp->add != NULL) {
            temp = temp->add;
        }
        temp->add = nm;
    }
}
void playlist::deleteatstart()
  {
    if (head == NULL) {
        return;
      }
      else
        {
        	song*todelete=head;
        	head=head->add;
        	delete todelete;
		}
  }
void playlist::deletebet(string d)
        {
           	
        	if(head==NULL)
        	   {
        	   	cout<<"Empty list";
			   }
			else
			   {
			   	 song*bet=head;
			   	while(bet->add->music!=d)
			   	  {
			   	  	bet=bet->add;
					 }
					song*deletes=bet->add;
					bet->add=bet->add->add;
					delete deletes;
			   }
		}
void playlist::insertatpostion(string d)
        {
        	song*ne=new song(d);
        	if(head==NULL)
        	  {
        	  	head=ne;
			  }
			else
			  {
			  	song*temp=head;
			  	while(temp->add!=NULL)
			  	 {
			  	 	temp=temp->add;
				 }
				 temp->add=ne;
			  }
		}
void playlist::deleteatend()
     {
     	
    if (head == NULL) {
    
        return;
    }
    if (head->add == NULL) {
        delete head;
        head = NULL;
        return;
    }
    song*temp = head;
    while (temp->add->add != NULL) {
        temp = temp->add;
    }
    delete temp->add;
    temp->add = NULL;
}
void playlist::search(string d)
    {
    	if(head==NULL)
    	 {
    	 	return;
		 }
		 else
		  {
		  	song*temp=head;
		  	while(temp->add->music !=d)
		  	 {
		  	 	temp=temp->add;
			}
			temp=temp->add;
			if(temp->add->music==d)
			   {
			   	cout<<"The song is found ";
			   }
			else
			   {
			   	cout<<"The song is not found";
			   }
		  }
	}
void playlist::print() {
    if (head == NULL) {
        cout << "**************List is empty**************";
        return;
    }
    cout << "Displaying playlist :" << endl;
    song* temp = head;
    while (temp->add != NULL) {
        cout << temp->music << "  ";
        temp = temp->add;
    }
    cout << temp->music;
}


int main() {
    playlist list;
    int a=0;
    while(a==0)
    {
        int n;
        cout << "********press 1 create playlist ********\n********press 2 to insert song at top ********\n********press 3 to insert song at end********\n ********press 4 to Delete song at top ********\n*******Press 5 to Delete song in between******\n******Press 6 to insert in between******\n*******Press 7 to Delete the song at end*******\n*******Press 8 search the element*******";
        cin >> n;
        if (n == 1) {
            cout << "*********** playlist is created ***********\n";
        }
        if (n == 2) {
            int a;
            cout << "Enter how much songs you want to include :";
            cin >> a;
            for (int i = 0; i < a; i++) {
                string var;
                cout << "Enter the song name :";
                cin >> var;
                list.insert_start(var);
            }
            list.print();
        }
        else if (n == 3) {
            int b;
            cout << "Enter how much songs you want to include :";
            cin >> b;
            for (int i = 0; i < b; i++) {
                string var1;
                cout << "Enter the song name :";
                cin >> var1;
                list.insert_end(var1);
            }
            list.print();
         }
        else if(n==6)
          {
          	string d;
          	cout<<"Enter the song you want to insert :";
            cin >> d;
            
		  }
          else if(n==5)
        {
        	string d;
          cout<<"Enter the song want to Delete:";
          cin>>d;
        	list.deletebet(d);
		}
        else if(n==4)
          {
          	list.deleteatstart();
		  }
		else if(n==7)
		{
			list.deleteatend();
		}
		else if(n==8)
        {
        	string d;
        	cout<<"Enter the song you want to search:";
        	cin>>d;
        	list.search(d);
		}
        
		  cout<<"\nEnter 1 to stop and 0 to continue :";
		  cin>>a;
        }
   return 0;
}
