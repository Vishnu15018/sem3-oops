#include<iostream>

using HostName = std::string;

using IPAddress = unsigned int; 
const IPAddress NON_EXISTING_ADDRESS = 0; 
class NameServerInterface { 
    public: 
        virtual ~NameServerInterface() = default; 
        virtual void insert(const HostName&, const IPAddress&) = 0; 
        virtual bool remove(const HostName&) = 0; 
        virtual IPAddress lookup(const HostName&) const = 0; 
}; 