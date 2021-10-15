#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,s[3][3],count,min=10,mincost=0,a;
    int magic[8][3][3]={ 
            { { 8, 1, 6 }, { 3, 5, 7 }, { 4, 9, 2 } }, 
            { { 6, 1, 8 }, { 7, 5, 3 }, { 2, 9, 4 } }, 
            { { 4, 9, 2 }, { 3, 5, 7 }, { 8, 1, 6 } }, 
            { { 2, 9, 4 }, { 7, 5, 3 }, { 6, 1, 8 } }, 
            { { 8, 3, 4 }, { 1, 5, 9 }, { 6, 7, 2 } }, 
            { { 4, 3, 8 }, { 9, 5, 1 }, { 2, 7, 6 } }, 
            { { 6, 7, 2 }, { 1, 5, 9 }, { 8, 3, 4 } }, 
            { { 2, 7, 6 }, { 9, 5, 1 }, { 4, 3, 8 } }, 
        }; 
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&s[i][j]);
    }    
    for(i=0;i<8;i++)
    {       
           count=0;           
           for(j=0;j<3;j++)
           {
               for(k=0;k<3;k++)
               if(s[j][k]!=magic[i][j][k])
               count++;
        }
        if(min>count)
        {
            min=count;
            a=i;
        }        
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        mincost+=abs(s[i][j]-magic[a][i][j]);
    }
    printf("%d",mincost);
    return 0;
}
