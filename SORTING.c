#include<stdio.h>

void accept_array();
void display_array();
void selection_sort();
void insertion_sort();
void quick_sort();
int c;


int inp_a();
int inp_a(){int i,n,a[n];
printf("enter the number of elements of your array \n");
scanf("%d",&n);

for(i=0;i<=n-1;i++)
    {
    printf("enter element no %d\n",i+1);
    scanf("%d",&a[i]);
    }}
void display_a(){
printf("the elemetns are \n");
int i,n;
int a[n];
for(i=0;i<=n-1;i++)
    {
    printf("%d\n",a[i]);
    }
}
void insertion_sort(int a[],int n)
{
int i,j,key;
for(i=1;i<n;i+1){
    key =a[i];
    j=i-1;
    while(j>=0 && a[j] >key){
        a[j+1]=a[j];

    }
    a[j+1];
}
}

int main()
{
printf("Welcome to sorting \n");
while(c!=4){
printf(" enter 1 for selection sort \n enter 2 for insertion sort \n  enter 3 for quick sort \n");
scanf("%d",&c);
switch(c)
{
 case 1:int inp_a();
        selection_sort();
        display_a();
        break;

 case 2:int inp_a();
        insertion_sort(int a[],int n);
        display_array();
        break;

 case 3:int inp_a();
        quick_sort();
        display_a();
        break;
}
}
}
