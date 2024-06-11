#include<iostream>
#include<string>
using namespace std;

class Person {
public:   int cust_id;
          int emp_id;
 public:    
      void person_id() 
       {
         cout<<"Enter id of customer:";
         cin>>cust_id; 
         cout<<"Enter the id of employee:";
         cin>>emp_id;
       } 
       
     void displayid()
     {
     cout<<endl;
     cout<<"The id of customer is:"<<cust_id<<endl;
     cout<<"The id of employee is:"<<emp_id<<endl;
     }
          
          
};

class Customer : public Person {
protected:string cname;
         int cust_age;
public:
     
    void putdata()
    {
    cin. ignore () ;
    cout << "Enter the name of the customer:";
    getline(cin, cname);
    cout << "Enter the age of customer:";
    cin >> cust_age;
    }
};

class Employee : public Person {
protected:string ename;
        int emp_age, salary;
        
public:
    int id2=emp_id;
    void putinfo()
    {
    cin. ignore () ;
    cout << "Enter the name of Employee:";
    getline(cin, ename);
    cout << "Enter the age of employee:";
    cin >> emp_age;
    cout << "Enter the salary:";
    cin >> salary;
    }
};

class EmployeeCustomer : public Customer, public Employee {
public:
    void getdata()
    {
    cout<<endl;
    cout << "Here is the information of Customer-" << endl;
    cout << "The name of customer is: "<< cname << endl;
    cout << "The age of customer is: "<< cust_age << endl;
    }
    void getinfo()
    {
    cout <<endl;
    cout << "Here is the information of Employee-" << endl;
    cout << "The name of employee is: " << ename << endl;
    cout << "The age of employee is: " << emp_age << endl;
    cout << "The salary of employee is: " << salary << endl;
    }
};

int main()
{   
    Person p;
    p.person_id() ;
    EmployeeCustomer d;
    d.putdata();
    d.putinfo();
    p.displayid();
    d.getdata();
    d.getinfo();
    return 0;
}
