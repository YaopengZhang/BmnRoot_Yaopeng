// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIreconstructiondIglobaltrackingdIG__BmnGlobalTrackingDict
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
#include "BmnGlobalTrack.h"
#include "BmnGlobalTracking.h"
#include "BmnUpstreamTracking.h"
#include "BmnTriggersCheck.h"
#include "BmnVertexFinder.h"
#include "SrcVertexFinder.h"
#include "BmnGemDchTrack.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BmnGlobalTrack(void *p = nullptr);
   static void *newArray_BmnGlobalTrack(Long_t size, void *p);
   static void delete_BmnGlobalTrack(void *p);
   static void deleteArray_BmnGlobalTrack(void *p);
   static void destruct_BmnGlobalTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGlobalTrack*)
   {
      ::BmnGlobalTrack *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGlobalTrack >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGlobalTrack", ::BmnGlobalTrack::Class_Version(), "BmnGlobalTrack.h", 25,
                  typeid(::BmnGlobalTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGlobalTrack::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGlobalTrack) );
      instance.SetNew(&new_BmnGlobalTrack);
      instance.SetNewArray(&newArray_BmnGlobalTrack);
      instance.SetDelete(&delete_BmnGlobalTrack);
      instance.SetDeleteArray(&deleteArray_BmnGlobalTrack);
      instance.SetDestructor(&destruct_BmnGlobalTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGlobalTrack*)
   {
      return GenerateInitInstanceLocal((::BmnGlobalTrack*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGlobalTrack*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnGlobalTracking(void *p = nullptr);
   static void *newArray_BmnGlobalTracking(Long_t size, void *p);
   static void delete_BmnGlobalTracking(void *p);
   static void deleteArray_BmnGlobalTracking(void *p);
   static void destruct_BmnGlobalTracking(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGlobalTracking*)
   {
      ::BmnGlobalTracking *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGlobalTracking >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGlobalTracking", ::BmnGlobalTracking::Class_Version(), "BmnGlobalTracking.h", 50,
                  typeid(::BmnGlobalTracking), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGlobalTracking::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGlobalTracking) );
      instance.SetNew(&new_BmnGlobalTracking);
      instance.SetNewArray(&newArray_BmnGlobalTracking);
      instance.SetDelete(&delete_BmnGlobalTracking);
      instance.SetDeleteArray(&deleteArray_BmnGlobalTracking);
      instance.SetDestructor(&destruct_BmnGlobalTracking);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGlobalTracking*)
   {
      return GenerateInitInstanceLocal((::BmnGlobalTracking*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGlobalTracking*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnUpstreamTracking(void *p = nullptr);
   static void *newArray_BmnUpstreamTracking(Long_t size, void *p);
   static void delete_BmnUpstreamTracking(void *p);
   static void deleteArray_BmnUpstreamTracking(void *p);
   static void destruct_BmnUpstreamTracking(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnUpstreamTracking*)
   {
      ::BmnUpstreamTracking *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnUpstreamTracking >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnUpstreamTracking", ::BmnUpstreamTracking::Class_Version(), "BmnUpstreamTracking.h", 84,
                  typeid(::BmnUpstreamTracking), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnUpstreamTracking::Dictionary, isa_proxy, 4,
                  sizeof(::BmnUpstreamTracking) );
      instance.SetNew(&new_BmnUpstreamTracking);
      instance.SetNewArray(&newArray_BmnUpstreamTracking);
      instance.SetDelete(&delete_BmnUpstreamTracking);
      instance.SetDeleteArray(&deleteArray_BmnUpstreamTracking);
      instance.SetDestructor(&destruct_BmnUpstreamTracking);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnUpstreamTracking*)
   {
      return GenerateInitInstanceLocal((::BmnUpstreamTracking*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnUpstreamTracking*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTriggersCheck(void *p = nullptr);
   static void *newArray_BmnTriggersCheck(Long_t size, void *p);
   static void delete_BmnTriggersCheck(void *p);
   static void deleteArray_BmnTriggersCheck(void *p);
   static void destruct_BmnTriggersCheck(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTriggersCheck*)
   {
      ::BmnTriggersCheck *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTriggersCheck >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTriggersCheck", ::BmnTriggersCheck::Class_Version(), "BmnTriggersCheck.h", 17,
                  typeid(::BmnTriggersCheck), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTriggersCheck::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTriggersCheck) );
      instance.SetNew(&new_BmnTriggersCheck);
      instance.SetNewArray(&newArray_BmnTriggersCheck);
      instance.SetDelete(&delete_BmnTriggersCheck);
      instance.SetDeleteArray(&deleteArray_BmnTriggersCheck);
      instance.SetDestructor(&destruct_BmnTriggersCheck);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTriggersCheck*)
   {
      return GenerateInitInstanceLocal((::BmnTriggersCheck*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTriggersCheck*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnVertexFinder(void *p = nullptr);
   static void *newArray_BmnVertexFinder(Long_t size, void *p);
   static void delete_BmnVertexFinder(void *p);
   static void deleteArray_BmnVertexFinder(void *p);
   static void destruct_BmnVertexFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnVertexFinder*)
   {
      ::BmnVertexFinder *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnVertexFinder >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnVertexFinder", ::BmnVertexFinder::Class_Version(), "BmnVertexFinder.h", 22,
                  typeid(::BmnVertexFinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnVertexFinder::Dictionary, isa_proxy, 4,
                  sizeof(::BmnVertexFinder) );
      instance.SetNew(&new_BmnVertexFinder);
      instance.SetNewArray(&newArray_BmnVertexFinder);
      instance.SetDelete(&delete_BmnVertexFinder);
      instance.SetDeleteArray(&deleteArray_BmnVertexFinder);
      instance.SetDestructor(&destruct_BmnVertexFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnVertexFinder*)
   {
      return GenerateInitInstanceLocal((::BmnVertexFinder*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnVertexFinder*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_SrcVertexFinder(void *p = nullptr);
   static void *newArray_SrcVertexFinder(Long_t size, void *p);
   static void delete_SrcVertexFinder(void *p);
   static void deleteArray_SrcVertexFinder(void *p);
   static void destruct_SrcVertexFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SrcVertexFinder*)
   {
      ::SrcVertexFinder *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SrcVertexFinder >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SrcVertexFinder", ::SrcVertexFinder::Class_Version(), "SrcVertexFinder.h", 23,
                  typeid(::SrcVertexFinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SrcVertexFinder::Dictionary, isa_proxy, 4,
                  sizeof(::SrcVertexFinder) );
      instance.SetNew(&new_SrcVertexFinder);
      instance.SetNewArray(&newArray_SrcVertexFinder);
      instance.SetDelete(&delete_SrcVertexFinder);
      instance.SetDeleteArray(&deleteArray_SrcVertexFinder);
      instance.SetDestructor(&destruct_SrcVertexFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SrcVertexFinder*)
   {
      return GenerateInitInstanceLocal((::SrcVertexFinder*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::SrcVertexFinder*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnGemDchTrack(void *p = nullptr);
   static void *newArray_BmnGemDchTrack(Long_t size, void *p);
   static void delete_BmnGemDchTrack(void *p);
   static void deleteArray_BmnGemDchTrack(void *p);
   static void destruct_BmnGemDchTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemDchTrack*)
   {
      ::BmnGemDchTrack *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemDchTrack >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemDchTrack", ::BmnGemDchTrack::Class_Version(), "BmnGemDchTrack.h", 13,
                  typeid(::BmnGemDchTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemDchTrack::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemDchTrack) );
      instance.SetNew(&new_BmnGemDchTrack);
      instance.SetNewArray(&newArray_BmnGemDchTrack);
      instance.SetDelete(&delete_BmnGemDchTrack);
      instance.SetDeleteArray(&deleteArray_BmnGemDchTrack);
      instance.SetDestructor(&destruct_BmnGemDchTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemDchTrack*)
   {
      return GenerateInitInstanceLocal((::BmnGemDchTrack*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemDchTrack*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnGlobalTrack::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGlobalTrack::Class_Name()
{
   return "BmnGlobalTrack";
}

//______________________________________________________________________________
const char *BmnGlobalTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGlobalTrack*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGlobalTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGlobalTrack*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGlobalTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGlobalTrack*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGlobalTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGlobalTrack*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGlobalTracking::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGlobalTracking::Class_Name()
{
   return "BmnGlobalTracking";
}

//______________________________________________________________________________
const char *BmnGlobalTracking::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGlobalTracking*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGlobalTracking::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGlobalTracking*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGlobalTracking::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGlobalTracking*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGlobalTracking::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGlobalTracking*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnUpstreamTracking::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnUpstreamTracking::Class_Name()
{
   return "BmnUpstreamTracking";
}

//______________________________________________________________________________
const char *BmnUpstreamTracking::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnUpstreamTracking*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnUpstreamTracking::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnUpstreamTracking*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnUpstreamTracking::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnUpstreamTracking*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnUpstreamTracking::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnUpstreamTracking*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTriggersCheck::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTriggersCheck::Class_Name()
{
   return "BmnTriggersCheck";
}

//______________________________________________________________________________
const char *BmnTriggersCheck::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTriggersCheck*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTriggersCheck::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTriggersCheck*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTriggersCheck::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTriggersCheck*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTriggersCheck::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTriggersCheck*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnVertexFinder::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnVertexFinder::Class_Name()
{
   return "BmnVertexFinder";
}

//______________________________________________________________________________
const char *BmnVertexFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnVertexFinder*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnVertexFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnVertexFinder*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnVertexFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnVertexFinder*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnVertexFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnVertexFinder*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SrcVertexFinder::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SrcVertexFinder::Class_Name()
{
   return "SrcVertexFinder";
}

//______________________________________________________________________________
const char *SrcVertexFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SrcVertexFinder*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SrcVertexFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SrcVertexFinder*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SrcVertexFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SrcVertexFinder*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SrcVertexFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SrcVertexFinder*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemDchTrack::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemDchTrack::Class_Name()
{
   return "BmnGemDchTrack";
}

//______________________________________________________________________________
const char *BmnGemDchTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemDchTrack*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemDchTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemDchTrack*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemDchTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemDchTrack*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemDchTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemDchTrack*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnGlobalTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGlobalTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGlobalTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGlobalTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGlobalTrack(void *p) {
      return  p ? new(p) ::BmnGlobalTrack : new ::BmnGlobalTrack;
   }
   static void *newArray_BmnGlobalTrack(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGlobalTrack[nElements] : new ::BmnGlobalTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGlobalTrack(void *p) {
      delete ((::BmnGlobalTrack*)p);
   }
   static void deleteArray_BmnGlobalTrack(void *p) {
      delete [] ((::BmnGlobalTrack*)p);
   }
   static void destruct_BmnGlobalTrack(void *p) {
      typedef ::BmnGlobalTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGlobalTrack

//______________________________________________________________________________
void BmnGlobalTracking::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGlobalTracking.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGlobalTracking::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGlobalTracking::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGlobalTracking(void *p) {
      return  p ? new(p) ::BmnGlobalTracking : new ::BmnGlobalTracking;
   }
   static void *newArray_BmnGlobalTracking(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGlobalTracking[nElements] : new ::BmnGlobalTracking[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGlobalTracking(void *p) {
      delete ((::BmnGlobalTracking*)p);
   }
   static void deleteArray_BmnGlobalTracking(void *p) {
      delete [] ((::BmnGlobalTracking*)p);
   }
   static void destruct_BmnGlobalTracking(void *p) {
      typedef ::BmnGlobalTracking current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGlobalTracking

//______________________________________________________________________________
void BmnUpstreamTracking::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnUpstreamTracking.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnUpstreamTracking::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnUpstreamTracking::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnUpstreamTracking(void *p) {
      return  p ? new(p) ::BmnUpstreamTracking : new ::BmnUpstreamTracking;
   }
   static void *newArray_BmnUpstreamTracking(Long_t nElements, void *p) {
      return p ? new(p) ::BmnUpstreamTracking[nElements] : new ::BmnUpstreamTracking[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnUpstreamTracking(void *p) {
      delete ((::BmnUpstreamTracking*)p);
   }
   static void deleteArray_BmnUpstreamTracking(void *p) {
      delete [] ((::BmnUpstreamTracking*)p);
   }
   static void destruct_BmnUpstreamTracking(void *p) {
      typedef ::BmnUpstreamTracking current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnUpstreamTracking

//______________________________________________________________________________
void BmnTriggersCheck::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTriggersCheck.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTriggersCheck::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTriggersCheck::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTriggersCheck(void *p) {
      return  p ? new(p) ::BmnTriggersCheck : new ::BmnTriggersCheck;
   }
   static void *newArray_BmnTriggersCheck(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTriggersCheck[nElements] : new ::BmnTriggersCheck[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTriggersCheck(void *p) {
      delete ((::BmnTriggersCheck*)p);
   }
   static void deleteArray_BmnTriggersCheck(void *p) {
      delete [] ((::BmnTriggersCheck*)p);
   }
   static void destruct_BmnTriggersCheck(void *p) {
      typedef ::BmnTriggersCheck current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTriggersCheck

//______________________________________________________________________________
void BmnVertexFinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnVertexFinder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnVertexFinder::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnVertexFinder::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnVertexFinder(void *p) {
      return  p ? new(p) ::BmnVertexFinder : new ::BmnVertexFinder;
   }
   static void *newArray_BmnVertexFinder(Long_t nElements, void *p) {
      return p ? new(p) ::BmnVertexFinder[nElements] : new ::BmnVertexFinder[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnVertexFinder(void *p) {
      delete ((::BmnVertexFinder*)p);
   }
   static void deleteArray_BmnVertexFinder(void *p) {
      delete [] ((::BmnVertexFinder*)p);
   }
   static void destruct_BmnVertexFinder(void *p) {
      typedef ::BmnVertexFinder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnVertexFinder

//______________________________________________________________________________
void SrcVertexFinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class SrcVertexFinder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SrcVertexFinder::Class(),this);
   } else {
      R__b.WriteClassBuffer(SrcVertexFinder::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_SrcVertexFinder(void *p) {
      return  p ? new(p) ::SrcVertexFinder : new ::SrcVertexFinder;
   }
   static void *newArray_SrcVertexFinder(Long_t nElements, void *p) {
      return p ? new(p) ::SrcVertexFinder[nElements] : new ::SrcVertexFinder[nElements];
   }
   // Wrapper around operator delete
   static void delete_SrcVertexFinder(void *p) {
      delete ((::SrcVertexFinder*)p);
   }
   static void deleteArray_SrcVertexFinder(void *p) {
      delete [] ((::SrcVertexFinder*)p);
   }
   static void destruct_SrcVertexFinder(void *p) {
      typedef ::SrcVertexFinder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::SrcVertexFinder

//______________________________________________________________________________
void BmnGemDchTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemDchTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemDchTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemDchTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGemDchTrack(void *p) {
      return  p ? new(p) ::BmnGemDchTrack : new ::BmnGemDchTrack;
   }
   static void *newArray_BmnGemDchTrack(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGemDchTrack[nElements] : new ::BmnGemDchTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGemDchTrack(void *p) {
      delete ((::BmnGemDchTrack*)p);
   }
   static void deleteArray_BmnGemDchTrack(void *p) {
      delete [] ((::BmnGemDchTrack*)p);
   }
   static void destruct_BmnGemDchTrack(void *p) {
      typedef ::BmnGemDchTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemDchTrack

namespace ROOT {
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = nullptr);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "vector", 386,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));

      ::ROOT::AddClassAlternate("vector<int>","std::vector<int, std::allocator<int> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<int>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<int>*)nullptr)->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete ((vector<int>*)p);
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] ((vector<int>*)p);
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<int>

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = nullptr);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 386,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));

      ::ROOT::AddClassAlternate("vector<double>","std::vector<double, std::allocator<double> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<double>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<double>*)nullptr)->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete ((vector<double>*)p);
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] ((vector<double>*)p);
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace ROOT {
   static TClass *vectorlEUpTracksgR_Dictionary();
   static void vectorlEUpTracksgR_TClassManip(TClass*);
   static void *new_vectorlEUpTracksgR(void *p = nullptr);
   static void *newArray_vectorlEUpTracksgR(Long_t size, void *p);
   static void delete_vectorlEUpTracksgR(void *p);
   static void deleteArray_vectorlEUpTracksgR(void *p);
   static void destruct_vectorlEUpTracksgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<UpTracks>*)
   {
      vector<UpTracks> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<UpTracks>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<UpTracks>", -2, "vector", 386,
                  typeid(vector<UpTracks>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEUpTracksgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<UpTracks>) );
      instance.SetNew(&new_vectorlEUpTracksgR);
      instance.SetNewArray(&newArray_vectorlEUpTracksgR);
      instance.SetDelete(&delete_vectorlEUpTracksgR);
      instance.SetDeleteArray(&deleteArray_vectorlEUpTracksgR);
      instance.SetDestructor(&destruct_vectorlEUpTracksgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<UpTracks> >()));

      ::ROOT::AddClassAlternate("vector<UpTracks>","std::vector<UpTracks, std::allocator<UpTracks> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<UpTracks>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEUpTracksgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<UpTracks>*)nullptr)->GetClass();
      vectorlEUpTracksgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEUpTracksgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEUpTracksgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<UpTracks> : new vector<UpTracks>;
   }
   static void *newArray_vectorlEUpTracksgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<UpTracks>[nElements] : new vector<UpTracks>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEUpTracksgR(void *p) {
      delete ((vector<UpTracks>*)p);
   }
   static void deleteArray_vectorlEUpTracksgR(void *p) {
      delete [] ((vector<UpTracks>*)p);
   }
   static void destruct_vectorlEUpTracksgR(void *p) {
      typedef vector<UpTracks> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<UpTracks>

namespace ROOT {
   static TClass *vectorlETH1DmUgR_Dictionary();
   static void vectorlETH1DmUgR_TClassManip(TClass*);
   static void *new_vectorlETH1DmUgR(void *p = nullptr);
   static void *newArray_vectorlETH1DmUgR(Long_t size, void *p);
   static void delete_vectorlETH1DmUgR(void *p);
   static void deleteArray_vectorlETH1DmUgR(void *p);
   static void destruct_vectorlETH1DmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TH1D*>*)
   {
      vector<TH1D*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TH1D*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TH1D*>", -2, "vector", 386,
                  typeid(vector<TH1D*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETH1DmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TH1D*>) );
      instance.SetNew(&new_vectorlETH1DmUgR);
      instance.SetNewArray(&newArray_vectorlETH1DmUgR);
      instance.SetDelete(&delete_vectorlETH1DmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETH1DmUgR);
      instance.SetDestructor(&destruct_vectorlETH1DmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TH1D*> >()));

      ::ROOT::AddClassAlternate("vector<TH1D*>","std::vector<TH1D*, std::allocator<TH1D*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TH1D*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETH1DmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TH1D*>*)nullptr)->GetClass();
      vectorlETH1DmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETH1DmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETH1DmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH1D*> : new vector<TH1D*>;
   }
   static void *newArray_vectorlETH1DmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH1D*>[nElements] : new vector<TH1D*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETH1DmUgR(void *p) {
      delete ((vector<TH1D*>*)p);
   }
   static void deleteArray_vectorlETH1DmUgR(void *p) {
      delete [] ((vector<TH1D*>*)p);
   }
   static void destruct_vectorlETH1DmUgR(void *p) {
      typedef vector<TH1D*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TH1D*>

namespace ROOT {
   static TClass *vectorlESmatchgR_Dictionary();
   static void vectorlESmatchgR_TClassManip(TClass*);
   static void *new_vectorlESmatchgR(void *p = nullptr);
   static void *newArray_vectorlESmatchgR(Long_t size, void *p);
   static void delete_vectorlESmatchgR(void *p);
   static void deleteArray_vectorlESmatchgR(void *p);
   static void destruct_vectorlESmatchgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<Smatch>*)
   {
      vector<Smatch> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<Smatch>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<Smatch>", -2, "vector", 386,
                  typeid(vector<Smatch>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlESmatchgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<Smatch>) );
      instance.SetNew(&new_vectorlESmatchgR);
      instance.SetNewArray(&newArray_vectorlESmatchgR);
      instance.SetDelete(&delete_vectorlESmatchgR);
      instance.SetDeleteArray(&deleteArray_vectorlESmatchgR);
      instance.SetDestructor(&destruct_vectorlESmatchgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<Smatch> >()));

      ::ROOT::AddClassAlternate("vector<Smatch>","std::vector<Smatch, std::allocator<Smatch> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<Smatch>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlESmatchgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<Smatch>*)nullptr)->GetClass();
      vectorlESmatchgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlESmatchgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlESmatchgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<Smatch> : new vector<Smatch>;
   }
   static void *newArray_vectorlESmatchgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<Smatch>[nElements] : new vector<Smatch>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlESmatchgR(void *p) {
      delete ((vector<Smatch>*)p);
   }
   static void deleteArray_vectorlESmatchgR(void *p) {
      delete [] ((vector<Smatch>*)p);
   }
   static void destruct_vectorlESmatchgR(void *p) {
      typedef vector<Smatch> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<Smatch>

namespace ROOT {
   static TClass *vectorlEBmnUpstreamTrackingcLcLtwotracksgR_Dictionary();
   static void vectorlEBmnUpstreamTrackingcLcLtwotracksgR_TClassManip(TClass*);
   static void *new_vectorlEBmnUpstreamTrackingcLcLtwotracksgR(void *p = nullptr);
   static void *newArray_vectorlEBmnUpstreamTrackingcLcLtwotracksgR(Long_t size, void *p);
   static void delete_vectorlEBmnUpstreamTrackingcLcLtwotracksgR(void *p);
   static void deleteArray_vectorlEBmnUpstreamTrackingcLcLtwotracksgR(void *p);
   static void destruct_vectorlEBmnUpstreamTrackingcLcLtwotracksgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnUpstreamTracking::twotracks>*)
   {
      vector<BmnUpstreamTracking::twotracks> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnUpstreamTracking::twotracks>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnUpstreamTracking::twotracks>", -2, "vector", 386,
                  typeid(vector<BmnUpstreamTracking::twotracks>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnUpstreamTrackingcLcLtwotracksgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnUpstreamTracking::twotracks>) );
      instance.SetNew(&new_vectorlEBmnUpstreamTrackingcLcLtwotracksgR);
      instance.SetNewArray(&newArray_vectorlEBmnUpstreamTrackingcLcLtwotracksgR);
      instance.SetDelete(&delete_vectorlEBmnUpstreamTrackingcLcLtwotracksgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnUpstreamTrackingcLcLtwotracksgR);
      instance.SetDestructor(&destruct_vectorlEBmnUpstreamTrackingcLcLtwotracksgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnUpstreamTracking::twotracks> >()));

      ::ROOT::AddClassAlternate("vector<BmnUpstreamTracking::twotracks>","std::vector<BmnUpstreamTracking::twotracks, std::allocator<BmnUpstreamTracking::twotracks> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnUpstreamTracking::twotracks>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnUpstreamTrackingcLcLtwotracksgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnUpstreamTracking::twotracks>*)nullptr)->GetClass();
      vectorlEBmnUpstreamTrackingcLcLtwotracksgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnUpstreamTrackingcLcLtwotracksgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnUpstreamTrackingcLcLtwotracksgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnUpstreamTracking::twotracks> : new vector<BmnUpstreamTracking::twotracks>;
   }
   static void *newArray_vectorlEBmnUpstreamTrackingcLcLtwotracksgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnUpstreamTracking::twotracks>[nElements] : new vector<BmnUpstreamTracking::twotracks>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnUpstreamTrackingcLcLtwotracksgR(void *p) {
      delete ((vector<BmnUpstreamTracking::twotracks>*)p);
   }
   static void deleteArray_vectorlEBmnUpstreamTrackingcLcLtwotracksgR(void *p) {
      delete [] ((vector<BmnUpstreamTracking::twotracks>*)p);
   }
   static void destruct_vectorlEBmnUpstreamTrackingcLcLtwotracksgR(void *p) {
      typedef vector<BmnUpstreamTracking::twotracks> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnUpstreamTracking::twotracks>

namespace ROOT {
   static TClass *vectorlEBmnUpstreamTrackingcLcLMC_pointsgR_Dictionary();
   static void vectorlEBmnUpstreamTrackingcLcLMC_pointsgR_TClassManip(TClass*);
   static void *new_vectorlEBmnUpstreamTrackingcLcLMC_pointsgR(void *p = nullptr);
   static void *newArray_vectorlEBmnUpstreamTrackingcLcLMC_pointsgR(Long_t size, void *p);
   static void delete_vectorlEBmnUpstreamTrackingcLcLMC_pointsgR(void *p);
   static void deleteArray_vectorlEBmnUpstreamTrackingcLcLMC_pointsgR(void *p);
   static void destruct_vectorlEBmnUpstreamTrackingcLcLMC_pointsgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnUpstreamTracking::MC_points>*)
   {
      vector<BmnUpstreamTracking::MC_points> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnUpstreamTracking::MC_points>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnUpstreamTracking::MC_points>", -2, "vector", 386,
                  typeid(vector<BmnUpstreamTracking::MC_points>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnUpstreamTrackingcLcLMC_pointsgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnUpstreamTracking::MC_points>) );
      instance.SetNew(&new_vectorlEBmnUpstreamTrackingcLcLMC_pointsgR);
      instance.SetNewArray(&newArray_vectorlEBmnUpstreamTrackingcLcLMC_pointsgR);
      instance.SetDelete(&delete_vectorlEBmnUpstreamTrackingcLcLMC_pointsgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnUpstreamTrackingcLcLMC_pointsgR);
      instance.SetDestructor(&destruct_vectorlEBmnUpstreamTrackingcLcLMC_pointsgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnUpstreamTracking::MC_points> >()));

      ::ROOT::AddClassAlternate("vector<BmnUpstreamTracking::MC_points>","std::vector<BmnUpstreamTracking::MC_points, std::allocator<BmnUpstreamTracking::MC_points> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnUpstreamTracking::MC_points>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnUpstreamTrackingcLcLMC_pointsgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnUpstreamTracking::MC_points>*)nullptr)->GetClass();
      vectorlEBmnUpstreamTrackingcLcLMC_pointsgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnUpstreamTrackingcLcLMC_pointsgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnUpstreamTrackingcLcLMC_pointsgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnUpstreamTracking::MC_points> : new vector<BmnUpstreamTracking::MC_points>;
   }
   static void *newArray_vectorlEBmnUpstreamTrackingcLcLMC_pointsgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnUpstreamTracking::MC_points>[nElements] : new vector<BmnUpstreamTracking::MC_points>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnUpstreamTrackingcLcLMC_pointsgR(void *p) {
      delete ((vector<BmnUpstreamTracking::MC_points>*)p);
   }
   static void deleteArray_vectorlEBmnUpstreamTrackingcLcLMC_pointsgR(void *p) {
      delete [] ((vector<BmnUpstreamTracking::MC_points>*)p);
   }
   static void destruct_vectorlEBmnUpstreamTrackingcLcLMC_pointsgR(void *p) {
      typedef vector<BmnUpstreamTracking::MC_points> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnUpstreamTracking::MC_points>

namespace {
  void TriggerDictionaryInitialization_G__BmnGlobalTrackingDict_Impl() {
    static const char* headers[] = {
"BmnGlobalTrack.h",
"BmnGlobalTracking.h",
"BmnUpstreamTracking.h",
"BmnTriggersCheck.h",
"BmnVertexFinder.h",
"SrcVertexFinder.h",
"BmnGemDchTrack.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/database/uni_db",
"/data/yaopeng/bmnroot_Yaopeng/field",
"/data/yaopeng/bmnroot_Yaopeng/base",
"/data/yaopeng/bmnroot_Yaopeng/base/data",
"/data/yaopeng/bmnroot_Yaopeng/base/raw",
"/data/yaopeng/bmnroot_Yaopeng/base/header",
"/data/yaopeng/bmnroot_Yaopeng/base/cbm",
"/data/yaopeng/bmnroot_Yaopeng/base/math",
"/data/yaopeng/bmnroot_Yaopeng/detectors/dch",
"/data/yaopeng/bmnroot_Yaopeng/detectors/mwpc",
"/data/yaopeng/bmnroot_Yaopeng/detectors/silicon",
"/data/yaopeng/bmnroot_Yaopeng/detectors/gem",
"/data/yaopeng/bmnroot_Yaopeng/detectors/sts",
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/KF",
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/KF/Interface",
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/globaltracking",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/reconstruction/globaltracking/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__BmnGlobalTrackingDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$BmnGlobalTrack.h")))  BmnGlobalTrack;
class __attribute__((annotate("$clingAutoload$BmnGlobalTracking.h")))  BmnGlobalTracking;
class __attribute__((annotate("$clingAutoload$BmnUpstreamTracking.h")))  BmnUpstreamTracking;
class __attribute__((annotate("$clingAutoload$BmnTriggersCheck.h")))  BmnTriggersCheck;
class __attribute__((annotate("$clingAutoload$BmnVertexFinder.h")))  BmnVertexFinder;
class __attribute__((annotate("$clingAutoload$SrcVertexFinder.h")))  SrcVertexFinder;
class __attribute__((annotate("$clingAutoload$BmnGemDchTrack.h")))  BmnGemDchTrack;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__BmnGlobalTrackingDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "BmnGlobalTrack.h"
#include "BmnGlobalTracking.h"
#include "BmnUpstreamTracking.h"
#include "BmnTriggersCheck.h"
#include "BmnVertexFinder.h"
#include "SrcVertexFinder.h"
#include "BmnGemDchTrack.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BmnGemDchTrack", payloadCode, "@",
"BmnGlobalTrack", payloadCode, "@",
"BmnGlobalTracking", payloadCode, "@",
"BmnTriggersCheck", payloadCode, "@",
"BmnUpstreamTracking", payloadCode, "@",
"BmnVertexFinder", payloadCode, "@",
"SrcVertexFinder", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__BmnGlobalTrackingDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__BmnGlobalTrackingDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__BmnGlobalTrackingDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__BmnGlobalTrackingDict() {
  TriggerDictionaryInitialization_G__BmnGlobalTrackingDict_Impl();
}
