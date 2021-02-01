#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning(disable:4996)
/*int main()
{
	int i = 0;
	for (i; i < 100; i++)
	{
		printf("%d  ",i);
	}
	system("pause");
	return 0;

}   */     
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (size_t i = 0; i < 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//
//	//debug 版本 报错 
//	//release 版本没有报错 自己优化了                
//	return 0;
//}

//void my_strcpy(char* dest,char* src)
//{
//	
//		while (*src != '\0')//找到最后一个字符 
//		{
//			*dest = *src;
//			src++;
//			dest++;
//		}
//		*dest = *src; //把最后一个字符给赋值过去
//	
//
//}

//void my_strcpy(char* dest, char* src)
//{
//	if (*dest != NULL && *src != NULL)  //判断指针是否有效
//	{
//		while (*dest++ = *src++)//\0 ascll 码是0  0在这里是false 所以 会停 
//		{
//			;
//		}
//	}
//
//}



//#include <assert.h>
//char * my_strcpy(char* dest, const char* src)
//{
//		assert(dest!=NULL); //断言
//		assert(src !=NULL);//断言
//		char ret = dest;
//
//		while (*dest++ = *src++)//\0 ascll 码是0  0在这里是false 所以 会停 
//		{
//			;
//		}
//		return ret;
//
//}
//int main()
//{
//	char arr1 [] = "#########";
//	char arr2[] = "lin";
//	
//	my_strcpy(arr1, arr2);
//	printf("%s\n",arr1);
//	return 0;
//
//}



#include <assert.h>
int my_strlen(const char* arr)
{
	int count = 0;
	assert(arr!=NULL);
	while (*arr!='\0')
	{
		count++;
		arr++;

	}
	return count;
}

int main()
{
	char  arr [] = "ABCDEFG";
 	int a=my_strlen(arr);
	printf("%d arr=",a);
	return 0;

}