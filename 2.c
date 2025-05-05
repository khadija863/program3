#include<stdio.h>
void quicksort (int a[],int low,int high)
{
    if (low<high)
    {
        int pivot=a[high];
        int i=low-1,temp;
        for(int j=low;j<=high-1;j++)
        {
           if(a[j]<pivot)
           {
               i++;
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
        }

    temp=a[i+1];
    a[i+1]=a[high];
    a[high]=temp;
    quicksort(a,low,i);
    quicksort(a,i+2,high);
    }
}


int main(){
int i,j,a[100],mid,low,high,n,pivot,temp;
printf("enter the range of array: ");
scanf("%d",&n);
printf("enter the element of array: ");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
quicksort(a,0,n-1);
printf(" the sorted array:");
for(i=0;i<n;i++)
{
    printf("%4d",a[i]);
}
return 0;
}
