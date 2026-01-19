// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIdetectorsdIdchdIG__DchDict
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
#include "BmnDch.h"
#include "BmnDchPoint.h"
#include "BmnDchContFact.h"
#include "BmnDchGeo.h"
#include "BmnDchGeoPar.h"
#include "BmnDchDigit.h"
#include "BmnDchHitOriginal.h"
#include "BmnDchHit.h"
#include "BmnDchHitProducer.h"
#include "BmnDchTrackFinder.h"
#include "BmnDchTrack.h"
#include "DCHgeometryconstants_bmn.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BmnDchPoint(void *p = nullptr);
   static void *newArray_BmnDchPoint(Long_t size, void *p);
   static void delete_BmnDchPoint(void *p);
   static void deleteArray_BmnDchPoint(void *p);
   static void destruct_BmnDchPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnDchPoint*)
   {
      ::BmnDchPoint *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnDchPoint >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnDchPoint", ::BmnDchPoint::Class_Version(), "BmnDchPoint.h", 19,
                  typeid(::BmnDchPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnDchPoint::Dictionary, isa_proxy, 4,
                  sizeof(::BmnDchPoint) );
      instance.SetNew(&new_BmnDchPoint);
      instance.SetNewArray(&newArray_BmnDchPoint);
      instance.SetDelete(&delete_BmnDchPoint);
      instance.SetDeleteArray(&deleteArray_BmnDchPoint);
      instance.SetDestructor(&destruct_BmnDchPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnDchPoint*)
   {
      return GenerateInitInstanceLocal((::BmnDchPoint*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnDchPoint*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnDch(void *p = nullptr);
   static void *newArray_BmnDch(Long_t size, void *p);
   static void delete_BmnDch(void *p);
   static void deleteArray_BmnDch(void *p);
   static void destruct_BmnDch(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnDch*)
   {
      ::BmnDch *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnDch >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnDch", ::BmnDch::Class_Version(), "BmnDch.h", 25,
                  typeid(::BmnDch), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnDch::Dictionary, isa_proxy, 4,
                  sizeof(::BmnDch) );
      instance.SetNew(&new_BmnDch);
      instance.SetNewArray(&newArray_BmnDch);
      instance.SetDelete(&delete_BmnDch);
      instance.SetDeleteArray(&deleteArray_BmnDch);
      instance.SetDestructor(&destruct_BmnDch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnDch*)
   {
      return GenerateInitInstanceLocal((::BmnDch*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnDch*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnDchContFact(void *p = nullptr);
   static void *newArray_BmnDchContFact(Long_t size, void *p);
   static void delete_BmnDchContFact(void *p);
   static void deleteArray_BmnDchContFact(void *p);
   static void destruct_BmnDchContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnDchContFact*)
   {
      ::BmnDchContFact *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnDchContFact >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnDchContFact", ::BmnDchContFact::Class_Version(), "BmnDchContFact.h", 8,
                  typeid(::BmnDchContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnDchContFact::Dictionary, isa_proxy, 4,
                  sizeof(::BmnDchContFact) );
      instance.SetNew(&new_BmnDchContFact);
      instance.SetNewArray(&newArray_BmnDchContFact);
      instance.SetDelete(&delete_BmnDchContFact);
      instance.SetDeleteArray(&deleteArray_BmnDchContFact);
      instance.SetDestructor(&destruct_BmnDchContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnDchContFact*)
   {
      return GenerateInitInstanceLocal((::BmnDchContFact*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnDchContFact*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnDchGeo(void *p = nullptr);
   static void *newArray_BmnDchGeo(Long_t size, void *p);
   static void delete_BmnDchGeo(void *p);
   static void deleteArray_BmnDchGeo(void *p);
   static void destruct_BmnDchGeo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnDchGeo*)
   {
      ::BmnDchGeo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnDchGeo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnDchGeo", ::BmnDchGeo::Class_Version(), "BmnDchGeo.h", 6,
                  typeid(::BmnDchGeo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnDchGeo::Dictionary, isa_proxy, 4,
                  sizeof(::BmnDchGeo) );
      instance.SetNew(&new_BmnDchGeo);
      instance.SetNewArray(&newArray_BmnDchGeo);
      instance.SetDelete(&delete_BmnDchGeo);
      instance.SetDeleteArray(&deleteArray_BmnDchGeo);
      instance.SetDestructor(&destruct_BmnDchGeo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnDchGeo*)
   {
      return GenerateInitInstanceLocal((::BmnDchGeo*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnDchGeo*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnDchGeoPar(void *p = nullptr);
   static void *newArray_BmnDchGeoPar(Long_t size, void *p);
   static void delete_BmnDchGeoPar(void *p);
   static void deleteArray_BmnDchGeoPar(void *p);
   static void destruct_BmnDchGeoPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnDchGeoPar*)
   {
      ::BmnDchGeoPar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnDchGeoPar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnDchGeoPar", ::BmnDchGeoPar::Class_Version(), "BmnDchGeoPar.h", 8,
                  typeid(::BmnDchGeoPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnDchGeoPar::Dictionary, isa_proxy, 4,
                  sizeof(::BmnDchGeoPar) );
      instance.SetNew(&new_BmnDchGeoPar);
      instance.SetNewArray(&newArray_BmnDchGeoPar);
      instance.SetDelete(&delete_BmnDchGeoPar);
      instance.SetDeleteArray(&deleteArray_BmnDchGeoPar);
      instance.SetDestructor(&destruct_BmnDchGeoPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnDchGeoPar*)
   {
      return GenerateInitInstanceLocal((::BmnDchGeoPar*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnDchGeoPar*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnDchDigit(void *p = nullptr);
   static void *newArray_BmnDchDigit(Long_t size, void *p);
   static void delete_BmnDchDigit(void *p);
   static void deleteArray_BmnDchDigit(void *p);
   static void destruct_BmnDchDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnDchDigit*)
   {
      ::BmnDchDigit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnDchDigit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnDchDigit", ::BmnDchDigit::Class_Version(), "BmnDchDigit.h", 8,
                  typeid(::BmnDchDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnDchDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnDchDigit) );
      instance.SetNew(&new_BmnDchDigit);
      instance.SetNewArray(&newArray_BmnDchDigit);
      instance.SetDelete(&delete_BmnDchDigit);
      instance.SetDeleteArray(&deleteArray_BmnDchDigit);
      instance.SetDestructor(&destruct_BmnDchDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnDchDigit*)
   {
      return GenerateInitInstanceLocal((::BmnDchDigit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnDchDigit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnDchHitOriginal(void *p = nullptr);
   static void *newArray_BmnDchHitOriginal(Long_t size, void *p);
   static void delete_BmnDchHitOriginal(void *p);
   static void deleteArray_BmnDchHitOriginal(void *p);
   static void destruct_BmnDchHitOriginal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnDchHitOriginal*)
   {
      ::BmnDchHitOriginal *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnDchHitOriginal >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnDchHitOriginal", ::BmnDchHitOriginal::Class_Version(), "BmnDchHitOriginal.h", 10,
                  typeid(::BmnDchHitOriginal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnDchHitOriginal::Dictionary, isa_proxy, 4,
                  sizeof(::BmnDchHitOriginal) );
      instance.SetNew(&new_BmnDchHitOriginal);
      instance.SetNewArray(&newArray_BmnDchHitOriginal);
      instance.SetDelete(&delete_BmnDchHitOriginal);
      instance.SetDeleteArray(&deleteArray_BmnDchHitOriginal);
      instance.SetDestructor(&destruct_BmnDchHitOriginal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnDchHitOriginal*)
   {
      return GenerateInitInstanceLocal((::BmnDchHitOriginal*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnDchHitOriginal*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnDchHit(void *p = nullptr);
   static void *newArray_BmnDchHit(Long_t size, void *p);
   static void delete_BmnDchHit(void *p);
   static void deleteArray_BmnDchHit(void *p);
   static void destruct_BmnDchHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnDchHit*)
   {
      ::BmnDchHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnDchHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnDchHit", ::BmnDchHit::Class_Version(), "BmnDchHit.h", 9,
                  typeid(::BmnDchHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnDchHit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnDchHit) );
      instance.SetNew(&new_BmnDchHit);
      instance.SetNewArray(&newArray_BmnDchHit);
      instance.SetDelete(&delete_BmnDchHit);
      instance.SetDeleteArray(&deleteArray_BmnDchHit);
      instance.SetDestructor(&destruct_BmnDchHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnDchHit*)
   {
      return GenerateInitInstanceLocal((::BmnDchHit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnDchHit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnDchHitProducer(void *p = nullptr);
   static void *newArray_BmnDchHitProducer(Long_t size, void *p);
   static void delete_BmnDchHitProducer(void *p);
   static void deleteArray_BmnDchHitProducer(void *p);
   static void destruct_BmnDchHitProducer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnDchHitProducer*)
   {
      ::BmnDchHitProducer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnDchHitProducer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnDchHitProducer", ::BmnDchHitProducer::Class_Version(), "BmnDchHitProducer.h", 19,
                  typeid(::BmnDchHitProducer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnDchHitProducer::Dictionary, isa_proxy, 4,
                  sizeof(::BmnDchHitProducer) );
      instance.SetNew(&new_BmnDchHitProducer);
      instance.SetNewArray(&newArray_BmnDchHitProducer);
      instance.SetDelete(&delete_BmnDchHitProducer);
      instance.SetDeleteArray(&deleteArray_BmnDchHitProducer);
      instance.SetDestructor(&destruct_BmnDchHitProducer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnDchHitProducer*)
   {
      return GenerateInitInstanceLocal((::BmnDchHitProducer*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnDchHitProducer*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnDchTrack(void *p = nullptr);
   static void *newArray_BmnDchTrack(Long_t size, void *p);
   static void delete_BmnDchTrack(void *p);
   static void deleteArray_BmnDchTrack(void *p);
   static void destruct_BmnDchTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnDchTrack*)
   {
      ::BmnDchTrack *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnDchTrack >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnDchTrack", ::BmnDchTrack::Class_Version(), "BmnDchTrack.h", 6,
                  typeid(::BmnDchTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnDchTrack::Dictionary, isa_proxy, 4,
                  sizeof(::BmnDchTrack) );
      instance.SetNew(&new_BmnDchTrack);
      instance.SetNewArray(&newArray_BmnDchTrack);
      instance.SetDelete(&delete_BmnDchTrack);
      instance.SetDeleteArray(&deleteArray_BmnDchTrack);
      instance.SetDestructor(&destruct_BmnDchTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnDchTrack*)
   {
      return GenerateInitInstanceLocal((::BmnDchTrack*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnDchTrack*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnDchTrackFinder(void *p = nullptr);
   static void *newArray_BmnDchTrackFinder(Long_t size, void *p);
   static void delete_BmnDchTrackFinder(void *p);
   static void deleteArray_BmnDchTrackFinder(void *p);
   static void destruct_BmnDchTrackFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnDchTrackFinder*)
   {
      ::BmnDchTrackFinder *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnDchTrackFinder >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnDchTrackFinder", ::BmnDchTrackFinder::Class_Version(), "BmnDchTrackFinder.h", 43,
                  typeid(::BmnDchTrackFinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnDchTrackFinder::Dictionary, isa_proxy, 4,
                  sizeof(::BmnDchTrackFinder) );
      instance.SetNew(&new_BmnDchTrackFinder);
      instance.SetNewArray(&newArray_BmnDchTrackFinder);
      instance.SetDelete(&delete_BmnDchTrackFinder);
      instance.SetDeleteArray(&deleteArray_BmnDchTrackFinder);
      instance.SetDestructor(&destruct_BmnDchTrackFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnDchTrackFinder*)
   {
      return GenerateInitInstanceLocal((::BmnDchTrackFinder*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnDchTrackFinder*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnDchPoint::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnDchPoint::Class_Name()
{
   return "BmnDchPoint";
}

//______________________________________________________________________________
const char *BmnDchPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchPoint*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnDchPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchPoint*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnDchPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchPoint*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnDchPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchPoint*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnDch::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnDch::Class_Name()
{
   return "BmnDch";
}

//______________________________________________________________________________
const char *BmnDch::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDch*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnDch::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDch*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnDch::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDch*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnDch::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDch*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnDchContFact::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnDchContFact::Class_Name()
{
   return "BmnDchContFact";
}

//______________________________________________________________________________
const char *BmnDchContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchContFact*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnDchContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchContFact*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnDchContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchContFact*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnDchContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchContFact*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnDchGeo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnDchGeo::Class_Name()
{
   return "BmnDchGeo";
}

//______________________________________________________________________________
const char *BmnDchGeo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchGeo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnDchGeo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchGeo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnDchGeo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchGeo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnDchGeo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchGeo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnDchGeoPar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnDchGeoPar::Class_Name()
{
   return "BmnDchGeoPar";
}

//______________________________________________________________________________
const char *BmnDchGeoPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchGeoPar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnDchGeoPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchGeoPar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnDchGeoPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchGeoPar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnDchGeoPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchGeoPar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnDchDigit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnDchDigit::Class_Name()
{
   return "BmnDchDigit";
}

//______________________________________________________________________________
const char *BmnDchDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchDigit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnDchDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchDigit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnDchDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchDigit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnDchDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchDigit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnDchHitOriginal::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnDchHitOriginal::Class_Name()
{
   return "BmnDchHitOriginal";
}

//______________________________________________________________________________
const char *BmnDchHitOriginal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchHitOriginal*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnDchHitOriginal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchHitOriginal*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnDchHitOriginal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchHitOriginal*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnDchHitOriginal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchHitOriginal*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnDchHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnDchHit::Class_Name()
{
   return "BmnDchHit";
}

//______________________________________________________________________________
const char *BmnDchHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnDchHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnDchHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnDchHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnDchHitProducer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnDchHitProducer::Class_Name()
{
   return "BmnDchHitProducer";
}

//______________________________________________________________________________
const char *BmnDchHitProducer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchHitProducer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnDchHitProducer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchHitProducer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnDchHitProducer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchHitProducer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnDchHitProducer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchHitProducer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnDchTrack::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnDchTrack::Class_Name()
{
   return "BmnDchTrack";
}

//______________________________________________________________________________
const char *BmnDchTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchTrack*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnDchTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchTrack*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnDchTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchTrack*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnDchTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchTrack*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnDchTrackFinder::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnDchTrackFinder::Class_Name()
{
   return "BmnDchTrackFinder";
}

//______________________________________________________________________________
const char *BmnDchTrackFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchTrackFinder*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnDchTrackFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchTrackFinder*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnDchTrackFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchTrackFinder*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnDchTrackFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchTrackFinder*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnDchPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnDchPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnDchPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnDchPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnDchPoint(void *p) {
      return  p ? new(p) ::BmnDchPoint : new ::BmnDchPoint;
   }
   static void *newArray_BmnDchPoint(Long_t nElements, void *p) {
      return p ? new(p) ::BmnDchPoint[nElements] : new ::BmnDchPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnDchPoint(void *p) {
      delete ((::BmnDchPoint*)p);
   }
   static void deleteArray_BmnDchPoint(void *p) {
      delete [] ((::BmnDchPoint*)p);
   }
   static void destruct_BmnDchPoint(void *p) {
      typedef ::BmnDchPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnDchPoint

//______________________________________________________________________________
void BmnDch::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnDch.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnDch::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnDch::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnDch(void *p) {
      return  p ? new(p) ::BmnDch : new ::BmnDch;
   }
   static void *newArray_BmnDch(Long_t nElements, void *p) {
      return p ? new(p) ::BmnDch[nElements] : new ::BmnDch[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnDch(void *p) {
      delete ((::BmnDch*)p);
   }
   static void deleteArray_BmnDch(void *p) {
      delete [] ((::BmnDch*)p);
   }
   static void destruct_BmnDch(void *p) {
      typedef ::BmnDch current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnDch

//______________________________________________________________________________
void BmnDchContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnDchContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnDchContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnDchContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnDchContFact(void *p) {
      return  p ? new(p) ::BmnDchContFact : new ::BmnDchContFact;
   }
   static void *newArray_BmnDchContFact(Long_t nElements, void *p) {
      return p ? new(p) ::BmnDchContFact[nElements] : new ::BmnDchContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnDchContFact(void *p) {
      delete ((::BmnDchContFact*)p);
   }
   static void deleteArray_BmnDchContFact(void *p) {
      delete [] ((::BmnDchContFact*)p);
   }
   static void destruct_BmnDchContFact(void *p) {
      typedef ::BmnDchContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnDchContFact

//______________________________________________________________________________
void BmnDchGeo::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnDchGeo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnDchGeo::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnDchGeo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnDchGeo(void *p) {
      return  p ? new(p) ::BmnDchGeo : new ::BmnDchGeo;
   }
   static void *newArray_BmnDchGeo(Long_t nElements, void *p) {
      return p ? new(p) ::BmnDchGeo[nElements] : new ::BmnDchGeo[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnDchGeo(void *p) {
      delete ((::BmnDchGeo*)p);
   }
   static void deleteArray_BmnDchGeo(void *p) {
      delete [] ((::BmnDchGeo*)p);
   }
   static void destruct_BmnDchGeo(void *p) {
      typedef ::BmnDchGeo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnDchGeo

//______________________________________________________________________________
void BmnDchGeoPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnDchGeoPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnDchGeoPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnDchGeoPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnDchGeoPar(void *p) {
      return  p ? new(p) ::BmnDchGeoPar : new ::BmnDchGeoPar;
   }
   static void *newArray_BmnDchGeoPar(Long_t nElements, void *p) {
      return p ? new(p) ::BmnDchGeoPar[nElements] : new ::BmnDchGeoPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnDchGeoPar(void *p) {
      delete ((::BmnDchGeoPar*)p);
   }
   static void deleteArray_BmnDchGeoPar(void *p) {
      delete [] ((::BmnDchGeoPar*)p);
   }
   static void destruct_BmnDchGeoPar(void *p) {
      typedef ::BmnDchGeoPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnDchGeoPar

//______________________________________________________________________________
void BmnDchDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnDchDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnDchDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnDchDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnDchDigit(void *p) {
      return  p ? new(p) ::BmnDchDigit : new ::BmnDchDigit;
   }
   static void *newArray_BmnDchDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnDchDigit[nElements] : new ::BmnDchDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnDchDigit(void *p) {
      delete ((::BmnDchDigit*)p);
   }
   static void deleteArray_BmnDchDigit(void *p) {
      delete [] ((::BmnDchDigit*)p);
   }
   static void destruct_BmnDchDigit(void *p) {
      typedef ::BmnDchDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnDchDigit

//______________________________________________________________________________
void BmnDchHitOriginal::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnDchHitOriginal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnDchHitOriginal::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnDchHitOriginal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnDchHitOriginal(void *p) {
      return  p ? new(p) ::BmnDchHitOriginal : new ::BmnDchHitOriginal;
   }
   static void *newArray_BmnDchHitOriginal(Long_t nElements, void *p) {
      return p ? new(p) ::BmnDchHitOriginal[nElements] : new ::BmnDchHitOriginal[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnDchHitOriginal(void *p) {
      delete ((::BmnDchHitOriginal*)p);
   }
   static void deleteArray_BmnDchHitOriginal(void *p) {
      delete [] ((::BmnDchHitOriginal*)p);
   }
   static void destruct_BmnDchHitOriginal(void *p) {
      typedef ::BmnDchHitOriginal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnDchHitOriginal

//______________________________________________________________________________
void BmnDchHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnDchHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnDchHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnDchHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnDchHit(void *p) {
      return  p ? new(p) ::BmnDchHit : new ::BmnDchHit;
   }
   static void *newArray_BmnDchHit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnDchHit[nElements] : new ::BmnDchHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnDchHit(void *p) {
      delete ((::BmnDchHit*)p);
   }
   static void deleteArray_BmnDchHit(void *p) {
      delete [] ((::BmnDchHit*)p);
   }
   static void destruct_BmnDchHit(void *p) {
      typedef ::BmnDchHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnDchHit

//______________________________________________________________________________
void BmnDchHitProducer::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnDchHitProducer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnDchHitProducer::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnDchHitProducer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnDchHitProducer(void *p) {
      return  p ? new(p) ::BmnDchHitProducer : new ::BmnDchHitProducer;
   }
   static void *newArray_BmnDchHitProducer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnDchHitProducer[nElements] : new ::BmnDchHitProducer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnDchHitProducer(void *p) {
      delete ((::BmnDchHitProducer*)p);
   }
   static void deleteArray_BmnDchHitProducer(void *p) {
      delete [] ((::BmnDchHitProducer*)p);
   }
   static void destruct_BmnDchHitProducer(void *p) {
      typedef ::BmnDchHitProducer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnDchHitProducer

//______________________________________________________________________________
void BmnDchTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnDchTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnDchTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnDchTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnDchTrack(void *p) {
      return  p ? new(p) ::BmnDchTrack : new ::BmnDchTrack;
   }
   static void *newArray_BmnDchTrack(Long_t nElements, void *p) {
      return p ? new(p) ::BmnDchTrack[nElements] : new ::BmnDchTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnDchTrack(void *p) {
      delete ((::BmnDchTrack*)p);
   }
   static void deleteArray_BmnDchTrack(void *p) {
      delete [] ((::BmnDchTrack*)p);
   }
   static void destruct_BmnDchTrack(void *p) {
      typedef ::BmnDchTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnDchTrack

//______________________________________________________________________________
void BmnDchTrackFinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnDchTrackFinder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnDchTrackFinder::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnDchTrackFinder::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnDchTrackFinder(void *p) {
      return  p ? new(p) ::BmnDchTrackFinder : new ::BmnDchTrackFinder;
   }
   static void *newArray_BmnDchTrackFinder(Long_t nElements, void *p) {
      return p ? new(p) ::BmnDchTrackFinder[nElements] : new ::BmnDchTrackFinder[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnDchTrackFinder(void *p) {
      delete ((::BmnDchTrackFinder*)p);
   }
   static void deleteArray_BmnDchTrackFinder(void *p) {
      delete [] ((::BmnDchTrackFinder*)p);
   }
   static void destruct_BmnDchTrackFinder(void *p) {
      typedef ::BmnDchTrackFinder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnDchTrackFinder

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
  void TriggerDictionaryInitialization_G__DchDict_Impl() {
    static const char* headers[] = {
"BmnDch.h",
"BmnDchPoint.h",
"BmnDchContFact.h",
"BmnDchGeo.h",
"BmnDchGeoPar.h",
"BmnDchDigit.h",
"BmnDchHitOriginal.h",
"BmnDchHit.h",
"BmnDchHitProducer.h",
"BmnDchTrackFinder.h",
"BmnDchTrack.h",
"DCHgeometryconstants_bmn.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/base",
"/data/yaopeng/bmnroot_Yaopeng/base/data",
"/data/yaopeng/bmnroot_Yaopeng/base/math",
"/data/yaopeng/bmnroot_Yaopeng/detectors/dch",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/TGeant3",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/detectors/dch/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__DchDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$BmnDchPoint.h")))  __attribute__((annotate("$clingAutoload$BmnDch.h")))  BmnDchPoint;
class __attribute__((annotate("$clingAutoload$BmnDch.h")))  BmnDch;
class __attribute__((annotate(R"ATTRDUMP(Factory for all DCH parameter containers)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$BmnDchContFact.h")))  BmnDchContFact;
class __attribute__((annotate(R"ATTRDUMP(Class for DCH)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$BmnDchGeo.h")))  BmnDchGeo;
class __attribute__((annotate("$clingAutoload$BmnDchGeoPar.h")))  BmnDchGeoPar;
class __attribute__((annotate("$clingAutoload$BmnDchDigit.h")))  BmnDchDigit;
class __attribute__((annotate("$clingAutoload$BmnDchHitOriginal.h")))  BmnDchHitOriginal;
class __attribute__((annotate("$clingAutoload$BmnDchHit.h")))  BmnDchHit;
class __attribute__((annotate("$clingAutoload$BmnDchHitProducer.h")))  BmnDchHitProducer;
class __attribute__((annotate("$clingAutoload$BmnDchTrack.h")))  __attribute__((annotate("$clingAutoload$BmnDchTrackFinder.h")))  BmnDchTrack;
class __attribute__((annotate("$clingAutoload$BmnDchTrackFinder.h")))  BmnDchTrackFinder;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__DchDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "BmnDch.h"
#include "BmnDchPoint.h"
#include "BmnDchContFact.h"
#include "BmnDchGeo.h"
#include "BmnDchGeoPar.h"
#include "BmnDchDigit.h"
#include "BmnDchHitOriginal.h"
#include "BmnDchHit.h"
#include "BmnDchHitProducer.h"
#include "BmnDchTrackFinder.h"
#include "BmnDchTrack.h"
#include "DCHgeometryconstants_bmn.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BmnDch", payloadCode, "@",
"BmnDchContFact", payloadCode, "@",
"BmnDchDigit", payloadCode, "@",
"BmnDchGeo", payloadCode, "@",
"BmnDchGeoPar", payloadCode, "@",
"BmnDchHit", payloadCode, "@",
"BmnDchHitOriginal", payloadCode, "@",
"BmnDchHitProducer", payloadCode, "@",
"BmnDchPoint", payloadCode, "@",
"BmnDchTrack", payloadCode, "@",
"BmnDchTrackFinder", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__DchDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__DchDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__DchDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__DchDict() {
  TriggerDictionaryInitialization_G__DchDict_Impl();
}
