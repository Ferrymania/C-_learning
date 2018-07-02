//input some numbers and calculate the sum
#include <iostream>
int main()
{
    int sum = 0,value = 0;
    std::cout<<"Please input some numbers and use Crtl + D to end :"<<std::endl;
    while(std::cin>>value)
    {
        sum += value;
    }
    std::cout<<"The sum is "<<sum<<std::endl;
    return 0;
}