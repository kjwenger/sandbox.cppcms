#pragma once

#include <cppcms/application.h>
#include <cppcms/service.h>

namespace sandbox_cppcms {

class stores : public cppcms::application {
public:
    stores(cppcms::service& srv);
    virtual ~stores();
};

} /* namespace sandbox_cppcms */
