#define _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>




int Add(int x,int y)

{
int z=x+y;
 return z;
  
  
}

int main()




{
	
	int num1=10;
	int num2=20;
	
	int a=100;
	int sum=0;
	int b=200;
	sum=Add(a,b);
	sum=Add(num1,num2);
	
	printf("sum=%d\n",sum);

	



	return 0;

}



//int main()
//
//
//{
//
//      int line=0;
//      printf("�������\n");
//
//
//	 
//		  while (line<5000)
//		  {
//			printf("��һ�д���: %d\n",line);  
//			  
//			  line++;
//
//		  }
//
//
//	 if(line>=5000)
//		 printf("��offer\n");
//	 return 0;
//
//}

