#pragma once

#include <cppcms/application.h>
#include <cppcms/service.h>

namespace sandbox_cppcms {

class rests : public cppcms::application {
public:
    rests(cppcms::service& srv);
    virtual ~rests();

    void info();
};

} /* namespace sandbox_cppcms */
