#include<iostream>
#include"Header.h"
#include<string.h>
using namespace std;

person::person(string x, string y, int a)
{
	first_name=x;
	last_name=y;
	age=a;
	cout << "overloaded constructor was called"<<endl;
}

person::person()
{
	first_name=" ";
	last_name=" ";
	age=0;
	cout<<"default constructor was called"<<endl;
}

person::~person()
{
	cout<<"destructor was called"<<endl;
}

void person::setfname(string a)
{
	first_name=a;
}

string person::getfname()
{
	return first_name;
}

void person::setlname(string x)
{
	last_name=x;
}

string person::getlname()
{
	return last_name;
}

void person::setage(int x)
{
	age=x;
}

int person::getage()
{
	return age;
}

void person::print()
{
	cout<<"first name:"<<first_name<<endl<<"last name:"<<last_name<<endl<<"age:"<<age<<endl;
} 