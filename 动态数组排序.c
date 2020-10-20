
#include<stdio.h>  
#include<malloc.h>  
int main()  
{  
    int count, i,j,r;  
    float *pf, tmp;  
    scanf("%d", &count);   //输入班级人数  
    //分配空间，用动态数组存储全班同学成绩  
    pf = (float*) malloc( sizeof(float) * count );  
    //输入同学们的成绩  
    for ( i = 0; i < count; i++ )  
    {  
        scanf("%f", pf+i);  
    }  
    //排序  
    for(j=count-1; j>0; j--)  //冒泡法  
    {  
        for(r=0; r<j; r++)  
        {  
            if(*(pf+r)>*(pf+r+1)) //或pf[r]>pf[r+1],下面*(pf+r)类似  
            {  
                tmp = *(pf+r);  
                *(pf+r) = *(pf+r+1);  
                *(pf+r+1) = tmp;  
            }  
        }  
    }  
    //输出排序后的成绩  
    for ( i = 0; i < count; i++ )  
    {  
        printf("%f\n", *(pf+i));  
    }  
    free(pf);  
    return 0;  
} 