#include "Product.h"
#include <vector>
#include <fstream>
#include "IPriceable.h"
#include "PerishableProduct.h"

int main()
{
	std::vector<IPriceable*> products; //retine referinta unui obiect de tip Perisabil/Neperisabil
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
		IPriceable* product = new PerishableProduct(TypeOrDate, id, name, price);
		products.push_back(product);
	}
}