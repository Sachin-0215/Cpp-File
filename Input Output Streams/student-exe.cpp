/*
* write a program to store an retreive list of item in a file use serialisation 
  class items should have
* Name
* price
* Quantity
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Item
{
private:
    string name;
    float price;
    int qty;

public:
    Item() {}
    Item(string n, float p, int q);
    friend ifstream &operator>>(ifstream &fis, Item &i);
    friend ofstream &operator<<(ifstream &fos, Item &i);
    friend ofstream &operator<<(ifstream &os, Item &i);
};

int main()
{
    int n;
    string name;
    float price;
    int qty;
    cout << "Enter Number of Item : ";
    cin >> n;
    Item *list[n];
    cout << "Enter All item " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << "Item Name , price and quantity";
        cin >> name;
        cin >> price;
        cin >> qty;
        list[i] = new Item(name, price, qty);
    }
        ofstream fos("Item.txt");
        for (int i = 0; i < n; i++)
        {
            fos << *list[i];
        }
        Item item;
        ifstream fis("Item.txt");
        for (int i = 0; i < 3; i++)
        {
            fis >> item;
            cout << "Item " << i << item << endl;
        }
    

    return 0;
}

Item::Item(string n, float p, int q)
{
    name = n;
    price = q;
    qty = q;
}
ofstream &operator<<(ofstream &fos, Item &i)
{
    fos << i.name << endl
        << i.price << endl
        << i.qty << endl;
    return fos;
}
ifstream &operator>>(ifstream &fis, Item &i)
{
    fis << i.name << i.price << i.qty;
    return fis;
}
ostream &operator<<(ofstream &os, Item &i)
{
    os << i.name << endl
       << i.price << endl
       << i.qty << endl;
    return os;
}