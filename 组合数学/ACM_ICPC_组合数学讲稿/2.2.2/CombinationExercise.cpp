#include<stdio.h>

const int MAX = 11;
int g_S[MAX] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};  //�±���ֵ��Ӧ
int g_r[MAX];

int AllCombination(int S[], int n, int r[], int m);
int NextCombination(int S[], int n, int r[], int m);
void PrintSeq(int seq[], int len);

int main()
{
	freopen("input.txt", "r", stdin);
	
	int i, n, m, result;
	//����
	n = 10;
	m = 6;

	//����
	result = AllCombination(g_S, n, g_r, m);

	//���
	printf("%d\n", result);
	return 0;
}


/////////////////////////////////////////////////////
//���ܣ���S��ȡr����һ�����
//n = 10, m = 6;
//��һ�ε���ʱr[] = {0, 1, 2, 3, 4, 5, 6}
//���һ�ε���ʱr[] = {0, 5, 6, 7, 8, 9, 10}
int NextCombination(int S[], int n, int r[], int m)
{
	//�ҵ�ʹr[i] < n - m + i������±�i
	

	//r[i]+1
	

	//r[j] = r[j-1] + 1 ; j = i + 1, ... ,m.
	
	
}
////////////////////////////////////////////////////


//���ܣ�S��ȡr���������
int AllCombination(int S[], int n, int r[], int m)
{
	int i;
	int count = 0;
	for(i = 0; i <= m; i++)
	{
		r[i] = S[i];
	}

	do
	{
		PrintSeq(r, m);
		count++;
		printf("\n");
	}while(NextCombination(S, n, r, m));
	return count;
}


void PrintSeq(int seq[], int len)
{
	int i;
	int firstFlag = 1;
	for(i = 1; i <= len; i++)
	{
		if(1 == firstFlag)
		{
			firstFlag = 0;
		}
		else
		{
			printf(" ");
		}
		printf("%d", seq[i]);
	}
}