cmake_minimum_required(VERSION 3.10.0)

set(PROJECT_NAME MotDePasseSaver)

project(${PROJECT_NAME})

set(EXECUTABLE_OUTPUT_PATH bin/${CMAKE_BUILD_TYPE})

#include et linkage de la lib crypto++
include_directories(C:/Librairies/crypto++)
link_directories(C:/Librairies/crypto++)

include_directories(C:/Users/kevke/source/repos/C++/MotDePasseSaver/MotDePasseSaver/include)

file(
	GLOB_RECURSE
	SRC_FILES
	src/*
)

add_executable(PasswordTools ${SRC_FILES})

target_link_libraries(PasswordTools cryptlib)