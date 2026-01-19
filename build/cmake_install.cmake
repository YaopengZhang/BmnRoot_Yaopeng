# Install script for directory: /data/yaopeng/bmnroot_Yaopeng

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
  include("/data/yaopeng/bmnroot_Yaopeng/build/database/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/field/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/passive/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/generators/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/base/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/detectors/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/steering/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/miscellaneous/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/alignment/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/decoder/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/reconstruction/dst/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/reconstruction/KF/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/reconstruction/cat/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/reconstruction/tracking/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/reconstruction/globaltracking/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/reconstruction/identification/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/reconstruction/tof2/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/reconstruction/zdc/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/reconstruction/fhcal/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/reconstruction/bmnrecotools/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/reconstruction/scwall/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/physics/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/monitor/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/eventdisplay/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/online/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/QA/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/macro/cmake_install.cmake")
  include("/data/yaopeng/bmnroot_Yaopeng/build/services/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/data/yaopeng/bmnroot_Yaopeng/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
