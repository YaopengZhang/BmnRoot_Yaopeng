// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIreconstructiondIcatdIG__CatDict
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
#include "CbmL1.h"
#include "CbmL1MCTrack.h"
#include "CbmL1MCPoint.h"
#include "CbmL1StsHit.h"
#include "CbmL1Track.h"
#include "CbmL1TrackPar.h"
#include "CbmL1Vtx.h"
#include "CbmL1ParticlesFinder.h"
#include "CbmL1PartEfficiencies.h"
#include "CbmStsFindTracks.h"
#include "CbmStsFindTracksQa.h"
#include "CbmL1StsTrackFinder.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_CbmL1(void *p = nullptr);
   static void *newArray_CbmL1(Long_t size, void *p);
   static void delete_CbmL1(void *p);
   static void deleteArray_CbmL1(void *p);
   static void destruct_CbmL1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmL1*)
   {
      ::CbmL1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmL1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmL1", ::CbmL1::Class_Version(), "CbmL1.h", 48,
                  typeid(::CbmL1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmL1::Dictionary, isa_proxy, 4,
                  sizeof(::CbmL1) );
      instance.SetNew(&new_CbmL1);
      instance.SetNewArray(&newArray_CbmL1);
      instance.SetDelete(&delete_CbmL1);
      instance.SetDeleteArray(&deleteArray_CbmL1);
      instance.SetDestructor(&destruct_CbmL1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmL1*)
   {
      return GenerateInitInstanceLocal((::CbmL1*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmL1*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmL1PartEfficiencies(void *p = nullptr);
   static void *newArray_CbmL1PartEfficiencies(Long_t size, void *p);
   static void delete_CbmL1PartEfficiencies(void *p);
   static void deleteArray_CbmL1PartEfficiencies(void *p);
   static void destruct_CbmL1PartEfficiencies(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmL1PartEfficiencies*)
   {
      ::CbmL1PartEfficiencies *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmL1PartEfficiencies >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmL1PartEfficiencies", ::CbmL1PartEfficiencies::Class_Version(), "CbmL1PartEfficiencies.h", 6,
                  typeid(::CbmL1PartEfficiencies), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmL1PartEfficiencies::Dictionary, isa_proxy, 4,
                  sizeof(::CbmL1PartEfficiencies) );
      instance.SetNew(&new_CbmL1PartEfficiencies);
      instance.SetNewArray(&newArray_CbmL1PartEfficiencies);
      instance.SetDelete(&delete_CbmL1PartEfficiencies);
      instance.SetDeleteArray(&deleteArray_CbmL1PartEfficiencies);
      instance.SetDestructor(&destruct_CbmL1PartEfficiencies);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmL1PartEfficiencies*)
   {
      return GenerateInitInstanceLocal((::CbmL1PartEfficiencies*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmL1PartEfficiencies*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsFindTracks(void *p = nullptr);
   static void *newArray_CbmStsFindTracks(Long_t size, void *p);
   static void delete_CbmStsFindTracks(void *p);
   static void deleteArray_CbmStsFindTracks(void *p);
   static void destruct_CbmStsFindTracks(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsFindTracks*)
   {
      ::CbmStsFindTracks *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsFindTracks >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsFindTracks", ::CbmStsFindTracks::Class_Version(), "CbmStsFindTracks.h", 32,
                  typeid(::CbmStsFindTracks), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsFindTracks::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsFindTracks) );
      instance.SetNew(&new_CbmStsFindTracks);
      instance.SetNewArray(&newArray_CbmStsFindTracks);
      instance.SetDelete(&delete_CbmStsFindTracks);
      instance.SetDeleteArray(&deleteArray_CbmStsFindTracks);
      instance.SetDestructor(&destruct_CbmStsFindTracks);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsFindTracks*)
   {
      return GenerateInitInstanceLocal((::CbmStsFindTracks*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsFindTracks*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsFindTracksQa(void *p = nullptr);
   static void *newArray_CbmStsFindTracksQa(Long_t size, void *p);
   static void delete_CbmStsFindTracksQa(void *p);
   static void deleteArray_CbmStsFindTracksQa(void *p);
   static void destruct_CbmStsFindTracksQa(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsFindTracksQa*)
   {
      ::CbmStsFindTracksQa *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsFindTracksQa >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsFindTracksQa", ::CbmStsFindTracksQa::Class_Version(), "CbmStsFindTracksQa.h", 33,
                  typeid(::CbmStsFindTracksQa), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsFindTracksQa::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsFindTracksQa) );
      instance.SetNew(&new_CbmStsFindTracksQa);
      instance.SetNewArray(&newArray_CbmStsFindTracksQa);
      instance.SetDelete(&delete_CbmStsFindTracksQa);
      instance.SetDeleteArray(&deleteArray_CbmStsFindTracksQa);
      instance.SetDestructor(&destruct_CbmStsFindTracksQa);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsFindTracksQa*)
   {
      return GenerateInitInstanceLocal((::CbmStsFindTracksQa*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsFindTracksQa*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmL1StsTrackFinder(void *p = nullptr);
   static void *newArray_CbmL1StsTrackFinder(Long_t size, void *p);
   static void delete_CbmL1StsTrackFinder(void *p);
   static void deleteArray_CbmL1StsTrackFinder(void *p);
   static void destruct_CbmL1StsTrackFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmL1StsTrackFinder*)
   {
      ::CbmL1StsTrackFinder *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmL1StsTrackFinder >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmL1StsTrackFinder", ::CbmL1StsTrackFinder::Class_Version(), "CbmL1StsTrackFinder.h", 28,
                  typeid(::CbmL1StsTrackFinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmL1StsTrackFinder::Dictionary, isa_proxy, 4,
                  sizeof(::CbmL1StsTrackFinder) );
      instance.SetNew(&new_CbmL1StsTrackFinder);
      instance.SetNewArray(&newArray_CbmL1StsTrackFinder);
      instance.SetDelete(&delete_CbmL1StsTrackFinder);
      instance.SetDeleteArray(&deleteArray_CbmL1StsTrackFinder);
      instance.SetDestructor(&destruct_CbmL1StsTrackFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmL1StsTrackFinder*)
   {
      return GenerateInitInstanceLocal((::CbmL1StsTrackFinder*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmL1StsTrackFinder*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr CbmL1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmL1::Class_Name()
{
   return "CbmL1";
}

//______________________________________________________________________________
const char *CbmL1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmL1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmL1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmL1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmL1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmL1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmL1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmL1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmL1PartEfficiencies::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmL1PartEfficiencies::Class_Name()
{
   return "CbmL1PartEfficiencies";
}

//______________________________________________________________________________
const char *CbmL1PartEfficiencies::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmL1PartEfficiencies*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmL1PartEfficiencies::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmL1PartEfficiencies*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmL1PartEfficiencies::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmL1PartEfficiencies*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmL1PartEfficiencies::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmL1PartEfficiencies*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsFindTracks::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsFindTracks::Class_Name()
{
   return "CbmStsFindTracks";
}

//______________________________________________________________________________
const char *CbmStsFindTracks::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsFindTracks*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsFindTracks::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsFindTracks*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsFindTracks::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsFindTracks*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsFindTracks::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsFindTracks*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsFindTracksQa::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsFindTracksQa::Class_Name()
{
   return "CbmStsFindTracksQa";
}

//______________________________________________________________________________
const char *CbmStsFindTracksQa::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsFindTracksQa*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsFindTracksQa::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsFindTracksQa*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsFindTracksQa::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsFindTracksQa*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsFindTracksQa::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsFindTracksQa*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmL1StsTrackFinder::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmL1StsTrackFinder::Class_Name()
{
   return "CbmL1StsTrackFinder";
}

//______________________________________________________________________________
const char *CbmL1StsTrackFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmL1StsTrackFinder*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmL1StsTrackFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmL1StsTrackFinder*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmL1StsTrackFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmL1StsTrackFinder*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmL1StsTrackFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmL1StsTrackFinder*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void CbmL1::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmL1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmL1::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmL1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmL1(void *p) {
      return  p ? new(p) ::CbmL1 : new ::CbmL1;
   }
   static void *newArray_CbmL1(Long_t nElements, void *p) {
      return p ? new(p) ::CbmL1[nElements] : new ::CbmL1[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmL1(void *p) {
      delete ((::CbmL1*)p);
   }
   static void deleteArray_CbmL1(void *p) {
      delete [] ((::CbmL1*)p);
   }
   static void destruct_CbmL1(void *p) {
      typedef ::CbmL1 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmL1

//______________________________________________________________________________
void CbmL1PartEfficiencies::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmL1PartEfficiencies.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmL1PartEfficiencies::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmL1PartEfficiencies::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmL1PartEfficiencies(void *p) {
      return  p ? new(p) ::CbmL1PartEfficiencies : new ::CbmL1PartEfficiencies;
   }
   static void *newArray_CbmL1PartEfficiencies(Long_t nElements, void *p) {
      return p ? new(p) ::CbmL1PartEfficiencies[nElements] : new ::CbmL1PartEfficiencies[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmL1PartEfficiencies(void *p) {
      delete ((::CbmL1PartEfficiencies*)p);
   }
   static void deleteArray_CbmL1PartEfficiencies(void *p) {
      delete [] ((::CbmL1PartEfficiencies*)p);
   }
   static void destruct_CbmL1PartEfficiencies(void *p) {
      typedef ::CbmL1PartEfficiencies current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmL1PartEfficiencies

//______________________________________________________________________________
void CbmStsFindTracks::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsFindTracks.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsFindTracks::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsFindTracks::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsFindTracks(void *p) {
      return  p ? new(p) ::CbmStsFindTracks : new ::CbmStsFindTracks;
   }
   static void *newArray_CbmStsFindTracks(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsFindTracks[nElements] : new ::CbmStsFindTracks[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsFindTracks(void *p) {
      delete ((::CbmStsFindTracks*)p);
   }
   static void deleteArray_CbmStsFindTracks(void *p) {
      delete [] ((::CbmStsFindTracks*)p);
   }
   static void destruct_CbmStsFindTracks(void *p) {
      typedef ::CbmStsFindTracks current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsFindTracks

//______________________________________________________________________________
void CbmStsFindTracksQa::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsFindTracksQa.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsFindTracksQa::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsFindTracksQa::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsFindTracksQa(void *p) {
      return  p ? new(p) ::CbmStsFindTracksQa : new ::CbmStsFindTracksQa;
   }
   static void *newArray_CbmStsFindTracksQa(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsFindTracksQa[nElements] : new ::CbmStsFindTracksQa[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsFindTracksQa(void *p) {
      delete ((::CbmStsFindTracksQa*)p);
   }
   static void deleteArray_CbmStsFindTracksQa(void *p) {
      delete [] ((::CbmStsFindTracksQa*)p);
   }
   static void destruct_CbmStsFindTracksQa(void *p) {
      typedef ::CbmStsFindTracksQa current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsFindTracksQa

//______________________________________________________________________________
void CbmL1StsTrackFinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmL1StsTrackFinder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmL1StsTrackFinder::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmL1StsTrackFinder::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmL1StsTrackFinder(void *p) {
      return  p ? new(p) ::CbmL1StsTrackFinder : new ::CbmL1StsTrackFinder;
   }
   static void *newArray_CbmL1StsTrackFinder(Long_t nElements, void *p) {
      return p ? new(p) ::CbmL1StsTrackFinder[nElements] : new ::CbmL1StsTrackFinder[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmL1StsTrackFinder(void *p) {
      delete ((::CbmL1StsTrackFinder*)p);
   }
   static void deleteArray_CbmL1StsTrackFinder(void *p) {
      delete [] ((::CbmL1StsTrackFinder*)p);
   }
   static void destruct_CbmL1StsTrackFinder(void *p) {
      typedef ::CbmL1StsTrackFinder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmL1StsTrackFinder

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
   static TClass *vectorlECbmL1HitStoregR_Dictionary();
   static void vectorlECbmL1HitStoregR_TClassManip(TClass*);
   static void *new_vectorlECbmL1HitStoregR(void *p = nullptr);
   static void *newArray_vectorlECbmL1HitStoregR(Long_t size, void *p);
   static void delete_vectorlECbmL1HitStoregR(void *p);
   static void deleteArray_vectorlECbmL1HitStoregR(void *p);
   static void destruct_vectorlECbmL1HitStoregR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<CbmL1HitStore>*)
   {
      vector<CbmL1HitStore> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<CbmL1HitStore>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<CbmL1HitStore>", -2, "vector", 386,
                  typeid(vector<CbmL1HitStore>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlECbmL1HitStoregR_Dictionary, isa_proxy, 0,
                  sizeof(vector<CbmL1HitStore>) );
      instance.SetNew(&new_vectorlECbmL1HitStoregR);
      instance.SetNewArray(&newArray_vectorlECbmL1HitStoregR);
      instance.SetDelete(&delete_vectorlECbmL1HitStoregR);
      instance.SetDeleteArray(&deleteArray_vectorlECbmL1HitStoregR);
      instance.SetDestructor(&destruct_vectorlECbmL1HitStoregR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<CbmL1HitStore> >()));

      ::ROOT::AddClassAlternate("vector<CbmL1HitStore>","std::vector<CbmL1HitStore, std::allocator<CbmL1HitStore> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<CbmL1HitStore>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlECbmL1HitStoregR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<CbmL1HitStore>*)nullptr)->GetClass();
      vectorlECbmL1HitStoregR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlECbmL1HitStoregR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlECbmL1HitStoregR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmL1HitStore> : new vector<CbmL1HitStore>;
   }
   static void *newArray_vectorlECbmL1HitStoregR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmL1HitStore>[nElements] : new vector<CbmL1HitStore>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlECbmL1HitStoregR(void *p) {
      delete ((vector<CbmL1HitStore>*)p);
   }
   static void deleteArray_vectorlECbmL1HitStoregR(void *p) {
      delete [] ((vector<CbmL1HitStore>*)p);
   }
   static void destruct_vectorlECbmL1HitStoregR(void *p) {
      typedef vector<CbmL1HitStore> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<CbmL1HitStore>

namespace ROOT {
   static TClass *maplEintcOintgR_Dictionary();
   static void maplEintcOintgR_TClassManip(TClass*);
   static void *new_maplEintcOintgR(void *p = nullptr);
   static void *newArray_maplEintcOintgR(Long_t size, void *p);
   static void delete_maplEintcOintgR(void *p);
   static void deleteArray_maplEintcOintgR(void *p);
   static void destruct_maplEintcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,int>*)
   {
      map<int,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,int>", -2, "map", 100,
                  typeid(map<int,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,int>) );
      instance.SetNew(&new_maplEintcOintgR);
      instance.SetNewArray(&newArray_maplEintcOintgR);
      instance.SetDelete(&delete_maplEintcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOintgR);
      instance.SetDestructor(&destruct_maplEintcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,int> >()));

      ::ROOT::AddClassAlternate("map<int,int>","std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,int>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,int>*)nullptr)->GetClass();
      maplEintcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,int> : new map<int,int>;
   }
   static void *newArray_maplEintcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,int>[nElements] : new map<int,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOintgR(void *p) {
      delete ((map<int,int>*)p);
   }
   static void deleteArray_maplEintcOintgR(void *p) {
      delete [] ((map<int,int>*)p);
   }
   static void destruct_maplEintcOintgR(void *p) {
      typedef map<int,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,int>

namespace ROOT {
   static TClass *maplEintcOdoublegR_Dictionary();
   static void maplEintcOdoublegR_TClassManip(TClass*);
   static void *new_maplEintcOdoublegR(void *p = nullptr);
   static void *newArray_maplEintcOdoublegR(Long_t size, void *p);
   static void delete_maplEintcOdoublegR(void *p);
   static void deleteArray_maplEintcOdoublegR(void *p);
   static void destruct_maplEintcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,double>*)
   {
      map<int,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,double>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,double>", -2, "map", 100,
                  typeid(map<int,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,double>) );
      instance.SetNew(&new_maplEintcOdoublegR);
      instance.SetNewArray(&newArray_maplEintcOdoublegR);
      instance.SetDelete(&delete_maplEintcOdoublegR);
      instance.SetDeleteArray(&deleteArray_maplEintcOdoublegR);
      instance.SetDestructor(&destruct_maplEintcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,double> >()));

      ::ROOT::AddClassAlternate("map<int,double>","std::map<int, double, std::less<int>, std::allocator<std::pair<int const, double> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,double>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,double>*)nullptr)->GetClass();
      maplEintcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,double> : new map<int,double>;
   }
   static void *newArray_maplEintcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,double>[nElements] : new map<int,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOdoublegR(void *p) {
      delete ((map<int,double>*)p);
   }
   static void deleteArray_maplEintcOdoublegR(void *p) {
      delete [] ((map<int,double>*)p);
   }
   static void destruct_maplEintcOdoublegR(void *p) {
      typedef map<int,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,double>

namespace {
  void TriggerDictionaryInitialization_G__CatDict_Impl() {
    static const char* headers[] = {
"CbmL1.h",
"CbmL1MCTrack.h",
"CbmL1MCPoint.h",
"CbmL1StsHit.h",
"CbmL1Track.h",
"CbmL1TrackPar.h",
"CbmL1Vtx.h",
"CbmL1ParticlesFinder.h",
"CbmL1PartEfficiencies.h",
"CbmStsFindTracks.h",
"CbmStsFindTracksQa.h",
"CbmL1StsTrackFinder.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/field",
"/data/yaopeng/bmnroot_Yaopeng/passive",
"/data/yaopeng/bmnroot_Yaopeng/base",
"/data/yaopeng/bmnroot_Yaopeng/base/data",
"/data/yaopeng/bmnroot_Yaopeng/base/cbm",
"/data/yaopeng/bmnroot_Yaopeng/detectors/silicon",
"/data/yaopeng/bmnroot_Yaopeng/detectors/gem",
"/data/yaopeng/bmnroot_Yaopeng/detectors/sts",
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/KF",
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/KF/KFQA",
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/KF/Interface",
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/KF/KFParticlesFinder",
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/cat",
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/cat/L1Algo",
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/cat/OffLineInterface",
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/cat/ParticleFinder",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/lib",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/reconstruction/cat/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__CatDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$CbmL1.h")))  CbmL1;
class __attribute__((annotate("$clingAutoload$CbmL1PartEfficiencies.h")))  CbmL1PartEfficiencies;
class __attribute__((annotate("$clingAutoload$CbmStsFindTracks.h")))  CbmStsFindTracks;
class __attribute__((annotate("$clingAutoload$CbmStsFindTracksQa.h")))  CbmStsFindTracksQa;
class __attribute__((annotate("$clingAutoload$CbmL1StsTrackFinder.h")))  CbmL1StsTrackFinder;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__CatDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "CbmL1.h"
#include "CbmL1MCTrack.h"
#include "CbmL1MCPoint.h"
#include "CbmL1StsHit.h"
#include "CbmL1Track.h"
#include "CbmL1TrackPar.h"
#include "CbmL1Vtx.h"
#include "CbmL1ParticlesFinder.h"
#include "CbmL1PartEfficiencies.h"
#include "CbmStsFindTracks.h"
#include "CbmStsFindTracksQa.h"
#include "CbmL1StsTrackFinder.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"CbmL1", payloadCode, "@",
"CbmL1PartEfficiencies", payloadCode, "@",
"CbmL1StsTrackFinder", payloadCode, "@",
"CbmStsFindTracks", payloadCode, "@",
"CbmStsFindTracksQa", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__CatDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__CatDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__CatDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__CatDict() {
  TriggerDictionaryInitialization_G__CatDict_Impl();
}
