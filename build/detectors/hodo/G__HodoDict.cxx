// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIdetectorsdIhododIG__HodoDict
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
#include "BmnHodo.h"
#include "BmnHodoPoint.h"
#include "BmnHodoDigi.h"
#include "BmnHodoAddress.h"
#include "BmnHodoContFact.h"
#include "BmnHodoGeo.h"
#include "BmnHodoGeoPar.h"
#include "BmnHodoDigit.h"
#include "BmnHodoDigitizer.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BmnHodoGeoPar(void *p = nullptr);
   static void *newArray_BmnHodoGeoPar(Long_t size, void *p);
   static void delete_BmnHodoGeoPar(void *p);
   static void deleteArray_BmnHodoGeoPar(void *p);
   static void destruct_BmnHodoGeoPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHodoGeoPar*)
   {
      ::BmnHodoGeoPar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHodoGeoPar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHodoGeoPar", ::BmnHodoGeoPar::Class_Version(), "BmnHodoGeoPar.h", 13,
                  typeid(::BmnHodoGeoPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHodoGeoPar::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHodoGeoPar) );
      instance.SetNew(&new_BmnHodoGeoPar);
      instance.SetNewArray(&newArray_BmnHodoGeoPar);
      instance.SetDelete(&delete_BmnHodoGeoPar);
      instance.SetDeleteArray(&deleteArray_BmnHodoGeoPar);
      instance.SetDestructor(&destruct_BmnHodoGeoPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHodoGeoPar*)
   {
      return GenerateInitInstanceLocal((::BmnHodoGeoPar*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHodoGeoPar*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnHodoPoint(void *p = nullptr);
   static void *newArray_BmnHodoPoint(Long_t size, void *p);
   static void delete_BmnHodoPoint(void *p);
   static void deleteArray_BmnHodoPoint(void *p);
   static void destruct_BmnHodoPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHodoPoint*)
   {
      ::BmnHodoPoint *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHodoPoint >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHodoPoint", ::BmnHodoPoint::Class_Version(), "BmnHodoPoint.h", 18,
                  typeid(::BmnHodoPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHodoPoint::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHodoPoint) );
      instance.SetNew(&new_BmnHodoPoint);
      instance.SetNewArray(&newArray_BmnHodoPoint);
      instance.SetDelete(&delete_BmnHodoPoint);
      instance.SetDeleteArray(&deleteArray_BmnHodoPoint);
      instance.SetDestructor(&destruct_BmnHodoPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHodoPoint*)
   {
      return GenerateInitInstanceLocal((::BmnHodoPoint*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHodoPoint*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnHodo(void *p = nullptr);
   static void *newArray_BmnHodo(Long_t size, void *p);
   static void delete_BmnHodo(void *p);
   static void deleteArray_BmnHodo(void *p);
   static void destruct_BmnHodo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHodo*)
   {
      ::BmnHodo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHodo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHodo", ::BmnHodo::Class_Version(), "BmnHodo.h", 26,
                  typeid(::BmnHodo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHodo::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHodo) );
      instance.SetNew(&new_BmnHodo);
      instance.SetNewArray(&newArray_BmnHodo);
      instance.SetDelete(&delete_BmnHodo);
      instance.SetDeleteArray(&deleteArray_BmnHodo);
      instance.SetDestructor(&destruct_BmnHodo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHodo*)
   {
      return GenerateInitInstanceLocal((::BmnHodo*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHodo*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnHodoAddress_Dictionary();
   static void BmnHodoAddress_TClassManip(TClass*);
   static void *new_BmnHodoAddress(void *p = nullptr);
   static void *newArray_BmnHodoAddress(Long_t size, void *p);
   static void delete_BmnHodoAddress(void *p);
   static void deleteArray_BmnHodoAddress(void *p);
   static void destruct_BmnHodoAddress(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHodoAddress*)
   {
      ::BmnHodoAddress *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnHodoAddress));
      static ::ROOT::TGenericClassInfo 
         instance("BmnHodoAddress", "BmnHodoAddress.h", 25,
                  typeid(::BmnHodoAddress), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnHodoAddress_Dictionary, isa_proxy, 4,
                  sizeof(::BmnHodoAddress) );
      instance.SetNew(&new_BmnHodoAddress);
      instance.SetNewArray(&newArray_BmnHodoAddress);
      instance.SetDelete(&delete_BmnHodoAddress);
      instance.SetDeleteArray(&deleteArray_BmnHodoAddress);
      instance.SetDestructor(&destruct_BmnHodoAddress);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHodoAddress*)
   {
      return GenerateInitInstanceLocal((::BmnHodoAddress*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHodoAddress*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnHodoAddress_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnHodoAddress*)nullptr)->GetClass();
      BmnHodoAddress_TClassManip(theClass);
   return theClass;
   }

   static void BmnHodoAddress_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnHodoDigi(void *p = nullptr);
   static void *newArray_BmnHodoDigi(Long_t size, void *p);
   static void delete_BmnHodoDigi(void *p);
   static void deleteArray_BmnHodoDigi(void *p);
   static void destruct_BmnHodoDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHodoDigi*)
   {
      ::BmnHodoDigi *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHodoDigi >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHodoDigi", ::BmnHodoDigi::Class_Version(), "BmnHodoDigi.h", 22,
                  typeid(::BmnHodoDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHodoDigi::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHodoDigi) );
      instance.SetNew(&new_BmnHodoDigi);
      instance.SetNewArray(&newArray_BmnHodoDigi);
      instance.SetDelete(&delete_BmnHodoDigi);
      instance.SetDeleteArray(&deleteArray_BmnHodoDigi);
      instance.SetDestructor(&destruct_BmnHodoDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHodoDigi*)
   {
      return GenerateInitInstanceLocal((::BmnHodoDigi*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHodoDigi*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnHodoContFact(void *p = nullptr);
   static void *newArray_BmnHodoContFact(Long_t size, void *p);
   static void delete_BmnHodoContFact(void *p);
   static void deleteArray_BmnHodoContFact(void *p);
   static void destruct_BmnHodoContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHodoContFact*)
   {
      ::BmnHodoContFact *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHodoContFact >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHodoContFact", ::BmnHodoContFact::Class_Version(), "BmnHodoContFact.h", 12,
                  typeid(::BmnHodoContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHodoContFact::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHodoContFact) );
      instance.SetNew(&new_BmnHodoContFact);
      instance.SetNewArray(&newArray_BmnHodoContFact);
      instance.SetDelete(&delete_BmnHodoContFact);
      instance.SetDeleteArray(&deleteArray_BmnHodoContFact);
      instance.SetDestructor(&destruct_BmnHodoContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHodoContFact*)
   {
      return GenerateInitInstanceLocal((::BmnHodoContFact*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHodoContFact*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnHodoGeo(void *p = nullptr);
   static void *newArray_BmnHodoGeo(Long_t size, void *p);
   static void delete_BmnHodoGeo(void *p);
   static void deleteArray_BmnHodoGeo(void *p);
   static void destruct_BmnHodoGeo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHodoGeo*)
   {
      ::BmnHodoGeo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHodoGeo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHodoGeo", ::BmnHodoGeo::Class_Version(), "BmnHodoGeo.h", 12,
                  typeid(::BmnHodoGeo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHodoGeo::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHodoGeo) );
      instance.SetNew(&new_BmnHodoGeo);
      instance.SetNewArray(&newArray_BmnHodoGeo);
      instance.SetDelete(&delete_BmnHodoGeo);
      instance.SetDeleteArray(&deleteArray_BmnHodoGeo);
      instance.SetDestructor(&destruct_BmnHodoGeo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHodoGeo*)
   {
      return GenerateInitInstanceLocal((::BmnHodoGeo*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHodoGeo*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnHodoDigit(void *p = nullptr);
   static void *newArray_BmnHodoDigit(Long_t size, void *p);
   static void delete_BmnHodoDigit(void *p);
   static void deleteArray_BmnHodoDigit(void *p);
   static void destruct_BmnHodoDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHodoDigit*)
   {
      ::BmnHodoDigit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHodoDigit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHodoDigit", ::BmnHodoDigit::Class_Version(), "BmnHodoDigit.h", 16,
                  typeid(::BmnHodoDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHodoDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHodoDigit) );
      instance.SetNew(&new_BmnHodoDigit);
      instance.SetNewArray(&newArray_BmnHodoDigit);
      instance.SetDelete(&delete_BmnHodoDigit);
      instance.SetDeleteArray(&deleteArray_BmnHodoDigit);
      instance.SetDestructor(&destruct_BmnHodoDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHodoDigit*)
   {
      return GenerateInitInstanceLocal((::BmnHodoDigit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHodoDigit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnHodoDigitizer(void *p = nullptr);
   static void *newArray_BmnHodoDigitizer(Long_t size, void *p);
   static void delete_BmnHodoDigitizer(void *p);
   static void deleteArray_BmnHodoDigitizer(void *p);
   static void destruct_BmnHodoDigitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHodoDigitizer*)
   {
      ::BmnHodoDigitizer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHodoDigitizer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHodoDigitizer", ::BmnHodoDigitizer::Class_Version(), "BmnHodoDigitizer.h", 21,
                  typeid(::BmnHodoDigitizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHodoDigitizer::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHodoDigitizer) );
      instance.SetNew(&new_BmnHodoDigitizer);
      instance.SetNewArray(&newArray_BmnHodoDigitizer);
      instance.SetDelete(&delete_BmnHodoDigitizer);
      instance.SetDeleteArray(&deleteArray_BmnHodoDigitizer);
      instance.SetDestructor(&destruct_BmnHodoDigitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHodoDigitizer*)
   {
      return GenerateInitInstanceLocal((::BmnHodoDigitizer*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHodoDigitizer*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnHodoGeoPar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHodoGeoPar::Class_Name()
{
   return "BmnHodoGeoPar";
}

//______________________________________________________________________________
const char *BmnHodoGeoPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHodoGeoPar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHodoGeoPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHodoGeoPar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHodoGeoPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHodoGeoPar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHodoGeoPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHodoGeoPar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHodoPoint::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHodoPoint::Class_Name()
{
   return "BmnHodoPoint";
}

//______________________________________________________________________________
const char *BmnHodoPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHodoPoint*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHodoPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHodoPoint*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHodoPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHodoPoint*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHodoPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHodoPoint*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHodo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHodo::Class_Name()
{
   return "BmnHodo";
}

//______________________________________________________________________________
const char *BmnHodo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHodo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHodo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHodo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHodo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHodo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHodo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHodo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHodoDigi::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHodoDigi::Class_Name()
{
   return "BmnHodoDigi";
}

//______________________________________________________________________________
const char *BmnHodoDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHodoDigi*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHodoDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHodoDigi*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHodoDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHodoDigi*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHodoDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHodoDigi*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHodoContFact::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHodoContFact::Class_Name()
{
   return "BmnHodoContFact";
}

//______________________________________________________________________________
const char *BmnHodoContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHodoContFact*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHodoContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHodoContFact*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHodoContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHodoContFact*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHodoContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHodoContFact*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHodoGeo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHodoGeo::Class_Name()
{
   return "BmnHodoGeo";
}

//______________________________________________________________________________
const char *BmnHodoGeo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHodoGeo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHodoGeo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHodoGeo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHodoGeo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHodoGeo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHodoGeo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHodoGeo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHodoDigit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHodoDigit::Class_Name()
{
   return "BmnHodoDigit";
}

//______________________________________________________________________________
const char *BmnHodoDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHodoDigit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHodoDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHodoDigit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHodoDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHodoDigit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHodoDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHodoDigit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHodoDigitizer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHodoDigitizer::Class_Name()
{
   return "BmnHodoDigitizer";
}

//______________________________________________________________________________
const char *BmnHodoDigitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHodoDigitizer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHodoDigitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHodoDigitizer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHodoDigitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHodoDigitizer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHodoDigitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHodoDigitizer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnHodoGeoPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHodoGeoPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHodoGeoPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHodoGeoPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnHodoGeoPar(void *p) {
      return  p ? new(p) ::BmnHodoGeoPar : new ::BmnHodoGeoPar;
   }
   static void *newArray_BmnHodoGeoPar(Long_t nElements, void *p) {
      return p ? new(p) ::BmnHodoGeoPar[nElements] : new ::BmnHodoGeoPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnHodoGeoPar(void *p) {
      delete ((::BmnHodoGeoPar*)p);
   }
   static void deleteArray_BmnHodoGeoPar(void *p) {
      delete [] ((::BmnHodoGeoPar*)p);
   }
   static void destruct_BmnHodoGeoPar(void *p) {
      typedef ::BmnHodoGeoPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHodoGeoPar

//______________________________________________________________________________
void BmnHodoPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHodoPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHodoPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHodoPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnHodoPoint(void *p) {
      return  p ? new(p) ::BmnHodoPoint : new ::BmnHodoPoint;
   }
   static void *newArray_BmnHodoPoint(Long_t nElements, void *p) {
      return p ? new(p) ::BmnHodoPoint[nElements] : new ::BmnHodoPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnHodoPoint(void *p) {
      delete ((::BmnHodoPoint*)p);
   }
   static void deleteArray_BmnHodoPoint(void *p) {
      delete [] ((::BmnHodoPoint*)p);
   }
   static void destruct_BmnHodoPoint(void *p) {
      typedef ::BmnHodoPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHodoPoint

//______________________________________________________________________________
void BmnHodo::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHodo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHodo::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHodo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnHodo(void *p) {
      return  p ? new(p) ::BmnHodo : new ::BmnHodo;
   }
   static void *newArray_BmnHodo(Long_t nElements, void *p) {
      return p ? new(p) ::BmnHodo[nElements] : new ::BmnHodo[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnHodo(void *p) {
      delete ((::BmnHodo*)p);
   }
   static void deleteArray_BmnHodo(void *p) {
      delete [] ((::BmnHodo*)p);
   }
   static void destruct_BmnHodo(void *p) {
      typedef ::BmnHodo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHodo

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnHodoAddress(void *p) {
      return  p ? new(p) ::BmnHodoAddress : new ::BmnHodoAddress;
   }
   static void *newArray_BmnHodoAddress(Long_t nElements, void *p) {
      return p ? new(p) ::BmnHodoAddress[nElements] : new ::BmnHodoAddress[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnHodoAddress(void *p) {
      delete ((::BmnHodoAddress*)p);
   }
   static void deleteArray_BmnHodoAddress(void *p) {
      delete [] ((::BmnHodoAddress*)p);
   }
   static void destruct_BmnHodoAddress(void *p) {
      typedef ::BmnHodoAddress current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHodoAddress

//______________________________________________________________________________
void BmnHodoDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHodoDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHodoDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHodoDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnHodoDigi(void *p) {
      return  p ? new(p) ::BmnHodoDigi : new ::BmnHodoDigi;
   }
   static void *newArray_BmnHodoDigi(Long_t nElements, void *p) {
      return p ? new(p) ::BmnHodoDigi[nElements] : new ::BmnHodoDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnHodoDigi(void *p) {
      delete ((::BmnHodoDigi*)p);
   }
   static void deleteArray_BmnHodoDigi(void *p) {
      delete [] ((::BmnHodoDigi*)p);
   }
   static void destruct_BmnHodoDigi(void *p) {
      typedef ::BmnHodoDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHodoDigi

//______________________________________________________________________________
void BmnHodoContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHodoContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHodoContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHodoContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnHodoContFact(void *p) {
      return  p ? new(p) ::BmnHodoContFact : new ::BmnHodoContFact;
   }
   static void *newArray_BmnHodoContFact(Long_t nElements, void *p) {
      return p ? new(p) ::BmnHodoContFact[nElements] : new ::BmnHodoContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnHodoContFact(void *p) {
      delete ((::BmnHodoContFact*)p);
   }
   static void deleteArray_BmnHodoContFact(void *p) {
      delete [] ((::BmnHodoContFact*)p);
   }
   static void destruct_BmnHodoContFact(void *p) {
      typedef ::BmnHodoContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHodoContFact

//______________________________________________________________________________
void BmnHodoGeo::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHodoGeo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHodoGeo::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHodoGeo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnHodoGeo(void *p) {
      return  p ? new(p) ::BmnHodoGeo : new ::BmnHodoGeo;
   }
   static void *newArray_BmnHodoGeo(Long_t nElements, void *p) {
      return p ? new(p) ::BmnHodoGeo[nElements] : new ::BmnHodoGeo[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnHodoGeo(void *p) {
      delete ((::BmnHodoGeo*)p);
   }
   static void deleteArray_BmnHodoGeo(void *p) {
      delete [] ((::BmnHodoGeo*)p);
   }
   static void destruct_BmnHodoGeo(void *p) {
      typedef ::BmnHodoGeo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHodoGeo

//______________________________________________________________________________
void BmnHodoDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHodoDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHodoDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHodoDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnHodoDigit(void *p) {
      return  p ? new(p) ::BmnHodoDigit : new ::BmnHodoDigit;
   }
   static void *newArray_BmnHodoDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnHodoDigit[nElements] : new ::BmnHodoDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnHodoDigit(void *p) {
      delete ((::BmnHodoDigit*)p);
   }
   static void deleteArray_BmnHodoDigit(void *p) {
      delete [] ((::BmnHodoDigit*)p);
   }
   static void destruct_BmnHodoDigit(void *p) {
      typedef ::BmnHodoDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHodoDigit

//______________________________________________________________________________
void BmnHodoDigitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHodoDigitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHodoDigitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHodoDigitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnHodoDigitizer(void *p) {
      return  p ? new(p) ::BmnHodoDigitizer : new ::BmnHodoDigitizer;
   }
   static void *newArray_BmnHodoDigitizer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnHodoDigitizer[nElements] : new ::BmnHodoDigitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnHodoDigitizer(void *p) {
      delete ((::BmnHodoDigitizer*)p);
   }
   static void deleteArray_BmnHodoDigitizer(void *p) {
      delete [] ((::BmnHodoDigitizer*)p);
   }
   static void destruct_BmnHodoDigitizer(void *p) {
      typedef ::BmnHodoDigitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHodoDigitizer

namespace {
  void TriggerDictionaryInitialization_G__HodoDict_Impl() {
    static const char* headers[] = {
"BmnHodo.h",
"BmnHodoPoint.h",
"BmnHodoDigi.h",
"BmnHodoAddress.h",
"BmnHodoContFact.h",
"BmnHodoGeo.h",
"BmnHodoGeoPar.h",
"BmnHodoDigit.h",
"BmnHodoDigitizer.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/base",
"/data/yaopeng/bmnroot_Yaopeng/base/data",
"/data/yaopeng/bmnroot_Yaopeng/detectors/hodo",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/detectors/hodo/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__HodoDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$BmnHodoGeoPar.h")))  __attribute__((annotate("$clingAutoload$BmnHodo.h")))  BmnHodoGeoPar;
class __attribute__((annotate("$clingAutoload$BmnHodoPoint.h")))  __attribute__((annotate("$clingAutoload$BmnHodo.h")))  BmnHodoPoint;
class __attribute__((annotate("$clingAutoload$BmnHodo.h")))  BmnHodo;
class __attribute__((annotate("$clingAutoload$BmnHodoAddress.h")))  __attribute__((annotate("$clingAutoload$BmnHodoDigi.h")))  BmnHodoAddress;
class __attribute__((annotate("$clingAutoload$BmnHodoDigi.h")))  BmnHodoDigi;
class __attribute__((annotate("$clingAutoload$BmnHodoContFact.h")))  BmnHodoContFact;
class __attribute__((annotate(R"ATTRDUMP(Class for Hyp)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$BmnHodoGeo.h")))  BmnHodoGeo;
class __attribute__((annotate("$clingAutoload$BmnHodoDigit.h")))  BmnHodoDigit;
class __attribute__((annotate("$clingAutoload$BmnHodoDigitizer.h")))  BmnHodoDigitizer;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__HodoDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "BmnHodo.h"
#include "BmnHodoPoint.h"
#include "BmnHodoDigi.h"
#include "BmnHodoAddress.h"
#include "BmnHodoContFact.h"
#include "BmnHodoGeo.h"
#include "BmnHodoGeoPar.h"
#include "BmnHodoDigit.h"
#include "BmnHodoDigitizer.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BmnHodo", payloadCode, "@",
"BmnHodoAddress", payloadCode, "@",
"BmnHodoContFact", payloadCode, "@",
"BmnHodoDigi", payloadCode, "@",
"BmnHodoDigit", payloadCode, "@",
"BmnHodoDigitizer", payloadCode, "@",
"BmnHodoGeo", payloadCode, "@",
"BmnHodoGeoPar", payloadCode, "@",
"BmnHodoPoint", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__HodoDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__HodoDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__HodoDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__HodoDict() {
  TriggerDictionaryInitialization_G__HodoDict_Impl();
}
