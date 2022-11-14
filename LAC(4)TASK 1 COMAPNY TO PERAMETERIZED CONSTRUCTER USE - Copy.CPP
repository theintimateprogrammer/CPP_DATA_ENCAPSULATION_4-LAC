#include <iostream>
using namespace std;
 
class cafe{
  
    int id;
	char name[100];
	char type[50]; 
	int rate;
	char location[20];
	int year;
	int staff;
	int j,n;
	
	public:
	cafe();
	    
	void getdata();
};
	
 
    cafe::cafe()
    {
      cout<<"enter no of cafe:";
      cin>>n;
      for(j=1;j<=n;j++){
      
       cout<<"enter the cafe id:";
       cin>>id;
	   cout<<"enter the  is cafe Name:";
       cin>>name;
       cout<<"enter the  is cafe type:";
       cin>>type;
       cout<<"enter the  is cafe rate:";
       cin>>rate;
       cout<<"enter the  is cafe location:";
       cin>>location;
       cout<<"enter the  is cafe establishedyear:";
       cin>>year;
       cout<<"enter the  is cafe staffquantity:";
       cin>>staff;
       
       cout<<endl<<endl;
       
    }
}
    
    
    void cafe ::getdata(){
        cout<<endl;
        cout<<endl;
        
        cout<<"information of cafe :"<<endl<<endl;
          for(j=1;j<=n;j++){
          cout<<"cafeid:"<<id<<endl;
          cout<<"cafename:"<<name<<endl;
          cout<<"cafetype:"<<type<<endl;
          cout<<"caferateingstar:"<<rate<<endl;
          cout<<"cafelocation:"<<location<<endl;
          cout<<"cafeestablishedyear:"<<year<<endl;
          cout<<"cafestaffquantity:"<<staff<<endl<<endl;
            
            
            
        }
    }
    int main(){
        
        cafe c1;
        c1.getdata();
        return 0;
    }
 
