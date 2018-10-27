#include<stdio.h>
void main()
{ int r,c,k, a[3][3],b[3][3],sum[3][3]={0};

  printf("Ist matrix\n");
  for(r=0;r<3;r++)
    for(c=0;c<3;c++)
     scanf(" %d",&a[r][c]);
      

printf("\nIInd matrix");
  for(r=0;r<3;r++)
    for(c=0;c<3;c++)
     scanf("%d",&b[r][c]);

 for(r=0;r<3;r++)
    {for(c=0;c<3;c++)
      
      {for(k=0;k<3;k++)
         {sum[r][c]=sum[r][c]+a[r][k]*b[k][c];
                                       }
            printf("\t%d",sum[r][c]);}
          
             printf("\n"); }

 
}
