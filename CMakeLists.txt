#
# CmakeList file
#
# @author John Pruett
# include MyProject {BITDASH-COIN}

cmake_minimum_required(VERSION 2.9)

project(MyProject)


# find packages
# set cmpolicy include COMMAND($ -who-dev)
# includes
include_directories(
  include
)


# find header 
file(GLOB_RECURSE HEADER "include/*.h")
file(GLOB Common_sources RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}/Common" "Common/*.cpp")

add_executable(${BITDASH-COIN}
 ${HEADER}${SOURCE} "src/*.cpp")

source_group("Header include" FILES ${HEADER})
source_group("Source src"     FILES ${SOURCE})

# link libraries
# .ci/target_link_libraries(${BITDASH-COIN} ${BITDASH_MAINCHAIN_LIB})
