#include<stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);
	
	//����
	int T;
	scanf("%d", &T);
	int testCase;
	for(testCase = 0; testCase < T; testCase++)
	{
		char cmd[2];    
		int n, m, result;
		scanf("%s%d%d", cmd, &n, &m);    //����1: ΪʲôҪ���ַ�����cmd[2],���%s��ȡ���룿%c��ʽ�����ʲô���⣿
		
		//����
		if('A' == cmd[0])    //����2: "cmd[0] == 'A'"�������Ķ���Ϊ��ʹ��������ʽ��
		{
			result = Anm(n, m);
		}
		else
		{
			result = Cnm(n, m);
		}

		//���
		printf("%d\n", result);
	}
	return 0;
}


//Anm()
int Anm(int n, int m)
{
	//
}


//Cnm()
int Cnm(int n, int m)
{
	//
}

