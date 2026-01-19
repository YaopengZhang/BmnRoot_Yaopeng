// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIdetectorsdItofdIG__TOFDict
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
#include "BmnTOF.h"
#include "BmnTOFPoint.h"
#include "BmnTof2Digit.h"
#include "BmnTOFContFact.h"
#include "BmnTOFGeo.h"
#include "BmnTOFGeoPar.h"
#include "BmnTofHit.h"
#include "BmnTofHitProducerIdeal.h"
#include "BmnTofGeoUtils.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BmnTOFPoint(void *p = nullptr);
   static void *newArray_BmnTOFPoint(Long_t size, void *p);
   static void delete_BmnTOFPoint(void *p);
   static void deleteArray_BmnTOFPoint(void *p);
   static void destruct_BmnTOFPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTOFPoint*)
   {
      ::BmnTOFPoint *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTOFPoint >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTOFPoint", ::BmnTOFPoint::Class_Version(), "BmnTOFPoint.h", 10,
                  typeid(::BmnTOFPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTOFPoint::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTOFPoint) );
      instance.SetNew(&new_BmnTOFPoint);
      instance.SetNewArray(&newArray_BmnTOFPoint);
      instance.SetDelete(&delete_BmnTOFPoint);
      instance.SetDeleteArray(&deleteArray_BmnTOFPoint);
      instance.SetDestructor(&destruct_BmnTOFPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTOFPoint*)
   {
      return GenerateInitInstanceLocal((::BmnTOFPoint*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTOFPoint*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTOF(void *p = nullptr);
   static void *newArray_BmnTOF(Long_t size, void *p);
   static void delete_BmnTOF(void *p);
   static void deleteArray_BmnTOF(void *p);
   static void destruct_BmnTOF(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTOF*)
   {
      ::BmnTOF *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTOF >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTOF", ::BmnTOF::Class_Version(), "BmnTOF.h", 15,
                  typeid(::BmnTOF), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTOF::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTOF) );
      instance.SetNew(&new_BmnTOF);
      instance.SetNewArray(&newArray_BmnTOF);
      instance.SetDelete(&delete_BmnTOF);
      instance.SetDeleteArray(&deleteArray_BmnTOF);
      instance.SetDestructor(&destruct_BmnTOF);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTOF*)
   {
      return GenerateInitInstanceLocal((::BmnTOF*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTOF*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTof2Digit(void *p = nullptr);
   static void *newArray_BmnTof2Digit(Long_t size, void *p);
   static void delete_BmnTof2Digit(void *p);
   static void deleteArray_BmnTof2Digit(void *p);
   static void destruct_BmnTof2Digit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTof2Digit*)
   {
      ::BmnTof2Digit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTof2Digit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTof2Digit", ::BmnTof2Digit::Class_Version(), "BmnTof2Digit.h", 6,
                  typeid(::BmnTof2Digit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTof2Digit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTof2Digit) );
      instance.SetNew(&new_BmnTof2Digit);
      instance.SetNewArray(&newArray_BmnTof2Digit);
      instance.SetDelete(&delete_BmnTof2Digit);
      instance.SetDeleteArray(&deleteArray_BmnTof2Digit);
      instance.SetDestructor(&destruct_BmnTof2Digit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTof2Digit*)
   {
      return GenerateInitInstanceLocal((::BmnTof2Digit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTof2Digit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTOFContFact(void *p = nullptr);
   static void *newArray_BmnTOFContFact(Long_t size, void *p);
   static void delete_BmnTOFContFact(void *p);
   static void deleteArray_BmnTOFContFact(void *p);
   static void destruct_BmnTOFContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTOFContFact*)
   {
      ::BmnTOFContFact *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTOFContFact >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTOFContFact", ::BmnTOFContFact::Class_Version(), "BmnTOFContFact.h", 10,
                  typeid(::BmnTOFContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTOFContFact::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTOFContFact) );
      instance.SetNew(&new_BmnTOFContFact);
      instance.SetNewArray(&newArray_BmnTOFContFact);
      instance.SetDelete(&delete_BmnTOFContFact);
      instance.SetDeleteArray(&deleteArray_BmnTOFContFact);
      instance.SetDestructor(&destruct_BmnTOFContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTOFContFact*)
   {
      return GenerateInitInstanceLocal((::BmnTOFContFact*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTOFContFact*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTOFGeo(void *p = nullptr);
   static void *newArray_BmnTOFGeo(Long_t size, void *p);
   static void delete_BmnTOFGeo(void *p);
   static void deleteArray_BmnTOFGeo(void *p);
   static void destruct_BmnTOFGeo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTOFGeo*)
   {
      ::BmnTOFGeo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTOFGeo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTOFGeo", ::BmnTOFGeo::Class_Version(), "BmnTOFGeo.h", 8,
                  typeid(::BmnTOFGeo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTOFGeo::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTOFGeo) );
      instance.SetNew(&new_BmnTOFGeo);
      instance.SetNewArray(&newArray_BmnTOFGeo);
      instance.SetDelete(&delete_BmnTOFGeo);
      instance.SetDeleteArray(&deleteArray_BmnTOFGeo);
      instance.SetDestructor(&destruct_BmnTOFGeo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTOFGeo*)
   {
      return GenerateInitInstanceLocal((::BmnTOFGeo*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTOFGeo*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTOFGeoPar(void *p = nullptr);
   static void *newArray_BmnTOFGeoPar(Long_t size, void *p);
   static void delete_BmnTOFGeoPar(void *p);
   static void deleteArray_BmnTOFGeoPar(void *p);
   static void destruct_BmnTOFGeoPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTOFGeoPar*)
   {
      ::BmnTOFGeoPar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTOFGeoPar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTOFGeoPar", ::BmnTOFGeoPar::Class_Version(), "BmnTOFGeoPar.h", 10,
                  typeid(::BmnTOFGeoPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTOFGeoPar::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTOFGeoPar) );
      instance.SetNew(&new_BmnTOFGeoPar);
      instance.SetNewArray(&newArray_BmnTOFGeoPar);
      instance.SetDelete(&delete_BmnTOFGeoPar);
      instance.SetDeleteArray(&deleteArray_BmnTOFGeoPar);
      instance.SetDestructor(&destruct_BmnTOFGeoPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTOFGeoPar*)
   {
      return GenerateInitInstanceLocal((::BmnTOFGeoPar*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTOFGeoPar*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTofHit(void *p = nullptr);
   static void *newArray_BmnTofHit(Long_t size, void *p);
   static void delete_BmnTofHit(void *p);
   static void deleteArray_BmnTofHit(void *p);
   static void destruct_BmnTofHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTofHit*)
   {
      ::BmnTofHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTofHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTofHit", ::BmnTofHit::Class_Version(), "BmnTofHit.h", 20,
                  typeid(::BmnTofHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTofHit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTofHit) );
      instance.SetNew(&new_BmnTofHit);
      instance.SetNewArray(&newArray_BmnTofHit);
      instance.SetDelete(&delete_BmnTofHit);
      instance.SetDeleteArray(&deleteArray_BmnTofHit);
      instance.SetDestructor(&destruct_BmnTofHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTofHit*)
   {
      return GenerateInitInstanceLocal((::BmnTofHit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTofHit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTofHitProducerIdeal(void *p = nullptr);
   static void *newArray_BmnTofHitProducerIdeal(Long_t size, void *p);
   static void delete_BmnTofHitProducerIdeal(void *p);
   static void deleteArray_BmnTofHitProducerIdeal(void *p);
   static void destruct_BmnTofHitProducerIdeal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTofHitProducerIdeal*)
   {
      ::BmnTofHitProducerIdeal *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTofHitProducerIdeal >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTofHitProducerIdeal", ::BmnTofHitProducerIdeal::Class_Version(), "BmnTofHitProducerIdeal.h", 14,
                  typeid(::BmnTofHitProducerIdeal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTofHitProducerIdeal::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTofHitProducerIdeal) );
      instance.SetNew(&new_BmnTofHitProducerIdeal);
      instance.SetNewArray(&newArray_BmnTofHitProducerIdeal);
      instance.SetDelete(&delete_BmnTofHitProducerIdeal);
      instance.SetDeleteArray(&deleteArray_BmnTofHitProducerIdeal);
      instance.SetDestructor(&destruct_BmnTofHitProducerIdeal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTofHitProducerIdeal*)
   {
      return GenerateInitInstanceLocal((::BmnTofHitProducerIdeal*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTofHitProducerIdeal*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnTOFPoint::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTOFPoint::Class_Name()
{
   return "BmnTOFPoint";
}

//______________________________________________________________________________
const char *BmnTOFPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOFPoint*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTOFPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOFPoint*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTOFPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOFPoint*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTOFPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOFPoint*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTOF::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTOF::Class_Name()
{
   return "BmnTOF";
}

//______________________________________________________________________________
const char *BmnTOF::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTOF::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTOF::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTOF::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTof2Digit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTof2Digit::Class_Name()
{
   return "BmnTof2Digit";
}

//______________________________________________________________________________
const char *BmnTof2Digit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTof2Digit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTof2Digit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTof2Digit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTof2Digit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTof2Digit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTof2Digit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTof2Digit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTOFContFact::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTOFContFact::Class_Name()
{
   return "BmnTOFContFact";
}

//______________________________________________________________________________
const char *BmnTOFContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOFContFact*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTOFContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOFContFact*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTOFContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOFContFact*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTOFContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOFContFact*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTOFGeo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTOFGeo::Class_Name()
{
   return "BmnTOFGeo";
}

//______________________________________________________________________________
const char *BmnTOFGeo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOFGeo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTOFGeo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOFGeo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTOFGeo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOFGeo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTOFGeo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOFGeo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTOFGeoPar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTOFGeoPar::Class_Name()
{
   return "BmnTOFGeoPar";
}

//______________________________________________________________________________
const char *BmnTOFGeoPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOFGeoPar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTOFGeoPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOFGeoPar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTOFGeoPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOFGeoPar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTOFGeoPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOFGeoPar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTofHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTofHit::Class_Name()
{
   return "BmnTofHit";
}

//______________________________________________________________________________
const char *BmnTofHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTofHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTofHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTofHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTofHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTofHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTofHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTofHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTofHitProducerIdeal::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTofHitProducerIdeal::Class_Name()
{
   return "BmnTofHitProducerIdeal";
}

//______________________________________________________________________________
const char *BmnTofHitProducerIdeal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTofHitProducerIdeal*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTofHitProducerIdeal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTofHitProducerIdeal*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTofHitProducerIdeal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTofHitProducerIdeal*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTofHitProducerIdeal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTofHitProducerIdeal*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnTOFPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTOFPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTOFPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTOFPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTOFPoint(void *p) {
      return  p ? new(p) ::BmnTOFPoint : new ::BmnTOFPoint;
   }
   static void *newArray_BmnTOFPoint(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTOFPoint[nElements] : new ::BmnTOFPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTOFPoint(void *p) {
      delete ((::BmnTOFPoint*)p);
   }
   static void deleteArray_BmnTOFPoint(void *p) {
      delete [] ((::BmnTOFPoint*)p);
   }
   static void destruct_BmnTOFPoint(void *p) {
      typedef ::BmnTOFPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTOFPoint

//______________________________________________________________________________
void BmnTOF::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTOF.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTOF::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTOF::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTOF(void *p) {
      return  p ? new(p) ::BmnTOF : new ::BmnTOF;
   }
   static void *newArray_BmnTOF(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTOF[nElements] : new ::BmnTOF[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTOF(void *p) {
      delete ((::BmnTOF*)p);
   }
   static void deleteArray_BmnTOF(void *p) {
      delete [] ((::BmnTOF*)p);
   }
   static void destruct_BmnTOF(void *p) {
      typedef ::BmnTOF current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTOF

//______________________________________________________________________________
void BmnTof2Digit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTof2Digit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTof2Digit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTof2Digit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTof2Digit(void *p) {
      return  p ? new(p) ::BmnTof2Digit : new ::BmnTof2Digit;
   }
   static void *newArray_BmnTof2Digit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTof2Digit[nElements] : new ::BmnTof2Digit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTof2Digit(void *p) {
      delete ((::BmnTof2Digit*)p);
   }
   static void deleteArray_BmnTof2Digit(void *p) {
      delete [] ((::BmnTof2Digit*)p);
   }
   static void destruct_BmnTof2Digit(void *p) {
      typedef ::BmnTof2Digit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTof2Digit

//______________________________________________________________________________
void BmnTOFContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTOFContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTOFContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTOFContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTOFContFact(void *p) {
      return  p ? new(p) ::BmnTOFContFact : new ::BmnTOFContFact;
   }
   static void *newArray_BmnTOFContFact(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTOFContFact[nElements] : new ::BmnTOFContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTOFContFact(void *p) {
      delete ((::BmnTOFContFact*)p);
   }
   static void deleteArray_BmnTOFContFact(void *p) {
      delete [] ((::BmnTOFContFact*)p);
   }
   static void destruct_BmnTOFContFact(void *p) {
      typedef ::BmnTOFContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTOFContFact

//______________________________________________________________________________
void BmnTOFGeo::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTOFGeo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTOFGeo::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTOFGeo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTOFGeo(void *p) {
      return  p ? new(p) ::BmnTOFGeo : new ::BmnTOFGeo;
   }
   static void *newArray_BmnTOFGeo(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTOFGeo[nElements] : new ::BmnTOFGeo[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTOFGeo(void *p) {
      delete ((::BmnTOFGeo*)p);
   }
   static void deleteArray_BmnTOFGeo(void *p) {
      delete [] ((::BmnTOFGeo*)p);
   }
   static void destruct_BmnTOFGeo(void *p) {
      typedef ::BmnTOFGeo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTOFGeo

//______________________________________________________________________________
void BmnTOFGeoPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTOFGeoPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTOFGeoPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTOFGeoPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTOFGeoPar(void *p) {
      return  p ? new(p) ::BmnTOFGeoPar : new ::BmnTOFGeoPar;
   }
   static void *newArray_BmnTOFGeoPar(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTOFGeoPar[nElements] : new ::BmnTOFGeoPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTOFGeoPar(void *p) {
      delete ((::BmnTOFGeoPar*)p);
   }
   static void deleteArray_BmnTOFGeoPar(void *p) {
      delete [] ((::BmnTOFGeoPar*)p);
   }
   static void destruct_BmnTOFGeoPar(void *p) {
      typedef ::BmnTOFGeoPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTOFGeoPar

//______________________________________________________________________________
void BmnTofHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTofHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTofHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTofHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTofHit(void *p) {
      return  p ? new(p) ::BmnTofHit : new ::BmnTofHit;
   }
   static void *newArray_BmnTofHit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTofHit[nElements] : new ::BmnTofHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTofHit(void *p) {
      delete ((::BmnTofHit*)p);
   }
   static void deleteArray_BmnTofHit(void *p) {
      delete [] ((::BmnTofHit*)p);
   }
   static void destruct_BmnTofHit(void *p) {
      typedef ::BmnTofHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTofHit

//______________________________________________________________________________
void BmnTofHitProducerIdeal::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTofHitProducerIdeal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTofHitProducerIdeal::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTofHitProducerIdeal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTofHitProducerIdeal(void *p) {
      return  p ? new(p) ::BmnTofHitProducerIdeal : new ::BmnTofHitProducerIdeal;
   }
   static void *newArray_BmnTofHitProducerIdeal(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTofHitProducerIdeal[nElements] : new ::BmnTofHitProducerIdeal[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTofHitProducerIdeal(void *p) {
      delete ((::BmnTofHitProducerIdeal*)p);
   }
   static void deleteArray_BmnTofHitProducerIdeal(void *p) {
      delete [] ((::BmnTofHitProducerIdeal*)p);
   }
   static void destruct_BmnTofHitProducerIdeal(void *p) {
      typedef ::BmnTofHitProducerIdeal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTofHitProducerIdeal

namespace {
  void TriggerDictionaryInitialization_G__TOFDict_Impl() {
    static const char* headers[] = {
"BmnTOF.h",
"BmnTOFPoint.h",
"BmnTof2Digit.h",
"BmnTOFContFact.h",
"BmnTOFGeo.h",
"BmnTOFGeoPar.h",
"BmnTofHit.h",
"BmnTofHitProducerIdeal.h",
"BmnTofGeoUtils.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/base",
"/data/yaopeng/bmnroot_Yaopeng/base/data",
"/data/yaopeng/bmnroot_Yaopeng/detectors/tof",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/detectors/tof/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__TOFDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$BmnTOFPoint.h")))  __attribute__((annotate("$clingAutoload$BmnTOF.h")))  BmnTOFPoint;
class __attribute__((annotate("$clingAutoload$BmnTOF.h")))  BmnTOF;
class __attribute__((annotate("$clingAutoload$BmnTof2Digit.h")))  BmnTof2Digit;
class __attribute__((annotate("$clingAutoload$BmnTOFContFact.h")))  BmnTOFContFact;
class __attribute__((annotate(R"ATTRDUMP(Class for Hyp)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$BmnTOFGeo.h")))  BmnTOFGeo;
class __attribute__((annotate("$clingAutoload$BmnTOFGeoPar.h")))  BmnTOFGeoPar;
class __attribute__((annotate("$clingAutoload$BmnTofHit.h")))  BmnTofHit;
class __attribute__((annotate("$clingAutoload$BmnTofHitProducerIdeal.h")))  BmnTofHitProducerIdeal;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__TOFDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "BmnTOF.h"
#include "BmnTOFPoint.h"
#include "BmnTof2Digit.h"
#include "BmnTOFContFact.h"
#include "BmnTOFGeo.h"
#include "BmnTOFGeoPar.h"
#include "BmnTofHit.h"
#include "BmnTofHitProducerIdeal.h"
#include "BmnTofGeoUtils.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BmnTOF", payloadCode, "@",
"BmnTOFContFact", payloadCode, "@",
"BmnTOFGeo", payloadCode, "@",
"BmnTOFGeoPar", payloadCode, "@",
"BmnTOFPoint", payloadCode, "@",
"BmnTof2Digit", payloadCode, "@",
"BmnTofHit", payloadCode, "@",
"BmnTofHitProducerIdeal", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__TOFDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__TOFDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__TOFDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__TOFDict() {
  TriggerDictionaryInitialization_G__TOFDict_Impl();
}
