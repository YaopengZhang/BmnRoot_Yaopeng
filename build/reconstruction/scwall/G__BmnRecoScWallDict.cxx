// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIreconstructiondIscwalldIG__BmnRecoScWallDict
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
#include "BmnScWallReconstructor.h"
#include "BmnScWallAnalyzer.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BmnScWallReconstructor(void *p = nullptr);
   static void *newArray_BmnScWallReconstructor(Long_t size, void *p);
   static void delete_BmnScWallReconstructor(void *p);
   static void deleteArray_BmnScWallReconstructor(void *p);
   static void destruct_BmnScWallReconstructor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnScWallReconstructor*)
   {
      ::BmnScWallReconstructor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnScWallReconstructor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnScWallReconstructor", ::BmnScWallReconstructor::Class_Version(), "BmnScWallReconstructor.h", 12,
                  typeid(::BmnScWallReconstructor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnScWallReconstructor::Dictionary, isa_proxy, 4,
                  sizeof(::BmnScWallReconstructor) );
      instance.SetNew(&new_BmnScWallReconstructor);
      instance.SetNewArray(&newArray_BmnScWallReconstructor);
      instance.SetDelete(&delete_BmnScWallReconstructor);
      instance.SetDeleteArray(&deleteArray_BmnScWallReconstructor);
      instance.SetDestructor(&destruct_BmnScWallReconstructor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnScWallReconstructor*)
   {
      return GenerateInitInstanceLocal((::BmnScWallReconstructor*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnScWallReconstructor*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnScWallAnalyzer(void *p = nullptr);
   static void *newArray_BmnScWallAnalyzer(Long_t size, void *p);
   static void delete_BmnScWallAnalyzer(void *p);
   static void deleteArray_BmnScWallAnalyzer(void *p);
   static void destruct_BmnScWallAnalyzer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnScWallAnalyzer*)
   {
      ::BmnScWallAnalyzer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnScWallAnalyzer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnScWallAnalyzer", ::BmnScWallAnalyzer::Class_Version(), "BmnScWallAnalyzer.h", 17,
                  typeid(::BmnScWallAnalyzer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnScWallAnalyzer::Dictionary, isa_proxy, 4,
                  sizeof(::BmnScWallAnalyzer) );
      instance.SetNew(&new_BmnScWallAnalyzer);
      instance.SetNewArray(&newArray_BmnScWallAnalyzer);
      instance.SetDelete(&delete_BmnScWallAnalyzer);
      instance.SetDeleteArray(&deleteArray_BmnScWallAnalyzer);
      instance.SetDestructor(&destruct_BmnScWallAnalyzer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnScWallAnalyzer*)
   {
      return GenerateInitInstanceLocal((::BmnScWallAnalyzer*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnScWallAnalyzer*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnScWallReconstructor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnScWallReconstructor::Class_Name()
{
   return "BmnScWallReconstructor";
}

//______________________________________________________________________________
const char *BmnScWallReconstructor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnScWallReconstructor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnScWallReconstructor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnScWallReconstructor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnScWallReconstructor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnScWallReconstructor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnScWallReconstructor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnScWallReconstructor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnScWallAnalyzer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnScWallAnalyzer::Class_Name()
{
   return "BmnScWallAnalyzer";
}

//______________________________________________________________________________
const char *BmnScWallAnalyzer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnScWallAnalyzer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnScWallAnalyzer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnScWallAnalyzer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnScWallAnalyzer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnScWallAnalyzer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnScWallAnalyzer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnScWallAnalyzer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnScWallReconstructor::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnScWallReconstructor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnScWallReconstructor::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnScWallReconstructor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnScWallReconstructor(void *p) {
      return  p ? new(p) ::BmnScWallReconstructor : new ::BmnScWallReconstructor;
   }
   static void *newArray_BmnScWallReconstructor(Long_t nElements, void *p) {
      return p ? new(p) ::BmnScWallReconstructor[nElements] : new ::BmnScWallReconstructor[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnScWallReconstructor(void *p) {
      delete ((::BmnScWallReconstructor*)p);
   }
   static void deleteArray_BmnScWallReconstructor(void *p) {
      delete [] ((::BmnScWallReconstructor*)p);
   }
   static void destruct_BmnScWallReconstructor(void *p) {
      typedef ::BmnScWallReconstructor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnScWallReconstructor

//______________________________________________________________________________
void BmnScWallAnalyzer::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnScWallAnalyzer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnScWallAnalyzer::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnScWallAnalyzer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnScWallAnalyzer(void *p) {
      return  p ? new(p) ::BmnScWallAnalyzer : new ::BmnScWallAnalyzer;
   }
   static void *newArray_BmnScWallAnalyzer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnScWallAnalyzer[nElements] : new ::BmnScWallAnalyzer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnScWallAnalyzer(void *p) {
      delete ((::BmnScWallAnalyzer*)p);
   }
   static void deleteArray_BmnScWallAnalyzer(void *p) {
      delete [] ((::BmnScWallAnalyzer*)p);
   }
   static void destruct_BmnScWallAnalyzer(void *p) {
      typedef ::BmnScWallAnalyzer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnScWallAnalyzer

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
   static TClass *maplEunsignedsPintcOvectorlEdoublegRsPgR_Dictionary();
   static void maplEunsignedsPintcOvectorlEdoublegRsPgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcOvectorlEdoublegRsPgR(void *p = nullptr);
   static void *newArray_maplEunsignedsPintcOvectorlEdoublegRsPgR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcOvectorlEdoublegRsPgR(void *p);
   static void deleteArray_maplEunsignedsPintcOvectorlEdoublegRsPgR(void *p);
   static void destruct_maplEunsignedsPintcOvectorlEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,vector<double> >*)
   {
      map<unsigned int,vector<double> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,vector<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,vector<double> >", -2, "map", 100,
                  typeid(map<unsigned int,vector<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcOvectorlEdoublegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned int,vector<double> >) );
      instance.SetNew(&new_maplEunsignedsPintcOvectorlEdoublegRsPgR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcOvectorlEdoublegRsPgR);
      instance.SetDelete(&delete_maplEunsignedsPintcOvectorlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcOvectorlEdoublegRsPgR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcOvectorlEdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,vector<double> > >()));

      ::ROOT::AddClassAlternate("map<unsigned int,vector<double> >","std::map<unsigned int, std::vector<double, std::allocator<double> >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, std::vector<double, std::allocator<double> > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<unsigned int,vector<double> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcOvectorlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned int,vector<double> >*)nullptr)->GetClass();
      maplEunsignedsPintcOvectorlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcOvectorlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcOvectorlEdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,vector<double> > : new map<unsigned int,vector<double> >;
   }
   static void *newArray_maplEunsignedsPintcOvectorlEdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,vector<double> >[nElements] : new map<unsigned int,vector<double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcOvectorlEdoublegRsPgR(void *p) {
      delete ((map<unsigned int,vector<double> >*)p);
   }
   static void deleteArray_maplEunsignedsPintcOvectorlEdoublegRsPgR(void *p) {
      delete [] ((map<unsigned int,vector<double> >*)p);
   }
   static void destruct_maplEunsignedsPintcOvectorlEdoublegRsPgR(void *p) {
      typedef map<unsigned int,vector<double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,vector<double> >

namespace {
  void TriggerDictionaryInitialization_G__BmnRecoScWallDict_Impl() {
    static const char* headers[] = {
"BmnScWallReconstructor.h",
"BmnScWallAnalyzer.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/base",
"/data/yaopeng/bmnroot_Yaopeng/base/data",
"/data/yaopeng/bmnroot_Yaopeng/base/header",
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/scwall",
"/data/yaopeng/bmnroot_Yaopeng/detectors/scwall",
"/data/yaopeng/bmnroot_Yaopeng/decoder",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/reconstruction/scwall/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__BmnRecoScWallDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$BmnScWallReconstructor.h")))  BmnScWallReconstructor;
class __attribute__((annotate("$clingAutoload$BmnScWallAnalyzer.h")))  BmnScWallAnalyzer;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__BmnRecoScWallDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "BmnScWallReconstructor.h"
#include "BmnScWallAnalyzer.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BmnScWallAnalyzer", payloadCode, "@",
"BmnScWallReconstructor", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__BmnRecoScWallDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__BmnRecoScWallDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__BmnRecoScWallDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__BmnRecoScWallDict() {
  TriggerDictionaryInitialization_G__BmnRecoScWallDict_Impl();
}
