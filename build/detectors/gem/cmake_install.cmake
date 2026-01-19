# Install script for directory: /data/yaopeng/bmnroot_Yaopeng/detectors/gem

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "/data/yaopeng/bmnroot_Yaopeng/detectors/gem/BmnGemHitProducer.h"
    "/data/yaopeng/bmnroot_Yaopeng/detectors/gem/BmnGemGeo.h"
    "/data/yaopeng/bmnroot_Yaopeng/detectors/gem/BmnGemDigit.h"
    "/data/yaopeng/bmnroot_Yaopeng/detectors/gem/BmnGemGas.h"
    "/data/yaopeng/bmnroot_Yaopeng/detectors/gem/BmnManageQA.h"
    "/data/yaopeng/bmnroot_Yaopeng/detectors/gem/BmnGemDigitizerQAHistograms.h"
    "/data/yaopeng/bmnroot_Yaopeng/detectors/gem/BmnGemStripLayer.h"
    "/data/yaopeng/bmnroot_Yaopeng/detectors/gem/BmnGemStripModule.h"
    "/data/yaopeng/bmnroot_Yaopeng/detectors/gem/BmnGemStripStation.h"
    "/data/yaopeng/bmnroot_Yaopeng/detectors/gem/BmnGemStripStationSet.h"
    "/data/yaopeng/bmnroot_Yaopeng/detectors/gem/BmnGemStripStation_RunSummer2016.h"
    "/data/yaopeng/bmnroot_Yaopeng/detectors/gem/BmnGemStripStationSet_RunSummer2016.h"
    "/data/yaopeng/bmnroot_Yaopeng/detectors/gem/BmnGemStripStation_RunWinter2016.h"
    "/data/yaopeng/bmnroot_Yaopeng/detectors/gem/BmnGemStripStationSet_RunWinter2016.h"
    "/data/yaopeng/bmnroot_Yaopeng/detectors/gem/BmnGemStripStation_RunSpring2017.h"
    "/data/yaopeng/bmnroot_Yaopeng/detectors/gem/BmnGemStripStationSet_RunSpring2017.h"
    "/data/yaopeng/bmnroot_Yaopeng/detectors/gem/BmnGemStripDigit.h"
    "/data/yaopeng/bmnroot_Yaopeng/detectors/gem/BmnGemStripDigitizer.h"
    "/data/yaopeng/bmnroot_Yaopeng/detectors/gem/BmnGemStripHitMaker.h"
    "/data/yaopeng/bmnroot_Yaopeng/detectors/gem/BmnGemStripMedium.h"
    "/data/yaopeng/bmnroot_Yaopeng/detectors/gem/BmnGemStripTransform.h"
    "/data/yaopeng/bmnroot_Yaopeng/detectors/gem/BmnGemStripConfiguration.h"
    "/data/yaopeng/bmnroot_Yaopeng/detectors/gem/BmnGemStripMediumConfiguration.h"
    "/data/yaopeng/bmnroot_Yaopeng/detectors/gem/BmnGemStripHit.h"
    "/data/yaopeng/bmnroot_Yaopeng/detectors/gem/BmnGemTrack.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES
    "/data/yaopeng/bmnroot_Yaopeng/build/lib/G__GemDict_rdict.pcm"
    "/data/yaopeng/bmnroot_Yaopeng/build/lib/libGem.rootmap"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libGem.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libGem.so.0"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "$ORIGIN/../lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairroot/install/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/data/yaopeng/bmnroot_Yaopeng/build/lib/libGem.so.0.0.0"
    "/data/yaopeng/bmnroot_Yaopeng/build/lib/libGem.so.0"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libGem.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libGem.so.0"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairroot/install/lib:/data/yaopeng/bmnroot_Yaopeng/build/lib:"
           NEW_RPATH "$ORIGIN/../lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairroot/install/lib")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libGem.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libGem.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libGem.so"
         RPATH "$ORIGIN/../lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairroot/install/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/data/yaopeng/bmnroot_Yaopeng/build/lib/libGem.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libGem.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libGem.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libGem.so"
         OLD_RPATH "/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairroot/install/lib:/data/yaopeng/bmnroot_Yaopeng/build/lib:"
         NEW_RPATH "$ORIGIN/../lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairroot/install/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libGem.so")
    endif()
  endif()
endif()

