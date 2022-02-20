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


# find header & source
file(GLOB_RECURSE HEADER "include/*.h")
file(GLOB_RECURSE SOURCE "src/*.cpp")

add_executable(${BITDASH-COIN}
  ${HEADER}
)
add_executable (${BITDASH-COIN}
  ${SOURCE}
)

source_group("Header include" FILES ${HEADER})
source_group("Source src"     FILES ${SOURCE})

# link libraries
# .ci/target_link_libraries(${BITDASH-COIN} ${BITDASH_MAINCHAIN_LIB})
