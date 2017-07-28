#include "rest/users.hpp"

#include <cppcms/url_dispatcher.h>
#include <cppcms/url_mapper.h>
#include <cppcms/http_request.h>
#include <cppcms/http_response.h>
#include <cppcms/json.h>

namespace sandbox_cppcms {

    users::users(cppcms::service &srv) : cppcms::application(srv) {
        dispatcher().map("POST", "", &users::create_user, this);
        dispatcher().map("GET", "/(\\d+)", &users::read_user, this, 1);
        dispatcher().map("PUT", "/(\\d+)", &users::update_user, this, 1);
        dispatcher().map("DELETE", "/(\\d+)", &users::delete_user, this, 1);
    };

    users::~users() {

    }

    void users::create_user() {
        cppcms::json::value user;

        response().out() << user;
    }

    void users::read_user(int id) {
        cppcms::json::value user;

        response().out() << user;
    }

    void users::update_user(int id) {
        cppcms::json::value user;

        response().out() << user;
    }

    void users::delete_user(int id) {
        cppcms::json::value user;

        response().out() << user;
    }

} /* namespace sandbox_cppcms */
