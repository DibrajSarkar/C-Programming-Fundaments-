#include<stdio.h>

int sum(int a,int b)
{
    return a+b;
}
int main(){

int a,b;
scanf("%d %d",&a,&b);
int sums=sum(a,b);
printf("%d",sums);

return 0;

}
