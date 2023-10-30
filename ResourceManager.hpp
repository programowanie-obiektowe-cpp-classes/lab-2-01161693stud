#pragma once

#include "Resource.hpp" 

class ResourceManager {
public:
    ResourceManager() : resource() {} 

    double get() {
        return resource.get(); 
    }
    // nauka liczenia do 5ciu xd
    ResourceManager(const ResourceManager& other) : resource(other.resource) {}
    ResourceManager(ResourceManager&& other) noexcept : resource(std::move(other.resource)) {}
    ResourceManager& operator=(const ResourceManager& other) {
        if (this != &other) {
            resource = other.resource;
        }
        return *this;
    }
    ResourceManager& operator=(ResourceManager&& other) noexcept {
        if (this != &other) {
            resource = std::move(other.resource);
        }
        return *this;
    }
    ~ResourceManager() {}

private:
    Resource resource; // Zarządzany obiekt typu Resource
};
