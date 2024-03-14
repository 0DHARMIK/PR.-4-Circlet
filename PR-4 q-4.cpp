#include <stdio.h>
main() 
{
	int i,j,k;
  for(int i=5;i>=1;i--)
  {
  	for(k=i;k<=4;k++)
  	{
  		printf("  ");
	  }
    for(int j=1;j<=i;j++)
    {
     printf("%d ",j%2);
    }
    printf("\n");
  }
}