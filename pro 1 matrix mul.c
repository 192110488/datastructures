#include <stdio.h>
int main() {
    int x[5][5],y[5][5],z[5][5],row,col,i,j,k;    
    printf("enter the number of row=");    
    scanf("%d",&row);    
    printf("enter the number of column=");    
    scanf("%d",&col);    
    printf("enter A matrix element=\n");    
    for(i=0;i<row;i++)    
    {    
        for(j=0;j<col;j++)    
        {    
             scanf("%d",&x[i][j]);  
         }    
    }    
    printf("enter B matrix element=\n");    
    for(i=0;i<row;i++)    
    {    
      for(j=0;j<col;j++)    
        {    
             scanf("%d",&y[i][j]);    
        }    
    }    
    printf("multiply of the matrix A & B=\n");    
    for(i=0;i<row;i++)    
    {    
        for(j=0;j<col;j++)    
        { 
			z[i][j]=0;   
            for(k=0;k<col;k++)    
            {    
             z[i][j]+=x[i][k]*y[k][j];    
            }    
        }
	}
	for(i=0;i<row;i++)    
    {    
        for(j=0;j<col;j++)    
        {    
             printf("%d",z[i][j]);
             printf(" ");    
        }    
        printf("\n");    
    }    
    return 0; 
}
