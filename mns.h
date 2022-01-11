#include "nameserverinterface.h"
#include <iostream>
#include <map>

using namespace std;

class mns : public NameServerInterface {

    public:

        map<HostName, IPAddress> map_name_server;
    

        void insert(const HostName& hn, const IPAddress& ip) {
            
            map_name_server.insert({hn, ip});

            
        }
        bool remove(const HostName& hn) {
            bool result = false;

            if(map_name_server.find(hn) != map_name_server.end()){
                map_name_server.erase(hn);
                result = true;
            }

            return result;
            
        }
        IPAddress lookup(const HostName& hn) const {
            if(map_name_server.find(hn) != map_name_server.end())
                return map_name_server.find(hn)->second;
                
            else
                return NON_EXISTING_ADDRESS;
        }



};