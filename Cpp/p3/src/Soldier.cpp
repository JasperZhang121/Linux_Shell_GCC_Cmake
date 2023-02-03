#include "Soldier.h"
using namespace std;

Soldier::Soldier(string name)
{
    this->name = name;
    this -> gunPtr = nullptr;
}

void Soldier:: addGun(Gun* ptr){
    this->gunPtr = ptr;
}


void Soldier:: addBullet(int num){
    this->gunPtr->addBullet(num);
}


bool Soldier:: fire(){
    return this->gunPtr->shoot();
}

