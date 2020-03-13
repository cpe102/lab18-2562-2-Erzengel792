#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect,Rect);

int main(){
	Rect A,B;
	cout << "Please input Rect 1 (x y w h): ";
	cin>>A.x>>A.y>>A.w>>A.h;
	cout << "Please input Rect 2 (x y w h): ";
	cin>>B.x>>B.y>>B.w>>B.h;
	cout << "Overlap area = ";
	cout<<overlap(A,B);	
	return 0;
}

double overlap(Rect A , Rect B){
	double over_x , over_y;
	double lap1_x = A.x + A.w;
	double lap2_x = B.x + B.w;

	over_x = min(lap1_x,lap2_x) - max(A.x,B.x);

	double lap1_y = A.y - A.h;
	double lap2_y = B.y - B.h;

	over_y = min(A.y,B.y) - max(lap1_y,lap2_y);

	if(over_x * over_y<0)return 0;
	else return over_x * over_y;
}
