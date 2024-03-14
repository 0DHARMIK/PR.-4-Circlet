 #include<stdio.h>
/*
11
12 13
14 15 16
17 18 19 20
21 22 23 24 25


*/
main()

{
	int i,j,k=11;
	
	for(i=11;i<=15;i++)
	{
		for(j=i;j>=11;j--)
		{
			printf("%d ",k);
			k++;
		}
		printf("\n");
	}
	
}