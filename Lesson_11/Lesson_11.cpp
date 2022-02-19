#include <iostream>
#include <string>
#include "SmartPtr.h"
#include "SmartPtr.cpp"
using namespace std;

class User
{
public:
	User(int id, string name)
	{
		_id = id;
		_name = name;
		cout << "Constructor:\t" << typeid(this).name() << "\t" << endl;
	}
	void SetId (int id) { _id = id; }
	void SetName (string name) { _name = name; }
	int GetId() { return _id; }
	string GetName() { return _name; }

private:
	int _id;
	string _name;
};

int main()
{
	SmartPtr<User> userSmart (new User(1, "Bob"));
	cout << userSmart->GetName() << endl;
	system("pause");
	return 0;
}
