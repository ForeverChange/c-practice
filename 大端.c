#include <stdio.h>
check_SYS()
{
	int a = 1;
	return *(char*)&a;
}
int main()
{
	int ret = check_SYS();
	if (ret==1)
	{
		printf("С��");
	}
	else
	
	{
		printf("���");
	}
	return 0;
}