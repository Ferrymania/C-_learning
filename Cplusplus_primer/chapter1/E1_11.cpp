// two numbers are given ,and calculate the numbers between them.
#include <iostream>
int main()
{
    std::cout<<"Please input two integers :"<<std::endl;
    int a = 0, b = 0;
    std::cin>>a>>b;
    if (a<(b-1))
    {
        while(a<(b-1))
    {
        std::cout<<a+1<<" ";
        ++a;
    }
    }
    else if(a>(b-1))
    {
           while(b<(a-1))
    {
        std::cout<<b+1<<" ";
        ++b;
    } 
    }
    else 
    {
        std::cout<<"There is no integer between the two numbers"<<std::endl;
    }
    
    return 0;
}