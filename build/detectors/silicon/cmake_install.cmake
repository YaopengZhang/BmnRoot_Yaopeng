# Install script for directory: /data/yaopeng/bmnroot_Yaopeng/detectors/silicon

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
    "/data/yaopeng/bmnroot_Yaopeng/detectors/silicon/BmnSilicon.h"
    "/data/yaopeng/bmnroot_Yaopeng/detectors/silicon/BmnSiliconPoint.h"
    "/data/yaopeng/bmnroot_Yaopeng/detectors/silicon/BmnSiliconLayer.h"
    "/data/yaopeng/bmnroot_Yaopeng/detectors/silicon/BmnSiliconModule.h"
    "/data/yaopeng/bmnroot_Yaopeng/detectors/silicon/BmnSiliconStation.h"
    "/data/yaopeng/bmnroot_Yaopeng/detectors/silicon/BmnSiliconStationSet.h"
    "/data/yaopeng/bmnroot_Yaopeng/detectors/silicon/BmnSiliconDigitizer.h"
    "/data/yaopeng/bmnroot_Yaopeng/detectors/silicon/BmnSiliconHitMaker.h"
    "/data/yaopeng/bmnroot_Yaopeng/detectors/silicon/BmnSiliconDigit.h"
    "/data/yaopeng/bmnroot_Yaopeng/detectors/silicon/BmnSiliconTrack.h"
    "/data/yaopeng/bmnroot_Yaopeng/detectors/silicon/BmnSiliconHit.h"
    "/data/yaopeng/bmnroot_Yaopeng/detectors/silicon/BmnSiliconHitProducer.h"
    "/data/yaopeng/bmnroot_Yaopeng/detectors/silicon/BmnSiliconHitProducerSRC.h"
    "/data/yaopeng/bmnroot_Yaopeng/detectors/silicon/BmnSiliconTrackFinder.h"
    "/data/yaopeng/bmnroot_Yaopeng/detectors/silicon/BmnSiliconTransform.h"
    "/data/yaopeng/bmnroot_Yaopeng/detectors/silicon/BmnSiliconConfiguration.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES
    "/data/yaopeng/bmnroot_Yaopeng/build/lib/G__SiliconDict_rdict.pcm"
    "/data/yaopeng/bmnroot_Yaopeng/build/lib/libSilicon.rootmap"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libSilicon.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libSilicon.so.0"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "$ORIGIN/../lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairroot/install/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/data/yaopeng/bmnroot_Yaopeng/build/lib/libSilicon.so.0.0.0"
    "/data/yaopeng/bmnroot_Yaopeng/build/lib/libSilicon.so.0"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libSilicon.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libSilicon.so.0"
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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libSilicon.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libSilicon.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libSilicon.so"
         RPATH "$ORIGIN/../lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairroot/install/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/data/yaopeng/bmnroot_Yaopeng/build/lib/libSilicon.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libSilicon.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libSilicon.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libSilicon.so"
         OLD_RPATH "/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairroot/install/lib:/data/yaopeng/bmnroot_Yaopeng/build/lib:"
         NEW_RPATH "$ORIGIN/../lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairroot/install/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libSilicon.so")
    endif()
  endif()
endif()

