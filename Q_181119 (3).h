#include<iostream>
#include<string>
#include"Header.h"
using namespace std;
class student:public person
{
	float gpa;
public:
	student(string,string,int,float);
	student();
	~student();
	float getgpa();
	void setgpa(float);
	void printgpa();
};