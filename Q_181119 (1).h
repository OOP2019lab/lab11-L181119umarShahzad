#pragma once
#include<iostream>
#include<string>
using namespace std;

class person
{
	string first_name;
	string last_name;
protected:
		int age;
public:
	person(string,string,int);
	person();
	~person();
	void setfname(string);
	string getfname();
	void setlname(string);
	string getlname();
	void setage(int);
	int getage();
	void print();
};