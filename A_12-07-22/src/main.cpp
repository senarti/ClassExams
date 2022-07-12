//header file
#include <sysprg.h>
#include <vector>


 int main(int argc , char *argv[])
{	
	vector<Employee*>v;

	
	Employee *E=new Employee("Arti.", "Analyst.", 22, 15000);
	v.push_back(E);

	E=new Employee("john", "SE" ,24 , 20000);
	v.push_back(E);

	E=new Employee("mike"," QA",  26, 25000);
	v.push_back(E);

        E=new Employee("aarya"," Developer",  28, 30000);
	v.push_back(E);
	
	fstream file;
	

	int pid;
	pid=fork();
	if (pid== 0)
	{
		cout<<"child starts"<<endl;
		file.open(argv[1], ios::out);
		vector<Employee*>::iterator itr;

                  for(itr=v.begin();itr!=v.end();itr++)
                 {
                  file<<*itr<<endl;
                  }
  
                  file.close();                
                }
                {
                   cout<<"Child terminates"<<endl;
                }

                {
                 wait((int *)0);
                cout<<"Parent Starts"<<endl;

		ifstream file;
                file.open(argv[1],ios::in); //open a file to perform read operation using file object
               
               if (file.is_open()){   //checking whether the file is open
               
               string line;
               while(file>> line){ //read data from file object and put it into string.
               cout << line<< endl; //print the data of the string
              // }

               // if(v. size() > 0)
               // v. push_back(std::vector<Employee*>&E);
                file.close(); //close the file object.
               }
               }
               
              // delete new(); // Memory de-allocation
              
}
              return 0;
} 
