// 5. Write a program to add two complex numbers using structure. The values of the complex number is to be taken from the user.
#include <iostream>
using namespace std;
struct complex{
    float real;
    float imaginary;
};

int main(){
struct complex c[2];
cout<<"enter complex no in the form of a+ib"<<endl;
for(int i=0;i<2;i++){
    cin>>c[i].real>>c[i].imaginary;
    }
cout<<c[0].real+c[1].real<<" "<<c[0].imaginary+c[1].imaginary;

return 0;
}