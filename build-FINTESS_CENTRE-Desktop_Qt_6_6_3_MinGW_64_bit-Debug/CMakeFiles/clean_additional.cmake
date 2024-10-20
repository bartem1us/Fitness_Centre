# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\FINTESS_CENTRE_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\FINTESS_CENTRE_autogen.dir\\ParseCache.txt"
  "FINTESS_CENTRE_autogen"
  )
endif()
