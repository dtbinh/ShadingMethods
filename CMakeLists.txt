#
# CMakeLists.txt
# author: Jan Du�ek <jan.dusek90@gmail.com>

project(ShadingMethods)
cmake_minimum_required(VERSION 2.6)

# add custom cmake modules
set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake/Modules ${CMAKE_MODULE_PATH})

# add C++11 support for gcc
if(CMAKE_COMPILER_IS_GNUCXX)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --std=c++0x")
endif()

if(MSVC OR MSVC_IDE) 
	if( MSVC_VERSION LESS 1800 )       # VC11-/VS2012- 
		message(FATAL_ERROR "The project requires C++11 features. " 
			"You need at least Visual Studio 12 (Microsoft Visual Studio 2013)") 
	endif() 
endif()

find_package(SDL2 REQUIRED)
find_package(Glew REQUIRED)
find_package(OpenGL REQUIRED)
find_package(GLM REQUIRED)
find_package(Boost 1.51.0 REQUIRED)

# set bin directory for runtime files
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(src)
add_subdirectory(data)

# install required system runtime libraries
include(InstallRequiredSystemLibraries)