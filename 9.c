/*
��Ŀ��
����?������������ͳ��������ż�����ж��٣�
*/
/*
˼·��
�������и��������������ж�������ż���ڶ������
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