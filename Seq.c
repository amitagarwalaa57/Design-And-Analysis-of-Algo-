#include<stdio.h>
int i,j,arr[5][2];
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
void sort()
{
for (i = 0; i < 4; i++)  
    {
       for (j = 0; j < 4-i; j++)  
       {
           if (arr[j][0] > arr[j+1][0]) 
           {
              swap(&arr[j][0], &arr[j+1][0]);
              swap(&arr[j][1],&arr[j+1][1]);
           }
       }      
    } 
}    
void main()
{
    int i,j;
    printf("Enter array elements:");
    for(i=0;i<5;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    sort();
    
    for(i=0;i<5;i++)
    {
    
        for(j=0;j<2;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }    
    
}
