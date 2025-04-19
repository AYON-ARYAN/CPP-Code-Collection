#include <iostream>
using namespace std;

class shop
{
    int item_id[1000];
    int item_price[1000];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void display_price(void);
    void set_price(void);
};

void shop::set_price(void)
{
    cout << "Enter the id of your item" << endl;
    cin >> item_id[counter];

    cout << "Enter the price of your item" << endl;
    cin >> item_price[counter];
    counter++;
}

void shop::display_price(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "Price of Item with Id " << item_id[i] << " is " << item_price[i] << endl;
    }
}

int main()
{
    shop store;
    store.initCounter();
    store.set_price();
    store.set_price();
    store.set_price();
    store.set_price();

    store.display_price();
    return 0;
}
