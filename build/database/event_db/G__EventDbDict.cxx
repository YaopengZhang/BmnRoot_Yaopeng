// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIdatabasedIevent_dbdIG__EventDbDict
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
#include "EventCatalogue.h"
#include "event_db_settings.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EventCatalogue*)
   {
      ::EventCatalogue *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EventCatalogue >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EventCatalogue", ::EventCatalogue::Class_Version(), "EventCatalogue.h", 16,
                  typeid(::EventCatalogue), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EventCatalogue::Dictionary, isa_proxy, 4,
                  sizeof(::EventCatalogue) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EventCatalogue*)
   {
      return GenerateInitInstanceLocal((::EventCatalogue*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::EventCatalogue*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr EventCatalogue::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EventCatalogue::Class_Name()
{
   return "EventCatalogue";
}

//______________________________________________________________________________
const char *EventCatalogue::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EventCatalogue*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EventCatalogue::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EventCatalogue*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EventCatalogue::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EventCatalogue*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EventCatalogue::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EventCatalogue*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void EventCatalogue::Streamer(TBuffer &R__b)
{
   // Stream an object of class EventCatalogue.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(EventCatalogue::Class(),this);
   } else {
      R__b.WriteClassBuffer(EventCatalogue::Class(),this);
   }
}

namespace ROOT {
} // end of namespace ROOT for class ::EventCatalogue

namespace {
  void TriggerDictionaryInitialization_G__EventDbDict_Impl() {
    static const char* headers[] = {
"EventCatalogue.h",
"event_db_settings.h",
nullptr
    };
    static const char* includePaths[] = {
"/data/yaopeng/bmnroot_Yaopeng/database/event_db",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/database/event_db/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__EventDbDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$EventCatalogue.h")))  EventCatalogue;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__EventDbDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "EventCatalogue.h"
#include "event_db_settings.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"EventCatalogue", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__EventDbDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__EventDbDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__EventDbDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__EventDbDict() {
  TriggerDictionaryInitialization_G__EventDbDict_Impl();
}
