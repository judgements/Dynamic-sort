
#include<stdio.h>  
#include<malloc.h>  
int main()  
{  
    int count, i,j,r;  
    float *pf, tmp;  
    scanf("%d", &count);   //����༶����  
    //����ռ䣬�ö�̬����洢ȫ��ͬѧ�ɼ�  
    pf = (float*) malloc( sizeof(float) * count );  
    //����ͬѧ�ǵĳɼ�  
    for ( i = 0; i < count; i++ )  
    {  
        scanf("%f", pf+i);  
    }  
    //����  
    for(j=count-1; j>0; j--)  //ð�ݷ�  
    {  
        for(r=0; r<j; r++)  
        {  
            if(*(pf+r)>*(pf+r+1)) //��pf[r]>pf[r+1],����*(pf+r)����  
            {  
                tmp = *(pf+r);  
                *(pf+r) = *(pf+r+1);  
                *(pf+r+1) = tmp;  
            }  
        }  
    }  
    //��������ĳɼ�  
    for ( i = 0; i < count; i++ )  
    {  
        printf("%f\n", *(pf+i));  
    }  
    free(pf);  
    return 0;  
} 