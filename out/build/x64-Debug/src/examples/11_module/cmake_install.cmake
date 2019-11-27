# Install script for directory: C:/Users/Mimic/source/repos/acc-cosc-1337-fall-2019-MimicMarshall/src/examples/11_module

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
  include("C:/Users/Mimic/source/repos/acc-cosc-1337-fall-2019-MimicMarshall/out/build/x64-Debug/src/examples/11_module/01_ref_pointers/cmake_install.cmake")
  include("C:/Users/Mimic/source/repos/acc-cosc-1337-fall-2019-MimicMarshall/out/build/x64-Debug/src/examples/11_module/02_dynamic_memory/cmake_install.cmake")
  include("C:/Users/Mimic/source/repos/acc-cosc-1337-fall-2019-MimicMarshall/out/build/x64-Debug/src/examples/11_module/03_memory_leak/cmake_install.cmake")
  include("C:/Users/Mimic/source/repos/acc-cosc-1337-fall-2019-MimicMarshall/out/build/x64-Debug/src/examples/11_module/04_dangling_pointer/cmake_install.cmake")
  include("C:/Users/Mimic/source/repos/acc-cosc-1337-fall-2019-MimicMarshall/out/build/x64-Debug/src/examples/11_module/05_raii/cmake_install.cmake")
  include("C:/Users/Mimic/source/repos/acc-cosc-1337-fall-2019-MimicMarshall/out/build/x64-Debug/src/examples/11_module/06_destructors/cmake_install.cmake")
  include("C:/Users/Mimic/source/repos/acc-cosc-1337-fall-2019-MimicMarshall/out/build/x64-Debug/src/examples/11_module/07_class_copy/cmake_install.cmake")
  include("C:/Users/Mimic/source/repos/acc-cosc-1337-fall-2019-MimicMarshall/out/build/x64-Debug/src/examples/11_module/08_rule_of_3/cmake_install.cmake")
  include("C:/Users/Mimic/source/repos/acc-cosc-1337-fall-2019-MimicMarshall/out/build/x64-Debug/src/examples/11_module/09_rule_of_5/cmake_install.cmake")

endif()

