#include "Rmax.hpp"

#include <limits>

Rmax Rmax::zero(-std::numeric_limits<double>::infinity());
Rmax Rmax::unit(0);

Rmax::Rmax() 
: value(-std::numeric_limits<double>::infinity()) 
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

}
Rmax Rmax::operator*(Rmax other)
{

}
Rmax& Rmax::operator=(Rmax other)
{

}
bool Rmax::operator==(Rmax& other)
{

}
std::string Rmax::toString()
{
}