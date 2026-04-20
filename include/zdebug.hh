#pragma once

#include <string>

namespace zdebug
{
void info(const std::string &msg);
void success(const std::string &msg);
void error(const std::string &msg);

double benchmark_math(double iterations);

void run_in_background(void (*func)());
} // namespace zdebug
