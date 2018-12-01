1.


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int n;int g;
int partition(int a[],int l,int u)
{
	int p=u;
	int i=l,j=l;
	for(i=l;i<u;i++)
	{
		if(a[i]<=a[p])
		{	
			int t=a[i];
			a[i]=a[j];
			a[j]=t;j++;
		}
	}
	int t=a[j];
        a[j]=a[p];
        a[p]=t;
	for(i=0;i<n;i++)
        printf("%d ",a[i]);
	printf("\n");
	return(j);
}
int quicksort(int a[],int l,int u,int median)
{  
	if(l<u)
	{ 
int p=partition(a,l,u);
    		if(p>median)
    			quicksort(a,l,p-1,median);
    		else if(p<median)		
    			quicksort(a,p+1,u,median);
    		else 
    			return(p-1);          	
	}

}


void main()
{
	int n,i,a[10],median,median2=0;
	
	printf("Enter length of array ");
	scanf("%d",&n);
	if(n%2!=0)
		median=(n/2)+1;
	else
            median=n/2;
            
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
        scanf("%d",&a[i]);
	printf("the median is %d",a[quicksort(a,0,n-1,median)]);
    if(n%2==0)
        printf("the second median is %d",a[quicksort(a,0,n-1,median+1)]);

}	


2. 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int n;int g;
int partition(int a[],int l,int u)
{
	int p=u;
	int i=l,j=l;
	for(i=l;i<u;i++)
	{
		if(a[i]<=a[p])
		{	
			int t=a[i];
			a[i]=a[j];
			a[j]=t;j++;
		}
	}
	int t=a[j];
        a[j]=a[p];
        a[p]=t;
	for(i=0;i<n;i++)
        printf("%d ",a[i]);
	printf("\n");
	return(j);
}
int quicksort(int a[],int l,int u,int median)
{  
	if(l<u)
	{ 
    		int p=partition(a,l,u);
    		if(p>median)
    			quicksort(a,l,p-1,median);
    		else if(p<median)		
    			quicksort(a,p+1,u,median);
    		else 
    			return(p-1);          	
	}

}


void main()
{
	int n,i,a[10],median,median2=0;
	
	printf("Enter length of array ");
	scanf("%d",&n);
	if(n%2!=0)
		median=(n/2)+1;
	else
            median=n/2;
            
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
        scanf("%d",&a[i]);
	printf("the median is %d",a[quicksort(a,0,n-1,median)]);
    if(n%2==0)
        printf("the second median is %d",a[quicksort(a,0,n-1,median+1)]);

}	

