#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#define N 5
using namespace std;
string sort_type;
struct employee {
	string name;
	string position;
	int experience;
	int salary;

	employee(){}
	employee(string name, string pos, int exp, int salary): 
            name(name), position(pos), experience(exp), salary(salary) {}
};
bool operator==(const employee& x, const employee& y) {
	return x.name == y.name;
}
bool operator<(const employee& x, const employee& y) {
	return x.name < y.name;
}
bool BySalary(const employee& x, const employee& y) {
	sort_type = "by salary";
	return x.salary > y.salary;
}
bool ByExperience(const employee& x, const employee& y) {
	sort_type = "by experience";
	return x.experience > y.experience;
}
void printAll(const employee& x) {
	cout << setw(12) << x.name
		<< setw(6) << x.salary
		<< setw(3) << x.experience <<endl;
}
int calculate_average_salary(vector <employee> emps){
	int avg = 0;
	for (int i = 0; i < emps.size(); i++) {
		avg += emps[i].salary;
	}
	return (avg / emps.size());
}
void printalldata(vector <employee> emps, int total) {
	cout << endl
		<< sort_type << ":" << endl;
	for_each(emps.begin(), emps.end(), printAll);
	cout << "Average salary: " << calculate_average_salary(emps)<<endl
    << "Sum of salaries: " << total << endl;
	cout <<endl;
	cout << endl;
}
template<class T> class Sum {
	int total;
public:
	Sum() : total(0) {}
	void operator()(const T& x) {
		total += x.salary;
	}
	int Total() { return total; }
};

vector <employee> getFileContent(string fileName )
{
	vector <employee> employees(N);
	ifstream in_file(fileName);

	if (!in_file)
	{
		cerr << "Cannot open the File : " << fileName << endl;
		exit(1);
	}
	string str;
	int i = 0;
		while (i < N && in_file >> employees[i].name >> employees[i].position
                 >>employees[i].experience >> employees[i].salary)
		{
			i++;
		}
	in_file.close();
	return employees;
}
int main() {
	vector<employee> employees(N);
	vector<employee> employees_from_file(N);
	Sum<employee> employees_sum;
	Sum<employee> employees_from_file_sum;
	employees[0] = *new employee("Rakib", "Softwer-Developer", 3, 2200);
	employees[1] = *new employee("Rifat", "Data-base administrator", 2, 1800);
	employees[2] = *new employee("Parvez", "Accountant", 2, 2500);
	employees[3] = *new employee("Ashraf", "Doctor", 4, 3500);
	employees[4] = *new employee("Tipu", "Mechanical Engineer", 3, 2000);	
	sort(employees.begin(), employees.end(), ByExperience);
	employees_sum = for_each(employees.begin(), employees.end(), employees_sum);

	printalldata(employees, employees_sum.Total());
	
	employees_from_file = getFileContent("Data.txt");
	sort(employees_from_file.begin(), employees_from_file.end(), BySalary);
	employees_from_file_sum = for_each(employees_from_file.begin(), 
                        employees_from_file.end(),  employees_from_file_sum);

	printalldata(employees_from_file, employees_from_file_sum.Total());

	return 0;
}
