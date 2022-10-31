#include<stdio.h>

void printa(int a[],int n)
{int i;
 for(i=0;i<=n-1;i++)
    {
    printf("%d ",a[i]);

    }
    printf("\n");
}
void insertion_sort(int a[],int n)
{
 int i,j,k,x;
 for(i=1;i<n;i++)
    {
     j=i-1;
     x=a[i];
     while(j>-1&& a[j]>x)
        {
         a[j+1]=a[j];
          j--;
        }
        a[j+1]=x;
    }
}
void main()
{
    int i,n;
    printf("enter the length of the array that should be sorted \n");
    scanf("%d",&n);
            int a[n];

    for(i=0;i<=n-1;i++)
        {
         printf("enter the element at %d index ",i);
         scanf("%d",&a[i]);
        }
    printf("the unsorted array is \n");
    printa(a,n);
    insertion_sort(a,n);
    printf("the sorted array is \n");
    printa(a,n);

}
