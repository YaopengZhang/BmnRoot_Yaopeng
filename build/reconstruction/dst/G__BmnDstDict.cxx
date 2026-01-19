// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIreconstructiondIdstdIG__BmnDstDict
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
#include "BmnFillDstTask.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BmnFillDstTask(void *p = nullptr);
   static void *newArray_BmnFillDstTask(Long_t size, void *p);
   static void delete_BmnFillDstTask(void *p);
   static void deleteArray_BmnFillDstTask(void *p);
   static void destruct_BmnFillDstTask(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFillDstTask*)
   {
      ::BmnFillDstTask *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnFillDstTask >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnFillDstTask", ::BmnFillDstTask::Class_Version(), "BmnFillDstTask.h", 23,
                  typeid(::BmnFillDstTask), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnFillDstTask::Dictionary, isa_proxy, 4,
                  sizeof(::BmnFillDstTask) );
      instance.SetNew(&new_BmnFillDstTask);
      instance.SetNewArray(&newArray_BmnFillDstTask);
      instance.SetDelete(&delete_BmnFillDstTask);
      instance.SetDeleteArray(&deleteArray_BmnFillDstTask);
      instance.SetDestructor(&destruct_BmnFillDstTask);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFillDstTask*)
   {
      return GenerateInitInstanceLocal((::BmnFillDstTask*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFillDstTask*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnFillDstTask::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnFillDstTask::Class_Name()
{
   return "BmnFillDstTask";
}

//______________________________________________________________________________
const char *BmnFillDstTask::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFillDstTask*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnFillDstTask::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFillDstTask*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnFillDstTask::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFillDstTask*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnFillDstTask::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFillDstTask*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnFillDstTask::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnFillDstTask.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnFillDstTask::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnFillDstTask::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnFillDstTask(void *p) {
      return  p ? new(p) ::BmnFillDstTask : new ::BmnFillDstTask;
   }
   static void *newArray_BmnFillDstTask(Long_t nElements, void *p) {
      return p ? new(p) ::BmnFillDstTask[nElements] : new ::BmnFillDstTask[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnFillDstTask(void *p) {
      delete ((::BmnFillDstTask*)p);
   }
   static void deleteArray_BmnFillDstTask(void *p) {
      delete [] ((::BmnFillDstTask*)p);
   }
   static void destruct_BmnFillDstTask(void *p) {
      typedef ::BmnFillDstTask current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFillDstTask

namespace ROOT {
   static TClass *maplETStringcOBmnFillDstTaskcLcLstParticleInfogR_Dictionary();
   static void maplETStringcOBmnFillDstTaskcLcLstParticleInfogR_TClassManip(TClass*);
   static void *new_maplETStringcOBmnFillDstTaskcLcLstParticleInfogR(void *p = nullptr);
   static void *newArray_maplETStringcOBmnFillDstTaskcLcLstParticleInfogR(Long_t size, void *p);
   static void delete_maplETStringcOBmnFillDstTaskcLcLstParticleInfogR(void *p);
   static void deleteArray_maplETStringcOBmnFillDstTaskcLcLstParticleInfogR(void *p);
   static void destruct_maplETStringcOBmnFillDstTaskcLcLstParticleInfogR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TString,BmnFillDstTask::stParticleInfo>*)
   {
      map<TString,BmnFillDstTask::stParticleInfo> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TString,BmnFillDstTask::stParticleInfo>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TString,BmnFillDstTask::stParticleInfo>", -2, "map", 100,
                  typeid(map<TString,BmnFillDstTask::stParticleInfo>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETStringcOBmnFillDstTaskcLcLstParticleInfogR_Dictionary, isa_proxy, 0,
                  sizeof(map<TString,BmnFillDstTask::stParticleInfo>) );
      instance.SetNew(&new_maplETStringcOBmnFillDstTaskcLcLstParticleInfogR);
      instance.SetNewArray(&newArray_maplETStringcOBmnFillDstTaskcLcLstParticleInfogR);
      instance.SetDelete(&delete_maplETStringcOBmnFillDstTaskcLcLstParticleInfogR);
      instance.SetDeleteArray(&deleteArray_maplETStringcOBmnFillDstTaskcLcLstParticleInfogR);
      instance.SetDestructor(&destruct_maplETStringcOBmnFillDstTaskcLcLstParticleInfogR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TString,BmnFillDstTask::stParticleInfo> >()));

      ::ROOT::AddClassAlternate("map<TString,BmnFillDstTask::stParticleInfo>","std::map<TString, BmnFillDstTask::stParticleInfo, std::less<TString>, std::allocator<std::pair<TString const, BmnFillDstTask::stParticleInfo> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TString,BmnFillDstTask::stParticleInfo>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETStringcOBmnFillDstTaskcLcLstParticleInfogR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TString,BmnFillDstTask::stParticleInfo>*)nullptr)->GetClass();
      maplETStringcOBmnFillDstTaskcLcLstParticleInfogR_TClassManip(theClass);
   return theClass;
   }

   static void maplETStringcOBmnFillDstTaskcLcLstParticleInfogR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETStringcOBmnFillDstTaskcLcLstParticleInfogR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,BmnFillDstTask::stParticleInfo> : new map<TString,BmnFillDstTask::stParticleInfo>;
   }
   static void *newArray_maplETStringcOBmnFillDstTaskcLcLstParticleInfogR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,BmnFillDstTask::stParticleInfo>[nElements] : new map<TString,BmnFillDstTask::stParticleInfo>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETStringcOBmnFillDstTaskcLcLstParticleInfogR(void *p) {
      delete ((map<TString,BmnFillDstTask::stParticleInfo>*)p);
   }
   static void deleteArray_maplETStringcOBmnFillDstTaskcLcLstParticleInfogR(void *p) {
      delete [] ((map<TString,BmnFillDstTask::stParticleInfo>*)p);
   }
   static void destruct_maplETStringcOBmnFillDstTaskcLcLstParticleInfogR(void *p) {
      typedef map<TString,BmnFillDstTask::stParticleInfo> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TString,BmnFillDstTask::stParticleInfo>

namespace {
  void TriggerDictionaryInitialization_G__BmnDstDict_Impl() {
    static const char* headers[] = {
"BmnFillDstTask.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/base",
"/data/yaopeng/bmnroot_Yaopeng/base/data",
"/data/yaopeng/bmnroot_Yaopeng/base/raw",
"/data/yaopeng/bmnroot_Yaopeng/base/header",
"/data/yaopeng/bmnroot_Yaopeng/services",
"/data/yaopeng/bmnroot_Yaopeng/database/uni_db",
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/dst",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/reconstruction/dst/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__BmnDstDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$BmnFillDstTask.h")))  BmnFillDstTask;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__BmnDstDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "BmnFillDstTask.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BmnFillDstTask", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__BmnDstDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__BmnDstDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__BmnDstDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__BmnDstDict() {
  TriggerDictionaryInitialization_G__BmnDstDict_Impl();
}
