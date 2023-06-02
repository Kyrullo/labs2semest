#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;
using std::string;
using std::vector;

class compare_class {
    public:
	bool operator()(int a, int b)
	{
		return (a < b);
	}
};

template <class ComparisonFunctor> void sort_ints(int *items, int num_items, ComparisonFunctor c) {
	for (int i = 0; i < num_items; i++) {
		for (int j = 0; j < num_items - 1; j++) {
			if (c(items[j], items[j + 1])) {
				swap(items[j], items[j + 1]);
			}
		}
	}
}