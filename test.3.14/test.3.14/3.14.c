#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

int main()

{int day=0;
scanf("%d\n",&day);
if (1==day)
	printf("星期一\n",day);
if(2==day)
	printf("星期二\n",day);
if(3==day)
	printf("星期三\n",day);

return 0;

}



//int main()
//{
//	int i=1;
//
//	while (i<=100)
//
//	{
//    if (i%2==1)
//
//		printf("%d\n",i);
//	     i++; 
//
//	}
//}
