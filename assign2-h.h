#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
	string name, job;
	int age;
public:
	
	Person(); //default constructor

	Person(string n, int a, string j)//parametarized constructor
	{
		name = n;
		age = a;
		job = j;
	}

	//setters
	void setName(string n) { name = n; };
	void setJob(string j) { job = j; };
	void setAge(int a) { age = a; };

	//getters
	string getName() { return name; };
	string getJob() { return job; };
	int getAge() { return age; };

	void identify() { cout << "Person's name is: " << name << endl; };//identification function

	virtual ~Person() { cout << "Person destructor is called" << endl; } //destructor in base class
};

Person::Person() //default constructor
{
	static int count = 0; //defined outside of class for it to not be const
	name = "No Name";
	age = 0;
	cout << "This is object number: " << ++count << endl;
}

class Student : public Person
{
protected:
	//string name
	//string job
	// int age
	int studID;
public:
	Student() { name = "No student name"; age = 0; studID = 0; } //default constructor
	Student(string n, string j, int a, int id) { name = n; job = j; age = a; studID = id; } //parametarized constructor

	//setters
	void setJob(string j) { job = "Student"; };
	void setStudID(int id) { studID = id; };

	//getters
	int getStudID() { return studID; };
	string getJob() { return job; };

	void identify() { cout << "I am student and my name is: " << name << endl; };//identification function override 1

	~Student() { cout << "Student destructor is called" << endl; }//destructor in derived class 1
};

class Teacher : public Person
{
protected:
	//string name
	//string job
	//int age
	int teachID;
public:
	Teacher() { name = "No teacher name"; age = 0; teachID = 0; } //default constructor
	Teacher(string n, string j, int a, int id) { name = n; job = j; age = a; teachID = id; } //parametarized constructor

	//setters
	void setTeachID(int id) { teachID = id; };
	void setJob(string j) { job = "Teacher"; };

	//getters
	int getTeachID() { return teachID; };
	string getJob() { return job; };

	void identify() { cout << "I am teacher and my name is: " << name << endl; };//identification function override 2

	~Teacher() { cout << "Teacher destructor is called" << endl; }//destructor in derived class 2

};