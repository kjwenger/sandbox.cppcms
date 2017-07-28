#pragma once

#include <cppcms/application.h>
#include <cppcms/service.h>

namespace sandbox_cppcms {

class pets : public cppcms::application {
public:
    pets(cppcms::service& srv);
    virtual ~pets();

    void enumerate_pets();
    void create_pet();
    void read_pet(int id);
    void update_pet(int id);
    void delete_pet(int id);
};

} /* namespace sandbox_cppcms */
