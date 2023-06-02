#include <cstring>
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


template <class T>


class List {
    public:
	vector<T> *array;

	T FindIndex(T element);

	void ShowList();

	void BubbleSort();

	T FindMinElement();

	void SetArray(vector<T> *d);
};

template <class T> void List<T>::SetArray(vector<T> *d) {
	this->array = d;
}

template <class T> void List<T>::ShowList() {
	cout << "array:" << endl;
	for (unsigned int i = 0; i < array->size(); i++) {
		cout << "[" << i << "] " << array->at(i) << endl;
	}
	cout << "Size:" << array->size() << endl;
}

template <class T> void List<T>::BubbleSort() {
	for (unsigned long int i = 0; i < array->size() - 1; i++) {
		for (unsigned long int j = (array->size() - 1); j > i; j--) {
			if (array->at(j- 1) > array->at(j)) {
				vector<T> temp(1);
				temp[0] = array->at(j -1);
				array->at(j - 1) = array->at(j);
				array->at(j) = temp[0];
			}
		}
	}
}

template <class T> T List<T>::FindIndex(T element) {
	T rez = -1;
	for (int i = 0; (unsigned)i < array->size(); i++) {
		if (array->at((unsigned)i) == element) {
			rez = i;
		}
	}
	return rez;
}

template <class T> T List<T>::FindMinElement() {
	this->BubbleSort();
	return array->at(0);
}