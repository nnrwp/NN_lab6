#include <iostream>
#include<cmath>
using namespace std;

double deg2rad(double D1){
    double R1;
    R1 = D1*(M_PI/180);
    return R1;
}

double  rad2deg(double R2){
    double D2;
    D2 = R2*(180/M_PI);
    return D2;
}

double findXComponent(double L1, double L2, double R3, double R4){
    double a, b;
    a = L1*cos(R3);
    b = L2*cos(R4);
    return a+b;
}

double findYComponent(double L3, double L4, double R5, double R6){
    double c, d;
    c = L3*sin(R5);
    d = L4*sin(R6);
    return c+d;
}

double pythagoras(double X, double Y){
    double P;
    P = sqrt(pow(X,2)+pow(Y,2));
    return P;
}

void showResult(double L, double D){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << "Length of the resultant vector = " << L << "\n";
    cout << "Direction of the resultant vector (deg) = " << D << "\n";
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
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
