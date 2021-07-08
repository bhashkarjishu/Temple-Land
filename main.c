#include <stdio.h>

int main(void)
{
    long s;
    scanf("%lu",&s);
    while(s--)
    {
        int n;
        scanf("%d",&n);
        int arr[n],i,flag=0;
        if(n%2==0)
        {
            for(i=0;i<n;i++)
            {
                scanf("%d",&arr[i]);
            }
            printf("no\n");
        }
        else
        {
            for(i=0;i<n;i++)
            {
                scanf("%d",&arr[i]);
            }

            for(i=0;i<n/2;i++)
            {
                if(arr[i+1]-arr[i]==1)
                    flag=1;
                else
                {
                    flag=0;
                    break;
                }
            }
            
            int count=0;
            for(i=0;i<n/2;i++)
            {
                if(arr[i]==arr[n-i-1])
                count++;
            }
            if(flag==1 && count==n/2 && arr[0]==1)
                printf("yes\n");
            else printf("no\n");

        }
    }
}
