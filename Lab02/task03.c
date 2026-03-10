#include<stdio.h>
int main()
{
int marks[5];
int i;
for(i=0; i<5;i++)
{
printf("Subject %d: ", i + 1);
scanf("%d", &marks[i]);
if(marks[i] >=85 && marks[i]<=100)
{
printf("Grade: A\n");
}
else if(marks[i]>=80 && marks[i]<=84)
{
printf("Grade: A-\n");
}
else if(marks[i]>=75 && marks[i]<=79)
{
printf("Grade: B+\n");
}
else if(marks[i]>=70 && marks[i]<=74)
{
printf("Grade: B\n");
}
else if(marks[i]>=65 && marks[i]<=69)
{
printf("Grade: B-\n");
}
else if(marks[i]>=61 && marks[i]<=64)
{
printf("Grade: C+\n");
}
else if(marks[i]>=58 && marks[i]<=60)
{
printf("Grade: C\n");
}
else if(marks[i]>=55 && marks[i]<=57)
{
printf("Grade: C-\n");
}
else if(marks[i]>=50 && marks[i]<=54)
{
printf("Grade: D\n");
}
else if(marks[i]>=0&& marks[i]<=50)
{
printf("Grade: F\n");
}
else
{
printf("Invalid Marks!\n");
}
}
return 0;
}
