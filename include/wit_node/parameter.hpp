#include <string>
#ifndef PARAMETER_HPP
#define PARAMETER_HPP
using namespace std;
namespace wit {
class Parameter {
 public:
  Parameter() : port_("/dev/ttyUSB0"), baut_rate_(9600), ns("wit") {}

  string port_;
  int baut_rate_;
  string ns;
};
}
#endif  // PARAMETER_HPP
