#pragma once
#include <string>
using namespace std;

class Gun
{

public:
    Gun(string type){
        this->bullet = 0;
        this->type = type;
    }

    void addBullet(int num);
    bool shoot();

private:
    int bullet;
    string type;
};