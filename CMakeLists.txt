cmake_minimum_required(VERSION 4.0)
project(Beamlets)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(utilities)

add_executable(Beamlets
        unitTest/testBeamlet.cpp
        unitTest/testCluster.cpp
        unitTest/testPoint.cpp
        unitTest/testUtilities.cpp
        utilities/PrintContent.cpp
        utilities/PrintContent.h
        utilities/utilities.cpp
        utilities/utilities.h
        _main.cpp
        Beamlet.cpp
        Beamlet.h
        BeamletGraph.cpp
        BeamletGraph.h
        Cluster.cpp
        Cluster.h
        DyadicObject.cpp
        DyadicObject.h
        Key.cpp
        Key.h
        Point.cpp
        Point.h)

# Tell the compiler where to look for headers:
target_include_directories(Beamlets PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
)