#include <stdio.h>
int main(){
int i,n,a[100],mid,low,high,item,search;
printf("\n Enter the range of array: ");scanf("%d",&n);
printf ("\n Enter the element of array: ");
for (i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("\n array traversing:");
for (i=0;i<n;i++)
{
    printf("%4d",a[i]);
}
printf("\n Enter the element to search: ");
scanf("%d",&item);


low=0;
high=n-1;
mid=(low+high)/2;

while (low<=high)
{
  if(a[mid]<item)
        low=mid+1;
  else if(a[mid]==item)
  {

      printf(" %d found at %d location:",item,mid+1);
      break;
  }
    else
        high=mid-1;
    mid=(low+high)/2;
}
if (low>high)
{
    printf(" item is not found: ");
}
return 0;


}
