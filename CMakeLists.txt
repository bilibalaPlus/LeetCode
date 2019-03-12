cmake_minimum_required(VERSION 3.2)

PROJECT(leet_code)

AUX_SOURCE_DIRECTORY(
	src DIR_SRCS
	)

add_executable(main ./src/main.cpp ./src/MaxWidthofBT.cpp)
