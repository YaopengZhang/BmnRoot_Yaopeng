// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIdatabasedItangodIG__TangoDataDict
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
#include "TangoData.h"
#include "TangoConnection.h"
#include "tango_db_settings.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TangoTimeParameter(void *p = nullptr);
   static void *newArray_TangoTimeParameter(Long_t size, void *p);
   static void delete_TangoTimeParameter(void *p);
   static void deleteArray_TangoTimeParameter(void *p);
   static void destruct_TangoTimeParameter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TangoTimeParameter*)
   {
      ::TangoTimeParameter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TangoTimeParameter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TangoTimeParameter", ::TangoTimeParameter::Class_Version(), "TangoData.h", 29,
                  typeid(::TangoTimeParameter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TangoTimeParameter::Dictionary, isa_proxy, 4,
                  sizeof(::TangoTimeParameter) );
      instance.SetNew(&new_TangoTimeParameter);
      instance.SetNewArray(&newArray_TangoTimeParameter);
      instance.SetDelete(&delete_TangoTimeParameter);
      instance.SetDeleteArray(&deleteArray_TangoTimeParameter);
      instance.SetDestructor(&destruct_TangoTimeParameter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TangoTimeParameter*)
   {
      return GenerateInitInstanceLocal((::TangoTimeParameter*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TangoTimeParameter*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TangoTimeInterval(void *p = nullptr);
   static void *newArray_TangoTimeInterval(Long_t size, void *p);
   static void delete_TangoTimeInterval(void *p);
   static void deleteArray_TangoTimeInterval(void *p);
   static void destruct_TangoTimeInterval(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TangoTimeInterval*)
   {
      ::TangoTimeInterval *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TangoTimeInterval >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TangoTimeInterval", ::TangoTimeInterval::Class_Version(), "TangoData.h", 51,
                  typeid(::TangoTimeInterval), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TangoTimeInterval::Dictionary, isa_proxy, 4,
                  sizeof(::TangoTimeInterval) );
      instance.SetNew(&new_TangoTimeInterval);
      instance.SetNewArray(&newArray_TangoTimeInterval);
      instance.SetDelete(&delete_TangoTimeInterval);
      instance.SetDeleteArray(&deleteArray_TangoTimeInterval);
      instance.SetDestructor(&destruct_TangoTimeInterval);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TangoTimeInterval*)
   {
      return GenerateInitInstanceLocal((::TangoTimeInterval*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TangoTimeInterval*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TangoData(void *p = nullptr);
   static void *newArray_TangoData(Long_t size, void *p);
   static void delete_TangoData(void *p);
   static void deleteArray_TangoData(void *p);
   static void destruct_TangoData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TangoData*)
   {
      ::TangoData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TangoData >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TangoData", ::TangoData::Class_Version(), "TangoData.h", 70,
                  typeid(::TangoData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TangoData::Dictionary, isa_proxy, 4,
                  sizeof(::TangoData) );
      instance.SetNew(&new_TangoData);
      instance.SetNewArray(&newArray_TangoData);
      instance.SetDelete(&delete_TangoData);
      instance.SetDeleteArray(&deleteArray_TangoData);
      instance.SetDestructor(&destruct_TangoData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TangoData*)
   {
      return GenerateInitInstanceLocal((::TangoData*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TangoData*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TangoConnection(void *p);
   static void deleteArray_TangoConnection(void *p);
   static void destruct_TangoConnection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TangoConnection*)
   {
      ::TangoConnection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TangoConnection >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TangoConnection", ::TangoConnection::Class_Version(), "TangoConnection.h", 27,
                  typeid(::TangoConnection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TangoConnection::Dictionary, isa_proxy, 4,
                  sizeof(::TangoConnection) );
      instance.SetDelete(&delete_TangoConnection);
      instance.SetDeleteArray(&deleteArray_TangoConnection);
      instance.SetDestructor(&destruct_TangoConnection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TangoConnection*)
   {
      return GenerateInitInstanceLocal((::TangoConnection*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TangoConnection*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TangoTimeParameter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TangoTimeParameter::Class_Name()
{
   return "TangoTimeParameter";
}

//______________________________________________________________________________
const char *TangoTimeParameter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TangoTimeParameter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TangoTimeParameter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TangoTimeParameter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TangoTimeParameter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TangoTimeParameter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TangoTimeParameter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TangoTimeParameter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TangoTimeInterval::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TangoTimeInterval::Class_Name()
{
   return "TangoTimeInterval";
}

//______________________________________________________________________________
const char *TangoTimeInterval::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TangoTimeInterval*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TangoTimeInterval::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TangoTimeInterval*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TangoTimeInterval::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TangoTimeInterval*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TangoTimeInterval::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TangoTimeInterval*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TangoData::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TangoData::Class_Name()
{
   return "TangoData";
}

//______________________________________________________________________________
const char *TangoData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TangoData*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TangoData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TangoData*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TangoData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TangoData*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TangoData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TangoData*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TangoConnection::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TangoConnection::Class_Name()
{
   return "TangoConnection";
}

//______________________________________________________________________________
const char *TangoConnection::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TangoConnection*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TangoConnection::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TangoConnection*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TangoConnection::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TangoConnection*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TangoConnection::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TangoConnection*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TangoTimeParameter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TangoTimeParameter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TangoTimeParameter::Class(),this);
   } else {
      R__b.WriteClassBuffer(TangoTimeParameter::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TangoTimeParameter(void *p) {
      return  p ? new(p) ::TangoTimeParameter : new ::TangoTimeParameter;
   }
   static void *newArray_TangoTimeParameter(Long_t nElements, void *p) {
      return p ? new(p) ::TangoTimeParameter[nElements] : new ::TangoTimeParameter[nElements];
   }
   // Wrapper around operator delete
   static void delete_TangoTimeParameter(void *p) {
      delete ((::TangoTimeParameter*)p);
   }
   static void deleteArray_TangoTimeParameter(void *p) {
      delete [] ((::TangoTimeParameter*)p);
   }
   static void destruct_TangoTimeParameter(void *p) {
      typedef ::TangoTimeParameter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TangoTimeParameter

//______________________________________________________________________________
void TangoTimeInterval::Streamer(TBuffer &R__b)
{
   // Stream an object of class TangoTimeInterval.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TangoTimeInterval::Class(),this);
   } else {
      R__b.WriteClassBuffer(TangoTimeInterval::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TangoTimeInterval(void *p) {
      return  p ? new(p) ::TangoTimeInterval : new ::TangoTimeInterval;
   }
   static void *newArray_TangoTimeInterval(Long_t nElements, void *p) {
      return p ? new(p) ::TangoTimeInterval[nElements] : new ::TangoTimeInterval[nElements];
   }
   // Wrapper around operator delete
   static void delete_TangoTimeInterval(void *p) {
      delete ((::TangoTimeInterval*)p);
   }
   static void deleteArray_TangoTimeInterval(void *p) {
      delete [] ((::TangoTimeInterval*)p);
   }
   static void destruct_TangoTimeInterval(void *p) {
      typedef ::TangoTimeInterval current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TangoTimeInterval

//______________________________________________________________________________
void TangoData::Streamer(TBuffer &R__b)
{
   // Stream an object of class TangoData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TangoData::Class(),this);
   } else {
      R__b.WriteClassBuffer(TangoData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TangoData(void *p) {
      return  p ? new(p) ::TangoData : new ::TangoData;
   }
   static void *newArray_TangoData(Long_t nElements, void *p) {
      return p ? new(p) ::TangoData[nElements] : new ::TangoData[nElements];
   }
   // Wrapper around operator delete
   static void delete_TangoData(void *p) {
      delete ((::TangoData*)p);
   }
   static void deleteArray_TangoData(void *p) {
      delete [] ((::TangoData*)p);
   }
   static void destruct_TangoData(void *p) {
      typedef ::TangoData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TangoData

//______________________________________________________________________________
void TangoConnection::Streamer(TBuffer &R__b)
{
   // Stream an object of class TangoConnection.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TangoConnection::Class(),this);
   } else {
      R__b.WriteClassBuffer(TangoConnection::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TangoConnection(void *p) {
      delete ((::TangoConnection*)p);
   }
   static void deleteArray_TangoConnection(void *p) {
      delete [] ((::TangoConnection*)p);
   }
   static void destruct_TangoConnection(void *p) {
      typedef ::TangoConnection current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TangoConnection

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
   static TClass *vectorlEboolgR_Dictionary();
   static void vectorlEboolgR_TClassManip(TClass*);
   static void *new_vectorlEboolgR(void *p = nullptr);
   static void *newArray_vectorlEboolgR(Long_t size, void *p);
   static void delete_vectorlEboolgR(void *p);
   static void deleteArray_vectorlEboolgR(void *p);
   static void destruct_vectorlEboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bool>*)
   {
      vector<bool> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bool>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bool>", -2, "vector", 592,
                  typeid(vector<bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEboolgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<bool>) );
      instance.SetNew(&new_vectorlEboolgR);
      instance.SetNewArray(&newArray_vectorlEboolgR);
      instance.SetDelete(&delete_vectorlEboolgR);
      instance.SetDeleteArray(&deleteArray_vectorlEboolgR);
      instance.SetDestructor(&destruct_vectorlEboolgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bool> >()));

      ::ROOT::AddClassAlternate("vector<bool>","std::vector<bool, std::allocator<bool> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<bool>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bool>*)nullptr)->GetClass();
      vectorlEboolgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEboolgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bool> : new vector<bool>;
   }
   static void *newArray_vectorlEboolgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bool>[nElements] : new vector<bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEboolgR(void *p) {
      delete ((vector<bool>*)p);
   }
   static void deleteArray_vectorlEboolgR(void *p) {
      delete [] ((vector<bool>*)p);
   }
   static void destruct_vectorlEboolgR(void *p) {
      typedef vector<bool> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bool>

namespace {
  void TriggerDictionaryInitialization_G__TangoDataDict_Impl() {
    static const char* headers[] = {
"TangoData.h",
"TangoConnection.h",
"tango_db_settings.h",
nullptr
    };
    static const char* includePaths[] = {
"/data/yaopeng/bmnroot_Yaopeng/database/tango",
"/home/tools/FairSoft/fairsoft/install/include",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/usr/include/libxml2",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/database/tango/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__TangoDataDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$TangoData.h")))  TangoTimeParameter;
class __attribute__((annotate("$clingAutoload$TangoData.h")))  TangoTimeInterval;
class __attribute__((annotate("$clingAutoload$TangoData.h")))  TangoData;
class __attribute__((annotate("$clingAutoload$TangoConnection.h")))  TangoConnection;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__TangoDataDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "TangoData.h"
#include "TangoConnection.h"
#include "tango_db_settings.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TangoConnection", payloadCode, "@",
"TangoData", payloadCode, "@",
"TangoTimeInterval", payloadCode, "@",
"TangoTimeParameter", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__TangoDataDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__TangoDataDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__TangoDataDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__TangoDataDict() {
  TriggerDictionaryInitialization_G__TangoDataDict_Impl();
}
