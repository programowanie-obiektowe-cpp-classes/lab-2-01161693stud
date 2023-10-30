#pragma once

#include "Resource.hpp"

class ResourceManager {
public:
    ResourceManager() : resource_() {
    }

    ~ResourceManager() {
    }

    double get() {
        return resource_.get();
    }

    ResourceManager(const ResourceManager& other) : resource_(other.resource_) {
    }

    ResourceManager& operator=(const ResourceManager& other) {
        if (this != &other) {
            resource_ = other.resource_;
        }
        return *this;
    }

private:
    Resource resource_;
};
