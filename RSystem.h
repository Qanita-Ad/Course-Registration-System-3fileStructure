#ifndef RSYSTEM_H
#define RSYSTEM_H
using namespace std;
#include<iostream>
#include<string>
class Student
{
private:
	int SID;
	string sname;
	int curr_sems;
public:
	Student(int id, string n, int s);
	void display() const;
};
class Instructor
{
private:
	int IID;
	string iname;
	string dep;
public:
	Instructor(int id, string n, string d);
	void display() const;
};
class Course
{
private:
	string code;
	string title;
	int hours;
	Instructor Ins;
	Student* Std[3];
	int scount;
public:
	Course(string c, string t, int h,Instructor I);
	void AddStudents(Student* s);
	void display()const;
	void friend academicAudit(const Course& obj);
	void friend Compare(const Course& obj, const Course& obj1);
	friend class AcademicAuditor;
};
class AcademicAuditor
{
public:
	void audit(const Course& c);
};
#endif
