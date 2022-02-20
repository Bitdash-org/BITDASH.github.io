#
# Generic CmakeList file
#
# @author Natesh Narain

cmake_minimum_required(VERSION 2.8)

project(MyProject)


# find packages


# includes
include_directories(
  include
)


# find header & source
file(GLOB_RECURSE HEADER "include/*.h")
file(GLOB_RECURSE SOURCE "src/*.cpp")

add_executable(${PROJECT_NAME}
  ${SOURCE}
  ${HEADER}
)

source_group("Header include" FILES ${HEADER})
source_group("Source src"     FILES ${SOURCE})

# link libraries
#target_link_libraries(${PROJECT_NAME} ${SOME_LIB})
