#include "Gun.h"
#include <iostream>
using namespace std;

void Gun::addBullet(int num)
{
    this->bullet += num;
}

bool Gun::shoot()
{
    if(this->bullet<=0){
        cout<< "please reload"<<endl;
        return false;
    } 
    this->bullet-= 1;
    cout<<"shoot you!"<<endl;
    return true;
}