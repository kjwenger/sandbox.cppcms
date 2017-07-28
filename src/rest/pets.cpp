#include "rest/pets.hpp"

#include <cppcms/url_dispatcher.h>
#include <cppcms/url_mapper.h>
#include <cppcms/http_request.h>
#include <cppcms/http_response.h>
#include <cppcms/json.h>

namespace sandbox_cppcms {

pets::pets(cppcms::service &srv) : cppcms::application(srv) {
    dispatcher().map("GET", "", &pets::enumerate_pets, this);
    dispatcher().map("POST", "", &pets::create_pet, this);
    dispatcher().map("GET", "/(\\d+)", &pets::read_pet, this, 1);
    dispatcher().map("PUT", "/(\\d+)", &pets::update_pet, this, 1);
    dispatcher().map("DELETE", "/(\\d+)", &pets::delete_pet, this, 1);
};

pets::~pets() {

}

void pets::enumerate_pets() {
    cppcms::json::value pets;

    response().out() << pets;
}

void pets::create_pet() {
    cppcms::json::value pet;

    response().out() << pet;
}

void pets::read_pet(int id) {
    cppcms::json::value pet;

    response().out() << pet;
}

void pets::update_pet(int id) {
    cppcms::json::value pet;

    response().out() << pet;
}

void pets::delete_pet(int id) {
    cppcms::json::value pet;

    response().out() << pet;
}

} /* namespace sandbox_cppcms */
