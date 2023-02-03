#pragma once
#include <string>
#include "Gun.h"
using namespace std;

class Soldier
{

public:
    Soldier(string name);
    void addBullet(int num);
    void addGun(Gun* ptr);
    bool fire();

private:
    string name;
    Gun* gunPtr;
};