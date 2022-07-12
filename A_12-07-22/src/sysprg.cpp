
#include <sysprg.h>

void Employee::getdetail()
{

 cout<<"name:"<<endl;
 cin>>name;
 cout<<"Role:"<<endl;
 cin>>role;
 cout<<"Employee ID:"<<endl;
 cin>>empid;
 cout<<"Salary:"<<endl;
 cin>>salary;
 
}

void Employee::disp()
{

  cout<<name;
  cout<<role;
  cout<<empid;
  cout<<salary;
  cout<<endl;
}
