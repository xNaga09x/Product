#include "Product.h"
#include <vector>
#include <fstream>

int main()
{
	std::vector<Product> products;
	uint32_t id;
	std::string name;
	float price;
	uint16_t VAT;
	std::string TypeOrDate;

	for(std::ifstream file("product.prodb"); !file.eof(); /*empty*/)
	//while (!file.eof())    //verif. sa pot citi
	{
		file >> id >> name >> price >> VAT >> TypeOrDate;
		//Product product = Product(id, name, price, VAT, TypeOrDate); sunt identice
		Product product(id, name, price, VAT, TypeOrDate);
		products.push_back(product);
	}
}