#pragma once

#include "Resource.hpp"

class ResourceManager {
public:
    ResourceManager(const ResourceManager& other) : resource_(other.resource_) {
    }

    ResourceManager(ResourceManager&& other) noexcept : resource_(std::move(other.resource_)) {
    }

    ResourceManager& operator=(const ResourceManager& other) {
        if (this != &other) {
            resource_ = other.resource_;
        }
        return *this;
    }

    ResourceManager& operator=(ResourceManager&& other) noexcept {
    if (this != &other) {
        resource_ = std::move(other.resource_);
        }
    return *this;
    }
    ~ResourceManager() {
        // destruktor
    }

    double get() {
        return resource_.get();
    }

private:
    Resource resource_;
};
