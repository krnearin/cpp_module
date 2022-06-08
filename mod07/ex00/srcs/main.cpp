#include "../includes/whatever.h"

int main()
{
	int			intA = 5, intB = -6;
	float		fltA = 42.0f, fltB = 24.0f;
	char		chrA = 'a', chrB = 'z';
	long		lonA = 7000L, lonB = -8000L;
	double		dubA = 9.95, dubB = -10.15;

	std::cout << "-----------SWAP------------" << std::endl;

	std::cout << "intA = " << intA << "; intB = " << intB << std::endl;
	::swap(intA, intB);
	std::cout << "intA = " << intA << "; intB = " << intB << std::endl;

	std::cout << "\nfltA = " << fltA << "; fltB = " << fltB << std::endl;
	::swap(fltA, fltB);
	std::cout << "fltA = " << fltA << "; fltB = " << fltB << std::endl;

	std::cout << "\nlonA = " << lonA << "; lonB = " << lonB << std::endl;
	::swap(lonA, lonB);
	std::cout << "lonA = " << lonA << "; lonB = " << lonB << std::endl;

	std::cout << "\n-----------MIN&MAX------------" << std::endl;

	std::cout << "intA = " << intA << "; intB = " << intB << std::endl;
	std::cout << "max: " << max(intA, intB) << "; min: " << min(intA, intB)
	<< std::endl;

	std::cout << "\nchrA = " << chrA << "; chrB = " << chrB << std::endl;
	std::cout << "max: " << max(chrA, chrB) << "; min: " << min(chrA, chrB)
			  << std::endl;

	std::cout << "\ndubA = " << dubA << "; dubB = " << dubB << std::endl;
	std::cout << "max: " << max(dubA, dubB) << "; min: " << min(dubA, dubB)
			  << std::endl;
}
