#include<stdio.h>
int main()
{
int array[10],i,n,j,flag=0;
printf("\n Enter the size of the array :");
scanf("%d",&n);
printf("\n Enter the elements :");
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(array[i]==array[j]&&i!=j)
{
flag=1;
printf("\n Duplicate number found at location %d",i,j);
}
}
}
if(flag==0)
printf("\n No Duplplicate found");
return 0;
}