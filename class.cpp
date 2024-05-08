#include<iostream>
using namespace std;

class Addition
{
private : int num1,num2;
public :void getdata();
        void putdata();
};

void Addition::getdata()
{
cout<<"Enter two numbers:"<<endl;
cin>>num1>>num2;
}

void Addition::putdata()
{
cout<<"Addition of"<<num1<<"and"<<num2<<"is:"<<num1+num2;
}

int main()
{
Addition a;
a.getdata();
a.putdata();
}

