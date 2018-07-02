// use for to calculate the integers between them
#include <iostream>
int main()
{
    std::cout<<"Please input two numbers "<<std::endl;
    int a = 0,b = 0,t =0;
    std::cin>>a>>b;
    if (a<(b-1))
    {
        std::cout<<"The integer between the two numbers is :"<<std::endl;
    }
    else if(b<(a-1))
    {
        t = a;
        a = b;
        b = t;
        std::cout<<"The integer between the two numbers is :"<<std::endl;
    }
    else 
    {
        std::cout<<"There is no integer between the two numbers"<<std::endl;
    }
    for (;a<(b-1);++a)
    {
        std::cout<<a+1<<" ";
    }
    
    return 0;
}