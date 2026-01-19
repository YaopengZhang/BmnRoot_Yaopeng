// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIdetectorsdIarmTriggersdIG__ArmTrigDict
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
#include "BmnArmTrig.h"
#include "BmnArmTrigPoint.h"
#include "BmnArmTrigHit.h"
#include "BmnArmTrigHitProducer.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BmnArmTrig(void *p = nullptr);
   static void *newArray_BmnArmTrig(Long_t size, void *p);
   static void delete_BmnArmTrig(void *p);
   static void deleteArray_BmnArmTrig(void *p);
   static void destruct_BmnArmTrig(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnArmTrig*)
   {
      ::BmnArmTrig *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnArmTrig >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnArmTrig", ::BmnArmTrig::Class_Version(), "BmnArmTrig.h", 30,
                  typeid(::BmnArmTrig), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnArmTrig::Dictionary, isa_proxy, 4,
                  sizeof(::BmnArmTrig) );
      instance.SetNew(&new_BmnArmTrig);
      instance.SetNewArray(&newArray_BmnArmTrig);
      instance.SetDelete(&delete_BmnArmTrig);
      instance.SetDeleteArray(&deleteArray_BmnArmTrig);
      instance.SetDestructor(&destruct_BmnArmTrig);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnArmTrig*)
   {
      return GenerateInitInstanceLocal((::BmnArmTrig*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnArmTrig*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnArmTrigPoint(void *p = nullptr);
   static void *newArray_BmnArmTrigPoint(Long_t size, void *p);
   static void delete_BmnArmTrigPoint(void *p);
   static void deleteArray_BmnArmTrigPoint(void *p);
   static void destruct_BmnArmTrigPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnArmTrigPoint*)
   {
      ::BmnArmTrigPoint *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnArmTrigPoint >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnArmTrigPoint", ::BmnArmTrigPoint::Class_Version(), "BmnArmTrigPoint.h", 18,
                  typeid(::BmnArmTrigPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnArmTrigPoint::Dictionary, isa_proxy, 4,
                  sizeof(::BmnArmTrigPoint) );
      instance.SetNew(&new_BmnArmTrigPoint);
      instance.SetNewArray(&newArray_BmnArmTrigPoint);
      instance.SetDelete(&delete_BmnArmTrigPoint);
      instance.SetDeleteArray(&deleteArray_BmnArmTrigPoint);
      instance.SetDestructor(&destruct_BmnArmTrigPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnArmTrigPoint*)
   {
      return GenerateInitInstanceLocal((::BmnArmTrigPoint*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnArmTrigPoint*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnArmTrigHit(void *p = nullptr);
   static void *newArray_BmnArmTrigHit(Long_t size, void *p);
   static void delete_BmnArmTrigHit(void *p);
   static void deleteArray_BmnArmTrigHit(void *p);
   static void destruct_BmnArmTrigHit(void *p);
   static void streamer_BmnArmTrigHit(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnArmTrigHit*)
   {
      ::BmnArmTrigHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnArmTrigHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnArmTrigHit", ::BmnArmTrigHit::Class_Version(), "BmnArmTrigHit.h", 7,
                  typeid(::BmnArmTrigHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnArmTrigHit::Dictionary, isa_proxy, 16,
                  sizeof(::BmnArmTrigHit) );
      instance.SetNew(&new_BmnArmTrigHit);
      instance.SetNewArray(&newArray_BmnArmTrigHit);
      instance.SetDelete(&delete_BmnArmTrigHit);
      instance.SetDeleteArray(&deleteArray_BmnArmTrigHit);
      instance.SetDestructor(&destruct_BmnArmTrigHit);
      instance.SetStreamerFunc(&streamer_BmnArmTrigHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnArmTrigHit*)
   {
      return GenerateInitInstanceLocal((::BmnArmTrigHit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnArmTrigHit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnArmTrigHitProducer(void *p = nullptr);
   static void *newArray_BmnArmTrigHitProducer(Long_t size, void *p);
   static void delete_BmnArmTrigHitProducer(void *p);
   static void deleteArray_BmnArmTrigHitProducer(void *p);
   static void destruct_BmnArmTrigHitProducer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnArmTrigHitProducer*)
   {
      ::BmnArmTrigHitProducer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnArmTrigHitProducer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnArmTrigHitProducer", ::BmnArmTrigHitProducer::Class_Version(), "BmnArmTrigHitProducer.h", 17,
                  typeid(::BmnArmTrigHitProducer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnArmTrigHitProducer::Dictionary, isa_proxy, 4,
                  sizeof(::BmnArmTrigHitProducer) );
      instance.SetNew(&new_BmnArmTrigHitProducer);
      instance.SetNewArray(&newArray_BmnArmTrigHitProducer);
      instance.SetDelete(&delete_BmnArmTrigHitProducer);
      instance.SetDeleteArray(&deleteArray_BmnArmTrigHitProducer);
      instance.SetDestructor(&destruct_BmnArmTrigHitProducer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnArmTrigHitProducer*)
   {
      return GenerateInitInstanceLocal((::BmnArmTrigHitProducer*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnArmTrigHitProducer*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnArmTrig::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnArmTrig::Class_Name()
{
   return "BmnArmTrig";
}

//______________________________________________________________________________
const char *BmnArmTrig::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnArmTrig*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnArmTrig::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnArmTrig*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnArmTrig::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnArmTrig*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnArmTrig::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnArmTrig*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnArmTrigPoint::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnArmTrigPoint::Class_Name()
{
   return "BmnArmTrigPoint";
}

//______________________________________________________________________________
const char *BmnArmTrigPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnArmTrigPoint*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnArmTrigPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnArmTrigPoint*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnArmTrigPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnArmTrigPoint*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnArmTrigPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnArmTrigPoint*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnArmTrigHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnArmTrigHit::Class_Name()
{
   return "BmnArmTrigHit";
}

//______________________________________________________________________________
const char *BmnArmTrigHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnArmTrigHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnArmTrigHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnArmTrigHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnArmTrigHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnArmTrigHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnArmTrigHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnArmTrigHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnArmTrigHitProducer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnArmTrigHitProducer::Class_Name()
{
   return "BmnArmTrigHitProducer";
}

//______________________________________________________________________________
const char *BmnArmTrigHitProducer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnArmTrigHitProducer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnArmTrigHitProducer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnArmTrigHitProducer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnArmTrigHitProducer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnArmTrigHitProducer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnArmTrigHitProducer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnArmTrigHitProducer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnArmTrig::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnArmTrig.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnArmTrig::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnArmTrig::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnArmTrig(void *p) {
      return  p ? new(p) ::BmnArmTrig : new ::BmnArmTrig;
   }
   static void *newArray_BmnArmTrig(Long_t nElements, void *p) {
      return p ? new(p) ::BmnArmTrig[nElements] : new ::BmnArmTrig[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnArmTrig(void *p) {
      delete ((::BmnArmTrig*)p);
   }
   static void deleteArray_BmnArmTrig(void *p) {
      delete [] ((::BmnArmTrig*)p);
   }
   static void destruct_BmnArmTrig(void *p) {
      typedef ::BmnArmTrig current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnArmTrig

//______________________________________________________________________________
void BmnArmTrigPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnArmTrigPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnArmTrigPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnArmTrigPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnArmTrigPoint(void *p) {
      return  p ? new(p) ::BmnArmTrigPoint : new ::BmnArmTrigPoint;
   }
   static void *newArray_BmnArmTrigPoint(Long_t nElements, void *p) {
      return p ? new(p) ::BmnArmTrigPoint[nElements] : new ::BmnArmTrigPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnArmTrigPoint(void *p) {
      delete ((::BmnArmTrigPoint*)p);
   }
   static void deleteArray_BmnArmTrigPoint(void *p) {
      delete [] ((::BmnArmTrigPoint*)p);
   }
   static void destruct_BmnArmTrigPoint(void *p) {
      typedef ::BmnArmTrigPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnArmTrigPoint

//______________________________________________________________________________
void BmnArmTrigHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnArmTrigHit.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      BmnHit::Streamer(R__b);
      R__b >> fPdgId;
      R__b.CheckByteCount(R__s, R__c, BmnArmTrigHit::IsA());
   } else {
      R__c = R__b.WriteVersion(BmnArmTrigHit::IsA(), kTRUE);
      BmnHit::Streamer(R__b);
      R__b << fPdgId;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnArmTrigHit(void *p) {
      return  p ? new(p) ::BmnArmTrigHit : new ::BmnArmTrigHit;
   }
   static void *newArray_BmnArmTrigHit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnArmTrigHit[nElements] : new ::BmnArmTrigHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnArmTrigHit(void *p) {
      delete ((::BmnArmTrigHit*)p);
   }
   static void deleteArray_BmnArmTrigHit(void *p) {
      delete [] ((::BmnArmTrigHit*)p);
   }
   static void destruct_BmnArmTrigHit(void *p) {
      typedef ::BmnArmTrigHit current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_BmnArmTrigHit(TBuffer &buf, void *obj) {
      ((::BmnArmTrigHit*)obj)->::BmnArmTrigHit::Streamer(buf);
   }
} // end of namespace ROOT for class ::BmnArmTrigHit

//______________________________________________________________________________
void BmnArmTrigHitProducer::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnArmTrigHitProducer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnArmTrigHitProducer::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnArmTrigHitProducer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnArmTrigHitProducer(void *p) {
      return  p ? new(p) ::BmnArmTrigHitProducer : new ::BmnArmTrigHitProducer;
   }
   static void *newArray_BmnArmTrigHitProducer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnArmTrigHitProducer[nElements] : new ::BmnArmTrigHitProducer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnArmTrigHitProducer(void *p) {
      delete ((::BmnArmTrigHitProducer*)p);
   }
   static void deleteArray_BmnArmTrigHitProducer(void *p) {
      delete [] ((::BmnArmTrigHitProducer*)p);
   }
   static void destruct_BmnArmTrigHitProducer(void *p) {
      typedef ::BmnArmTrigHitProducer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnArmTrigHitProducer

namespace {
  void TriggerDictionaryInitialization_G__ArmTrigDict_Impl() {
    static const char* headers[] = {
"BmnArmTrig.h",
"BmnArmTrigPoint.h",
"BmnArmTrigHit.h",
"BmnArmTrigHitProducer.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/base",
"/data/yaopeng/bmnroot_Yaopeng/base/data",
"/data/yaopeng/bmnroot_Yaopeng/detectors/armTriggers",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/detectors/armTriggers/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__ArmTrigDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$BmnArmTrig.h")))  BmnArmTrig;
class __attribute__((annotate("$clingAutoload$BmnArmTrigPoint.h")))  BmnArmTrigPoint;
class __attribute__((annotate("$clingAutoload$BmnArmTrigHit.h")))  BmnArmTrigHit;
class __attribute__((annotate("$clingAutoload$BmnArmTrigHitProducer.h")))  BmnArmTrigHitProducer;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__ArmTrigDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "BmnArmTrig.h"
#include "BmnArmTrigPoint.h"
#include "BmnArmTrigHit.h"
#include "BmnArmTrigHitProducer.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BmnArmTrig", payloadCode, "@",
"BmnArmTrigHit", payloadCode, "@",
"BmnArmTrigHitProducer", payloadCode, "@",
"BmnArmTrigPoint", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__ArmTrigDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__ArmTrigDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__ArmTrigDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__ArmTrigDict() {
  TriggerDictionaryInitialization_G__ArmTrigDict_Impl();
}
