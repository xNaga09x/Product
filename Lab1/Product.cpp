#include "Product.h"
//la tipuri basic de date nu se pune const
Product::Product(uint32_t id, const std::string& name, float price, uint16_t VAT, ProductType type)
	:m_id(id)
	, m_name(name)
	, m_price(price)
	, m_VAT(VAT)
	, m_type(type)
{
	//m_id=id; este mai eficienta cu : deoarece nu se mai face o atribuire in plus
}

Product::Product(uint32_t id, const std::string& name, float price, uint16_t VAT, const std::string& date)
	:m_id(id)
	, m_name(name)
	, m_price(price)
	, m_VAT(VAT)
	, m_date(date)
{
}
