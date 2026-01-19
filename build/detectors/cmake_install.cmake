# Install script for directory: /data/yaopeng/bmnroot_Yaopeng/detectors

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/data/yaopeng/bmnroot_Yaopeng/build/detectors/armTriggers/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/detectors/bc/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/detectors/bd/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/detectors/SiBT/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/detectors/SiMD/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/detectors/FD/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/detectors/mwpc/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/detectors/silicon/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/detectors/sts/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/detectors/gem/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/detectors/dch/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/detectors/csc/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/detectors/tof1/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/detectors/tof/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/detectors/tofcal/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/detectors/ecal/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/detectors/zdc/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/detectors/scwall/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/detectors/hodo/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/detectors/fhcal/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/detectors/ndet/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/detectors/land/cmake_install.cmake")

endif()

