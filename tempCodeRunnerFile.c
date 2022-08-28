#include <stdio.h>

int main()
{
    int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
    scanf("%d",&a1);
    scanf("%d",&a2);
    scanf("%d",&a3);
    scanf("%d",&a4);
    scanf("%d",&a5);
    scanf("%d",&a6);
    scanf("%d",&a7);
    scanf("%d",&a8);
    scanf("%d",&a9);
    scanf("%d",&a10);
    printf("Height 1  = %d\n",a1);
    printf("Height 2  = %d\n",a2);
    printf("Height 3  = %d\n",a3);
    printf("Height 4  = %d\n",a4);
    printf("Height 5  = %d\n",a5);
    printf("Height 6  = %d\n",a6);
    printf("Height 7  = %d\n",a7);
    printf("Height 8  = %d\n",a8);
    printf("Height 9  = %d\n",a9);
    printf("Height10  = %d\n",a10);
    int x;
    x=(a1+a2+a3+a4+a5+a6+a7+a8+a9+a10)/10;
    printf("Average Hieght = %d",x);
    return 0;
}