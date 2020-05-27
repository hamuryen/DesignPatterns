cmake_minimum_required(VERSION 3.0)
project(DesignPatterns)

set(CPACK_PACKAGE_NAME "DesignPatterns")
set(CPACK_PACKAGE_VERSION_MAJOR 1)
set(CPACK_PACKAGE_VERSION_MINOR 0)
set(CPACK_PACKAGE_VERSION_PATCH 0)

set(CMAKE_WARNINGE_MAKEFILE OFF)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

# Architecture detection to make dependency compatible.
if (CMAKE_SIZEOF_VOID_P EQUAL 8)
	message ("Compiling will be for x64")
	set (x64 1)
elseif()
	message ("Compiling will be for x86")
	set (x64 0)	
endif()


if(BUILD_TYPE EQUAL "Debug")
	set(CMAKE_BUILD_TYPE Debug)
elseif(BUILD_TYPE EQUAL "Release")
	set(CMAKE_BUILD_TYPE Reelase)
endif()

add_subdirectory(src)