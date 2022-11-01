#include<stdio.h>
int a[],n,i;
void printArray(int a[], int n)
{
    int i;
    for (i=0; i <n; i++)
        printf("%d ", a[i]);
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

void merge(int a[], int l,
		int m, int r)
{
	int i=0, j=0, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	int L[n1], R[n2];

	for (i = 0; i < n1; i++)
		L[i] = a[l + i];
	for (j = 0; j < n2; j++)
		R[j] = a[m + 1 + j];




	k = l;
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			a[k] = L[i];
			i++;
		}
		else
		{
			a[k] = R[j];
			j++;
		}
		k++;
	}


	while (i < n1) {
		a[k] = L[i];
		i++;
		k++;
	}


	while (j < n2)
	{
		a[k] = R[j];
		j++;
		k++;
	}
}


void mergeSort(int a[],
			int l, int r)
{
	if (l < r)
	{

		int m = l + (r - l) / 2;

		// Sort first and second halves
		mergeSort(a, l, m);
		mergeSort(a, m + 1, r);

		merge(a, l, m, r);
	}
}

void main()
{
input_a();
printf("the unsorted array is :\n");
printArray(a,n);
mergeSort(a,0,n-1);
printf("the sorted array is :\n");
printArray(a,n);
}
