#include "goods.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int Goods::count = 0;

Goods::Goods()
{
    name = _strdup("No name");
    year = 0;
    mounth = 0;
    day = 0;
    price = 0;
    quantity = 0;
    count++;
}

Goods::Goods(const char* n, int d, int m, int y, int p, int q)
{
    name = _strdup(n);
    year = y;
    mounth = m;
    day = d;
    price = p;
    quantity = q;
    count++;
}

Goods::Goods(const Goods& s)
{
    name = s.name;
    day = s.day;
    mounth = s.mounth;
    year = s.year;
    price = s.price;
    quantity = s.quantity;
    count++;
}

Goods::~Goods()
{
    if (name) delete[] name;
}

void Goods::Name(char* n)
{
    cin.ignore();
    n = new char[20];
    cout << "Введите наименование товара: "; cin.getline(n, 20);
    name = _strdup(n);
}

void Goods::Price(int p)
{
    cout << "Введите цену товара: "; cin >> p;
    price = p;
}

void Goods::Quantity(int q)
{
    cout << "Введите количество товара: "; cin >> q;
    quantity = q;
}

void Goods::Markup(int p)
{
    int mu;
    cout << "Введите наценку товара в %: "; cin >> mu;
    price = p + (p / 100 * mu);
}

void Goods::Markdown(int p)
{
    int md;
    cout << "Введите уценку товара в %: "; cin >> md;
    price = p - (p / 100 * md);
}

void Goods::Print()
{
    cout << "===================================================" << endl;
    cout << "Наименование: " << name << endl;
    cout << "Дата поступления: " << setw(2) << setfill('0') << day << "." << setw(2) << setfill('0') << mounth << "." << setw(4) << setfill('0') << year << endl;
    cout << "Цена: " << price << endl;
    cout << "Количество: " << quantity << endl;
    cout << "===================================================" << endl;
}