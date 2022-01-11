#include<iostream>
#include<vector>
#include<queue>

using namespace std;
int main(){
     std::priority_queue <int> pq1,pq2;
    pq1.push(20);
     pq1.push(3);
     pq1.push(233);
     pq1.push(9);
     pq1.push(5);
     pq1.swap(pq2);
     std::cout<<"order: ";
     while(!(pq2.empty())){
     std::cout<<pq2.top()<<" ";
     pq2.pop();

     }
     std::cout<<std::endl;
     std::cout<<"pq1 elements"<<pq1.top()<<std::endl;
} 