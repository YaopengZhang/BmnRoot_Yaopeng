// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIdetectorsdIFDdIG__FDDict
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
#include "BmnFD.h"
#include "BmnFDPoint.h"
#include "BmnFDContFact.h"
#include "BmnFDGeo.h"
#include "BmnFDGeoPar.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BmnFDGeoPar(void *p = nullptr);
   static void *newArray_BmnFDGeoPar(Long_t size, void *p);
   static void delete_BmnFDGeoPar(void *p);
   static void deleteArray_BmnFDGeoPar(void *p);
   static void destruct_BmnFDGeoPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFDGeoPar*)
   {
      ::BmnFDGeoPar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnFDGeoPar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnFDGeoPar", ::BmnFDGeoPar::Class_Version(), "BmnFDGeoPar.h", 8,
                  typeid(::BmnFDGeoPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnFDGeoPar::Dictionary, isa_proxy, 4,
                  sizeof(::BmnFDGeoPar) );
      instance.SetNew(&new_BmnFDGeoPar);
      instance.SetNewArray(&newArray_BmnFDGeoPar);
      instance.SetDelete(&delete_BmnFDGeoPar);
      instance.SetDeleteArray(&deleteArray_BmnFDGeoPar);
      instance.SetDestructor(&destruct_BmnFDGeoPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFDGeoPar*)
   {
      return GenerateInitInstanceLocal((::BmnFDGeoPar*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFDGeoPar*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnFD(void *p = nullptr);
   static void *newArray_BmnFD(Long_t size, void *p);
   static void delete_BmnFD(void *p);
   static void deleteArray_BmnFD(void *p);
   static void destruct_BmnFD(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFD*)
   {
      ::BmnFD *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnFD >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnFD", ::BmnFD::Class_Version(), "BmnFD.h", 21,
                  typeid(::BmnFD), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnFD::Dictionary, isa_proxy, 4,
                  sizeof(::BmnFD) );
      instance.SetNew(&new_BmnFD);
      instance.SetNewArray(&newArray_BmnFD);
      instance.SetDelete(&delete_BmnFD);
      instance.SetDeleteArray(&deleteArray_BmnFD);
      instance.SetDestructor(&destruct_BmnFD);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFD*)
   {
      return GenerateInitInstanceLocal((::BmnFD*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFD*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnFDPoint(void *p = nullptr);
   static void *newArray_BmnFDPoint(Long_t size, void *p);
   static void delete_BmnFDPoint(void *p);
   static void deleteArray_BmnFDPoint(void *p);
   static void destruct_BmnFDPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFDPoint*)
   {
      ::BmnFDPoint *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnFDPoint >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnFDPoint", ::BmnFDPoint::Class_Version(), "BmnFDPoint.h", 15,
                  typeid(::BmnFDPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnFDPoint::Dictionary, isa_proxy, 4,
                  sizeof(::BmnFDPoint) );
      instance.SetNew(&new_BmnFDPoint);
      instance.SetNewArray(&newArray_BmnFDPoint);
      instance.SetDelete(&delete_BmnFDPoint);
      instance.SetDeleteArray(&deleteArray_BmnFDPoint);
      instance.SetDestructor(&destruct_BmnFDPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFDPoint*)
   {
      return GenerateInitInstanceLocal((::BmnFDPoint*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFDPoint*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnFDContFact(void *p = nullptr);
   static void *newArray_BmnFDContFact(Long_t size, void *p);
   static void delete_BmnFDContFact(void *p);
   static void deleteArray_BmnFDContFact(void *p);
   static void destruct_BmnFDContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFDContFact*)
   {
      ::BmnFDContFact *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnFDContFact >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnFDContFact", ::BmnFDContFact::Class_Version(), "BmnFDContFact.h", 9,
                  typeid(::BmnFDContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnFDContFact::Dictionary, isa_proxy, 4,
                  sizeof(::BmnFDContFact) );
      instance.SetNew(&new_BmnFDContFact);
      instance.SetNewArray(&newArray_BmnFDContFact);
      instance.SetDelete(&delete_BmnFDContFact);
      instance.SetDeleteArray(&deleteArray_BmnFDContFact);
      instance.SetDestructor(&destruct_BmnFDContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFDContFact*)
   {
      return GenerateInitInstanceLocal((::BmnFDContFact*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFDContFact*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnFDGeo(void *p = nullptr);
   static void *newArray_BmnFDGeo(Long_t size, void *p);
   static void delete_BmnFDGeo(void *p);
   static void deleteArray_BmnFDGeo(void *p);
   static void destruct_BmnFDGeo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFDGeo*)
   {
      ::BmnFDGeo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnFDGeo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnFDGeo", ::BmnFDGeo::Class_Version(), "BmnFDGeo.h", 7,
                  typeid(::BmnFDGeo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnFDGeo::Dictionary, isa_proxy, 4,
                  sizeof(::BmnFDGeo) );
      instance.SetNew(&new_BmnFDGeo);
      instance.SetNewArray(&newArray_BmnFDGeo);
      instance.SetDelete(&delete_BmnFDGeo);
      instance.SetDeleteArray(&deleteArray_BmnFDGeo);
      instance.SetDestructor(&destruct_BmnFDGeo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFDGeo*)
   {
      return GenerateInitInstanceLocal((::BmnFDGeo*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFDGeo*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnFDGeoPar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnFDGeoPar::Class_Name()
{
   return "BmnFDGeoPar";
}

//______________________________________________________________________________
const char *BmnFDGeoPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFDGeoPar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnFDGeoPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFDGeoPar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnFDGeoPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFDGeoPar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnFDGeoPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFDGeoPar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnFD::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnFD::Class_Name()
{
   return "BmnFD";
}

//______________________________________________________________________________
const char *BmnFD::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFD*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnFD::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFD*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnFD::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFD*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnFD::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFD*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnFDPoint::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnFDPoint::Class_Name()
{
   return "BmnFDPoint";
}

//______________________________________________________________________________
const char *BmnFDPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFDPoint*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnFDPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFDPoint*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnFDPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFDPoint*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnFDPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFDPoint*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnFDContFact::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnFDContFact::Class_Name()
{
   return "BmnFDContFact";
}

//______________________________________________________________________________
const char *BmnFDContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFDContFact*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnFDContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFDContFact*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnFDContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFDContFact*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnFDContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFDContFact*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnFDGeo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnFDGeo::Class_Name()
{
   return "BmnFDGeo";
}

//______________________________________________________________________________
const char *BmnFDGeo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFDGeo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnFDGeo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFDGeo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnFDGeo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFDGeo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnFDGeo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFDGeo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnFDGeoPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnFDGeoPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnFDGeoPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnFDGeoPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnFDGeoPar(void *p) {
      return  p ? new(p) ::BmnFDGeoPar : new ::BmnFDGeoPar;
   }
   static void *newArray_BmnFDGeoPar(Long_t nElements, void *p) {
      return p ? new(p) ::BmnFDGeoPar[nElements] : new ::BmnFDGeoPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnFDGeoPar(void *p) {
      delete ((::BmnFDGeoPar*)p);
   }
   static void deleteArray_BmnFDGeoPar(void *p) {
      delete [] ((::BmnFDGeoPar*)p);
   }
   static void destruct_BmnFDGeoPar(void *p) {
      typedef ::BmnFDGeoPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFDGeoPar

//______________________________________________________________________________
void BmnFD::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnFD.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnFD::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnFD::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnFD(void *p) {
      return  p ? new(p) ::BmnFD : new ::BmnFD;
   }
   static void *newArray_BmnFD(Long_t nElements, void *p) {
      return p ? new(p) ::BmnFD[nElements] : new ::BmnFD[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnFD(void *p) {
      delete ((::BmnFD*)p);
   }
   static void deleteArray_BmnFD(void *p) {
      delete [] ((::BmnFD*)p);
   }
   static void destruct_BmnFD(void *p) {
      typedef ::BmnFD current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFD

//______________________________________________________________________________
void BmnFDPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnFDPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnFDPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnFDPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnFDPoint(void *p) {
      return  p ? new(p) ::BmnFDPoint : new ::BmnFDPoint;
   }
   static void *newArray_BmnFDPoint(Long_t nElements, void *p) {
      return p ? new(p) ::BmnFDPoint[nElements] : new ::BmnFDPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnFDPoint(void *p) {
      delete ((::BmnFDPoint*)p);
   }
   static void deleteArray_BmnFDPoint(void *p) {
      delete [] ((::BmnFDPoint*)p);
   }
   static void destruct_BmnFDPoint(void *p) {
      typedef ::BmnFDPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFDPoint

//______________________________________________________________________________
void BmnFDContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnFDContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnFDContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnFDContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnFDContFact(void *p) {
      return  p ? new(p) ::BmnFDContFact : new ::BmnFDContFact;
   }
   static void *newArray_BmnFDContFact(Long_t nElements, void *p) {
      return p ? new(p) ::BmnFDContFact[nElements] : new ::BmnFDContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnFDContFact(void *p) {
      delete ((::BmnFDContFact*)p);
   }
   static void deleteArray_BmnFDContFact(void *p) {
      delete [] ((::BmnFDContFact*)p);
   }
   static void destruct_BmnFDContFact(void *p) {
      typedef ::BmnFDContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFDContFact

//______________________________________________________________________________
void BmnFDGeo::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnFDGeo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnFDGeo::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnFDGeo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnFDGeo(void *p) {
      return  p ? new(p) ::BmnFDGeo : new ::BmnFDGeo;
   }
   static void *newArray_BmnFDGeo(Long_t nElements, void *p) {
      return p ? new(p) ::BmnFDGeo[nElements] : new ::BmnFDGeo[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnFDGeo(void *p) {
      delete ((::BmnFDGeo*)p);
   }
   static void deleteArray_BmnFDGeo(void *p) {
      delete [] ((::BmnFDGeo*)p);
   }
   static void destruct_BmnFDGeo(void *p) {
      typedef ::BmnFDGeo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFDGeo

namespace {
  void TriggerDictionaryInitialization_G__FDDict_Impl() {
    static const char* headers[] = {
"BmnFD.h",
"BmnFDPoint.h",
"BmnFDContFact.h",
"BmnFDGeo.h",
"BmnFDGeoPar.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/base",
"/data/yaopeng/bmnroot_Yaopeng/base/data",
"/data/yaopeng/bmnroot_Yaopeng/detectors/FD",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/detectors/FD/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__FDDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$BmnFDGeoPar.h")))  __attribute__((annotate("$clingAutoload$BmnFD.h")))  BmnFDGeoPar;
class __attribute__((annotate("$clingAutoload$BmnFD.h")))  BmnFD;
class __attribute__((annotate("$clingAutoload$BmnFDPoint.h")))  BmnFDPoint;
class __attribute__((annotate(R"ATTRDUMP(Factory for all HYP parameter containers)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$BmnFDContFact.h")))  BmnFDContFact;
class __attribute__((annotate(R"ATTRDUMP(Class for Hyp)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$BmnFDGeo.h")))  BmnFDGeo;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__FDDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "BmnFD.h"
#include "BmnFDPoint.h"
#include "BmnFDContFact.h"
#include "BmnFDGeo.h"
#include "BmnFDGeoPar.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BmnFD", payloadCode, "@",
"BmnFDContFact", payloadCode, "@",
"BmnFDGeo", payloadCode, "@",
"BmnFDGeoPar", payloadCode, "@",
"BmnFDPoint", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__FDDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__FDDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__FDDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__FDDict() {
  TriggerDictionaryInitialization_G__FDDict_Impl();
}
