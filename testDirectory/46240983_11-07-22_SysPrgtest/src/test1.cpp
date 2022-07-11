
#include <iostream>
#include <sys/types.h>
#include <unistd.h>

using namespace std;

int main(int argc, char**argv)
{
	int N, pid;
        N=atoi(argv[1]);

	pid = fork();

	if(pid == 0)
	{
	  for(int i=0;i<N;i++)
          {
             if(i% 2!=0)  // Printing Odd numbers for Child
             cout<<"I am child :"<<endl;
             cout<<"having Odd numbers:"<<i<<" "<<endl;
//             exit(0);              
	  }
        
        } 
	else
	{
		
             sleep(2); // For context switching 
	     
             for(int j=0;j<N;j++)
            { 
               if(j% 2==0)  // Printing even numbers for Parent
               cout<<"I am Parent:"<<endl;
               cout<<"having even numbers:"<<j<<" "<<endl;
                            
		              	
	     }
        }

//        waitpid();

	return 0;
}

