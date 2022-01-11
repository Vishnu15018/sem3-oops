#include<iostream>
using namespace std;
template<class T, int z>
class stacks{
    public:
    T a;
    int b;
    stacks(int x){
        b=z;
        a=x;
    }
};
int main(){
    stacks <int,20> s1(20);
    std::cout<<s1.a<<"  "<<s1.b;

} 

