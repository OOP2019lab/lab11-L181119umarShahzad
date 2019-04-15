#include"Header2.h"

student::student (string fname,string lname,int age,float cgpa):person(fname,lname,age)
{
	cout<<"overloaded constructor was called"<<endl;
	gpa=cgpa;
}

student::~student()
{
	cout<<"destructor was called"<<endl;
}

float student::getgpa()
{
	return gpa;
}

void student::setgpa(float x)
{
	gpa=x;
}

void student::printgpa()
{
	print();
	cout<<"gpa"<<gpa<<endl;
}