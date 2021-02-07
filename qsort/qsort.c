#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stu
{
	char name[20];
	int age;
};
 
 int struct_cmp(const void*A,const void* B) 
{
	 return ((struct stu*)A)->age - ((struct stu*)B)->age;
}

 int struct_cmp_by_name(const void* A, const void* B)
 {
	 return strcmp (((struct stu*)A)->name  , ((struct stu*)B)->name );
 }

int float_cmp(const void* A, const void* B)
{
	return( (int)(*(float*)A - *(float*)A));
}

int int_cmp(const void* A, const void* B)
{

	return *(int*)A - *(int*)B;
}

test()
{
	int arr [] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr,sz,sizeof(arr[ 0 ]) , int_cmp);
	int j = 0;

	for (j = 0; j < sz; j++)
	{
		printf("%d ", arr[j]);
	}
}

test2()
{
	float arr[] = { 9.00,8.00,7.00,6.00,5.00,4.00,3.00,2.00,1.00 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), float_cmp);
	int j = 0;

	for (j = 0; j < sz; j++)
	{
		printf("%f ", arr[j]);
	}
}

test3()
{
	struct stu s [3] = { {"a",10},{"ccc",30} ,{"bb",20} }; 
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), struct_cmp_by_name);
	
}

int main()
{
	test3();
	return 0;
} 