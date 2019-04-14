#include<iostream>

using namespace std;

class point {
public:
// CONSTRUCTOR
point(double initial_x = 0.0, double initial_y = 0.0); // MODIFICATION MEMBER FUNCTIONS
void shift(double x_amount, double y_amount);
void rotate90( );
// CONSTANT MEMBER FUNCTIONS
double get_x( ) const { return x; }
double get_y( ) const { return y; }
private:
double x; // x coordinate of this point double y; // y coordinate of this point
};

int main(){
	point p1, p2(20.0), p3(50,60);
	cout<<p1.get_x<<" "<<p1.get_y<<endl;
	cout<<p2.get_x<<" "<<p2.get_y<<endl;
	cout<<p3.get_x<<" "<<p3.get_y<<endl;
	p1 = p3;
	p1.rotate90();
	cout<<p1.get_x<<" "<<p1.get_y<<endl;
}