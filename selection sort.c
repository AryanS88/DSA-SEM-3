#include<stdio.h>

void swap(int *x,int *y)
{
 int temp = *x;
 *x =*y;;
 *y=temp;
}

void selection_sort(int a[],int n)
{
 int i,j,k;
 for(i=0;i<=n-1;i++)
    {
     for(j=k=i;j<n;j++)
        {
        if(a[j]<a[k])
            {
             k=j;
            }
        }
        swap(&a[i],&a[k]);
    }
}

void printArray(int a[], int n)
{
    int i;
    for (i=0; i <n; i++)
        printf("%d ", a[i]);
    printf("\n");
}
int main()
{
int i,n;
printf("enter the size of the array\n");
scanf("%d",&n);
int a[n] ;
for(i=0;i<=n-1;i++)
    {printf("Enter the element \n");
        scanf("%d",&a[i]);}
    selection_sort(a, n);
    printf("Sorted array: \n");
    printArray(a, n);
    return 0;
}
