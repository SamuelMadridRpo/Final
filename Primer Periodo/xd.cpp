#include<iostream>
#include<conio.h>
#include <windows.h> 
#include <time.h> 
#include<stdio.h>
#include<stdlib.h>
#include<string>

using namespace std;

main()
{
int op1,sa,ja,em,ke,jo,da;
float m1,m2,m3,m4,m5,m6,summ,mtotal;
cout<<"Buenas tardes señor \n";
while(op1<4)
{
cout<<"Elige una opcion \n 1. Ver ajedrecistas \n 2. Elegir nivel \n 3. Ver promedio de medallas \n 4.Salir \n";
cin>>op1;
if(op1==1){
cout<<"Buenas tardes usuario, estos son los ajedrecistas\n 1.Samuel\n 2.Jacobo\n 3.Emiliana\n 4.Kenery/n 5.Johan\n 6.David\n";
system("pause");
Sleep(2000);
system("cls");
}
if(op1==2){
cout<<"Buen dia aca elegiras los niveles de cada ajedrecista, de 1 a 10, empecemos\n";
cout<<"Elige el nivel de Samuel\n";
cin>>sa;
cout<<"Elige el nivel de Jacobo\n";
cin>>jo;
cout<<"Elige el nivel de Emiliana\n";
cin>>em;
cout<<"Elige el nivel de Kenery\n";
cin>>ke;
cout<<"Elige el grado de Johan\n";
cin>>jo;
cout<<"Elige el grado de David\n";
cin>>da;
cout<<"Los niveles de cada ajedrecista son:\n 1.Samuel:"<<sa;
cout<<"\n 2.Jacobo:"<<ja;
cout<<"\n 3.Emiliana:"<<em;
cout<<"\n 4.Kenery:"<<ke;
cout<<"\n 5.Johan:"<<jo;
cout<<"\n 6.David:"<<da;
system("pause");
Sleep(2000);
system("cls");
}
if(op1==3){
cout<<"En este espacio veras el promedio total de las medallas de los ajedrecistas, de 1 a 10\n";
cout<<"Samuel:\n";
cin>>m1;
cout<<"Jacobo:\n";
cin>>m2;
cout<<"Emiliana:\n";
cin>>m3;
cout<<"Kenery:\n";
cin>>m4;
cout<<"Johan: \n";
cin>>m5;
cout<<"David: \n";
cin>>m6;
summ=m1+m2+m3+m4+m5+m6;
mtotal=summ/6;
cout<<"El promedio de todas las medallas de los ajedrecistas es:\n"<<mtotal;
system("pause");
Sleep(2000);
system("cls");
}
if(op1==4){
    cout<<"Muchas gracias señor usuario, que tenga un buen dia :)";
}
}
}
