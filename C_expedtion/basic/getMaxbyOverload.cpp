#include <iostream>
using namespace std;
/**
  *函数功能L：返回a和b的最大值
  *a和b是两个整数
  */
int getMax(int a,int b)
{
	return a>b?a:b;
}
int getMax(int *arr,int count)
{
	int temp = arr[0];
	for(int i = 1;i<count;i++)
	{
		if(temp<arr[i])
			{
			temp = arr[i];
			}
	}
	return temp;
}
int main(void)
{
	int numArr[3] = {3,8,6};
	cout<<getMax(5,3)<<endl;
	cout<<getMax(numArr,3)<<endl;
	return 0;
}

