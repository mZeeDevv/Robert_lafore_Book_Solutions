#include <iostream>
#include <fstream>
using namespace std;
class person {
	string name;
	int age;
	int marks;
public:
	void getData()
	{
		cout << "Enter name ";
		cin >> name;
		cout << "Enter Age :";
		cin >> age;
		cout << "Enter Marks : ";
		cin >> marks;
	}
	void showData()
	{
		cout << "Person Name " << name << endl << "Person Age : " << age << endl << "Marks : " << marks << endl;
	}
};
int main()
{
	person p1;
	char c;
	fstream file;

	file.open("data.dat", ios::app | ios::out | ios::in | ios::binary);
	do {
		p1.getData();
		//ofstream outfile("data.dxt", ios::binary);
		//outfile.write(reinterpret_cast<char*>(&p1), sizeof(p1));
		//outfile.close();
		file.write(reinterpret_cast<char*>(&p1), sizeof(p1));
		cout << "Enter another person? ";
		cin >> c;
	} while (c == 'y');
	file.seekg(0);
	file.read(reinterpret_cast<char*>(&p1), sizeof(p1));
	while (!file.eof())
	{
		cout << "********** DATA ***********" << endl;
		p1.showData();
		file.read(reinterpret_cast<char*>(&p1), sizeof(p1));
	}
	return 0;
}
