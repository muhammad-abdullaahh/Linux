#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
void main()
{
int x;
x=fork();
printf("\n process pid=%d",getpid());
printf("\n returned value =%d", x);
}
