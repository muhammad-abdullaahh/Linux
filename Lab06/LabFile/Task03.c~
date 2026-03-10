#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
int pid;
pid = fork();
if (pid < 0)
{
fprintf(stderr, "Fork failed!\n");
exit(-1);
}
else if (pid == 0)
{
printf("I am the child, return from fork=%d\n", pid);
execlp("/bin/ls", "ls", NULL);
}
else
{
printf("I am the parent, return from fork, child pid=%d\n", pid);
}
}
