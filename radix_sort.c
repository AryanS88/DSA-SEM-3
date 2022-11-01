#include<stdio.h>

int a[100],n,temp,i;

int getMax(int a[], int n)
{
	int mx = a[0];
	for (int i = 1; i < n; i++)
		if (a[i] > mx)
			mx = a[i];
	return mx;
}


void countSort(int a[], int n, int exp)
{
	int output[n];
	int i, count[10] = {0};


	for (i = 0; i < n; i++)
		count[ (a[i]/exp)%10 ]++;


	for (i = 1; i < 10; i++)
		count[i] += count[i - 1];


	for (i = n - 1; i >= 0; i--)
	{
		output[count[ (a[i]/exp)%10 ] - 1] = a[i];
		count[ (a[i]/exp)%10 ]--;
	}

	for (i = 0; i < n; i++)
		a[i] = output[i];
}


void radixsort(int a[], int n)
{

	int m = getMax(a, n);

	for (int exp = 1; m/exp > 0; exp *= 10)
		countSort(a, n, exp);
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
radixsort(a, n);
printf("\nthe sorted array is :\n");
printArray(a);
}
