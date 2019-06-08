#include<iostream>
#include<stdio.h>
#include "lattice.h"

using namespace std;

int main(int argc, char **argv){

	int N = 10;
	int J = 1;
	
  	Lattice Cl_Lattice(N, J);

	for(int i=0; i < N; i++){
		cout << Cl_Lattice.lattice_[i] << endl; 
 	 }

	return 0; 
}

