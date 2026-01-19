# Install script for directory: /data/yaopeng/bmnroot_Yaopeng/base

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
    "/data/yaopeng/bmnroot_Yaopeng/base/cbm/CbmStsPoint.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/cbm/CbmDigi.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/cbm/CbmBaseHit.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/cbm/CbmHit.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/cbm/CbmStripHit.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/cbm/CbmVertex.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/cbm/CbmStsTrack.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/cbm/CbmStsTrackFinder.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/cbm/CbmStsTrackFitter.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/cbm/CbmTofMerger.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/cbm/CbmTrackMerger.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/cbm/CbmPrimaryVertexFinder.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/cbm/CbmFindPrimaryVertex.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/cbm/CbmL1Counters.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/cbm/CbmTrackMatch.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/cbm/CbmGlobalTrack.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/cbm/CbmMvdDetectorId.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/cbm/CbmMvdGeoPar.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/cbm/CbmMvdPoint.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/cbm/CbmMvdHit.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/cbm/CbmMvdHitMatch.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/cbm/CbmTofPoint.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/cbm/CbmTofHit.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/cbm/CbmTofTrack.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/cbm/CbmGeoSttPar.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/math/BmnMath.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/math/BmnMatrixMath.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/math/FitWLSQ.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/math/BmnGeoNavigator.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/math/BmnKalmanFilter.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/math/BmnMaterialEffects.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/math/BmnMaterialInfo.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/math/BmnProfRawTools.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/source/BmnFileSource.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/source/BmnDecoSource.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/source/BmnProfilometerSource.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/source/BmnOnlineShmSource.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/header/BmnEventHeader.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/header/BmnSpillHeader.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/header/DigiRunHeader.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/header/DstRunHeader.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/header/DstEventHeader.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/raw/RawTypes.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/raw/BmnADCDigit.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/raw/BmnTDCDigit.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/raw/BmnTQDCADCDigit.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/raw/BmnTTBDigit.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/raw/BmnMSCDigit.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/raw/BmnHRBDigit.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/raw/BmnSyncDigit.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/raw/BmnTrigDigit.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/raw/BmnTrigWaveDigit.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/raw/BmnTrigInfo.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/raw/BmnTrigUnion.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/raw/DigiArrays.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/data/CbmMCTrack.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/data/CbmStack.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/data/BmnStripData.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/data/BmnStripDigit.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/data/BmnCaloDigit.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/data/BmnTacquilaDigit.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/data/BmnDigiContainerTemplate.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/data/BmnHit.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/data/BmnLink.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/data/BmnMatch.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/data/BmnTrack.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/data/BmnIdentifiableTrack.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/data/BmnTrackMatch.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/data/BmnVertex.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/data/BmnEventQuality.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/data/BmnFitNode.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/BmnEnums.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/BmnDetectorList.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/BmnTask.h"
    "/data/yaopeng/bmnroot_Yaopeng/base/BmnFunctionSet.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES
    "/data/yaopeng/bmnroot_Yaopeng/build/lib/G__BmnBaseDict_rdict.pcm"
    "/data/yaopeng/bmnroot_Yaopeng/build/lib/libBmnBase.rootmap"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnBase.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnBase.so.0"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "$ORIGIN/../lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairroot/install/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/data/yaopeng/bmnroot_Yaopeng/build/lib/libBmnBase.so.0.0.0"
    "/data/yaopeng/bmnroot_Yaopeng/build/lib/libBmnBase.so.0"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnBase.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnBase.so.0"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairroot/install/lib:::::::::::::::"
           NEW_RPATH "$ORIGIN/../lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairroot/install/lib")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnBase.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnBase.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnBase.so"
         RPATH "$ORIGIN/../lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairroot/install/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/data/yaopeng/bmnroot_Yaopeng/build/lib/libBmnBase.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnBase.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnBase.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnBase.so"
         OLD_RPATH "/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairroot/install/lib:::::::::::::::"
         NEW_RPATH "$ORIGIN/../lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairroot/install/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnBase.so")
    endif()
  endif()
endif()

