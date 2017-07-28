#pragma once

#include <hiberlite/hiberlite.h>

#include <vector>

#include "model/Pet.hpp"

namespace sandbox_cppcms {

class database {
public:
    database();
    virtual ~database();

    void enumeratePets(std::vector<Pet>& pets);
//    Pet & createPet(const Pet const & pet);
private:
    void init();

    hiberlite::Database db;
};

} /* namespace sandbox_cppcms */
