#include<iostream>
#include<queue>

int main(){
    std::priority_queue<double> pq;
    pq.push(20);
    pq.push(2);
    pq.pop();
    std::cout<<pq.top();
}