//
//  main.cpp
//  rank
//
//  Created by 20141105054 on 15/12/2.
//  Copyright © 2015年 宋志远. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
//#define N 5

int main(int argc, const char * argv[])
{
    int i,j;
    int *a;
    int N;
    int t;
    scanf("%d",&N);
    a=new int[N];
    if(a==0)
        exit(0);
    
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(i=0;i<N;i++)
    {
        printf("%d\n",a[i]);
    }
    delete a;
    
    return 0;
}
