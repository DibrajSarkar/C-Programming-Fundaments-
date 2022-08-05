// function prototyping
#include<stdio.h>
void sum(int n1,int n2);// function prototyping
// function declaration
void sum(int n1,int n2)
{

    int s;
    s=n1+n2;
    printf("Sum: %d\n",s);
}
void sub(int n1,int n2){
int sub;
sub=n1-n2;
printf("Subtraction: %d\n",sub);
}
void all(int c,int d)
{
    sum(c,d);
    sub(c,d);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    all(a,b);

    return 0;
}
