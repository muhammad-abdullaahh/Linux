# include <stdio.h>
void even_odd(int num);

int main(){
int num;
printf("Eter any number: ");
scanf("%d",&num);
even_odd(num);
return 0;
}

void even_odd(int num)
{
    if(num % 2 == 0)
    {
        printf("The entered number is an even number...");
    }
    else
    {
        printf("The entered number is an odd number...");
    }
}
