#include <iostream>
#include<cmath>
#include<stdio.h>

using namespace std;

int main()
{
    double a,b,h, l1,l2,l3,p, r;
    cout<<"insira 1 para calcular utilizando base e altura, insira 2 para calcular utilizando as madidas dos 3 lados"<<endl;
    cin>>r;
    if(r==1){
    cout<<"insira a base e a altura do tri�ngulo"<<endl;
    cin>>b>>h;
    a=b*h/2;
    cout<<"a area e "<<a<<endl;
    }
    else{
if(r==2){
    cout<<"insira as medidas dos 3 lados"<<endl;
cin>>l1>>l2>>l3;
p=(l1+l2+l3)/2;
a=sqrt(p*(p-l1)*(p-l2)*(p-l3));
cout<<" a area do triangulo e "<<a;
}
else{cout<<"Cara, vc tem problema?"<<endl;}
}}
