#include<iostream>
using namespace std;
int main(){
    auto square=[](int x){return x*x;} ;

    int x=square(209);
    std::cout<<x;
}