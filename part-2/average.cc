// Cain Garcia
// Cain577@csu.fullerton.edu
// @cain-11
// Partners: @anegicp, @Alecflores02

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number \n";

    return 1;
  }
  // XTODO: Validate that there is at least one command line argument.
  // If not, print an error message and return a non-zero value.
  double sum{0};
  bool first{true};
  int count = static_cast<int>(arguments.size()) - 1;
  for (std::string& argument : arguments) {
    if (first) {
      first = false;
      continue;
    } else {
      sum += std::stod(argument);
    }
  }
  double average{0};
  average = sum / count;
  std::cout << "average = " << average << " \n";
  return 0;
}