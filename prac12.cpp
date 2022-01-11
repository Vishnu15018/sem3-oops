// count algorithm example
#include <iostream>     // std::cout
#include <algorithm>    // std::count
#include <vector>       // std::vector
 using std::cout; 
 using std::cin; 
 using std::endl; 
int main () {
    std::istream_iterator<int> inputint(cin);
    int num1=*inputint;
    inputint++;
    int num2=*inputint;
    //std::ostream_iterator <int> outputint(cout);
     std::ostream_iterator<int> outputInt( cout );
    std::cout<<"sum is ";
    *outputInt=num1+num2;

/*   // counting elements in array:
  int myints[] = {10,20,30,30,20,10,10};   // 8 elements
  int mycount = std::count (myints, myints+8, 10);
  std::cout << "10 appears " << mycount << " times.\n";

  // counting elements in container:
  std::vector<int> myvector (myints, myints+8);
  mycount = std::count (myvector.begin(), myvector.end(), 20);
  std::cout << "20 appears " << mycount  << " times.\n";

  return 0; */
}