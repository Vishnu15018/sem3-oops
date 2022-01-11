#include<iostream>
using namespace std;
class base{
     protected:
     //int a;
     int a, b;
     public:
     base()
     {a=10;
     b=20;}
     base(int c, int d){
         a=c;
     
     b=d;}
    virtual void print(){
         std::cout<<a<< " "<<b<<endl;
     }
};
class derived1:public base{
    //vishnu
    public:
    void print(){
        std::cout<<"i am from derived class"<<endl;
    }
};
class derived2: public base{
    public:
    void print(){
        std:cout<<"I am from derived 2"<<endl;
    }
};
class derivedderived:public derived1{
    //vishnu
    public:
    void print(){
        std::cout<<"i am from derivedderived class"<<endl;
    }
};
int main(){
    base *b1;
    derived1 d1;
    b1=&d1;
    b1->print();
    b1=new derivedderived();
    b1->print();
    derived1 *d2;
    d2=new derivedderived();
    d2->print();
}