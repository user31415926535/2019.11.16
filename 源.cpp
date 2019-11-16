#include<stdio.h>
#include<string.h>
int main()
{
	char a[80];
	char b[80];
	char a1[40];
	char b1[40];
	gets_s(a);
	gets_s(b);//获得字符串

	int i, j;
	for (i = 0,j=0; a[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			a1[j] = a[i];
			b1[j] = b[i];
			j++;
		}//找出所有偶数

			
	}
	a1[j] = '\0';
	b1[j] = '\0';//'\0’表示字符串结束
	if (strcmp(a1, b1) > 0)
		printf("1");
	else if (strcmp(a1, b1) == 0)//strcmp表示比较两个字符串的ASCII码值
		printf("0");
	else
		printf("-1");
	return 0;

}