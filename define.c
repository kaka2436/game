#include <stdio.h>


#define NUM 5+5
//#define show(str) printf("sdfasdfds\n");

typedef int haha;
void test(char * str)
{
	printf("%s\n",str);
}

int main()
{
	haha size = 20;
	//printf("%d\n",NUM*NUM);
	//printf("%d\n",size);
	int time = 100;
	float i = 89.9f;
	double d = 129.3;
	int arr[5] = {1,2,3,4,5};
	show(arr);
	char str[20] = "sadfsdf";
	show(str);
	//	test(arr);

	// 5 + 5 * 5 + 5
	//25
	//100
	//35
	return 0;
}
