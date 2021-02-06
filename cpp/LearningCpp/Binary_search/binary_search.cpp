#include <iostream>

int binary_search(int nums[], int beg, int last, int ele)
{
	int middle;
	if (last >= 1) {
		middle = (beg + last) / 2;
		if (ele == nums[middle]) {
			return middle;
		}
		if (ele < nums[middle]) {
			return binary_search(nums, beg, middle - 1, ele);
		}
		return binary_search(nums, middle + 1, last, ele);
	}
	return -1;
}

int main()
{
	int nums[] = { 10, 20, 30, 40, 50, 60 };
	int ele; 
	int res;
	std::cout << "Enter searching element: ";
	std::cin >> ele;

	int beg = 0;
	int last = sizeof(nums)/sizeof(nums[0]);

	res = binary_search(nums, beg, last, ele);
	if (res == -1) {
		std::cout << "Element not found in array";
	}
	else {
		std::cout << "Element was found in location " << res+1;
	}
	std::cin.get();
}