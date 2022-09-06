#include <iostream> 
#include <vector>

namespace UnitTests
{
template<class _TestType = int>
void SortTest(std::vector <_TestType>& testVec, void SortAlgo(std::vector <_TestType>&, bool (int, int)), 
	bool Comparor(int, int))
{
	// Using the algorithm
	SortAlgo(testVec, Comparor);

	// Check whether the result is correct
	int size = testVec.size();
	for (int i = 1; i < size; i++)
	{
		std::cout << "Iter number: " << i << ' ';
		if (!Comparor(testVec[i - 1], testVec[i]))
		{
			std::cout << "Error\n";
			break;
		}
		else
		{
			std::cout << "Ok\n";
		}
	}
}
}
