#include <cstdlib>
#include <cstdio>    // standard input / output functions
#include <cstring>   // string function definitions
#include <iostream>  // standard input / output functions

#include "help.h"

int main(int argc, char *argv[])
{
  if(argc < 2)
  {
    help(argv[0]);
    return 0;
  }

  if( std::string(argv[1]) == "someArg")
  {
    std::cout << "someArg not implemented yet" << std::endl;
    return 1;
  }
  else if(std::string(argv[1]) == "someOtherArg")
  {
    std::cout << "someOtherArg not implemented yet" << std::endl;
    return 1;
  }
  else
  {
    help(argv[0]);
  }
  return 0;
}
