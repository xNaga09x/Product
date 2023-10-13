#pragma once
#include "Product.h"
#include "ProductType.h"

class NonPerishableProduct: public Product
{
public:
	NonPerishableProduct(const ProductType& productType, uint32_t id, const std::string& name, float price);
	uint16_t GetVAT() const override;
private:
	static const uint16_t kVAT = 19;
	ProductType m_productType;
};

