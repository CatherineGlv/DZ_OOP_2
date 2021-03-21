#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

class Person {
protected:
	string name;
	int age;
	int pol;
	int weight;
public:
	Person(string n, int a, int p, int w) : name(n), age(a), pol(p), weight(w) {

	}
	
	string get_name() const {
		return name;
	}
	int get_age() const {
		return age;
	}
	int get_pol() const {
		return pol;
	}
	int get_weight() const {
		return weight;
	}

	void changeName(string n);

	void changeAge(int a);
	
	void changeWeight(int w);
};

class Student : public Person {
protected:
	int year;
	static int count;
public:
	static int get_count() {
		return count;
	}
	int get_year() const {
		return year;
	}

	Student(string n, int a, int p, int w, int y) : Person(n, a, p, w), year(y) { 
		count++;
	}
	~Student() {
		count--;
	}

	void incYear() {
		int Inc;
		cout << "Add year: " << Inc << endl;
		cin >> Inc;
		year += Inc;
	};
	
	void changeYear(int y);
	
	void print() {
		cout << name << " " << age << " " << pol << " " << weight << " " << year << endl;
	};
};

void Person::changeName(string n)
{
	cout << "Input name: " << n << endl;
	cin >> n;
}

void Person::changeWeight(int w)
{
	cout << "Input weight: " << w << endl;
	cin >> w;
}

void Student::changeYear(int y)
{
	cout << "Input year of study: " << y << endl;
	cin >> y;
}

int Student::count = 0;

int main() {
	Student number1("empty", 0, 0, 0, 0000); // ????
	number1.print();

	return 0;
}
// не могу понять как в int main засунуть для созданного студента данные при вводе с клавиатуры

class Fruit {
protected:
	string name;
	string color;
public:
	Fruit(string n, string c) : name(n), color(c) {

	}

	string get_name() const {
		return name;
	}
	string get_color() const {
		return color;
	}
};

class Apple : public Fruit {
public:
	Apple (string n, string c) : Fruit(n, c) {

	}
	string get_name() const {
		return name;
	}
	string get_color() const {
		return color;
	}
};
class Banana : public Fruit {
public:
	Banana(string n, string c) : Fruit(n, c) {

	}
	string get_name() const {
		return name;
	}
	string get_color() const {
		return color;
	}
};
class GrannySmith : public Apple {
public:
	GrannySmith(string n, string c) : Apple(n, c) {

	}
	string get_name() const {
		return name;
	}
	string get_color() const {
		return color;
	}
};

int main()
{
	Apple a("apple", "red");
	Banana b("banana", "yellow");
	GrannySmith c("apple", "green");
	std::cout << "My " << a.get_name() << " is " << a.get_color() << ".\n";
	std::cout << "My " << b.get_name() << " is " << b.get_color() << ".\n";
	std::cout << "My Granny Smith " << c.get_name() << " is " << c.get_color() << ".\n";
	return 0;
}