# Install script for directory: /data/yaopeng/bmnroot_Yaopeng/physics

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
    "/data/yaopeng/bmnroot_Yaopeng/physics/decay/BmnTwoParticleDecay.h"
    "/data/yaopeng/bmnroot_Yaopeng/physics/decay/BmnParticlePair.h"
    "/data/yaopeng/bmnroot_Yaopeng/physics/decay/BmnParticlePairsInfo.h"
    "/data/yaopeng/bmnroot_Yaopeng/physics/decay/BmnParticlePairCut.h"
    "/data/yaopeng/bmnroot_Yaopeng/physics/decay/BmnMassSpectrumAnal.h"
    "/data/yaopeng/bmnroot_Yaopeng/physics/efficiency/BmnEfficiency.h"
    "/data/yaopeng/bmnroot_Yaopeng/physics/efficiency/BmnEfficiencyProbability.h"
    "/data/yaopeng/bmnroot_Yaopeng/physics/efficiency/BmnRealisticMc.h"
    "/data/yaopeng/bmnroot_Yaopeng/physics/efficiency/BmnEfficiencyTools.h"
    "/data/yaopeng/bmnroot_Yaopeng/physics/efficiency/BmnDataTriggerInfo.h"
    "/data/yaopeng/bmnroot_Yaopeng/physics/embedding/BmnLambdaEmbeddingMonitor.h"
    "/data/yaopeng/bmnroot_Yaopeng/physics/embedding/BmnParticleStore.h"
    "/data/yaopeng/bmnroot_Yaopeng/physics/embedding/BmnLambdaEmbeddingQa.h"
    "/data/yaopeng/bmnroot_Yaopeng/physics/embedding/BmnLambdaEmbeddingDrawHistos.h"
    "/data/yaopeng/bmnroot_Yaopeng/physics/embedding/BmnLambdaMisc.h"
    "/data/yaopeng/bmnroot_Yaopeng/physics/embedding/BmnInnerTrackerGeometryDraw.h"
    "/data/yaopeng/bmnroot_Yaopeng/physics/embedding/BmnLambdaEmbedding.h"
    "/data/yaopeng/bmnroot_Yaopeng/physics/run7/BmnLambdaAnalRun7.h"
    "/data/yaopeng/bmnroot_Yaopeng/physics/run7/BmnDataAnalRun7.h"
    "/data/yaopeng/bmnroot_Yaopeng/physics/run7/BmnTriggerEfficiencyRun7.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES
    "/data/yaopeng/bmnroot_Yaopeng/build/lib/G__BmnPhysicsDict_rdict.pcm"
    "/data/yaopeng/bmnroot_Yaopeng/build/lib/libBmnPhysics.rootmap"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnPhysics.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnPhysics.so.0"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "$ORIGIN/../lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairroot/install/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/data/yaopeng/bmnroot_Yaopeng/build/lib/libBmnPhysics.so.0.0.0"
    "/data/yaopeng/bmnroot_Yaopeng/build/lib/libBmnPhysics.so.0"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnPhysics.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnPhysics.so.0"
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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnPhysics.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnPhysics.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnPhysics.so"
         RPATH "$ORIGIN/../lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairroot/install/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/data/yaopeng/bmnroot_Yaopeng/build/lib/libBmnPhysics.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnPhysics.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnPhysics.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnPhysics.so"
         OLD_RPATH "/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairroot/install/lib:/data/yaopeng/bmnroot_Yaopeng/build/lib:"
         NEW_RPATH "$ORIGIN/../lib:/home/tools/FairSoft/fairsoft/install/lib:/home/tools/FairSoft/fairroot/install/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBmnPhysics.so")
    endif()
  endif()
endif()

