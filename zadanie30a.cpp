#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main(int argc, char *argv[])
{
for ( int i=33;i<=255;i++)
{
	if((i+7) % 20==0)
	{system("PAUSE"); system("cls");}
cout<<"kod znaku  "<<i<<"    "<<(char)i<<"\n";
}
cout<<endl;
system("PAUSE");
return EXIT_SUCCESS;
}
