#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,c;
    for(i=2;i<=n;i++)
    {
        c=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                c++;
            }
            
        }
        if(c==0)
          printf("%d ",i);
    }
    
}
