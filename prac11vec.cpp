#include<iostream>
#include<vector>

using namespace std;
int main(){
std::vector<int> vec1;
//vec1.erase(vec1.begin());
vector<int> :: reverse_iterator it1;
it1=vec1.rbegin();
for(;it1!=vec1.rend();it1++){
    
    std::cout<<*it1<<endl;
}
}
