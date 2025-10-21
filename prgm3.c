#include<stdio.h>
#include<stdlib.h>
void main()
{
int a[20],b[20],c[20];
int m,n;
void readArray(int[],int);
void printArray(int[],int);
void merge(int[],int[],int[],int,int);
printf("no of elementsin 1st array[1-20]:");
scanf("%d",&m);
printf("enter the elements in non decreasing order:");
readArray(a,m);
printf("no of elementsin 2st array:");
scanf("%d",&n);
printf("enter the elements in non decreasing order:");
readArray(b,n);
merge(a,b,c,m,n);
printf("merged array:\n");
printArray(c,m+n);
}
void readArray(int x[],int n)
{
int i;
for(i=0;i<n;++i)
scanf("%d",&x[i]);
}
void printArray(int y[],int n)
{
int i;
for(i=0;i<n;i++)
printf("%d",y[i]);
return;
}
void merge(int u[],int v[],int z[],int m,int n)
{
int i,j,k;
i=j=k=0;
while(i<m&&j<n)
if(u[i]<v[j])
{
z[k]=u[i];
i=i+1;k=k+1;
}
else
{
z[k]=v[j];
j=j+1;
k=k+1;
}
while(i<m)
z[k++]=u[i++];
while(j<n)
z[k++]=v[j++];
}
