#include <iostream>
using namespace std;
class avg;
class student;

class avg{
public:
	float mark_avg(student);
};
class student{
	int marks[3];
	string name;
public:
	void get_data(){
		cout<<"Enter name : ";
		cin>>name;
		cout<<"Enter marks in 3 subjects : ";
		cin>>marks[0]>>marks[1]>>marks[2];
		cout<<endl;
	}

	void display(){
		avg a;
		cout<<"Name : "<<name<<endl;
		cout<<"Average Marks : "<<a.mark_avg(*this)<<endl;
	}
	friend class avg;

};
float avg::mark_avg(student s){
	return (s.marks[0] + s.marks[1] + s.marks[2])/3.0;
}

int main() {  
    student s1;
    s1.get_data();
    s1.display();
}  
