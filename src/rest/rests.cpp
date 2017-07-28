#include "rest/rests.hpp"
#include "rest/pets.hpp"
#include "rest/stores.hpp"
#include "rest/users.hpp"

#include <cppcms/url_dispatcher.h>
#include <cppcms/url_mapper.h>
#include <cppcms/http_request.h>
#include <cppcms/http_response.h>
#include <cppcms/json.h>

namespace sandbox_cppcms {

rests::rests(cppcms::service& srv) : cppcms::application(srv) {
    cppcms::application::attach(new pets(srv),
            "pets",
            "/pets{1}", // mapping
            "/pets((.*))?", // dispatching
            1);
    cppcms::application::attach(new stores(srv),
            "stores",
            "/stores{1}", // mapping
            "/stores((.*))?", // dispatching
            1);
    cppcms::application::attach(new users(srv),
            "users",
            "/users{1}", // mapping
            "/users((.*))?", // dispatching
            1);

    dispatcher().map("GET","", &rests::get_info, this);
};

rests::~rests() {

}

void rests::get_info() {
    cppcms::json::value info;
    info["name"] = "sandbox-cppcms";
    info["version"] = "0.1.0";

    response().out() << info;
}

} /* namespace sandbox_cppcms */
