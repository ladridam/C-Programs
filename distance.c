#include<stdio.h>
void main()
{
	float dKm, dM, dF, dI, dC;
	printf("Please enter the distance:\n");
	scanf("%f", &dKm);
	printf("Entered distance in kilometers: %.2f km \n", dKm);
	
	//coverting distance in km to m, ft, inch, cm:
	dM=dKm*1000;
	dF=dKm*3280.84;
	dI=dKm*39370.1;
	dC=dKm*100000;
	
	printf("%.2f m\n", dM);
	printf("%.2f ft\n", dF);
	printf("%.2f inches\n", dI);
	printf("%.2f cm\n", dC);	
}
