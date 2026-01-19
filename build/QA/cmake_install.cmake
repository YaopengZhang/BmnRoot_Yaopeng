# Install script for directory: /data/yaopeng/bmnroot_Yaopeng/QA

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
    "/data/yaopeng/bmnroot_Yaopeng/QA/report/BmnRunInfo.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/report/BmnSimulationReport.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/report/BmnStudyReport.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/report/BmnHtmlReportElement.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/report/BmnReport.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/report/BmnDrawHist.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/report/BmnDrawOnline.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/report/BmnHistManager.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/report/BmnSimulationReport.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/report/BmnReportElement.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/BmnHist.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/PadInfo.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/BmnPadBranch.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/BmnPadGenerator.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/BmnQaBase.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/BmnPidQa.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/BmnPidQaReport.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/BmnTrackingQa.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/BmnTrackingQaExp.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/BmnLambdaQa.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/BmnClusteringQa.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/BmnUtils.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/BmnTrackingQaReport.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/BmnTrackingQaExpReport.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/BmnLambdaQaReport.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/BmnClusteringQaReport.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/BmnCustomQa.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/BmnMCTrack.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/BmnMCTrackCreator.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/BmnAcceptanceFunction.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/BmnMCPoint.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/BmnMatchRecoToMC.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/offline/BmnQaHistoManager.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/offline/BmnQaOffline.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/offline/BmnCoordinateDetQa.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/offline/BmnTimeDetQa.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/offline/BmnCalorimeterDetQa.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/offline/BmnTrigDetQa.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/offline/BmnDstQa.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/offline/BmnQaMonitor.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/offline/BmnTrackingQaOffline.h"
    "/data/yaopeng/bmnroot_Yaopeng/QA/offline/BmnTrackingQaOfflineDraw.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES
    "/data/yaopeng/bmnroot_Yaopeng/build/lib/G__BmnQaDict_rdict.pcm"
    "/data/yaopeng/bmnroot_Yaopeng/build/lib/libBmnQa.rootmap"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnQa.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnQa.so.0"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "$ORIGIN/../lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairroot/install/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/data/yaopeng/bmnroot_Yaopeng/build/lib/libBmnQa.so.0.0.0"
    "/data/yaopeng/bmnroot_Yaopeng/build/lib/libBmnQa.so.0"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnQa.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnQa.so.0"
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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnQa.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnQa.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnQa.so"
         RPATH "$ORIGIN/../lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairroot/install/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/data/yaopeng/bmnroot_Yaopeng/build/lib/libBmnQa.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnQa.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnQa.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnQa.so"
         OLD_RPATH "/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairroot/install/lib:/data/yaopeng/bmnroot_Yaopeng/build/lib:"
         NEW_RPATH "$ORIGIN/../lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairroot/install/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnQa.so")
    endif()
  endif()
endif()

