#include<stdio.h>

int a[100],n,temp,i;

void swap(int *x,int *y)
{
 temp =*x;
 *x=*y;
 *y=temp;
}

void bubble_sort(int a[],int n)
{
 int i,j;
 for(i=0;i<=n;i++)
    {
     for(j=0;j<=n-i-1;j++)
        {
         if(a[j]>a[j+1])
            {
             swap(&a[j],&a[j+1]);
            }
        }
    }
}
void printArray(int a[])
{
 for(i=0;i<=n-1;i++)
    {
     printf("%d\t",a[i]);
    }
     printf("\n");
}

void input_a()
{
 printf("Enter the length of the array \n");
 scanf("%d",&n);
 for(i=0;i<=n-1;i++)
    {
      printf("Enter the element at %d index \n",i);
      scanf("%d",&a[i]);
    }
}

void main()
{
input_a();
printf("\nthe unsorted array is :\n");
printArray(a);
bubble_sort(a,n);
printf("\nthe sorted array is :\n");
printArray(a);
}
