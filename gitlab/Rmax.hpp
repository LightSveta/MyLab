#ifndef RMAX_HPP
#define RMAX_HPP
class Rmax
{
	public:
	Rmax(); 
	Rmax(double value); 
	Rmax(Rmax t); 

	Rmax operator+(Rmax x);
	Rmax operator*(Rmax x);
	Rmax& operator=(Rmax x);
	bool operator==(Rmax& x);

	std::string ToString();

	double x;
	static Rmax _1; 
	static Rmax _0;
};
#endif 