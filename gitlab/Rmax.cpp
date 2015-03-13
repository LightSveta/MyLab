#include "Rmax.hpp"

#include <limits>

Rmax Rmax::zero(-std::numeric_limits<double>::infinity());
Rmax Rmax::unit(1);

Rmax::Rmax() 
: value(+std::numeric_limits<double>::infinity()) 
{
}
Rmax::Rmax(double value)
: value(value)
{

}
Rmax::Rmax(Rmax& other)
: value(other.value) 
{
}
Rmax Rmax::operator+(Rmax other)
{
return Rmax(std::max(value,other.value));
}
Rmax Rmax::operator*(Rmax other)
{
return Rmax(value+other.value);
}
Rmax& Rmax::operator=(Rmax other)
{
value=other.value;
	return *this;
}
bool Rmax::operator==(Rmax& other)
{
return value==other.value;
}
std::string Rmax::toString()
{	std::stringstream out;
	if(*this==zero)
		out<<"-infinity";
	else
		out<<value;
	return out.str();
}