#pragma once

#include <string>
#include <vector>

namespace sandbox_cppcms {

class Category {
public:
    int id;
    std::string name;
};

enum PetStatus {
    available,
    pending,
    sold
};

class Pet {
public:
    int id;
    Category category;
    std::string name;
    std::vector<std::string> photoUrls;
    std::vector<std::string> tags;
    PetStatus status;
};

} /* namespace sandbox_cppcms */
