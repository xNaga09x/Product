#include "Product.h"
//la tipuri basic de date nu se pune const
Product::Product(uint32_t id, const std::string& name, float price)
	:m_id(id)
	, m_name(name)
	, m_price(price)
{
	//m_id=id; este mai eficienta cu : deoarece nu se mai face o atribuire in plus
}

std::string Product::GetName() const
{
	return m_name;
}

float Product::GetVATPrice() const
{
	return m_price+(GetVAT()*m_price/100);
}
