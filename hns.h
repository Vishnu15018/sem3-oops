#include "nameserverinterface.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class hns : public NameServerInterface {

    public :
        int TABLE_SIZE;
        hns(int size) {
            TABLE_SIZE = size;
        }
        
        // vector <HostName> hosts;
        vector< pair<int, IPAddress> > hashtab; 
        hash<HostName> hasher;

        void insert(const HostName& hn, const IPAddress& ip) {

            // hosts.push_back(hn);
            
            // int hashkey = hasher(hn);
            // cout << "Hashkey : " << hashkey << endl;

            hashtab.push_back(make_pair(hasher(hn), ip));

            // cout << "[" << hn << "] inserted at IP [" << ip << "] with hashkey " << hashkey << endl;

        }

        bool remove(const HostName& hn) {
            bool result = false;

            int hashkey = hasher(hn);
            auto it = std::remove_if( hashtab.begin(), hashtab.end(), 
                        [&hashkey, &result](const pair<int, IPAddress>& h) { 
                        result = true;
                        return h.first == hashkey;
                    } 
                );
            
            if(result)
                hashtab.erase(hashtab.end());

            return result;
        }

        IPAddress lookup(const HostName& hn) const {
            
            bool result = false;
            int hash = hasher(hn);

            auto it = std::find_if( hashtab.begin(), hashtab.end(), 
                        [&hash, &result](const pair<int, IPAddress>& h) { 
                        result = true;
                        return h.first == hash;
                    } 
                );

            return result ? it->second : NON_EXISTING_ADDRESS;
        }


};