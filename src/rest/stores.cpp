#include "rest/stores.hpp"

#include <cppcms/url_dispatcher.h>
#include <cppcms/url_mapper.h>
#include <cppcms/http_request.h>
#include <cppcms/http_response.h>
#include <cppcms/json.h>

namespace sandbox_cppcms {

stores::stores(cppcms::service& srv) : cppcms::application(srv) {

};

stores::~stores() {

}

} /* namespace sandbox_cppcms */
