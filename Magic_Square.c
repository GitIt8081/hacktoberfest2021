/**
Problem Statement
We define a magic square to be an nxn matrix of distinct positive integers from 1 to n2 where the sum of any row, column, or diagonal of length n is always equal to the same number: the magic constant.

You will be given a  matrix  of integers in the inclusive range [1,9]. We can convert any digit a to any other digit b in the range [1,9] at cost of |a-b|. Given s, convert it into a magic square at minimal cost. Print this cost on a new line.

Note: The resulting magic square must contain distinct integers in the inclusive range [1,9].

Example 1:
$s = [[5, 3, 4], [1, 5, 8], [6, 4, 2]]
The matrix looks like this:

5 3 4
1 5 8
6 4 2

We can convert it to the following magic square:

8 3 4
1 5 9
6 7 2
**/
#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,s[3][3],min=45,sum;
    int magic[8][3][3]={ {8,1,6,3,5,7,4,9,2},
                         {4,3,8,9,5,1,2,7,6},
                         {2,9,4,7,5,3,6,1,8},
                         {6,7,2,1,5,9,8,3,4},
                         {6,1,8,7,5,3,2,9,4},
                         {8,3,4,1,5,9,6,7,2},
                         {4,9,2,3,5,7,8,1,6},
                         {2,7,6,9,5,1,4,3,8}};            
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&s[i][j]);
    }    
    for(i=0;i<8;i++)
    {       
           sum=0;           
           for(j=0;j<3;j++)
           {
               for(k=0;k<3;k++)
               {
                   sum+=abs(s[j][k]-magic[i][j][k]);
               }
           }
        if(sum<min)        
        {
            min=sum;            
        }        
    }    
    printf("%d",min);
    return 0;
}
