#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;
int main()
{
	unsigned long long SquareSide = 10000;
	unsigned long long InsideCounter = 0;
	unsigned long long OutsideCounter = 0;
	unsigned long long Max = 0;
	cin >> Max;
	while(Max > 0){
		double x = random() % SquareSide + 0;
		double y = random() % SquareSide + 0;
		double Radius = sqrt(pow(x,2) + pow(y,2));
		if(Radius > SquareSide){
			OutsideCounter += 1;
		}
		if(Radius < SquareSide){
			InsideCounter += 1;
		}
		Max = Max - 1;
		       }
	cout << (4*InsideCounter) / (double)(InsideCounter+OutsideCounter) << endl;
}


	
