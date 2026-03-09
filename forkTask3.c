#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
void main()
{
int x;
x=fork();
if(x==0)
{
printf("\n\n Child process starts");
printf("\nProcess pid=%d",getpid());
printf("\nReturned value=%d\n",x);
}
else
{
printf("\n\n Parent process starts");
printf("\nProcess pid=%d",getpid());
printf("\nReturned value=%d\n",x);
}
}
