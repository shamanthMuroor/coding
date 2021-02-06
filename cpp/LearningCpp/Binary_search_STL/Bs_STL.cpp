#include <algorithm>
#include <iostream>

void show(int a[], int asize)
{
	for (int i = 0; i < asize; i++)
	{
		std::cout << a[i] << " ";
	}
}

int main()
{
	int a[] = { 2, 8, 90, 77, 45, 89, 23 };
	int asize = sizeof(a) / sizeof(a[0]);
	std::cout << "Array before sorting: ";
	show(a, asize);
	std::sort(a, a + asize);
	std::cout << std::endl << "Array after sorting: ";
	show(a, asize);

	//Example to search for number say 77
	if (std::binary_search(a, a + asize, 77))
		std::cout << std::endl << "Element 77 found in the array";
	else
		std::cout << std::endl << "Element 77 not found in the array";

	//Example to search for number say 38
	if (std::binary_search(a, a + asize, 38))
		std::cout << std::endl << "Element 38 found in the array";
	else
		std::cout << std::endl << "Element 38 not found in the array";

	std::cin.get();
}