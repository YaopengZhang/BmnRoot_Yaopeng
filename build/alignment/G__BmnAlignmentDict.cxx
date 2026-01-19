// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIalignmentdIG__BmnAlignmentDict
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
#include "BmnMilleContainer.h"
#include "BmnGlobalAlignment.h"
#include "BmnGemAlignCorrections.h"
#include "BmnSiliconAlignCorrections.h"
#include "BmnMille.h"
#include "BmnAlignCorrections.h"
#include "BmnResiduals.h"
#include "BmnInnTrackerAlign.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BmnMilleContainer(void *p = nullptr);
   static void *newArray_BmnMilleContainer(Long_t size, void *p);
   static void delete_BmnMilleContainer(void *p);
   static void deleteArray_BmnMilleContainer(void *p);
   static void destruct_BmnMilleContainer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMilleContainer*)
   {
      ::BmnMilleContainer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMilleContainer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMilleContainer", ::BmnMilleContainer::Class_Version(), "BmnMilleContainer.h", 9,
                  typeid(::BmnMilleContainer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMilleContainer::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMilleContainer) );
      instance.SetNew(&new_BmnMilleContainer);
      instance.SetNewArray(&newArray_BmnMilleContainer);
      instance.SetDelete(&delete_BmnMilleContainer);
      instance.SetDeleteArray(&deleteArray_BmnMilleContainer);
      instance.SetDestructor(&destruct_BmnMilleContainer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMilleContainer*)
   {
      return GenerateInitInstanceLocal((::BmnMilleContainer*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMilleContainer*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnMille_Dictionary();
   static void BmnMille_TClassManip(TClass*);
   static void delete_BmnMille(void *p);
   static void deleteArray_BmnMille(void *p);
   static void destruct_BmnMille(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMille*)
   {
      ::BmnMille *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnMille));
      static ::ROOT::TGenericClassInfo 
         instance("BmnMille", "BmnMille.h", 11,
                  typeid(::BmnMille), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnMille_Dictionary, isa_proxy, 4,
                  sizeof(::BmnMille) );
      instance.SetDelete(&delete_BmnMille);
      instance.SetDeleteArray(&deleteArray_BmnMille);
      instance.SetDestructor(&destruct_BmnMille);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMille*)
   {
      return GenerateInitInstanceLocal((::BmnMille*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMille*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnMille_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnMille*)nullptr)->GetClass();
      BmnMille_TClassManip(theClass);
   return theClass;
   }

   static void BmnMille_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnAlignCorrections(void *p = nullptr);
   static void *newArray_BmnAlignCorrections(Long_t size, void *p);
   static void delete_BmnAlignCorrections(void *p);
   static void deleteArray_BmnAlignCorrections(void *p);
   static void destruct_BmnAlignCorrections(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnAlignCorrections*)
   {
      ::BmnAlignCorrections *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnAlignCorrections >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnAlignCorrections", ::BmnAlignCorrections::Class_Version(), "BmnAlignCorrections.h", 10,
                  typeid(::BmnAlignCorrections), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnAlignCorrections::Dictionary, isa_proxy, 4,
                  sizeof(::BmnAlignCorrections) );
      instance.SetNew(&new_BmnAlignCorrections);
      instance.SetNewArray(&newArray_BmnAlignCorrections);
      instance.SetDelete(&delete_BmnAlignCorrections);
      instance.SetDeleteArray(&deleteArray_BmnAlignCorrections);
      instance.SetDestructor(&destruct_BmnAlignCorrections);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnAlignCorrections*)
   {
      return GenerateInitInstanceLocal((::BmnAlignCorrections*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnAlignCorrections*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnGemAlignCorrections(void *p = nullptr);
   static void *newArray_BmnGemAlignCorrections(Long_t size, void *p);
   static void delete_BmnGemAlignCorrections(void *p);
   static void deleteArray_BmnGemAlignCorrections(void *p);
   static void destruct_BmnGemAlignCorrections(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemAlignCorrections*)
   {
      ::BmnGemAlignCorrections *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemAlignCorrections >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemAlignCorrections", ::BmnGemAlignCorrections::Class_Version(), "BmnGemAlignCorrections.h", 11,
                  typeid(::BmnGemAlignCorrections), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemAlignCorrections::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemAlignCorrections) );
      instance.SetNew(&new_BmnGemAlignCorrections);
      instance.SetNewArray(&newArray_BmnGemAlignCorrections);
      instance.SetDelete(&delete_BmnGemAlignCorrections);
      instance.SetDeleteArray(&deleteArray_BmnGemAlignCorrections);
      instance.SetDestructor(&destruct_BmnGemAlignCorrections);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemAlignCorrections*)
   {
      return GenerateInitInstanceLocal((::BmnGemAlignCorrections*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemAlignCorrections*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiliconAlignCorrections(void *p = nullptr);
   static void *newArray_BmnSiliconAlignCorrections(Long_t size, void *p);
   static void delete_BmnSiliconAlignCorrections(void *p);
   static void deleteArray_BmnSiliconAlignCorrections(void *p);
   static void destruct_BmnSiliconAlignCorrections(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiliconAlignCorrections*)
   {
      ::BmnSiliconAlignCorrections *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiliconAlignCorrections >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiliconAlignCorrections", ::BmnSiliconAlignCorrections::Class_Version(), "BmnSiliconAlignCorrections.h", 11,
                  typeid(::BmnSiliconAlignCorrections), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiliconAlignCorrections::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiliconAlignCorrections) );
      instance.SetNew(&new_BmnSiliconAlignCorrections);
      instance.SetNewArray(&newArray_BmnSiliconAlignCorrections);
      instance.SetDelete(&delete_BmnSiliconAlignCorrections);
      instance.SetDeleteArray(&deleteArray_BmnSiliconAlignCorrections);
      instance.SetDestructor(&destruct_BmnSiliconAlignCorrections);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiliconAlignCorrections*)
   {
      return GenerateInitInstanceLocal((::BmnSiliconAlignCorrections*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiliconAlignCorrections*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnGlobalAlignment(void *p = nullptr);
   static void *newArray_BmnGlobalAlignment(Long_t size, void *p);
   static void delete_BmnGlobalAlignment(void *p);
   static void deleteArray_BmnGlobalAlignment(void *p);
   static void destruct_BmnGlobalAlignment(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGlobalAlignment*)
   {
      ::BmnGlobalAlignment *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGlobalAlignment >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGlobalAlignment", ::BmnGlobalAlignment::Class_Version(), "BmnGlobalAlignment.h", 54,
                  typeid(::BmnGlobalAlignment), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGlobalAlignment::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGlobalAlignment) );
      instance.SetNew(&new_BmnGlobalAlignment);
      instance.SetNewArray(&newArray_BmnGlobalAlignment);
      instance.SetDelete(&delete_BmnGlobalAlignment);
      instance.SetDeleteArray(&deleteArray_BmnGlobalAlignment);
      instance.SetDestructor(&destruct_BmnGlobalAlignment);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGlobalAlignment*)
   {
      return GenerateInitInstanceLocal((::BmnGlobalAlignment*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGlobalAlignment*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnResiduals(void *p = nullptr);
   static void *newArray_BmnResiduals(Long_t size, void *p);
   static void delete_BmnResiduals(void *p);
   static void deleteArray_BmnResiduals(void *p);
   static void destruct_BmnResiduals(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnResiduals*)
   {
      ::BmnResiduals *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnResiduals >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnResiduals", ::BmnResiduals::Class_Version(), "BmnResiduals.h", 20,
                  typeid(::BmnResiduals), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnResiduals::Dictionary, isa_proxy, 4,
                  sizeof(::BmnResiduals) );
      instance.SetNew(&new_BmnResiduals);
      instance.SetNewArray(&newArray_BmnResiduals);
      instance.SetDelete(&delete_BmnResiduals);
      instance.SetDeleteArray(&deleteArray_BmnResiduals);
      instance.SetDestructor(&destruct_BmnResiduals);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnResiduals*)
   {
      return GenerateInitInstanceLocal((::BmnResiduals*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnResiduals*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnInnTrackerAlign(void *p = nullptr);
   static void *newArray_BmnInnTrackerAlign(Long_t size, void *p);
   static void delete_BmnInnTrackerAlign(void *p);
   static void deleteArray_BmnInnTrackerAlign(void *p);
   static void destruct_BmnInnTrackerAlign(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnInnTrackerAlign*)
   {
      ::BmnInnTrackerAlign *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnInnTrackerAlign >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnInnTrackerAlign", ::BmnInnTrackerAlign::Class_Version(), "BmnInnTrackerAlign.h", 33,
                  typeid(::BmnInnTrackerAlign), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnInnTrackerAlign::Dictionary, isa_proxy, 4,
                  sizeof(::BmnInnTrackerAlign) );
      instance.SetNew(&new_BmnInnTrackerAlign);
      instance.SetNewArray(&newArray_BmnInnTrackerAlign);
      instance.SetDelete(&delete_BmnInnTrackerAlign);
      instance.SetDeleteArray(&deleteArray_BmnInnTrackerAlign);
      instance.SetDestructor(&destruct_BmnInnTrackerAlign);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnInnTrackerAlign*)
   {
      return GenerateInitInstanceLocal((::BmnInnTrackerAlign*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnInnTrackerAlign*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnMilleContainer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMilleContainer::Class_Name()
{
   return "BmnMilleContainer";
}

//______________________________________________________________________________
const char *BmnMilleContainer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMilleContainer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMilleContainer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMilleContainer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMilleContainer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMilleContainer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMilleContainer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMilleContainer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnAlignCorrections::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnAlignCorrections::Class_Name()
{
   return "BmnAlignCorrections";
}

//______________________________________________________________________________
const char *BmnAlignCorrections::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnAlignCorrections*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnAlignCorrections::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnAlignCorrections*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnAlignCorrections::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnAlignCorrections*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnAlignCorrections::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnAlignCorrections*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemAlignCorrections::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemAlignCorrections::Class_Name()
{
   return "BmnGemAlignCorrections";
}

//______________________________________________________________________________
const char *BmnGemAlignCorrections::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemAlignCorrections*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemAlignCorrections::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemAlignCorrections*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemAlignCorrections::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemAlignCorrections*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemAlignCorrections::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemAlignCorrections*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiliconAlignCorrections::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiliconAlignCorrections::Class_Name()
{
   return "BmnSiliconAlignCorrections";
}

//______________________________________________________________________________
const char *BmnSiliconAlignCorrections::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconAlignCorrections*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiliconAlignCorrections::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconAlignCorrections*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiliconAlignCorrections::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconAlignCorrections*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiliconAlignCorrections::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconAlignCorrections*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGlobalAlignment::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGlobalAlignment::Class_Name()
{
   return "BmnGlobalAlignment";
}

//______________________________________________________________________________
const char *BmnGlobalAlignment::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGlobalAlignment*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGlobalAlignment::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGlobalAlignment*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGlobalAlignment::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGlobalAlignment*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGlobalAlignment::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGlobalAlignment*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnResiduals::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnResiduals::Class_Name()
{
   return "BmnResiduals";
}

//______________________________________________________________________________
const char *BmnResiduals::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnResiduals*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnResiduals::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnResiduals*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnResiduals::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnResiduals*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnResiduals::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnResiduals*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnInnTrackerAlign::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnInnTrackerAlign::Class_Name()
{
   return "BmnInnTrackerAlign";
}

//______________________________________________________________________________
const char *BmnInnTrackerAlign::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnInnTrackerAlign*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnInnTrackerAlign::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnInnTrackerAlign*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnInnTrackerAlign::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnInnTrackerAlign*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnInnTrackerAlign::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnInnTrackerAlign*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnMilleContainer::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMilleContainer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMilleContainer::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMilleContainer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMilleContainer(void *p) {
      return  p ? new(p) ::BmnMilleContainer : new ::BmnMilleContainer;
   }
   static void *newArray_BmnMilleContainer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMilleContainer[nElements] : new ::BmnMilleContainer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMilleContainer(void *p) {
      delete ((::BmnMilleContainer*)p);
   }
   static void deleteArray_BmnMilleContainer(void *p) {
      delete [] ((::BmnMilleContainer*)p);
   }
   static void destruct_BmnMilleContainer(void *p) {
      typedef ::BmnMilleContainer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMilleContainer

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnMille(void *p) {
      delete ((::BmnMille*)p);
   }
   static void deleteArray_BmnMille(void *p) {
      delete [] ((::BmnMille*)p);
   }
   static void destruct_BmnMille(void *p) {
      typedef ::BmnMille current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMille

//______________________________________________________________________________
void BmnAlignCorrections::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnAlignCorrections.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnAlignCorrections::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnAlignCorrections::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnAlignCorrections(void *p) {
      return  p ? new(p) ::BmnAlignCorrections : new ::BmnAlignCorrections;
   }
   static void *newArray_BmnAlignCorrections(Long_t nElements, void *p) {
      return p ? new(p) ::BmnAlignCorrections[nElements] : new ::BmnAlignCorrections[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnAlignCorrections(void *p) {
      delete ((::BmnAlignCorrections*)p);
   }
   static void deleteArray_BmnAlignCorrections(void *p) {
      delete [] ((::BmnAlignCorrections*)p);
   }
   static void destruct_BmnAlignCorrections(void *p) {
      typedef ::BmnAlignCorrections current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnAlignCorrections

//______________________________________________________________________________
void BmnGemAlignCorrections::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemAlignCorrections.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemAlignCorrections::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemAlignCorrections::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGemAlignCorrections(void *p) {
      return  p ? new(p) ::BmnGemAlignCorrections : new ::BmnGemAlignCorrections;
   }
   static void *newArray_BmnGemAlignCorrections(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGemAlignCorrections[nElements] : new ::BmnGemAlignCorrections[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGemAlignCorrections(void *p) {
      delete ((::BmnGemAlignCorrections*)p);
   }
   static void deleteArray_BmnGemAlignCorrections(void *p) {
      delete [] ((::BmnGemAlignCorrections*)p);
   }
   static void destruct_BmnGemAlignCorrections(void *p) {
      typedef ::BmnGemAlignCorrections current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemAlignCorrections

//______________________________________________________________________________
void BmnSiliconAlignCorrections::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiliconAlignCorrections.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiliconAlignCorrections::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiliconAlignCorrections::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiliconAlignCorrections(void *p) {
      return  p ? new(p) ::BmnSiliconAlignCorrections : new ::BmnSiliconAlignCorrections;
   }
   static void *newArray_BmnSiliconAlignCorrections(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiliconAlignCorrections[nElements] : new ::BmnSiliconAlignCorrections[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiliconAlignCorrections(void *p) {
      delete ((::BmnSiliconAlignCorrections*)p);
   }
   static void deleteArray_BmnSiliconAlignCorrections(void *p) {
      delete [] ((::BmnSiliconAlignCorrections*)p);
   }
   static void destruct_BmnSiliconAlignCorrections(void *p) {
      typedef ::BmnSiliconAlignCorrections current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiliconAlignCorrections

//______________________________________________________________________________
void BmnGlobalAlignment::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGlobalAlignment.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGlobalAlignment::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGlobalAlignment::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGlobalAlignment(void *p) {
      return  p ? new(p) ::BmnGlobalAlignment : new ::BmnGlobalAlignment;
   }
   static void *newArray_BmnGlobalAlignment(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGlobalAlignment[nElements] : new ::BmnGlobalAlignment[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGlobalAlignment(void *p) {
      delete ((::BmnGlobalAlignment*)p);
   }
   static void deleteArray_BmnGlobalAlignment(void *p) {
      delete [] ((::BmnGlobalAlignment*)p);
   }
   static void destruct_BmnGlobalAlignment(void *p) {
      typedef ::BmnGlobalAlignment current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGlobalAlignment

//______________________________________________________________________________
void BmnResiduals::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnResiduals.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnResiduals::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnResiduals::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnResiduals(void *p) {
      return  p ? new(p) ::BmnResiduals : new ::BmnResiduals;
   }
   static void *newArray_BmnResiduals(Long_t nElements, void *p) {
      return p ? new(p) ::BmnResiduals[nElements] : new ::BmnResiduals[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnResiduals(void *p) {
      delete ((::BmnResiduals*)p);
   }
   static void deleteArray_BmnResiduals(void *p) {
      delete [] ((::BmnResiduals*)p);
   }
   static void destruct_BmnResiduals(void *p) {
      typedef ::BmnResiduals current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnResiduals

//______________________________________________________________________________
void BmnInnTrackerAlign::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnInnTrackerAlign.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnInnTrackerAlign::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnInnTrackerAlign::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnInnTrackerAlign(void *p) {
      return  p ? new(p) ::BmnInnTrackerAlign : new ::BmnInnTrackerAlign;
   }
   static void *newArray_BmnInnTrackerAlign(Long_t nElements, void *p) {
      return p ? new(p) ::BmnInnTrackerAlign[nElements] : new ::BmnInnTrackerAlign[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnInnTrackerAlign(void *p) {
      delete ((::BmnInnTrackerAlign*)p);
   }
   static void deleteArray_BmnInnTrackerAlign(void *p) {
      delete [] ((::BmnInnTrackerAlign*)p);
   }
   static void destruct_BmnInnTrackerAlign(void *p) {
      typedef ::BmnInnTrackerAlign current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnInnTrackerAlign

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
   static TClass *maplEpairlEintcOintgRcOintgR_Dictionary();
   static void maplEpairlEintcOintgRcOintgR_TClassManip(TClass*);
   static void *new_maplEpairlEintcOintgRcOintgR(void *p = nullptr);
   static void *newArray_maplEpairlEintcOintgRcOintgR(Long_t size, void *p);
   static void delete_maplEpairlEintcOintgRcOintgR(void *p);
   static void deleteArray_maplEpairlEintcOintgRcOintgR(void *p);
   static void destruct_maplEpairlEintcOintgRcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<pair<int,int>,int>*)
   {
      map<pair<int,int>,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<pair<int,int>,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<pair<int,int>,int>", -2, "map", 100,
                  typeid(map<pair<int,int>,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEpairlEintcOintgRcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<pair<int,int>,int>) );
      instance.SetNew(&new_maplEpairlEintcOintgRcOintgR);
      instance.SetNewArray(&newArray_maplEpairlEintcOintgRcOintgR);
      instance.SetDelete(&delete_maplEpairlEintcOintgRcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEpairlEintcOintgRcOintgR);
      instance.SetDestructor(&destruct_maplEpairlEintcOintgRcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<pair<int,int>,int> >()));

      ::ROOT::AddClassAlternate("map<pair<int,int>,int>","std::map<std::pair<int, int>, int, std::less<std::pair<int, int> >, std::allocator<std::pair<std::pair<int, int> const, int> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<pair<int,int>,int>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEpairlEintcOintgRcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<pair<int,int>,int>*)nullptr)->GetClass();
      maplEpairlEintcOintgRcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEpairlEintcOintgRcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEpairlEintcOintgRcOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<pair<int,int>,int> : new map<pair<int,int>,int>;
   }
   static void *newArray_maplEpairlEintcOintgRcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<pair<int,int>,int>[nElements] : new map<pair<int,int>,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEpairlEintcOintgRcOintgR(void *p) {
      delete ((map<pair<int,int>,int>*)p);
   }
   static void deleteArray_maplEpairlEintcOintgRcOintgR(void *p) {
      delete [] ((map<pair<int,int>,int>*)p);
   }
   static void destruct_maplEpairlEintcOintgRcOintgR(void *p) {
      typedef map<pair<int,int>,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<pair<int,int>,int>

namespace ROOT {
   static TClass *maplEintcOpairlEvectorlEBmnMilleContainermUgRcOvectorlEBmnMilleContainermUgRsPgRsPgR_Dictionary();
   static void maplEintcOpairlEvectorlEBmnMilleContainermUgRcOvectorlEBmnMilleContainermUgRsPgRsPgR_TClassManip(TClass*);
   static void *new_maplEintcOpairlEvectorlEBmnMilleContainermUgRcOvectorlEBmnMilleContainermUgRsPgRsPgR(void *p = nullptr);
   static void *newArray_maplEintcOpairlEvectorlEBmnMilleContainermUgRcOvectorlEBmnMilleContainermUgRsPgRsPgR(Long_t size, void *p);
   static void delete_maplEintcOpairlEvectorlEBmnMilleContainermUgRcOvectorlEBmnMilleContainermUgRsPgRsPgR(void *p);
   static void deleteArray_maplEintcOpairlEvectorlEBmnMilleContainermUgRcOvectorlEBmnMilleContainermUgRsPgRsPgR(void *p);
   static void destruct_maplEintcOpairlEvectorlEBmnMilleContainermUgRcOvectorlEBmnMilleContainermUgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,pair<vector<BmnMilleContainer*>,vector<BmnMilleContainer*> > >*)
   {
      map<int,pair<vector<BmnMilleContainer*>,vector<BmnMilleContainer*> > > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,pair<vector<BmnMilleContainer*>,vector<BmnMilleContainer*> > >));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,pair<vector<BmnMilleContainer*>,vector<BmnMilleContainer*> > >", -2, "map", 100,
                  typeid(map<int,pair<vector<BmnMilleContainer*>,vector<BmnMilleContainer*> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOpairlEvectorlEBmnMilleContainermUgRcOvectorlEBmnMilleContainermUgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,pair<vector<BmnMilleContainer*>,vector<BmnMilleContainer*> > >) );
      instance.SetNew(&new_maplEintcOpairlEvectorlEBmnMilleContainermUgRcOvectorlEBmnMilleContainermUgRsPgRsPgR);
      instance.SetNewArray(&newArray_maplEintcOpairlEvectorlEBmnMilleContainermUgRcOvectorlEBmnMilleContainermUgRsPgRsPgR);
      instance.SetDelete(&delete_maplEintcOpairlEvectorlEBmnMilleContainermUgRcOvectorlEBmnMilleContainermUgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOpairlEvectorlEBmnMilleContainermUgRcOvectorlEBmnMilleContainermUgRsPgRsPgR);
      instance.SetDestructor(&destruct_maplEintcOpairlEvectorlEBmnMilleContainermUgRcOvectorlEBmnMilleContainermUgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,pair<vector<BmnMilleContainer*>,vector<BmnMilleContainer*> > > >()));

      ::ROOT::AddClassAlternate("map<int,pair<vector<BmnMilleContainer*>,vector<BmnMilleContainer*> > >","std::map<int, std::pair<std::vector<BmnMilleContainer*, std::allocator<BmnMilleContainer*> >, std::vector<BmnMilleContainer*, std::allocator<BmnMilleContainer*> > >, std::less<int>, std::allocator<std::pair<int const, std::pair<std::vector<BmnMilleContainer*, std::allocator<BmnMilleContainer*> >, std::vector<BmnMilleContainer*, std::allocator<BmnMilleContainer*> > > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,pair<vector<BmnMilleContainer*>,vector<BmnMilleContainer*> > >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOpairlEvectorlEBmnMilleContainermUgRcOvectorlEBmnMilleContainermUgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,pair<vector<BmnMilleContainer*>,vector<BmnMilleContainer*> > >*)nullptr)->GetClass();
      maplEintcOpairlEvectorlEBmnMilleContainermUgRcOvectorlEBmnMilleContainermUgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOpairlEvectorlEBmnMilleContainermUgRcOvectorlEBmnMilleContainermUgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOpairlEvectorlEBmnMilleContainermUgRcOvectorlEBmnMilleContainermUgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,pair<vector<BmnMilleContainer*>,vector<BmnMilleContainer*> > > : new map<int,pair<vector<BmnMilleContainer*>,vector<BmnMilleContainer*> > >;
   }
   static void *newArray_maplEintcOpairlEvectorlEBmnMilleContainermUgRcOvectorlEBmnMilleContainermUgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,pair<vector<BmnMilleContainer*>,vector<BmnMilleContainer*> > >[nElements] : new map<int,pair<vector<BmnMilleContainer*>,vector<BmnMilleContainer*> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOpairlEvectorlEBmnMilleContainermUgRcOvectorlEBmnMilleContainermUgRsPgRsPgR(void *p) {
      delete ((map<int,pair<vector<BmnMilleContainer*>,vector<BmnMilleContainer*> > >*)p);
   }
   static void deleteArray_maplEintcOpairlEvectorlEBmnMilleContainermUgRcOvectorlEBmnMilleContainermUgRsPgRsPgR(void *p) {
      delete [] ((map<int,pair<vector<BmnMilleContainer*>,vector<BmnMilleContainer*> > >*)p);
   }
   static void destruct_maplEintcOpairlEvectorlEBmnMilleContainermUgRcOvectorlEBmnMilleContainermUgRsPgRsPgR(void *p) {
      typedef map<int,pair<vector<BmnMilleContainer*>,vector<BmnMilleContainer*> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,pair<vector<BmnMilleContainer*>,vector<BmnMilleContainer*> > >

namespace {
  void TriggerDictionaryInitialization_G__BmnAlignmentDict_Impl() {
    static const char* headers[] = {
"BmnMilleContainer.h",
"BmnGlobalAlignment.h",
"BmnGemAlignCorrections.h",
"BmnSiliconAlignCorrections.h",
"BmnMille.h",
"BmnAlignCorrections.h",
"BmnResiduals.h",
"BmnInnTrackerAlign.h",
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
"/data/yaopeng/bmnroot_Yaopeng/database/uni_db",
"/data/yaopeng/bmnroot_Yaopeng/detectors/mwpc",
"/data/yaopeng/bmnroot_Yaopeng/detectors/dch",
"/data/yaopeng/bmnroot_Yaopeng/detectors/silicon",
"/data/yaopeng/bmnroot_Yaopeng/detectors/gem",
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/globaltracking",
"/data/yaopeng/bmnroot_Yaopeng/alignment",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/alignment/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__BmnAlignmentDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$BmnMilleContainer.h")))  BmnMilleContainer;
class __attribute__((annotate("$clingAutoload$BmnMille.h")))  __attribute__((annotate("$clingAutoload$BmnGlobalAlignment.h")))  BmnMille;
class __attribute__((annotate("$clingAutoload$BmnAlignCorrections.h")))  __attribute__((annotate("$clingAutoload$BmnGlobalAlignment.h")))  BmnAlignCorrections;
class __attribute__((annotate("$clingAutoload$BmnGemAlignCorrections.h")))  __attribute__((annotate("$clingAutoload$BmnGlobalAlignment.h")))  BmnGemAlignCorrections;
class __attribute__((annotate("$clingAutoload$BmnSiliconAlignCorrections.h")))  __attribute__((annotate("$clingAutoload$BmnGlobalAlignment.h")))  BmnSiliconAlignCorrections;
class __attribute__((annotate("$clingAutoload$BmnGlobalAlignment.h")))  BmnGlobalAlignment;
class __attribute__((annotate("$clingAutoload$BmnResiduals.h")))  BmnResiduals;
class __attribute__((annotate("$clingAutoload$BmnInnTrackerAlign.h")))  BmnInnTrackerAlign;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__BmnAlignmentDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "BmnMilleContainer.h"
#include "BmnGlobalAlignment.h"
#include "BmnGemAlignCorrections.h"
#include "BmnSiliconAlignCorrections.h"
#include "BmnMille.h"
#include "BmnAlignCorrections.h"
#include "BmnResiduals.h"
#include "BmnInnTrackerAlign.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BmnAlignCorrections", payloadCode, "@",
"BmnGemAlignCorrections", payloadCode, "@",
"BmnGlobalAlignment", payloadCode, "@",
"BmnInnTrackerAlign", payloadCode, "@",
"BmnMille", payloadCode, "@",
"BmnMilleContainer", payloadCode, "@",
"BmnResiduals", payloadCode, "@",
"BmnSiliconAlignCorrections", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__BmnAlignmentDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__BmnAlignmentDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__BmnAlignmentDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__BmnAlignmentDict() {
  TriggerDictionaryInitialization_G__BmnAlignmentDict_Impl();
}
