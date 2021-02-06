#include <stdio.h>

/*oid print(char* str)
{
	printf("%s\n",str);
}
int main()
{
	void (*p)(char*)=print;
	(*p)("HAHA");
	return 0;
}*/
int add(int x,int y)
{
	int z = x + y;
	return z;
}
int JIE(int x,int y)
{
	int z = x - y;
	return z;
}
int mus(int x,int y)
{
	int z = x * y;
	return z;
}
int mul(int x,int y)
{
	int z = x * y;
	return z;
}
int div(int x, int y)
{
	int z = x / y;
	return z;
}

int main()
{
	int x = 0;
	int y = 0;
	int input = 0;
	int(*Parr[5])(int, int) = {0,add,JIE,mus ,div };
	
	do 
	{
		printf("ÇëÊäÈë");
		printf("1.ADD   2.¼õ  3.³Ë    4.³ı");
		scanf_s("%d", &input);
		if (input >= 1 && input <=4)
		{
			printf("ÇëÊäÈë2¸ö²Ù×÷Êı");
			scanf_s("%d%d",&x,&y);
			int ret = Parr[input](x, y);
			printf("%d\n",ret);
		}
		else if (input==0)
		{
			printf("ÍË³ö");
		}
		else 
		{
			printf("Ñ¡Ôñ´íÎó\n");
		}


	} while (input);
	return 0;
}
