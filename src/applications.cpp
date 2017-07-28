#include "applications.hpp"
#include "rests.hpp"

namespace sandbox_cppcms {

applications::applications(cppcms::service& srv)
        : cppcms::application(srv) {
    cppcms::application::attach(new rests(srv),
            "rest",
            "/rest{1}", // mapping
            "/rest((.*))?", // dispatching
            1);

    dispatcher().assign("/shutdown", &applications::shutdown, this);
    mapper().assign("shutdown", "/shutdown");
}

void applications::shutdown() {
    service().shutdown();
}

} /* namespace sandbox_cppcms */
