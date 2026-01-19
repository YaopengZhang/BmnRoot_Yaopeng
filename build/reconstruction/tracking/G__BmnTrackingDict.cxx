// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIreconstructiondItrackingdIG__BmnTrackingDict
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
#include "BmnStsVectorFinder.h"
#include "BmnCellAutoTracking.h"
#include "BmnInnerTrackingRun7.h"
#include "SrcInnerTrackingRun7.h"
#include "BmnBeamTracking.h"
#include "BmnCellDuet.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BmnStsVectorFinder(void *p = nullptr);
   static void *newArray_BmnStsVectorFinder(Long_t size, void *p);
   static void delete_BmnStsVectorFinder(void *p);
   static void deleteArray_BmnStsVectorFinder(void *p);
   static void destruct_BmnStsVectorFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnStsVectorFinder*)
   {
      ::BmnStsVectorFinder *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnStsVectorFinder >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnStsVectorFinder", ::BmnStsVectorFinder::Class_Version(), "BmnStsVectorFinder.h", 31,
                  typeid(::BmnStsVectorFinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnStsVectorFinder::Dictionary, isa_proxy, 4,
                  sizeof(::BmnStsVectorFinder) );
      instance.SetNew(&new_BmnStsVectorFinder);
      instance.SetNewArray(&newArray_BmnStsVectorFinder);
      instance.SetDelete(&delete_BmnStsVectorFinder);
      instance.SetDeleteArray(&deleteArray_BmnStsVectorFinder);
      instance.SetDestructor(&destruct_BmnStsVectorFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnStsVectorFinder*)
   {
      return GenerateInitInstanceLocal((::BmnStsVectorFinder*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnStsVectorFinder*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnCellDuet(void *p = nullptr);
   static void *newArray_BmnCellDuet(Long_t size, void *p);
   static void delete_BmnCellDuet(void *p);
   static void deleteArray_BmnCellDuet(void *p);
   static void destruct_BmnCellDuet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnCellDuet*)
   {
      ::BmnCellDuet *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnCellDuet >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnCellDuet", ::BmnCellDuet::Class_Version(), "BmnCellDuet.h", 17,
                  typeid(::BmnCellDuet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnCellDuet::Dictionary, isa_proxy, 4,
                  sizeof(::BmnCellDuet) );
      instance.SetNew(&new_BmnCellDuet);
      instance.SetNewArray(&newArray_BmnCellDuet);
      instance.SetDelete(&delete_BmnCellDuet);
      instance.SetDeleteArray(&deleteArray_BmnCellDuet);
      instance.SetDestructor(&destruct_BmnCellDuet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnCellDuet*)
   {
      return GenerateInitInstanceLocal((::BmnCellDuet*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnCellDuet*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnCellAutoTracking(void *p = nullptr);
   static void *newArray_BmnCellAutoTracking(Long_t size, void *p);
   static void delete_BmnCellAutoTracking(void *p);
   static void deleteArray_BmnCellAutoTracking(void *p);
   static void destruct_BmnCellAutoTracking(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnCellAutoTracking*)
   {
      ::BmnCellAutoTracking *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnCellAutoTracking >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnCellAutoTracking", ::BmnCellAutoTracking::Class_Version(), "BmnCellAutoTracking.h", 35,
                  typeid(::BmnCellAutoTracking), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnCellAutoTracking::Dictionary, isa_proxy, 4,
                  sizeof(::BmnCellAutoTracking) );
      instance.SetNew(&new_BmnCellAutoTracking);
      instance.SetNewArray(&newArray_BmnCellAutoTracking);
      instance.SetDelete(&delete_BmnCellAutoTracking);
      instance.SetDeleteArray(&deleteArray_BmnCellAutoTracking);
      instance.SetDestructor(&destruct_BmnCellAutoTracking);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnCellAutoTracking*)
   {
      return GenerateInitInstanceLocal((::BmnCellAutoTracking*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnCellAutoTracking*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnInnerTrackingRun7(void *p = nullptr);
   static void *newArray_BmnInnerTrackingRun7(Long_t size, void *p);
   static void delete_BmnInnerTrackingRun7(void *p);
   static void deleteArray_BmnInnerTrackingRun7(void *p);
   static void destruct_BmnInnerTrackingRun7(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnInnerTrackingRun7*)
   {
      ::BmnInnerTrackingRun7 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnInnerTrackingRun7 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnInnerTrackingRun7", ::BmnInnerTrackingRun7::Class_Version(), "BmnInnerTrackingRun7.h", 35,
                  typeid(::BmnInnerTrackingRun7), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnInnerTrackingRun7::Dictionary, isa_proxy, 4,
                  sizeof(::BmnInnerTrackingRun7) );
      instance.SetNew(&new_BmnInnerTrackingRun7);
      instance.SetNewArray(&newArray_BmnInnerTrackingRun7);
      instance.SetDelete(&delete_BmnInnerTrackingRun7);
      instance.SetDeleteArray(&deleteArray_BmnInnerTrackingRun7);
      instance.SetDestructor(&destruct_BmnInnerTrackingRun7);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnInnerTrackingRun7*)
   {
      return GenerateInitInstanceLocal((::BmnInnerTrackingRun7*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnInnerTrackingRun7*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_SrcInnerTrackingRun7(void *p = nullptr);
   static void *newArray_SrcInnerTrackingRun7(Long_t size, void *p);
   static void delete_SrcInnerTrackingRun7(void *p);
   static void deleteArray_SrcInnerTrackingRun7(void *p);
   static void destruct_SrcInnerTrackingRun7(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SrcInnerTrackingRun7*)
   {
      ::SrcInnerTrackingRun7 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SrcInnerTrackingRun7 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SrcInnerTrackingRun7", ::SrcInnerTrackingRun7::Class_Version(), "SrcInnerTrackingRun7.h", 34,
                  typeid(::SrcInnerTrackingRun7), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SrcInnerTrackingRun7::Dictionary, isa_proxy, 4,
                  sizeof(::SrcInnerTrackingRun7) );
      instance.SetNew(&new_SrcInnerTrackingRun7);
      instance.SetNewArray(&newArray_SrcInnerTrackingRun7);
      instance.SetDelete(&delete_SrcInnerTrackingRun7);
      instance.SetDeleteArray(&deleteArray_SrcInnerTrackingRun7);
      instance.SetDestructor(&destruct_SrcInnerTrackingRun7);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SrcInnerTrackingRun7*)
   {
      return GenerateInitInstanceLocal((::SrcInnerTrackingRun7*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::SrcInnerTrackingRun7*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnBeamTracking(void *p = nullptr);
   static void *newArray_BmnBeamTracking(Long_t size, void *p);
   static void delete_BmnBeamTracking(void *p);
   static void deleteArray_BmnBeamTracking(void *p);
   static void destruct_BmnBeamTracking(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnBeamTracking*)
   {
      ::BmnBeamTracking *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnBeamTracking >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnBeamTracking", ::BmnBeamTracking::Class_Version(), "BmnBeamTracking.h", 26,
                  typeid(::BmnBeamTracking), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnBeamTracking::Dictionary, isa_proxy, 4,
                  sizeof(::BmnBeamTracking) );
      instance.SetNew(&new_BmnBeamTracking);
      instance.SetNewArray(&newArray_BmnBeamTracking);
      instance.SetDelete(&delete_BmnBeamTracking);
      instance.SetDeleteArray(&deleteArray_BmnBeamTracking);
      instance.SetDestructor(&destruct_BmnBeamTracking);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnBeamTracking*)
   {
      return GenerateInitInstanceLocal((::BmnBeamTracking*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnBeamTracking*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnStsVectorFinder::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnStsVectorFinder::Class_Name()
{
   return "BmnStsVectorFinder";
}

//______________________________________________________________________________
const char *BmnStsVectorFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnStsVectorFinder*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnStsVectorFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnStsVectorFinder*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnStsVectorFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnStsVectorFinder*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnStsVectorFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnStsVectorFinder*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnCellDuet::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnCellDuet::Class_Name()
{
   return "BmnCellDuet";
}

//______________________________________________________________________________
const char *BmnCellDuet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCellDuet*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnCellDuet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCellDuet*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnCellDuet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCellDuet*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnCellDuet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCellDuet*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnCellAutoTracking::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnCellAutoTracking::Class_Name()
{
   return "BmnCellAutoTracking";
}

//______________________________________________________________________________
const char *BmnCellAutoTracking::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCellAutoTracking*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnCellAutoTracking::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCellAutoTracking*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnCellAutoTracking::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCellAutoTracking*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnCellAutoTracking::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCellAutoTracking*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnInnerTrackingRun7::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnInnerTrackingRun7::Class_Name()
{
   return "BmnInnerTrackingRun7";
}

//______________________________________________________________________________
const char *BmnInnerTrackingRun7::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnInnerTrackingRun7*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnInnerTrackingRun7::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnInnerTrackingRun7*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnInnerTrackingRun7::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnInnerTrackingRun7*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnInnerTrackingRun7::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnInnerTrackingRun7*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SrcInnerTrackingRun7::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SrcInnerTrackingRun7::Class_Name()
{
   return "SrcInnerTrackingRun7";
}

//______________________________________________________________________________
const char *SrcInnerTrackingRun7::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SrcInnerTrackingRun7*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SrcInnerTrackingRun7::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SrcInnerTrackingRun7*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SrcInnerTrackingRun7::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SrcInnerTrackingRun7*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SrcInnerTrackingRun7::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SrcInnerTrackingRun7*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnBeamTracking::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnBeamTracking::Class_Name()
{
   return "BmnBeamTracking";
}

//______________________________________________________________________________
const char *BmnBeamTracking::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBeamTracking*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnBeamTracking::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBeamTracking*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnBeamTracking::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBeamTracking*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnBeamTracking::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBeamTracking*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnStsVectorFinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnStsVectorFinder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnStsVectorFinder::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnStsVectorFinder::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnStsVectorFinder(void *p) {
      return  p ? new(p) ::BmnStsVectorFinder : new ::BmnStsVectorFinder;
   }
   static void *newArray_BmnStsVectorFinder(Long_t nElements, void *p) {
      return p ? new(p) ::BmnStsVectorFinder[nElements] : new ::BmnStsVectorFinder[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnStsVectorFinder(void *p) {
      delete ((::BmnStsVectorFinder*)p);
   }
   static void deleteArray_BmnStsVectorFinder(void *p) {
      delete [] ((::BmnStsVectorFinder*)p);
   }
   static void destruct_BmnStsVectorFinder(void *p) {
      typedef ::BmnStsVectorFinder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnStsVectorFinder

//______________________________________________________________________________
void BmnCellDuet::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnCellDuet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnCellDuet::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnCellDuet::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnCellDuet(void *p) {
      return  p ? new(p) ::BmnCellDuet : new ::BmnCellDuet;
   }
   static void *newArray_BmnCellDuet(Long_t nElements, void *p) {
      return p ? new(p) ::BmnCellDuet[nElements] : new ::BmnCellDuet[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnCellDuet(void *p) {
      delete ((::BmnCellDuet*)p);
   }
   static void deleteArray_BmnCellDuet(void *p) {
      delete [] ((::BmnCellDuet*)p);
   }
   static void destruct_BmnCellDuet(void *p) {
      typedef ::BmnCellDuet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnCellDuet

//______________________________________________________________________________
void BmnCellAutoTracking::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnCellAutoTracking.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnCellAutoTracking::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnCellAutoTracking::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnCellAutoTracking(void *p) {
      return  p ? new(p) ::BmnCellAutoTracking : new ::BmnCellAutoTracking;
   }
   static void *newArray_BmnCellAutoTracking(Long_t nElements, void *p) {
      return p ? new(p) ::BmnCellAutoTracking[nElements] : new ::BmnCellAutoTracking[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnCellAutoTracking(void *p) {
      delete ((::BmnCellAutoTracking*)p);
   }
   static void deleteArray_BmnCellAutoTracking(void *p) {
      delete [] ((::BmnCellAutoTracking*)p);
   }
   static void destruct_BmnCellAutoTracking(void *p) {
      typedef ::BmnCellAutoTracking current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnCellAutoTracking

//______________________________________________________________________________
void BmnInnerTrackingRun7::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnInnerTrackingRun7.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnInnerTrackingRun7::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnInnerTrackingRun7::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnInnerTrackingRun7(void *p) {
      return  p ? new(p) ::BmnInnerTrackingRun7 : new ::BmnInnerTrackingRun7;
   }
   static void *newArray_BmnInnerTrackingRun7(Long_t nElements, void *p) {
      return p ? new(p) ::BmnInnerTrackingRun7[nElements] : new ::BmnInnerTrackingRun7[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnInnerTrackingRun7(void *p) {
      delete ((::BmnInnerTrackingRun7*)p);
   }
   static void deleteArray_BmnInnerTrackingRun7(void *p) {
      delete [] ((::BmnInnerTrackingRun7*)p);
   }
   static void destruct_BmnInnerTrackingRun7(void *p) {
      typedef ::BmnInnerTrackingRun7 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnInnerTrackingRun7

//______________________________________________________________________________
void SrcInnerTrackingRun7::Streamer(TBuffer &R__b)
{
   // Stream an object of class SrcInnerTrackingRun7.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SrcInnerTrackingRun7::Class(),this);
   } else {
      R__b.WriteClassBuffer(SrcInnerTrackingRun7::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_SrcInnerTrackingRun7(void *p) {
      return  p ? new(p) ::SrcInnerTrackingRun7 : new ::SrcInnerTrackingRun7;
   }
   static void *newArray_SrcInnerTrackingRun7(Long_t nElements, void *p) {
      return p ? new(p) ::SrcInnerTrackingRun7[nElements] : new ::SrcInnerTrackingRun7[nElements];
   }
   // Wrapper around operator delete
   static void delete_SrcInnerTrackingRun7(void *p) {
      delete ((::SrcInnerTrackingRun7*)p);
   }
   static void deleteArray_SrcInnerTrackingRun7(void *p) {
      delete [] ((::SrcInnerTrackingRun7*)p);
   }
   static void destruct_SrcInnerTrackingRun7(void *p) {
      typedef ::SrcInnerTrackingRun7 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::SrcInnerTrackingRun7

//______________________________________________________________________________
void BmnBeamTracking::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnBeamTracking.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnBeamTracking::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnBeamTracking::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnBeamTracking(void *p) {
      return  p ? new(p) ::BmnBeamTracking : new ::BmnBeamTracking;
   }
   static void *newArray_BmnBeamTracking(Long_t nElements, void *p) {
      return p ? new(p) ::BmnBeamTracking[nElements] : new ::BmnBeamTracking[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnBeamTracking(void *p) {
      delete ((::BmnBeamTracking*)p);
   }
   static void deleteArray_BmnBeamTracking(void *p) {
      delete [] ((::BmnBeamTracking*)p);
   }
   static void destruct_BmnBeamTracking(void *p) {
      typedef ::BmnBeamTracking current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnBeamTracking

namespace ROOT {
   static TClass *maplEDetectorIdcOboolgR_Dictionary();
   static void maplEDetectorIdcOboolgR_TClassManip(TClass*);
   static void *new_maplEDetectorIdcOboolgR(void *p = nullptr);
   static void *newArray_maplEDetectorIdcOboolgR(Long_t size, void *p);
   static void delete_maplEDetectorIdcOboolgR(void *p);
   static void deleteArray_maplEDetectorIdcOboolgR(void *p);
   static void destruct_maplEDetectorIdcOboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<DetectorId,bool>*)
   {
      map<DetectorId,bool> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<DetectorId,bool>));
      static ::ROOT::TGenericClassInfo 
         instance("map<DetectorId,bool>", -2, "map", 100,
                  typeid(map<DetectorId,bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEDetectorIdcOboolgR_Dictionary, isa_proxy, 0,
                  sizeof(map<DetectorId,bool>) );
      instance.SetNew(&new_maplEDetectorIdcOboolgR);
      instance.SetNewArray(&newArray_maplEDetectorIdcOboolgR);
      instance.SetDelete(&delete_maplEDetectorIdcOboolgR);
      instance.SetDeleteArray(&deleteArray_maplEDetectorIdcOboolgR);
      instance.SetDestructor(&destruct_maplEDetectorIdcOboolgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<DetectorId,bool> >()));

      ::ROOT::AddClassAlternate("map<DetectorId,bool>","std::map<DetectorId, bool, std::less<DetectorId>, std::allocator<std::pair<DetectorId const, bool> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<DetectorId,bool>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEDetectorIdcOboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<DetectorId,bool>*)nullptr)->GetClass();
      maplEDetectorIdcOboolgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEDetectorIdcOboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEDetectorIdcOboolgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<DetectorId,bool> : new map<DetectorId,bool>;
   }
   static void *newArray_maplEDetectorIdcOboolgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<DetectorId,bool>[nElements] : new map<DetectorId,bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEDetectorIdcOboolgR(void *p) {
      delete ((map<DetectorId,bool>*)p);
   }
   static void deleteArray_maplEDetectorIdcOboolgR(void *p) {
      delete [] ((map<DetectorId,bool>*)p);
   }
   static void destruct_maplEDetectorIdcOboolgR(void *p) {
      typedef map<DetectorId,bool> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<DetectorId,bool>

namespace {
  void TriggerDictionaryInitialization_G__BmnTrackingDict_Impl() {
    static const char* headers[] = {
"BmnStsVectorFinder.h",
"BmnCellAutoTracking.h",
"BmnInnerTrackingRun7.h",
"SrcInnerTrackingRun7.h",
"BmnBeamTracking.h",
"BmnCellDuet.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/field",
"/data/yaopeng/bmnroot_Yaopeng/base",
"/data/yaopeng/bmnroot_Yaopeng/base/data",
"/data/yaopeng/bmnroot_Yaopeng/base/math",
"/data/yaopeng/bmnroot_Yaopeng/base/cbm",
"/data/yaopeng/bmnroot_Yaopeng/detectors/gem",
"/data/yaopeng/bmnroot_Yaopeng/detectors/silicon",
"/data/yaopeng/bmnroot_Yaopeng/detectors/SiBT",
"/data/yaopeng/bmnroot_Yaopeng/detectors/sts",
"/data/yaopeng/bmnroot_Yaopeng/steering",
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/KF",
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/KF/Interface",
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/globaltracking",
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/tracking",
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/tracking/sts",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/reconstruction/tracking/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__BmnTrackingDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$BmnStsVectorFinder.h")))  BmnStsVectorFinder;
class __attribute__((annotate("$clingAutoload$BmnCellDuet.h")))  __attribute__((annotate("$clingAutoload$BmnCellAutoTracking.h")))  BmnCellDuet;
class __attribute__((annotate("$clingAutoload$BmnCellAutoTracking.h")))  BmnCellAutoTracking;
class __attribute__((annotate("$clingAutoload$BmnInnerTrackingRun7.h")))  BmnInnerTrackingRun7;
class __attribute__((annotate("$clingAutoload$SrcInnerTrackingRun7.h")))  SrcInnerTrackingRun7;
class __attribute__((annotate("$clingAutoload$BmnBeamTracking.h")))  BmnBeamTracking;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__BmnTrackingDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "BmnStsVectorFinder.h"
#include "BmnCellAutoTracking.h"
#include "BmnInnerTrackingRun7.h"
#include "SrcInnerTrackingRun7.h"
#include "BmnBeamTracking.h"
#include "BmnCellDuet.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BmnBeamTracking", payloadCode, "@",
"BmnCellAutoTracking", payloadCode, "@",
"BmnCellDuet", payloadCode, "@",
"BmnInnerTrackingRun7", payloadCode, "@",
"BmnStsVectorFinder", payloadCode, "@",
"SrcInnerTrackingRun7", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__BmnTrackingDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__BmnTrackingDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__BmnTrackingDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__BmnTrackingDict() {
  TriggerDictionaryInitialization_G__BmnTrackingDict_Impl();
}
