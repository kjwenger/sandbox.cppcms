#include "rests.hpp"

namespace sandbox {
namespace cppcms {

bool rests::DEBUG = false;

rests::rests(cppcms::service& srv) : cppcms::application(srv) {

};

rests::~rests() {

}

} /* namespace cppcms */
} /* namespace sandbox */
