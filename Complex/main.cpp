#include <iostream>
#include <vector>
#include <string>
#include <complex>
#include <numeric>

int main()
{
	std::complex<double> first(1.0, 2.0);
	std::cout << first << '\n';
	
	std::complex<double> second;
	std::cin >> second;
	std::cout << second << '\n';
	
	std::vector<std::complex<double>> vComplex = {std::complex<double>(1.1, 2.2), std::complex<double>(2, 3),
		std::complex<double>(3, 4), std::complex<double>(4, 5), std::complex<double>(5, 6),
		std::complex<double>(6, 7), std::complex<double>(7, 8), std::complex<double>(8, 9),
		std::complex<double>(9, 10), std::complex<double>(10, 11)};

	for (int i = 0; i < 10; i++)
	{
		std::cout << i << ": " << vComplex[i] << '\n';
	}

	std::complex<double> init(0, 0);
	std::complex<double> sum = std::accumulate(vComplex.begin(), vComplex.end(), init);
	std::cout << sum << '\n';
	

	return 0;
}