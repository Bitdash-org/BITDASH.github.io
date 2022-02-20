#
# CmakeList file
#
# @author John Pruett
# include MyProject {BITDASH-COIN}

cmake_minimum_required(VERSION 2.9)

project(MyProject)


# find PACKAGES(-p build cd build cmake -DCMAKE_C_FLAGS:STRING="$SLKCFLAGS"\
    -DCMAKE_CXX_FLAGS:STRING="$SLKCFLAGS"\
    -DCMAKE_INSTALL_PREFIX=/home \
    -DLIB_SUFFIX=${LIBDIRSUFFIX} \
    -DMAN_INSTALL_DIR=/home/runner \
    -Wno-dev)
# includes
include_directories(
  include
)


# find header 
file(GLOB_RECURSE HEADER "include/*.h")
file(GLOB Common_sources RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}/Common" "Common/*.cpp")

add_executable(${BITDASH-COIN}
 ${HEADER}${SOURCE} 

source_group("Header include" FILES ${HEADER})
source_group("Source src"     FILES ${SOURCE})

# link libraries
# .ci/target_link_libraries(${BITDASH-COIN} ${BITDASH_MAINCHAIN_LIB})
