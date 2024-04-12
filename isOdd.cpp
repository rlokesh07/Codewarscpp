#include <vector>
#include "FindOdd.h"
int FindOdd::isOdd(const std::vector<int>& numbers) {
	std::vector<bool> odd(numbers.size(), false);

	for (int i = 0; i < numbers.size(); i++) {
	
		int count = 0;
		for (int j = 0; j < numbers.size(); j++) {
			if (numbers[i] == numbers[j]) {
				count++;
			}
		}
		
		odd[i] = (count % 2 != 0);
	
	}


	for (int i = 0; i < numbers.size(); i++) {
		if (odd.at(i)) {
				return numbers[i];
		}
	}
	return -1;
}