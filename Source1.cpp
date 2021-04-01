#include <iostream>
#include <string>
#include <map>
using namespace std;

class Astrology {

private:
	string star;
	string dob;
	string dailyPrediction;
public:
	void setStar(string star) {
	
		this->star = star;
	}
	void setDob(string dob) {
		this->dob = dob;
	}
	void setDailiPrediction(string dailyPrediction) {
		this->dailyPrediction = dailyPrediction;
	}
	void ShowReadings() {
		cout << "Star "<< getStar() << endl;
		cout << "Star " << getDob() << endl;
		cout << "Star " << getDailyPrediction() << endl;

	}
	string getStar()const {
		return star;
	}
	string getDob()const {
		return dob;
	}
	string getDailyPrediction()const {
		return dailyPrediction;
	}


};

void PrintMenu();
void InsertNewItem(map <string, Astrology> &my_map);
void Delete(map <string, Astrology> &my_map);
void Display(map <string, Astrology>&my_map);
void Size(map <string, Astrology>&my_map);

int main() {
	map<string, Astrology> my_map;

	int choice;

	do {
		PrintMenu();

		cin >> choice;
		switch (choice) {
		case 1:
			getchar();
			InsertNewItem(my_map);
			cout << endl;
			break;
		case 2:
			getchar();
			Delete(my_map);
			break;
		case 3:
			Display(my_map);
			break;
		case 4:
			Size(my_map);
			break;
		case 5:
			exit(1);
			break;
			
		}

	} while (1);
	return 0;
}

void PrintMenu() {

	cout << "Select from the following choices:" << endl;
	cout << "1. Insert" << endl;
	cout << "2. Delete" << endl;
	cout << "3. Display" << endl;
	cout << "4. Size" << endl;
	cout << "5. Quit" << endl;
}

void InsertNewItem(map <string, Astrology>&my_map) {
	string star, dob, dailyPrediction;
	cout << "Enter star:" << endl;
	getline(cin, star);
	cout << "Enter dob:" << endl;
	getline(cin, dob);
	cout << "Enter Daily prediction:" << endl;
	getline(cin, dailyPrediction);

	Astrology a1;
	a1.setStar(star);
	a1.setDob(dob);
	a1.setDailiPrediction(dailyPrediction);

	my_map.insert(pair<string, Astrology>(star, a1));

}
void Delete(map <string, Astrology> &my_map) {
	cout << "Delete from map" << endl << endl;
	cout << "Enter star name: " << endl;

	string starName;
	getline(cin, starName);

	my_map.erase(starName);
}

void Display(map <string, Astrology>&my_map) {
	cout << "Display map" << endl << endl;
	map<string, Astrology>::iterator i;
	for (i = my_map.begin(); i != my_map.end(); i++) {
		cout<< (*i).first << endl;
		(*i).second.ShowReadings();
		cout << endl;
	}
}

void Size(map <string, Astrology>&my_map) {
	cout << "Map size" << endl << endl;
	cout << my_map.size() << endl;
}