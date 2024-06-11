#include<iostream>
using namespace std;

class product{
              public:
                     int prod_id;
                     string prod_name;
                     int stock;
                     int reqstock;
                     float gst;
                     float discount;
                     float product_price;
             };

class productdetail:public product{
                             
                       public:
                             productdetail();
                             
                             void viewproduct();
                             void checkstock();
                               };

class purchased_product:public productdetail{
                        public:
                             void Calculategst();
                             void Calculatediscount();
                             void Calculateprice();
                                 };

productdetail::productdetail()
{
cout<<"Enter the id of product:"<<endl;
cin>>prod_id;
cout<<"Enter the name of the product:"<<endl;
cin>>prod_name;
cout<<"Enter the required stock:"<<endl;
cin>>reqstock;
cout<<"Enter the price of product:"<<endl;
cin>>product_price;
}

void productdetail::viewproduct()
{
cout<<"The id of product is:"<<prod_id<<endl;
cout<<"The name of product is:"<<prod_name<<endl;
cout<<"The product price is:"<<product_price<<endl;
}

void productdetail::checkstock()
{
stock=50;
if(reqstock<=stock)
 {
  cout<<"Stock is available"<<endl;
 }
else
 {
  cout<<"Stock is not available"<<endl;
 }
}

void purchased_product::Calculategst()
{
gst=(product_price/100);
cout<<"Gst on product is 0.01"<<endl;
cout<<"The GST calculated is:"<<gst<<endl;
}

void purchased_product::Calculatediscount()
{
cout<<"Discount on product is 10%"<<endl;
discount=(product_price/10);
cout<<"The discount is:"<<discount<<endl;
}

void purchased_product::Calculateprice()
{
product_price=product_price+gst-discount;
cout<<"The price of 1 "<<prod_name<<"is:"<<product_price<<endl;
product_price=product_price*reqstock;
cout<<"The total price is:"<<product_price<<endl;
}

int main()
{
purchased_product s;
s.viewproduct();
s.checkstock();
cout<<"The product bill is as follows:"<<endl;
s.Calculategst();
s.Calculatediscount();
s.Calculateprice();
}
