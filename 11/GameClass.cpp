#include <iostream>

using namespace std;

class Character {
  public:
    Character(string name, int HP, int speed, int strength);
    string getName() const;
    bool isDead() const;
    int getSpeed() const;
    int getStrength() const;
    int getHealth() const;

    void Heal();
    void Attack(Character &opponent);

  private:
    int HP;
    int strength;
    string name;
    int speed;

    void takeDamage(int x);
};

Character::Character(string n, int b, int c, int d) {
    name = n;
    HP = b;
    speed = c;
    strength = d;
}

void Character::Attack(Character &opponent) {
    int amount;

    amount = strength - opponent.getSpeed();

    opponent.takeDamage(amount);
}

void Character::takeDamage(int x) { HP -= x; }

string Character::getName() const { return name; }
int Character::getSpeed() const { return speed; }
int Character::getStrength() const { return strength; }
int Character::getHealth() const { return HP; }

bool Character::isDead() const {
    if (HP <= 0)
        return true;

    return false;
}

void Character::Heal() { HP = int(double(HP) * 1.5); }

int main() {
    Character humanPlayer("joe", 10, 2, 10);
    Character AI("badguy", 10, 10, 10);

    int turn = 1;

    while (!humanPlayer.isDead() && !AI.isDead()) {
        AI.Attack(humanPlayer);
        humanPlayer.Attack(AI);
        cout << "Turn #" << turn << endl;
        cout << "you have " << humanPlayer.getHealth() << "hp" << endl;
        cout << "opponent " << AI.getHealth() << "hp" << endl;

        turn++;
    }

    AI.Attack(humanPlayer);

    return 0;
}
