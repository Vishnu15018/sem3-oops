#include<iostream>
using namespace std;

class Employee { 
public: 
int id;
string name; 
float salary; 
Employee(int ide, string namee, float salaryx) 
{ 
id = ide; 
name = namee; 
salary = salaryx; 
} 
void display() 
{ 
cout<<this->id<<" "<<this->name<<" "<<this->salary<<endl; 
} 
};
int main(void) { 
Employee e1(101,"vishnu", 890000); 
Employee e2(102, "Nakul", 59000); 
e1.display(); 
e2.display(); 
return 0; 
}