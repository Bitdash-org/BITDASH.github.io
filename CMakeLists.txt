#
# CmakeList file
#
# @author John Pruett
# include MyProject {BITDASH-COIN}

cmake_minimum_required(VERSION 2.9)

project(MyProject)


# find packages
# includes
include_directories(
  include
)


# find header 
file(GLOB_RECURSE HEADER "include/*.h")
file(GLOB Common_sources RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}/Common" "src/*.cpp")

add_executable(${BITDASH-COIN}
 ${HEADER}${SOURCE})

source_group("Header include" FILES ${HEADER})
source_group("Common src"     FILES ${SOURCE})

# link libraries
# .ci/target_link_libraries(${BITDASH-COIN} ${BITDASH_MAINCHAIN_LIB})
