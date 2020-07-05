//degreescelcius to farenheight
#include <iostream>
using namespace std;
double faren(double celcius);
int main()
{
	double f,c;
	cout<<"Enter the degreecelcius:\n";
    cin>>c;
    f=faren(c);
    cout<<"In farenheight=  "<<f;
    return 0;	
}
double faren(double celcius)
{
	double f;
	f=(celcius*9/5)+32;
	return f;
}


