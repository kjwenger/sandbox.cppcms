#include "applications.hpp"
#include "rests.hpp"

namespace sandbox {
namespace cppcms {

applications::applications(cppcms::service& srv)
        : cppcms::application(srv) {
    cppcms::application::attach(new rests(srv),
            "rest",
            "/rest{1}", // mapping
            "/rest((.*))?", // dispatching
            1);
}

} /* namespace cppcms */
} /* namespace sandbox */
