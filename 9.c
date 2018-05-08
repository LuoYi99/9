/*
题目：
给定?个正整数，请统计奇数和偶数各有多少？
*/
/*
思路：
遍历所有给定的正整数，判断是奇是偶，在对其计数
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int *p,i,j=0,o=0,N;
	scanf("%d",&N);
	p=(int*)malloc(sizeof(int)*N);
	for(i=0;i<N;i++)
		scanf("%d",&p[i]);
	for(i=0;i<N;i++)
	{
		if(p[i]%2==0)
			o++;
		else
			j++;
	}
	printf("%d %d\n",j,o);
	return;
}