# Install script for directory: /data/yaopeng/bmnroot_Yaopeng/generators

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
    "/data/yaopeng/bmnroot_Yaopeng/generators/MpdMCEventHeader.h"
    "/data/yaopeng/bmnroot_Yaopeng/generators/MpdLAQGSMGenerator.h"
    "/data/yaopeng/bmnroot_Yaopeng/generators/MpdHypYPtGenerator.h"
    "/data/yaopeng/bmnroot_Yaopeng/generators/MpdRainGenerator.h"
    "/data/yaopeng/bmnroot_Yaopeng/generators/MpdPHSDGenerator.h"
    "/data/yaopeng/bmnroot_Yaopeng/generators/MpdUrqmdGenerator.h"
    "/data/yaopeng/bmnroot_Yaopeng/generators/MpdGetNumEvents.h"
    "/data/yaopeng/bmnroot_Yaopeng/generators/MpdHistoGenerator.h"
    "/data/yaopeng/bmnroot_Yaopeng/generators/Mpd3fdGenerator.h"
    "/data/yaopeng/bmnroot_Yaopeng/generators/MpdVHLLEGenerator.h"
    "/data/yaopeng/bmnroot_Yaopeng/generators/MpdDCMSMMGenerator.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES
    "/data/yaopeng/bmnroot_Yaopeng/build/lib/G__MpdGenDict_rdict.pcm"
    "/data/yaopeng/bmnroot_Yaopeng/build/lib/libMpdGen.rootmap"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libMpdGen.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libMpdGen.so.0"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "$ORIGIN/../lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairroot/install/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/data/yaopeng/bmnroot_Yaopeng/build/lib/libMpdGen.so.0.0.0"
    "/data/yaopeng/bmnroot_Yaopeng/build/lib/libMpdGen.so.0"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libMpdGen.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libMpdGen.so.0"
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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libMpdGen.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libMpdGen.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libMpdGen.so"
         RPATH "$ORIGIN/../lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairroot/install/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/data/yaopeng/bmnroot_Yaopeng/build/lib/libMpdGen.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libMpdGen.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libMpdGen.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libMpdGen.so"
         OLD_RPATH "/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairroot/install/lib:/data/yaopeng/bmnroot_Yaopeng/build/lib:"
         NEW_RPATH "$ORIGIN/../lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairroot/install/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libMpdGen.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/bin/show_event_count")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/bin" TYPE PROGRAM FILES "/data/yaopeng/bmnroot_Yaopeng/build/bin/show_event_count")
endif()

