#include "Weapon.hpp"

class HumanB {
private:
    std::string _name;
    Weapon*     _weapon;
public:
    HumanB(std::string);
    ~HumanB();

    void setWeapon(Weapon &weapon_type);
    void attack();
};