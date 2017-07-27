#include "rests.hpp"

#include <cppcms/http_request.h>

namespace sandbox_cppcms {

rests::rests(cppcms::service& srv) : cppcms::application(srv) {
    dispatcher().map("GET","", &rests::info, this);
};

rests::~rests() {

}

} /* namespace sandbox_cppcms */
