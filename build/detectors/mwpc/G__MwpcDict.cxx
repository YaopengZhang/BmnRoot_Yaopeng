// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIdetectorsdImwpcdIG__MwpcDict
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
#include "BmnMwpcSegment.h"
#include "BmnMwpcDigit.h"
#include "BmnMwpcHit.h"
#include "BmnMwpcHitProducer.h"
#include "BmnMwpcHitFinder.h"
#include "BmnMwpcGeometry.h"
#include "BmnMwpcGeometrySRC.h"
#include "BmnMwpcTrack.h"
#include "BmnMwpcTrackFinder.h"
#include "BmnMwpc.h"
#include "BmnMwpcContFact.h"
#include "BmnMwpcGeo.h"
#include "BmnMwpcGeoPar.h"
#include "BmnMwpcPoint.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BmnMwpcTrack(void *p = nullptr);
   static void *newArray_BmnMwpcTrack(Long_t size, void *p);
   static void delete_BmnMwpcTrack(void *p);
   static void deleteArray_BmnMwpcTrack(void *p);
   static void destruct_BmnMwpcTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMwpcTrack*)
   {
      ::BmnMwpcTrack *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMwpcTrack >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMwpcTrack", ::BmnMwpcTrack::Class_Version(), "BmnMwpcTrack.h", 8,
                  typeid(::BmnMwpcTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMwpcTrack::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMwpcTrack) );
      instance.SetNew(&new_BmnMwpcTrack);
      instance.SetNewArray(&newArray_BmnMwpcTrack);
      instance.SetDelete(&delete_BmnMwpcTrack);
      instance.SetDeleteArray(&deleteArray_BmnMwpcTrack);
      instance.SetDestructor(&destruct_BmnMwpcTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMwpcTrack*)
   {
      return GenerateInitInstanceLocal((::BmnMwpcTrack*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMwpcTrack*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMwpcSegment(void *p = nullptr);
   static void *newArray_BmnMwpcSegment(Long_t size, void *p);
   static void delete_BmnMwpcSegment(void *p);
   static void deleteArray_BmnMwpcSegment(void *p);
   static void destruct_BmnMwpcSegment(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMwpcSegment*)
   {
      ::BmnMwpcSegment *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMwpcSegment >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMwpcSegment", ::BmnMwpcSegment::Class_Version(), "BmnMwpcSegment.h", 6,
                  typeid(::BmnMwpcSegment), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMwpcSegment::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMwpcSegment) );
      instance.SetNew(&new_BmnMwpcSegment);
      instance.SetNewArray(&newArray_BmnMwpcSegment);
      instance.SetDelete(&delete_BmnMwpcSegment);
      instance.SetDeleteArray(&deleteArray_BmnMwpcSegment);
      instance.SetDestructor(&destruct_BmnMwpcSegment);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMwpcSegment*)
   {
      return GenerateInitInstanceLocal((::BmnMwpcSegment*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMwpcSegment*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMwpcDigit(void *p = nullptr);
   static void *newArray_BmnMwpcDigit(Long_t size, void *p);
   static void delete_BmnMwpcDigit(void *p);
   static void deleteArray_BmnMwpcDigit(void *p);
   static void destruct_BmnMwpcDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMwpcDigit*)
   {
      ::BmnMwpcDigit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMwpcDigit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMwpcDigit", ::BmnMwpcDigit::Class_Version(), "BmnMwpcDigit.h", 15,
                  typeid(::BmnMwpcDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMwpcDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMwpcDigit) );
      instance.SetNew(&new_BmnMwpcDigit);
      instance.SetNewArray(&newArray_BmnMwpcDigit);
      instance.SetDelete(&delete_BmnMwpcDigit);
      instance.SetDeleteArray(&deleteArray_BmnMwpcDigit);
      instance.SetDestructor(&destruct_BmnMwpcDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMwpcDigit*)
   {
      return GenerateInitInstanceLocal((::BmnMwpcDigit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMwpcDigit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMwpcHit(void *p = nullptr);
   static void *newArray_BmnMwpcHit(Long_t size, void *p);
   static void delete_BmnMwpcHit(void *p);
   static void deleteArray_BmnMwpcHit(void *p);
   static void destruct_BmnMwpcHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMwpcHit*)
   {
      ::BmnMwpcHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMwpcHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMwpcHit", ::BmnMwpcHit::Class_Version(), "BmnMwpcHit.h", 16,
                  typeid(::BmnMwpcHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMwpcHit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMwpcHit) );
      instance.SetNew(&new_BmnMwpcHit);
      instance.SetNewArray(&newArray_BmnMwpcHit);
      instance.SetDelete(&delete_BmnMwpcHit);
      instance.SetDeleteArray(&deleteArray_BmnMwpcHit);
      instance.SetDestructor(&destruct_BmnMwpcHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMwpcHit*)
   {
      return GenerateInitInstanceLocal((::BmnMwpcHit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMwpcHit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMwpcHitProducer(void *p = nullptr);
   static void *newArray_BmnMwpcHitProducer(Long_t size, void *p);
   static void delete_BmnMwpcHitProducer(void *p);
   static void deleteArray_BmnMwpcHitProducer(void *p);
   static void destruct_BmnMwpcHitProducer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMwpcHitProducer*)
   {
      ::BmnMwpcHitProducer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMwpcHitProducer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMwpcHitProducer", ::BmnMwpcHitProducer::Class_Version(), "BmnMwpcHitProducer.h", 22,
                  typeid(::BmnMwpcHitProducer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMwpcHitProducer::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMwpcHitProducer) );
      instance.SetNew(&new_BmnMwpcHitProducer);
      instance.SetNewArray(&newArray_BmnMwpcHitProducer);
      instance.SetDelete(&delete_BmnMwpcHitProducer);
      instance.SetDeleteArray(&deleteArray_BmnMwpcHitProducer);
      instance.SetDestructor(&destruct_BmnMwpcHitProducer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMwpcHitProducer*)
   {
      return GenerateInitInstanceLocal((::BmnMwpcHitProducer*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMwpcHitProducer*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMwpcGeometrySRC(void *p = nullptr);
   static void *newArray_BmnMwpcGeometrySRC(Long_t size, void *p);
   static void delete_BmnMwpcGeometrySRC(void *p);
   static void deleteArray_BmnMwpcGeometrySRC(void *p);
   static void destruct_BmnMwpcGeometrySRC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMwpcGeometrySRC*)
   {
      ::BmnMwpcGeometrySRC *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMwpcGeometrySRC >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMwpcGeometrySRC", ::BmnMwpcGeometrySRC::Class_Version(), "BmnMwpcGeometrySRC.h", 24,
                  typeid(::BmnMwpcGeometrySRC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMwpcGeometrySRC::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMwpcGeometrySRC) );
      instance.SetNew(&new_BmnMwpcGeometrySRC);
      instance.SetNewArray(&newArray_BmnMwpcGeometrySRC);
      instance.SetDelete(&delete_BmnMwpcGeometrySRC);
      instance.SetDeleteArray(&deleteArray_BmnMwpcGeometrySRC);
      instance.SetDestructor(&destruct_BmnMwpcGeometrySRC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMwpcGeometrySRC*)
   {
      return GenerateInitInstanceLocal((::BmnMwpcGeometrySRC*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMwpcGeometrySRC*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMwpcHitFinder(void *p = nullptr);
   static void *newArray_BmnMwpcHitFinder(Long_t size, void *p);
   static void delete_BmnMwpcHitFinder(void *p);
   static void deleteArray_BmnMwpcHitFinder(void *p);
   static void destruct_BmnMwpcHitFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMwpcHitFinder*)
   {
      ::BmnMwpcHitFinder *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMwpcHitFinder >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMwpcHitFinder", ::BmnMwpcHitFinder::Class_Version(), "BmnMwpcHitFinder.h", 44,
                  typeid(::BmnMwpcHitFinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMwpcHitFinder::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMwpcHitFinder) );
      instance.SetNew(&new_BmnMwpcHitFinder);
      instance.SetNewArray(&newArray_BmnMwpcHitFinder);
      instance.SetDelete(&delete_BmnMwpcHitFinder);
      instance.SetDeleteArray(&deleteArray_BmnMwpcHitFinder);
      instance.SetDestructor(&destruct_BmnMwpcHitFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMwpcHitFinder*)
   {
      return GenerateInitInstanceLocal((::BmnMwpcHitFinder*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMwpcHitFinder*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMwpcGeometry(void *p = nullptr);
   static void *newArray_BmnMwpcGeometry(Long_t size, void *p);
   static void delete_BmnMwpcGeometry(void *p);
   static void deleteArray_BmnMwpcGeometry(void *p);
   static void destruct_BmnMwpcGeometry(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMwpcGeometry*)
   {
      ::BmnMwpcGeometry *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMwpcGeometry >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMwpcGeometry", ::BmnMwpcGeometry::Class_Version(), "BmnMwpcGeometry.h", 24,
                  typeid(::BmnMwpcGeometry), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMwpcGeometry::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMwpcGeometry) );
      instance.SetNew(&new_BmnMwpcGeometry);
      instance.SetNewArray(&newArray_BmnMwpcGeometry);
      instance.SetDelete(&delete_BmnMwpcGeometry);
      instance.SetDeleteArray(&deleteArray_BmnMwpcGeometry);
      instance.SetDestructor(&destruct_BmnMwpcGeometry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMwpcGeometry*)
   {
      return GenerateInitInstanceLocal((::BmnMwpcGeometry*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMwpcGeometry*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMwpcTrackFinder(void *p = nullptr);
   static void *newArray_BmnMwpcTrackFinder(Long_t size, void *p);
   static void delete_BmnMwpcTrackFinder(void *p);
   static void deleteArray_BmnMwpcTrackFinder(void *p);
   static void destruct_BmnMwpcTrackFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMwpcTrackFinder*)
   {
      ::BmnMwpcTrackFinder *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMwpcTrackFinder >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMwpcTrackFinder", ::BmnMwpcTrackFinder::Class_Version(), "BmnMwpcTrackFinder.h", 39,
                  typeid(::BmnMwpcTrackFinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMwpcTrackFinder::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMwpcTrackFinder) );
      instance.SetNew(&new_BmnMwpcTrackFinder);
      instance.SetNewArray(&newArray_BmnMwpcTrackFinder);
      instance.SetDelete(&delete_BmnMwpcTrackFinder);
      instance.SetDeleteArray(&deleteArray_BmnMwpcTrackFinder);
      instance.SetDestructor(&destruct_BmnMwpcTrackFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMwpcTrackFinder*)
   {
      return GenerateInitInstanceLocal((::BmnMwpcTrackFinder*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMwpcTrackFinder*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMwpcPoint(void *p = nullptr);
   static void *newArray_BmnMwpcPoint(Long_t size, void *p);
   static void delete_BmnMwpcPoint(void *p);
   static void deleteArray_BmnMwpcPoint(void *p);
   static void destruct_BmnMwpcPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMwpcPoint*)
   {
      ::BmnMwpcPoint *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMwpcPoint >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMwpcPoint", ::BmnMwpcPoint::Class_Version(), "BmnMwpcPoint.h", 17,
                  typeid(::BmnMwpcPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMwpcPoint::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMwpcPoint) );
      instance.SetNew(&new_BmnMwpcPoint);
      instance.SetNewArray(&newArray_BmnMwpcPoint);
      instance.SetDelete(&delete_BmnMwpcPoint);
      instance.SetDeleteArray(&deleteArray_BmnMwpcPoint);
      instance.SetDestructor(&destruct_BmnMwpcPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMwpcPoint*)
   {
      return GenerateInitInstanceLocal((::BmnMwpcPoint*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMwpcPoint*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMwpc(void *p = nullptr);
   static void *newArray_BmnMwpc(Long_t size, void *p);
   static void delete_BmnMwpc(void *p);
   static void deleteArray_BmnMwpc(void *p);
   static void destruct_BmnMwpc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMwpc*)
   {
      ::BmnMwpc *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMwpc >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMwpc", ::BmnMwpc::Class_Version(), "BmnMwpc.h", 25,
                  typeid(::BmnMwpc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMwpc::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMwpc) );
      instance.SetNew(&new_BmnMwpc);
      instance.SetNewArray(&newArray_BmnMwpc);
      instance.SetDelete(&delete_BmnMwpc);
      instance.SetDeleteArray(&deleteArray_BmnMwpc);
      instance.SetDestructor(&destruct_BmnMwpc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMwpc*)
   {
      return GenerateInitInstanceLocal((::BmnMwpc*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMwpc*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMwpcContFact(void *p = nullptr);
   static void *newArray_BmnMwpcContFact(Long_t size, void *p);
   static void delete_BmnMwpcContFact(void *p);
   static void deleteArray_BmnMwpcContFact(void *p);
   static void destruct_BmnMwpcContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMwpcContFact*)
   {
      ::BmnMwpcContFact *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMwpcContFact >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMwpcContFact", ::BmnMwpcContFact::Class_Version(), "BmnMwpcContFact.h", 8,
                  typeid(::BmnMwpcContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMwpcContFact::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMwpcContFact) );
      instance.SetNew(&new_BmnMwpcContFact);
      instance.SetNewArray(&newArray_BmnMwpcContFact);
      instance.SetDelete(&delete_BmnMwpcContFact);
      instance.SetDeleteArray(&deleteArray_BmnMwpcContFact);
      instance.SetDestructor(&destruct_BmnMwpcContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMwpcContFact*)
   {
      return GenerateInitInstanceLocal((::BmnMwpcContFact*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMwpcContFact*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMwpcGeo(void *p = nullptr);
   static void *newArray_BmnMwpcGeo(Long_t size, void *p);
   static void delete_BmnMwpcGeo(void *p);
   static void deleteArray_BmnMwpcGeo(void *p);
   static void destruct_BmnMwpcGeo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMwpcGeo*)
   {
      ::BmnMwpcGeo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMwpcGeo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMwpcGeo", ::BmnMwpcGeo::Class_Version(), "BmnMwpcGeo.h", 6,
                  typeid(::BmnMwpcGeo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMwpcGeo::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMwpcGeo) );
      instance.SetNew(&new_BmnMwpcGeo);
      instance.SetNewArray(&newArray_BmnMwpcGeo);
      instance.SetDelete(&delete_BmnMwpcGeo);
      instance.SetDeleteArray(&deleteArray_BmnMwpcGeo);
      instance.SetDestructor(&destruct_BmnMwpcGeo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMwpcGeo*)
   {
      return GenerateInitInstanceLocal((::BmnMwpcGeo*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMwpcGeo*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMwpcGeoPar(void *p = nullptr);
   static void *newArray_BmnMwpcGeoPar(Long_t size, void *p);
   static void delete_BmnMwpcGeoPar(void *p);
   static void deleteArray_BmnMwpcGeoPar(void *p);
   static void destruct_BmnMwpcGeoPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMwpcGeoPar*)
   {
      ::BmnMwpcGeoPar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMwpcGeoPar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMwpcGeoPar", ::BmnMwpcGeoPar::Class_Version(), "BmnMwpcGeoPar.h", 8,
                  typeid(::BmnMwpcGeoPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMwpcGeoPar::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMwpcGeoPar) );
      instance.SetNew(&new_BmnMwpcGeoPar);
      instance.SetNewArray(&newArray_BmnMwpcGeoPar);
      instance.SetDelete(&delete_BmnMwpcGeoPar);
      instance.SetDeleteArray(&deleteArray_BmnMwpcGeoPar);
      instance.SetDestructor(&destruct_BmnMwpcGeoPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMwpcGeoPar*)
   {
      return GenerateInitInstanceLocal((::BmnMwpcGeoPar*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMwpcGeoPar*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnMwpcTrack::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMwpcTrack::Class_Name()
{
   return "BmnMwpcTrack";
}

//______________________________________________________________________________
const char *BmnMwpcTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcTrack*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMwpcTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcTrack*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMwpcTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcTrack*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMwpcTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcTrack*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMwpcSegment::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMwpcSegment::Class_Name()
{
   return "BmnMwpcSegment";
}

//______________________________________________________________________________
const char *BmnMwpcSegment::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcSegment*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMwpcSegment::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcSegment*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMwpcSegment::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcSegment*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMwpcSegment::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcSegment*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMwpcDigit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMwpcDigit::Class_Name()
{
   return "BmnMwpcDigit";
}

//______________________________________________________________________________
const char *BmnMwpcDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcDigit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMwpcDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcDigit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMwpcDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcDigit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMwpcDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcDigit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMwpcHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMwpcHit::Class_Name()
{
   return "BmnMwpcHit";
}

//______________________________________________________________________________
const char *BmnMwpcHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMwpcHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMwpcHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMwpcHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMwpcHitProducer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMwpcHitProducer::Class_Name()
{
   return "BmnMwpcHitProducer";
}

//______________________________________________________________________________
const char *BmnMwpcHitProducer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcHitProducer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMwpcHitProducer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcHitProducer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMwpcHitProducer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcHitProducer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMwpcHitProducer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcHitProducer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMwpcGeometrySRC::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMwpcGeometrySRC::Class_Name()
{
   return "BmnMwpcGeometrySRC";
}

//______________________________________________________________________________
const char *BmnMwpcGeometrySRC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcGeometrySRC*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMwpcGeometrySRC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcGeometrySRC*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMwpcGeometrySRC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcGeometrySRC*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMwpcGeometrySRC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcGeometrySRC*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMwpcHitFinder::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMwpcHitFinder::Class_Name()
{
   return "BmnMwpcHitFinder";
}

//______________________________________________________________________________
const char *BmnMwpcHitFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcHitFinder*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMwpcHitFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcHitFinder*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMwpcHitFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcHitFinder*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMwpcHitFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcHitFinder*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMwpcGeometry::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMwpcGeometry::Class_Name()
{
   return "BmnMwpcGeometry";
}

//______________________________________________________________________________
const char *BmnMwpcGeometry::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcGeometry*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMwpcGeometry::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcGeometry*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMwpcGeometry::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcGeometry*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMwpcGeometry::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcGeometry*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMwpcTrackFinder::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMwpcTrackFinder::Class_Name()
{
   return "BmnMwpcTrackFinder";
}

//______________________________________________________________________________
const char *BmnMwpcTrackFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcTrackFinder*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMwpcTrackFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcTrackFinder*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMwpcTrackFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcTrackFinder*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMwpcTrackFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcTrackFinder*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMwpcPoint::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMwpcPoint::Class_Name()
{
   return "BmnMwpcPoint";
}

//______________________________________________________________________________
const char *BmnMwpcPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcPoint*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMwpcPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcPoint*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMwpcPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcPoint*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMwpcPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcPoint*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMwpc::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMwpc::Class_Name()
{
   return "BmnMwpc";
}

//______________________________________________________________________________
const char *BmnMwpc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpc*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMwpc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpc*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMwpc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpc*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMwpc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpc*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMwpcContFact::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMwpcContFact::Class_Name()
{
   return "BmnMwpcContFact";
}

//______________________________________________________________________________
const char *BmnMwpcContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcContFact*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMwpcContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcContFact*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMwpcContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcContFact*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMwpcContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcContFact*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMwpcGeo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMwpcGeo::Class_Name()
{
   return "BmnMwpcGeo";
}

//______________________________________________________________________________
const char *BmnMwpcGeo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcGeo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMwpcGeo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcGeo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMwpcGeo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcGeo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMwpcGeo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcGeo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMwpcGeoPar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMwpcGeoPar::Class_Name()
{
   return "BmnMwpcGeoPar";
}

//______________________________________________________________________________
const char *BmnMwpcGeoPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcGeoPar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMwpcGeoPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcGeoPar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMwpcGeoPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcGeoPar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMwpcGeoPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcGeoPar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnMwpcTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMwpcTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMwpcTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMwpcTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMwpcTrack(void *p) {
      return  p ? new(p) ::BmnMwpcTrack : new ::BmnMwpcTrack;
   }
   static void *newArray_BmnMwpcTrack(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMwpcTrack[nElements] : new ::BmnMwpcTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMwpcTrack(void *p) {
      delete ((::BmnMwpcTrack*)p);
   }
   static void deleteArray_BmnMwpcTrack(void *p) {
      delete [] ((::BmnMwpcTrack*)p);
   }
   static void destruct_BmnMwpcTrack(void *p) {
      typedef ::BmnMwpcTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMwpcTrack

//______________________________________________________________________________
void BmnMwpcSegment::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMwpcSegment.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMwpcSegment::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMwpcSegment::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMwpcSegment(void *p) {
      return  p ? new(p) ::BmnMwpcSegment : new ::BmnMwpcSegment;
   }
   static void *newArray_BmnMwpcSegment(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMwpcSegment[nElements] : new ::BmnMwpcSegment[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMwpcSegment(void *p) {
      delete ((::BmnMwpcSegment*)p);
   }
   static void deleteArray_BmnMwpcSegment(void *p) {
      delete [] ((::BmnMwpcSegment*)p);
   }
   static void destruct_BmnMwpcSegment(void *p) {
      typedef ::BmnMwpcSegment current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMwpcSegment

//______________________________________________________________________________
void BmnMwpcDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMwpcDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMwpcDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMwpcDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMwpcDigit(void *p) {
      return  p ? new(p) ::BmnMwpcDigit : new ::BmnMwpcDigit;
   }
   static void *newArray_BmnMwpcDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMwpcDigit[nElements] : new ::BmnMwpcDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMwpcDigit(void *p) {
      delete ((::BmnMwpcDigit*)p);
   }
   static void deleteArray_BmnMwpcDigit(void *p) {
      delete [] ((::BmnMwpcDigit*)p);
   }
   static void destruct_BmnMwpcDigit(void *p) {
      typedef ::BmnMwpcDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMwpcDigit

//______________________________________________________________________________
void BmnMwpcHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMwpcHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMwpcHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMwpcHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMwpcHit(void *p) {
      return  p ? new(p) ::BmnMwpcHit : new ::BmnMwpcHit;
   }
   static void *newArray_BmnMwpcHit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMwpcHit[nElements] : new ::BmnMwpcHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMwpcHit(void *p) {
      delete ((::BmnMwpcHit*)p);
   }
   static void deleteArray_BmnMwpcHit(void *p) {
      delete [] ((::BmnMwpcHit*)p);
   }
   static void destruct_BmnMwpcHit(void *p) {
      typedef ::BmnMwpcHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMwpcHit

//______________________________________________________________________________
void BmnMwpcHitProducer::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMwpcHitProducer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMwpcHitProducer::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMwpcHitProducer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMwpcHitProducer(void *p) {
      return  p ? new(p) ::BmnMwpcHitProducer : new ::BmnMwpcHitProducer;
   }
   static void *newArray_BmnMwpcHitProducer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMwpcHitProducer[nElements] : new ::BmnMwpcHitProducer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMwpcHitProducer(void *p) {
      delete ((::BmnMwpcHitProducer*)p);
   }
   static void deleteArray_BmnMwpcHitProducer(void *p) {
      delete [] ((::BmnMwpcHitProducer*)p);
   }
   static void destruct_BmnMwpcHitProducer(void *p) {
      typedef ::BmnMwpcHitProducer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMwpcHitProducer

//______________________________________________________________________________
void BmnMwpcGeometrySRC::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMwpcGeometrySRC.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMwpcGeometrySRC::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMwpcGeometrySRC::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMwpcGeometrySRC(void *p) {
      return  p ? new(p) ::BmnMwpcGeometrySRC : new ::BmnMwpcGeometrySRC;
   }
   static void *newArray_BmnMwpcGeometrySRC(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMwpcGeometrySRC[nElements] : new ::BmnMwpcGeometrySRC[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMwpcGeometrySRC(void *p) {
      delete ((::BmnMwpcGeometrySRC*)p);
   }
   static void deleteArray_BmnMwpcGeometrySRC(void *p) {
      delete [] ((::BmnMwpcGeometrySRC*)p);
   }
   static void destruct_BmnMwpcGeometrySRC(void *p) {
      typedef ::BmnMwpcGeometrySRC current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMwpcGeometrySRC

//______________________________________________________________________________
void BmnMwpcHitFinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMwpcHitFinder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMwpcHitFinder::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMwpcHitFinder::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMwpcHitFinder(void *p) {
      return  p ? new(p) ::BmnMwpcHitFinder : new ::BmnMwpcHitFinder;
   }
   static void *newArray_BmnMwpcHitFinder(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMwpcHitFinder[nElements] : new ::BmnMwpcHitFinder[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMwpcHitFinder(void *p) {
      delete ((::BmnMwpcHitFinder*)p);
   }
   static void deleteArray_BmnMwpcHitFinder(void *p) {
      delete [] ((::BmnMwpcHitFinder*)p);
   }
   static void destruct_BmnMwpcHitFinder(void *p) {
      typedef ::BmnMwpcHitFinder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMwpcHitFinder

//______________________________________________________________________________
void BmnMwpcGeometry::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMwpcGeometry.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMwpcGeometry::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMwpcGeometry::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMwpcGeometry(void *p) {
      return  p ? new(p) ::BmnMwpcGeometry : new ::BmnMwpcGeometry;
   }
   static void *newArray_BmnMwpcGeometry(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMwpcGeometry[nElements] : new ::BmnMwpcGeometry[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMwpcGeometry(void *p) {
      delete ((::BmnMwpcGeometry*)p);
   }
   static void deleteArray_BmnMwpcGeometry(void *p) {
      delete [] ((::BmnMwpcGeometry*)p);
   }
   static void destruct_BmnMwpcGeometry(void *p) {
      typedef ::BmnMwpcGeometry current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMwpcGeometry

//______________________________________________________________________________
void BmnMwpcTrackFinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMwpcTrackFinder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMwpcTrackFinder::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMwpcTrackFinder::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMwpcTrackFinder(void *p) {
      return  p ? new(p) ::BmnMwpcTrackFinder : new ::BmnMwpcTrackFinder;
   }
   static void *newArray_BmnMwpcTrackFinder(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMwpcTrackFinder[nElements] : new ::BmnMwpcTrackFinder[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMwpcTrackFinder(void *p) {
      delete ((::BmnMwpcTrackFinder*)p);
   }
   static void deleteArray_BmnMwpcTrackFinder(void *p) {
      delete [] ((::BmnMwpcTrackFinder*)p);
   }
   static void destruct_BmnMwpcTrackFinder(void *p) {
      typedef ::BmnMwpcTrackFinder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMwpcTrackFinder

//______________________________________________________________________________
void BmnMwpcPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMwpcPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMwpcPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMwpcPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMwpcPoint(void *p) {
      return  p ? new(p) ::BmnMwpcPoint : new ::BmnMwpcPoint;
   }
   static void *newArray_BmnMwpcPoint(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMwpcPoint[nElements] : new ::BmnMwpcPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMwpcPoint(void *p) {
      delete ((::BmnMwpcPoint*)p);
   }
   static void deleteArray_BmnMwpcPoint(void *p) {
      delete [] ((::BmnMwpcPoint*)p);
   }
   static void destruct_BmnMwpcPoint(void *p) {
      typedef ::BmnMwpcPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMwpcPoint

//______________________________________________________________________________
void BmnMwpc::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMwpc.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMwpc::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMwpc::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMwpc(void *p) {
      return  p ? new(p) ::BmnMwpc : new ::BmnMwpc;
   }
   static void *newArray_BmnMwpc(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMwpc[nElements] : new ::BmnMwpc[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMwpc(void *p) {
      delete ((::BmnMwpc*)p);
   }
   static void deleteArray_BmnMwpc(void *p) {
      delete [] ((::BmnMwpc*)p);
   }
   static void destruct_BmnMwpc(void *p) {
      typedef ::BmnMwpc current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMwpc

//______________________________________________________________________________
void BmnMwpcContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMwpcContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMwpcContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMwpcContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMwpcContFact(void *p) {
      return  p ? new(p) ::BmnMwpcContFact : new ::BmnMwpcContFact;
   }
   static void *newArray_BmnMwpcContFact(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMwpcContFact[nElements] : new ::BmnMwpcContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMwpcContFact(void *p) {
      delete ((::BmnMwpcContFact*)p);
   }
   static void deleteArray_BmnMwpcContFact(void *p) {
      delete [] ((::BmnMwpcContFact*)p);
   }
   static void destruct_BmnMwpcContFact(void *p) {
      typedef ::BmnMwpcContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMwpcContFact

//______________________________________________________________________________
void BmnMwpcGeo::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMwpcGeo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMwpcGeo::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMwpcGeo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMwpcGeo(void *p) {
      return  p ? new(p) ::BmnMwpcGeo : new ::BmnMwpcGeo;
   }
   static void *newArray_BmnMwpcGeo(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMwpcGeo[nElements] : new ::BmnMwpcGeo[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMwpcGeo(void *p) {
      delete ((::BmnMwpcGeo*)p);
   }
   static void deleteArray_BmnMwpcGeo(void *p) {
      delete [] ((::BmnMwpcGeo*)p);
   }
   static void destruct_BmnMwpcGeo(void *p) {
      typedef ::BmnMwpcGeo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMwpcGeo

//______________________________________________________________________________
void BmnMwpcGeoPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMwpcGeoPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMwpcGeoPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMwpcGeoPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMwpcGeoPar(void *p) {
      return  p ? new(p) ::BmnMwpcGeoPar : new ::BmnMwpcGeoPar;
   }
   static void *newArray_BmnMwpcGeoPar(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMwpcGeoPar[nElements] : new ::BmnMwpcGeoPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMwpcGeoPar(void *p) {
      delete ((::BmnMwpcGeoPar*)p);
   }
   static void deleteArray_BmnMwpcGeoPar(void *p) {
      delete [] ((::BmnMwpcGeoPar*)p);
   }
   static void destruct_BmnMwpcGeoPar(void *p) {
      typedef ::BmnMwpcGeoPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMwpcGeoPar

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = nullptr);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 386,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));

      ::ROOT::AddClassAlternate("vector<double>","std::vector<double, std::allocator<double> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<double>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<double>*)nullptr)->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete ((vector<double>*)p);
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] ((vector<double>*)p);
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace ROOT {
   static TClass *vectorlETH2DmUgR_Dictionary();
   static void vectorlETH2DmUgR_TClassManip(TClass*);
   static void *new_vectorlETH2DmUgR(void *p = nullptr);
   static void *newArray_vectorlETH2DmUgR(Long_t size, void *p);
   static void delete_vectorlETH2DmUgR(void *p);
   static void deleteArray_vectorlETH2DmUgR(void *p);
   static void destruct_vectorlETH2DmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TH2D*>*)
   {
      vector<TH2D*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TH2D*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TH2D*>", -2, "vector", 386,
                  typeid(vector<TH2D*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETH2DmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TH2D*>) );
      instance.SetNew(&new_vectorlETH2DmUgR);
      instance.SetNewArray(&newArray_vectorlETH2DmUgR);
      instance.SetDelete(&delete_vectorlETH2DmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETH2DmUgR);
      instance.SetDestructor(&destruct_vectorlETH2DmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TH2D*> >()));

      ::ROOT::AddClassAlternate("vector<TH2D*>","std::vector<TH2D*, std::allocator<TH2D*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TH2D*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETH2DmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TH2D*>*)nullptr)->GetClass();
      vectorlETH2DmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETH2DmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETH2DmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH2D*> : new vector<TH2D*>;
   }
   static void *newArray_vectorlETH2DmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH2D*>[nElements] : new vector<TH2D*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETH2DmUgR(void *p) {
      delete ((vector<TH2D*>*)p);
   }
   static void deleteArray_vectorlETH2DmUgR(void *p) {
      delete [] ((vector<TH2D*>*)p);
   }
   static void destruct_vectorlETH2DmUgR(void *p) {
      typedef vector<TH2D*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TH2D*>

namespace ROOT {
   static TClass *vectorlETH1DmUgR_Dictionary();
   static void vectorlETH1DmUgR_TClassManip(TClass*);
   static void *new_vectorlETH1DmUgR(void *p = nullptr);
   static void *newArray_vectorlETH1DmUgR(Long_t size, void *p);
   static void delete_vectorlETH1DmUgR(void *p);
   static void deleteArray_vectorlETH1DmUgR(void *p);
   static void destruct_vectorlETH1DmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TH1D*>*)
   {
      vector<TH1D*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TH1D*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TH1D*>", -2, "vector", 386,
                  typeid(vector<TH1D*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETH1DmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TH1D*>) );
      instance.SetNew(&new_vectorlETH1DmUgR);
      instance.SetNewArray(&newArray_vectorlETH1DmUgR);
      instance.SetDelete(&delete_vectorlETH1DmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETH1DmUgR);
      instance.SetDestructor(&destruct_vectorlETH1DmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TH1D*> >()));

      ::ROOT::AddClassAlternate("vector<TH1D*>","std::vector<TH1D*, std::allocator<TH1D*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TH1D*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETH1DmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TH1D*>*)nullptr)->GetClass();
      vectorlETH1DmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETH1DmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETH1DmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH1D*> : new vector<TH1D*>;
   }
   static void *newArray_vectorlETH1DmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH1D*>[nElements] : new vector<TH1D*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETH1DmUgR(void *p) {
      delete ((vector<TH1D*>*)p);
   }
   static void deleteArray_vectorlETH1DmUgR(void *p) {
      delete [] ((vector<TH1D*>*)p);
   }
   static void destruct_vectorlETH1DmUgR(void *p) {
      typedef vector<TH1D*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TH1D*>

namespace ROOT {
   static TClass *vectorlEBmnMwpcTrackFindercLcLMC_pointsgR_Dictionary();
   static void vectorlEBmnMwpcTrackFindercLcLMC_pointsgR_TClassManip(TClass*);
   static void *new_vectorlEBmnMwpcTrackFindercLcLMC_pointsgR(void *p = nullptr);
   static void *newArray_vectorlEBmnMwpcTrackFindercLcLMC_pointsgR(Long_t size, void *p);
   static void delete_vectorlEBmnMwpcTrackFindercLcLMC_pointsgR(void *p);
   static void deleteArray_vectorlEBmnMwpcTrackFindercLcLMC_pointsgR(void *p);
   static void destruct_vectorlEBmnMwpcTrackFindercLcLMC_pointsgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnMwpcTrackFinder::MC_points>*)
   {
      vector<BmnMwpcTrackFinder::MC_points> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnMwpcTrackFinder::MC_points>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnMwpcTrackFinder::MC_points>", -2, "vector", 386,
                  typeid(vector<BmnMwpcTrackFinder::MC_points>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnMwpcTrackFindercLcLMC_pointsgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnMwpcTrackFinder::MC_points>) );
      instance.SetNew(&new_vectorlEBmnMwpcTrackFindercLcLMC_pointsgR);
      instance.SetNewArray(&newArray_vectorlEBmnMwpcTrackFindercLcLMC_pointsgR);
      instance.SetDelete(&delete_vectorlEBmnMwpcTrackFindercLcLMC_pointsgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnMwpcTrackFindercLcLMC_pointsgR);
      instance.SetDestructor(&destruct_vectorlEBmnMwpcTrackFindercLcLMC_pointsgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnMwpcTrackFinder::MC_points> >()));

      ::ROOT::AddClassAlternate("vector<BmnMwpcTrackFinder::MC_points>","std::vector<BmnMwpcTrackFinder::MC_points, std::allocator<BmnMwpcTrackFinder::MC_points> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnMwpcTrackFinder::MC_points>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnMwpcTrackFindercLcLMC_pointsgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnMwpcTrackFinder::MC_points>*)nullptr)->GetClass();
      vectorlEBmnMwpcTrackFindercLcLMC_pointsgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnMwpcTrackFindercLcLMC_pointsgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnMwpcTrackFindercLcLMC_pointsgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnMwpcTrackFinder::MC_points> : new vector<BmnMwpcTrackFinder::MC_points>;
   }
   static void *newArray_vectorlEBmnMwpcTrackFindercLcLMC_pointsgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnMwpcTrackFinder::MC_points>[nElements] : new vector<BmnMwpcTrackFinder::MC_points>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnMwpcTrackFindercLcLMC_pointsgR(void *p) {
      delete ((vector<BmnMwpcTrackFinder::MC_points>*)p);
   }
   static void deleteArray_vectorlEBmnMwpcTrackFindercLcLMC_pointsgR(void *p) {
      delete [] ((vector<BmnMwpcTrackFinder::MC_points>*)p);
   }
   static void destruct_vectorlEBmnMwpcTrackFindercLcLMC_pointsgR(void *p) {
      typedef vector<BmnMwpcTrackFinder::MC_points> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnMwpcTrackFinder::MC_points>

namespace ROOT {
   static TClass *vectorlEBmnMwpcHitFindercLcLMC_pointsgR_Dictionary();
   static void vectorlEBmnMwpcHitFindercLcLMC_pointsgR_TClassManip(TClass*);
   static void *new_vectorlEBmnMwpcHitFindercLcLMC_pointsgR(void *p = nullptr);
   static void *newArray_vectorlEBmnMwpcHitFindercLcLMC_pointsgR(Long_t size, void *p);
   static void delete_vectorlEBmnMwpcHitFindercLcLMC_pointsgR(void *p);
   static void deleteArray_vectorlEBmnMwpcHitFindercLcLMC_pointsgR(void *p);
   static void destruct_vectorlEBmnMwpcHitFindercLcLMC_pointsgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnMwpcHitFinder::MC_points>*)
   {
      vector<BmnMwpcHitFinder::MC_points> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnMwpcHitFinder::MC_points>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnMwpcHitFinder::MC_points>", -2, "vector", 386,
                  typeid(vector<BmnMwpcHitFinder::MC_points>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnMwpcHitFindercLcLMC_pointsgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnMwpcHitFinder::MC_points>) );
      instance.SetNew(&new_vectorlEBmnMwpcHitFindercLcLMC_pointsgR);
      instance.SetNewArray(&newArray_vectorlEBmnMwpcHitFindercLcLMC_pointsgR);
      instance.SetDelete(&delete_vectorlEBmnMwpcHitFindercLcLMC_pointsgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnMwpcHitFindercLcLMC_pointsgR);
      instance.SetDestructor(&destruct_vectorlEBmnMwpcHitFindercLcLMC_pointsgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnMwpcHitFinder::MC_points> >()));

      ::ROOT::AddClassAlternate("vector<BmnMwpcHitFinder::MC_points>","std::vector<BmnMwpcHitFinder::MC_points, std::allocator<BmnMwpcHitFinder::MC_points> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnMwpcHitFinder::MC_points>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnMwpcHitFindercLcLMC_pointsgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnMwpcHitFinder::MC_points>*)nullptr)->GetClass();
      vectorlEBmnMwpcHitFindercLcLMC_pointsgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnMwpcHitFindercLcLMC_pointsgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnMwpcHitFindercLcLMC_pointsgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnMwpcHitFinder::MC_points> : new vector<BmnMwpcHitFinder::MC_points>;
   }
   static void *newArray_vectorlEBmnMwpcHitFindercLcLMC_pointsgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnMwpcHitFinder::MC_points>[nElements] : new vector<BmnMwpcHitFinder::MC_points>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnMwpcHitFindercLcLMC_pointsgR(void *p) {
      delete ((vector<BmnMwpcHitFinder::MC_points>*)p);
   }
   static void deleteArray_vectorlEBmnMwpcHitFindercLcLMC_pointsgR(void *p) {
      delete [] ((vector<BmnMwpcHitFinder::MC_points>*)p);
   }
   static void destruct_vectorlEBmnMwpcHitFindercLcLMC_pointsgR(void *p) {
      typedef vector<BmnMwpcHitFinder::MC_points> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnMwpcHitFinder::MC_points>

namespace ROOT {
   static TClass *maplETStringcOTGeoMediummUgR_Dictionary();
   static void maplETStringcOTGeoMediummUgR_TClassManip(TClass*);
   static void *new_maplETStringcOTGeoMediummUgR(void *p = nullptr);
   static void *newArray_maplETStringcOTGeoMediummUgR(Long_t size, void *p);
   static void delete_maplETStringcOTGeoMediummUgR(void *p);
   static void deleteArray_maplETStringcOTGeoMediummUgR(void *p);
   static void destruct_maplETStringcOTGeoMediummUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TString,TGeoMedium*>*)
   {
      map<TString,TGeoMedium*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TString,TGeoMedium*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TString,TGeoMedium*>", -2, "map", 100,
                  typeid(map<TString,TGeoMedium*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETStringcOTGeoMediummUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TString,TGeoMedium*>) );
      instance.SetNew(&new_maplETStringcOTGeoMediummUgR);
      instance.SetNewArray(&newArray_maplETStringcOTGeoMediummUgR);
      instance.SetDelete(&delete_maplETStringcOTGeoMediummUgR);
      instance.SetDeleteArray(&deleteArray_maplETStringcOTGeoMediummUgR);
      instance.SetDestructor(&destruct_maplETStringcOTGeoMediummUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TString,TGeoMedium*> >()));

      ::ROOT::AddClassAlternate("map<TString,TGeoMedium*>","std::map<TString, TGeoMedium*, std::less<TString>, std::allocator<std::pair<TString const, TGeoMedium*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TString,TGeoMedium*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETStringcOTGeoMediummUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TString,TGeoMedium*>*)nullptr)->GetClass();
      maplETStringcOTGeoMediummUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETStringcOTGeoMediummUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETStringcOTGeoMediummUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,TGeoMedium*> : new map<TString,TGeoMedium*>;
   }
   static void *newArray_maplETStringcOTGeoMediummUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,TGeoMedium*>[nElements] : new map<TString,TGeoMedium*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETStringcOTGeoMediummUgR(void *p) {
      delete ((map<TString,TGeoMedium*>*)p);
   }
   static void deleteArray_maplETStringcOTGeoMediummUgR(void *p) {
      delete [] ((map<TString,TGeoMedium*>*)p);
   }
   static void destruct_maplETStringcOTGeoMediummUgR(void *p) {
      typedef map<TString,TGeoMedium*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TString,TGeoMedium*>

namespace {
  void TriggerDictionaryInitialization_G__MwpcDict_Impl() {
    static const char* headers[] = {
"BmnMwpcSegment.h",
"BmnMwpcDigit.h",
"BmnMwpcHit.h",
"BmnMwpcHitProducer.h",
"BmnMwpcHitFinder.h",
"BmnMwpcGeometry.h",
"BmnMwpcGeometrySRC.h",
"BmnMwpcTrack.h",
"BmnMwpcTrackFinder.h",
"BmnMwpc.h",
"BmnMwpcContFact.h",
"BmnMwpcGeo.h",
"BmnMwpcGeoPar.h",
"BmnMwpcPoint.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/base",
"/data/yaopeng/bmnroot_Yaopeng/base/data",
"/data/yaopeng/bmnroot_Yaopeng/base/raw",
"/data/yaopeng/bmnroot_Yaopeng/base/cbm",
"/data/yaopeng/bmnroot_Yaopeng/base/header",
"/data/yaopeng/bmnroot_Yaopeng/base/math",
"/data/yaopeng/bmnroot_Yaopeng/detectors/mwpc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/detectors/mwpc/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__MwpcDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$BmnMwpcTrack.h")))  __attribute__((annotate("$clingAutoload$BmnMwpcSegment.h")))  BmnMwpcTrack;
class __attribute__((annotate("$clingAutoload$BmnMwpcSegment.h")))  BmnMwpcSegment;
class __attribute__((annotate("$clingAutoload$BmnMwpcDigit.h")))  BmnMwpcDigit;
class __attribute__((annotate("$clingAutoload$BmnMwpcHit.h")))  BmnMwpcHit;
class __attribute__((annotate("$clingAutoload$BmnMwpcHitProducer.h")))  BmnMwpcHitProducer;
class __attribute__((annotate("$clingAutoload$BmnMwpcGeometrySRC.h")))  __attribute__((annotate("$clingAutoload$BmnMwpcHitFinder.h")))  BmnMwpcGeometrySRC;
class __attribute__((annotate("$clingAutoload$BmnMwpcHitFinder.h")))  BmnMwpcHitFinder;
class __attribute__((annotate("$clingAutoload$BmnMwpcGeometry.h")))  BmnMwpcGeometry;
class __attribute__((annotate("$clingAutoload$BmnMwpcTrackFinder.h")))  BmnMwpcTrackFinder;
class __attribute__((annotate("$clingAutoload$BmnMwpcPoint.h")))  __attribute__((annotate("$clingAutoload$BmnMwpc.h")))  BmnMwpcPoint;
class __attribute__((annotate("$clingAutoload$BmnMwpc.h")))  BmnMwpc;
class __attribute__((annotate(R"ATTRDUMP(Factory for all MWPC1 parameter containers)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$BmnMwpcContFact.h")))  BmnMwpcContFact;
class __attribute__((annotate(R"ATTRDUMP(Class for MWPC)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$BmnMwpcGeo.h")))  BmnMwpcGeo;
class __attribute__((annotate("$clingAutoload$BmnMwpcGeoPar.h")))  BmnMwpcGeoPar;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__MwpcDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "BmnMwpcSegment.h"
#include "BmnMwpcDigit.h"
#include "BmnMwpcHit.h"
#include "BmnMwpcHitProducer.h"
#include "BmnMwpcHitFinder.h"
#include "BmnMwpcGeometry.h"
#include "BmnMwpcGeometrySRC.h"
#include "BmnMwpcTrack.h"
#include "BmnMwpcTrackFinder.h"
#include "BmnMwpc.h"
#include "BmnMwpcContFact.h"
#include "BmnMwpcGeo.h"
#include "BmnMwpcGeoPar.h"
#include "BmnMwpcPoint.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BmnMwpc", payloadCode, "@",
"BmnMwpcContFact", payloadCode, "@",
"BmnMwpcDigit", payloadCode, "@",
"BmnMwpcGeo", payloadCode, "@",
"BmnMwpcGeoPar", payloadCode, "@",
"BmnMwpcGeometry", payloadCode, "@",
"BmnMwpcGeometrySRC", payloadCode, "@",
"BmnMwpcHit", payloadCode, "@",
"BmnMwpcHitFinder", payloadCode, "@",
"BmnMwpcHitProducer", payloadCode, "@",
"BmnMwpcPoint", payloadCode, "@",
"BmnMwpcSegment", payloadCode, "@",
"BmnMwpcTrack", payloadCode, "@",
"BmnMwpcTrackFinder", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__MwpcDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__MwpcDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__MwpcDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__MwpcDict() {
  TriggerDictionaryInitialization_G__MwpcDict_Impl();
}
