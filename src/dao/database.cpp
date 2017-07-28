#include "dao/database.hpp"

namespace sandbox_cppcms {

database::database() : db("petstore.db") {
    db.registerBeanClass<sandbox_cppcms::Pet>();
}

database::~database() {

}

void database::enumeratePets(std::vector<Pet>& pets) {
    std::vector<hiberlite::bean_ptr<sandbox_cppcms::Pet>> allBeans =
            db.getAllBeans<sandbox_cppcms::Pet>();
    pets.clear();
    for (std::vector<hiberlite::bean_ptr<sandbox_cppcms::Pet>>::const_iterator
            iterator = allBeans.begin();
            iterator != allBeans.end();
            iterator ++) {
        const hiberlite::bean_ptr<sandbox_cppcms::Pet>& aPet = *iterator;
//        pets.push_back(*aPet);
    }
}

//Pet & database::createPet(const Pet const & pet) {
//    hiberlite::bean_ptr<sandbox_cppcms::Pet> copiedBean = db.copyBean(pet);
//    *copiedBean;
//}

void database::init() {
    db.dropModel();
    db.createModel();
}

} /* namespace sandbox_cppcms */
