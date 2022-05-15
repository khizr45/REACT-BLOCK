#include<iostream>
using namespace std;
class A{
	public:
		 virtual float Area(float L , float B){
		 	cout<<"Base class"<<endl;
			return L*B;
		}
};
class B : public A{
	public:
		float Area(float L , float B){
			return L*B;
		}
};
int main(){
	A *a;
	B b;
	A obj;
	a = &b;
	cout<<"AREA BY DERIVED CLASS: "<<a->Area(3,4)<<endl;
	a = &obj;
	cout<<"AREA BY BASE CLASS: "<<a->Area(5,4)<<endl;
}
