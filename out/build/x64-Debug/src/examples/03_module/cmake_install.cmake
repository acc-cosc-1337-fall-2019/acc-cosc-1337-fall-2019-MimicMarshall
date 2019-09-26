# Install script for directory: C:/Users/Mimic/source/repos/acc-cosc-1337-fall-2019-MimicMarshall/src/examples/03_module

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Users/Mimic/Source/Repos/acc-cosc-1337-fall-2019-MimicMarshall/out/install/x64-Debug")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/Users/Mimic/source/repos/acc-cosc-1337-fall-2019-MimicMarshall/out/build/x64-Debug/src/examples/03_module/01_while/cmake_install.cmake")
  include("C:/Users/Mimic/source/repos/acc-cosc-1337-fall-2019-MimicMarshall/out/build/x64-Debug/src/examples/03_module/02_for/cmake_install.cmake")
  include("C:/Users/Mimic/source/repos/acc-cosc-1337-fall-2019-MimicMarshall/out/build/x64-Debug/src/examples/03_module/03_do_while/cmake_install.cmake")
  include("C:/Users/Mimic/source/repos/acc-cosc-1337-fall-2019-MimicMarshall/out/build/x64-Debug/src/examples/03_module/04_for_ranged/cmake_install.cmake")
  include("C:/Users/Mimic/source/repos/acc-cosc-1337-fall-2019-MimicMarshall/out/build/x64-Debug/src/examples/03_module/05_value_and_reference_params/cmake_install.cmake")
  include("C:/Users/Mimic/source/repos/acc-cosc-1337-fall-2019-MimicMarshall/out/build/x64-Debug/src/examples/03_module/06_vectors/cmake_install.cmake")
  include("C:/Users/Mimic/source/repos/acc-cosc-1337-fall-2019-MimicMarshall/out/build/x64-Debug/src/examples/03_module/07_vectors_for_ranged/cmake_install.cmake")

endif()

