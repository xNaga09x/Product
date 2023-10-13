#pragma once
#include <string>

class IPriceable {
public:
	virtual std::string GetName() const=0;
	virtual float GetVATPrice() const=0; //const pt a nu modifica campurile
};