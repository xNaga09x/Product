#pragma once
#include <cstdint>
enum class ProductType:uint16_t    //uint are rol ca ID-ul sa fie de tipul uint
{
	PersonalHygiene,     //fiecare are un ID predefinit 0,1... sau definit de tine
	SmallAppliences,
	Clothing
};
//folosim enum doar cand cunoastem exact ce date exista, altfel folosim string
//se fol. 5-30 val.