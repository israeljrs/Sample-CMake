#include <iostream>
#include "SampleConfig.h"

void version()
{
  std::cout << "Version : " << SAMPLE_VERSION_MAJOR <<
    "." << SAMPLE_VERSION_MINOR <<
    "." << SAMPLE_VERSION_PATCH << std::endl;
}

int 
main(void)
{
  version();
  std::cout << "Hello World by CMake !!!" << std::endl;
  return(0);
}
