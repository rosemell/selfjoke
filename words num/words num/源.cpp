#define _CRT_SECURE_NO_WARNINGS 1
//�˳���������Ӣ��д���ĵ�����
//ʹ�÷������ƺ��������ֹ���� ctrl v
#include<stdio.h>
int main()
{
	{
		int words = 0;
		char stop;
		printf("�붨����ֹ��\n");
		
		stop = '\n';
		stop = getchar();
		//����ע�ͷ���Ϊ�Իس���ֹ
		for (char letter; (letter = getchar()) != stop;)
		{
			//�����з���ĸ������Ϊ���ʵķָ�
			//if (!(letter >= 'a' && letter <= 'z' || letter <= 'Z' && letter >= 'A'))
			//if (letter > 'Z' && letter < 'a' || letter < 'A' || letter > 'z' && letter != '\'')
			/*if (letter > 'Z' && letter < 'a' || letter < 'A' || letter > 'z' )
				if(letter != '\'')*/
			if (letter > 'Z' && letter < 'a' || letter < 'A' || letter > 'z' )
				//�ֵ�
				if( letter != '\'' && letter != '-' && letter != '\n')
			{
				
				//������ж��ַ�
				//printf("%c", letter);
				words++;
			}


		}
		printf("\n%d", words);
	}
	return 0;
}







