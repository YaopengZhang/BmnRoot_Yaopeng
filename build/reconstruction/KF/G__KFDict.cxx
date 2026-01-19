// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIreconstructiondIKFdIG__KFDict
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Header files passed as explicit arguments
#include "CbmKF.h"
#include "CbmKFFieldMath.h"
#include "CbmKFHit.h"
#include "CbmKFMaterial.h"
#include "CbmKFMath.h"
#include "CbmKFPixelMeasurement.h"
#include "CbmKFPrimaryVertexFinder.h"
#include "CbmKFTrackInterface.h"
#include "CbmKFUMeasurement.h"
#include "CbmKFVertexInterface.h"
#include "CbmKFParticle.h"
#include "CbmKFStsHit.h"
#include "CbmKFTrack.h"
#include "CbmKFVertex.h"
#include "CbmPVFinderKF.h"
#include "CbmStsKFTrackFitter.h"
#include "BmnKFStsHit.h"
#include "BmnStsKFTrackFitter.h"
#include "KFParticleMatch.h"
#include "KFMCParticle.h"
#include "CbmKFPartEfficiencies.h"
#include "CbmKFParticleDatabase.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_CbmKFTrackInterface(void *p = nullptr);
   static void *newArray_CbmKFTrackInterface(Long_t size, void *p);
   static void delete_CbmKFTrackInterface(void *p);
   static void deleteArray_CbmKFTrackInterface(void *p);
   static void destruct_CbmKFTrackInterface(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmKFTrackInterface*)
   {
      ::CbmKFTrackInterface *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmKFTrackInterface >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmKFTrackInterface", ::CbmKFTrackInterface::Class_Version(), "CbmKFTrackInterface.h", 25,
                  typeid(::CbmKFTrackInterface), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmKFTrackInterface::Dictionary, isa_proxy, 4,
                  sizeof(::CbmKFTrackInterface) );
      instance.SetNew(&new_CbmKFTrackInterface);
      instance.SetNewArray(&newArray_CbmKFTrackInterface);
      instance.SetDelete(&delete_CbmKFTrackInterface);
      instance.SetDeleteArray(&deleteArray_CbmKFTrackInterface);
      instance.SetDestructor(&destruct_CbmKFTrackInterface);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmKFTrackInterface*)
   {
      return GenerateInitInstanceLocal((::CbmKFTrackInterface*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmKFTrackInterface*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmKFMaterial(void *p = nullptr);
   static void *newArray_CbmKFMaterial(Long_t size, void *p);
   static void delete_CbmKFMaterial(void *p);
   static void deleteArray_CbmKFMaterial(void *p);
   static void destruct_CbmKFMaterial(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmKFMaterial*)
   {
      ::CbmKFMaterial *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmKFMaterial >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmKFMaterial", ::CbmKFMaterial::Class_Version(), "CbmKFMaterial.h", 17,
                  typeid(::CbmKFMaterial), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmKFMaterial::Dictionary, isa_proxy, 4,
                  sizeof(::CbmKFMaterial) );
      instance.SetNew(&new_CbmKFMaterial);
      instance.SetNewArray(&newArray_CbmKFMaterial);
      instance.SetDelete(&delete_CbmKFMaterial);
      instance.SetDeleteArray(&deleteArray_CbmKFMaterial);
      instance.SetDestructor(&destruct_CbmKFMaterial);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmKFMaterial*)
   {
      return GenerateInitInstanceLocal((::CbmKFMaterial*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmKFMaterial*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmKFWall(void *p = nullptr);
   static void *newArray_CbmKFWall(Long_t size, void *p);
   static void delete_CbmKFWall(void *p);
   static void deleteArray_CbmKFWall(void *p);
   static void destruct_CbmKFWall(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmKFWall*)
   {
      ::CbmKFWall *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmKFWall >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmKFWall", ::CbmKFWall::Class_Version(), "CbmKFMaterial.h", 69,
                  typeid(::CbmKFWall), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmKFWall::Dictionary, isa_proxy, 4,
                  sizeof(::CbmKFWall) );
      instance.SetNew(&new_CbmKFWall);
      instance.SetNewArray(&newArray_CbmKFWall);
      instance.SetDelete(&delete_CbmKFWall);
      instance.SetDeleteArray(&deleteArray_CbmKFWall);
      instance.SetDestructor(&destruct_CbmKFWall);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmKFWall*)
   {
      return GenerateInitInstanceLocal((::CbmKFWall*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmKFWall*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmKFTube(void *p = nullptr);
   static void *newArray_CbmKFTube(Long_t size, void *p);
   static void delete_CbmKFTube(void *p);
   static void deleteArray_CbmKFTube(void *p);
   static void destruct_CbmKFTube(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmKFTube*)
   {
      ::CbmKFTube *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmKFTube >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmKFTube", ::CbmKFTube::Class_Version(), "CbmKFMaterial.h", 77,
                  typeid(::CbmKFTube), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmKFTube::Dictionary, isa_proxy, 4,
                  sizeof(::CbmKFTube) );
      instance.SetNew(&new_CbmKFTube);
      instance.SetNewArray(&newArray_CbmKFTube);
      instance.SetDelete(&delete_CbmKFTube);
      instance.SetDeleteArray(&deleteArray_CbmKFTube);
      instance.SetDestructor(&destruct_CbmKFTube);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmKFTube*)
   {
      return GenerateInitInstanceLocal((::CbmKFTube*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmKFTube*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmKFBox(void *p = nullptr);
   static void *newArray_CbmKFBox(Long_t size, void *p);
   static void delete_CbmKFBox(void *p);
   static void deleteArray_CbmKFBox(void *p);
   static void destruct_CbmKFBox(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmKFBox*)
   {
      ::CbmKFBox *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmKFBox >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmKFBox", ::CbmKFBox::Class_Version(), "CbmKFMaterial.h", 97,
                  typeid(::CbmKFBox), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmKFBox::Dictionary, isa_proxy, 4,
                  sizeof(::CbmKFBox) );
      instance.SetNew(&new_CbmKFBox);
      instance.SetNewArray(&newArray_CbmKFBox);
      instance.SetDelete(&delete_CbmKFBox);
      instance.SetDeleteArray(&deleteArray_CbmKFBox);
      instance.SetDestructor(&destruct_CbmKFBox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmKFBox*)
   {
      return GenerateInitInstanceLocal((::CbmKFBox*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmKFBox*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmKFCone(void *p = nullptr);
   static void *newArray_CbmKFCone(Long_t size, void *p);
   static void delete_CbmKFCone(void *p);
   static void deleteArray_CbmKFCone(void *p);
   static void destruct_CbmKFCone(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmKFCone*)
   {
      ::CbmKFCone *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmKFCone >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmKFCone", ::CbmKFCone::Class_Version(), "CbmKFMaterial.h", 112,
                  typeid(::CbmKFCone), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmKFCone::Dictionary, isa_proxy, 4,
                  sizeof(::CbmKFCone) );
      instance.SetNew(&new_CbmKFCone);
      instance.SetNewArray(&newArray_CbmKFCone);
      instance.SetDelete(&delete_CbmKFCone);
      instance.SetDeleteArray(&deleteArray_CbmKFCone);
      instance.SetDestructor(&destruct_CbmKFCone);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmKFCone*)
   {
      return GenerateInitInstanceLocal((::CbmKFCone*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmKFCone*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmKF(void *p = nullptr);
   static void *newArray_CbmKF(Long_t size, void *p);
   static void delete_CbmKF(void *p);
   static void deleteArray_CbmKF(void *p);
   static void destruct_CbmKF(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmKF*)
   {
      ::CbmKF *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmKF >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmKF", ::CbmKF::Class_Version(), "CbmKF.h", 28,
                  typeid(::CbmKF), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmKF::Dictionary, isa_proxy, 4,
                  sizeof(::CbmKF) );
      instance.SetNew(&new_CbmKF);
      instance.SetNewArray(&newArray_CbmKF);
      instance.SetDelete(&delete_CbmKF);
      instance.SetDeleteArray(&deleteArray_CbmKF);
      instance.SetDestructor(&destruct_CbmKF);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmKF*)
   {
      return GenerateInitInstanceLocal((::CbmKF*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmKF*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmKFFieldMath(void *p = nullptr);
   static void *newArray_CbmKFFieldMath(Long_t size, void *p);
   static void delete_CbmKFFieldMath(void *p);
   static void deleteArray_CbmKFFieldMath(void *p);
   static void destruct_CbmKFFieldMath(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmKFFieldMath*)
   {
      ::CbmKFFieldMath *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmKFFieldMath >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmKFFieldMath", ::CbmKFFieldMath::Class_Version(), "CbmKFFieldMath.h", 19,
                  typeid(::CbmKFFieldMath), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmKFFieldMath::Dictionary, isa_proxy, 4,
                  sizeof(::CbmKFFieldMath) );
      instance.SetNew(&new_CbmKFFieldMath);
      instance.SetNewArray(&newArray_CbmKFFieldMath);
      instance.SetDelete(&delete_CbmKFFieldMath);
      instance.SetDeleteArray(&deleteArray_CbmKFFieldMath);
      instance.SetDestructor(&destruct_CbmKFFieldMath);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmKFFieldMath*)
   {
      return GenerateInitInstanceLocal((::CbmKFFieldMath*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmKFFieldMath*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_CbmKFHit(void *p);
   static void deleteArray_CbmKFHit(void *p);
   static void destruct_CbmKFHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmKFHit*)
   {
      ::CbmKFHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmKFHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmKFHit", ::CbmKFHit::Class_Version(), "CbmKFHit.h", 16,
                  typeid(::CbmKFHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmKFHit::Dictionary, isa_proxy, 4,
                  sizeof(::CbmKFHit) );
      instance.SetDelete(&delete_CbmKFHit);
      instance.SetDeleteArray(&deleteArray_CbmKFHit);
      instance.SetDestructor(&destruct_CbmKFHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmKFHit*)
   {
      return GenerateInitInstanceLocal((::CbmKFHit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmKFHit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmKFMath(void *p = nullptr);
   static void *newArray_CbmKFMath(Long_t size, void *p);
   static void delete_CbmKFMath(void *p);
   static void deleteArray_CbmKFMath(void *p);
   static void destruct_CbmKFMath(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmKFMath*)
   {
      ::CbmKFMath *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmKFMath >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmKFMath", ::CbmKFMath::Class_Version(), "CbmKFMath.h", 19,
                  typeid(::CbmKFMath), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmKFMath::Dictionary, isa_proxy, 4,
                  sizeof(::CbmKFMath) );
      instance.SetNew(&new_CbmKFMath);
      instance.SetNewArray(&newArray_CbmKFMath);
      instance.SetDelete(&delete_CbmKFMath);
      instance.SetDeleteArray(&deleteArray_CbmKFMath);
      instance.SetDestructor(&destruct_CbmKFMath);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmKFMath*)
   {
      return GenerateInitInstanceLocal((::CbmKFMath*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmKFMath*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmKFPixelMeasurement(void *p = nullptr);
   static void *newArray_CbmKFPixelMeasurement(Long_t size, void *p);
   static void delete_CbmKFPixelMeasurement(void *p);
   static void deleteArray_CbmKFPixelMeasurement(void *p);
   static void destruct_CbmKFPixelMeasurement(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmKFPixelMeasurement*)
   {
      ::CbmKFPixelMeasurement *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmKFPixelMeasurement >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmKFPixelMeasurement", ::CbmKFPixelMeasurement::Class_Version(), "CbmKFPixelMeasurement.h", 18,
                  typeid(::CbmKFPixelMeasurement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmKFPixelMeasurement::Dictionary, isa_proxy, 4,
                  sizeof(::CbmKFPixelMeasurement) );
      instance.SetNew(&new_CbmKFPixelMeasurement);
      instance.SetNewArray(&newArray_CbmKFPixelMeasurement);
      instance.SetDelete(&delete_CbmKFPixelMeasurement);
      instance.SetDeleteArray(&deleteArray_CbmKFPixelMeasurement);
      instance.SetDestructor(&destruct_CbmKFPixelMeasurement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmKFPixelMeasurement*)
   {
      return GenerateInitInstanceLocal((::CbmKFPixelMeasurement*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmKFPixelMeasurement*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmKFVertexInterface(void *p = nullptr);
   static void *newArray_CbmKFVertexInterface(Long_t size, void *p);
   static void delete_CbmKFVertexInterface(void *p);
   static void deleteArray_CbmKFVertexInterface(void *p);
   static void destruct_CbmKFVertexInterface(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmKFVertexInterface*)
   {
      ::CbmKFVertexInterface *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmKFVertexInterface >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmKFVertexInterface", ::CbmKFVertexInterface::Class_Version(), "CbmKFVertexInterface.h", 24,
                  typeid(::CbmKFVertexInterface), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmKFVertexInterface::Dictionary, isa_proxy, 4,
                  sizeof(::CbmKFVertexInterface) );
      instance.SetNew(&new_CbmKFVertexInterface);
      instance.SetNewArray(&newArray_CbmKFVertexInterface);
      instance.SetDelete(&delete_CbmKFVertexInterface);
      instance.SetDeleteArray(&deleteArray_CbmKFVertexInterface);
      instance.SetDestructor(&destruct_CbmKFVertexInterface);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmKFVertexInterface*)
   {
      return GenerateInitInstanceLocal((::CbmKFVertexInterface*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmKFVertexInterface*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmKFPrimaryVertexFinder(void *p = nullptr);
   static void *newArray_CbmKFPrimaryVertexFinder(Long_t size, void *p);
   static void delete_CbmKFPrimaryVertexFinder(void *p);
   static void deleteArray_CbmKFPrimaryVertexFinder(void *p);
   static void destruct_CbmKFPrimaryVertexFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmKFPrimaryVertexFinder*)
   {
      ::CbmKFPrimaryVertexFinder *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmKFPrimaryVertexFinder >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmKFPrimaryVertexFinder", ::CbmKFPrimaryVertexFinder::Class_Version(), "CbmKFPrimaryVertexFinder.h", 18,
                  typeid(::CbmKFPrimaryVertexFinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmKFPrimaryVertexFinder::Dictionary, isa_proxy, 4,
                  sizeof(::CbmKFPrimaryVertexFinder) );
      instance.SetNew(&new_CbmKFPrimaryVertexFinder);
      instance.SetNewArray(&newArray_CbmKFPrimaryVertexFinder);
      instance.SetDelete(&delete_CbmKFPrimaryVertexFinder);
      instance.SetDeleteArray(&deleteArray_CbmKFPrimaryVertexFinder);
      instance.SetDestructor(&destruct_CbmKFPrimaryVertexFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmKFPrimaryVertexFinder*)
   {
      return GenerateInitInstanceLocal((::CbmKFPrimaryVertexFinder*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmKFPrimaryVertexFinder*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmKFUMeasurement(void *p = nullptr);
   static void *newArray_CbmKFUMeasurement(Long_t size, void *p);
   static void delete_CbmKFUMeasurement(void *p);
   static void deleteArray_CbmKFUMeasurement(void *p);
   static void destruct_CbmKFUMeasurement(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmKFUMeasurement*)
   {
      ::CbmKFUMeasurement *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmKFUMeasurement >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmKFUMeasurement", ::CbmKFUMeasurement::Class_Version(), "CbmKFUMeasurement.h", 16,
                  typeid(::CbmKFUMeasurement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmKFUMeasurement::Dictionary, isa_proxy, 4,
                  sizeof(::CbmKFUMeasurement) );
      instance.SetNew(&new_CbmKFUMeasurement);
      instance.SetNewArray(&newArray_CbmKFUMeasurement);
      instance.SetDelete(&delete_CbmKFUMeasurement);
      instance.SetDeleteArray(&deleteArray_CbmKFUMeasurement);
      instance.SetDestructor(&destruct_CbmKFUMeasurement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmKFUMeasurement*)
   {
      return GenerateInitInstanceLocal((::CbmKFUMeasurement*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmKFUMeasurement*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmKFParticle(void *p = nullptr);
   static void *newArray_CbmKFParticle(Long_t size, void *p);
   static void delete_CbmKFParticle(void *p);
   static void deleteArray_CbmKFParticle(void *p);
   static void destruct_CbmKFParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmKFParticle*)
   {
      ::CbmKFParticle *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmKFParticle >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmKFParticle", ::CbmKFParticle::Class_Version(), "CbmKFParticle.h", 19,
                  typeid(::CbmKFParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmKFParticle::Dictionary, isa_proxy, 4,
                  sizeof(::CbmKFParticle) );
      instance.SetNew(&new_CbmKFParticle);
      instance.SetNewArray(&newArray_CbmKFParticle);
      instance.SetDelete(&delete_CbmKFParticle);
      instance.SetDeleteArray(&deleteArray_CbmKFParticle);
      instance.SetDestructor(&destruct_CbmKFParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmKFParticle*)
   {
      return GenerateInitInstanceLocal((::CbmKFParticle*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmKFParticle*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmKFStsHit(void *p = nullptr);
   static void *newArray_CbmKFStsHit(Long_t size, void *p);
   static void delete_CbmKFStsHit(void *p);
   static void deleteArray_CbmKFStsHit(void *p);
   static void destruct_CbmKFStsHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmKFStsHit*)
   {
      ::CbmKFStsHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmKFStsHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmKFStsHit", ::CbmKFStsHit::Class_Version(), "CbmKFStsHit.h", 11,
                  typeid(::CbmKFStsHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmKFStsHit::Dictionary, isa_proxy, 4,
                  sizeof(::CbmKFStsHit) );
      instance.SetNew(&new_CbmKFStsHit);
      instance.SetNewArray(&newArray_CbmKFStsHit);
      instance.SetDelete(&delete_CbmKFStsHit);
      instance.SetDeleteArray(&deleteArray_CbmKFStsHit);
      instance.SetDestructor(&destruct_CbmKFStsHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmKFStsHit*)
   {
      return GenerateInitInstanceLocal((::CbmKFStsHit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmKFStsHit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmKFTrack(void *p = nullptr);
   static void *newArray_CbmKFTrack(Long_t size, void *p);
   static void delete_CbmKFTrack(void *p);
   static void deleteArray_CbmKFTrack(void *p);
   static void destruct_CbmKFTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmKFTrack*)
   {
      ::CbmKFTrack *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmKFTrack >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmKFTrack", ::CbmKFTrack::Class_Version(), "CbmKFTrack.h", 21,
                  typeid(::CbmKFTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmKFTrack::Dictionary, isa_proxy, 4,
                  sizeof(::CbmKFTrack) );
      instance.SetNew(&new_CbmKFTrack);
      instance.SetNewArray(&newArray_CbmKFTrack);
      instance.SetDelete(&delete_CbmKFTrack);
      instance.SetDeleteArray(&deleteArray_CbmKFTrack);
      instance.SetDestructor(&destruct_CbmKFTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmKFTrack*)
   {
      return GenerateInitInstanceLocal((::CbmKFTrack*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmKFTrack*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmKFVertex(void *p = nullptr);
   static void *newArray_CbmKFVertex(Long_t size, void *p);
   static void delete_CbmKFVertex(void *p);
   static void deleteArray_CbmKFVertex(void *p);
   static void destruct_CbmKFVertex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmKFVertex*)
   {
      ::CbmKFVertex *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmKFVertex >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmKFVertex", ::CbmKFVertex::Class_Version(), "CbmKFVertex.h", 6,
                  typeid(::CbmKFVertex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmKFVertex::Dictionary, isa_proxy, 4,
                  sizeof(::CbmKFVertex) );
      instance.SetNew(&new_CbmKFVertex);
      instance.SetNewArray(&newArray_CbmKFVertex);
      instance.SetDelete(&delete_CbmKFVertex);
      instance.SetDeleteArray(&deleteArray_CbmKFVertex);
      instance.SetDestructor(&destruct_CbmKFVertex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmKFVertex*)
   {
      return GenerateInitInstanceLocal((::CbmKFVertex*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmKFVertex*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmPVFinderKF(void *p = nullptr);
   static void *newArray_CbmPVFinderKF(Long_t size, void *p);
   static void delete_CbmPVFinderKF(void *p);
   static void deleteArray_CbmPVFinderKF(void *p);
   static void destruct_CbmPVFinderKF(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmPVFinderKF*)
   {
      ::CbmPVFinderKF *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmPVFinderKF >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmPVFinderKF", ::CbmPVFinderKF::Class_Version(), "CbmPVFinderKF.h", 15,
                  typeid(::CbmPVFinderKF), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmPVFinderKF::Dictionary, isa_proxy, 4,
                  sizeof(::CbmPVFinderKF) );
      instance.SetNew(&new_CbmPVFinderKF);
      instance.SetNewArray(&newArray_CbmPVFinderKF);
      instance.SetDelete(&delete_CbmPVFinderKF);
      instance.SetDeleteArray(&deleteArray_CbmPVFinderKF);
      instance.SetDestructor(&destruct_CbmPVFinderKF);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmPVFinderKF*)
   {
      return GenerateInitInstanceLocal((::CbmPVFinderKF*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmPVFinderKF*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsKFTrackFitter(void *p = nullptr);
   static void *newArray_CbmStsKFTrackFitter(Long_t size, void *p);
   static void delete_CbmStsKFTrackFitter(void *p);
   static void deleteArray_CbmStsKFTrackFitter(void *p);
   static void destruct_CbmStsKFTrackFitter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsKFTrackFitter*)
   {
      ::CbmStsKFTrackFitter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsKFTrackFitter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsKFTrackFitter", ::CbmStsKFTrackFitter::Class_Version(), "CbmStsKFTrackFitter.h", 13,
                  typeid(::CbmStsKFTrackFitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsKFTrackFitter::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsKFTrackFitter) );
      instance.SetNew(&new_CbmStsKFTrackFitter);
      instance.SetNewArray(&newArray_CbmStsKFTrackFitter);
      instance.SetDelete(&delete_CbmStsKFTrackFitter);
      instance.SetDeleteArray(&deleteArray_CbmStsKFTrackFitter);
      instance.SetDestructor(&destruct_CbmStsKFTrackFitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsKFTrackFitter*)
   {
      return GenerateInitInstanceLocal((::CbmStsKFTrackFitter*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsKFTrackFitter*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnKFStsHit(void *p = nullptr);
   static void *newArray_BmnKFStsHit(Long_t size, void *p);
   static void delete_BmnKFStsHit(void *p);
   static void deleteArray_BmnKFStsHit(void *p);
   static void destruct_BmnKFStsHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnKFStsHit*)
   {
      ::BmnKFStsHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnKFStsHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnKFStsHit", ::BmnKFStsHit::Class_Version(), "BmnKFStsHit.h", 18,
                  typeid(::BmnKFStsHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnKFStsHit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnKFStsHit) );
      instance.SetNew(&new_BmnKFStsHit);
      instance.SetNewArray(&newArray_BmnKFStsHit);
      instance.SetDelete(&delete_BmnKFStsHit);
      instance.SetDeleteArray(&deleteArray_BmnKFStsHit);
      instance.SetDestructor(&destruct_BmnKFStsHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnKFStsHit*)
   {
      return GenerateInitInstanceLocal((::BmnKFStsHit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnKFStsHit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnStsKFTrackFitter(void *p = nullptr);
   static void *newArray_BmnStsKFTrackFitter(Long_t size, void *p);
   static void delete_BmnStsKFTrackFitter(void *p);
   static void deleteArray_BmnStsKFTrackFitter(void *p);
   static void destruct_BmnStsKFTrackFitter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnStsKFTrackFitter*)
   {
      ::BmnStsKFTrackFitter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnStsKFTrackFitter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnStsKFTrackFitter", ::BmnStsKFTrackFitter::Class_Version(), "BmnStsKFTrackFitter.h", 25,
                  typeid(::BmnStsKFTrackFitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnStsKFTrackFitter::Dictionary, isa_proxy, 4,
                  sizeof(::BmnStsKFTrackFitter) );
      instance.SetNew(&new_BmnStsKFTrackFitter);
      instance.SetNewArray(&newArray_BmnStsKFTrackFitter);
      instance.SetDelete(&delete_BmnStsKFTrackFitter);
      instance.SetDeleteArray(&deleteArray_BmnStsKFTrackFitter);
      instance.SetDestructor(&destruct_BmnStsKFTrackFitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnStsKFTrackFitter*)
   {
      return GenerateInitInstanceLocal((::BmnStsKFTrackFitter*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnStsKFTrackFitter*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KFParticleMatch(void *p = nullptr);
   static void *newArray_KFParticleMatch(Long_t size, void *p);
   static void delete_KFParticleMatch(void *p);
   static void deleteArray_KFParticleMatch(void *p);
   static void destruct_KFParticleMatch(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KFParticleMatch*)
   {
      ::KFParticleMatch *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KFParticleMatch >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("KFParticleMatch", ::KFParticleMatch::Class_Version(), "KFParticleMatch.h", 23,
                  typeid(::KFParticleMatch), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::KFParticleMatch::Dictionary, isa_proxy, 4,
                  sizeof(::KFParticleMatch) );
      instance.SetNew(&new_KFParticleMatch);
      instance.SetNewArray(&newArray_KFParticleMatch);
      instance.SetDelete(&delete_KFParticleMatch);
      instance.SetDeleteArray(&deleteArray_KFParticleMatch);
      instance.SetDestructor(&destruct_KFParticleMatch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KFParticleMatch*)
   {
      return GenerateInitInstanceLocal((::KFParticleMatch*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::KFParticleMatch*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KFMCParticle(void *p = nullptr);
   static void *newArray_KFMCParticle(Long_t size, void *p);
   static void delete_KFMCParticle(void *p);
   static void deleteArray_KFMCParticle(void *p);
   static void destruct_KFMCParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KFMCParticle*)
   {
      ::KFMCParticle *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KFMCParticle >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("KFMCParticle", ::KFMCParticle::Class_Version(), "KFMCParticle.h", 23,
                  typeid(::KFMCParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::KFMCParticle::Dictionary, isa_proxy, 4,
                  sizeof(::KFMCParticle) );
      instance.SetNew(&new_KFMCParticle);
      instance.SetNewArray(&newArray_KFMCParticle);
      instance.SetDelete(&delete_KFMCParticle);
      instance.SetDeleteArray(&deleteArray_KFMCParticle);
      instance.SetDestructor(&destruct_KFMCParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KFMCParticle*)
   {
      return GenerateInitInstanceLocal((::KFMCParticle*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::KFMCParticle*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmKFPartEfficiencies(void *p = nullptr);
   static void *newArray_CbmKFPartEfficiencies(Long_t size, void *p);
   static void delete_CbmKFPartEfficiencies(void *p);
   static void deleteArray_CbmKFPartEfficiencies(void *p);
   static void destruct_CbmKFPartEfficiencies(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmKFPartEfficiencies*)
   {
      ::CbmKFPartEfficiencies *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmKFPartEfficiencies >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmKFPartEfficiencies", ::CbmKFPartEfficiencies::Class_Version(), "CbmKFPartEfficiencies.h", 7,
                  typeid(::CbmKFPartEfficiencies), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmKFPartEfficiencies::Dictionary, isa_proxy, 4,
                  sizeof(::CbmKFPartEfficiencies) );
      instance.SetNew(&new_CbmKFPartEfficiencies);
      instance.SetNewArray(&newArray_CbmKFPartEfficiencies);
      instance.SetDelete(&delete_CbmKFPartEfficiencies);
      instance.SetDeleteArray(&deleteArray_CbmKFPartEfficiencies);
      instance.SetDestructor(&destruct_CbmKFPartEfficiencies);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmKFPartEfficiencies*)
   {
      return GenerateInitInstanceLocal((::CbmKFPartEfficiencies*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmKFPartEfficiencies*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr CbmKFTrackInterface::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmKFTrackInterface::Class_Name()
{
   return "CbmKFTrackInterface";
}

//______________________________________________________________________________
const char *CbmKFTrackInterface::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFTrackInterface*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmKFTrackInterface::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFTrackInterface*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmKFTrackInterface::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFTrackInterface*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmKFTrackInterface::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFTrackInterface*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmKFMaterial::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmKFMaterial::Class_Name()
{
   return "CbmKFMaterial";
}

//______________________________________________________________________________
const char *CbmKFMaterial::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFMaterial*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmKFMaterial::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFMaterial*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmKFMaterial::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFMaterial*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmKFMaterial::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFMaterial*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmKFWall::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmKFWall::Class_Name()
{
   return "CbmKFWall";
}

//______________________________________________________________________________
const char *CbmKFWall::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFWall*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmKFWall::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFWall*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmKFWall::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFWall*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmKFWall::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFWall*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmKFTube::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmKFTube::Class_Name()
{
   return "CbmKFTube";
}

//______________________________________________________________________________
const char *CbmKFTube::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFTube*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmKFTube::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFTube*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmKFTube::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFTube*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmKFTube::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFTube*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmKFBox::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmKFBox::Class_Name()
{
   return "CbmKFBox";
}

//______________________________________________________________________________
const char *CbmKFBox::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFBox*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmKFBox::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFBox*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmKFBox::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFBox*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmKFBox::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFBox*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmKFCone::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmKFCone::Class_Name()
{
   return "CbmKFCone";
}

//______________________________________________________________________________
const char *CbmKFCone::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFCone*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmKFCone::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFCone*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmKFCone::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFCone*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmKFCone::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFCone*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmKF::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmKF::Class_Name()
{
   return "CbmKF";
}

//______________________________________________________________________________
const char *CbmKF::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKF*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmKF::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKF*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmKF::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKF*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmKF::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKF*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmKFFieldMath::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmKFFieldMath::Class_Name()
{
   return "CbmKFFieldMath";
}

//______________________________________________________________________________
const char *CbmKFFieldMath::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFFieldMath*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmKFFieldMath::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFFieldMath*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmKFFieldMath::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFFieldMath*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmKFFieldMath::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFFieldMath*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmKFHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmKFHit::Class_Name()
{
   return "CbmKFHit";
}

//______________________________________________________________________________
const char *CbmKFHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmKFHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmKFHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmKFHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmKFMath::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmKFMath::Class_Name()
{
   return "CbmKFMath";
}

//______________________________________________________________________________
const char *CbmKFMath::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFMath*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmKFMath::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFMath*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmKFMath::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFMath*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmKFMath::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFMath*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmKFPixelMeasurement::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmKFPixelMeasurement::Class_Name()
{
   return "CbmKFPixelMeasurement";
}

//______________________________________________________________________________
const char *CbmKFPixelMeasurement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFPixelMeasurement*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmKFPixelMeasurement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFPixelMeasurement*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmKFPixelMeasurement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFPixelMeasurement*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmKFPixelMeasurement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFPixelMeasurement*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmKFVertexInterface::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmKFVertexInterface::Class_Name()
{
   return "CbmKFVertexInterface";
}

//______________________________________________________________________________
const char *CbmKFVertexInterface::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFVertexInterface*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmKFVertexInterface::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFVertexInterface*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmKFVertexInterface::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFVertexInterface*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmKFVertexInterface::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFVertexInterface*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmKFPrimaryVertexFinder::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmKFPrimaryVertexFinder::Class_Name()
{
   return "CbmKFPrimaryVertexFinder";
}

//______________________________________________________________________________
const char *CbmKFPrimaryVertexFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFPrimaryVertexFinder*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmKFPrimaryVertexFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFPrimaryVertexFinder*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmKFPrimaryVertexFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFPrimaryVertexFinder*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmKFPrimaryVertexFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFPrimaryVertexFinder*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmKFUMeasurement::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmKFUMeasurement::Class_Name()
{
   return "CbmKFUMeasurement";
}

//______________________________________________________________________________
const char *CbmKFUMeasurement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFUMeasurement*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmKFUMeasurement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFUMeasurement*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmKFUMeasurement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFUMeasurement*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmKFUMeasurement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFUMeasurement*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmKFParticle::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmKFParticle::Class_Name()
{
   return "CbmKFParticle";
}

//______________________________________________________________________________
const char *CbmKFParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFParticle*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmKFParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFParticle*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmKFParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFParticle*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmKFParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFParticle*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmKFStsHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmKFStsHit::Class_Name()
{
   return "CbmKFStsHit";
}

//______________________________________________________________________________
const char *CbmKFStsHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFStsHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmKFStsHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFStsHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmKFStsHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFStsHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmKFStsHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFStsHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmKFTrack::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmKFTrack::Class_Name()
{
   return "CbmKFTrack";
}

//______________________________________________________________________________
const char *CbmKFTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFTrack*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmKFTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFTrack*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmKFTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFTrack*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmKFTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFTrack*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmKFVertex::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmKFVertex::Class_Name()
{
   return "CbmKFVertex";
}

//______________________________________________________________________________
const char *CbmKFVertex::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFVertex*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmKFVertex::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFVertex*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmKFVertex::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFVertex*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmKFVertex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFVertex*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmPVFinderKF::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmPVFinderKF::Class_Name()
{
   return "CbmPVFinderKF";
}

//______________________________________________________________________________
const char *CbmPVFinderKF::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmPVFinderKF*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmPVFinderKF::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmPVFinderKF*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmPVFinderKF::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmPVFinderKF*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmPVFinderKF::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmPVFinderKF*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsKFTrackFitter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsKFTrackFitter::Class_Name()
{
   return "CbmStsKFTrackFitter";
}

//______________________________________________________________________________
const char *CbmStsKFTrackFitter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsKFTrackFitter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsKFTrackFitter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsKFTrackFitter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsKFTrackFitter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsKFTrackFitter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsKFTrackFitter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsKFTrackFitter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnKFStsHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnKFStsHit::Class_Name()
{
   return "BmnKFStsHit";
}

//______________________________________________________________________________
const char *BmnKFStsHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnKFStsHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnKFStsHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnKFStsHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnKFStsHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnKFStsHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnKFStsHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnKFStsHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnStsKFTrackFitter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnStsKFTrackFitter::Class_Name()
{
   return "BmnStsKFTrackFitter";
}

//______________________________________________________________________________
const char *BmnStsKFTrackFitter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnStsKFTrackFitter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnStsKFTrackFitter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnStsKFTrackFitter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnStsKFTrackFitter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnStsKFTrackFitter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnStsKFTrackFitter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnStsKFTrackFitter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KFParticleMatch::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *KFParticleMatch::Class_Name()
{
   return "KFParticleMatch";
}

//______________________________________________________________________________
const char *KFParticleMatch::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KFParticleMatch*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int KFParticleMatch::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KFParticleMatch*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KFParticleMatch::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KFParticleMatch*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KFParticleMatch::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KFParticleMatch*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KFMCParticle::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *KFMCParticle::Class_Name()
{
   return "KFMCParticle";
}

//______________________________________________________________________________
const char *KFMCParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KFMCParticle*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int KFMCParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KFMCParticle*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KFMCParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KFMCParticle*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KFMCParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KFMCParticle*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmKFPartEfficiencies::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmKFPartEfficiencies::Class_Name()
{
   return "CbmKFPartEfficiencies";
}

//______________________________________________________________________________
const char *CbmKFPartEfficiencies::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFPartEfficiencies*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmKFPartEfficiencies::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFPartEfficiencies*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmKFPartEfficiencies::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFPartEfficiencies*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmKFPartEfficiencies::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFPartEfficiencies*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void CbmKFTrackInterface::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmKFTrackInterface.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmKFTrackInterface::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmKFTrackInterface::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmKFTrackInterface(void *p) {
      return  p ? new(p) ::CbmKFTrackInterface : new ::CbmKFTrackInterface;
   }
   static void *newArray_CbmKFTrackInterface(Long_t nElements, void *p) {
      return p ? new(p) ::CbmKFTrackInterface[nElements] : new ::CbmKFTrackInterface[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmKFTrackInterface(void *p) {
      delete ((::CbmKFTrackInterface*)p);
   }
   static void deleteArray_CbmKFTrackInterface(void *p) {
      delete [] ((::CbmKFTrackInterface*)p);
   }
   static void destruct_CbmKFTrackInterface(void *p) {
      typedef ::CbmKFTrackInterface current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmKFTrackInterface

//______________________________________________________________________________
void CbmKFMaterial::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmKFMaterial.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmKFMaterial::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmKFMaterial::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmKFMaterial(void *p) {
      return  p ? new(p) ::CbmKFMaterial : new ::CbmKFMaterial;
   }
   static void *newArray_CbmKFMaterial(Long_t nElements, void *p) {
      return p ? new(p) ::CbmKFMaterial[nElements] : new ::CbmKFMaterial[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmKFMaterial(void *p) {
      delete ((::CbmKFMaterial*)p);
   }
   static void deleteArray_CbmKFMaterial(void *p) {
      delete [] ((::CbmKFMaterial*)p);
   }
   static void destruct_CbmKFMaterial(void *p) {
      typedef ::CbmKFMaterial current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmKFMaterial

//______________________________________________________________________________
void CbmKFWall::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmKFWall.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmKFWall::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmKFWall::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmKFWall(void *p) {
      return  p ? new(p) ::CbmKFWall : new ::CbmKFWall;
   }
   static void *newArray_CbmKFWall(Long_t nElements, void *p) {
      return p ? new(p) ::CbmKFWall[nElements] : new ::CbmKFWall[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmKFWall(void *p) {
      delete ((::CbmKFWall*)p);
   }
   static void deleteArray_CbmKFWall(void *p) {
      delete [] ((::CbmKFWall*)p);
   }
   static void destruct_CbmKFWall(void *p) {
      typedef ::CbmKFWall current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmKFWall

//______________________________________________________________________________
void CbmKFTube::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmKFTube.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmKFTube::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmKFTube::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmKFTube(void *p) {
      return  p ? new(p) ::CbmKFTube : new ::CbmKFTube;
   }
   static void *newArray_CbmKFTube(Long_t nElements, void *p) {
      return p ? new(p) ::CbmKFTube[nElements] : new ::CbmKFTube[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmKFTube(void *p) {
      delete ((::CbmKFTube*)p);
   }
   static void deleteArray_CbmKFTube(void *p) {
      delete [] ((::CbmKFTube*)p);
   }
   static void destruct_CbmKFTube(void *p) {
      typedef ::CbmKFTube current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmKFTube

//______________________________________________________________________________
void CbmKFBox::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmKFBox.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmKFBox::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmKFBox::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmKFBox(void *p) {
      return  p ? new(p) ::CbmKFBox : new ::CbmKFBox;
   }
   static void *newArray_CbmKFBox(Long_t nElements, void *p) {
      return p ? new(p) ::CbmKFBox[nElements] : new ::CbmKFBox[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmKFBox(void *p) {
      delete ((::CbmKFBox*)p);
   }
   static void deleteArray_CbmKFBox(void *p) {
      delete [] ((::CbmKFBox*)p);
   }
   static void destruct_CbmKFBox(void *p) {
      typedef ::CbmKFBox current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmKFBox

//______________________________________________________________________________
void CbmKFCone::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmKFCone.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmKFCone::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmKFCone::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmKFCone(void *p) {
      return  p ? new(p) ::CbmKFCone : new ::CbmKFCone;
   }
   static void *newArray_CbmKFCone(Long_t nElements, void *p) {
      return p ? new(p) ::CbmKFCone[nElements] : new ::CbmKFCone[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmKFCone(void *p) {
      delete ((::CbmKFCone*)p);
   }
   static void deleteArray_CbmKFCone(void *p) {
      delete [] ((::CbmKFCone*)p);
   }
   static void destruct_CbmKFCone(void *p) {
      typedef ::CbmKFCone current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmKFCone

//______________________________________________________________________________
void CbmKF::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmKF.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmKF::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmKF::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmKF(void *p) {
      return  p ? new(p) ::CbmKF : new ::CbmKF;
   }
   static void *newArray_CbmKF(Long_t nElements, void *p) {
      return p ? new(p) ::CbmKF[nElements] : new ::CbmKF[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmKF(void *p) {
      delete ((::CbmKF*)p);
   }
   static void deleteArray_CbmKF(void *p) {
      delete [] ((::CbmKF*)p);
   }
   static void destruct_CbmKF(void *p) {
      typedef ::CbmKF current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmKF

//______________________________________________________________________________
void CbmKFFieldMath::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmKFFieldMath.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmKFFieldMath::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmKFFieldMath::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmKFFieldMath(void *p) {
      return  p ? new(p) ::CbmKFFieldMath : new ::CbmKFFieldMath;
   }
   static void *newArray_CbmKFFieldMath(Long_t nElements, void *p) {
      return p ? new(p) ::CbmKFFieldMath[nElements] : new ::CbmKFFieldMath[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmKFFieldMath(void *p) {
      delete ((::CbmKFFieldMath*)p);
   }
   static void deleteArray_CbmKFFieldMath(void *p) {
      delete [] ((::CbmKFFieldMath*)p);
   }
   static void destruct_CbmKFFieldMath(void *p) {
      typedef ::CbmKFFieldMath current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmKFFieldMath

//______________________________________________________________________________
void CbmKFHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmKFHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmKFHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmKFHit::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_CbmKFHit(void *p) {
      delete ((::CbmKFHit*)p);
   }
   static void deleteArray_CbmKFHit(void *p) {
      delete [] ((::CbmKFHit*)p);
   }
   static void destruct_CbmKFHit(void *p) {
      typedef ::CbmKFHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmKFHit

//______________________________________________________________________________
void CbmKFMath::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmKFMath.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmKFMath::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmKFMath::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmKFMath(void *p) {
      return  p ? new(p) ::CbmKFMath : new ::CbmKFMath;
   }
   static void *newArray_CbmKFMath(Long_t nElements, void *p) {
      return p ? new(p) ::CbmKFMath[nElements] : new ::CbmKFMath[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmKFMath(void *p) {
      delete ((::CbmKFMath*)p);
   }
   static void deleteArray_CbmKFMath(void *p) {
      delete [] ((::CbmKFMath*)p);
   }
   static void destruct_CbmKFMath(void *p) {
      typedef ::CbmKFMath current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmKFMath

//______________________________________________________________________________
void CbmKFPixelMeasurement::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmKFPixelMeasurement.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmKFPixelMeasurement::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmKFPixelMeasurement::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmKFPixelMeasurement(void *p) {
      return  p ? new(p) ::CbmKFPixelMeasurement : new ::CbmKFPixelMeasurement;
   }
   static void *newArray_CbmKFPixelMeasurement(Long_t nElements, void *p) {
      return p ? new(p) ::CbmKFPixelMeasurement[nElements] : new ::CbmKFPixelMeasurement[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmKFPixelMeasurement(void *p) {
      delete ((::CbmKFPixelMeasurement*)p);
   }
   static void deleteArray_CbmKFPixelMeasurement(void *p) {
      delete [] ((::CbmKFPixelMeasurement*)p);
   }
   static void destruct_CbmKFPixelMeasurement(void *p) {
      typedef ::CbmKFPixelMeasurement current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmKFPixelMeasurement

//______________________________________________________________________________
void CbmKFVertexInterface::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmKFVertexInterface.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmKFVertexInterface::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmKFVertexInterface::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmKFVertexInterface(void *p) {
      return  p ? new(p) ::CbmKFVertexInterface : new ::CbmKFVertexInterface;
   }
   static void *newArray_CbmKFVertexInterface(Long_t nElements, void *p) {
      return p ? new(p) ::CbmKFVertexInterface[nElements] : new ::CbmKFVertexInterface[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmKFVertexInterface(void *p) {
      delete ((::CbmKFVertexInterface*)p);
   }
   static void deleteArray_CbmKFVertexInterface(void *p) {
      delete [] ((::CbmKFVertexInterface*)p);
   }
   static void destruct_CbmKFVertexInterface(void *p) {
      typedef ::CbmKFVertexInterface current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmKFVertexInterface

//______________________________________________________________________________
void CbmKFPrimaryVertexFinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmKFPrimaryVertexFinder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmKFPrimaryVertexFinder::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmKFPrimaryVertexFinder::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmKFPrimaryVertexFinder(void *p) {
      return  p ? new(p) ::CbmKFPrimaryVertexFinder : new ::CbmKFPrimaryVertexFinder;
   }
   static void *newArray_CbmKFPrimaryVertexFinder(Long_t nElements, void *p) {
      return p ? new(p) ::CbmKFPrimaryVertexFinder[nElements] : new ::CbmKFPrimaryVertexFinder[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmKFPrimaryVertexFinder(void *p) {
      delete ((::CbmKFPrimaryVertexFinder*)p);
   }
   static void deleteArray_CbmKFPrimaryVertexFinder(void *p) {
      delete [] ((::CbmKFPrimaryVertexFinder*)p);
   }
   static void destruct_CbmKFPrimaryVertexFinder(void *p) {
      typedef ::CbmKFPrimaryVertexFinder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmKFPrimaryVertexFinder

//______________________________________________________________________________
void CbmKFUMeasurement::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmKFUMeasurement.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmKFUMeasurement::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmKFUMeasurement::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmKFUMeasurement(void *p) {
      return  p ? new(p) ::CbmKFUMeasurement : new ::CbmKFUMeasurement;
   }
   static void *newArray_CbmKFUMeasurement(Long_t nElements, void *p) {
      return p ? new(p) ::CbmKFUMeasurement[nElements] : new ::CbmKFUMeasurement[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmKFUMeasurement(void *p) {
      delete ((::CbmKFUMeasurement*)p);
   }
   static void deleteArray_CbmKFUMeasurement(void *p) {
      delete [] ((::CbmKFUMeasurement*)p);
   }
   static void destruct_CbmKFUMeasurement(void *p) {
      typedef ::CbmKFUMeasurement current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmKFUMeasurement

//______________________________________________________________________________
void CbmKFParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmKFParticle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmKFParticle::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmKFParticle::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmKFParticle(void *p) {
      return  p ? new(p) ::CbmKFParticle : new ::CbmKFParticle;
   }
   static void *newArray_CbmKFParticle(Long_t nElements, void *p) {
      return p ? new(p) ::CbmKFParticle[nElements] : new ::CbmKFParticle[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmKFParticle(void *p) {
      delete ((::CbmKFParticle*)p);
   }
   static void deleteArray_CbmKFParticle(void *p) {
      delete [] ((::CbmKFParticle*)p);
   }
   static void destruct_CbmKFParticle(void *p) {
      typedef ::CbmKFParticle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmKFParticle

//______________________________________________________________________________
void CbmKFStsHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmKFStsHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmKFStsHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmKFStsHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmKFStsHit(void *p) {
      return  p ? new(p) ::CbmKFStsHit : new ::CbmKFStsHit;
   }
   static void *newArray_CbmKFStsHit(Long_t nElements, void *p) {
      return p ? new(p) ::CbmKFStsHit[nElements] : new ::CbmKFStsHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmKFStsHit(void *p) {
      delete ((::CbmKFStsHit*)p);
   }
   static void deleteArray_CbmKFStsHit(void *p) {
      delete [] ((::CbmKFStsHit*)p);
   }
   static void destruct_CbmKFStsHit(void *p) {
      typedef ::CbmKFStsHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmKFStsHit

//______________________________________________________________________________
void CbmKFTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmKFTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmKFTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmKFTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmKFTrack(void *p) {
      return  p ? new(p) ::CbmKFTrack : new ::CbmKFTrack;
   }
   static void *newArray_CbmKFTrack(Long_t nElements, void *p) {
      return p ? new(p) ::CbmKFTrack[nElements] : new ::CbmKFTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmKFTrack(void *p) {
      delete ((::CbmKFTrack*)p);
   }
   static void deleteArray_CbmKFTrack(void *p) {
      delete [] ((::CbmKFTrack*)p);
   }
   static void destruct_CbmKFTrack(void *p) {
      typedef ::CbmKFTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmKFTrack

//______________________________________________________________________________
void CbmKFVertex::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmKFVertex.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmKFVertex::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmKFVertex::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmKFVertex(void *p) {
      return  p ? new(p) ::CbmKFVertex : new ::CbmKFVertex;
   }
   static void *newArray_CbmKFVertex(Long_t nElements, void *p) {
      return p ? new(p) ::CbmKFVertex[nElements] : new ::CbmKFVertex[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmKFVertex(void *p) {
      delete ((::CbmKFVertex*)p);
   }
   static void deleteArray_CbmKFVertex(void *p) {
      delete [] ((::CbmKFVertex*)p);
   }
   static void destruct_CbmKFVertex(void *p) {
      typedef ::CbmKFVertex current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmKFVertex

//______________________________________________________________________________
void CbmPVFinderKF::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmPVFinderKF.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmPVFinderKF::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmPVFinderKF::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmPVFinderKF(void *p) {
      return  p ? new(p) ::CbmPVFinderKF : new ::CbmPVFinderKF;
   }
   static void *newArray_CbmPVFinderKF(Long_t nElements, void *p) {
      return p ? new(p) ::CbmPVFinderKF[nElements] : new ::CbmPVFinderKF[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmPVFinderKF(void *p) {
      delete ((::CbmPVFinderKF*)p);
   }
   static void deleteArray_CbmPVFinderKF(void *p) {
      delete [] ((::CbmPVFinderKF*)p);
   }
   static void destruct_CbmPVFinderKF(void *p) {
      typedef ::CbmPVFinderKF current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmPVFinderKF

//______________________________________________________________________________
void CbmStsKFTrackFitter::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsKFTrackFitter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsKFTrackFitter::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsKFTrackFitter::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsKFTrackFitter(void *p) {
      return  p ? new(p) ::CbmStsKFTrackFitter : new ::CbmStsKFTrackFitter;
   }
   static void *newArray_CbmStsKFTrackFitter(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsKFTrackFitter[nElements] : new ::CbmStsKFTrackFitter[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsKFTrackFitter(void *p) {
      delete ((::CbmStsKFTrackFitter*)p);
   }
   static void deleteArray_CbmStsKFTrackFitter(void *p) {
      delete [] ((::CbmStsKFTrackFitter*)p);
   }
   static void destruct_CbmStsKFTrackFitter(void *p) {
      typedef ::CbmStsKFTrackFitter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsKFTrackFitter

//______________________________________________________________________________
void BmnKFStsHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnKFStsHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnKFStsHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnKFStsHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnKFStsHit(void *p) {
      return  p ? new(p) ::BmnKFStsHit : new ::BmnKFStsHit;
   }
   static void *newArray_BmnKFStsHit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnKFStsHit[nElements] : new ::BmnKFStsHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnKFStsHit(void *p) {
      delete ((::BmnKFStsHit*)p);
   }
   static void deleteArray_BmnKFStsHit(void *p) {
      delete [] ((::BmnKFStsHit*)p);
   }
   static void destruct_BmnKFStsHit(void *p) {
      typedef ::BmnKFStsHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnKFStsHit

//______________________________________________________________________________
void BmnStsKFTrackFitter::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnStsKFTrackFitter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnStsKFTrackFitter::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnStsKFTrackFitter::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnStsKFTrackFitter(void *p) {
      return  p ? new(p) ::BmnStsKFTrackFitter : new ::BmnStsKFTrackFitter;
   }
   static void *newArray_BmnStsKFTrackFitter(Long_t nElements, void *p) {
      return p ? new(p) ::BmnStsKFTrackFitter[nElements] : new ::BmnStsKFTrackFitter[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnStsKFTrackFitter(void *p) {
      delete ((::BmnStsKFTrackFitter*)p);
   }
   static void deleteArray_BmnStsKFTrackFitter(void *p) {
      delete [] ((::BmnStsKFTrackFitter*)p);
   }
   static void destruct_BmnStsKFTrackFitter(void *p) {
      typedef ::BmnStsKFTrackFitter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnStsKFTrackFitter

//______________________________________________________________________________
void KFParticleMatch::Streamer(TBuffer &R__b)
{
   // Stream an object of class KFParticleMatch.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KFParticleMatch::Class(),this);
   } else {
      R__b.WriteClassBuffer(KFParticleMatch::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KFParticleMatch(void *p) {
      return  p ? new(p) ::KFParticleMatch : new ::KFParticleMatch;
   }
   static void *newArray_KFParticleMatch(Long_t nElements, void *p) {
      return p ? new(p) ::KFParticleMatch[nElements] : new ::KFParticleMatch[nElements];
   }
   // Wrapper around operator delete
   static void delete_KFParticleMatch(void *p) {
      delete ((::KFParticleMatch*)p);
   }
   static void deleteArray_KFParticleMatch(void *p) {
      delete [] ((::KFParticleMatch*)p);
   }
   static void destruct_KFParticleMatch(void *p) {
      typedef ::KFParticleMatch current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KFParticleMatch

//______________________________________________________________________________
void KFMCParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class KFMCParticle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KFMCParticle::Class(),this);
   } else {
      R__b.WriteClassBuffer(KFMCParticle::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KFMCParticle(void *p) {
      return  p ? new(p) ::KFMCParticle : new ::KFMCParticle;
   }
   static void *newArray_KFMCParticle(Long_t nElements, void *p) {
      return p ? new(p) ::KFMCParticle[nElements] : new ::KFMCParticle[nElements];
   }
   // Wrapper around operator delete
   static void delete_KFMCParticle(void *p) {
      delete ((::KFMCParticle*)p);
   }
   static void deleteArray_KFMCParticle(void *p) {
      delete [] ((::KFMCParticle*)p);
   }
   static void destruct_KFMCParticle(void *p) {
      typedef ::KFMCParticle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KFMCParticle

//______________________________________________________________________________
void CbmKFPartEfficiencies::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmKFPartEfficiencies.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmKFPartEfficiencies::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmKFPartEfficiencies::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmKFPartEfficiencies(void *p) {
      return  p ? new(p) ::CbmKFPartEfficiencies : new ::CbmKFPartEfficiencies;
   }
   static void *newArray_CbmKFPartEfficiencies(Long_t nElements, void *p) {
      return p ? new(p) ::CbmKFPartEfficiencies[nElements] : new ::CbmKFPartEfficiencies[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmKFPartEfficiencies(void *p) {
      delete ((::CbmKFPartEfficiencies*)p);
   }
   static void deleteArray_CbmKFPartEfficiencies(void *p) {
      delete [] ((::CbmKFPartEfficiencies*)p);
   }
   static void destruct_CbmKFPartEfficiencies(void *p) {
      typedef ::CbmKFPartEfficiencies current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmKFPartEfficiencies

namespace ROOT {
   static TClass *vectorlEvectorlEintgRsPgR_Dictionary();
   static void vectorlEvectorlEintgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEintgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlEintgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEintgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEintgRsPgR(void *p);
   static void destruct_vectorlEvectorlEintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<int> >*)
   {
      vector<vector<int> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<int> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<int> >", -2, "vector", 386,
                  typeid(vector<vector<int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<int> >) );
      instance.SetNew(&new_vectorlEvectorlEintgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEintgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEintgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEintgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<int> > >()));

      ::ROOT::AddClassAlternate("vector<vector<int> >","std::vector<std::vector<int, std::allocator<int> >, std::allocator<std::vector<int, std::allocator<int> > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<int> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<int> >*)nullptr)->GetClass();
      vectorlEvectorlEintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<int> > : new vector<vector<int> >;
   }
   static void *newArray_vectorlEvectorlEintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<int> >[nElements] : new vector<vector<int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEintgRsPgR(void *p) {
      delete ((vector<vector<int> >*)p);
   }
   static void deleteArray_vectorlEvectorlEintgRsPgR(void *p) {
      delete [] ((vector<vector<int> >*)p);
   }
   static void destruct_vectorlEvectorlEintgRsPgR(void *p) {
      typedef vector<vector<int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<int> >

namespace ROOT {
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = nullptr);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "vector", 386,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));

      ::ROOT::AddClassAlternate("vector<int>","std::vector<int, std::allocator<int> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<int>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<int>*)nullptr)->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete ((vector<int>*)p);
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] ((vector<int>*)p);
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<int>

namespace ROOT {
   static TClass *vectorlETStringgR_Dictionary();
   static void vectorlETStringgR_TClassManip(TClass*);
   static void *new_vectorlETStringgR(void *p = nullptr);
   static void *newArray_vectorlETStringgR(Long_t size, void *p);
   static void delete_vectorlETStringgR(void *p);
   static void deleteArray_vectorlETStringgR(void *p);
   static void destruct_vectorlETStringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TString>*)
   {
      vector<TString> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TString>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TString>", -2, "vector", 386,
                  typeid(vector<TString>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETStringgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TString>) );
      instance.SetNew(&new_vectorlETStringgR);
      instance.SetNewArray(&newArray_vectorlETStringgR);
      instance.SetDelete(&delete_vectorlETStringgR);
      instance.SetDeleteArray(&deleteArray_vectorlETStringgR);
      instance.SetDestructor(&destruct_vectorlETStringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TString> >()));

      ::ROOT::AddClassAlternate("vector<TString>","std::vector<TString, std::allocator<TString> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TString>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETStringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TString>*)nullptr)->GetClass();
      vectorlETStringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETStringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETStringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TString> : new vector<TString>;
   }
   static void *newArray_vectorlETStringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TString>[nElements] : new vector<TString>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETStringgR(void *p) {
      delete ((vector<TString>*)p);
   }
   static void deleteArray_vectorlETStringgR(void *p) {
      delete [] ((vector<TString>*)p);
   }
   static void destruct_vectorlETStringgR(void *p) {
      typedef vector<TString> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TString>

namespace ROOT {
   static TClass *vectorlECbmKFWallgR_Dictionary();
   static void vectorlECbmKFWallgR_TClassManip(TClass*);
   static void *new_vectorlECbmKFWallgR(void *p = nullptr);
   static void *newArray_vectorlECbmKFWallgR(Long_t size, void *p);
   static void delete_vectorlECbmKFWallgR(void *p);
   static void deleteArray_vectorlECbmKFWallgR(void *p);
   static void destruct_vectorlECbmKFWallgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<CbmKFWall>*)
   {
      vector<CbmKFWall> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<CbmKFWall>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<CbmKFWall>", -2, "vector", 386,
                  typeid(vector<CbmKFWall>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlECbmKFWallgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<CbmKFWall>) );
      instance.SetNew(&new_vectorlECbmKFWallgR);
      instance.SetNewArray(&newArray_vectorlECbmKFWallgR);
      instance.SetDelete(&delete_vectorlECbmKFWallgR);
      instance.SetDeleteArray(&deleteArray_vectorlECbmKFWallgR);
      instance.SetDestructor(&destruct_vectorlECbmKFWallgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<CbmKFWall> >()));

      ::ROOT::AddClassAlternate("vector<CbmKFWall>","std::vector<CbmKFWall, std::allocator<CbmKFWall> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<CbmKFWall>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlECbmKFWallgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<CbmKFWall>*)nullptr)->GetClass();
      vectorlECbmKFWallgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlECbmKFWallgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlECbmKFWallgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmKFWall> : new vector<CbmKFWall>;
   }
   static void *newArray_vectorlECbmKFWallgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmKFWall>[nElements] : new vector<CbmKFWall>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlECbmKFWallgR(void *p) {
      delete ((vector<CbmKFWall>*)p);
   }
   static void deleteArray_vectorlECbmKFWallgR(void *p) {
      delete [] ((vector<CbmKFWall>*)p);
   }
   static void destruct_vectorlECbmKFWallgR(void *p) {
      typedef vector<CbmKFWall> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<CbmKFWall>

namespace ROOT {
   static TClass *vectorlECbmKFTubegR_Dictionary();
   static void vectorlECbmKFTubegR_TClassManip(TClass*);
   static void *new_vectorlECbmKFTubegR(void *p = nullptr);
   static void *newArray_vectorlECbmKFTubegR(Long_t size, void *p);
   static void delete_vectorlECbmKFTubegR(void *p);
   static void deleteArray_vectorlECbmKFTubegR(void *p);
   static void destruct_vectorlECbmKFTubegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<CbmKFTube>*)
   {
      vector<CbmKFTube> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<CbmKFTube>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<CbmKFTube>", -2, "vector", 386,
                  typeid(vector<CbmKFTube>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlECbmKFTubegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<CbmKFTube>) );
      instance.SetNew(&new_vectorlECbmKFTubegR);
      instance.SetNewArray(&newArray_vectorlECbmKFTubegR);
      instance.SetDelete(&delete_vectorlECbmKFTubegR);
      instance.SetDeleteArray(&deleteArray_vectorlECbmKFTubegR);
      instance.SetDestructor(&destruct_vectorlECbmKFTubegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<CbmKFTube> >()));

      ::ROOT::AddClassAlternate("vector<CbmKFTube>","std::vector<CbmKFTube, std::allocator<CbmKFTube> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<CbmKFTube>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlECbmKFTubegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<CbmKFTube>*)nullptr)->GetClass();
      vectorlECbmKFTubegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlECbmKFTubegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlECbmKFTubegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmKFTube> : new vector<CbmKFTube>;
   }
   static void *newArray_vectorlECbmKFTubegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmKFTube>[nElements] : new vector<CbmKFTube>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlECbmKFTubegR(void *p) {
      delete ((vector<CbmKFTube>*)p);
   }
   static void deleteArray_vectorlECbmKFTubegR(void *p) {
      delete [] ((vector<CbmKFTube>*)p);
   }
   static void destruct_vectorlECbmKFTubegR(void *p) {
      typedef vector<CbmKFTube> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<CbmKFTube>

namespace ROOT {
   static TClass *vectorlECbmKFTrackInterfacemUgR_Dictionary();
   static void vectorlECbmKFTrackInterfacemUgR_TClassManip(TClass*);
   static void *new_vectorlECbmKFTrackInterfacemUgR(void *p = nullptr);
   static void *newArray_vectorlECbmKFTrackInterfacemUgR(Long_t size, void *p);
   static void delete_vectorlECbmKFTrackInterfacemUgR(void *p);
   static void deleteArray_vectorlECbmKFTrackInterfacemUgR(void *p);
   static void destruct_vectorlECbmKFTrackInterfacemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<CbmKFTrackInterface*>*)
   {
      vector<CbmKFTrackInterface*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<CbmKFTrackInterface*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<CbmKFTrackInterface*>", -2, "vector", 386,
                  typeid(vector<CbmKFTrackInterface*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlECbmKFTrackInterfacemUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<CbmKFTrackInterface*>) );
      instance.SetNew(&new_vectorlECbmKFTrackInterfacemUgR);
      instance.SetNewArray(&newArray_vectorlECbmKFTrackInterfacemUgR);
      instance.SetDelete(&delete_vectorlECbmKFTrackInterfacemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlECbmKFTrackInterfacemUgR);
      instance.SetDestructor(&destruct_vectorlECbmKFTrackInterfacemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<CbmKFTrackInterface*> >()));

      ::ROOT::AddClassAlternate("vector<CbmKFTrackInterface*>","std::vector<CbmKFTrackInterface*, std::allocator<CbmKFTrackInterface*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<CbmKFTrackInterface*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlECbmKFTrackInterfacemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<CbmKFTrackInterface*>*)nullptr)->GetClass();
      vectorlECbmKFTrackInterfacemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlECbmKFTrackInterfacemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlECbmKFTrackInterfacemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmKFTrackInterface*> : new vector<CbmKFTrackInterface*>;
   }
   static void *newArray_vectorlECbmKFTrackInterfacemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmKFTrackInterface*>[nElements] : new vector<CbmKFTrackInterface*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlECbmKFTrackInterfacemUgR(void *p) {
      delete ((vector<CbmKFTrackInterface*>*)p);
   }
   static void deleteArray_vectorlECbmKFTrackInterfacemUgR(void *p) {
      delete [] ((vector<CbmKFTrackInterface*>*)p);
   }
   static void destruct_vectorlECbmKFTrackInterfacemUgR(void *p) {
      typedef vector<CbmKFTrackInterface*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<CbmKFTrackInterface*>

namespace ROOT {
   static TClass *vectorlECbmKFStsHitgR_Dictionary();
   static void vectorlECbmKFStsHitgR_TClassManip(TClass*);
   static void *new_vectorlECbmKFStsHitgR(void *p = nullptr);
   static void *newArray_vectorlECbmKFStsHitgR(Long_t size, void *p);
   static void delete_vectorlECbmKFStsHitgR(void *p);
   static void deleteArray_vectorlECbmKFStsHitgR(void *p);
   static void destruct_vectorlECbmKFStsHitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<CbmKFStsHit>*)
   {
      vector<CbmKFStsHit> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<CbmKFStsHit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<CbmKFStsHit>", -2, "vector", 386,
                  typeid(vector<CbmKFStsHit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlECbmKFStsHitgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<CbmKFStsHit>) );
      instance.SetNew(&new_vectorlECbmKFStsHitgR);
      instance.SetNewArray(&newArray_vectorlECbmKFStsHitgR);
      instance.SetDelete(&delete_vectorlECbmKFStsHitgR);
      instance.SetDeleteArray(&deleteArray_vectorlECbmKFStsHitgR);
      instance.SetDestructor(&destruct_vectorlECbmKFStsHitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<CbmKFStsHit> >()));

      ::ROOT::AddClassAlternate("vector<CbmKFStsHit>","std::vector<CbmKFStsHit, std::allocator<CbmKFStsHit> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<CbmKFStsHit>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlECbmKFStsHitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<CbmKFStsHit>*)nullptr)->GetClass();
      vectorlECbmKFStsHitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlECbmKFStsHitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlECbmKFStsHitgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmKFStsHit> : new vector<CbmKFStsHit>;
   }
   static void *newArray_vectorlECbmKFStsHitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmKFStsHit>[nElements] : new vector<CbmKFStsHit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlECbmKFStsHitgR(void *p) {
      delete ((vector<CbmKFStsHit>*)p);
   }
   static void deleteArray_vectorlECbmKFStsHitgR(void *p) {
      delete [] ((vector<CbmKFStsHit>*)p);
   }
   static void destruct_vectorlECbmKFStsHitgR(void *p) {
      typedef vector<CbmKFStsHit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<CbmKFStsHit>

namespace ROOT {
   static TClass *vectorlECbmKFMaterialmUgR_Dictionary();
   static void vectorlECbmKFMaterialmUgR_TClassManip(TClass*);
   static void *new_vectorlECbmKFMaterialmUgR(void *p = nullptr);
   static void *newArray_vectorlECbmKFMaterialmUgR(Long_t size, void *p);
   static void delete_vectorlECbmKFMaterialmUgR(void *p);
   static void deleteArray_vectorlECbmKFMaterialmUgR(void *p);
   static void destruct_vectorlECbmKFMaterialmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<CbmKFMaterial*>*)
   {
      vector<CbmKFMaterial*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<CbmKFMaterial*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<CbmKFMaterial*>", -2, "vector", 386,
                  typeid(vector<CbmKFMaterial*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlECbmKFMaterialmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<CbmKFMaterial*>) );
      instance.SetNew(&new_vectorlECbmKFMaterialmUgR);
      instance.SetNewArray(&newArray_vectorlECbmKFMaterialmUgR);
      instance.SetDelete(&delete_vectorlECbmKFMaterialmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlECbmKFMaterialmUgR);
      instance.SetDestructor(&destruct_vectorlECbmKFMaterialmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<CbmKFMaterial*> >()));

      ::ROOT::AddClassAlternate("vector<CbmKFMaterial*>","std::vector<CbmKFMaterial*, std::allocator<CbmKFMaterial*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<CbmKFMaterial*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlECbmKFMaterialmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<CbmKFMaterial*>*)nullptr)->GetClass();
      vectorlECbmKFMaterialmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlECbmKFMaterialmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlECbmKFMaterialmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmKFMaterial*> : new vector<CbmKFMaterial*>;
   }
   static void *newArray_vectorlECbmKFMaterialmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmKFMaterial*>[nElements] : new vector<CbmKFMaterial*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlECbmKFMaterialmUgR(void *p) {
      delete ((vector<CbmKFMaterial*>*)p);
   }
   static void deleteArray_vectorlECbmKFMaterialmUgR(void *p) {
      delete [] ((vector<CbmKFMaterial*>*)p);
   }
   static void destruct_vectorlECbmKFMaterialmUgR(void *p) {
      typedef vector<CbmKFMaterial*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<CbmKFMaterial*>

namespace ROOT {
   static TClass *vectorlECbmKFHitmUgR_Dictionary();
   static void vectorlECbmKFHitmUgR_TClassManip(TClass*);
   static void *new_vectorlECbmKFHitmUgR(void *p = nullptr);
   static void *newArray_vectorlECbmKFHitmUgR(Long_t size, void *p);
   static void delete_vectorlECbmKFHitmUgR(void *p);
   static void deleteArray_vectorlECbmKFHitmUgR(void *p);
   static void destruct_vectorlECbmKFHitmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<CbmKFHit*>*)
   {
      vector<CbmKFHit*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<CbmKFHit*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<CbmKFHit*>", -2, "vector", 386,
                  typeid(vector<CbmKFHit*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlECbmKFHitmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<CbmKFHit*>) );
      instance.SetNew(&new_vectorlECbmKFHitmUgR);
      instance.SetNewArray(&newArray_vectorlECbmKFHitmUgR);
      instance.SetDelete(&delete_vectorlECbmKFHitmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlECbmKFHitmUgR);
      instance.SetDestructor(&destruct_vectorlECbmKFHitmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<CbmKFHit*> >()));

      ::ROOT::AddClassAlternate("vector<CbmKFHit*>","std::vector<CbmKFHit*, std::allocator<CbmKFHit*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<CbmKFHit*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlECbmKFHitmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<CbmKFHit*>*)nullptr)->GetClass();
      vectorlECbmKFHitmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlECbmKFHitmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlECbmKFHitmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmKFHit*> : new vector<CbmKFHit*>;
   }
   static void *newArray_vectorlECbmKFHitmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmKFHit*>[nElements] : new vector<CbmKFHit*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlECbmKFHitmUgR(void *p) {
      delete ((vector<CbmKFHit*>*)p);
   }
   static void deleteArray_vectorlECbmKFHitmUgR(void *p) {
      delete [] ((vector<CbmKFHit*>*)p);
   }
   static void destruct_vectorlECbmKFHitmUgR(void *p) {
      typedef vector<CbmKFHit*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<CbmKFHit*>

namespace ROOT {
   static TClass *vectorlECbmKFConegR_Dictionary();
   static void vectorlECbmKFConegR_TClassManip(TClass*);
   static void *new_vectorlECbmKFConegR(void *p = nullptr);
   static void *newArray_vectorlECbmKFConegR(Long_t size, void *p);
   static void delete_vectorlECbmKFConegR(void *p);
   static void deleteArray_vectorlECbmKFConegR(void *p);
   static void destruct_vectorlECbmKFConegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<CbmKFCone>*)
   {
      vector<CbmKFCone> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<CbmKFCone>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<CbmKFCone>", -2, "vector", 386,
                  typeid(vector<CbmKFCone>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlECbmKFConegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<CbmKFCone>) );
      instance.SetNew(&new_vectorlECbmKFConegR);
      instance.SetNewArray(&newArray_vectorlECbmKFConegR);
      instance.SetDelete(&delete_vectorlECbmKFConegR);
      instance.SetDeleteArray(&deleteArray_vectorlECbmKFConegR);
      instance.SetDestructor(&destruct_vectorlECbmKFConegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<CbmKFCone> >()));

      ::ROOT::AddClassAlternate("vector<CbmKFCone>","std::vector<CbmKFCone, std::allocator<CbmKFCone> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<CbmKFCone>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlECbmKFConegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<CbmKFCone>*)nullptr)->GetClass();
      vectorlECbmKFConegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlECbmKFConegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlECbmKFConegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmKFCone> : new vector<CbmKFCone>;
   }
   static void *newArray_vectorlECbmKFConegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmKFCone>[nElements] : new vector<CbmKFCone>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlECbmKFConegR(void *p) {
      delete ((vector<CbmKFCone>*)p);
   }
   static void deleteArray_vectorlECbmKFConegR(void *p) {
      delete [] ((vector<CbmKFCone>*)p);
   }
   static void destruct_vectorlECbmKFConegR(void *p) {
      typedef vector<CbmKFCone> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<CbmKFCone>

namespace ROOT {
   static TClass *vectorlECbmKFBoxgR_Dictionary();
   static void vectorlECbmKFBoxgR_TClassManip(TClass*);
   static void *new_vectorlECbmKFBoxgR(void *p = nullptr);
   static void *newArray_vectorlECbmKFBoxgR(Long_t size, void *p);
   static void delete_vectorlECbmKFBoxgR(void *p);
   static void deleteArray_vectorlECbmKFBoxgR(void *p);
   static void destruct_vectorlECbmKFBoxgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<CbmKFBox>*)
   {
      vector<CbmKFBox> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<CbmKFBox>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<CbmKFBox>", -2, "vector", 386,
                  typeid(vector<CbmKFBox>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlECbmKFBoxgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<CbmKFBox>) );
      instance.SetNew(&new_vectorlECbmKFBoxgR);
      instance.SetNewArray(&newArray_vectorlECbmKFBoxgR);
      instance.SetDelete(&delete_vectorlECbmKFBoxgR);
      instance.SetDeleteArray(&deleteArray_vectorlECbmKFBoxgR);
      instance.SetDestructor(&destruct_vectorlECbmKFBoxgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<CbmKFBox> >()));

      ::ROOT::AddClassAlternate("vector<CbmKFBox>","std::vector<CbmKFBox, std::allocator<CbmKFBox> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<CbmKFBox>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlECbmKFBoxgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<CbmKFBox>*)nullptr)->GetClass();
      vectorlECbmKFBoxgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlECbmKFBoxgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlECbmKFBoxgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmKFBox> : new vector<CbmKFBox>;
   }
   static void *newArray_vectorlECbmKFBoxgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmKFBox>[nElements] : new vector<CbmKFBox>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlECbmKFBoxgR(void *p) {
      delete ((vector<CbmKFBox>*)p);
   }
   static void deleteArray_vectorlECbmKFBoxgR(void *p) {
      delete [] ((vector<CbmKFBox>*)p);
   }
   static void destruct_vectorlECbmKFBoxgR(void *p) {
      typedef vector<CbmKFBox> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<CbmKFBox>

namespace ROOT {
   static TClass *vectorlEBmnKFStsHitgR_Dictionary();
   static void vectorlEBmnKFStsHitgR_TClassManip(TClass*);
   static void *new_vectorlEBmnKFStsHitgR(void *p = nullptr);
   static void *newArray_vectorlEBmnKFStsHitgR(Long_t size, void *p);
   static void delete_vectorlEBmnKFStsHitgR(void *p);
   static void deleteArray_vectorlEBmnKFStsHitgR(void *p);
   static void destruct_vectorlEBmnKFStsHitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnKFStsHit>*)
   {
      vector<BmnKFStsHit> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnKFStsHit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnKFStsHit>", -2, "vector", 386,
                  typeid(vector<BmnKFStsHit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnKFStsHitgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnKFStsHit>) );
      instance.SetNew(&new_vectorlEBmnKFStsHitgR);
      instance.SetNewArray(&newArray_vectorlEBmnKFStsHitgR);
      instance.SetDelete(&delete_vectorlEBmnKFStsHitgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnKFStsHitgR);
      instance.SetDestructor(&destruct_vectorlEBmnKFStsHitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnKFStsHit> >()));

      ::ROOT::AddClassAlternate("vector<BmnKFStsHit>","std::vector<BmnKFStsHit, std::allocator<BmnKFStsHit> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnKFStsHit>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnKFStsHitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnKFStsHit>*)nullptr)->GetClass();
      vectorlEBmnKFStsHitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnKFStsHitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnKFStsHitgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnKFStsHit> : new vector<BmnKFStsHit>;
   }
   static void *newArray_vectorlEBmnKFStsHitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnKFStsHit>[nElements] : new vector<BmnKFStsHit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnKFStsHitgR(void *p) {
      delete ((vector<BmnKFStsHit>*)p);
   }
   static void deleteArray_vectorlEBmnKFStsHitgR(void *p) {
      delete [] ((vector<BmnKFStsHit>*)p);
   }
   static void destruct_vectorlEBmnKFStsHitgR(void *p) {
      typedef vector<BmnKFStsHit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnKFStsHit>

namespace ROOT {
   static TClass *maplEintcOintgR_Dictionary();
   static void maplEintcOintgR_TClassManip(TClass*);
   static void *new_maplEintcOintgR(void *p = nullptr);
   static void *newArray_maplEintcOintgR(Long_t size, void *p);
   static void delete_maplEintcOintgR(void *p);
   static void deleteArray_maplEintcOintgR(void *p);
   static void destruct_maplEintcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,int>*)
   {
      map<int,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,int>", -2, "map", 100,
                  typeid(map<int,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,int>) );
      instance.SetNew(&new_maplEintcOintgR);
      instance.SetNewArray(&newArray_maplEintcOintgR);
      instance.SetDelete(&delete_maplEintcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOintgR);
      instance.SetDestructor(&destruct_maplEintcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,int> >()));

      ::ROOT::AddClassAlternate("map<int,int>","std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,int>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,int>*)nullptr)->GetClass();
      maplEintcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,int> : new map<int,int>;
   }
   static void *newArray_maplEintcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,int>[nElements] : new map<int,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOintgR(void *p) {
      delete ((map<int,int>*)p);
   }
   static void deleteArray_maplEintcOintgR(void *p) {
      delete [] ((map<int,int>*)p);
   }
   static void destruct_maplEintcOintgR(void *p) {
      typedef map<int,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,int>

namespace ROOT {
   static TClass *maplEdoublecOTProfile2DmUgR_Dictionary();
   static void maplEdoublecOTProfile2DmUgR_TClassManip(TClass*);
   static void *new_maplEdoublecOTProfile2DmUgR(void *p = nullptr);
   static void *newArray_maplEdoublecOTProfile2DmUgR(Long_t size, void *p);
   static void delete_maplEdoublecOTProfile2DmUgR(void *p);
   static void deleteArray_maplEdoublecOTProfile2DmUgR(void *p);
   static void destruct_maplEdoublecOTProfile2DmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<double,TProfile2D*>*)
   {
      map<double,TProfile2D*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<double,TProfile2D*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<double,TProfile2D*>", -2, "map", 100,
                  typeid(map<double,TProfile2D*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEdoublecOTProfile2DmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<double,TProfile2D*>) );
      instance.SetNew(&new_maplEdoublecOTProfile2DmUgR);
      instance.SetNewArray(&newArray_maplEdoublecOTProfile2DmUgR);
      instance.SetDelete(&delete_maplEdoublecOTProfile2DmUgR);
      instance.SetDeleteArray(&deleteArray_maplEdoublecOTProfile2DmUgR);
      instance.SetDestructor(&destruct_maplEdoublecOTProfile2DmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<double,TProfile2D*> >()));

      ::ROOT::AddClassAlternate("map<double,TProfile2D*>","std::map<double, TProfile2D*, std::less<double>, std::allocator<std::pair<double const, TProfile2D*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<double,TProfile2D*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEdoublecOTProfile2DmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<double,TProfile2D*>*)nullptr)->GetClass();
      maplEdoublecOTProfile2DmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEdoublecOTProfile2DmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEdoublecOTProfile2DmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<double,TProfile2D*> : new map<double,TProfile2D*>;
   }
   static void *newArray_maplEdoublecOTProfile2DmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<double,TProfile2D*>[nElements] : new map<double,TProfile2D*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEdoublecOTProfile2DmUgR(void *p) {
      delete ((map<double,TProfile2D*>*)p);
   }
   static void deleteArray_maplEdoublecOTProfile2DmUgR(void *p) {
      delete [] ((map<double,TProfile2D*>*)p);
   }
   static void destruct_maplEdoublecOTProfile2DmUgR(void *p) {
      typedef map<double,TProfile2D*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<double,TProfile2D*>

namespace ROOT {
   static TClass *maplETStringcOintgR_Dictionary();
   static void maplETStringcOintgR_TClassManip(TClass*);
   static void *new_maplETStringcOintgR(void *p = nullptr);
   static void *newArray_maplETStringcOintgR(Long_t size, void *p);
   static void delete_maplETStringcOintgR(void *p);
   static void deleteArray_maplETStringcOintgR(void *p);
   static void destruct_maplETStringcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TString,int>*)
   {
      map<TString,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TString,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TString,int>", -2, "map", 100,
                  typeid(map<TString,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETStringcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TString,int>) );
      instance.SetNew(&new_maplETStringcOintgR);
      instance.SetNewArray(&newArray_maplETStringcOintgR);
      instance.SetDelete(&delete_maplETStringcOintgR);
      instance.SetDeleteArray(&deleteArray_maplETStringcOintgR);
      instance.SetDestructor(&destruct_maplETStringcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TString,int> >()));

      ::ROOT::AddClassAlternate("map<TString,int>","std::map<TString, int, std::less<TString>, std::allocator<std::pair<TString const, int> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TString,int>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETStringcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TString,int>*)nullptr)->GetClass();
      maplETStringcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETStringcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETStringcOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,int> : new map<TString,int>;
   }
   static void *newArray_maplETStringcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,int>[nElements] : new map<TString,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETStringcOintgR(void *p) {
      delete ((map<TString,int>*)p);
   }
   static void deleteArray_maplETStringcOintgR(void *p) {
      delete [] ((map<TString,int>*)p);
   }
   static void destruct_maplETStringcOintgR(void *p) {
      typedef map<TString,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TString,int>

namespace {
  void TriggerDictionaryInitialization_G__KFDict_Impl() {
    static const char* headers[] = {
"CbmKF.h",
"CbmKFFieldMath.h",
"CbmKFHit.h",
"CbmKFMaterial.h",
"CbmKFMath.h",
"CbmKFPixelMeasurement.h",
"CbmKFPrimaryVertexFinder.h",
"CbmKFTrackInterface.h",
"CbmKFUMeasurement.h",
"CbmKFVertexInterface.h",
"CbmKFParticle.h",
"CbmKFStsHit.h",
"CbmKFTrack.h",
"CbmKFVertex.h",
"CbmPVFinderKF.h",
"CbmStsKFTrackFitter.h",
"BmnKFStsHit.h",
"BmnStsKFTrackFitter.h",
"KFParticleMatch.h",
"KFMCParticle.h",
"CbmKFPartEfficiencies.h",
"CbmKFParticleDatabase.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/passive",
"/data/yaopeng/bmnroot_Yaopeng/field",
"/data/yaopeng/bmnroot_Yaopeng/base",
"/data/yaopeng/bmnroot_Yaopeng/base/data",
"/data/yaopeng/bmnroot_Yaopeng/base/cbm",
"/data/yaopeng/bmnroot_Yaopeng/detectors/silicon",
"/data/yaopeng/bmnroot_Yaopeng/detectors/gem",
"/data/yaopeng/bmnroot_Yaopeng/detectors/tof",
"/data/yaopeng/bmnroot_Yaopeng/detectors/sts",
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/KF",
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/KF/Interface",
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/KF/KFParticlesFinder",
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/KF/KFQA",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/reconstruction/KF/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__KFDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$CbmKFTrackInterface.h")))  __attribute__((annotate("$clingAutoload$CbmKF.h")))  CbmKFTrackInterface;
class __attribute__((annotate("$clingAutoload$CbmKFMaterial.h")))  __attribute__((annotate("$clingAutoload$CbmKF.h")))  CbmKFMaterial;
class __attribute__((annotate("$clingAutoload$CbmKFMaterial.h")))  __attribute__((annotate("$clingAutoload$CbmKF.h")))  CbmKFWall;
class __attribute__((annotate("$clingAutoload$CbmKFMaterial.h")))  __attribute__((annotate("$clingAutoload$CbmKF.h")))  CbmKFTube;
class __attribute__((annotate("$clingAutoload$CbmKFMaterial.h")))  __attribute__((annotate("$clingAutoload$CbmKF.h")))  CbmKFBox;
class __attribute__((annotate("$clingAutoload$CbmKFMaterial.h")))  __attribute__((annotate("$clingAutoload$CbmKF.h")))  CbmKFCone;
class __attribute__((annotate("$clingAutoload$CbmKF.h")))  CbmKF;
class __attribute__((annotate("$clingAutoload$CbmKFFieldMath.h")))  CbmKFFieldMath;
class __attribute__((annotate("$clingAutoload$CbmKFHit.h")))  CbmKFHit;
class __attribute__((annotate("$clingAutoload$CbmKFMath.h")))  CbmKFMath;
class __attribute__((annotate("$clingAutoload$CbmKFPixelMeasurement.h")))  CbmKFPixelMeasurement;
class __attribute__((annotate("$clingAutoload$CbmKFVertexInterface.h")))  __attribute__((annotate("$clingAutoload$CbmKFPrimaryVertexFinder.h")))  CbmKFVertexInterface;
class __attribute__((annotate("$clingAutoload$CbmKFPrimaryVertexFinder.h")))  CbmKFPrimaryVertexFinder;
class __attribute__((annotate("$clingAutoload$CbmKFUMeasurement.h")))  CbmKFUMeasurement;
class __attribute__((annotate("$clingAutoload$CbmKFParticle.h")))  CbmKFParticle;
class __attribute__((annotate("$clingAutoload$CbmKFStsHit.h")))  CbmKFStsHit;
class __attribute__((annotate("$clingAutoload$CbmKFTrack.h")))  CbmKFTrack;
class __attribute__((annotate("$clingAutoload$CbmKFVertex.h")))  CbmKFVertex;
class __attribute__((annotate("$clingAutoload$CbmPVFinderKF.h")))  CbmPVFinderKF;
class __attribute__((annotate("$clingAutoload$CbmStsKFTrackFitter.h")))  CbmStsKFTrackFitter;
class __attribute__((annotate("$clingAutoload$BmnKFStsHit.h")))  BmnKFStsHit;
class __attribute__((annotate("$clingAutoload$BmnStsKFTrackFitter.h")))  BmnStsKFTrackFitter;
class __attribute__((annotate("$clingAutoload$KFParticleMatch.h")))  KFParticleMatch;
class __attribute__((annotate("$clingAutoload$KFMCParticle.h")))  KFMCParticle;
class __attribute__((annotate("$clingAutoload$CbmKFPartEfficiencies.h")))  CbmKFPartEfficiencies;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__KFDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "CbmKF.h"
#include "CbmKFFieldMath.h"
#include "CbmKFHit.h"
#include "CbmKFMaterial.h"
#include "CbmKFMath.h"
#include "CbmKFPixelMeasurement.h"
#include "CbmKFPrimaryVertexFinder.h"
#include "CbmKFTrackInterface.h"
#include "CbmKFUMeasurement.h"
#include "CbmKFVertexInterface.h"
#include "CbmKFParticle.h"
#include "CbmKFStsHit.h"
#include "CbmKFTrack.h"
#include "CbmKFVertex.h"
#include "CbmPVFinderKF.h"
#include "CbmStsKFTrackFitter.h"
#include "BmnKFStsHit.h"
#include "BmnStsKFTrackFitter.h"
#include "KFParticleMatch.h"
#include "KFMCParticle.h"
#include "CbmKFPartEfficiencies.h"
#include "CbmKFParticleDatabase.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BmnKFStsHit", payloadCode, "@",
"BmnStsKFTrackFitter", payloadCode, "@",
"CbmKF", payloadCode, "@",
"CbmKFBox", payloadCode, "@",
"CbmKFCone", payloadCode, "@",
"CbmKFFieldMath", payloadCode, "@",
"CbmKFHit", payloadCode, "@",
"CbmKFMaterial", payloadCode, "@",
"CbmKFMath", payloadCode, "@",
"CbmKFPartEfficiencies", payloadCode, "@",
"CbmKFParticle", payloadCode, "@",
"CbmKFPixelMeasurement", payloadCode, "@",
"CbmKFPrimaryVertexFinder", payloadCode, "@",
"CbmKFStsHit", payloadCode, "@",
"CbmKFTrack", payloadCode, "@",
"CbmKFTrackInterface", payloadCode, "@",
"CbmKFTube", payloadCode, "@",
"CbmKFUMeasurement", payloadCode, "@",
"CbmKFVertex", payloadCode, "@",
"CbmKFVertexInterface", payloadCode, "@",
"CbmKFWall", payloadCode, "@",
"CbmPVFinderKF", payloadCode, "@",
"CbmStsKFTrackFitter", payloadCode, "@",
"KFMCParticle", payloadCode, "@",
"KFParticleMatch", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__KFDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__KFDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__KFDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__KFDict() {
  TriggerDictionaryInitialization_G__KFDict_Impl();
}
