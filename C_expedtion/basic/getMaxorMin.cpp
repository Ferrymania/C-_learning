#include <stdlib.h>
#include <iostream>
using namespace std;

int getMaxorMin(int *arr,int count,bool isMax)
{
	int temp = arr[0];
	for(int i = 1;i<count;i++)
	{
		if(isMax)
		{
			if(temp<arr[i])
			temp = arr[i];
		}
		else
		{
			if(temp>arr[i])
			temp = arr[i];
		
		}
	}
	return temp;
}
int main(void)
{
	int a[]={1,2,3,4};
	bool isMax = false;
	cout<<"Do you want to get the max? 0 is no and 1 is yes"<<endl;
	cin>>isMax;
	cout<<getMaxorMin(a,4,isMax)<<endl;
	return 0;
}
