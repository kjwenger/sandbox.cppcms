#include "dao/database.hpp"

namespace sandbox_cppcms {

database::database() : db("petstore.db") {
    db.registerBeanClass<sandbox_cppcms::Pet>();
}

database::~database() {

}

//void database::enumeratePets(std::vector<const Pet&> pets) {
//    std::vector<hiberlite::bean_ptr<Pet>> allBeans = db.getAllBeans<Pet>();
//}
//
//void database::createPet(const Pet& pet) {
//    db.copyBean(pet);
//}

void database::init() {
    db.dropModel();
    db.createModel();
}

} /* namespace sandbox_cppcms */
