#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the size of array=\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements in it=\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
printf("%d,",a[i]);
return 0;
}