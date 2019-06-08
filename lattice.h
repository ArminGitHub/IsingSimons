#include <iostream>
#include <algorithm> 
using namespace std;

class Lattice{

private:
  int N_;
  float J_;

public:
  int *lattice_;
  Lattice(int N, int J){
    N_=N;
    J_=J;
    lattice_ = new int [N];
    std::fill_n(lattice_,N,1);
  };

  ~Lattice(){
    cout << "Deconstructor called" << endl;
  };
};
