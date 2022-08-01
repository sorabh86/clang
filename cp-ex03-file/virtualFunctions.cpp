#include <iostream>
using namespace std;

class Enemy
{
protected:
    int attackPower;
public:
    void setAttackPower(int a)
    {
        attackPower = a;
    }
};

class Ninja: public Enemy
{
public:
    void attack()
    {
        cout << "I am a ninja I will chop you! -" << attackPower << endl;
    }
};

class Monster: public Enemy
{
public:
    void attack()
    {
        cout << "monster will eat you! -" << attackPower << endl;
    }
};

int main()
{
    Ninja n;
    Monster m;
    Enemy *enemy1 = &n;         //because ninja is of type enemy, this is valid
    Enemy *enemy2 = &m;         //anything that an enemy can do, monster can do
    enemy1->setAttackPower(4);  //ninja is just a more specific type of enemy
    enemy2->setAttackPower(24); //every enemy has setAttackPower
    n.attack();                 //cant use enemy1 because its type Enemy
    m.attack();                 //Enemy class does not have attack
    return 0;                   //virtual members make this even easier
}
