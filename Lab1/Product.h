#pragma once
#include <iostream>
#include "ProductType.h"
#include "IPriceable.h"

class Product: public IPriceable
{
public:
	Product(uint32_t id, const std::string& name, float price);
	std::string GetName() const override;
	float GetVATPrice() const override;
	virtual uint16_t GetVAT() const=0; //pt a face rost de TVA pt claculul TVA-Pret
private:
	uint32_t m_id;  //aloca 32 biti. "u"=unsigned
	std::string m_name;
	float m_price;
};

