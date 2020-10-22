#include <iostream>
#include <string>
using namespace std;

class Human{
	protected:
		string name;
		int age;
	public:
		void setage(string iname , int iage)
		{
			name = iname;
			age = iage;
			}	
							
};
class student : public Human{
	public:
	void display()
	{
		cout << name << endl ;
	}
};

int main()
{	
	student anil;
	anil.setage("pras" , 24);
	anil.display();
	
	return 0;
}
