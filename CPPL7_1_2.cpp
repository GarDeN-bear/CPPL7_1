#include "CPPL7_1_2.h"

std::variant<int, std::string, std::vector<int>> get_variant() {
	std::srand(std::time(nullptr));
	int random_variable = std::rand() % 3;
	std::variant<int, std::string, std::vector<int>> result;
	switch (random_variable)
	{
	case 0:
		result = 5;
		break;
	case 1:
		result = "string";
		break;
	case 2:
		result = std::vector<int>{ 1, 2, 3, 4, 5 };
		break;
	default:
		break;
	}
	return result;
}

void CPPL7_1_2()
{
	auto variant = get_variant();

	if (std::holds_alternative<int>(variant)) {
		int variant_ = std::get<int> (variant);
		std::cout << variant_;
	}
	else if (std::holds_alternative<std::string>(variant)) {
		std::string variant_ = std::get<std::string>(variant);
		std::cout << variant_;
	}
	else {
		std::vector<int> variant_ = std::get<std::vector<int>>(variant);
		for (const auto& el : variant_) {
			std::cout << el << " ";
		}
	}
	std::cout << "\n";
}
