/*
2. WAP to get and display 5 Customers
information using encapsulation by including
below mentioned attributes:
- cust_id
- cust_name
- cust_age
- cust_telecome_brand_name (like Jio, Airtel, Vi, etc.)
- cust_mobile_number
- cust_city
- cust_simcard_validity (in years)*/

#include<iostream>

using namespace std;

class Customers{
	
	private :
	int id;
	char name[100];
	int age;
	char telecome_brand_name[100];
	int mobile_number;
	char city[100];
	int simcard_validity;
	public:
	void setdata(){
				cout<<"ENTER ID : "<<endl;
				cin>>id;
				cout<<"ENTER NAME : "<<endl;
				cin>>name;
				cout<<"TELECOM_BRAND_DATA : "<<endl;
				cin>> telecome_brand_name;
				cout<<"ENTER MOBILE NUMBER : "<<endl;
				cin>>mobile_number;
				cout<<"ENTER CITY : "<<endl;
				cin>>city;
				cout<<"ENTER SIMCARD VALIDITY : "<<endl;
				cin>>simcard_validity;
	}	
	
	void getdata(){
		
		cout<<"ID IS = "<<id<<endl;
			cout<<"NAME IS = "<<name<<endl;
				cout<<"BRAND IS = "<<telecome_brand_name<<endl;
					cout<<"MOBILE NUMBER IS = "<<mobile_number<<endl;
						cout<<"CITY IS = "<<city<<endl;
							cout<<"VALIDITY IS = "<<simcard_validity<<endl;
		
		
		
	}
	
};


int main(){
	
	Customers c1,c2,c3,c4,c5;
	
	c1.setdata();
	c1.getdata();
		
	c2.setdata();
	c2.getdata();
		
	c3.setdata();
	c3.getdata();
		
	c4.setdata();
	c4.getdata();
		
	c5.setdata();
	c5.getdata();
	
	return 0;
}
