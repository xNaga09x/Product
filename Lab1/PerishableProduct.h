#pragma once
#include "Product.h"

class PerishableProduct: public Product
{
public:
	PerishableProduct(const std::string& date, uint32_t id, const std::string& name, float price);
	uint16_t GetVAT() const override;
private:
	static const uint16_t kVAT = 9;
	std::string m_date;
};

