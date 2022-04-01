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
    cout<<"insira a base e a altura do triângulo"<<endl;
    cin>>b>>h;
    if(b<=0 or h<=0){
        cout<<"este triangulo não existe"<<endl;
        return 0;
    }
    else{
    a=b*h/2;
    cout<<"a area e "<<a<<endl;
    }
    }
    else{
if(r==2){
    cout<<"insira as medidas dos 3 lados"<<endl;
    cin>>l1>>l2>>l3;
    if(l1>=l2+l3 or l2>=l1+l3 or l3>=l2+l1 or l1<=0 or l2<=0 or l3<=0){
        cout<<"este triangulo não existe"<<endl;
        return 0;
    }
    else{
    p=(l1+l2+l3)/2;
    a=sqrt(p*(p-l1)*(p-l2)*(p-l3));
    cout<<" a area do triangulo e "<<a<<endl;
    if(l1==l2==l3){
        cout<<"esse triangulo e equilatero"<<endl;
    }
    if(l1!=l2 or l1!=l3 or l3!=l2){
            if(l1!=l2&&l1!=l3&&l3!=l2){
        cout<<"esse triangulo é escaleno"<<endl;
        }
        else{
             cout<<"esse triangulo é isosceles"<<endl;
    }


    }
    }
}
    else{cout<<"Cara, vc tem problema?"<<endl;}
}}
