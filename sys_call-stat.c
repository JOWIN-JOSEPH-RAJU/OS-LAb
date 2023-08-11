#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>

int main()
{
	struct stat buff;// the structure stat is already defined the header file 
	                 // we are just using that stat structure in the name buff
    
    stat("./fork.c",&buff);//details of the file fork.c get stored in the 
                           //structure buff.c
	printf("file size %d\n",buff.st_size);
	printf("file block size %d\n",buff.st_blksize);
	printf("file  acess time %d\n",buff.st_atime);
	printf("file  mode %d\n",buff.st_mode);

	}
