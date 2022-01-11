#include<iostream>
#include<vector>
#include<deque>
#include<list>
#include<stack>


using namespace std;
int main(){
     deque<int> s1;
     s1.push_front(30);
     s1.push_back(45);
     deque<int>:: iterator it1;
     it1=s1.begin();
     
     std::cout<<*it1<<" ";
     it1++;
     
         std::cout<<*it1<<" ";


}