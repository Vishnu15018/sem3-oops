#include<iostream>
using namespace std;

class MyClass
{
public:
virtual void fun(int , int){};
};
void func1(int a){
    std::cout<<"PRINTF"<<endl;
} 
 
int main(void)
{  void (MyClass::*fptr)(int,int)=MyClass::fun;
void* ptr=&fptr;
std::cout<<ptr<<endl;
std::cout<<&fptr<<endl;
 return 0;
}