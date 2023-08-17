#include <iostream>

using namespace std;
double exponent(double num1, double num2){
double p=1;

double a= num1;
while(p<num2) {
    num1=num1*a;
    p=p+1;
}return num1;

}
double factorial(double numx) {
int q=1;
int factorial=1;
while (q<=numx) {
    if (numx==0) {
        factorial=1;
    }
    else {factorial=factorial*q;
    q=q+1;
}
}
return factorial;
}





int main()
{ cout<<"Which calculator do you want to use arithmetic or trigonometric?"<<endl;
string calculatortype;
cin>>calculatortype;
if(calculatortype=="arithmetic") {
    double num1,num2,ans;
    string operation;

    cout<<"Enter the first number"<<endl;
    cin>> num1 ;
    cout <<"enter the second number"<<endl;
    cin>>num2;
    cout<<"Enter the operation you wish to perform, add, subtract, multiply, divide, exponent"<<endl;
    cin>> operation ;
    if (operation=="add") {
        ans=num1+num2;
        return ans;
    } else if (operation=="subtract"){
    ans=num1-num2;
    return ans;
    } else if (operation=="multiply") {
    ans=num1*num2;
    return ans;

    }else if (operation=="divide") {
     ans=num1/num2;
     return ans;
    } else if (operation=="exponent") {
    double c= num1;
    int i = 1;
    while (i<num2) {

        num1=num1*c;
        i=i+1;

    }return num1;

    }
    else {
        cout<<"the operation is invalid"<<endl;
    }

    cout<<ans<<endl;
}

else if(calculatortype=="trigonometric") {
cout<<"Enter your angle in degrees"<<endl;
 double theta;
 cin>>theta;
 double thetaRad=(theta*3.141592653589793238462643383279502884197
)/180 ;
 int i=1;
 int j=1;
 double sin=0;
 double cos=1;
 cout<<"Enter your trigonometric function"<<endl;
 string trig ;
 cin>>trig;


 while (i<10) {
    sin = sin + ((exponent(thetaRad,2*i-1))*(exponent(-1,i+1)))/factorial(2*i-1) ;
    i++; }
//return sin;
while (j<10) {
        cos = cos + ((exponent(thetaRad,2*j))*(exponent(-1,j)))/factorial(2*j) ;
        j++;

} //return cos;


if (trig=="sin") {
   cout << sin <<endl;
} else if (trig=="cos") {

 cout<<cos<<endl; }
 else if (trig=="tan") {
    cout <<sin/cos<<endl;
 }
 else if (trig=="cosec") {
    cout<< 1/sin <<endl;

 }
 else if (trig=="sec") {
    cout<<1/cos<<endl;

 }
 else if (trig=="cot") {
    cout<<cos/sin<<endl;
 }
}
}