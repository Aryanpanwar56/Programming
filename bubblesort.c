#include<stdio.h>
int main()

{
   int a[10];
    int t,n,j,i;
    printf("Enetr the values");
    scanf("%d",&n);

    for(int i=0;i<=n;i++);
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n-i-1;j++)

        {
            if(a[j]>a[j+1])
            {
    
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
            }
        }

    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);

    }
    return 0;





}