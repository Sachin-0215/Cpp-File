#include <iostream>
using namespace std;

class basicCar
{
public:
    void start()
    {
        cout << "Car started" << endl;
    }
};

class advanceCar : public basicCar
{
public:
    void playMusic()
    {
        cout << "Music Playing" << endl;
    }
};

int main()
{
    advanceCar a;
    a.start();
    a.playMusic();

    cout << endl;

    basicCar *ptr = &a;
    ptr->start();
    // ptr->playMusic();
    cout << endl;

    basicCar b;
    // advanceCar *q = &b;

    return 0;
}