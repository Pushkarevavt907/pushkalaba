
#include "goods.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int d, m, y, p, q;
	char* n = new char[20];
	cout << "Введите наименование товара: "; cin.getline(n, 20);
	cout << "Введите дату поступления товара: "; cin >> d >> m >> y;
	cout << "Введите цену товара: "; cin >> p;
	cout << "Введите количество товара: "; cin >> q;

	Goods obj1(n, d, m, y, p, q);
	obj1.Print();

	string command;
	while (command != "Exit")
	{
		cout << "Введите команду (Name,Price,Markup,Markdown,Quantity,Print): "; cin >> command;
		
		if (command == "Name")
		{
			obj1.Name(n);
			obj1.Print();
		}
		if (command == "Price")
		{
			obj1.Price(p);
			obj1.Print();
		}
		if (command == "Markup")
		{
			obj1.Markup(p);
			obj1.Print();
		}
		if (command == "Markdown")
		{
			obj1.Markdown(p);
			obj1.Print();
		}
		if (command == "Quantity")
		{
			obj1.Quantity(q);
			obj1.Print();
		}
		if (command == "Print") obj1.Print();
	}
	return 0;
}