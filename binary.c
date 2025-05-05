#include<stdio.h>
int main(){

int n,i,a[10],mid,high,low,item,search;

printf("\nenter the range of array:");scanf("%d",&n);
printf("\n enter the element of array: ");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf(" traverse the array:");
for(i=0;i<n;i++)
{
    printf("%4d",a[i]);
}

printf("enter the element to search: ");
scanf("%d",&item);

low=0;
high=n-1;
mid=(low+high)/2;
while (low<=high)
{
    if(a[mid]<=item)
        low=mid+1;
    else if (a[mid]==item);
    {
        printf("%d found at the %d location:",item,mid+1);
    }

    high=mid-1;
    mid=(low+high)/2;
if(low>item)
{
    printf(" item is not found");
}


}

}
