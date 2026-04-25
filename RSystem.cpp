#include "RSystem.h"
using namespace std;
Student::Student(int id, string n, int s) : SID(id), sname(n), curr_sems(s) {};
Instructor::Instructor(int id, string n, string d) : IID(id), iname(n), dep(d) {};
Course::Course(string c, string t, int h, Instructor I) :code(c), title(t), hours(h), Ins(I), scount(0) {};
void Student::display() const
{
	cout << "Student Id:" << SID << endl;
	cout << "Student Name:" << sname << endl;
	cout << "Current Semester:" << curr_sems << endl;
	cout << "----------------------------" << endl;
}

void Instructor::display() const
{
	cout << "Instructor ID:" << IID << endl;
	cout << "Instructor Name:" << iname << endl;
	cout << "Department:" << dep << endl;
	cout << "-----------------------------------" << endl;
}
void Course::display() const
{
	cout << endl;
	cout << "--------------ALL DETAILS------------" << endl;
	cout << "------Course Details------"<< endl;
	cout << "Code: " << code << endl;
	cout << "Title: " << title << endl;
	cout << "Credit Hours: " << hours << endl;
	cout << "----------------------------" << endl;
	cout << "------Instructor Details-------"<<endl;
	Ins.display();
	cout << "-------Students Details-------" << endl;;
	for (int i = 0; i < scount; i++)
	{
		Std[i]->display();
	}
	cout << "----------------------------------------" << endl;
}
void Course::AddStudents(Student* s)
{
	if (scount < 3)
	{
		Std[scount++] = s;
	}
}
void academicAudit(const Course& obj)
{

}
void Compare(const Course& obj, const Course& obj1)
{
	cout << endl;
	cout << "-------------COMPARING-------------" << endl;
	if (obj.scount > obj1.scount)
	{
		cout << obj.title <<" has more enrollments" << endl;
	}
	else if (obj.scount < obj1.scount)
	{
		cout << obj1.title <<"has more enrollments" << endl;
	}
	else
	{
		cout << "Both have equal enrollments" << endl;
	}
	cout << "-------------------------------------" << endl;
}

void AcademicAuditor::audit(const Course& c)
{
	cout << endl; 
	cout << "-----Audit Report-----"<<endl;
	cout << "Course: " << c.code << endl;
	cout << "Total Students: " << c.scount << endl;
	cout << "------------------------" << endl;
}