#include "list.hpp"

int main() {
	int key;
	cout << "Введите тип переменной(double - 1, int - 2) " << endl;
	cin >> key;
	if (key == 1) {
	double temp_arr[temp_size], temp;
	List<double> list;
	list.SetSize(temp_size);
	cout << "Введите элементы: " << endl;
	for (int i = 0; i < temp_size; i++) {
		cin >> temp_arr[i];
	}

	list.SetData(temp_arr);
	list.print();
	cout << "Добавляемый элемент: " << endl;
	cin >> temp;
	list.AddPos(temp);
	list.print();

	cout << "Номер удаляемого элемента: " << endl;
	cin >> temp;
	list.DelPos((size_t)temp);
	list.print();

	cout << "Отсортированный массив: " << endl;
	list.SortArr();
	list.print();

	cout << "Наименьший элемент - " << list.FindMinEl() << endl;
	cout << "Введите нужный элемент: " << endl;
	cin >> temp;

	cout << "Элемент " << temp << " находится под индексом - " << list.FindPos(temp);
	return 0;
	} else {
	int temp_arr[temp_size], temp;
	List<int> list;
	list.SetSize(temp_size);

	cout << "Введите элементы: " << endl;
	for (int i = 0; i < temp_size; i++) {
		cin >> temp_arr[i];
	}

	list.SetData(temp_arr);
	list.print();
	cout << "Добавляемый элемент: " << endl;
	cin >> temp;
	list.AddPos(temp);
	list.print();

	cout << "Номер удаляемого элемента: " << endl;
	cin >> temp;
	list.DelPos((size_t)temp);
	list.print();

	cout << "Отсортированный массив: " << endl;
	list.SortArr();
	list.print();

	cout << "Наименьший элемент - " << list.FindMinEl() << endl;
	cout << "Введите нужный элемент: " << endl;
	cin >> temp;
	cout << "Элемент " << temp << " находится под индексом - " << list.FindPos(temp);
	}
}