// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIdetectorsdIecaldIG__EcalDict
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
#include "BmnEcal.h"
#include "BmnEcalPoint.h"
#include "BmnEcalContFact.h"
#include "BmnEcalGeo.h"
#include "BmnEcalGeoPar.h"
#include "BmnECALDigit.h"
#include "BmnEcalDigitizer.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BmnEcalPoint(void *p = nullptr);
   static void *newArray_BmnEcalPoint(Long_t size, void *p);
   static void delete_BmnEcalPoint(void *p);
   static void deleteArray_BmnEcalPoint(void *p);
   static void destruct_BmnEcalPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnEcalPoint*)
   {
      ::BmnEcalPoint *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnEcalPoint >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnEcalPoint", ::BmnEcalPoint::Class_Version(), "BmnEcalPoint.h", 17,
                  typeid(::BmnEcalPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnEcalPoint::Dictionary, isa_proxy, 4,
                  sizeof(::BmnEcalPoint) );
      instance.SetNew(&new_BmnEcalPoint);
      instance.SetNewArray(&newArray_BmnEcalPoint);
      instance.SetDelete(&delete_BmnEcalPoint);
      instance.SetDeleteArray(&deleteArray_BmnEcalPoint);
      instance.SetDestructor(&destruct_BmnEcalPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnEcalPoint*)
   {
      return GenerateInitInstanceLocal((::BmnEcalPoint*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnEcalPoint*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnEcalGeoPar(void *p = nullptr);
   static void *newArray_BmnEcalGeoPar(Long_t size, void *p);
   static void delete_BmnEcalGeoPar(void *p);
   static void deleteArray_BmnEcalGeoPar(void *p);
   static void destruct_BmnEcalGeoPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnEcalGeoPar*)
   {
      ::BmnEcalGeoPar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnEcalGeoPar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnEcalGeoPar", ::BmnEcalGeoPar::Class_Version(), "BmnEcalGeoPar.h", 17,
                  typeid(::BmnEcalGeoPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnEcalGeoPar::Dictionary, isa_proxy, 4,
                  sizeof(::BmnEcalGeoPar) );
      instance.SetNew(&new_BmnEcalGeoPar);
      instance.SetNewArray(&newArray_BmnEcalGeoPar);
      instance.SetDelete(&delete_BmnEcalGeoPar);
      instance.SetDeleteArray(&deleteArray_BmnEcalGeoPar);
      instance.SetDestructor(&destruct_BmnEcalGeoPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnEcalGeoPar*)
   {
      return GenerateInitInstanceLocal((::BmnEcalGeoPar*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnEcalGeoPar*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnEcal(void *p = nullptr);
   static void *newArray_BmnEcal(Long_t size, void *p);
   static void delete_BmnEcal(void *p);
   static void deleteArray_BmnEcal(void *p);
   static void destruct_BmnEcal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnEcal*)
   {
      ::BmnEcal *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnEcal >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnEcal", ::BmnEcal::Class_Version(), "BmnEcal.h", 24,
                  typeid(::BmnEcal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnEcal::Dictionary, isa_proxy, 4,
                  sizeof(::BmnEcal) );
      instance.SetNew(&new_BmnEcal);
      instance.SetNewArray(&newArray_BmnEcal);
      instance.SetDelete(&delete_BmnEcal);
      instance.SetDeleteArray(&deleteArray_BmnEcal);
      instance.SetDestructor(&destruct_BmnEcal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnEcal*)
   {
      return GenerateInitInstanceLocal((::BmnEcal*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnEcal*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnEcalContFact(void *p = nullptr);
   static void *newArray_BmnEcalContFact(Long_t size, void *p);
   static void delete_BmnEcalContFact(void *p);
   static void deleteArray_BmnEcalContFact(void *p);
   static void destruct_BmnEcalContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnEcalContFact*)
   {
      ::BmnEcalContFact *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnEcalContFact >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnEcalContFact", ::BmnEcalContFact::Class_Version(), "BmnEcalContFact.h", 13,
                  typeid(::BmnEcalContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnEcalContFact::Dictionary, isa_proxy, 4,
                  sizeof(::BmnEcalContFact) );
      instance.SetNew(&new_BmnEcalContFact);
      instance.SetNewArray(&newArray_BmnEcalContFact);
      instance.SetDelete(&delete_BmnEcalContFact);
      instance.SetDeleteArray(&deleteArray_BmnEcalContFact);
      instance.SetDestructor(&destruct_BmnEcalContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnEcalContFact*)
   {
      return GenerateInitInstanceLocal((::BmnEcalContFact*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnEcalContFact*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnEcalGeo(void *p = nullptr);
   static void *newArray_BmnEcalGeo(Long_t size, void *p);
   static void delete_BmnEcalGeo(void *p);
   static void deleteArray_BmnEcalGeo(void *p);
   static void destruct_BmnEcalGeo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnEcalGeo*)
   {
      ::BmnEcalGeo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnEcalGeo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnEcalGeo", ::BmnEcalGeo::Class_Version(), "BmnEcalGeo.h", 16,
                  typeid(::BmnEcalGeo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnEcalGeo::Dictionary, isa_proxy, 4,
                  sizeof(::BmnEcalGeo) );
      instance.SetNew(&new_BmnEcalGeo);
      instance.SetNewArray(&newArray_BmnEcalGeo);
      instance.SetDelete(&delete_BmnEcalGeo);
      instance.SetDeleteArray(&deleteArray_BmnEcalGeo);
      instance.SetDestructor(&destruct_BmnEcalGeo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnEcalGeo*)
   {
      return GenerateInitInstanceLocal((::BmnEcalGeo*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnEcalGeo*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnECALDigit(void *p = nullptr);
   static void *newArray_BmnECALDigit(Long_t size, void *p);
   static void delete_BmnECALDigit(void *p);
   static void deleteArray_BmnECALDigit(void *p);
   static void destruct_BmnECALDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnECALDigit*)
   {
      ::BmnECALDigit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnECALDigit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnECALDigit", ::BmnECALDigit::Class_Version(), "BmnECALDigit.h", 45,
                  typeid(::BmnECALDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnECALDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnECALDigit) );
      instance.SetNew(&new_BmnECALDigit);
      instance.SetNewArray(&newArray_BmnECALDigit);
      instance.SetDelete(&delete_BmnECALDigit);
      instance.SetDeleteArray(&deleteArray_BmnECALDigit);
      instance.SetDestructor(&destruct_BmnECALDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnECALDigit*)
   {
      return GenerateInitInstanceLocal((::BmnECALDigit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnECALDigit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnEcalDigitizer(void *p = nullptr);
   static void *newArray_BmnEcalDigitizer(Long_t size, void *p);
   static void delete_BmnEcalDigitizer(void *p);
   static void deleteArray_BmnEcalDigitizer(void *p);
   static void destruct_BmnEcalDigitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnEcalDigitizer*)
   {
      ::BmnEcalDigitizer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnEcalDigitizer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnEcalDigitizer", ::BmnEcalDigitizer::Class_Version(), "BmnEcalDigitizer.h", 17,
                  typeid(::BmnEcalDigitizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnEcalDigitizer::Dictionary, isa_proxy, 4,
                  sizeof(::BmnEcalDigitizer) );
      instance.SetNew(&new_BmnEcalDigitizer);
      instance.SetNewArray(&newArray_BmnEcalDigitizer);
      instance.SetDelete(&delete_BmnEcalDigitizer);
      instance.SetDeleteArray(&deleteArray_BmnEcalDigitizer);
      instance.SetDestructor(&destruct_BmnEcalDigitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnEcalDigitizer*)
   {
      return GenerateInitInstanceLocal((::BmnEcalDigitizer*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnEcalDigitizer*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnEcalPoint::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnEcalPoint::Class_Name()
{
   return "BmnEcalPoint";
}

//______________________________________________________________________________
const char *BmnEcalPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnEcalPoint*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnEcalPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnEcalPoint*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnEcalPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnEcalPoint*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnEcalPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnEcalPoint*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnEcalGeoPar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnEcalGeoPar::Class_Name()
{
   return "BmnEcalGeoPar";
}

//______________________________________________________________________________
const char *BmnEcalGeoPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnEcalGeoPar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnEcalGeoPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnEcalGeoPar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnEcalGeoPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnEcalGeoPar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnEcalGeoPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnEcalGeoPar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnEcal::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnEcal::Class_Name()
{
   return "BmnEcal";
}

//______________________________________________________________________________
const char *BmnEcal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnEcal*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnEcal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnEcal*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnEcal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnEcal*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnEcal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnEcal*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnEcalContFact::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnEcalContFact::Class_Name()
{
   return "BmnEcalContFact";
}

//______________________________________________________________________________
const char *BmnEcalContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnEcalContFact*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnEcalContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnEcalContFact*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnEcalContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnEcalContFact*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnEcalContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnEcalContFact*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnEcalGeo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnEcalGeo::Class_Name()
{
   return "BmnEcalGeo";
}

//______________________________________________________________________________
const char *BmnEcalGeo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnEcalGeo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnEcalGeo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnEcalGeo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnEcalGeo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnEcalGeo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnEcalGeo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnEcalGeo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnECALDigit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnECALDigit::Class_Name()
{
   return "BmnECALDigit";
}

//______________________________________________________________________________
const char *BmnECALDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnECALDigit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnECALDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnECALDigit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnECALDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnECALDigit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnECALDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnECALDigit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnEcalDigitizer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnEcalDigitizer::Class_Name()
{
   return "BmnEcalDigitizer";
}

//______________________________________________________________________________
const char *BmnEcalDigitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnEcalDigitizer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnEcalDigitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnEcalDigitizer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnEcalDigitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnEcalDigitizer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnEcalDigitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnEcalDigitizer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnEcalPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnEcalPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnEcalPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnEcalPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnEcalPoint(void *p) {
      return  p ? new(p) ::BmnEcalPoint : new ::BmnEcalPoint;
   }
   static void *newArray_BmnEcalPoint(Long_t nElements, void *p) {
      return p ? new(p) ::BmnEcalPoint[nElements] : new ::BmnEcalPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnEcalPoint(void *p) {
      delete ((::BmnEcalPoint*)p);
   }
   static void deleteArray_BmnEcalPoint(void *p) {
      delete [] ((::BmnEcalPoint*)p);
   }
   static void destruct_BmnEcalPoint(void *p) {
      typedef ::BmnEcalPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnEcalPoint

//______________________________________________________________________________
void BmnEcalGeoPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnEcalGeoPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnEcalGeoPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnEcalGeoPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnEcalGeoPar(void *p) {
      return  p ? new(p) ::BmnEcalGeoPar : new ::BmnEcalGeoPar;
   }
   static void *newArray_BmnEcalGeoPar(Long_t nElements, void *p) {
      return p ? new(p) ::BmnEcalGeoPar[nElements] : new ::BmnEcalGeoPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnEcalGeoPar(void *p) {
      delete ((::BmnEcalGeoPar*)p);
   }
   static void deleteArray_BmnEcalGeoPar(void *p) {
      delete [] ((::BmnEcalGeoPar*)p);
   }
   static void destruct_BmnEcalGeoPar(void *p) {
      typedef ::BmnEcalGeoPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnEcalGeoPar

//______________________________________________________________________________
void BmnEcal::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnEcal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnEcal::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnEcal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnEcal(void *p) {
      return  p ? new(p) ::BmnEcal : new ::BmnEcal;
   }
   static void *newArray_BmnEcal(Long_t nElements, void *p) {
      return p ? new(p) ::BmnEcal[nElements] : new ::BmnEcal[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnEcal(void *p) {
      delete ((::BmnEcal*)p);
   }
   static void deleteArray_BmnEcal(void *p) {
      delete [] ((::BmnEcal*)p);
   }
   static void destruct_BmnEcal(void *p) {
      typedef ::BmnEcal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnEcal

//______________________________________________________________________________
void BmnEcalContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnEcalContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnEcalContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnEcalContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnEcalContFact(void *p) {
      return  p ? new(p) ::BmnEcalContFact : new ::BmnEcalContFact;
   }
   static void *newArray_BmnEcalContFact(Long_t nElements, void *p) {
      return p ? new(p) ::BmnEcalContFact[nElements] : new ::BmnEcalContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnEcalContFact(void *p) {
      delete ((::BmnEcalContFact*)p);
   }
   static void deleteArray_BmnEcalContFact(void *p) {
      delete [] ((::BmnEcalContFact*)p);
   }
   static void destruct_BmnEcalContFact(void *p) {
      typedef ::BmnEcalContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnEcalContFact

//______________________________________________________________________________
void BmnEcalGeo::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnEcalGeo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnEcalGeo::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnEcalGeo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnEcalGeo(void *p) {
      return  p ? new(p) ::BmnEcalGeo : new ::BmnEcalGeo;
   }
   static void *newArray_BmnEcalGeo(Long_t nElements, void *p) {
      return p ? new(p) ::BmnEcalGeo[nElements] : new ::BmnEcalGeo[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnEcalGeo(void *p) {
      delete ((::BmnEcalGeo*)p);
   }
   static void deleteArray_BmnEcalGeo(void *p) {
      delete [] ((::BmnEcalGeo*)p);
   }
   static void destruct_BmnEcalGeo(void *p) {
      typedef ::BmnEcalGeo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnEcalGeo

//______________________________________________________________________________
void BmnECALDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnECALDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnECALDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnECALDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnECALDigit(void *p) {
      return  p ? new(p) ::BmnECALDigit : new ::BmnECALDigit;
   }
   static void *newArray_BmnECALDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnECALDigit[nElements] : new ::BmnECALDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnECALDigit(void *p) {
      delete ((::BmnECALDigit*)p);
   }
   static void deleteArray_BmnECALDigit(void *p) {
      delete [] ((::BmnECALDigit*)p);
   }
   static void destruct_BmnECALDigit(void *p) {
      typedef ::BmnECALDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnECALDigit

//______________________________________________________________________________
void BmnEcalDigitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnEcalDigitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnEcalDigitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnEcalDigitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnEcalDigitizer(void *p) {
      return  p ? new(p) ::BmnEcalDigitizer : new ::BmnEcalDigitizer;
   }
   static void *newArray_BmnEcalDigitizer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnEcalDigitizer[nElements] : new ::BmnEcalDigitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnEcalDigitizer(void *p) {
      delete ((::BmnEcalDigitizer*)p);
   }
   static void deleteArray_BmnEcalDigitizer(void *p) {
      delete [] ((::BmnEcalDigitizer*)p);
   }
   static void destruct_BmnEcalDigitizer(void *p) {
      typedef ::BmnEcalDigitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnEcalDigitizer

namespace {
  void TriggerDictionaryInitialization_G__EcalDict_Impl() {
    static const char* headers[] = {
"BmnEcal.h",
"BmnEcalPoint.h",
"BmnEcalContFact.h",
"BmnEcalGeo.h",
"BmnEcalGeoPar.h",
"BmnECALDigit.h",
"BmnEcalDigitizer.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/base",
"/data/yaopeng/bmnroot_Yaopeng/base/data",
"/data/yaopeng/bmnroot_Yaopeng/detectors/ecal",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/detectors/ecal/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__EcalDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$BmnEcalPoint.h")))  __attribute__((annotate("$clingAutoload$BmnEcal.h")))  BmnEcalPoint;
class __attribute__((annotate("$clingAutoload$BmnEcalGeoPar.h")))  __attribute__((annotate("$clingAutoload$BmnEcal.h")))  BmnEcalGeoPar;
class __attribute__((annotate("$clingAutoload$BmnEcal.h")))  BmnEcal;
class __attribute__((annotate(R"ATTRDUMP(Factory for all HYP parameter containers)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$BmnEcalContFact.h")))  BmnEcalContFact;
class __attribute__((annotate(R"ATTRDUMP(Class for Hyp)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$BmnEcalGeo.h")))  BmnEcalGeo;
class __attribute__((annotate("$clingAutoload$BmnECALDigit.h")))  BmnECALDigit;
class __attribute__((annotate("$clingAutoload$BmnEcalDigitizer.h")))  BmnEcalDigitizer;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__EcalDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "BmnEcal.h"
#include "BmnEcalPoint.h"
#include "BmnEcalContFact.h"
#include "BmnEcalGeo.h"
#include "BmnEcalGeoPar.h"
#include "BmnECALDigit.h"
#include "BmnEcalDigitizer.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BmnECALDigit", payloadCode, "@",
"BmnEcal", payloadCode, "@",
"BmnEcalContFact", payloadCode, "@",
"BmnEcalDigitizer", payloadCode, "@",
"BmnEcalGeo", payloadCode, "@",
"BmnEcalGeoPar", payloadCode, "@",
"BmnEcalPoint", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__EcalDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__EcalDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__EcalDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__EcalDict() {
  TriggerDictionaryInitialization_G__EcalDict_Impl();
}
