#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<0){
          printf("%d is a Invalid number",arr[i]);
          return 0;}
        else if(arr[i]>n-1){
          printf("%d is a Invalid number",arr[i]);
          return 0;}
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("Repetitive element:%d",arr[i]);
                return 0;
            }
        }
    }
}
