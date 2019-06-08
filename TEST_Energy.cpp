#include<iostream>
#include "lattice.cpp"

using namespace std

int TEST_LATTICE(){

	int N = 10;
	int J = 1;

  Lattice Cl_Lattice(N, J);

  for(int i=0; i <= N; i++){
	cout << Cl_Lattice.lattice_[i] << endl; 
  } 
}
