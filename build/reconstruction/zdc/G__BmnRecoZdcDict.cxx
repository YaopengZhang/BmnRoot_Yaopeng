// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIreconstructiondIzdcdIG__BmnRecoZdcDict
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
#include "BmnZDCEventData.h"
#include "BmnZdcAnalyzer.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BmnZDCEventData(void *p = nullptr);
   static void *newArray_BmnZDCEventData(Long_t size, void *p);
   static void delete_BmnZDCEventData(void *p);
   static void deleteArray_BmnZDCEventData(void *p);
   static void destruct_BmnZDCEventData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnZDCEventData*)
   {
      ::BmnZDCEventData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnZDCEventData >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnZDCEventData", ::BmnZDCEventData::Class_Version(), "BmnZDCEventData.h", 16,
                  typeid(::BmnZDCEventData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnZDCEventData::Dictionary, isa_proxy, 4,
                  sizeof(::BmnZDCEventData) );
      instance.SetNew(&new_BmnZDCEventData);
      instance.SetNewArray(&newArray_BmnZDCEventData);
      instance.SetDelete(&delete_BmnZDCEventData);
      instance.SetDeleteArray(&deleteArray_BmnZDCEventData);
      instance.SetDestructor(&destruct_BmnZDCEventData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnZDCEventData*)
   {
      return GenerateInitInstanceLocal((::BmnZDCEventData*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnZDCEventData*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnZdcAnalyzer(void *p = nullptr);
   static void *newArray_BmnZdcAnalyzer(Long_t size, void *p);
   static void delete_BmnZdcAnalyzer(void *p);
   static void deleteArray_BmnZdcAnalyzer(void *p);
   static void destruct_BmnZdcAnalyzer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnZdcAnalyzer*)
   {
      ::BmnZdcAnalyzer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnZdcAnalyzer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnZdcAnalyzer", ::BmnZdcAnalyzer::Class_Version(), "BmnZdcAnalyzer.h", 16,
                  typeid(::BmnZdcAnalyzer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnZdcAnalyzer::Dictionary, isa_proxy, 4,
                  sizeof(::BmnZdcAnalyzer) );
      instance.SetNew(&new_BmnZdcAnalyzer);
      instance.SetNewArray(&newArray_BmnZdcAnalyzer);
      instance.SetDelete(&delete_BmnZdcAnalyzer);
      instance.SetDeleteArray(&deleteArray_BmnZdcAnalyzer);
      instance.SetDestructor(&destruct_BmnZdcAnalyzer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnZdcAnalyzer*)
   {
      return GenerateInitInstanceLocal((::BmnZdcAnalyzer*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnZdcAnalyzer*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnZDCEventData::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnZDCEventData::Class_Name()
{
   return "BmnZDCEventData";
}

//______________________________________________________________________________
const char *BmnZDCEventData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZDCEventData*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnZDCEventData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZDCEventData*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnZDCEventData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZDCEventData*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnZDCEventData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZDCEventData*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnZdcAnalyzer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnZdcAnalyzer::Class_Name()
{
   return "BmnZdcAnalyzer";
}

//______________________________________________________________________________
const char *BmnZdcAnalyzer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcAnalyzer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnZdcAnalyzer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcAnalyzer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnZdcAnalyzer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcAnalyzer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnZdcAnalyzer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcAnalyzer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnZDCEventData::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnZDCEventData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnZDCEventData::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnZDCEventData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnZDCEventData(void *p) {
      return  p ? new(p) ::BmnZDCEventData : new ::BmnZDCEventData;
   }
   static void *newArray_BmnZDCEventData(Long_t nElements, void *p) {
      return p ? new(p) ::BmnZDCEventData[nElements] : new ::BmnZDCEventData[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnZDCEventData(void *p) {
      delete ((::BmnZDCEventData*)p);
   }
   static void deleteArray_BmnZDCEventData(void *p) {
      delete [] ((::BmnZDCEventData*)p);
   }
   static void destruct_BmnZDCEventData(void *p) {
      typedef ::BmnZDCEventData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnZDCEventData

//______________________________________________________________________________
void BmnZdcAnalyzer::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnZdcAnalyzer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnZdcAnalyzer::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnZdcAnalyzer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnZdcAnalyzer(void *p) {
      return  p ? new(p) ::BmnZdcAnalyzer : new ::BmnZdcAnalyzer;
   }
   static void *newArray_BmnZdcAnalyzer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnZdcAnalyzer[nElements] : new ::BmnZdcAnalyzer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnZdcAnalyzer(void *p) {
      delete ((::BmnZdcAnalyzer*)p);
   }
   static void deleteArray_BmnZdcAnalyzer(void *p) {
      delete [] ((::BmnZdcAnalyzer*)p);
   }
   static void destruct_BmnZdcAnalyzer(void *p) {
      typedef ::BmnZdcAnalyzer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnZdcAnalyzer

namespace {
  void TriggerDictionaryInitialization_G__BmnRecoZdcDict_Impl() {
    static const char* headers[] = {
"BmnZDCEventData.h",
"BmnZdcAnalyzer.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/base/data",
"/data/yaopeng/bmnroot_Yaopeng/detectors/zdc",
"/data/yaopeng/bmnroot_Yaopeng/decoder",
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/zdc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/reconstruction/zdc/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__BmnRecoZdcDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$BmnZDCEventData.h")))  BmnZDCEventData;
class __attribute__((annotate("$clingAutoload$BmnZdcAnalyzer.h")))  BmnZdcAnalyzer;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__BmnRecoZdcDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "BmnZDCEventData.h"
#include "BmnZdcAnalyzer.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BmnZDCEventData", payloadCode, "@",
"BmnZdcAnalyzer", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__BmnRecoZdcDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__BmnRecoZdcDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__BmnRecoZdcDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__BmnRecoZdcDict() {
  TriggerDictionaryInitialization_G__BmnRecoZdcDict_Impl();
}
