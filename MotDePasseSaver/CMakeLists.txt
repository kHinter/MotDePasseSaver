cmake_minimum_required(VERSION 10.10.0)

set(PROJECT_NAME MotDePasseSaver)

project(${PROJECT_NAME})

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY )

set(
	
	SRC_FILES
	src/*
)

add_executable(PasswordTools ${SRC_FILES})