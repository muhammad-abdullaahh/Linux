# include <stdio.h>
# include <sys/types.h>
# include <unistd.h>
# include<stdlib.h>

int main(){
int x;
x=fork();
printf("\nProcess id: %d",getpid());
printf("\nReturned value: %d",x);
return 0;
}
