#include <iostream>
using namespace std;
template <class T>
class mySort {
private:
	int counter;
	T *arr;
public:
	mySort() {
		counter = 0;
		arr = nullptr;
	}
	mySort(int counter) {
		this->counter = counter;
		cout << "fill the array." << endl;
		arr = new T[counter];
		for (int i = 0; i < counter; i++) {
			cin >> arr[i];
		}
	}
	void Swap(int k) {
		T temp = arr[k];
		arr[k] = arr[k + 1];
		arr[k + 1] = temp;
	}
	void Algorithm() {
		for(int i = 0; i < counter -1; i++)
			for (int j = 0; j < counter - i - 1; j++)
				if (arr[j] > arr[j + 1])
					Swap(j);
			
	}
	void Print() {
		cout << "print array." << endl;
		for (int i = 0; i < counter; i++)
			cout << arr[i] << " ";
		cout << endl;

	}
};

int main() {

	mySort<int> a(5);
	mySort<double> b(5);
	a.Algorithm();
	a.Print();
	b.Algorithm();
	b.Print();

	return 0;
}