#include<iostream>
#include"Header.h"
#include<string>
using namespace std;
class faculty:public person
{
	int no_of_courses;
	int telephone;
public:
	faculty(string,string,int,int , int);
	faculty();
	~faculty();
	int getnoc();
	void setnoc(int);
	int gettele();
	void settele(int);
	void printfaculty();
};
