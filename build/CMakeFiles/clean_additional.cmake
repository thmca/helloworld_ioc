# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "main\\CMakeFiles\\helloworld_autogen.dir\\AutogenUsed.txt"
  "main\\CMakeFiles\\helloworld_autogen.dir\\ParseCache.txt"
  "main\\helloworld_autogen"
  "src\\CMakeFiles\\businesslogic_autogen.dir\\AutogenUsed.txt"
  "src\\CMakeFiles\\businesslogic_autogen.dir\\ParseCache.txt"
  "src\\businesslogic_autogen"
  )
endif()
