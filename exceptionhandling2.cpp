#include<iostream>
#include<string>
using namespace std;

class Person{
       private:
           string Person_name;
           int Person_ID;
       public:
         Person ()
       {
       cout<<"Enter your name:" <<endl;
       getline(cin,Person_name);
       cout<<"Enter your ID:"<<endl;   
       cin>>Person_ID;
       }   
       
     void setname() 
     {
      cout<<"ID of person is:"<<Person_ID<<endl;
      cout<<"Before try block" <<endl;
      try{
      cout<<"Inside try block"<<endl;
      int i, n;
      n=Person_name.length();
      for(i=0;i<n;i++)
      {
       if(isalpha(Person_name[i]))
       {
        cout<<Person_name[i];
       }
       else
       {
        if(Person_name[i]==32)
        {
         cout<<Person_name[i];
        }
        else
        {
        cout<<endl;
        cout<<"After throw never executed!"<<endl;
        throw Person_name[i];
        }
       }
      }
     } 
      catch(char c)
      {
      cout<<"Exception caught"<<endl;
      cout<<"Invalid character "<<c<<" in name.";
      }
     }        
};

int main () 
{
Person p;
p.setname();

}
