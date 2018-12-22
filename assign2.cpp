#include <iostream>
#include <iomanip>
#include <string>
#include "Header.h"

void gettingperson(Person i)
{
	if (i.getJob() == "student")
	{
		Student s;
		int  id;
		cout << "Please enter your student ID: " << endl;
		cin >> id;
		s.setStudID(id);
		cout << "this person is: " << i.getName() << " they are " << i.getAge() << " years old and they are a " << i.getJob() << ", their ID is: " << s.getStudID() << endl;
	}

	if (i.getJob() == "teacher")
	{
		Teacher t;
		int  id;
		cout << "Please enter your teacher ID: " << endl;
		cin >> id;
		t.setTeachID(id);
		cout << "this person is: " << i.getName() << " they are " << i.getAge() << " years old and they are a " << i.getJob() << ", their ID is: "<< t.getTeachID() <<endl;
	}

}


int main()
{
	Person first;
	string n,j;
	int a, id;

	cout << "Please enter your name" << endl;
	getline(cin, n);
	first.setName(n);	
	cout << "Please enter your job (teacher or student)" << endl;
	getline(cin, j);
	first.setJob(j);
	cout << "Please enter your age" << endl;
	cin >> a;
	first.setAge(a);

	gettingperson(first);

	
	system("PAUSE");
	return 0;
}