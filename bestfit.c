#include <stdio.h>
#include <stdlib.h>

void bestfit(int no_block,int no_process,int block[],int process[])
{
   int n,i,j;
   for(i=0;i<no_process;i++)
      {
         n=-1;
         for(j=0;j<no_block;j++)
            {
             if(block[j]>=process[i])
                {
                  if(n==-1||block[n]>=block[j])
                    {
                      n=j;
                     }
                 }  
             }
   
     printf("%d\t%d\t%d\t",n+1,process[i],block[n]);
     block[n]=block[n]-process[i];
     printf("%d\n",block[n]);
    }
}


int main()
{
int block_array[30],process_array[30],nblock,nprocess,i;
printf("enter the number of block\n");
scanf("%d",&nblock);
printf("enter the size of blocks\n");
for(i=0;i<nblock;i++)
{
scanf("%d",&block_array[i]);
}


printf("enter the number of process\n");
scanf("%d",&nprocess);
printf("enter the size of process\n");
for(i=0;i<nprocess;i++)
{
scanf("%d",&process_array[i]);
}
printf("blocks\tsize\tmemory\tremaining\n");
bestfit(nblock,nprocess,block_array,process_array);

}
