#include<stdio.h>

int a[100],i,j,k,c=0,t=-1,n,e;

void push()
{
    int e;
 if(t==n-1)
    {
     printf("Overflow\n");
    }

  else
    {
     printf("enter the element \n");
     scanf("%d",&e);
     t++;
     a[t]=e;
    }
}

void pop()
{
 if(t==-1)
    {
     printf("underflow\n");
    }

  else
    {
     printf(" the element popped is %d \n",a[t]);
     t--;

    }
}

void peak()
{
  if(t==-1)
    {
     printf("underflow\n");
    }

   else
    {
     printf(" the element at the top is %d \n",a[t]);
    }
}

void display()
{
 if(t==-1)
    {
     printf("underflow\n");
    }

  else
    {
    for(i=t;i>0;i--)
     printf("%d \n",a[i]);
    }
}

void main()
{
 printf("Enter the number of elements in a stack \n");
 scanf("%d",&n);
 printf("\n1.push,2.pop,3.peak,4.display,5.exit\n");

 while(c!=5)
 {
  printf("enter your choice \n");
 scanf("%d",&c);
switch(c){
  case 1:
    push();
    break;

  case 2:
    pop();
    break;

  case 3:
    peak();
    break;

  case 4:
    display();
    break;

  case 5:
   printf("Exiting ....");
    break;

  default:
    printf("invalid choice\n");
 }

}
}
