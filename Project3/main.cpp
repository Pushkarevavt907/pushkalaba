
#include "goods.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	
	int d, m, y, p, q;
	char* n = new char[20];
	cout << "Enter product name: "; cin.getline(n, 20);
	cout << "Enter product price: "; cin >> d >> m >> y;
	cout << "Enter product quantity: "; cin >> p;
	cout << "Enter the product markup in %: "; cin >> q;

	Goods obj1(n, d, m, y, p, q);
	obj1.Print();

	string command;
	while (command != "Exit")
	{
		cout << "Enter command (Name,Price,Markup,Markdown,Quantity,Print): "; cin >> command;
		
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