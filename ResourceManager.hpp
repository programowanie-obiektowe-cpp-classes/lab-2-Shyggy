#pragma once
#include<iostream>
#include "Resource.hpp"

class ResourceManager
{
private:
    Resource* v1;

public:
    ResourceManager() { v1 = new Resource(); }
    ~ResourceManager() { delete v1; }
    ResourceManager(const ResourceManager& a) 
    { 
        v1 = new Resource(*a.v1);

    }
    ResourceManager& operator=(const ResourceManager& a) { v1 = new Resource(*a.v1);
        return *this;
    }
    double get() { return (*v1).get();}

};


