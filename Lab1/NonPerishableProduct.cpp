#include "NonPerishableProduct.h"

NonPerishableProduct::NonPerishableProduct(const ProductType& productType, uint32_t id, const std::string& name, float price)
	: m_productType(productType)
	, Product(id,name,price)
{
}

uint16_t NonPerishableProduct::GetVAT() const
{
	return NonPerishableProduct::kVAT;
}
