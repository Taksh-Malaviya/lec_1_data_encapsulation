/*1. WAP to get and display 5 Students information using
encapsulation by including below mentioned
attributes:
- stu_id
- stu_name
- stu_age
- stu_course
- stu_email
- stu_city
- stu_college*/
#include<iostream>

using namespace std;

class Student {
	private :
		int id;
		char name[100];
		int age;
		char cource[100];
		char email[100];
		char city[100];
		char collage[100];
	
		public :
		void setdata(){
				cout<<"ENTER ID : "<<endl;
				cin>>id;
				cout<<"ENTER NAME : "<<endl;
				cin>>name;
				cout<<"ENTER AGE : "<<endl;
				cin>>age;
				cout<<"ENTER COURCE : "<<endl;
				cin>>cource;
				cout<<"ENTER E-MAIL : "<<endl;
				cin>>email;
				cout<<"ENTER CITY : "<<endl;
				cin>>city;
				cout<<"ENTER COLLAGE : "<<endl;
				cin>>collage;
			
		}

		void gatdata(){
				cout<<"ID IS = "<<id<<endl;	
					cout<<"NAME IS = "<<name<<endl;
						cout<<"AGE IS = "<<age<<endl;
							cout<<"COURCE IS = "<<cource<<endl;
								cout<<"E-MAIL IS = "<<email<<endl;
									cout<<"CITY IS = "<<city<<endl;		
										cout<<"COLLAGE IS = "<<collage<<endl;									
		}		
	};
		
		int main(){
			
			Student s1,s2,s3,s4,s5;
		
			s1.setdata();
			s1.gatdata();
			s2.setdata();
			s2.gatdata();
			s3.setdata();
			s3.gatdata();
			s4.setdata();
			s4.gatdata();
			s5.setdata();
			s5.gatdata();
			
			return 0;
		}

