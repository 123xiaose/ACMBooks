#include<stdio.h>
#include<string.h>

const int SEQ_LENGTH = 4;

int sequence[SEQ_LENGTH];

void PrintSeq(int seq[], int len);    //�������
int PrintAllPermutation(int seq[], int len);    //�����������
int NextPermutation(int seq[], int len);    //������һ������ 
void Swap(int *a, int *b);   

int main()
{	
	//input
	freopen("input.txt", "r", stdin);
	memset(sequence, 0, sizeof(sequence));    //��ʼ������
	int i;
	for(i = 0; i < SEQ_LENGTH; i++)
	{
		sequence[i] = i + 1;
	}
	
	int permutationCount = PrintAllPermutation(sequence, SEQ_LENGTH);
	printf("%d\n",permutationCount);

	return 0;
}

///////////////////////////////////////////////////////
//���ܣ�������һ������
//����ֵ��1,��ʾ������һ������; 0,��ʾ��������һ������

int NextPermutation(int seq[],    //�������������
					int len)    //seq[]����
{	
	//�Ӻ���ǰ���ҵ���һ����������,ab.
	

	//�ҵ�a�����a������һ����,c


	//�û�a��c
	

	//��c֮������з�ת
	
	
}
///////////////////////////////////////////////////////


//���ܣ������������
//����ֵ�����ɵ�������
int PrintAllPermutation(int seq[], int len)
{
	int count = 0;
	do
	{
		PrintSeq(seq, len);
		count++;
	}while(NextPermutation(seq, len));
	return count;
}

//���ܣ��������
void PrintSeq(int seq[], int len)
{
	int i;
	for(i = 0; i < len; i++)
	{
		printf("%d ", seq[i]);
	}
	printf("\n");
}