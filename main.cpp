#include <iostream>

int main() {
  bool a = true;
  bool b = false;
  bool c = true;
  bool d = false;
  bool e = true;
  
  std::cout << (a ? b : (c ? d : e)) << std::endl;
  //std::cout << (a ? b : true ?  d : e) << std::endl;
  //std::cout << (a ? b : d) << std::endl;
  //std::cout << (true ? b : d) << std::endl;
  //std::cout <<  b << std::endl;
  //std::cout << false << std::endl;
}