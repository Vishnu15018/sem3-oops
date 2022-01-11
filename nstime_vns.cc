#include "vns.h"
#include <iostream>
#include <fstream>
#include <chrono>
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

    auto start = chrono::steady_clock::now();
    IPAddress isfound = v.lookup(testhost);
    auto stop = chrono::steady_clock::now();
    auto timespan = chrono::duration<double, milli>(stop - start);

    if(isfound)
        cout << "[" << testhost << "] found at IP [" << isfound << "] in " << timespan.count() << " milliseconds\n";
    else 
        cout << "[" << testhost << "] not found.\n";


    cout << "\n---END OF TEST---";


}