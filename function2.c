#include<stdio.h>
//function prototype
int multi(int a, int b)
{

    int c;
    c=a*b;
    return(c);
}
//function prototype
int div(int a,int b)
{

    int c;
    c=a/b;
    return (c);
}


#include<stdio.h>
int main()
{
    int x,y;
    x=10;
    y=5;

    int z= multi(x,y);
    int k=div(x,y);
    printf(" product is %d\n ",z);
    printf(" division is %d\n ",k);

}
