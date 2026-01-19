// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIreconstructiondIfhcaldIG__BmnRecoFHCalDict
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
#include "BmnFHCalReconstructor.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_BmnFHCalReconstructor(void *p);
   static void deleteArray_BmnFHCalReconstructor(void *p);
   static void destruct_BmnFHCalReconstructor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFHCalReconstructor*)
   {
      ::BmnFHCalReconstructor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnFHCalReconstructor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnFHCalReconstructor", ::BmnFHCalReconstructor::Class_Version(), "BmnFHCalReconstructor.h", 29,
                  typeid(::BmnFHCalReconstructor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnFHCalReconstructor::Dictionary, isa_proxy, 4,
                  sizeof(::BmnFHCalReconstructor) );
      instance.SetDelete(&delete_BmnFHCalReconstructor);
      instance.SetDeleteArray(&deleteArray_BmnFHCalReconstructor);
      instance.SetDestructor(&destruct_BmnFHCalReconstructor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFHCalReconstructor*)
   {
      return GenerateInitInstanceLocal((::BmnFHCalReconstructor*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFHCalReconstructor*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnFHCalReconstructor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnFHCalReconstructor::Class_Name()
{
   return "BmnFHCalReconstructor";
}

//______________________________________________________________________________
const char *BmnFHCalReconstructor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalReconstructor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnFHCalReconstructor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalReconstructor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnFHCalReconstructor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalReconstructor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnFHCalReconstructor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalReconstructor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnFHCalReconstructor::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnFHCalReconstructor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnFHCalReconstructor::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnFHCalReconstructor::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnFHCalReconstructor(void *p) {
      delete ((::BmnFHCalReconstructor*)p);
   }
   static void deleteArray_BmnFHCalReconstructor(void *p) {
      delete [] ((::BmnFHCalReconstructor*)p);
   }
   static void destruct_BmnFHCalReconstructor(void *p) {
      typedef ::BmnFHCalReconstructor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFHCalReconstructor

namespace {
  void TriggerDictionaryInitialization_G__BmnRecoFHCalDict_Impl() {
    static const char* headers[] = {
"BmnFHCalReconstructor.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/base",
"/data/yaopeng/bmnroot_Yaopeng/base/data",
"/data/yaopeng/bmnroot_Yaopeng/base/raw",
"/data/yaopeng/bmnroot_Yaopeng/database/uni_db",
"/data/yaopeng/bmnroot_Yaopeng/detectors/fhcal",
"/data/yaopeng/bmnroot_Yaopeng/decoder",
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/fhcal",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/reconstruction/fhcal/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__BmnRecoFHCalDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$BmnFHCalReconstructor.h")))  BmnFHCalReconstructor;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__BmnRecoFHCalDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "BmnFHCalReconstructor.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BmnFHCalReconstructor", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__BmnRecoFHCalDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__BmnRecoFHCalDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__BmnRecoFHCalDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__BmnRecoFHCalDict() {
  TriggerDictionaryInitialization_G__BmnRecoFHCalDict_Impl();
}
