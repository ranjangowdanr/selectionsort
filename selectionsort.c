#include<stdio.h>


void display(int a[],int n)
{
 for(int i=0;i<n;i++)
 {
 printf("%d ",a[i]);
 }
 printf("\n");
}
void selectionsort(int a[], int n)
{
  int min_index;
  for(int i=0;i<n-1;i++)
  {
  min_index=i;
  for(int j=i+1;j<n;j++)
  {
  if(a[j]<a[min_index])
  {
  min_index=j;
  }
  if(min_index!=i)
  {
  int temp=a[min_index];
  a[min_index]=a[i];
  a[i]=temp;
}
}
}
}
int main()
{
int a[]={55,77,33,11,9,77,554,333,22};
printf("before sorting\n");
int n=sizeof(a)/sizeof(a[0]);
display(a,n);
printf("after sorting\n");
selectionsort(a,n);
display(a,n);
return 0;
}
