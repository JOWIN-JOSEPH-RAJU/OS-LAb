// run this program only on unix based systems
//fork() is only available on them
//or use online compaliers 
#include <stdio.h>
#include <unistd.h>     //header file containing fork() function

int main()
{
	int pid;
	pid = fork();//for function returns prosess_id
	if(pid==0)//if process_id=0 it is child  process
	    {
	     printf("child process executed\n");
		}
	else if(pid>0)//if process_id>0 it is parent process
	   {
		printf("parent process executed\n");
	   }
	else//if process_id<0 some error has occured
	{
	    printf("error occured");
	}
}

		 
	
