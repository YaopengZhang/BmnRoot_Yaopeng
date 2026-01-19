// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIdetectorsdItofcaldIG__TofCalDict
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
#include "BmnTofCalDigit.h"
#include "BmnTofCalHit.h"
#include "BmnTofCalHitProducer.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BmnTofCalDigit(void *p = nullptr);
   static void *newArray_BmnTofCalDigit(Long_t size, void *p);
   static void delete_BmnTofCalDigit(void *p);
   static void deleteArray_BmnTofCalDigit(void *p);
   static void destruct_BmnTofCalDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTofCalDigit*)
   {
      ::BmnTofCalDigit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTofCalDigit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTofCalDigit", ::BmnTofCalDigit::Class_Version(), "BmnTofCalDigit.h", 8,
                  typeid(::BmnTofCalDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTofCalDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTofCalDigit) );
      instance.SetNew(&new_BmnTofCalDigit);
      instance.SetNewArray(&newArray_BmnTofCalDigit);
      instance.SetDelete(&delete_BmnTofCalDigit);
      instance.SetDeleteArray(&deleteArray_BmnTofCalDigit);
      instance.SetDestructor(&destruct_BmnTofCalDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTofCalDigit*)
   {
      return GenerateInitInstanceLocal((::BmnTofCalDigit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTofCalDigit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTofCalHit(void *p = nullptr);
   static void *newArray_BmnTofCalHit(Long_t size, void *p);
   static void delete_BmnTofCalHit(void *p);
   static void deleteArray_BmnTofCalHit(void *p);
   static void destruct_BmnTofCalHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTofCalHit*)
   {
      ::BmnTofCalHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTofCalHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTofCalHit", ::BmnTofCalHit::Class_Version(), "BmnTofCalHit.h", 32,
                  typeid(::BmnTofCalHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTofCalHit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTofCalHit) );
      instance.SetNew(&new_BmnTofCalHit);
      instance.SetNewArray(&newArray_BmnTofCalHit);
      instance.SetDelete(&delete_BmnTofCalHit);
      instance.SetDeleteArray(&deleteArray_BmnTofCalHit);
      instance.SetDestructor(&destruct_BmnTofCalHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTofCalHit*)
   {
      return GenerateInitInstanceLocal((::BmnTofCalHit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTofCalHit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTofCalHitProducer(void *p = nullptr);
   static void *newArray_BmnTofCalHitProducer(Long_t size, void *p);
   static void delete_BmnTofCalHitProducer(void *p);
   static void deleteArray_BmnTofCalHitProducer(void *p);
   static void destruct_BmnTofCalHitProducer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTofCalHitProducer*)
   {
      ::BmnTofCalHitProducer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTofCalHitProducer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTofCalHitProducer", ::BmnTofCalHitProducer::Class_Version(), "BmnTofCalHitProducer.h", 24,
                  typeid(::BmnTofCalHitProducer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTofCalHitProducer::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTofCalHitProducer) );
      instance.SetNew(&new_BmnTofCalHitProducer);
      instance.SetNewArray(&newArray_BmnTofCalHitProducer);
      instance.SetDelete(&delete_BmnTofCalHitProducer);
      instance.SetDeleteArray(&deleteArray_BmnTofCalHitProducer);
      instance.SetDestructor(&destruct_BmnTofCalHitProducer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTofCalHitProducer*)
   {
      return GenerateInitInstanceLocal((::BmnTofCalHitProducer*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTofCalHitProducer*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnTofCalDigit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTofCalDigit::Class_Name()
{
   return "BmnTofCalDigit";
}

//______________________________________________________________________________
const char *BmnTofCalDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTofCalDigit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTofCalDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTofCalDigit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTofCalDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTofCalDigit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTofCalDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTofCalDigit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTofCalHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTofCalHit::Class_Name()
{
   return "BmnTofCalHit";
}

//______________________________________________________________________________
const char *BmnTofCalHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTofCalHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTofCalHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTofCalHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTofCalHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTofCalHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTofCalHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTofCalHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTofCalHitProducer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTofCalHitProducer::Class_Name()
{
   return "BmnTofCalHitProducer";
}

//______________________________________________________________________________
const char *BmnTofCalHitProducer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTofCalHitProducer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTofCalHitProducer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTofCalHitProducer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTofCalHitProducer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTofCalHitProducer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTofCalHitProducer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTofCalHitProducer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnTofCalDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTofCalDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTofCalDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTofCalDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTofCalDigit(void *p) {
      return  p ? new(p) ::BmnTofCalDigit : new ::BmnTofCalDigit;
   }
   static void *newArray_BmnTofCalDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTofCalDigit[nElements] : new ::BmnTofCalDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTofCalDigit(void *p) {
      delete ((::BmnTofCalDigit*)p);
   }
   static void deleteArray_BmnTofCalDigit(void *p) {
      delete [] ((::BmnTofCalDigit*)p);
   }
   static void destruct_BmnTofCalDigit(void *p) {
      typedef ::BmnTofCalDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTofCalDigit

//______________________________________________________________________________
void BmnTofCalHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTofCalHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTofCalHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTofCalHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTofCalHit(void *p) {
      return  p ? new(p) ::BmnTofCalHit : new ::BmnTofCalHit;
   }
   static void *newArray_BmnTofCalHit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTofCalHit[nElements] : new ::BmnTofCalHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTofCalHit(void *p) {
      delete ((::BmnTofCalHit*)p);
   }
   static void deleteArray_BmnTofCalHit(void *p) {
      delete [] ((::BmnTofCalHit*)p);
   }
   static void destruct_BmnTofCalHit(void *p) {
      typedef ::BmnTofCalHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTofCalHit

//______________________________________________________________________________
void BmnTofCalHitProducer::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTofCalHitProducer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTofCalHitProducer::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTofCalHitProducer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTofCalHitProducer(void *p) {
      return  p ? new(p) ::BmnTofCalHitProducer : new ::BmnTofCalHitProducer;
   }
   static void *newArray_BmnTofCalHitProducer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTofCalHitProducer[nElements] : new ::BmnTofCalHitProducer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTofCalHitProducer(void *p) {
      delete ((::BmnTofCalHitProducer*)p);
   }
   static void deleteArray_BmnTofCalHitProducer(void *p) {
      delete [] ((::BmnTofCalHitProducer*)p);
   }
   static void destruct_BmnTofCalHitProducer(void *p) {
      typedef ::BmnTofCalHitProducer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTofCalHitProducer

namespace {
  void TriggerDictionaryInitialization_G__TofCalDict_Impl() {
    static const char* headers[] = {
"BmnTofCalDigit.h",
"BmnTofCalHit.h",
"BmnTofCalHitProducer.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/base",
"/data/yaopeng/bmnroot_Yaopeng/base/data",
"/data/yaopeng/bmnroot_Yaopeng/base/raw",
"/data/yaopeng/bmnroot_Yaopeng/detectors/tofcal",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/detectors/tofcal/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__TofCalDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$BmnTofCalDigit.h")))  BmnTofCalDigit;
class __attribute__((annotate("$clingAutoload$BmnTofCalHit.h")))  BmnTofCalHit;
class __attribute__((annotate("$clingAutoload$BmnTofCalHitProducer.h")))  BmnTofCalHitProducer;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__TofCalDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "BmnTofCalDigit.h"
#include "BmnTofCalHit.h"
#include "BmnTofCalHitProducer.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BmnTofCalDigit", payloadCode, "@",
"BmnTofCalHit", payloadCode, "@",
"BmnTofCalHitProducer", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__TofCalDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__TofCalDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__TofCalDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__TofCalDict() {
  TriggerDictionaryInitialization_G__TofCalDict_Impl();
}
