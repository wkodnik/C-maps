# include <iostream>

using namespace std;
template <class T>
class TaxCalculator {
private:
	T taxRate;
public:
	void set_taxRate(T taxRate) {
		this->taxRate = taxRate;
	}
	T calculateTax(T amount) {
		return amount * taxRate - amount;
	}

};

int main() {
	int num;
	TaxCalculator<int> a;
	TaxCalculator<double> b;
	a.set_taxRate(2);
	b.set_taxRate(1.13);
	cout << "int " << a.calculateTax(10) << endl;
	cout << "double " << b.calculateTax(10.0) << endl;
	cin >> num;



	return 0;
}