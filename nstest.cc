#include "vns.h"
#include <iostream>
#include <fstream>
using namespace std;

int main() {

    vns v;
    ifstream infile("nameserverdata.txt");

    HostName hn, testhost;
    IPAddress ip;

    
    cout << "LOADING FILE [nameserverdata.txt] . . .\n";
    while(infile >> hn >> ip) {

        v.insert(hn,ip);
    }
    cout << "FILE [nameserverdata.txt] LOADED.\n";

    
    cout << "\nEnter hostname to be searched : ";
    cin >> testhost;

    cout << "Searching for [" << testhost << "] . . .\n";
    IPAddress isfound = v.lookup(testhost);

    if(isfound)
        cout << "[" << testhost << "] found at IP [" << isfound << "]\n";
    else 
        cout << "[" << testhost << "] not found.\n";

    
    
    cout << "\nEnter hostname to be deleted : ";
    cin >> testhost;

    bool isdel = v.remove(testhost);
    if(isdel) 
        cout << "[" << testhost << "] deleted.\n";
    else
        cout << "[" << testhost << "] not found.\n";

    cout << "\n---END OF TEST---";
    

}