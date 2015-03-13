#ifndef RMAX_HPP
#define RMAX_HPP
class Rmax
{
	public://comment1
	Rmax(); 
	Rmax(double value); 
	Rmax(Rmax& other); //comment2

	Rmax operator+(Rmax other);
	Rmax operator*(Rmax other);//comment3
	Rmax& operator=(Rmax other);
	bool operator==(Rmax& other);//comment4

	std::string toString();

	double value;//comment5
	static Rmax zero; 
	static Rmax unit;
};
#endif 