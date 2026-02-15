#define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
#define rate 2.54
void clear(void);
int main(void)
{
	puts("please input an inch"
		",I will turn it to cm. "
		"If you quit ,input \"q\".");
	double inch;
	while (1)
	{
		while (scanf("%lf", &inch) == 1)
		{
			printf("cm is %0.2lf\n", inch * rate);
			clear();
			puts("please input an inch"
				",I will turn it to cm. "
				"If you quit ,input \"q\".");
		}
		if (getchar() != 'q')
		{
			clear();
			puts("I don't know what that means.");
			puts("please input an inch"
				",I will turn it to cm. "
				"If you quit ,input \"q\".");
			continue;
		}
		clear();
		break;
	}
	puts("Bey.");
	puts("press any key to exit.");
	clear();
	return 0;
}
void clear(void)
{
	int ch;
	while ((ch=getchar() )!= '\n'&& ch!= EOF)
		continue;
}
//输入.\n2\n有问题,以下是程序的运行结果 建议改成fgets
//please input an inch, I will turn it to cm.If you quit, input "q".
//.
//2
//I don't know what that means.
//please input an inch, I will turn it to cm.If you quit, input "q".
//
