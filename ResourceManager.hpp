#pragma once

#include "Resource.hpp"

class ResourceManager {
public:
    ResourceManager() {
        resource_ = Resource(); 
    }

    double get() {
        return resource_.get();
    }

    ResourceManager(const ResourceManager& other) {
        resource_ = other.resource_;
    }

    ResourceManager& operator=(const ResourceManager& other) {
        if (this != &other) {
            resource_ = other.resource_;
        }
        return *this;
    }

    ~ResourceManager() {
    }

private:
    Resource resource_;
};
