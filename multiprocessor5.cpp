#include<iostream>
#include<string.h>
using namespace std;
class points{
	public :
		int feet;
		int inch;
		void setData(int feet,int inch)
		{
			this->feet = feet;
			this->inch = inch;
		}
		void getData()
		{
			cout<<"feet = "<<feet<<"inch = "<<inch<<endl;
		}
		points operator+(points dist)
		{
			points ans;
			ans.feet = this->feet + dist.feet;
			ans.inch = this->inch + dist.inch;
			return ans;
		}
};
int main()
{
	points d,d1,d2;
	d.setData(13 , 8);
	d.getData();
	d1.setData(12 , 6);
	d1.getData();
	d2 = d + d1;
	d2.getData();
}
