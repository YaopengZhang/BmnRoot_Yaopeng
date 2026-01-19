// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIsteeringdIG__BmnSteeringDict
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
#include "BmnSteering.h"
#include "BmnOfflineQaSteering.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BmnSteering(void *p = nullptr);
   static void *newArray_BmnSteering(Long_t size, void *p);
   static void delete_BmnSteering(void *p);
   static void deleteArray_BmnSteering(void *p);
   static void destruct_BmnSteering(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSteering*)
   {
      ::BmnSteering *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSteering >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSteering", ::BmnSteering::Class_Version(), "BmnSteering.h", 28,
                  typeid(::BmnSteering), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSteering::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSteering) );
      instance.SetNew(&new_BmnSteering);
      instance.SetNewArray(&newArray_BmnSteering);
      instance.SetDelete(&delete_BmnSteering);
      instance.SetDeleteArray(&deleteArray_BmnSteering);
      instance.SetDestructor(&destruct_BmnSteering);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSteering*)
   {
      return GenerateInitInstanceLocal((::BmnSteering*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSteering*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnOfflineQaSteering(void *p = nullptr);
   static void *newArray_BmnOfflineQaSteering(Long_t size, void *p);
   static void delete_BmnOfflineQaSteering(void *p);
   static void deleteArray_BmnOfflineQaSteering(void *p);
   static void destruct_BmnOfflineQaSteering(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnOfflineQaSteering*)
   {
      ::BmnOfflineQaSteering *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnOfflineQaSteering >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnOfflineQaSteering", ::BmnOfflineQaSteering::Class_Version(), "BmnOfflineQaSteering.h", 22,
                  typeid(::BmnOfflineQaSteering), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnOfflineQaSteering::Dictionary, isa_proxy, 4,
                  sizeof(::BmnOfflineQaSteering) );
      instance.SetNew(&new_BmnOfflineQaSteering);
      instance.SetNewArray(&newArray_BmnOfflineQaSteering);
      instance.SetDelete(&delete_BmnOfflineQaSteering);
      instance.SetDeleteArray(&deleteArray_BmnOfflineQaSteering);
      instance.SetDestructor(&destruct_BmnOfflineQaSteering);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnOfflineQaSteering*)
   {
      return GenerateInitInstanceLocal((::BmnOfflineQaSteering*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnOfflineQaSteering*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnSteering::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSteering::Class_Name()
{
   return "BmnSteering";
}

//______________________________________________________________________________
const char *BmnSteering::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSteering*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSteering::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSteering*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSteering::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSteering*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSteering::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSteering*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnOfflineQaSteering::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnOfflineQaSteering::Class_Name()
{
   return "BmnOfflineQaSteering";
}

//______________________________________________________________________________
const char *BmnOfflineQaSteering::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnOfflineQaSteering*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnOfflineQaSteering::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnOfflineQaSteering*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnOfflineQaSteering::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnOfflineQaSteering*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnOfflineQaSteering::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnOfflineQaSteering*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnSteering::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSteering.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSteering::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSteering::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSteering(void *p) {
      return  p ? new(p) ::BmnSteering : new ::BmnSteering;
   }
   static void *newArray_BmnSteering(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSteering[nElements] : new ::BmnSteering[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSteering(void *p) {
      delete ((::BmnSteering*)p);
   }
   static void deleteArray_BmnSteering(void *p) {
      delete [] ((::BmnSteering*)p);
   }
   static void destruct_BmnSteering(void *p) {
      typedef ::BmnSteering current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSteering

//______________________________________________________________________________
void BmnOfflineQaSteering::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnOfflineQaSteering.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnOfflineQaSteering::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnOfflineQaSteering::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnOfflineQaSteering(void *p) {
      return  p ? new(p) ::BmnOfflineQaSteering : new ::BmnOfflineQaSteering;
   }
   static void *newArray_BmnOfflineQaSteering(Long_t nElements, void *p) {
      return p ? new(p) ::BmnOfflineQaSteering[nElements] : new ::BmnOfflineQaSteering[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnOfflineQaSteering(void *p) {
      delete ((::BmnOfflineQaSteering*)p);
   }
   static void deleteArray_BmnOfflineQaSteering(void *p) {
      delete [] ((::BmnOfflineQaSteering*)p);
   }
   static void destruct_BmnOfflineQaSteering(void *p) {
      typedef ::BmnOfflineQaSteering current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnOfflineQaSteering

namespace ROOT {
   static TClass *vectorlEvectorlETStringgRsPgR_Dictionary();
   static void vectorlEvectorlETStringgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlETStringgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlETStringgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlETStringgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlETStringgRsPgR(void *p);
   static void destruct_vectorlEvectorlETStringgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<TString> >*)
   {
      vector<vector<TString> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<TString> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<TString> >", -2, "vector", 386,
                  typeid(vector<vector<TString> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlETStringgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<TString> >) );
      instance.SetNew(&new_vectorlEvectorlETStringgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlETStringgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlETStringgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlETStringgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlETStringgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<TString> > >()));

      ::ROOT::AddClassAlternate("vector<vector<TString> >","std::vector<std::vector<TString, std::allocator<TString> >, std::allocator<std::vector<TString, std::allocator<TString> > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<TString> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlETStringgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<TString> >*)nullptr)->GetClass();
      vectorlEvectorlETStringgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlETStringgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlETStringgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<TString> > : new vector<vector<TString> >;
   }
   static void *newArray_vectorlEvectorlETStringgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<TString> >[nElements] : new vector<vector<TString> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlETStringgRsPgR(void *p) {
      delete ((vector<vector<TString> >*)p);
   }
   static void deleteArray_vectorlEvectorlETStringgRsPgR(void *p) {
      delete [] ((vector<vector<TString> >*)p);
   }
   static void destruct_vectorlEvectorlETStringgRsPgR(void *p) {
      typedef vector<vector<TString> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<TString> >

namespace ROOT {
   static TClass *vectorlETStringgR_Dictionary();
   static void vectorlETStringgR_TClassManip(TClass*);
   static void *new_vectorlETStringgR(void *p = nullptr);
   static void *newArray_vectorlETStringgR(Long_t size, void *p);
   static void delete_vectorlETStringgR(void *p);
   static void deleteArray_vectorlETStringgR(void *p);
   static void destruct_vectorlETStringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TString>*)
   {
      vector<TString> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TString>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TString>", -2, "vector", 386,
                  typeid(vector<TString>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETStringgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TString>) );
      instance.SetNew(&new_vectorlETStringgR);
      instance.SetNewArray(&newArray_vectorlETStringgR);
      instance.SetDelete(&delete_vectorlETStringgR);
      instance.SetDeleteArray(&deleteArray_vectorlETStringgR);
      instance.SetDestructor(&destruct_vectorlETStringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TString> >()));

      ::ROOT::AddClassAlternate("vector<TString>","std::vector<TString, std::allocator<TString> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TString>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETStringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TString>*)nullptr)->GetClass();
      vectorlETStringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETStringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETStringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TString> : new vector<TString>;
   }
   static void *newArray_vectorlETStringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TString>[nElements] : new vector<TString>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETStringgR(void *p) {
      delete ((vector<TString>*)p);
   }
   static void deleteArray_vectorlETStringgR(void *p) {
      delete [] ((vector<TString>*)p);
   }
   static void destruct_vectorlETStringgR(void *p) {
      typedef vector<TString> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TString>

namespace ROOT {
   static TClass *maplEpairlEintcOTStringgRcOvectorlETStringgRsPgR_Dictionary();
   static void maplEpairlEintcOTStringgRcOvectorlETStringgRsPgR_TClassManip(TClass*);
   static void *new_maplEpairlEintcOTStringgRcOvectorlETStringgRsPgR(void *p = nullptr);
   static void *newArray_maplEpairlEintcOTStringgRcOvectorlETStringgRsPgR(Long_t size, void *p);
   static void delete_maplEpairlEintcOTStringgRcOvectorlETStringgRsPgR(void *p);
   static void deleteArray_maplEpairlEintcOTStringgRcOvectorlETStringgRsPgR(void *p);
   static void destruct_maplEpairlEintcOTStringgRcOvectorlETStringgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<pair<int,TString>,vector<TString> >*)
   {
      map<pair<int,TString>,vector<TString> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<pair<int,TString>,vector<TString> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<pair<int,TString>,vector<TString> >", -2, "map", 100,
                  typeid(map<pair<int,TString>,vector<TString> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEpairlEintcOTStringgRcOvectorlETStringgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<pair<int,TString>,vector<TString> >) );
      instance.SetNew(&new_maplEpairlEintcOTStringgRcOvectorlETStringgRsPgR);
      instance.SetNewArray(&newArray_maplEpairlEintcOTStringgRcOvectorlETStringgRsPgR);
      instance.SetDelete(&delete_maplEpairlEintcOTStringgRcOvectorlETStringgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEpairlEintcOTStringgRcOvectorlETStringgRsPgR);
      instance.SetDestructor(&destruct_maplEpairlEintcOTStringgRcOvectorlETStringgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<pair<int,TString>,vector<TString> > >()));

      ::ROOT::AddClassAlternate("map<pair<int,TString>,vector<TString> >","std::map<std::pair<int, TString>, std::vector<TString, std::allocator<TString> >, std::less<std::pair<int, TString> >, std::allocator<std::pair<std::pair<int, TString> const, std::vector<TString, std::allocator<TString> > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<pair<int,TString>,vector<TString> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEpairlEintcOTStringgRcOvectorlETStringgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<pair<int,TString>,vector<TString> >*)nullptr)->GetClass();
      maplEpairlEintcOTStringgRcOvectorlETStringgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEpairlEintcOTStringgRcOvectorlETStringgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEpairlEintcOTStringgRcOvectorlETStringgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<pair<int,TString>,vector<TString> > : new map<pair<int,TString>,vector<TString> >;
   }
   static void *newArray_maplEpairlEintcOTStringgRcOvectorlETStringgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<pair<int,TString>,vector<TString> >[nElements] : new map<pair<int,TString>,vector<TString> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEpairlEintcOTStringgRcOvectorlETStringgRsPgR(void *p) {
      delete ((map<pair<int,TString>,vector<TString> >*)p);
   }
   static void deleteArray_maplEpairlEintcOTStringgRcOvectorlETStringgRsPgR(void *p) {
      delete [] ((map<pair<int,TString>,vector<TString> >*)p);
   }
   static void destruct_maplEpairlEintcOTStringgRcOvectorlETStringgRsPgR(void *p) {
      typedef map<pair<int,TString>,vector<TString> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<pair<int,TString>,vector<TString> >

namespace ROOT {
   static TClass *maplEpairlEintcOTStringgRcOpairlEintcOintgRsPgR_Dictionary();
   static void maplEpairlEintcOTStringgRcOpairlEintcOintgRsPgR_TClassManip(TClass*);
   static void *new_maplEpairlEintcOTStringgRcOpairlEintcOintgRsPgR(void *p = nullptr);
   static void *newArray_maplEpairlEintcOTStringgRcOpairlEintcOintgRsPgR(Long_t size, void *p);
   static void delete_maplEpairlEintcOTStringgRcOpairlEintcOintgRsPgR(void *p);
   static void deleteArray_maplEpairlEintcOTStringgRcOpairlEintcOintgRsPgR(void *p);
   static void destruct_maplEpairlEintcOTStringgRcOpairlEintcOintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<pair<int,TString>,pair<int,int> >*)
   {
      map<pair<int,TString>,pair<int,int> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<pair<int,TString>,pair<int,int> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<pair<int,TString>,pair<int,int> >", -2, "map", 100,
                  typeid(map<pair<int,TString>,pair<int,int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEpairlEintcOTStringgRcOpairlEintcOintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<pair<int,TString>,pair<int,int> >) );
      instance.SetNew(&new_maplEpairlEintcOTStringgRcOpairlEintcOintgRsPgR);
      instance.SetNewArray(&newArray_maplEpairlEintcOTStringgRcOpairlEintcOintgRsPgR);
      instance.SetDelete(&delete_maplEpairlEintcOTStringgRcOpairlEintcOintgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEpairlEintcOTStringgRcOpairlEintcOintgRsPgR);
      instance.SetDestructor(&destruct_maplEpairlEintcOTStringgRcOpairlEintcOintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<pair<int,TString>,pair<int,int> > >()));

      ::ROOT::AddClassAlternate("map<pair<int,TString>,pair<int,int> >","std::map<std::pair<int, TString>, std::pair<int, int>, std::less<std::pair<int, TString> >, std::allocator<std::pair<std::pair<int, TString> const, std::pair<int, int> > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<pair<int,TString>,pair<int,int> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEpairlEintcOTStringgRcOpairlEintcOintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<pair<int,TString>,pair<int,int> >*)nullptr)->GetClass();
      maplEpairlEintcOTStringgRcOpairlEintcOintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEpairlEintcOTStringgRcOpairlEintcOintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEpairlEintcOTStringgRcOpairlEintcOintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<pair<int,TString>,pair<int,int> > : new map<pair<int,TString>,pair<int,int> >;
   }
   static void *newArray_maplEpairlEintcOTStringgRcOpairlEintcOintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<pair<int,TString>,pair<int,int> >[nElements] : new map<pair<int,TString>,pair<int,int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEpairlEintcOTStringgRcOpairlEintcOintgRsPgR(void *p) {
      delete ((map<pair<int,TString>,pair<int,int> >*)p);
   }
   static void deleteArray_maplEpairlEintcOTStringgRcOpairlEintcOintgRsPgR(void *p) {
      delete [] ((map<pair<int,TString>,pair<int,int> >*)p);
   }
   static void destruct_maplEpairlEintcOTStringgRcOpairlEintcOintgRsPgR(void *p) {
      typedef map<pair<int,TString>,pair<int,int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<pair<int,TString>,pair<int,int> >

namespace {
  void TriggerDictionaryInitialization_G__BmnSteeringDict_Impl() {
    static const char* headers[] = {
"BmnSteering.h",
"BmnOfflineQaSteering.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/base",
"/data/yaopeng/bmnroot_Yaopeng/base/data",
"/data/yaopeng/bmnroot_Yaopeng/detectors/csc",
"/data/yaopeng/bmnroot_Yaopeng/detectors/gem",
"/data/yaopeng/bmnroot_Yaopeng/detectors/silicon",
"/data/yaopeng/bmnroot_Yaopeng/steering",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/steering/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__BmnSteeringDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$BmnSteering.h")))  BmnSteering;
class __attribute__((annotate("$clingAutoload$BmnOfflineQaSteering.h")))  BmnOfflineQaSteering;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__BmnSteeringDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "BmnSteering.h"
#include "BmnOfflineQaSteering.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BmnOfflineQaSteering", payloadCode, "@",
"BmnSteering", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__BmnSteeringDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__BmnSteeringDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__BmnSteeringDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__BmnSteeringDict() {
  TriggerDictionaryInitialization_G__BmnSteeringDict_Impl();
}
