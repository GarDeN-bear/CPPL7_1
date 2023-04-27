#include "CPPL7_1_1.h"

void CPPL7_1_1()
{
	std::vector<int> vi{4, 7,  9, 14, 12};
	std::cout << "Входные данные: ";
	for (const auto& el : vi) {
		std::cout << el << " ";
	}
	std::cout << "\n";
	//auto multThree = [](std::vector<int>& vi) {
	//	for (auto& el : vi) {
	//		if (el % 2 != 0)
	//		el *= 3;
	//	}
	//};
	//multThree(vi);
	std::for_each(vi.begin(), vi.end(), [](int& el) {if (el % 2 != 0) { el *= 3; } });
	std::cout << "Выходные данные: ";
	for (const auto& el : vi) {
		std::cout << el << " ";
	}
	std::cout << "\n";
}
