// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIdetectorsdISiMDdIG__SiMDDict
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
#include "BmnSiMD.h"
#include "BmnSiMDPoint.h"
#include "BmnSiMDContFact.h"
#include "BmnSiMDGeo.h"
#include "BmnSiMDGeoPar.h"
#include "BmnSiMDDigitizer.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BmnSiMDGeoPar(void *p = nullptr);
   static void *newArray_BmnSiMDGeoPar(Long_t size, void *p);
   static void delete_BmnSiMDGeoPar(void *p);
   static void deleteArray_BmnSiMDGeoPar(void *p);
   static void destruct_BmnSiMDGeoPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiMDGeoPar*)
   {
      ::BmnSiMDGeoPar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiMDGeoPar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiMDGeoPar", ::BmnSiMDGeoPar::Class_Version(), "BmnSiMDGeoPar.h", 13,
                  typeid(::BmnSiMDGeoPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiMDGeoPar::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiMDGeoPar) );
      instance.SetNew(&new_BmnSiMDGeoPar);
      instance.SetNewArray(&newArray_BmnSiMDGeoPar);
      instance.SetDelete(&delete_BmnSiMDGeoPar);
      instance.SetDeleteArray(&deleteArray_BmnSiMDGeoPar);
      instance.SetDestructor(&destruct_BmnSiMDGeoPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiMDGeoPar*)
   {
      return GenerateInitInstanceLocal((::BmnSiMDGeoPar*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiMDGeoPar*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiMDPoint(void *p = nullptr);
   static void *newArray_BmnSiMDPoint(Long_t size, void *p);
   static void delete_BmnSiMDPoint(void *p);
   static void deleteArray_BmnSiMDPoint(void *p);
   static void destruct_BmnSiMDPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiMDPoint*)
   {
      ::BmnSiMDPoint *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiMDPoint >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiMDPoint", ::BmnSiMDPoint::Class_Version(), "BmnSiMDPoint.h", 18,
                  typeid(::BmnSiMDPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiMDPoint::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiMDPoint) );
      instance.SetNew(&new_BmnSiMDPoint);
      instance.SetNewArray(&newArray_BmnSiMDPoint);
      instance.SetDelete(&delete_BmnSiMDPoint);
      instance.SetDeleteArray(&deleteArray_BmnSiMDPoint);
      instance.SetDestructor(&destruct_BmnSiMDPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiMDPoint*)
   {
      return GenerateInitInstanceLocal((::BmnSiMDPoint*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiMDPoint*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiMD(void *p = nullptr);
   static void *newArray_BmnSiMD(Long_t size, void *p);
   static void delete_BmnSiMD(void *p);
   static void deleteArray_BmnSiMD(void *p);
   static void destruct_BmnSiMD(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiMD*)
   {
      ::BmnSiMD *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiMD >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiMD", ::BmnSiMD::Class_Version(), "BmnSiMD.h", 25,
                  typeid(::BmnSiMD), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiMD::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiMD) );
      instance.SetNew(&new_BmnSiMD);
      instance.SetNewArray(&newArray_BmnSiMD);
      instance.SetDelete(&delete_BmnSiMD);
      instance.SetDeleteArray(&deleteArray_BmnSiMD);
      instance.SetDestructor(&destruct_BmnSiMD);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiMD*)
   {
      return GenerateInitInstanceLocal((::BmnSiMD*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiMD*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiMDContFact(void *p = nullptr);
   static void *newArray_BmnSiMDContFact(Long_t size, void *p);
   static void delete_BmnSiMDContFact(void *p);
   static void deleteArray_BmnSiMDContFact(void *p);
   static void destruct_BmnSiMDContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiMDContFact*)
   {
      ::BmnSiMDContFact *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiMDContFact >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiMDContFact", ::BmnSiMDContFact::Class_Version(), "BmnSiMDContFact.h", 13,
                  typeid(::BmnSiMDContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiMDContFact::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiMDContFact) );
      instance.SetNew(&new_BmnSiMDContFact);
      instance.SetNewArray(&newArray_BmnSiMDContFact);
      instance.SetDelete(&delete_BmnSiMDContFact);
      instance.SetDeleteArray(&deleteArray_BmnSiMDContFact);
      instance.SetDestructor(&destruct_BmnSiMDContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiMDContFact*)
   {
      return GenerateInitInstanceLocal((::BmnSiMDContFact*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiMDContFact*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiMDGeo(void *p = nullptr);
   static void *newArray_BmnSiMDGeo(Long_t size, void *p);
   static void delete_BmnSiMDGeo(void *p);
   static void deleteArray_BmnSiMDGeo(void *p);
   static void destruct_BmnSiMDGeo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiMDGeo*)
   {
      ::BmnSiMDGeo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiMDGeo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiMDGeo", ::BmnSiMDGeo::Class_Version(), "BmnSiMDGeo.h", 12,
                  typeid(::BmnSiMDGeo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiMDGeo::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiMDGeo) );
      instance.SetNew(&new_BmnSiMDGeo);
      instance.SetNewArray(&newArray_BmnSiMDGeo);
      instance.SetDelete(&delete_BmnSiMDGeo);
      instance.SetDeleteArray(&deleteArray_BmnSiMDGeo);
      instance.SetDestructor(&destruct_BmnSiMDGeo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiMDGeo*)
   {
      return GenerateInitInstanceLocal((::BmnSiMDGeo*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiMDGeo*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiMDDigitizer(void *p = nullptr);
   static void *newArray_BmnSiMDDigitizer(Long_t size, void *p);
   static void delete_BmnSiMDDigitizer(void *p);
   static void deleteArray_BmnSiMDDigitizer(void *p);
   static void destruct_BmnSiMDDigitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiMDDigitizer*)
   {
      ::BmnSiMDDigitizer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiMDDigitizer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiMDDigitizer", ::BmnSiMDDigitizer::Class_Version(), "BmnSiMDDigitizer.h", 11,
                  typeid(::BmnSiMDDigitizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiMDDigitizer::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiMDDigitizer) );
      instance.SetNew(&new_BmnSiMDDigitizer);
      instance.SetNewArray(&newArray_BmnSiMDDigitizer);
      instance.SetDelete(&delete_BmnSiMDDigitizer);
      instance.SetDeleteArray(&deleteArray_BmnSiMDDigitizer);
      instance.SetDestructor(&destruct_BmnSiMDDigitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiMDDigitizer*)
   {
      return GenerateInitInstanceLocal((::BmnSiMDDigitizer*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiMDDigitizer*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnSiMDGeoPar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiMDGeoPar::Class_Name()
{
   return "BmnSiMDGeoPar";
}

//______________________________________________________________________________
const char *BmnSiMDGeoPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiMDGeoPar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiMDGeoPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiMDGeoPar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiMDGeoPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiMDGeoPar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiMDGeoPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiMDGeoPar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiMDPoint::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiMDPoint::Class_Name()
{
   return "BmnSiMDPoint";
}

//______________________________________________________________________________
const char *BmnSiMDPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiMDPoint*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiMDPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiMDPoint*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiMDPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiMDPoint*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiMDPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiMDPoint*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiMD::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiMD::Class_Name()
{
   return "BmnSiMD";
}

//______________________________________________________________________________
const char *BmnSiMD::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiMD*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiMD::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiMD*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiMD::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiMD*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiMD::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiMD*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiMDContFact::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiMDContFact::Class_Name()
{
   return "BmnSiMDContFact";
}

//______________________________________________________________________________
const char *BmnSiMDContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiMDContFact*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiMDContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiMDContFact*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiMDContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiMDContFact*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiMDContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiMDContFact*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiMDGeo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiMDGeo::Class_Name()
{
   return "BmnSiMDGeo";
}

//______________________________________________________________________________
const char *BmnSiMDGeo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiMDGeo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiMDGeo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiMDGeo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiMDGeo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiMDGeo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiMDGeo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiMDGeo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiMDDigitizer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiMDDigitizer::Class_Name()
{
   return "BmnSiMDDigitizer";
}

//______________________________________________________________________________
const char *BmnSiMDDigitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiMDDigitizer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiMDDigitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiMDDigitizer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiMDDigitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiMDDigitizer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiMDDigitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiMDDigitizer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnSiMDGeoPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiMDGeoPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiMDGeoPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiMDGeoPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiMDGeoPar(void *p) {
      return  p ? new(p) ::BmnSiMDGeoPar : new ::BmnSiMDGeoPar;
   }
   static void *newArray_BmnSiMDGeoPar(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiMDGeoPar[nElements] : new ::BmnSiMDGeoPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiMDGeoPar(void *p) {
      delete ((::BmnSiMDGeoPar*)p);
   }
   static void deleteArray_BmnSiMDGeoPar(void *p) {
      delete [] ((::BmnSiMDGeoPar*)p);
   }
   static void destruct_BmnSiMDGeoPar(void *p) {
      typedef ::BmnSiMDGeoPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiMDGeoPar

//______________________________________________________________________________
void BmnSiMDPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiMDPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiMDPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiMDPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiMDPoint(void *p) {
      return  p ? new(p) ::BmnSiMDPoint : new ::BmnSiMDPoint;
   }
   static void *newArray_BmnSiMDPoint(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiMDPoint[nElements] : new ::BmnSiMDPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiMDPoint(void *p) {
      delete ((::BmnSiMDPoint*)p);
   }
   static void deleteArray_BmnSiMDPoint(void *p) {
      delete [] ((::BmnSiMDPoint*)p);
   }
   static void destruct_BmnSiMDPoint(void *p) {
      typedef ::BmnSiMDPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiMDPoint

//______________________________________________________________________________
void BmnSiMD::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiMD.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiMD::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiMD::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiMD(void *p) {
      return  p ? new(p) ::BmnSiMD : new ::BmnSiMD;
   }
   static void *newArray_BmnSiMD(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiMD[nElements] : new ::BmnSiMD[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiMD(void *p) {
      delete ((::BmnSiMD*)p);
   }
   static void deleteArray_BmnSiMD(void *p) {
      delete [] ((::BmnSiMD*)p);
   }
   static void destruct_BmnSiMD(void *p) {
      typedef ::BmnSiMD current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiMD

//______________________________________________________________________________
void BmnSiMDContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiMDContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiMDContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiMDContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiMDContFact(void *p) {
      return  p ? new(p) ::BmnSiMDContFact : new ::BmnSiMDContFact;
   }
   static void *newArray_BmnSiMDContFact(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiMDContFact[nElements] : new ::BmnSiMDContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiMDContFact(void *p) {
      delete ((::BmnSiMDContFact*)p);
   }
   static void deleteArray_BmnSiMDContFact(void *p) {
      delete [] ((::BmnSiMDContFact*)p);
   }
   static void destruct_BmnSiMDContFact(void *p) {
      typedef ::BmnSiMDContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiMDContFact

//______________________________________________________________________________
void BmnSiMDGeo::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiMDGeo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiMDGeo::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiMDGeo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiMDGeo(void *p) {
      return  p ? new(p) ::BmnSiMDGeo : new ::BmnSiMDGeo;
   }
   static void *newArray_BmnSiMDGeo(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiMDGeo[nElements] : new ::BmnSiMDGeo[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiMDGeo(void *p) {
      delete ((::BmnSiMDGeo*)p);
   }
   static void deleteArray_BmnSiMDGeo(void *p) {
      delete [] ((::BmnSiMDGeo*)p);
   }
   static void destruct_BmnSiMDGeo(void *p) {
      typedef ::BmnSiMDGeo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiMDGeo

//______________________________________________________________________________
void BmnSiMDDigitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiMDDigitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiMDDigitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiMDDigitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiMDDigitizer(void *p) {
      return  p ? new(p) ::BmnSiMDDigitizer : new ::BmnSiMDDigitizer;
   }
   static void *newArray_BmnSiMDDigitizer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiMDDigitizer[nElements] : new ::BmnSiMDDigitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiMDDigitizer(void *p) {
      delete ((::BmnSiMDDigitizer*)p);
   }
   static void deleteArray_BmnSiMDDigitizer(void *p) {
      delete [] ((::BmnSiMDDigitizer*)p);
   }
   static void destruct_BmnSiMDDigitizer(void *p) {
      typedef ::BmnSiMDDigitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiMDDigitizer

namespace {
  void TriggerDictionaryInitialization_G__SiMDDict_Impl() {
    static const char* headers[] = {
"BmnSiMD.h",
"BmnSiMDPoint.h",
"BmnSiMDContFact.h",
"BmnSiMDGeo.h",
"BmnSiMDGeoPar.h",
"BmnSiMDDigitizer.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/base",
"/data/yaopeng/bmnroot_Yaopeng/base/data",
"/data/yaopeng/bmnroot_Yaopeng/base/raw",
"/data/yaopeng/bmnroot_Yaopeng/detectors/SiMD",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/detectors/SiMD/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__SiMDDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$BmnSiMDGeoPar.h")))  __attribute__((annotate("$clingAutoload$BmnSiMD.h")))  BmnSiMDGeoPar;
class __attribute__((annotate("$clingAutoload$BmnSiMDPoint.h")))  __attribute__((annotate("$clingAutoload$BmnSiMD.h")))  BmnSiMDPoint;
class __attribute__((annotate("$clingAutoload$BmnSiMD.h")))  BmnSiMD;
class __attribute__((annotate(R"ATTRDUMP(Factory for all HYP parameter containers)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$BmnSiMDContFact.h")))  BmnSiMDContFact;
class __attribute__((annotate(R"ATTRDUMP(Class for Hyp)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$BmnSiMDGeo.h")))  BmnSiMDGeo;
class __attribute__((annotate("$clingAutoload$BmnSiMDDigitizer.h")))  BmnSiMDDigitizer;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__SiMDDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "BmnSiMD.h"
#include "BmnSiMDPoint.h"
#include "BmnSiMDContFact.h"
#include "BmnSiMDGeo.h"
#include "BmnSiMDGeoPar.h"
#include "BmnSiMDDigitizer.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BmnSiMD", payloadCode, "@",
"BmnSiMDContFact", payloadCode, "@",
"BmnSiMDDigitizer", payloadCode, "@",
"BmnSiMDGeo", payloadCode, "@",
"BmnSiMDGeoPar", payloadCode, "@",
"BmnSiMDPoint", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__SiMDDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__SiMDDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__SiMDDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__SiMDDict() {
  TriggerDictionaryInitialization_G__SiMDDict_Impl();
}
