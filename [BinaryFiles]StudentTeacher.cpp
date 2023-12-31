#include <iostream>
#include <fstream>
using namespace std;
#define MAX 100;
class Person {
	string name;
	string cnic;
public:
	virtual void setter() {
		cout << "Enter Person Name : ";
		cin >> name;
		cout << "Enter Cnic : ";
		cin >> cnic;
	}
	virtual void getter() {
		cout << "Person Name : " << name << endl << "Cnic : " << cnic << endl;
	}
};
class Student : virtual public Person {
	string degree;
	float cgpa;
public:
	void setter() {
		Person::setter();
		cout << "Enter Degree : ";
		cin >> degree;
		cout << "Enter CGPA : ";
		cin >> cgpa;
	}
	void getter() {
		Person::getter();
		cout << "Degree : " << degree << endl << "CGPA : " << cgpa << endl;
	}
};
class Teacher : virtual public Person {
	string Skill;
	int noP;
	void setter() {
		Person::setter();
		cout << "Enter Skill : ";
		cin >> Skill;
		cout << "Enter noP : ";
		cin >> noP;
	}
	void getter()
	{
		Person::getter();
		cout << "Teacher skill : " << Skill << endl << "Number of Publications : " << noP << endl;
	}
};

void savetoFile(int& count, Person* pptr[])
{
	char type;
	ofstream outfile;
	outfile.open("data.dat", ios::binary);
	if (!outfile) {
		cout << "Error Opening File" << endl;
	}
	else {
		outfile.write((char*)&count, sizeof(int));
		for (int i = 0; i < count; i++) {
			if (typeid(*pptr[i]) == typeid(Teacher)) {
				type = 't';
				outfile.write((char*)&type, sizeof(char));
				Teacher* t = dynamic_cast<Teacher*>(pptr[i]);
				outfile.write((char*)t, sizeof(Teacher));
			}
			else {
				type = 's';
				outfile.write((char*)&type, sizeof(char));
				Student* s = dynamic_cast<Student*>(pptr[i]);
				outfile.write((char*)s, sizeof(Student));
			}
		}
	}

}
void readfromFile(int count, Person* pptr[]) {
	ifstream infile;
	infile.open("data.dat", ios::binary);
	if (!infile) {
		cout << "Error opening file " << endl;
	}
	else {
		infile.read((char*)&count, sizeof(int));
		for (int i = 0; i < count; i++) {
			char obj;
			infile.read((char*)&obj, sizeof(char));
			if (obj == 't') {
				pptr[i] = new Teacher;
				Teacher* t = dynamic_cast<Teacher*>(pptr[i]);
				infile.read((char*)&t, sizeof(Teacher));
			}
			else {
				pptr[i] = new Student;
				Student* t = dynamic_cast<Student*>(pptr[i]);
				infile.read((char*)&t, sizeof(Student));
			}
		}
	}
}
int main()
{
	int chr;
	int count = 0;
	Person* pptr[100];

	do {
		cout << "************* Menu ****************" << endl
			<< "1- Add Student Record " << endl
			<< "2- Add Teacher Record " << endl
			<< "3- Display all the Data " << endl
			<< "4- Read Data from files " << endl
			<< "5- Write Data to files " << endl
			<< "6- Exit the program " << endl;
		cin >> chr;
		switch (chr)
		{
		case 1:
			cout << "Adding Student Record" << endl;
			pptr[count] = new Student;
			pptr[count]->setter();
			count++;
			break;
		case 2:
			cout << "Adding Teacher Record" << endl;
			pptr[count] = new Teacher;
			pptr[count]->setter();
			count++;
			break;
		case 3:
			cout << "************ Database **************" << endl;
			for (int i = 0; i < count; i++) {
				if (typeid(*pptr[i]) == typeid(Teacher)) {
					cout << "Teacher " << endl;
					pptr[i]->getter();
				}
				else {
					cout << "Student " << endl;
					pptr[i]->getter();
				}
			}
			break;
		case 4:
			cout << "Reading Student Record from Files" << endl;
			readfromFile(count, pptr);
			break;
		case 5:
			cout << "Saving Student Record to files" << endl;
			savetoFile (count, pptr);
			break;
		case 6:
			exit(-1);
				break;
		default:
			cout << "Try again Invalid option" << endl;
		}

	} while (true);
}
