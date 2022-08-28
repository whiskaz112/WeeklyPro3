#include <stdio.h>

int main()
{
    int h[11],sum=0;
    for(int i=0; i<10; i++)
    {
        scanf("%d",&h[i]);
    }
    for(int j=0; j<10; j++)
    {
        printf("Height%2d  = %d\n",j+1,h[j]);
    }
    for(int z=0; z<10; z++)
    {
        sum+=h[z];
    }
    printf("Average Hieght = %d",sum/10);
    return 0;
}