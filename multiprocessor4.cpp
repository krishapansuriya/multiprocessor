#include<iostream>
#include<string.h>
using namespace std;
class points{
	public :
		int x;
		void setData(int x)
		{
			this->x = x;
		}
		void getData()
		{
			cout<<"x = "<<x<<endl;
		}
		points operator++(int)
		{
			points ans;
			ans.x = x++;
			return ans;
		}
		points operator--(int)
		{
			points ans;
			ans.x = x--;
			return ans;
		}
};
int main()
{
	points p,p1;
	p.setData(100);
	p.getData();
	p++;
	p.getData();
	cout<<"--------------------------------"<<endl;
	p1.setData(100);
	p1.getData();
	p1--;
	p1.getData();
}
