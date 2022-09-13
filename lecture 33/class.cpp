#include<iostream>
using namespace std;
class student{
public:
	char *name;
	int roll_number;
	int group;
private:
	int course;
public:
	student(){
		name = NULL;
		cout<<"Hello new Student\n";
	}

	void updatename(char arr[]){
		if(name != NULL){
			delete[] name;
			name = NULL;
		}
		name = new char[strlen(arr) + 1];
		strcpy(name, arr);
	}

	void setcourse(int cs){
		course = cs;
	}
	int getcourse(){
		return course;
	}

	student(char arr[], int rn, int gp, int cs){
		name = new char[strlen(arr) + 1];
		strcpy(name, arr);
		roll_number = rn;
		group = gp;
		setcourse(cs);
	}

	void printdata(){
		cout<<"name: "<<name<<endl;
		cout<<"roll number: "<<roll_number<<endl;
		cout<<"group: "<<group<<endl;
		cout<<"course: "<<course<<endl<<endl;	
	}
};
int main(){
	student a;
	a.updatename("Arpit");
	a.roll_number = 10;
	a.group = 3;
	a.setcourse(15);
	a.printdata();
	cout<<"course: "<<a.getcourse()<<endl;
	// cout<<a.name<<endl;
	// cout<<a.roll_number<<endl;
	// cout<<a.group<<endl;
	// cout<<a.course<<endl;

	char arr[] = "abc";
	student b(arr, 15, 16, 17);
	b.printdata();

	b.updatename("Cab");
	b.printdata();
	return 0;
}