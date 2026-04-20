#include "zdebug.hh"
#include <iostream>
#include <math.h>
#include <pthread.h>
#include <thread>

namespace zdebug
{
void info(const std::string &msg)
{
  std::cout << "\033[36m[ZDEBUG INFO]\033[0m " << msg << std::endl;
}

void success(const std::string &msg)
{
  std::cout << "\033[32m[ZDEBUG OK]\033[0m " << msg << std::endl;
}

void error(const std::string &msg)
{
  std::cerr << "\033[31m[ZDEBUG ERROR]\033[0m " << msg << std::endl;
}

double benchmark_math(double iterations)
{
  double result = 0.0;
  for (int i = 0; i < iterations; ++i)
  {
    result += sqrt(pow(i, 2.5));
  }
  return result;
}

void run_in_background(void (*func)())
{
  std::thread t(func);
  t.detach();
}
} // namespace zdebug
