#include <iostream>
using namespace std

class Lattice{

private:
  int N_;
  float J_;
  int *lattice_;

public:
  Lattice(int N, float J){
    N_=N;
    J_=J;
    lattice_ = new int [N];
  }

  ~Lattice(){
    cout << 'Deconstructor called' << endl;
  }
}
