
#include <iostream>
#include <vector>
#include <algorithm>

void print_vector(std::vector<int>& arr) {
	for (int value : arr) {
		std::cout << value << " ";
}
	std::cout << std::endl;
}

void my_sort(std::vector<int>& arr){
	std::cout << "[IN]: ";
	print_vector(arr);
	std::sort(arr.begin(), arr.end());
	auto new_end = std::unique(arr.begin(), arr.end());
	arr.erase(new_end, arr.end());
	std::cout << "[OUT]: ";
	print_vector(arr);
}

int main()
{
	std::vector<int> arr{ 1, 1, 2, 5, 6, 1, 2, 4 };
	my_sort(arr);


}
