#include <iostream>
#include <list>
#include <set>
#include <vector>
#include <string>
#include <iterator>

template <class T>
void print_container(T test){

	for (auto it = test.begin(); it != test.end(); ++it) {
		std::cout << *it ;
		if (std::next(it) != test.end()) {
			std::cout << ", ";
		}
		else
			std::cout << ". ";
	}
	std::cout << std::endl;
}


int main()
{
	std::set<std::string> test_set = { "one", "two", "three", "four" };
	print_container(test_set); // four one three two. помните почему такой порядок? :)

	std::list<std::string> test_list = { "one", "two", "three", "four" };
	print_container(test_list); // one, two, three, four

	std::vector<std::string> test_vector = { "one", "two", "three", "four" };
	print_container(test_vector); // one, two, three, four

}