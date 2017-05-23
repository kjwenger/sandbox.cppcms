#include <cppcms/application.h>
#include <cppcms/service.h>
#include <cppcms/applications_pool.h>
#include <iostream>

int main(int argc, char* argv[]) {
    try {
        cppcms::service srv(argc, argv);
//        srv.applications_pool().mount(
//            cppcms::applications_factory<
//                sandbox::cppcms::applications>());
        srv.run();
    } catch (std::exception const &e) {
        std::cerr << "e=" << e.what();
        return 1;
    }
    return 0;
}