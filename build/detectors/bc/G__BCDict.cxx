// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIdetectorsdIbcdIG__BCDict
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
#include "BmnBC.h"
#include "BmnBCPoint.h"
#include "BmnBCContFact.h"
#include "BmnBCGeo.h"
#include "BmnBCGeoPar.h"
#include "BmnBCHit.h"
#include "BmnBCHitProducer.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BmnBCGeoPar(void *p = nullptr);
   static void *newArray_BmnBCGeoPar(Long_t size, void *p);
   static void delete_BmnBCGeoPar(void *p);
   static void deleteArray_BmnBCGeoPar(void *p);
   static void destruct_BmnBCGeoPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnBCGeoPar*)
   {
      ::BmnBCGeoPar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnBCGeoPar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnBCGeoPar", ::BmnBCGeoPar::Class_Version(), "BmnBCGeoPar.h", 7,
                  typeid(::BmnBCGeoPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnBCGeoPar::Dictionary, isa_proxy, 4,
                  sizeof(::BmnBCGeoPar) );
      instance.SetNew(&new_BmnBCGeoPar);
      instance.SetNewArray(&newArray_BmnBCGeoPar);
      instance.SetDelete(&delete_BmnBCGeoPar);
      instance.SetDeleteArray(&deleteArray_BmnBCGeoPar);
      instance.SetDestructor(&destruct_BmnBCGeoPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnBCGeoPar*)
   {
      return GenerateInitInstanceLocal((::BmnBCGeoPar*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnBCGeoPar*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnBCPoint(void *p = nullptr);
   static void *newArray_BmnBCPoint(Long_t size, void *p);
   static void delete_BmnBCPoint(void *p);
   static void deleteArray_BmnBCPoint(void *p);
   static void destruct_BmnBCPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnBCPoint*)
   {
      ::BmnBCPoint *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnBCPoint >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnBCPoint", ::BmnBCPoint::Class_Version(), "BmnBCPoint.h", 20,
                  typeid(::BmnBCPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnBCPoint::Dictionary, isa_proxy, 4,
                  sizeof(::BmnBCPoint) );
      instance.SetNew(&new_BmnBCPoint);
      instance.SetNewArray(&newArray_BmnBCPoint);
      instance.SetDelete(&delete_BmnBCPoint);
      instance.SetDeleteArray(&deleteArray_BmnBCPoint);
      instance.SetDestructor(&destruct_BmnBCPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnBCPoint*)
   {
      return GenerateInitInstanceLocal((::BmnBCPoint*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnBCPoint*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnBC(void *p = nullptr);
   static void *newArray_BmnBC(Long_t size, void *p);
   static void delete_BmnBC(void *p);
   static void deleteArray_BmnBC(void *p);
   static void destruct_BmnBC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnBC*)
   {
      ::BmnBC *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnBC >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnBC", ::BmnBC::Class_Version(), "BmnBC.h", 25,
                  typeid(::BmnBC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnBC::Dictionary, isa_proxy, 4,
                  sizeof(::BmnBC) );
      instance.SetNew(&new_BmnBC);
      instance.SetNewArray(&newArray_BmnBC);
      instance.SetDelete(&delete_BmnBC);
      instance.SetDeleteArray(&deleteArray_BmnBC);
      instance.SetDestructor(&destruct_BmnBC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnBC*)
   {
      return GenerateInitInstanceLocal((::BmnBC*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnBC*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnBCContFact(void *p = nullptr);
   static void *newArray_BmnBCContFact(Long_t size, void *p);
   static void delete_BmnBCContFact(void *p);
   static void deleteArray_BmnBCContFact(void *p);
   static void destruct_BmnBCContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnBCContFact*)
   {
      ::BmnBCContFact *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnBCContFact >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnBCContFact", ::BmnBCContFact::Class_Version(), "BmnBCContFact.h", 13,
                  typeid(::BmnBCContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnBCContFact::Dictionary, isa_proxy, 4,
                  sizeof(::BmnBCContFact) );
      instance.SetNew(&new_BmnBCContFact);
      instance.SetNewArray(&newArray_BmnBCContFact);
      instance.SetDelete(&delete_BmnBCContFact);
      instance.SetDeleteArray(&deleteArray_BmnBCContFact);
      instance.SetDestructor(&destruct_BmnBCContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnBCContFact*)
   {
      return GenerateInitInstanceLocal((::BmnBCContFact*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnBCContFact*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnBCGeo(void *p = nullptr);
   static void *newArray_BmnBCGeo(Long_t size, void *p);
   static void delete_BmnBCGeo(void *p);
   static void deleteArray_BmnBCGeo(void *p);
   static void destruct_BmnBCGeo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnBCGeo*)
   {
      ::BmnBCGeo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnBCGeo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnBCGeo", ::BmnBCGeo::Class_Version(), "BmnBCGeo.h", 6,
                  typeid(::BmnBCGeo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnBCGeo::Dictionary, isa_proxy, 4,
                  sizeof(::BmnBCGeo) );
      instance.SetNew(&new_BmnBCGeo);
      instance.SetNewArray(&newArray_BmnBCGeo);
      instance.SetDelete(&delete_BmnBCGeo);
      instance.SetDeleteArray(&deleteArray_BmnBCGeo);
      instance.SetDestructor(&destruct_BmnBCGeo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnBCGeo*)
   {
      return GenerateInitInstanceLocal((::BmnBCGeo*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnBCGeo*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnBCHit(void *p = nullptr);
   static void *newArray_BmnBCHit(Long_t size, void *p);
   static void delete_BmnBCHit(void *p);
   static void deleteArray_BmnBCHit(void *p);
   static void destruct_BmnBCHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnBCHit*)
   {
      ::BmnBCHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnBCHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnBCHit", ::BmnBCHit::Class_Version(), "BmnBCHit.h", 7,
                  typeid(::BmnBCHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnBCHit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnBCHit) );
      instance.SetNew(&new_BmnBCHit);
      instance.SetNewArray(&newArray_BmnBCHit);
      instance.SetDelete(&delete_BmnBCHit);
      instance.SetDeleteArray(&deleteArray_BmnBCHit);
      instance.SetDestructor(&destruct_BmnBCHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnBCHit*)
   {
      return GenerateInitInstanceLocal((::BmnBCHit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnBCHit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnBCHitProducer(void *p = nullptr);
   static void *newArray_BmnBCHitProducer(Long_t size, void *p);
   static void delete_BmnBCHitProducer(void *p);
   static void deleteArray_BmnBCHitProducer(void *p);
   static void destruct_BmnBCHitProducer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnBCHitProducer*)
   {
      ::BmnBCHitProducer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnBCHitProducer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnBCHitProducer", ::BmnBCHitProducer::Class_Version(), "BmnBCHitProducer.h", 17,
                  typeid(::BmnBCHitProducer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnBCHitProducer::Dictionary, isa_proxy, 4,
                  sizeof(::BmnBCHitProducer) );
      instance.SetNew(&new_BmnBCHitProducer);
      instance.SetNewArray(&newArray_BmnBCHitProducer);
      instance.SetDelete(&delete_BmnBCHitProducer);
      instance.SetDeleteArray(&deleteArray_BmnBCHitProducer);
      instance.SetDestructor(&destruct_BmnBCHitProducer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnBCHitProducer*)
   {
      return GenerateInitInstanceLocal((::BmnBCHitProducer*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnBCHitProducer*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnBCGeoPar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnBCGeoPar::Class_Name()
{
   return "BmnBCGeoPar";
}

//______________________________________________________________________________
const char *BmnBCGeoPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBCGeoPar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnBCGeoPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBCGeoPar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnBCGeoPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBCGeoPar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnBCGeoPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBCGeoPar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnBCPoint::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnBCPoint::Class_Name()
{
   return "BmnBCPoint";
}

//______________________________________________________________________________
const char *BmnBCPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBCPoint*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnBCPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBCPoint*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnBCPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBCPoint*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnBCPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBCPoint*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnBC::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnBC::Class_Name()
{
   return "BmnBC";
}

//______________________________________________________________________________
const char *BmnBC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBC*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnBC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBC*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnBC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBC*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnBC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBC*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnBCContFact::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnBCContFact::Class_Name()
{
   return "BmnBCContFact";
}

//______________________________________________________________________________
const char *BmnBCContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBCContFact*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnBCContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBCContFact*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnBCContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBCContFact*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnBCContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBCContFact*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnBCGeo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnBCGeo::Class_Name()
{
   return "BmnBCGeo";
}

//______________________________________________________________________________
const char *BmnBCGeo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBCGeo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnBCGeo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBCGeo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnBCGeo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBCGeo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnBCGeo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBCGeo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnBCHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnBCHit::Class_Name()
{
   return "BmnBCHit";
}

//______________________________________________________________________________
const char *BmnBCHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBCHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnBCHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBCHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnBCHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBCHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnBCHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBCHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnBCHitProducer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnBCHitProducer::Class_Name()
{
   return "BmnBCHitProducer";
}

//______________________________________________________________________________
const char *BmnBCHitProducer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBCHitProducer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnBCHitProducer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBCHitProducer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnBCHitProducer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBCHitProducer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnBCHitProducer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBCHitProducer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnBCGeoPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnBCGeoPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnBCGeoPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnBCGeoPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnBCGeoPar(void *p) {
      return  p ? new(p) ::BmnBCGeoPar : new ::BmnBCGeoPar;
   }
   static void *newArray_BmnBCGeoPar(Long_t nElements, void *p) {
      return p ? new(p) ::BmnBCGeoPar[nElements] : new ::BmnBCGeoPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnBCGeoPar(void *p) {
      delete ((::BmnBCGeoPar*)p);
   }
   static void deleteArray_BmnBCGeoPar(void *p) {
      delete [] ((::BmnBCGeoPar*)p);
   }
   static void destruct_BmnBCGeoPar(void *p) {
      typedef ::BmnBCGeoPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnBCGeoPar

//______________________________________________________________________________
void BmnBCPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnBCPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnBCPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnBCPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnBCPoint(void *p) {
      return  p ? new(p) ::BmnBCPoint : new ::BmnBCPoint;
   }
   static void *newArray_BmnBCPoint(Long_t nElements, void *p) {
      return p ? new(p) ::BmnBCPoint[nElements] : new ::BmnBCPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnBCPoint(void *p) {
      delete ((::BmnBCPoint*)p);
   }
   static void deleteArray_BmnBCPoint(void *p) {
      delete [] ((::BmnBCPoint*)p);
   }
   static void destruct_BmnBCPoint(void *p) {
      typedef ::BmnBCPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnBCPoint

//______________________________________________________________________________
void BmnBC::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnBC.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnBC::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnBC::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnBC(void *p) {
      return  p ? new(p) ::BmnBC : new ::BmnBC;
   }
   static void *newArray_BmnBC(Long_t nElements, void *p) {
      return p ? new(p) ::BmnBC[nElements] : new ::BmnBC[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnBC(void *p) {
      delete ((::BmnBC*)p);
   }
   static void deleteArray_BmnBC(void *p) {
      delete [] ((::BmnBC*)p);
   }
   static void destruct_BmnBC(void *p) {
      typedef ::BmnBC current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnBC

//______________________________________________________________________________
void BmnBCContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnBCContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnBCContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnBCContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnBCContFact(void *p) {
      return  p ? new(p) ::BmnBCContFact : new ::BmnBCContFact;
   }
   static void *newArray_BmnBCContFact(Long_t nElements, void *p) {
      return p ? new(p) ::BmnBCContFact[nElements] : new ::BmnBCContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnBCContFact(void *p) {
      delete ((::BmnBCContFact*)p);
   }
   static void deleteArray_BmnBCContFact(void *p) {
      delete [] ((::BmnBCContFact*)p);
   }
   static void destruct_BmnBCContFact(void *p) {
      typedef ::BmnBCContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnBCContFact

//______________________________________________________________________________
void BmnBCGeo::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnBCGeo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnBCGeo::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnBCGeo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnBCGeo(void *p) {
      return  p ? new(p) ::BmnBCGeo : new ::BmnBCGeo;
   }
   static void *newArray_BmnBCGeo(Long_t nElements, void *p) {
      return p ? new(p) ::BmnBCGeo[nElements] : new ::BmnBCGeo[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnBCGeo(void *p) {
      delete ((::BmnBCGeo*)p);
   }
   static void deleteArray_BmnBCGeo(void *p) {
      delete [] ((::BmnBCGeo*)p);
   }
   static void destruct_BmnBCGeo(void *p) {
      typedef ::BmnBCGeo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnBCGeo

//______________________________________________________________________________
void BmnBCHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnBCHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnBCHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnBCHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnBCHit(void *p) {
      return  p ? new(p) ::BmnBCHit : new ::BmnBCHit;
   }
   static void *newArray_BmnBCHit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnBCHit[nElements] : new ::BmnBCHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnBCHit(void *p) {
      delete ((::BmnBCHit*)p);
   }
   static void deleteArray_BmnBCHit(void *p) {
      delete [] ((::BmnBCHit*)p);
   }
   static void destruct_BmnBCHit(void *p) {
      typedef ::BmnBCHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnBCHit

//______________________________________________________________________________
void BmnBCHitProducer::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnBCHitProducer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnBCHitProducer::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnBCHitProducer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnBCHitProducer(void *p) {
      return  p ? new(p) ::BmnBCHitProducer : new ::BmnBCHitProducer;
   }
   static void *newArray_BmnBCHitProducer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnBCHitProducer[nElements] : new ::BmnBCHitProducer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnBCHitProducer(void *p) {
      delete ((::BmnBCHitProducer*)p);
   }
   static void deleteArray_BmnBCHitProducer(void *p) {
      delete [] ((::BmnBCHitProducer*)p);
   }
   static void destruct_BmnBCHitProducer(void *p) {
      typedef ::BmnBCHitProducer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnBCHitProducer

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

namespace {
  void TriggerDictionaryInitialization_G__BCDict_Impl() {
    static const char* headers[] = {
"BmnBC.h",
"BmnBCPoint.h",
"BmnBCContFact.h",
"BmnBCGeo.h",
"BmnBCGeoPar.h",
"BmnBCHit.h",
"BmnBCHitProducer.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/base",
"/data/yaopeng/bmnroot_Yaopeng/base/data",
"/data/yaopeng/bmnroot_Yaopeng/detectors/bc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/detectors/bc/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__BCDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$BmnBCGeoPar.h")))  __attribute__((annotate("$clingAutoload$BmnBC.h")))  BmnBCGeoPar;
class __attribute__((annotate("$clingAutoload$BmnBCPoint.h")))  __attribute__((annotate("$clingAutoload$BmnBC.h")))  BmnBCPoint;
class __attribute__((annotate("$clingAutoload$BmnBC.h")))  BmnBC;
class __attribute__((annotate(R"ATTRDUMP(Factory for all HYP parameter containers)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$BmnBCContFact.h")))  BmnBCContFact;
class __attribute__((annotate(R"ATTRDUMP(Class for Hyp)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$BmnBCGeo.h")))  BmnBCGeo;
class __attribute__((annotate("$clingAutoload$BmnBCHit.h")))  BmnBCHit;
class __attribute__((annotate("$clingAutoload$BmnBCHitProducer.h")))  BmnBCHitProducer;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__BCDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "BmnBC.h"
#include "BmnBCPoint.h"
#include "BmnBCContFact.h"
#include "BmnBCGeo.h"
#include "BmnBCGeoPar.h"
#include "BmnBCHit.h"
#include "BmnBCHitProducer.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BmnBC", payloadCode, "@",
"BmnBCContFact", payloadCode, "@",
"BmnBCGeo", payloadCode, "@",
"BmnBCGeoPar", payloadCode, "@",
"BmnBCHit", payloadCode, "@",
"BmnBCHitProducer", payloadCode, "@",
"BmnBCPoint", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__BCDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__BCDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__BCDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__BCDict() {
  TriggerDictionaryInitialization_G__BCDict_Impl();
}
