// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIdatabasedItoolsdIG__DbToolsDict
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
#include "UniGenerateClasses.h"
#include "UniParser.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_UniGenerateClasses(void *p = nullptr);
   static void *newArray_UniGenerateClasses(Long_t size, void *p);
   static void delete_UniGenerateClasses(void *p);
   static void deleteArray_UniGenerateClasses(void *p);
   static void destruct_UniGenerateClasses(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UniGenerateClasses*)
   {
      ::UniGenerateClasses *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UniGenerateClasses >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("UniGenerateClasses", ::UniGenerateClasses::Class_Version(), "UniGenerateClasses.h", 64,
                  typeid(::UniGenerateClasses), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UniGenerateClasses::Dictionary, isa_proxy, 4,
                  sizeof(::UniGenerateClasses) );
      instance.SetNew(&new_UniGenerateClasses);
      instance.SetNewArray(&newArray_UniGenerateClasses);
      instance.SetDelete(&delete_UniGenerateClasses);
      instance.SetDeleteArray(&deleteArray_UniGenerateClasses);
      instance.SetDestructor(&destruct_UniGenerateClasses);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UniGenerateClasses*)
   {
      return GenerateInitInstanceLocal((::UniGenerateClasses*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UniGenerateClasses*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_UniParser(void *p = nullptr);
   static void *newArray_UniParser(Long_t size, void *p);
   static void delete_UniParser(void *p);
   static void deleteArray_UniParser(void *p);
   static void destruct_UniParser(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UniParser*)
   {
      ::UniParser *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UniParser >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("UniParser", ::UniParser::Class_Version(), "UniParser.h", 90,
                  typeid(::UniParser), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UniParser::Dictionary, isa_proxy, 4,
                  sizeof(::UniParser) );
      instance.SetNew(&new_UniParser);
      instance.SetNewArray(&newArray_UniParser);
      instance.SetDelete(&delete_UniParser);
      instance.SetDeleteArray(&deleteArray_UniParser);
      instance.SetDestructor(&destruct_UniParser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UniParser*)
   {
      return GenerateInitInstanceLocal((::UniParser*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UniParser*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr UniGenerateClasses::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *UniGenerateClasses::Class_Name()
{
   return "UniGenerateClasses";
}

//______________________________________________________________________________
const char *UniGenerateClasses::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniGenerateClasses*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int UniGenerateClasses::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniGenerateClasses*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UniGenerateClasses::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniGenerateClasses*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UniGenerateClasses::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniGenerateClasses*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UniParser::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *UniParser::Class_Name()
{
   return "UniParser";
}

//______________________________________________________________________________
const char *UniParser::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniParser*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int UniParser::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniParser*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UniParser::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniParser*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UniParser::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniParser*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void UniGenerateClasses::Streamer(TBuffer &R__b)
{
   // Stream an object of class UniGenerateClasses.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UniGenerateClasses::Class(),this);
   } else {
      R__b.WriteClassBuffer(UniGenerateClasses::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_UniGenerateClasses(void *p) {
      return  p ? new(p) ::UniGenerateClasses : new ::UniGenerateClasses;
   }
   static void *newArray_UniGenerateClasses(Long_t nElements, void *p) {
      return p ? new(p) ::UniGenerateClasses[nElements] : new ::UniGenerateClasses[nElements];
   }
   // Wrapper around operator delete
   static void delete_UniGenerateClasses(void *p) {
      delete ((::UniGenerateClasses*)p);
   }
   static void deleteArray_UniGenerateClasses(void *p) {
      delete [] ((::UniGenerateClasses*)p);
   }
   static void destruct_UniGenerateClasses(void *p) {
      typedef ::UniGenerateClasses current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UniGenerateClasses

//______________________________________________________________________________
void UniParser::Streamer(TBuffer &R__b)
{
   // Stream an object of class UniParser.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UniParser::Class(),this);
   } else {
      R__b.WriteClassBuffer(UniParser::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_UniParser(void *p) {
      return  p ? new(p) ::UniParser : new ::UniParser;
   }
   static void *newArray_UniParser(Long_t nElements, void *p) {
      return p ? new(p) ::UniParser[nElements] : new ::UniParser[nElements];
   }
   // Wrapper around operator delete
   static void delete_UniParser(void *p) {
      delete ((::UniParser*)p);
   }
   static void deleteArray_UniParser(void *p) {
      delete [] ((::UniParser*)p);
   }
   static void destruct_UniParser(void *p) {
      typedef ::UniParser current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UniParser

namespace {
  void TriggerDictionaryInitialization_G__DbToolsDict_Impl() {
    static const char* headers[] = {
"UniGenerateClasses.h",
"UniParser.h",
nullptr
    };
    static const char* includePaths[] = {
"/data/yaopeng/bmnroot_Yaopeng/database/tools/../uni_db",
"/data/yaopeng/bmnroot_Yaopeng/database/tools/../elog_db",
"/data/yaopeng/bmnroot_Yaopeng/services",
"/data/yaopeng/bmnroot_Yaopeng/database/tools",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include",
"/usr/include/libxml2",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/database/tools/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__DbToolsDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$UniGenerateClasses.h")))  UniGenerateClasses;
class __attribute__((annotate("$clingAutoload$UniParser.h")))  UniParser;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__DbToolsDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "UniGenerateClasses.h"
#include "UniParser.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"UniGenerateClasses", payloadCode, "@",
"UniParser", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__DbToolsDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__DbToolsDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__DbToolsDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__DbToolsDict() {
  TriggerDictionaryInitialization_G__DbToolsDict_Impl();
}
