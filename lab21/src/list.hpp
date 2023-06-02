#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;
using std::string;

const int temp_size = 4;

template <class T>

class List {
    private:
    T *data;
    size_t size;
    public:
    
    void print();
    void SortArr();

    void AddPos(T &pos);
    
    void DelPos(size_t pos);
    
    void SetSize(size_t size);
    
    void SetData(T *arr);
    
    T FindMinEl();
    
    T FindPos(T pos);
};

template <class T>
T List<T>::FindPos(T pos) {
    T m;
    T b = 0;
    T e = (T)size - 1;
    while (data[(int)b]<= pos && data[(int)e] >= pos) {
m = b + ((pos - data[(int)b]) * (e - b)) / (data[(int)e] - data [(int)b]);
        if (data[(int)m] < pos)
            b = m + 1;
        else
            return m;
}
    
if (std::abs(data[(int)b] - pos) < 0.00001)
        return b;
    else
        return -1;
}

template <class T>
void List<T>::print() {
    cout << "Data: " << endl;
    for (size_t i = 0; i < size; i++) {
        cout << "Индекс "<< i << " - " << data[i] << endl;
}
    cout << "Size " << size << endl;
}

template <class T>

void List<T>::SetData(T *arr) {
    this->data = arr;
}

template <class T>
void List<T>::SetSize(size_t s) {
    this->size = s;
}

template <class T>
void List<T>::SortArr() {
    size_t i, j, e, m, b;
    T item;
    for (i = 0; i < size; i++) {
        item = *(data + i);
        b = 0;
        e = i;
        while (b < e) {
            m = (b + e) / 2;
        if (*(data + m) <= item)
                b = m + 1;
            else
                e = m;
}
     for (j = i; j >= e + 1; j--)
   *(data + j) = *(data + j - 1);
        *(data + e) = item;
    }
}

template <class T>
void List<T>::AddPos(T &pos) {

    T *new_array = new T[size + 1];
    cout << pos << endl;
    memcpy(new_array, data, size * sizeof(T));
    memcpy(new_array + size, &pos, sizeof(T));
    data = new_array;
    size++;
}

template <class T>
void List<T>::DelPos(size_t pos)
{
    T *new_array = new T[size - 1];
    memcpy(new_array, data, sizeof(T) * pos);
    memcpy(new_array + pos, data + pos + 1, sizeof(T) * (size - pos - 1));
    data = new_array;
    size--;
}

template <class T>
T List<T>::FindMinEl() {
    SortArr();
    return data[0];
}