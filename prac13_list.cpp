#include<iostream>
#include<list>
using namespace std;
void display(list<int> &l1){
    list<int> ::iterator it1=l1.begin();
    for(;it1!=l1.end();it1++){
        std::cout<<*it1<<" ";
    }
}
int main(){
    list<int> l1{1,45,33},l2{34,56,77};
    display(l1);
    cout<<endl;
    display(l2);
    cout<<endl;
    cout<<"after mergig"<<endl;
   //l1.merge(l2);
    //display(l1);
      list<int> ::iterator it1=l1.begin();
    cout<<endl;
    l1.insert(it1,l2.begin(),l2.end());
    display(l1);
    
}