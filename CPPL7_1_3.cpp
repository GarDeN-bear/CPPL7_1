#include "CPPL7_1_3.h"

void CPPL7_1_3()
{

	std::vector<double> angles{ 30, 60, 90 };
	std::vector<double> ::iterator it;
	std::cout << "[Входные данные]: ";
	for (it = angles.begin(); it < angles.end(); ++it) {
		if (it != angles.end() - 1) {
			std::cout << *it << " * 3.1415926 / 180, ";
			*it *= 3.1415926 / 180;
		}
		else {
			std::cout << *it << " * 3.1415926 / 180";
			*it *= 3.1415926 / 180;
		}
	}
	std::cout << " // перевод из градусов в радианы\n";
	std::cout << "[Выходные данные]: \n";

	int funType = 0;
	std::function<void(double)> fs = [&funType](const double& angle)
	{
		if (funType == 0) {
			std::cout << "sin: " << sin(angle) << " ";
			funType++;
		}
		else {
			std::cout << "cos: " << cos(angle) << " ";
			funType = 0;
		}
	};
	std::vector<std::function<void(double)>> functions(2, fs);
	for (const auto& angle : angles) {
		std::cout << angle << ": ";
		for (const auto& function : functions)
			function(angle);
		std::cout << std::endl;
	}
}
