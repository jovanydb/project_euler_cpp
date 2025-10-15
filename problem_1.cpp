#include <iostream>
#include <vector>

void Solve1() {
	int res{ 0 };
	for (int i{ 1 }; i < 1000, ++i) {
		if (i % 3 == 0 || i % 5 == 0) {
			res++
		}
	}
	std::cout << res;
	return 0;
}

int main() {
	return 0;

}