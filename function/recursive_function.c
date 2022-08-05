#include<stdio.h>
// recursive function.Which call itself
void ghost()
{

    printf("\nI'm a ghost");
    ghost();
}

int main()
{

ghost();
return 0;


}
