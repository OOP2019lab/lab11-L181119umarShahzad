#include"Header1.h"

faculty::faculty(string x,string y,int z,int a ,int b):person(x,y,z)
{
	no_of_courses=a;
	telephone=b;
	cout<<"overloaded constructor was called"<<endl;
}

faculty::faculty()
{
	no_of_courses=0;
	telephone=0;
	cout<<"default constructor was called"<<endl;
}

faculty::~faculty()
{
	cout<<"destructor was invoked"<<endl;
}

int faculty::getnoc()
{
	return no_of_courses;
}

void faculty::setnoc(int x)
{
	no_of_courses=x;
}

int faculty::gettele()
{
	return telephone;
}

void faculty::settele(int x)
{
	telephone=x;
}

void faculty::printfaculty()
{
	print();
	cout<<no_of_courses<<endl<<telephone<<endl;
}