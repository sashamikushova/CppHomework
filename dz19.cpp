#include <cmath>
#include <iostream>
#include <fstream>
#include <vector>
#include <utility>
#include <algorithm>
class LinearEquation {
public:
  double a_;
  double b_;
  LinearEquation(double a, double b) : a_(a), b_(b) {}
  double Solve() const {
    if (a_==0) {
      return std::nan(""); 
    }
    return -b_/a_;
  }
  void input() {
            std::cin>>a_>>b_ ;
        }

        void output() {
            std::cout<<a_<<" "<<b_<<std::endl;
        }

        void show() {
            std::cout<<"a="<<a_<<std::endl;
            std::cout<<"b="<<b_<<std::endl;
        }
};
class QuadraticEquation:public LinearEquation {
public:
  double c_;
  QuadraticEquation(double a, double b, double c) : LinearEquation(a, b), c_(c) {}
  std::pair<double, double> Solve() const {
    double discriminant=b_*b_-4*a_*c_;
    if (discriminant<0) {
      return std::make_pair(std::nan(""), std::nan("")); 
    }
    double sqrt_discriminant = std::sqrt(discriminant);
    double x1=(-b_+sqrt_discriminant)/(2*a_);
    double x2=(-b_-sqrt_discriminant)/(2*a_);
    return std::make_pair(x1, x2);
  }
  void input() {
            std::cin>>a_>>b_>>c_ ;
        }
        void output() {
            std::cout<<a_<<" "<<b_<<" "<<c_<<std::endl;
        }

        void show() {
            std::cout<<"a="<<a_<< std::endl;
            std::cout<<"b="<<b_<<std::endl;
            std::cout<<"c="<<c_<<std::endl;
        }
};
class BiquadraticEquation:public QuadraticEquation {
    public:
        double d_;
        double e_;
        double f_;
        BiquadraticEquation(double a, double b, double c, double d, double e,
                        double f)
        : QuadraticEquation(a, b, c),d_(d),e_(e),f_(f){}
        std::pair<double, double> Solve(){
            double disc=pow(b_, 2)-4*a_*c_-4*a_*f_-4*d_*e_;
            double x1=(-b_+std::sqrt(disc))/(2 * a_);
            double x2=(-b_-std::sqrt(disc))/(2 * a_);
            return std::make_pair(x1, x2);
        }
        void input() {
            std::cin>>a_>>b_>>c_>>d_>>e_>>f_;
        }

        void output() {
            std::cout<< a_<<" "<< b_<<" "<<c_<<" "<<d_<<" "<< e_<<" "<<f_<<std::endl;
        }

        void show() {
            std::cout<<"a="<<a_<< std::endl;
            std::cout<<"b="<<b_<<std::endl;
            std::cout<<"c="<<c_<<std::endl;
            std::cout<<"d="<<d_<<std::endl;
            std::cout<<"e="<<e_<<std::endl;
            std::cout<<"f="<<f_<<std::endl;
        }
};
int main(){
    std::ifstream file("equations.txt");
    std::vector<BiquadraticEquation> equations;
    while (file.good()) {
      double a, b, c, d, e, f;
      file>>a>>b>>c>>d>>e>>f;
      equations.emplace_back(a, b, c, d, e, f);
    }
    int num_equations_with_no_roots = 0;
    for (auto& eq: equations) {
      auto roots= eq.Solve();
      if (std::isnan(roots.first) && std::isnan(roots.second)) {
        num_equations_with_no_roots++;
      }
    }
    int num_equations_with_real_roots = 0;
    for (auto& eq : equations) {
      auto roots = eq.Solve();
      if (!std::isnan(roots.first) || !std::isnan(roots.second)) {
        num_equations_with_real_roots++;
      }
    }
    std::vector<double> roots;
    for (auto& eq : equations) {
      auto eq_roots = eq.Solve();
      if (!std::isnan(eq_roots.first)) {
        roots.push_back(eq_roots.first);
      }
      if (!std::isnan(eq_roots.second)) {
        roots.push_back(eq_roots.second);
      }
    }
    double smallest_root=*std::min_element(roots.begin(), roots.end());
    double sum_of_roots;
    for(double root : roots){
      sum_of_roots+=root*root;
    }
    std::cout<<"Kilkist rivnyan bez korniv: "<<num_equations_with_no_roots << std::endl;
    std::cout<<"Kilkist rivnyan z diysnymy korenyamy: "<<num_equations_with_real_roots << std::endl;
    std::cout<<"Naymenshyy korin: "<<smallest_root<<std::endl;
    std::cout<<"Suma vsih diysnych koreniv: "<<sum_of_roots<<std::endl;
    return 0;
}

