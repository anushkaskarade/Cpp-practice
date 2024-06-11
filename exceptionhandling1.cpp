#include<iostream>
using namespace std;

class Date{
      private:
             int day;
             int month;
             int year;
      public:
         Date()
         {
          cout<<"Enter the date:"<<endl;
          cin>>day;
          cout<<"Enter the month:"<<endl;
          cin>>month;
          cout<<"Enter the year:"<<endl;
          cin>>year;
         } 
        int setdate()    
        {
         cout<<"Before try block"<<endl;
         try
         {
         cout<<"Inside try block"<<endl;
         if(31<day || day<=0 )
         {
          cout<<"After throw never executed!"<<endl;
          throw day;
         }
         else if(12<month || month<=0)
         {
         cout<<"After throw never executed!"<<endl;
         throw month;
         }
         else if(year==0)
         {
         cout<<"After throw never executed!"<<endl;
         throw year;
         }
         else if(29<day<=31 && month==2)
         {
         cout<<"After throw never executed!"<<endl;
         throw day;
         }
         else
         {
         cout<<"Date is "<<day<<"/"<<month<<"/"<<year<<endl;
         }
         }
         
        catch(int day)
        {
        cout<<"Exception caught\n"<<endl;
        }
        
        return 0;
        }

      };


int main()
{
Date d;  
d. setdate();
}
