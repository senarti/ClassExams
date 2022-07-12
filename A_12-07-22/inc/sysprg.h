//header file
#pragma once 

#include <iostream>
#include <cstring>
#include <vector>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fstream>



using namespace std;

class Employee{

private:

string name;
string role;
int empid;
float salary;

public:

Employee(string n,string r,int Id,float s)
{
  name =n;
  role=r;
  empid=Id;
  salary=s;
  

}
 
void getdetail();
 void disp();
};