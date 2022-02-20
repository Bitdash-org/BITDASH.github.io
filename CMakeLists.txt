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

target_sources(${BITDASH-COIN}
        PRIVATE
        External/dbscan.cpp

        PUBLIC
        main.cpp
        )
# cmake_policy(${-who-dev})
# find header 
file(GLOB_RECURSE HEADER "include/*.h")
file(GLOB_RECURSE source_files "${source_dir}/*.cpp")

add_executable(${BITDASH-COIN}
 ${HEADER}${SOURCE} "/*.package")

source_group("Header include" FILES ${HEADER})
source_group("Common src"     FILES ${SOURCE})

# link libraries
# target_link_libraries_interface(${BITDASH-COIN} ${BITDASH_MAINCHAIN_LIB})
