// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIreconstructiondItof2dIG__BmnRecoTof2Dict
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
#include "BmnTofHitProducer.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BmnTofHitProducer(void *p = nullptr);
   static void *newArray_BmnTofHitProducer(Long_t size, void *p);
   static void delete_BmnTofHitProducer(void *p);
   static void deleteArray_BmnTofHitProducer(void *p);
   static void destruct_BmnTofHitProducer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTofHitProducer*)
   {
      ::BmnTofHitProducer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTofHitProducer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTofHitProducer", ::BmnTofHitProducer::Class_Version(), "BmnTofHitProducer.h", 32,
                  typeid(::BmnTofHitProducer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTofHitProducer::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTofHitProducer) );
      instance.SetNew(&new_BmnTofHitProducer);
      instance.SetNewArray(&newArray_BmnTofHitProducer);
      instance.SetDelete(&delete_BmnTofHitProducer);
      instance.SetDeleteArray(&deleteArray_BmnTofHitProducer);
      instance.SetDestructor(&destruct_BmnTofHitProducer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTofHitProducer*)
   {
      return GenerateInitInstanceLocal((::BmnTofHitProducer*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTofHitProducer*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnTofHitProducer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTofHitProducer::Class_Name()
{
   return "BmnTofHitProducer";
}

//______________________________________________________________________________
const char *BmnTofHitProducer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTofHitProducer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTofHitProducer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTofHitProducer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTofHitProducer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTofHitProducer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTofHitProducer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTofHitProducer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnTofHitProducer::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTofHitProducer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTofHitProducer::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTofHitProducer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTofHitProducer(void *p) {
      return  p ? new(p) ::BmnTofHitProducer : new ::BmnTofHitProducer;
   }
   static void *newArray_BmnTofHitProducer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTofHitProducer[nElements] : new ::BmnTofHitProducer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTofHitProducer(void *p) {
      delete ((::BmnTofHitProducer*)p);
   }
   static void deleteArray_BmnTofHitProducer(void *p) {
      delete [] ((::BmnTofHitProducer*)p);
   }
   static void destruct_BmnTofHitProducer(void *p) {
      typedef ::BmnTofHitProducer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTofHitProducer

namespace {
  void TriggerDictionaryInitialization_G__BmnRecoTof2Dict_Impl() {
    static const char* headers[] = {
"BmnTofHitProducer.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/base",
"/data/yaopeng/bmnroot_Yaopeng/base/data",
"/data/yaopeng/bmnroot_Yaopeng/base/raw",
"/data/yaopeng/bmnroot_Yaopeng/detectors/tof",
"/data/yaopeng/bmnroot_Yaopeng/decoder",
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/tof2",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/reconstruction/tof2/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__BmnRecoTof2Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$BmnTofHitProducer.h")))  BmnTofHitProducer;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__BmnRecoTof2Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "BmnTofHitProducer.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BmnTofHitProducer", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__BmnRecoTof2Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__BmnRecoTof2Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__BmnRecoTof2Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__BmnRecoTof2Dict() {
  TriggerDictionaryInitialization_G__BmnRecoTof2Dict_Impl();
}
