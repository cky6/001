//
//  main.c
//  2.2
//
//  Created by 陈柯延 on 2023/10/22.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int a[20];
    int i=0;
    a[i]=1;
    a[i+1]=1;
    printf("%d\n",a[i]);
    printf("%d\n",a[i+1]);
    for(i=2;i<20;i++)
    {
        a[i]=a[i-1]+a[i-2];
        printf("%d\n",a[i]);
    }
    return 0;
}
