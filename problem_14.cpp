#include <iostream>
#include <vector>

unsigned int genCollatzSeq(unsigned int num) {
	unsigned int n{ num };
	unsigned int seqLen{ 0 };
	if (n < 1) {
		std::cerr << "Collatz starting number out of range";
		return 1;
	}
	while (n != 1) {
		++seqLen;
		n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
	}
	return ++seqLen;
}

std::pair<unsigned int, unsigned int> findMaxWithIndex(const std::vector<unsigned int>& vec) {
	unsigned int maxIndex = 0;
	unsigned int maxValue = vec[0];
	for (int i = 1; i < vec.size(); ++i) {
		if (vec[i] > maxValue) {
			maxValue = vec[i];
			maxIndex = i;
		}
	}
	return { maxIndex, maxValue };
}
	
int main() {
	std::vector<unsigned int> results;
	for (int i{ 1 }; i < 1000000; ++i) {
		unsigned int result{ genCollatzSeq(i) };
		results.push_back(result); // appends result to vector
	};

	auto [maxIndex, maxValue] = findMaxWithIndex(results);
	int startingNumber = maxIndex + 1; // since index 0 corresponds to number 1

	std::cout << "Longest Collatz sequence:\n";
	std::cout << "Starting number: " << startingNumber << "\n";
	std::cout << "Sequence length: " << maxValue << "\n";

	return 0;
}









