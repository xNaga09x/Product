#include "PerishableProduct.h"

PerishableProduct::PerishableProduct(const std::string& date, uint32_t id, const std::string& name, float price)
	: m_date(date)
	, Product(id, name, price)
{
}

uint16_t PerishableProduct::GetVAT() const
{
	return PerishableProduct::kVAT;
}
