# Install script for directory: /data/yaopeng/bmnroot_Yaopeng/decoder

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
    "/data/yaopeng/bmnroot_Yaopeng/decoder/BmnAdcProcessor.h"
    "/data/yaopeng/bmnroot_Yaopeng/decoder/BmnDchRaw2Digit.h"
    "/data/yaopeng/bmnroot_Yaopeng/decoder/BmnMwpcRaw2Digit.h"
    "/data/yaopeng/bmnroot_Yaopeng/decoder/BmnZDCRaw2Digit.h"
    "/data/yaopeng/bmnroot_Yaopeng/decoder/BmnScWallRaw2Digit.h"
    "/data/yaopeng/bmnroot_Yaopeng/decoder/BmnFHCalRaw2Digit.h"
    "/data/yaopeng/bmnroot_Yaopeng/decoder/BmnHodoRaw2Digit.h"
    "/data/yaopeng/bmnroot_Yaopeng/decoder/BmnNdetRaw2Digit.h"
    "/data/yaopeng/bmnroot_Yaopeng/decoder/BmnECALRaw2Digit.h"
    "/data/yaopeng/bmnroot_Yaopeng/decoder/BmnLANDRaw2Digit.h"
    "/data/yaopeng/bmnroot_Yaopeng/decoder/BmnTofCalRaw2Digit.h"
    "/data/yaopeng/bmnroot_Yaopeng/decoder/BmnGemRaw2Digit.h"
    "/data/yaopeng/bmnroot_Yaopeng/decoder/BmnTof2Raw2DigitNew.h"
    "/data/yaopeng/bmnroot_Yaopeng/decoder/BmnTof1Raw2Digit.h"
    "/data/yaopeng/bmnroot_Yaopeng/decoder/BmnSiliconRaw2Digit.h"
    "/data/yaopeng/bmnroot_Yaopeng/decoder/BmnRawDataDecoder.h"
    "/data/yaopeng/bmnroot_Yaopeng/decoder/BmnSlewingTOF700.h"
    "/data/yaopeng/bmnroot_Yaopeng/decoder/BmnTrigRaw2Digit.h"
    "/data/yaopeng/bmnroot_Yaopeng/decoder/BmnCscRaw2Digit.h"
    "/data/yaopeng/bmnroot_Yaopeng/decoder/BmnProfRaw2Digit.h"
    "/data/yaopeng/bmnroot_Yaopeng/decoder/BmnProfAsic2Raw.h"
    "/data/yaopeng/bmnroot_Yaopeng/decoder/BmnMscRaw2Digit.h"
    "/data/yaopeng/bmnroot_Yaopeng/decoder/WfmProcessor.h"
    "/data/yaopeng/bmnroot_Yaopeng/decoder/PronyFitter.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES
    "/data/yaopeng/bmnroot_Yaopeng/build/lib/G__BmnDecoderDict_rdict.pcm"
    "/data/yaopeng/bmnroot_Yaopeng/build/lib/libBmnDecoder.rootmap"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnDecoder.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnDecoder.so.0"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "$ORIGIN/../lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairroot/install/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/data/yaopeng/bmnroot_Yaopeng/build/lib/libBmnDecoder.so.0.0.0"
    "/data/yaopeng/bmnroot_Yaopeng/build/lib/libBmnDecoder.so.0"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnDecoder.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnDecoder.so.0"
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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnDecoder.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnDecoder.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnDecoder.so"
         RPATH "$ORIGIN/../lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairroot/install/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/data/yaopeng/bmnroot_Yaopeng/build/lib/libBmnDecoder.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnDecoder.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnDecoder.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnDecoder.so"
         OLD_RPATH "/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairroot/install/lib:/data/yaopeng/bmnroot_Yaopeng/build/lib:"
         NEW_RPATH "$ORIGIN/../lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairroot/install/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnDecoder.so")
    endif()
  endif()
endif()

