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
	p1.getData();
	ofstream outfile("data.dxt", ios::binary);
	outfile.write(reinterpret_cast<char*>(&p1), sizeof(p1));
	outfile.close();

	ifstream infile("data.dxt", ios::binary);
	infile.read(reinterpret_cast<char*>(&p1), sizeof(p1));
	p1.showData();
	return 0;
}
