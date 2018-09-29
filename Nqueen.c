#include<stdio.h>
#include<stdlib.h>
int x[1000];
int c=0;
void n_queen(int k,int n)
{
 int i,z;
 for(i=1;i<=n;i++)
 {
  if(place(k,i))
  {
   x[k]=i;
   if(k==n)
{
printf("\nsol no %d:  ",++c);   
for(z=1;z<=n;z++)
   {
    printf("%d",x[z]);
    }
    
}
   else
      n_queen(k+1,n);
  }
 }
}


int place(int k,int i)
{
 int j;
 for(j=1;j<=k-1;j++)
 {
  if((x[j]==i) || (abs(x[j]-i)==abs(j-k)))
  return 0;
}
  return 1;  
}


void  main()
{
int n;
printf("Enter the no of queens:");
scanf("%d",&n);
n_queen(1,n);
}
