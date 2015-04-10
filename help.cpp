#include <iostream>  // standard input / output functions
#include "help.h"
void help(std::string progname)
{
  std::cout << "usage: " << progname << " <command> [args]" << std::endl;
  std::cout << "write some help here" << std::endl;
}
