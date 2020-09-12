#include<stdio.h>
int main()
{
	int num[7], temp;
	int i, j;

	printf("Please enter seven integer numbers (Ex. 1 2 3 4 5 6 7) : ");
	for (i = 0; i < 7; i++)
		scanf_s("%d",&num[i]);

	for(i=0;i<6;i++)
	for(j=0;j<6;j++)
		if (num[j] > num[j + 1])
		{
			temp = num[j];
			num[j] = num[j + 1];
			num[j + 1] = temp;
		}
	printf("First maximum number : %d\n", num[6]);
	printf("Second maximum number : %d\n", num[5]);
	printf("First maximum number : %d\n", num[0]);
	printf("Second maximum number : %d\n", num[1]);
	return 0;
}