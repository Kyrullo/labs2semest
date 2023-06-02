#include "list.hpp"

int main() {

	vector<int> array(5);
	int key, element;
	List<int> container;
	cout << "Enter elements 4 of vector:" << endl;
	for (unsigned int i = 0; i < 5; i++) {
		cin >> array[i];
	}
	container.SetArray(&array);
	container.ShowList();
	cout << "Enter element which will be added to the end:" << endl;
	cin >> element;
	container.array->insert(container.array->end(), element);
	container.ShowList();
	cout << "Delete first element:" << endl;
	container.array->erase(container.array->begin());
	container.ShowList();
	cout << "Sorting:" << endl;
	container.BubbleSort();
	container.ShowList();
	cout << "Enter key for searching:" << endl;
	cin >> key;
	cout << "Index of key: " << container.FindIndex(key) << endl;
	cout << "Minimum element: " << container.FindMinElement() << endl;

	return 0;
}