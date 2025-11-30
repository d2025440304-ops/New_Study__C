#include <stdio.h>
void print(int n)
{
    int i = 1;
    int j = 1;
    int m = i*j;
    for(;i<n;i++)
    {
        for(;j<=i;j++)
        {
            if(i*j>n)
            {
                int x = m%n;
               m = (m%n)*10+x; 
            }
            printf("%d*%d = %d\n",i,j,m);
        }
        printf("\n");
    }
}
int main()
{
    int n = 0;
    scanf("%d",&n);
    print(n);
    return 0;
}