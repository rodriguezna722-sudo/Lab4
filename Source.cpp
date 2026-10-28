#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

	// 1. Label and value pairing for the chart 
	std::cout << "In the hot day of July 31st of Phoenix, Arizona, the meteorologist listed these temperatures in certain times of the day, all measured in Fahrenheit." << std::endl;
	std::cout << "Military time will be used instead of standard time." << std::endl;
	std::vector<std::string> categories = { "12:00", "1:00 ","2:00 ", "3:00 ", "4:00 ", "5:00 ","6:00 ", "7:00 ","8:00 ", "9:00", "10:00","11:00", "12:00", "13:00", "14:00", "15:00","16:00", "17:00", "18:00", "19:00", "20:00", "21:00", "22:00", "23:00", "24:00" };

	std::vector<int> values = { 72,63,42,36,33,36,48,60,75,82,88,93,102,108,111,111,102,93,84,81,75,63,54,48,45 };

	std::cout << "--- TEMPERATURE BAR CHART (MEASURED IN FAHRENHEIT) --- \n\n";

	std::cout << "Each asterisk represents the value of 3 degrees Fahrenheit" << std::endl;

	// 2. Loop through the data to render horizontal bars
	for (size_t i = 0; i < values.size(); ++i) {
		// Print the label with a fixed width for clean alignment
		std::cout << categories[i] << "\t|";

		//Calculate how many asterisks to print (Value divided by 3)
		int asterisksCount = values[i]/3;

		//Loop to print the asterisks representing the value
		for (int j = 0;j < asterisksCount ; ++j) {
			std::cout << "*";
		}

		//Show the actual number at the end of the bar
		std::cout << " (" << values[i] << ")\n";
	}

	std::cout << " \t+-----------------------------\n";
	return 0;
}