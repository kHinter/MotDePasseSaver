cmake_minimum_required(VERSION 3.10.0)

set(PROJECT_NAME MotDePasseSaver)

project(${PROJECT_NAME})

set(EXECUTABLE_OUTPUT_PATH bin/${CMAKE_BUILD_TYPE})

include_directories(C:/Librairies/crypto++)

#si la compilation est en 64 bits
if(CMAKE_SIZEOF_VOID_P EQUAL 8)
	link_directories(C:/Librairies/crypto++/x64/Output/Debug)

#si la compilation est en 32 bits
elseif(CMAKE_SIZEOF_VOID_P EQUAL 4)
	link_directories(C:/Librairies/crypto++/Win32/Output/Debug)

endif()

include_directories(C:/Users/kevke/source/repos/C++/MotDePasseSaver/MotDePasseSaver)

file(
	GLOB_RECURSE
	HEADER_FILES
	include/*
)

file(
	GLOB_RECURSE
	SRC_FILES
	src/*
)

set(CMAKE_CXX_STANDARD 17)

add_executable(PasswordTools ${SRC_FILES} ${HEADER_FILES})

target_link_libraries(PasswordTools cryptlib)