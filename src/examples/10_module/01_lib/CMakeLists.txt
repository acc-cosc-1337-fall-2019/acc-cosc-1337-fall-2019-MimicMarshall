cmake_minimum_required(VERSION 3.8)
project(graphics_shapes_lib)

set(CMAKE_CXX_STANDARD 11)

set(wxWidgets_ROOT_DIR C:/Users/Public/cpp/wxWidgets-3.1.2)
set(wxWidgets_LIB_DIR C:/Users/Public/cpp/wxWidgets-3.1.2/lib/vc_x64_lib)
set(wxWidgets_CONFIGURATION msw)

find_package(wxWidgets REQUIRED net gl core base)

if(wxWidgets_FOUND)
	include(${wxWidgets_USE_FILE})

	set(SOURCE_FILES point.h shape.h shape.cpp 
					 text.h text.cpp circle.h circle.cpp
					 ellipse.h ellipse.cpp line.h line.cpp
					 rectangle.h rectangle.cpp)

    add_library(ex_10_01_lib ${SOURCE_FILES})					   
endif()
