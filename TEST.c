/*#include <stdio.h>
int main()
{
    int a[100], n, i, j, k;
    printf("Enter number of elements: \n");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n-1;j++)
    {
        for(k=0;k<n-j-1;k++)
        {
            if(a[k]>a[k+1])
            {
                int x=a[k];
                a[k]=a[k+1];
                a[k+1]=x;
            }
        }
    }
    printf("After sorting: \n");
    for(int z=0;z<n;z++)
    {
        printf("%d\n",a[z]);
    }
    return 0;
}*/
#include <stdio.h>
int main()
{
    int a[100], n, i, j, k, s;
    printf("Enter number of elements: \n");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n-1;j++)
    {
        int x=j;
        for(k=j+1;k<n;k++)
        {
            if(a[x]>a[k])
                x=k;
        }  
        if(x!=j)
            s=a[j];
            a[j]=a[x];
            a[x]=s; 
    }
    printf("After Sorting: \n");
    for( int z=0;z<n;z++)
        printf("%d\n",a[z]);
    return 0;
}