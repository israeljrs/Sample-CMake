cmake_minimum_required(VERSION 2.8)
project(sampleCmake)

set (Sample_VERSION_MAJOR 0)
set (Sample_VERSION_MINOR 0)
set (Sample_VERSION_PATCH 1)

configure_file(
  "${PROJECT_SOURCE_DIR}/SampleConfig.h.in"
  "${PROJECT_BINARY_DIR}/SampleConfig.h"
  )

include_directories("${PROJECT_BINARY_DIR}")

add_executable(hello main.cpp)
