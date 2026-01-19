// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIdetectorsdIlanddIG__LANDDict
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
#include "BmnLANDDigit.h"
#include "BmnLANDHit.h"
#include "BmnLANDHitProducer.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BmnLANDDigit(void *p = nullptr);
   static void *newArray_BmnLANDDigit(Long_t size, void *p);
   static void delete_BmnLANDDigit(void *p);
   static void deleteArray_BmnLANDDigit(void *p);
   static void destruct_BmnLANDDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnLANDDigit*)
   {
      ::BmnLANDDigit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnLANDDigit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnLANDDigit", ::BmnLANDDigit::Class_Version(), "BmnLANDDigit.h", 8,
                  typeid(::BmnLANDDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnLANDDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnLANDDigit) );
      instance.SetNew(&new_BmnLANDDigit);
      instance.SetNewArray(&newArray_BmnLANDDigit);
      instance.SetDelete(&delete_BmnLANDDigit);
      instance.SetDeleteArray(&deleteArray_BmnLANDDigit);
      instance.SetDestructor(&destruct_BmnLANDDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnLANDDigit*)
   {
      return GenerateInitInstanceLocal((::BmnLANDDigit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnLANDDigit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnLANDHit(void *p = nullptr);
   static void *newArray_BmnLANDHit(Long_t size, void *p);
   static void delete_BmnLANDHit(void *p);
   static void deleteArray_BmnLANDHit(void *p);
   static void destruct_BmnLANDHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnLANDHit*)
   {
      ::BmnLANDHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnLANDHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnLANDHit", ::BmnLANDHit::Class_Version(), "BmnLANDHit.h", 32,
                  typeid(::BmnLANDHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnLANDHit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnLANDHit) );
      instance.SetNew(&new_BmnLANDHit);
      instance.SetNewArray(&newArray_BmnLANDHit);
      instance.SetDelete(&delete_BmnLANDHit);
      instance.SetDeleteArray(&deleteArray_BmnLANDHit);
      instance.SetDestructor(&destruct_BmnLANDHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnLANDHit*)
   {
      return GenerateInitInstanceLocal((::BmnLANDHit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnLANDHit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnLANDHitProducer(void *p = nullptr);
   static void *newArray_BmnLANDHitProducer(Long_t size, void *p);
   static void delete_BmnLANDHitProducer(void *p);
   static void deleteArray_BmnLANDHitProducer(void *p);
   static void destruct_BmnLANDHitProducer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnLANDHitProducer*)
   {
      ::BmnLANDHitProducer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnLANDHitProducer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnLANDHitProducer", ::BmnLANDHitProducer::Class_Version(), "BmnLANDHitProducer.h", 23,
                  typeid(::BmnLANDHitProducer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnLANDHitProducer::Dictionary, isa_proxy, 4,
                  sizeof(::BmnLANDHitProducer) );
      instance.SetNew(&new_BmnLANDHitProducer);
      instance.SetNewArray(&newArray_BmnLANDHitProducer);
      instance.SetDelete(&delete_BmnLANDHitProducer);
      instance.SetDeleteArray(&deleteArray_BmnLANDHitProducer);
      instance.SetDestructor(&destruct_BmnLANDHitProducer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnLANDHitProducer*)
   {
      return GenerateInitInstanceLocal((::BmnLANDHitProducer*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnLANDHitProducer*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnLANDDigit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnLANDDigit::Class_Name()
{
   return "BmnLANDDigit";
}

//______________________________________________________________________________
const char *BmnLANDDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnLANDDigit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnLANDDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnLANDDigit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnLANDDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnLANDDigit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnLANDDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnLANDDigit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnLANDHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnLANDHit::Class_Name()
{
   return "BmnLANDHit";
}

//______________________________________________________________________________
const char *BmnLANDHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnLANDHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnLANDHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnLANDHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnLANDHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnLANDHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnLANDHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnLANDHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnLANDHitProducer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnLANDHitProducer::Class_Name()
{
   return "BmnLANDHitProducer";
}

//______________________________________________________________________________
const char *BmnLANDHitProducer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnLANDHitProducer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnLANDHitProducer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnLANDHitProducer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnLANDHitProducer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnLANDHitProducer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnLANDHitProducer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnLANDHitProducer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnLANDDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnLANDDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnLANDDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnLANDDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnLANDDigit(void *p) {
      return  p ? new(p) ::BmnLANDDigit : new ::BmnLANDDigit;
   }
   static void *newArray_BmnLANDDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnLANDDigit[nElements] : new ::BmnLANDDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnLANDDigit(void *p) {
      delete ((::BmnLANDDigit*)p);
   }
   static void deleteArray_BmnLANDDigit(void *p) {
      delete [] ((::BmnLANDDigit*)p);
   }
   static void destruct_BmnLANDDigit(void *p) {
      typedef ::BmnLANDDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnLANDDigit

//______________________________________________________________________________
void BmnLANDHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnLANDHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnLANDHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnLANDHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnLANDHit(void *p) {
      return  p ? new(p) ::BmnLANDHit : new ::BmnLANDHit;
   }
   static void *newArray_BmnLANDHit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnLANDHit[nElements] : new ::BmnLANDHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnLANDHit(void *p) {
      delete ((::BmnLANDHit*)p);
   }
   static void deleteArray_BmnLANDHit(void *p) {
      delete [] ((::BmnLANDHit*)p);
   }
   static void destruct_BmnLANDHit(void *p) {
      typedef ::BmnLANDHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnLANDHit

//______________________________________________________________________________
void BmnLANDHitProducer::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnLANDHitProducer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnLANDHitProducer::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnLANDHitProducer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnLANDHitProducer(void *p) {
      return  p ? new(p) ::BmnLANDHitProducer : new ::BmnLANDHitProducer;
   }
   static void *newArray_BmnLANDHitProducer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnLANDHitProducer[nElements] : new ::BmnLANDHitProducer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnLANDHitProducer(void *p) {
      delete ((::BmnLANDHitProducer*)p);
   }
   static void deleteArray_BmnLANDHitProducer(void *p) {
      delete [] ((::BmnLANDHitProducer*)p);
   }
   static void destruct_BmnLANDHitProducer(void *p) {
      typedef ::BmnLANDHitProducer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnLANDHitProducer

namespace {
  void TriggerDictionaryInitialization_G__LANDDict_Impl() {
    static const char* headers[] = {
"BmnLANDDigit.h",
"BmnLANDHit.h",
"BmnLANDHitProducer.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/base",
"/data/yaopeng/bmnroot_Yaopeng/base/data",
"/data/yaopeng/bmnroot_Yaopeng/base/raw",
"/data/yaopeng/bmnroot_Yaopeng/detectors/land",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/detectors/land/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__LANDDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$BmnLANDDigit.h")))  BmnLANDDigit;
class __attribute__((annotate("$clingAutoload$BmnLANDHit.h")))  BmnLANDHit;
class __attribute__((annotate("$clingAutoload$BmnLANDHitProducer.h")))  BmnLANDHitProducer;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__LANDDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "BmnLANDDigit.h"
#include "BmnLANDHit.h"
#include "BmnLANDHitProducer.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BmnLANDDigit", payloadCode, "@",
"BmnLANDHit", payloadCode, "@",
"BmnLANDHitProducer", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__LANDDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__LANDDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__LANDDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__LANDDict() {
  TriggerDictionaryInitialization_G__LANDDict_Impl();
}
