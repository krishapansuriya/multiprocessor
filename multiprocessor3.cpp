#include<iostream>
#include<string.h>
using namespace std;
class Mother{
	public :
		void data()
		{
			cout<<"Hello i am , Mother!"<<endl;
		}
};
class Daughter : public Mother{
	public :
		void data()
		{
			cout<<"Hello i am , Daughter for Mother!"<<endl;
		}
};
int main()
{
	Daughter d;
	d.data();
	d./*Mother::*/data();
}
