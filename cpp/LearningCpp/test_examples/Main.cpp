#include <iostream>

#define LOG(x) std::cout << x << std::endl

int Test(int&);

int main() {
	/*for (int i = 0; i < 5; i++) {
		std::cout << "Hello World " << i << std::endl;
	}

	int var = 8;
	int* ptr = &var;
	
	*ptr = 15;
	LOG(var);*/

	int var = 8;
	
	int res = Test(var);
	LOG(res);

	std::cin.get();
}