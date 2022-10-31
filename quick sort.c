#include<stdio.h>

void swap(int*x,int*y)
{
 int temp = *x;
 *x=*y;
 *y=temp;

}

void printa(int a[],int n)
{int i;
 for(i=0;i<=n-1;i++)
    {
    printf("%d ",a[i]);

    }
    printf("\n");
}

void partition(int a[],int l,int h)
{
 int pivot =a[l];
 int i=l,j=h;
 do
 {
  do{i++;}while(a[i]<=pivot);
  do{j--;}while(a[i]>pivot);
  if(a[i]>a[j])
  {
   swap(a[i],a[j]);
  }

 }while(i>j);

 return j;

}

void quicksort(int a[], int l, int h)
{
    int j;
 if(l<h)
        {
        j=partition(a,l,h);
        quicksort(a,l,j);
        quicksort(a,j+1,h);
        }
}
 void main()
 {
  int i,n;
    printf("enter the length of the array that should be sorted \n");
    scanf("%d",&n);
            int a[n];


    printf("the unsorted array is \n");
    printa(a,n);
    quicksort(a,0,n);
    printf("the sorted array is \n");
    printa(a,n);

 }
