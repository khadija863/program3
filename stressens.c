#include <stdio.h>
int main(){

int i,j ,a[2][2],b[2][2],c[2][2],m1,m2,m3,m4,m5,m6,m7;

printf("Enter the element of first matrix: ");
for(i=0;i<2;i++)
 for(j=0;j<2;j++)
 scanf("%d",&a[i][j]);

printf (" the first matrix:");
for(i=0;i<2;i++){
printf("\n");
for(j=0;j<2;j++)
    printf("%d\t",a[i][j]);
}


 printf("Enter the element of second matrix: ");
for(i=0;i<2;i++)
 for(j=0;j<2;j++)
 scanf("%d",&b[i][j]);

 printf (" the second matrix:");
for(i=0;i<2;i++){
printf("\n");
for(j=0;j<2;j++)
    printf("%d\t",b[i][j]);

}
m1=(a[0][0]+a[1][1])*(b[0][0]+b[1][1]);

m2=(a[1][0]+a[1][1])*b[0][0];

m3=a[0][0]* (b[0][1]-b[1][1]);

m4=a[1][1]*(b[1][0])-b[0][0];

m5=(a[0][0]+a[0][1])*b[1][1];

m6=(a[1][0]-a[0][0])*(b[0][0]+b[0][1]);

m7=(a[0][1]-a[1][1])*(b[1][0]+b[1][1]);

c[0][0]=m1+m4-m5+m7;
c[0][1]=m3+m4;
c[1][0]=m2+m4;
c[1][1]=m1-m2+m3+m6;

printf (" \n after multiplication using stressens :\n");
for(i=0;i<2;i++){
printf("\n");
for(j=0;j<2;j++)
    printf("%d\t",c[i][j]);

}
return 0;
}
