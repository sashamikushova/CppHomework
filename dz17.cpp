#include <fstream>
#include <iostream>
//14.22

void writelines(int n, std::string file_f, std::string file_g, std::string file_h) {
  std::ofstream f(file_f);
  std::ofstream g(file_g);
  std::ofstream h(file_h);
  for(int i=0; i<n; ++i) {
    std::string line;
    std::getline(std::cin, line);
    f<<line<<std::endl;
  }
  std::ifstream f_in(file_f);
  for (int i = 0; i < n; ++i) {
    std::string line;
    std::getline(f_in, line);

    if (line.length()%2==1) {
      h <<line<<std::endl;
    } else {
      g<<line<<std::endl;
    }
  }
}
int main(){
  writelines(10,"f.txt","g.txt","h.txt");
  return 0;
}