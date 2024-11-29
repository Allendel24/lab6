#include<iostream>
#include<cmath>
using namespace std;

double deg2rad(double deg){
    double rag = deg*M_PI/180.00;
    return rag;
}

double rad2deg(double rad2){
    double deg2 = rad2*180.00/M_PI;
    return deg2;
}

double findXComponent(double u1,double u2,double a1,double a2){
    double ux = (u1*cos(a1)) + (u2*cos(a2));
    return ux;
}

double findYComponent(double v1,double v2,double b1,double b2){
    double uy = (v1*sin(b1)) + (v2*sin(b2));
    return uy;
}

double pythagoras(double x,double y){
    double z = x*x + y*y;
    return sqrt(z);
}

void showResult(double c,double d){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    cout << "Length of the resultant vector = " << c << endl;
    cout << "Direction of the resultant vector (deg) = " << d << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}