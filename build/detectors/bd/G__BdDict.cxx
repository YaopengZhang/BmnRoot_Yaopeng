// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIdetectorsdIbddIG__BdDict
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
#include "BmnBd.h"
#include "BmnBdPoint.h"
#include "BmnBdContFact.h"
#include "BmnBdGeo.h"
#include "BmnBdGeoPar.h"
#include "BmnBdHit.h"
#include "BmnBdHitProducer.h"
#include "BmnBdDigitizer.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BmnBdPoint(void *p = nullptr);
   static void *newArray_BmnBdPoint(Long_t size, void *p);
   static void delete_BmnBdPoint(void *p);
   static void deleteArray_BmnBdPoint(void *p);
   static void destruct_BmnBdPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnBdPoint*)
   {
      ::BmnBdPoint *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnBdPoint >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnBdPoint", ::BmnBdPoint::Class_Version(), "BmnBdPoint.h", 16,
                  typeid(::BmnBdPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnBdPoint::Dictionary, isa_proxy, 4,
                  sizeof(::BmnBdPoint) );
      instance.SetNew(&new_BmnBdPoint);
      instance.SetNewArray(&newArray_BmnBdPoint);
      instance.SetDelete(&delete_BmnBdPoint);
      instance.SetDeleteArray(&deleteArray_BmnBdPoint);
      instance.SetDestructor(&destruct_BmnBdPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnBdPoint*)
   {
      return GenerateInitInstanceLocal((::BmnBdPoint*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnBdPoint*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnBd(void *p = nullptr);
   static void *newArray_BmnBd(Long_t size, void *p);
   static void delete_BmnBd(void *p);
   static void deleteArray_BmnBd(void *p);
   static void destruct_BmnBd(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnBd*)
   {
      ::BmnBd *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnBd >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnBd", ::BmnBd::Class_Version(), "BmnBd.h", 8,
                  typeid(::BmnBd), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnBd::Dictionary, isa_proxy, 4,
                  sizeof(::BmnBd) );
      instance.SetNew(&new_BmnBd);
      instance.SetNewArray(&newArray_BmnBd);
      instance.SetDelete(&delete_BmnBd);
      instance.SetDeleteArray(&deleteArray_BmnBd);
      instance.SetDestructor(&destruct_BmnBd);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnBd*)
   {
      return GenerateInitInstanceLocal((::BmnBd*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnBd*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnBdContFact(void *p = nullptr);
   static void *newArray_BmnBdContFact(Long_t size, void *p);
   static void delete_BmnBdContFact(void *p);
   static void deleteArray_BmnBdContFact(void *p);
   static void destruct_BmnBdContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnBdContFact*)
   {
      ::BmnBdContFact *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnBdContFact >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnBdContFact", ::BmnBdContFact::Class_Version(), "BmnBdContFact.h", 9,
                  typeid(::BmnBdContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnBdContFact::Dictionary, isa_proxy, 4,
                  sizeof(::BmnBdContFact) );
      instance.SetNew(&new_BmnBdContFact);
      instance.SetNewArray(&newArray_BmnBdContFact);
      instance.SetDelete(&delete_BmnBdContFact);
      instance.SetDeleteArray(&deleteArray_BmnBdContFact);
      instance.SetDestructor(&destruct_BmnBdContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnBdContFact*)
   {
      return GenerateInitInstanceLocal((::BmnBdContFact*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnBdContFact*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnBdGeo(void *p = nullptr);
   static void *newArray_BmnBdGeo(Long_t size, void *p);
   static void delete_BmnBdGeo(void *p);
   static void deleteArray_BmnBdGeo(void *p);
   static void destruct_BmnBdGeo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnBdGeo*)
   {
      ::BmnBdGeo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnBdGeo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnBdGeo", ::BmnBdGeo::Class_Version(), "BmnBdGeo.h", 6,
                  typeid(::BmnBdGeo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnBdGeo::Dictionary, isa_proxy, 4,
                  sizeof(::BmnBdGeo) );
      instance.SetNew(&new_BmnBdGeo);
      instance.SetNewArray(&newArray_BmnBdGeo);
      instance.SetDelete(&delete_BmnBdGeo);
      instance.SetDeleteArray(&deleteArray_BmnBdGeo);
      instance.SetDestructor(&destruct_BmnBdGeo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnBdGeo*)
   {
      return GenerateInitInstanceLocal((::BmnBdGeo*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnBdGeo*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnBdGeoPar(void *p = nullptr);
   static void *newArray_BmnBdGeoPar(Long_t size, void *p);
   static void delete_BmnBdGeoPar(void *p);
   static void deleteArray_BmnBdGeoPar(void *p);
   static void destruct_BmnBdGeoPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnBdGeoPar*)
   {
      ::BmnBdGeoPar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnBdGeoPar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnBdGeoPar", ::BmnBdGeoPar::Class_Version(), "BmnBdGeoPar.h", 7,
                  typeid(::BmnBdGeoPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnBdGeoPar::Dictionary, isa_proxy, 4,
                  sizeof(::BmnBdGeoPar) );
      instance.SetNew(&new_BmnBdGeoPar);
      instance.SetNewArray(&newArray_BmnBdGeoPar);
      instance.SetDelete(&delete_BmnBdGeoPar);
      instance.SetDeleteArray(&deleteArray_BmnBdGeoPar);
      instance.SetDestructor(&destruct_BmnBdGeoPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnBdGeoPar*)
   {
      return GenerateInitInstanceLocal((::BmnBdGeoPar*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnBdGeoPar*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnBdHit(void *p = nullptr);
   static void *newArray_BmnBdHit(Long_t size, void *p);
   static void delete_BmnBdHit(void *p);
   static void deleteArray_BmnBdHit(void *p);
   static void destruct_BmnBdHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnBdHit*)
   {
      ::BmnBdHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnBdHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnBdHit", ::BmnBdHit::Class_Version(), "BmnBdHit.h", 21,
                  typeid(::BmnBdHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnBdHit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnBdHit) );
      instance.SetNew(&new_BmnBdHit);
      instance.SetNewArray(&newArray_BmnBdHit);
      instance.SetDelete(&delete_BmnBdHit);
      instance.SetDeleteArray(&deleteArray_BmnBdHit);
      instance.SetDestructor(&destruct_BmnBdHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnBdHit*)
   {
      return GenerateInitInstanceLocal((::BmnBdHit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnBdHit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnBdHitProducer(void *p = nullptr);
   static void *newArray_BmnBdHitProducer(Long_t size, void *p);
   static void delete_BmnBdHitProducer(void *p);
   static void deleteArray_BmnBdHitProducer(void *p);
   static void destruct_BmnBdHitProducer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnBdHitProducer*)
   {
      ::BmnBdHitProducer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnBdHitProducer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnBdHitProducer", ::BmnBdHitProducer::Class_Version(), "BmnBdHitProducer.h", 24,
                  typeid(::BmnBdHitProducer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnBdHitProducer::Dictionary, isa_proxy, 4,
                  sizeof(::BmnBdHitProducer) );
      instance.SetNew(&new_BmnBdHitProducer);
      instance.SetNewArray(&newArray_BmnBdHitProducer);
      instance.SetDelete(&delete_BmnBdHitProducer);
      instance.SetDeleteArray(&deleteArray_BmnBdHitProducer);
      instance.SetDestructor(&destruct_BmnBdHitProducer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnBdHitProducer*)
   {
      return GenerateInitInstanceLocal((::BmnBdHitProducer*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnBdHitProducer*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnBdDigitizer(void *p = nullptr);
   static void *newArray_BmnBdDigitizer(Long_t size, void *p);
   static void delete_BmnBdDigitizer(void *p);
   static void deleteArray_BmnBdDigitizer(void *p);
   static void destruct_BmnBdDigitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnBdDigitizer*)
   {
      ::BmnBdDigitizer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnBdDigitizer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnBdDigitizer", ::BmnBdDigitizer::Class_Version(), "BmnBdDigitizer.h", 11,
                  typeid(::BmnBdDigitizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnBdDigitizer::Dictionary, isa_proxy, 4,
                  sizeof(::BmnBdDigitizer) );
      instance.SetNew(&new_BmnBdDigitizer);
      instance.SetNewArray(&newArray_BmnBdDigitizer);
      instance.SetDelete(&delete_BmnBdDigitizer);
      instance.SetDeleteArray(&deleteArray_BmnBdDigitizer);
      instance.SetDestructor(&destruct_BmnBdDigitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnBdDigitizer*)
   {
      return GenerateInitInstanceLocal((::BmnBdDigitizer*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnBdDigitizer*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnBdPoint::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnBdPoint::Class_Name()
{
   return "BmnBdPoint";
}

//______________________________________________________________________________
const char *BmnBdPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBdPoint*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnBdPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBdPoint*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnBdPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBdPoint*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnBdPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBdPoint*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnBd::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnBd::Class_Name()
{
   return "BmnBd";
}

//______________________________________________________________________________
const char *BmnBd::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBd*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnBd::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBd*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnBd::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBd*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnBd::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBd*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnBdContFact::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnBdContFact::Class_Name()
{
   return "BmnBdContFact";
}

//______________________________________________________________________________
const char *BmnBdContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBdContFact*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnBdContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBdContFact*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnBdContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBdContFact*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnBdContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBdContFact*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnBdGeo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnBdGeo::Class_Name()
{
   return "BmnBdGeo";
}

//______________________________________________________________________________
const char *BmnBdGeo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBdGeo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnBdGeo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBdGeo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnBdGeo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBdGeo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnBdGeo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBdGeo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnBdGeoPar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnBdGeoPar::Class_Name()
{
   return "BmnBdGeoPar";
}

//______________________________________________________________________________
const char *BmnBdGeoPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBdGeoPar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnBdGeoPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBdGeoPar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnBdGeoPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBdGeoPar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnBdGeoPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBdGeoPar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnBdHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnBdHit::Class_Name()
{
   return "BmnBdHit";
}

//______________________________________________________________________________
const char *BmnBdHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBdHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnBdHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBdHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnBdHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBdHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnBdHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBdHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnBdHitProducer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnBdHitProducer::Class_Name()
{
   return "BmnBdHitProducer";
}

//______________________________________________________________________________
const char *BmnBdHitProducer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBdHitProducer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnBdHitProducer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBdHitProducer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnBdHitProducer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBdHitProducer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnBdHitProducer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBdHitProducer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnBdDigitizer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnBdDigitizer::Class_Name()
{
   return "BmnBdDigitizer";
}

//______________________________________________________________________________
const char *BmnBdDigitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBdDigitizer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnBdDigitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBdDigitizer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnBdDigitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBdDigitizer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnBdDigitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBdDigitizer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnBdPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnBdPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnBdPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnBdPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnBdPoint(void *p) {
      return  p ? new(p) ::BmnBdPoint : new ::BmnBdPoint;
   }
   static void *newArray_BmnBdPoint(Long_t nElements, void *p) {
      return p ? new(p) ::BmnBdPoint[nElements] : new ::BmnBdPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnBdPoint(void *p) {
      delete ((::BmnBdPoint*)p);
   }
   static void deleteArray_BmnBdPoint(void *p) {
      delete [] ((::BmnBdPoint*)p);
   }
   static void destruct_BmnBdPoint(void *p) {
      typedef ::BmnBdPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnBdPoint

//______________________________________________________________________________
void BmnBd::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnBd.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnBd::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnBd::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnBd(void *p) {
      return  p ? new(p) ::BmnBd : new ::BmnBd;
   }
   static void *newArray_BmnBd(Long_t nElements, void *p) {
      return p ? new(p) ::BmnBd[nElements] : new ::BmnBd[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnBd(void *p) {
      delete ((::BmnBd*)p);
   }
   static void deleteArray_BmnBd(void *p) {
      delete [] ((::BmnBd*)p);
   }
   static void destruct_BmnBd(void *p) {
      typedef ::BmnBd current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnBd

//______________________________________________________________________________
void BmnBdContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnBdContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnBdContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnBdContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnBdContFact(void *p) {
      return  p ? new(p) ::BmnBdContFact : new ::BmnBdContFact;
   }
   static void *newArray_BmnBdContFact(Long_t nElements, void *p) {
      return p ? new(p) ::BmnBdContFact[nElements] : new ::BmnBdContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnBdContFact(void *p) {
      delete ((::BmnBdContFact*)p);
   }
   static void deleteArray_BmnBdContFact(void *p) {
      delete [] ((::BmnBdContFact*)p);
   }
   static void destruct_BmnBdContFact(void *p) {
      typedef ::BmnBdContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnBdContFact

//______________________________________________________________________________
void BmnBdGeo::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnBdGeo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnBdGeo::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnBdGeo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnBdGeo(void *p) {
      return  p ? new(p) ::BmnBdGeo : new ::BmnBdGeo;
   }
   static void *newArray_BmnBdGeo(Long_t nElements, void *p) {
      return p ? new(p) ::BmnBdGeo[nElements] : new ::BmnBdGeo[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnBdGeo(void *p) {
      delete ((::BmnBdGeo*)p);
   }
   static void deleteArray_BmnBdGeo(void *p) {
      delete [] ((::BmnBdGeo*)p);
   }
   static void destruct_BmnBdGeo(void *p) {
      typedef ::BmnBdGeo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnBdGeo

//______________________________________________________________________________
void BmnBdGeoPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnBdGeoPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnBdGeoPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnBdGeoPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnBdGeoPar(void *p) {
      return  p ? new(p) ::BmnBdGeoPar : new ::BmnBdGeoPar;
   }
   static void *newArray_BmnBdGeoPar(Long_t nElements, void *p) {
      return p ? new(p) ::BmnBdGeoPar[nElements] : new ::BmnBdGeoPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnBdGeoPar(void *p) {
      delete ((::BmnBdGeoPar*)p);
   }
   static void deleteArray_BmnBdGeoPar(void *p) {
      delete [] ((::BmnBdGeoPar*)p);
   }
   static void destruct_BmnBdGeoPar(void *p) {
      typedef ::BmnBdGeoPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnBdGeoPar

//______________________________________________________________________________
void BmnBdHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnBdHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnBdHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnBdHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnBdHit(void *p) {
      return  p ? new(p) ::BmnBdHit : new ::BmnBdHit;
   }
   static void *newArray_BmnBdHit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnBdHit[nElements] : new ::BmnBdHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnBdHit(void *p) {
      delete ((::BmnBdHit*)p);
   }
   static void deleteArray_BmnBdHit(void *p) {
      delete [] ((::BmnBdHit*)p);
   }
   static void destruct_BmnBdHit(void *p) {
      typedef ::BmnBdHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnBdHit

//______________________________________________________________________________
void BmnBdHitProducer::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnBdHitProducer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnBdHitProducer::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnBdHitProducer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnBdHitProducer(void *p) {
      return  p ? new(p) ::BmnBdHitProducer : new ::BmnBdHitProducer;
   }
   static void *newArray_BmnBdHitProducer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnBdHitProducer[nElements] : new ::BmnBdHitProducer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnBdHitProducer(void *p) {
      delete ((::BmnBdHitProducer*)p);
   }
   static void deleteArray_BmnBdHitProducer(void *p) {
      delete [] ((::BmnBdHitProducer*)p);
   }
   static void destruct_BmnBdHitProducer(void *p) {
      typedef ::BmnBdHitProducer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnBdHitProducer

//______________________________________________________________________________
void BmnBdDigitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnBdDigitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnBdDigitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnBdDigitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnBdDigitizer(void *p) {
      return  p ? new(p) ::BmnBdDigitizer : new ::BmnBdDigitizer;
   }
   static void *newArray_BmnBdDigitizer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnBdDigitizer[nElements] : new ::BmnBdDigitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnBdDigitizer(void *p) {
      delete ((::BmnBdDigitizer*)p);
   }
   static void deleteArray_BmnBdDigitizer(void *p) {
      delete [] ((::BmnBdDigitizer*)p);
   }
   static void destruct_BmnBdDigitizer(void *p) {
      typedef ::BmnBdDigitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnBdDigitizer

namespace {
  void TriggerDictionaryInitialization_G__BdDict_Impl() {
    static const char* headers[] = {
"BmnBd.h",
"BmnBdPoint.h",
"BmnBdContFact.h",
"BmnBdGeo.h",
"BmnBdGeoPar.h",
"BmnBdHit.h",
"BmnBdHitProducer.h",
"BmnBdDigitizer.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/base",
"/data/yaopeng/bmnroot_Yaopeng/base/data",
"/data/yaopeng/bmnroot_Yaopeng/base/raw",
"/data/yaopeng/bmnroot_Yaopeng/detectors/bd",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/detectors/bd/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__BdDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$BmnBdPoint.h")))  __attribute__((annotate("$clingAutoload$BmnBd.h")))  BmnBdPoint;
class __attribute__((annotate("$clingAutoload$BmnBd.h")))  BmnBd;
class __attribute__((annotate(R"ATTRDUMP(Factory for all HYP parameter containers)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$BmnBdContFact.h")))  BmnBdContFact;
class __attribute__((annotate("$clingAutoload$BmnBdGeo.h")))  BmnBdGeo;
class __attribute__((annotate("$clingAutoload$BmnBdGeoPar.h")))  BmnBdGeoPar;
class __attribute__((annotate("$clingAutoload$BmnBdHit.h")))  BmnBdHit;
class __attribute__((annotate("$clingAutoload$BmnBdHitProducer.h")))  BmnBdHitProducer;
class __attribute__((annotate("$clingAutoload$BmnBdDigitizer.h")))  BmnBdDigitizer;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__BdDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "BmnBd.h"
#include "BmnBdPoint.h"
#include "BmnBdContFact.h"
#include "BmnBdGeo.h"
#include "BmnBdGeoPar.h"
#include "BmnBdHit.h"
#include "BmnBdHitProducer.h"
#include "BmnBdDigitizer.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BmnBd", payloadCode, "@",
"BmnBdContFact", payloadCode, "@",
"BmnBdDigitizer", payloadCode, "@",
"BmnBdGeo", payloadCode, "@",
"BmnBdGeoPar", payloadCode, "@",
"BmnBdHit", payloadCode, "@",
"BmnBdHitProducer", payloadCode, "@",
"BmnBdPoint", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__BdDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__BdDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__BdDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__BdDict() {
  TriggerDictionaryInitialization_G__BdDict_Impl();
}
