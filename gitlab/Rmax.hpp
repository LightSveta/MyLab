#ifndef RMAX_HPP
#define RMAX_HPP
class Rmax
{
	public:
	Rmax(); 
	Rmax(double value); 
	Rmax(Rmax& other); 

	Rmax operator+(Rmax other);
	Rmax operator*(Rmax other);
	Rmax& operator=(Rmax other);
	bool operator==(Rmax& other);

	std::string toString();

	double value;
	static Rmax zero; 
	static Rmax unit;
};
#endif 