#define _CRT_SECURE_NO_WARNINGS 1
//此程序用于数英文写作的单词数
//使用方法复制后打开输入终止符， ctrl v
#include<stdio.h>
int main()
{
	{
		int words = 0;
		char stop;
		printf("请定义终止符\n");
		
		stop = '\n';
		stop = getchar();
		//加上注释符改为以回车终止
		for (char letter; (letter = getchar()) != stop;)
		{
			//将所有非字母部分视为单词的分隔
			//if (!(letter >= 'a' && letter <= 'z' || letter <= 'Z' && letter >= 'A'))
			//if (letter > 'Z' && letter < 'a' || letter < 'A' || letter > 'z' && letter != '\'')
			/*if (letter > 'Z' && letter < 'a' || letter < 'A' || letter > 'z' )
				if(letter != '\'')*/
			if (letter > 'Z' && letter < 'a' || letter < 'A' || letter > 'z' )
				//字典
				if( letter != '\'' && letter != '-' && letter != '\n')
			{
				
				//输出被判断字符
				//printf("%c", letter);
				words++;
			}


		}
		printf("\n%d", words);
	}
	return 0;
}







