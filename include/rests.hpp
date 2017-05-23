#pragma once

#include <cppcms/application.h>
#include <cppcms/service.h>

namespace sandbox {
namespace cppcms {

class rests : public cppcms::application {
public:
    rests(cppcms::service& srv);
    virtual ~rests();
};

} /* namespace cppcms */
} /* namespace sandbox */
