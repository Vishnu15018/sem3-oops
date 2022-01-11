#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<deque>
using namespace std;
class Employee{
    public:
    string name;
    int salary;
    void set(string a,int b){
        name=a;
        salary=b;
    }
};
int main(){
    std::multimap<char,int> m1({{'a',3},{'f',5}});
    std::multimap<char,int>::iterator it1;

    m1.insert(std::pair<char,int>('a',23));
    multimap<char,int> m2(m1);
        it1=m1.begin();
     std::cout<<"values with key a is "<<m1.count('a')<<"\n";
    for(;it1!=m1.end();it1++)
    std::cout<<it1->first<<" "<<it1->second<<endl;
    
       
    
   
}