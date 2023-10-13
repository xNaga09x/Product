#pragma once
#include <iostream>
#include "ProductType.h"

class Product
{
public:
	Product(uint32_t id, const std::string& name, float price, uint16_t VAT, ProductType type);
	Product(uint32_t id, const std::string& name, float price, uint16_t VAT, const std::string& date);
private:
	uint32_t m_id;  //aloca 32 biti. "u"=unsigned
	std::string m_name;
	float m_price;
	uint16_t m_VAT; //aloca 16 biti pt unisgned int
	ProductType m_type;
	std::string m_date;
};

