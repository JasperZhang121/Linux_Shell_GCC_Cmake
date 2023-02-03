#include "Gun.h"
#include "Soldier.h"

void test()
{
    Soldier sod("captain");
    sod.addGun(new Gun("Desert Eagle"));
    sod.addBullet(20);
    sod.fire();
}

int main()
{
    test();
    return 0;
}