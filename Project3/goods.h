class Goods
{
private:
	char* name;
	int day;
	int mounth;
	int year;
	int price;
	int quantity;
public:
	static int count;
	Goods();
	Goods(const char*, int, int, int, int, int);
	Goods(const Goods& other);
	~Goods();

	void Name(char*);
	void Print();
	void Price(int);
	void Quantity(int);
	void Markup(int);
	void Markdown(int);
};
