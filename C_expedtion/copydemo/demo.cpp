#include <iostream>
#include <stdlib.h>
#include "Array.h"
using namespace std;

/*
 *  * 定义一个Array类，数据成员为m_iCount，成员函数包括
 *   * 数据封装函数、构造函数、拷贝构造函数和析构函数，验证浅拷贝
 *    * 增加数据成员m_pArr，并增加改造构造函数、拷贝构造函数和析构函数
 *     * 验证深拷贝
 *     */
int main(void)
{
 Array arr1(5);
// arr1.setCount(5);
 Array arr2(arr1);
// cout<<"arr.m_iCount "<<arr2.getCount()<<endl; 
 arr1.printArr();
 arr2.printArr();
	        return 0;
}  
