// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIdetectorsdIgemdIG__GemDict
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
#include "BmnGemHitProducer.h"
#include "BmnGemGeo.h"
#include "BmnGemDigit.h"
#include "BmnGemGas.h"
#include "BmnManageQA.h"
#include "BmnGemDigitizerQAHistograms.h"
#include "BmnGemStripLayer.h"
#include "BmnGemStripModule.h"
#include "BmnGemStripStation.h"
#include "BmnGemStripStationSet.h"
#include "BmnGemStripStation_RunSummer2016.h"
#include "BmnGemStripStationSet_RunSummer2016.h"
#include "BmnGemStripStation_RunWinter2016.h"
#include "BmnGemStripStationSet_RunWinter2016.h"
#include "BmnGemStripStation_RunSpring2017.h"
#include "BmnGemStripStationSet_RunSpring2017.h"
#include "BmnGemStripDigit.h"
#include "BmnGemStripDigitizer.h"
#include "BmnGemStripHitMaker.h"
#include "BmnGemStripMedium.h"
#include "BmnGemStripTransform.h"
#include "BmnGemStripConfiguration.h"
#include "BmnGemStripMediumConfiguration.h"
#include "BmnGemStripHit.h"
#include "BmnGemTrack.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace BmnGemStripMediumConfiguration {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *BmnGemStripMediumConfiguration_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("BmnGemStripMediumConfiguration", 0 /*version*/, "BmnGemStripMediumConfiguration.h", 4,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &BmnGemStripMediumConfiguration_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *BmnGemStripMediumConfiguration_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace BmnGemStripConfiguration {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *BmnGemStripConfiguration_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("BmnGemStripConfiguration", 0 /*version*/, "BmnGemStripConfiguration.h", 4,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &BmnGemStripConfiguration_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *BmnGemStripConfiguration_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static TClass *BmnGemStripLayer_Dictionary();
   static void BmnGemStripLayer_TClassManip(TClass*);
   static void *new_BmnGemStripLayer(void *p = nullptr);
   static void *newArray_BmnGemStripLayer(Long_t size, void *p);
   static void delete_BmnGemStripLayer(void *p);
   static void deleteArray_BmnGemStripLayer(void *p);
   static void destruct_BmnGemStripLayer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemStripLayer*)
   {
      ::BmnGemStripLayer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnGemStripLayer));
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemStripLayer", "BmnGemStripLayer.h", 15,
                  typeid(::BmnGemStripLayer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnGemStripLayer_Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemStripLayer) );
      instance.SetNew(&new_BmnGemStripLayer);
      instance.SetNewArray(&newArray_BmnGemStripLayer);
      instance.SetDelete(&delete_BmnGemStripLayer);
      instance.SetDeleteArray(&deleteArray_BmnGemStripLayer);
      instance.SetDestructor(&destruct_BmnGemStripLayer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemStripLayer*)
   {
      return GenerateInitInstanceLocal((::BmnGemStripLayer*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemStripLayer*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnGemStripLayer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripLayer*)nullptr)->GetClass();
      BmnGemStripLayer_TClassManip(theClass);
   return theClass;
   }

   static void BmnGemStripLayer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemStripMedium*)
   {
      ::BmnGemStripMedium *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemStripMedium >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemStripMedium", ::BmnGemStripMedium::Class_Version(), "BmnGemStripMedium.h", 8,
                  typeid(::BmnGemStripMedium), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemStripMedium::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemStripMedium) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemStripMedium*)
   {
      return GenerateInitInstanceLocal((::BmnGemStripMedium*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemStripMedium*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnGemStripModule_Dictionary();
   static void BmnGemStripModule_TClassManip(TClass*);
   static void *new_BmnGemStripModule(void *p = nullptr);
   static void *newArray_BmnGemStripModule(Long_t size, void *p);
   static void delete_BmnGemStripModule(void *p);
   static void deleteArray_BmnGemStripModule(void *p);
   static void destruct_BmnGemStripModule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemStripModule*)
   {
      ::BmnGemStripModule *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnGemStripModule));
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemStripModule", "BmnGemStripModule.h", 22,
                  typeid(::BmnGemStripModule), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnGemStripModule_Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemStripModule) );
      instance.SetNew(&new_BmnGemStripModule);
      instance.SetNewArray(&newArray_BmnGemStripModule);
      instance.SetDelete(&delete_BmnGemStripModule);
      instance.SetDeleteArray(&deleteArray_BmnGemStripModule);
      instance.SetDestructor(&destruct_BmnGemStripModule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemStripModule*)
   {
      return GenerateInitInstanceLocal((::BmnGemStripModule*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemStripModule*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnGemStripModule_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripModule*)nullptr)->GetClass();
      BmnGemStripModule_TClassManip(theClass);
   return theClass;
   }

   static void BmnGemStripModule_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnGemStripStation(void *p = nullptr);
   static void *newArray_BmnGemStripStation(Long_t size, void *p);
   static void delete_BmnGemStripStation(void *p);
   static void deleteArray_BmnGemStripStation(void *p);
   static void destruct_BmnGemStripStation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemStripStation*)
   {
      ::BmnGemStripStation *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemStripStation >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemStripStation", ::BmnGemStripStation::Class_Version(), "BmnGemStripStation.h", 12,
                  typeid(::BmnGemStripStation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemStripStation::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemStripStation) );
      instance.SetNew(&new_BmnGemStripStation);
      instance.SetNewArray(&newArray_BmnGemStripStation);
      instance.SetDelete(&delete_BmnGemStripStation);
      instance.SetDeleteArray(&deleteArray_BmnGemStripStation);
      instance.SetDestructor(&destruct_BmnGemStripStation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemStripStation*)
   {
      return GenerateInitInstanceLocal((::BmnGemStripStation*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemStripStation*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnGemStripStationSet(void *p = nullptr);
   static void *newArray_BmnGemStripStationSet(Long_t size, void *p);
   static void delete_BmnGemStripStationSet(void *p);
   static void deleteArray_BmnGemStripStationSet(void *p);
   static void destruct_BmnGemStripStationSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemStripStationSet*)
   {
      ::BmnGemStripStationSet *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemStripStationSet >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemStripStationSet", ::BmnGemStripStationSet::Class_Version(), "BmnGemStripStationSet.h", 14,
                  typeid(::BmnGemStripStationSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemStripStationSet::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemStripStationSet) );
      instance.SetNew(&new_BmnGemStripStationSet);
      instance.SetNewArray(&newArray_BmnGemStripStationSet);
      instance.SetDelete(&delete_BmnGemStripStationSet);
      instance.SetDeleteArray(&deleteArray_BmnGemStripStationSet);
      instance.SetDestructor(&destruct_BmnGemStripStationSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemStripStationSet*)
   {
      return GenerateInitInstanceLocal((::BmnGemStripStationSet*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemStripStationSet*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnGemHitProducer(void *p = nullptr);
   static void *newArray_BmnGemHitProducer(Long_t size, void *p);
   static void delete_BmnGemHitProducer(void *p);
   static void deleteArray_BmnGemHitProducer(void *p);
   static void destruct_BmnGemHitProducer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemHitProducer*)
   {
      ::BmnGemHitProducer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemHitProducer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemHitProducer", ::BmnGemHitProducer::Class_Version(), "BmnGemHitProducer.h", 13,
                  typeid(::BmnGemHitProducer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemHitProducer::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemHitProducer) );
      instance.SetNew(&new_BmnGemHitProducer);
      instance.SetNewArray(&newArray_BmnGemHitProducer);
      instance.SetDelete(&delete_BmnGemHitProducer);
      instance.SetDeleteArray(&deleteArray_BmnGemHitProducer);
      instance.SetDestructor(&destruct_BmnGemHitProducer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemHitProducer*)
   {
      return GenerateInitInstanceLocal((::BmnGemHitProducer*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemHitProducer*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnGemGeo(void *p = nullptr);
   static void *newArray_BmnGemGeo(Long_t size, void *p);
   static void delete_BmnGemGeo(void *p);
   static void deleteArray_BmnGemGeo(void *p);
   static void destruct_BmnGemGeo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemGeo*)
   {
      ::BmnGemGeo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemGeo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemGeo", ::BmnGemGeo::Class_Version(), "BmnGemGeo.h", 11,
                  typeid(::BmnGemGeo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemGeo::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemGeo) );
      instance.SetNew(&new_BmnGemGeo);
      instance.SetNewArray(&newArray_BmnGemGeo);
      instance.SetDelete(&delete_BmnGemGeo);
      instance.SetDeleteArray(&deleteArray_BmnGemGeo);
      instance.SetDestructor(&destruct_BmnGemGeo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemGeo*)
   {
      return GenerateInitInstanceLocal((::BmnGemGeo*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemGeo*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnGemDigit(void *p = nullptr);
   static void *newArray_BmnGemDigit(Long_t size, void *p);
   static void delete_BmnGemDigit(void *p);
   static void deleteArray_BmnGemDigit(void *p);
   static void destruct_BmnGemDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemDigit*)
   {
      ::BmnGemDigit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemDigit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemDigit", ::BmnGemDigit::Class_Version(), "BmnGemDigit.h", 3,
                  typeid(::BmnGemDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemDigit) );
      instance.SetNew(&new_BmnGemDigit);
      instance.SetNewArray(&newArray_BmnGemDigit);
      instance.SetDelete(&delete_BmnGemDigit);
      instance.SetDeleteArray(&deleteArray_BmnGemDigit);
      instance.SetDestructor(&destruct_BmnGemDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemDigit*)
   {
      return GenerateInitInstanceLocal((::BmnGemDigit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemDigit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnGemGas_Dictionary();
   static void BmnGemGas_TClassManip(TClass*);
   static void *new_BmnGemGas(void *p = nullptr);
   static void *newArray_BmnGemGas(Long_t size, void *p);
   static void delete_BmnGemGas(void *p);
   static void deleteArray_BmnGemGas(void *p);
   static void destruct_BmnGemGas(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemGas*)
   {
      ::BmnGemGas *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnGemGas));
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemGas", "BmnGemGas.h", 11,
                  typeid(::BmnGemGas), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnGemGas_Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemGas) );
      instance.SetNew(&new_BmnGemGas);
      instance.SetNewArray(&newArray_BmnGemGas);
      instance.SetDelete(&delete_BmnGemGas);
      instance.SetDeleteArray(&deleteArray_BmnGemGas);
      instance.SetDestructor(&destruct_BmnGemGas);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemGas*)
   {
      return GenerateInitInstanceLocal((::BmnGemGas*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemGas*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnGemGas_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnGemGas*)nullptr)->GetClass();
      BmnGemGas_TClassManip(theClass);
   return theClass;
   }

   static void BmnGemGas_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnGemDigitizerQAHistograms(void *p = nullptr);
   static void *newArray_BmnGemDigitizerQAHistograms(Long_t size, void *p);
   static void delete_BmnGemDigitizerQAHistograms(void *p);
   static void deleteArray_BmnGemDigitizerQAHistograms(void *p);
   static void destruct_BmnGemDigitizerQAHistograms(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemDigitizerQAHistograms*)
   {
      ::BmnGemDigitizerQAHistograms *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemDigitizerQAHistograms >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemDigitizerQAHistograms", ::BmnGemDigitizerQAHistograms::Class_Version(), "BmnGemDigitizerQAHistograms.h", 12,
                  typeid(::BmnGemDigitizerQAHistograms), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemDigitizerQAHistograms::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemDigitizerQAHistograms) );
      instance.SetNew(&new_BmnGemDigitizerQAHistograms);
      instance.SetNewArray(&newArray_BmnGemDigitizerQAHistograms);
      instance.SetDelete(&delete_BmnGemDigitizerQAHistograms);
      instance.SetDeleteArray(&deleteArray_BmnGemDigitizerQAHistograms);
      instance.SetDestructor(&destruct_BmnGemDigitizerQAHistograms);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemDigitizerQAHistograms*)
   {
      return GenerateInitInstanceLocal((::BmnGemDigitizerQAHistograms*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemDigitizerQAHistograms*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnGemStripStation_RunSummer2016(void *p);
   static void deleteArray_BmnGemStripStation_RunSummer2016(void *p);
   static void destruct_BmnGemStripStation_RunSummer2016(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemStripStation_RunSummer2016*)
   {
      ::BmnGemStripStation_RunSummer2016 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemStripStation_RunSummer2016 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemStripStation_RunSummer2016", ::BmnGemStripStation_RunSummer2016::Class_Version(), "BmnGemStripStation_RunSummer2016.h", 9,
                  typeid(::BmnGemStripStation_RunSummer2016), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemStripStation_RunSummer2016::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemStripStation_RunSummer2016) );
      instance.SetDelete(&delete_BmnGemStripStation_RunSummer2016);
      instance.SetDeleteArray(&deleteArray_BmnGemStripStation_RunSummer2016);
      instance.SetDestructor(&destruct_BmnGemStripStation_RunSummer2016);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemStripStation_RunSummer2016*)
   {
      return GenerateInitInstanceLocal((::BmnGemStripStation_RunSummer2016*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemStripStation_RunSummer2016*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnGemStripStationSet_RunSummer2016(void *p);
   static void deleteArray_BmnGemStripStationSet_RunSummer2016(void *p);
   static void destruct_BmnGemStripStationSet_RunSummer2016(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemStripStationSet_RunSummer2016*)
   {
      ::BmnGemStripStationSet_RunSummer2016 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemStripStationSet_RunSummer2016 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemStripStationSet_RunSummer2016", ::BmnGemStripStationSet_RunSummer2016::Class_Version(), "BmnGemStripStationSet_RunSummer2016.h", 10,
                  typeid(::BmnGemStripStationSet_RunSummer2016), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemStripStationSet_RunSummer2016::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemStripStationSet_RunSummer2016) );
      instance.SetDelete(&delete_BmnGemStripStationSet_RunSummer2016);
      instance.SetDeleteArray(&deleteArray_BmnGemStripStationSet_RunSummer2016);
      instance.SetDestructor(&destruct_BmnGemStripStationSet_RunSummer2016);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemStripStationSet_RunSummer2016*)
   {
      return GenerateInitInstanceLocal((::BmnGemStripStationSet_RunSummer2016*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemStripStationSet_RunSummer2016*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnGemStripStation_RunWinter2016(void *p);
   static void deleteArray_BmnGemStripStation_RunWinter2016(void *p);
   static void destruct_BmnGemStripStation_RunWinter2016(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemStripStation_RunWinter2016*)
   {
      ::BmnGemStripStation_RunWinter2016 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemStripStation_RunWinter2016 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemStripStation_RunWinter2016", ::BmnGemStripStation_RunWinter2016::Class_Version(), "BmnGemStripStation_RunWinter2016.h", 7,
                  typeid(::BmnGemStripStation_RunWinter2016), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemStripStation_RunWinter2016::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemStripStation_RunWinter2016) );
      instance.SetDelete(&delete_BmnGemStripStation_RunWinter2016);
      instance.SetDeleteArray(&deleteArray_BmnGemStripStation_RunWinter2016);
      instance.SetDestructor(&destruct_BmnGemStripStation_RunWinter2016);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemStripStation_RunWinter2016*)
   {
      return GenerateInitInstanceLocal((::BmnGemStripStation_RunWinter2016*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemStripStation_RunWinter2016*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnGemStripStationSet_RunWinter2016(void *p);
   static void deleteArray_BmnGemStripStationSet_RunWinter2016(void *p);
   static void destruct_BmnGemStripStationSet_RunWinter2016(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemStripStationSet_RunWinter2016*)
   {
      ::BmnGemStripStationSet_RunWinter2016 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemStripStationSet_RunWinter2016 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemStripStationSet_RunWinter2016", ::BmnGemStripStationSet_RunWinter2016::Class_Version(), "BmnGemStripStationSet_RunWinter2016.h", 10,
                  typeid(::BmnGemStripStationSet_RunWinter2016), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemStripStationSet_RunWinter2016::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemStripStationSet_RunWinter2016) );
      instance.SetDelete(&delete_BmnGemStripStationSet_RunWinter2016);
      instance.SetDeleteArray(&deleteArray_BmnGemStripStationSet_RunWinter2016);
      instance.SetDestructor(&destruct_BmnGemStripStationSet_RunWinter2016);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemStripStationSet_RunWinter2016*)
   {
      return GenerateInitInstanceLocal((::BmnGemStripStationSet_RunWinter2016*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemStripStationSet_RunWinter2016*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnGemStripStation_RunSpring2017(void *p);
   static void deleteArray_BmnGemStripStation_RunSpring2017(void *p);
   static void destruct_BmnGemStripStation_RunSpring2017(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemStripStation_RunSpring2017*)
   {
      ::BmnGemStripStation_RunSpring2017 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemStripStation_RunSpring2017 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemStripStation_RunSpring2017", ::BmnGemStripStation_RunSpring2017::Class_Version(), "BmnGemStripStation_RunSpring2017.h", 7,
                  typeid(::BmnGemStripStation_RunSpring2017), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemStripStation_RunSpring2017::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemStripStation_RunSpring2017) );
      instance.SetDelete(&delete_BmnGemStripStation_RunSpring2017);
      instance.SetDeleteArray(&deleteArray_BmnGemStripStation_RunSpring2017);
      instance.SetDestructor(&destruct_BmnGemStripStation_RunSpring2017);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemStripStation_RunSpring2017*)
   {
      return GenerateInitInstanceLocal((::BmnGemStripStation_RunSpring2017*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemStripStation_RunSpring2017*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnGemStripStationSet_RunSpring2017(void *p);
   static void deleteArray_BmnGemStripStationSet_RunSpring2017(void *p);
   static void destruct_BmnGemStripStationSet_RunSpring2017(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemStripStationSet_RunSpring2017*)
   {
      ::BmnGemStripStationSet_RunSpring2017 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemStripStationSet_RunSpring2017 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemStripStationSet_RunSpring2017", ::BmnGemStripStationSet_RunSpring2017::Class_Version(), "BmnGemStripStationSet_RunSpring2017.h", 10,
                  typeid(::BmnGemStripStationSet_RunSpring2017), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemStripStationSet_RunSpring2017::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemStripStationSet_RunSpring2017) );
      instance.SetDelete(&delete_BmnGemStripStationSet_RunSpring2017);
      instance.SetDeleteArray(&deleteArray_BmnGemStripStationSet_RunSpring2017);
      instance.SetDestructor(&destruct_BmnGemStripStationSet_RunSpring2017);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemStripStationSet_RunSpring2017*)
   {
      return GenerateInitInstanceLocal((::BmnGemStripStationSet_RunSpring2017*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemStripStationSet_RunSpring2017*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnGemStripDigit(void *p = nullptr);
   static void *newArray_BmnGemStripDigit(Long_t size, void *p);
   static void delete_BmnGemStripDigit(void *p);
   static void deleteArray_BmnGemStripDigit(void *p);
   static void destruct_BmnGemStripDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemStripDigit*)
   {
      ::BmnGemStripDigit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemStripDigit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemStripDigit", ::BmnGemStripDigit::Class_Version(), "BmnGemStripDigit.h", 8,
                  typeid(::BmnGemStripDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemStripDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemStripDigit) );
      instance.SetNew(&new_BmnGemStripDigit);
      instance.SetNewArray(&newArray_BmnGemStripDigit);
      instance.SetDelete(&delete_BmnGemStripDigit);
      instance.SetDeleteArray(&deleteArray_BmnGemStripDigit);
      instance.SetDestructor(&destruct_BmnGemStripDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemStripDigit*)
   {
      return GenerateInitInstanceLocal((::BmnGemStripDigit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemStripDigit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnGemStripHit(void *p = nullptr);
   static void *newArray_BmnGemStripHit(Long_t size, void *p);
   static void delete_BmnGemStripHit(void *p);
   static void deleteArray_BmnGemStripHit(void *p);
   static void destruct_BmnGemStripHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemStripHit*)
   {
      ::BmnGemStripHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemStripHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemStripHit", ::BmnGemStripHit::Class_Version(), "BmnGemStripHit.h", 9,
                  typeid(::BmnGemStripHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemStripHit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemStripHit) );
      instance.SetNew(&new_BmnGemStripHit);
      instance.SetNewArray(&newArray_BmnGemStripHit);
      instance.SetDelete(&delete_BmnGemStripHit);
      instance.SetDeleteArray(&deleteArray_BmnGemStripHit);
      instance.SetDestructor(&destruct_BmnGemStripHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemStripHit*)
   {
      return GenerateInitInstanceLocal((::BmnGemStripHit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemStripHit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnGemStripTransform(void *p = nullptr);
   static void *newArray_BmnGemStripTransform(Long_t size, void *p);
   static void delete_BmnGemStripTransform(void *p);
   static void deleteArray_BmnGemStripTransform(void *p);
   static void destruct_BmnGemStripTransform(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemStripTransform*)
   {
      ::BmnGemStripTransform *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemStripTransform >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemStripTransform", ::BmnGemStripTransform::Class_Version(), "BmnGemStripTransform.h", 19,
                  typeid(::BmnGemStripTransform), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemStripTransform::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemStripTransform) );
      instance.SetNew(&new_BmnGemStripTransform);
      instance.SetNewArray(&newArray_BmnGemStripTransform);
      instance.SetDelete(&delete_BmnGemStripTransform);
      instance.SetDeleteArray(&deleteArray_BmnGemStripTransform);
      instance.SetDestructor(&destruct_BmnGemStripTransform);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemStripTransform*)
   {
      return GenerateInitInstanceLocal((::BmnGemStripTransform*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemStripTransform*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnGemStripDigitizer(void *p = nullptr);
   static void *newArray_BmnGemStripDigitizer(Long_t size, void *p);
   static void delete_BmnGemStripDigitizer(void *p);
   static void deleteArray_BmnGemStripDigitizer(void *p);
   static void destruct_BmnGemStripDigitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemStripDigitizer*)
   {
      ::BmnGemStripDigitizer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemStripDigitizer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemStripDigitizer", ::BmnGemStripDigitizer::Class_Version(), "BmnGemStripDigitizer.h", 22,
                  typeid(::BmnGemStripDigitizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemStripDigitizer::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemStripDigitizer) );
      instance.SetNew(&new_BmnGemStripDigitizer);
      instance.SetNewArray(&newArray_BmnGemStripDigitizer);
      instance.SetDelete(&delete_BmnGemStripDigitizer);
      instance.SetDeleteArray(&deleteArray_BmnGemStripDigitizer);
      instance.SetDestructor(&destruct_BmnGemStripDigitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemStripDigitizer*)
   {
      return GenerateInitInstanceLocal((::BmnGemStripDigitizer*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemStripDigitizer*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnGemStripHitMaker(void *p = nullptr);
   static void *newArray_BmnGemStripHitMaker(Long_t size, void *p);
   static void delete_BmnGemStripHitMaker(void *p);
   static void deleteArray_BmnGemStripHitMaker(void *p);
   static void destruct_BmnGemStripHitMaker(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemStripHitMaker*)
   {
      ::BmnGemStripHitMaker *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemStripHitMaker >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemStripHitMaker", ::BmnGemStripHitMaker::Class_Version(), "BmnGemStripHitMaker.h", 25,
                  typeid(::BmnGemStripHitMaker), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemStripHitMaker::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemStripHitMaker) );
      instance.SetNew(&new_BmnGemStripHitMaker);
      instance.SetNewArray(&newArray_BmnGemStripHitMaker);
      instance.SetDelete(&delete_BmnGemStripHitMaker);
      instance.SetDeleteArray(&deleteArray_BmnGemStripHitMaker);
      instance.SetDestructor(&destruct_BmnGemStripHitMaker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemStripHitMaker*)
   {
      return GenerateInitInstanceLocal((::BmnGemStripHitMaker*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemStripHitMaker*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnGemTrack(void *p = nullptr);
   static void *newArray_BmnGemTrack(Long_t size, void *p);
   static void delete_BmnGemTrack(void *p);
   static void deleteArray_BmnGemTrack(void *p);
   static void destruct_BmnGemTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemTrack*)
   {
      ::BmnGemTrack *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemTrack >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemTrack", ::BmnGemTrack::Class_Version(), "BmnGemTrack.h", 9,
                  typeid(::BmnGemTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemTrack::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemTrack) );
      instance.SetNew(&new_BmnGemTrack);
      instance.SetNewArray(&newArray_BmnGemTrack);
      instance.SetDelete(&delete_BmnGemTrack);
      instance.SetDeleteArray(&deleteArray_BmnGemTrack);
      instance.SetDestructor(&destruct_BmnGemTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemTrack*)
   {
      return GenerateInitInstanceLocal((::BmnGemTrack*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemTrack*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnGemStripMedium::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemStripMedium::Class_Name()
{
   return "BmnGemStripMedium";
}

//______________________________________________________________________________
const char *BmnGemStripMedium::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripMedium*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemStripMedium::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripMedium*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemStripMedium::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripMedium*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemStripMedium::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripMedium*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemStripStation::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemStripStation::Class_Name()
{
   return "BmnGemStripStation";
}

//______________________________________________________________________________
const char *BmnGemStripStation::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStation*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemStripStation::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStation*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemStripStation::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStation*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemStripStation::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStation*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemStripStationSet::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemStripStationSet::Class_Name()
{
   return "BmnGemStripStationSet";
}

//______________________________________________________________________________
const char *BmnGemStripStationSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStationSet*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemStripStationSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStationSet*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemStripStationSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStationSet*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemStripStationSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStationSet*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemHitProducer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemHitProducer::Class_Name()
{
   return "BmnGemHitProducer";
}

//______________________________________________________________________________
const char *BmnGemHitProducer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemHitProducer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemHitProducer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemHitProducer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemHitProducer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemHitProducer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemHitProducer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemHitProducer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemGeo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemGeo::Class_Name()
{
   return "BmnGemGeo";
}

//______________________________________________________________________________
const char *BmnGemGeo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemGeo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemGeo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemGeo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemGeo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemGeo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemGeo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemGeo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemDigit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemDigit::Class_Name()
{
   return "BmnGemDigit";
}

//______________________________________________________________________________
const char *BmnGemDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemDigit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemDigit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemDigit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemDigit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemDigitizerQAHistograms::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemDigitizerQAHistograms::Class_Name()
{
   return "BmnGemDigitizerQAHistograms";
}

//______________________________________________________________________________
const char *BmnGemDigitizerQAHistograms::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemDigitizerQAHistograms*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemDigitizerQAHistograms::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemDigitizerQAHistograms*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemDigitizerQAHistograms::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemDigitizerQAHistograms*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemDigitizerQAHistograms::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemDigitizerQAHistograms*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemStripStation_RunSummer2016::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemStripStation_RunSummer2016::Class_Name()
{
   return "BmnGemStripStation_RunSummer2016";
}

//______________________________________________________________________________
const char *BmnGemStripStation_RunSummer2016::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStation_RunSummer2016*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemStripStation_RunSummer2016::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStation_RunSummer2016*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemStripStation_RunSummer2016::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStation_RunSummer2016*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemStripStation_RunSummer2016::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStation_RunSummer2016*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemStripStationSet_RunSummer2016::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemStripStationSet_RunSummer2016::Class_Name()
{
   return "BmnGemStripStationSet_RunSummer2016";
}

//______________________________________________________________________________
const char *BmnGemStripStationSet_RunSummer2016::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStationSet_RunSummer2016*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemStripStationSet_RunSummer2016::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStationSet_RunSummer2016*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemStripStationSet_RunSummer2016::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStationSet_RunSummer2016*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemStripStationSet_RunSummer2016::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStationSet_RunSummer2016*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemStripStation_RunWinter2016::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemStripStation_RunWinter2016::Class_Name()
{
   return "BmnGemStripStation_RunWinter2016";
}

//______________________________________________________________________________
const char *BmnGemStripStation_RunWinter2016::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStation_RunWinter2016*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemStripStation_RunWinter2016::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStation_RunWinter2016*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemStripStation_RunWinter2016::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStation_RunWinter2016*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemStripStation_RunWinter2016::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStation_RunWinter2016*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemStripStationSet_RunWinter2016::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemStripStationSet_RunWinter2016::Class_Name()
{
   return "BmnGemStripStationSet_RunWinter2016";
}

//______________________________________________________________________________
const char *BmnGemStripStationSet_RunWinter2016::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStationSet_RunWinter2016*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemStripStationSet_RunWinter2016::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStationSet_RunWinter2016*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemStripStationSet_RunWinter2016::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStationSet_RunWinter2016*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemStripStationSet_RunWinter2016::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStationSet_RunWinter2016*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemStripStation_RunSpring2017::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemStripStation_RunSpring2017::Class_Name()
{
   return "BmnGemStripStation_RunSpring2017";
}

//______________________________________________________________________________
const char *BmnGemStripStation_RunSpring2017::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStation_RunSpring2017*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemStripStation_RunSpring2017::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStation_RunSpring2017*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemStripStation_RunSpring2017::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStation_RunSpring2017*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemStripStation_RunSpring2017::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStation_RunSpring2017*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemStripStationSet_RunSpring2017::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemStripStationSet_RunSpring2017::Class_Name()
{
   return "BmnGemStripStationSet_RunSpring2017";
}

//______________________________________________________________________________
const char *BmnGemStripStationSet_RunSpring2017::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStationSet_RunSpring2017*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemStripStationSet_RunSpring2017::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStationSet_RunSpring2017*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemStripStationSet_RunSpring2017::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStationSet_RunSpring2017*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemStripStationSet_RunSpring2017::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStationSet_RunSpring2017*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemStripDigit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemStripDigit::Class_Name()
{
   return "BmnGemStripDigit";
}

//______________________________________________________________________________
const char *BmnGemStripDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripDigit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemStripDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripDigit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemStripDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripDigit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemStripDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripDigit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemStripHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemStripHit::Class_Name()
{
   return "BmnGemStripHit";
}

//______________________________________________________________________________
const char *BmnGemStripHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemStripHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemStripHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemStripHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemStripTransform::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemStripTransform::Class_Name()
{
   return "BmnGemStripTransform";
}

//______________________________________________________________________________
const char *BmnGemStripTransform::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripTransform*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemStripTransform::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripTransform*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemStripTransform::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripTransform*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemStripTransform::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripTransform*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemStripDigitizer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemStripDigitizer::Class_Name()
{
   return "BmnGemStripDigitizer";
}

//______________________________________________________________________________
const char *BmnGemStripDigitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripDigitizer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemStripDigitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripDigitizer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemStripDigitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripDigitizer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemStripDigitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripDigitizer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemStripHitMaker::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemStripHitMaker::Class_Name()
{
   return "BmnGemStripHitMaker";
}

//______________________________________________________________________________
const char *BmnGemStripHitMaker::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripHitMaker*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemStripHitMaker::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripHitMaker*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemStripHitMaker::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripHitMaker*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemStripHitMaker::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripHitMaker*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemTrack::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemTrack::Class_Name()
{
   return "BmnGemTrack";
}

//______________________________________________________________________________
const char *BmnGemTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemTrack*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemTrack*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemTrack*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemTrack*)nullptr)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGemStripLayer(void *p) {
      return  p ? new(p) ::BmnGemStripLayer : new ::BmnGemStripLayer;
   }
   static void *newArray_BmnGemStripLayer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGemStripLayer[nElements] : new ::BmnGemStripLayer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGemStripLayer(void *p) {
      delete ((::BmnGemStripLayer*)p);
   }
   static void deleteArray_BmnGemStripLayer(void *p) {
      delete [] ((::BmnGemStripLayer*)p);
   }
   static void destruct_BmnGemStripLayer(void *p) {
      typedef ::BmnGemStripLayer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemStripLayer

//______________________________________________________________________________
void BmnGemStripMedium::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemStripMedium.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemStripMedium::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemStripMedium::Class(),this);
   }
}

namespace ROOT {
} // end of namespace ROOT for class ::BmnGemStripMedium

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGemStripModule(void *p) {
      return  p ? new(p) ::BmnGemStripModule : new ::BmnGemStripModule;
   }
   static void *newArray_BmnGemStripModule(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGemStripModule[nElements] : new ::BmnGemStripModule[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGemStripModule(void *p) {
      delete ((::BmnGemStripModule*)p);
   }
   static void deleteArray_BmnGemStripModule(void *p) {
      delete [] ((::BmnGemStripModule*)p);
   }
   static void destruct_BmnGemStripModule(void *p) {
      typedef ::BmnGemStripModule current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemStripModule

//______________________________________________________________________________
void BmnGemStripStation::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemStripStation.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemStripStation::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemStripStation::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGemStripStation(void *p) {
      return  p ? new(p) ::BmnGemStripStation : new ::BmnGemStripStation;
   }
   static void *newArray_BmnGemStripStation(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGemStripStation[nElements] : new ::BmnGemStripStation[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGemStripStation(void *p) {
      delete ((::BmnGemStripStation*)p);
   }
   static void deleteArray_BmnGemStripStation(void *p) {
      delete [] ((::BmnGemStripStation*)p);
   }
   static void destruct_BmnGemStripStation(void *p) {
      typedef ::BmnGemStripStation current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemStripStation

//______________________________________________________________________________
void BmnGemStripStationSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemStripStationSet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemStripStationSet::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemStripStationSet::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGemStripStationSet(void *p) {
      return  p ? new(p) ::BmnGemStripStationSet : new ::BmnGemStripStationSet;
   }
   static void *newArray_BmnGemStripStationSet(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGemStripStationSet[nElements] : new ::BmnGemStripStationSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGemStripStationSet(void *p) {
      delete ((::BmnGemStripStationSet*)p);
   }
   static void deleteArray_BmnGemStripStationSet(void *p) {
      delete [] ((::BmnGemStripStationSet*)p);
   }
   static void destruct_BmnGemStripStationSet(void *p) {
      typedef ::BmnGemStripStationSet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemStripStationSet

//______________________________________________________________________________
void BmnGemHitProducer::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemHitProducer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemHitProducer::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemHitProducer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGemHitProducer(void *p) {
      return  p ? new(p) ::BmnGemHitProducer : new ::BmnGemHitProducer;
   }
   static void *newArray_BmnGemHitProducer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGemHitProducer[nElements] : new ::BmnGemHitProducer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGemHitProducer(void *p) {
      delete ((::BmnGemHitProducer*)p);
   }
   static void deleteArray_BmnGemHitProducer(void *p) {
      delete [] ((::BmnGemHitProducer*)p);
   }
   static void destruct_BmnGemHitProducer(void *p) {
      typedef ::BmnGemHitProducer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemHitProducer

//______________________________________________________________________________
void BmnGemGeo::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemGeo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemGeo::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemGeo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGemGeo(void *p) {
      return  p ? new(p) ::BmnGemGeo : new ::BmnGemGeo;
   }
   static void *newArray_BmnGemGeo(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGemGeo[nElements] : new ::BmnGemGeo[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGemGeo(void *p) {
      delete ((::BmnGemGeo*)p);
   }
   static void deleteArray_BmnGemGeo(void *p) {
      delete [] ((::BmnGemGeo*)p);
   }
   static void destruct_BmnGemGeo(void *p) {
      typedef ::BmnGemGeo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemGeo

//______________________________________________________________________________
void BmnGemDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGemDigit(void *p) {
      return  p ? new(p) ::BmnGemDigit : new ::BmnGemDigit;
   }
   static void *newArray_BmnGemDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGemDigit[nElements] : new ::BmnGemDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGemDigit(void *p) {
      delete ((::BmnGemDigit*)p);
   }
   static void deleteArray_BmnGemDigit(void *p) {
      delete [] ((::BmnGemDigit*)p);
   }
   static void destruct_BmnGemDigit(void *p) {
      typedef ::BmnGemDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemDigit

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGemGas(void *p) {
      return  p ? new(p) ::BmnGemGas : new ::BmnGemGas;
   }
   static void *newArray_BmnGemGas(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGemGas[nElements] : new ::BmnGemGas[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGemGas(void *p) {
      delete ((::BmnGemGas*)p);
   }
   static void deleteArray_BmnGemGas(void *p) {
      delete [] ((::BmnGemGas*)p);
   }
   static void destruct_BmnGemGas(void *p) {
      typedef ::BmnGemGas current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemGas

//______________________________________________________________________________
void BmnGemDigitizerQAHistograms::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemDigitizerQAHistograms.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemDigitizerQAHistograms::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemDigitizerQAHistograms::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGemDigitizerQAHistograms(void *p) {
      return  p ? new(p) ::BmnGemDigitizerQAHistograms : new ::BmnGemDigitizerQAHistograms;
   }
   static void *newArray_BmnGemDigitizerQAHistograms(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGemDigitizerQAHistograms[nElements] : new ::BmnGemDigitizerQAHistograms[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGemDigitizerQAHistograms(void *p) {
      delete ((::BmnGemDigitizerQAHistograms*)p);
   }
   static void deleteArray_BmnGemDigitizerQAHistograms(void *p) {
      delete [] ((::BmnGemDigitizerQAHistograms*)p);
   }
   static void destruct_BmnGemDigitizerQAHistograms(void *p) {
      typedef ::BmnGemDigitizerQAHistograms current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemDigitizerQAHistograms

//______________________________________________________________________________
void BmnGemStripStation_RunSummer2016::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemStripStation_RunSummer2016.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemStripStation_RunSummer2016::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemStripStation_RunSummer2016::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnGemStripStation_RunSummer2016(void *p) {
      delete ((::BmnGemStripStation_RunSummer2016*)p);
   }
   static void deleteArray_BmnGemStripStation_RunSummer2016(void *p) {
      delete [] ((::BmnGemStripStation_RunSummer2016*)p);
   }
   static void destruct_BmnGemStripStation_RunSummer2016(void *p) {
      typedef ::BmnGemStripStation_RunSummer2016 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemStripStation_RunSummer2016

//______________________________________________________________________________
void BmnGemStripStationSet_RunSummer2016::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemStripStationSet_RunSummer2016.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemStripStationSet_RunSummer2016::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemStripStationSet_RunSummer2016::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnGemStripStationSet_RunSummer2016(void *p) {
      delete ((::BmnGemStripStationSet_RunSummer2016*)p);
   }
   static void deleteArray_BmnGemStripStationSet_RunSummer2016(void *p) {
      delete [] ((::BmnGemStripStationSet_RunSummer2016*)p);
   }
   static void destruct_BmnGemStripStationSet_RunSummer2016(void *p) {
      typedef ::BmnGemStripStationSet_RunSummer2016 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemStripStationSet_RunSummer2016

//______________________________________________________________________________
void BmnGemStripStation_RunWinter2016::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemStripStation_RunWinter2016.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemStripStation_RunWinter2016::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemStripStation_RunWinter2016::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnGemStripStation_RunWinter2016(void *p) {
      delete ((::BmnGemStripStation_RunWinter2016*)p);
   }
   static void deleteArray_BmnGemStripStation_RunWinter2016(void *p) {
      delete [] ((::BmnGemStripStation_RunWinter2016*)p);
   }
   static void destruct_BmnGemStripStation_RunWinter2016(void *p) {
      typedef ::BmnGemStripStation_RunWinter2016 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemStripStation_RunWinter2016

//______________________________________________________________________________
void BmnGemStripStationSet_RunWinter2016::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemStripStationSet_RunWinter2016.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemStripStationSet_RunWinter2016::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemStripStationSet_RunWinter2016::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnGemStripStationSet_RunWinter2016(void *p) {
      delete ((::BmnGemStripStationSet_RunWinter2016*)p);
   }
   static void deleteArray_BmnGemStripStationSet_RunWinter2016(void *p) {
      delete [] ((::BmnGemStripStationSet_RunWinter2016*)p);
   }
   static void destruct_BmnGemStripStationSet_RunWinter2016(void *p) {
      typedef ::BmnGemStripStationSet_RunWinter2016 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemStripStationSet_RunWinter2016

//______________________________________________________________________________
void BmnGemStripStation_RunSpring2017::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemStripStation_RunSpring2017.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemStripStation_RunSpring2017::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemStripStation_RunSpring2017::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnGemStripStation_RunSpring2017(void *p) {
      delete ((::BmnGemStripStation_RunSpring2017*)p);
   }
   static void deleteArray_BmnGemStripStation_RunSpring2017(void *p) {
      delete [] ((::BmnGemStripStation_RunSpring2017*)p);
   }
   static void destruct_BmnGemStripStation_RunSpring2017(void *p) {
      typedef ::BmnGemStripStation_RunSpring2017 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemStripStation_RunSpring2017

//______________________________________________________________________________
void BmnGemStripStationSet_RunSpring2017::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemStripStationSet_RunSpring2017.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemStripStationSet_RunSpring2017::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemStripStationSet_RunSpring2017::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnGemStripStationSet_RunSpring2017(void *p) {
      delete ((::BmnGemStripStationSet_RunSpring2017*)p);
   }
   static void deleteArray_BmnGemStripStationSet_RunSpring2017(void *p) {
      delete [] ((::BmnGemStripStationSet_RunSpring2017*)p);
   }
   static void destruct_BmnGemStripStationSet_RunSpring2017(void *p) {
      typedef ::BmnGemStripStationSet_RunSpring2017 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemStripStationSet_RunSpring2017

//______________________________________________________________________________
void BmnGemStripDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemStripDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemStripDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemStripDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGemStripDigit(void *p) {
      return  p ? new(p) ::BmnGemStripDigit : new ::BmnGemStripDigit;
   }
   static void *newArray_BmnGemStripDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGemStripDigit[nElements] : new ::BmnGemStripDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGemStripDigit(void *p) {
      delete ((::BmnGemStripDigit*)p);
   }
   static void deleteArray_BmnGemStripDigit(void *p) {
      delete [] ((::BmnGemStripDigit*)p);
   }
   static void destruct_BmnGemStripDigit(void *p) {
      typedef ::BmnGemStripDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemStripDigit

//______________________________________________________________________________
void BmnGemStripHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemStripHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemStripHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemStripHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGemStripHit(void *p) {
      return  p ? new(p) ::BmnGemStripHit : new ::BmnGemStripHit;
   }
   static void *newArray_BmnGemStripHit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGemStripHit[nElements] : new ::BmnGemStripHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGemStripHit(void *p) {
      delete ((::BmnGemStripHit*)p);
   }
   static void deleteArray_BmnGemStripHit(void *p) {
      delete [] ((::BmnGemStripHit*)p);
   }
   static void destruct_BmnGemStripHit(void *p) {
      typedef ::BmnGemStripHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemStripHit

//______________________________________________________________________________
void BmnGemStripTransform::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemStripTransform.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemStripTransform::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemStripTransform::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGemStripTransform(void *p) {
      return  p ? new(p) ::BmnGemStripTransform : new ::BmnGemStripTransform;
   }
   static void *newArray_BmnGemStripTransform(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGemStripTransform[nElements] : new ::BmnGemStripTransform[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGemStripTransform(void *p) {
      delete ((::BmnGemStripTransform*)p);
   }
   static void deleteArray_BmnGemStripTransform(void *p) {
      delete [] ((::BmnGemStripTransform*)p);
   }
   static void destruct_BmnGemStripTransform(void *p) {
      typedef ::BmnGemStripTransform current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemStripTransform

//______________________________________________________________________________
void BmnGemStripDigitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemStripDigitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemStripDigitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemStripDigitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGemStripDigitizer(void *p) {
      return  p ? new(p) ::BmnGemStripDigitizer : new ::BmnGemStripDigitizer;
   }
   static void *newArray_BmnGemStripDigitizer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGemStripDigitizer[nElements] : new ::BmnGemStripDigitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGemStripDigitizer(void *p) {
      delete ((::BmnGemStripDigitizer*)p);
   }
   static void deleteArray_BmnGemStripDigitizer(void *p) {
      delete [] ((::BmnGemStripDigitizer*)p);
   }
   static void destruct_BmnGemStripDigitizer(void *p) {
      typedef ::BmnGemStripDigitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemStripDigitizer

//______________________________________________________________________________
void BmnGemStripHitMaker::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemStripHitMaker.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemStripHitMaker::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemStripHitMaker::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGemStripHitMaker(void *p) {
      return  p ? new(p) ::BmnGemStripHitMaker : new ::BmnGemStripHitMaker;
   }
   static void *newArray_BmnGemStripHitMaker(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGemStripHitMaker[nElements] : new ::BmnGemStripHitMaker[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGemStripHitMaker(void *p) {
      delete ((::BmnGemStripHitMaker*)p);
   }
   static void deleteArray_BmnGemStripHitMaker(void *p) {
      delete [] ((::BmnGemStripHitMaker*)p);
   }
   static void destruct_BmnGemStripHitMaker(void *p) {
      typedef ::BmnGemStripHitMaker current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemStripHitMaker

//______________________________________________________________________________
void BmnGemTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGemTrack(void *p) {
      return  p ? new(p) ::BmnGemTrack : new ::BmnGemTrack;
   }
   static void *newArray_BmnGemTrack(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGemTrack[nElements] : new ::BmnGemTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGemTrack(void *p) {
      delete ((::BmnGemTrack*)p);
   }
   static void deleteArray_BmnGemTrack(void *p) {
      delete [] ((::BmnGemTrack*)p);
   }
   static void destruct_BmnGemTrack(void *p) {
      typedef ::BmnGemTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemTrack

namespace ROOT {
   static TClass *vectorlEvectorlEStripClustergRsPgR_Dictionary();
   static void vectorlEvectorlEStripClustergRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEStripClustergRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlEStripClustergRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEStripClustergRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEStripClustergRsPgR(void *p);
   static void destruct_vectorlEvectorlEStripClustergRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<StripCluster> >*)
   {
      vector<vector<StripCluster> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<StripCluster> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<StripCluster> >", -2, "vector", 386,
                  typeid(vector<vector<StripCluster> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEStripClustergRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<StripCluster> >) );
      instance.SetNew(&new_vectorlEvectorlEStripClustergRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEStripClustergRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEStripClustergRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEStripClustergRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEStripClustergRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<StripCluster> > >()));

      ::ROOT::AddClassAlternate("vector<vector<StripCluster> >","std::vector<std::vector<StripCluster, std::allocator<StripCluster> >, std::allocator<std::vector<StripCluster, std::allocator<StripCluster> > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<StripCluster> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEStripClustergRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<StripCluster> >*)nullptr)->GetClass();
      vectorlEvectorlEStripClustergRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEStripClustergRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEStripClustergRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<StripCluster> > : new vector<vector<StripCluster> >;
   }
   static void *newArray_vectorlEvectorlEStripClustergRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<StripCluster> >[nElements] : new vector<vector<StripCluster> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEStripClustergRsPgR(void *p) {
      delete ((vector<vector<StripCluster> >*)p);
   }
   static void deleteArray_vectorlEvectorlEStripClustergRsPgR(void *p) {
      delete [] ((vector<vector<StripCluster> >*)p);
   }
   static void destruct_vectorlEvectorlEStripClustergRsPgR(void *p) {
      typedef vector<vector<StripCluster> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<StripCluster> >

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
   static TClass *vectorlEStripClustergR_Dictionary();
   static void vectorlEStripClustergR_TClassManip(TClass*);
   static void *new_vectorlEStripClustergR(void *p = nullptr);
   static void *newArray_vectorlEStripClustergR(Long_t size, void *p);
   static void delete_vectorlEStripClustergR(void *p);
   static void deleteArray_vectorlEStripClustergR(void *p);
   static void destruct_vectorlEStripClustergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<StripCluster>*)
   {
      vector<StripCluster> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<StripCluster>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<StripCluster>", -2, "vector", 386,
                  typeid(vector<StripCluster>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEStripClustergR_Dictionary, isa_proxy, 0,
                  sizeof(vector<StripCluster>) );
      instance.SetNew(&new_vectorlEStripClustergR);
      instance.SetNewArray(&newArray_vectorlEStripClustergR);
      instance.SetDelete(&delete_vectorlEStripClustergR);
      instance.SetDeleteArray(&deleteArray_vectorlEStripClustergR);
      instance.SetDestructor(&destruct_vectorlEStripClustergR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<StripCluster> >()));

      ::ROOT::AddClassAlternate("vector<StripCluster>","std::vector<StripCluster, std::allocator<StripCluster> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<StripCluster>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEStripClustergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<StripCluster>*)nullptr)->GetClass();
      vectorlEStripClustergR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEStripClustergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEStripClustergR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<StripCluster> : new vector<StripCluster>;
   }
   static void *newArray_vectorlEStripClustergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<StripCluster>[nElements] : new vector<StripCluster>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEStripClustergR(void *p) {
      delete ((vector<StripCluster>*)p);
   }
   static void deleteArray_vectorlEStripClustergR(void *p) {
      delete [] ((vector<StripCluster>*)p);
   }
   static void destruct_vectorlEStripClustergR(void *p) {
      typedef vector<StripCluster> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<StripCluster>

namespace ROOT {
   static TClass *vectorlEDeadZoneOfStripLayergR_Dictionary();
   static void vectorlEDeadZoneOfStripLayergR_TClassManip(TClass*);
   static void *new_vectorlEDeadZoneOfStripLayergR(void *p = nullptr);
   static void *newArray_vectorlEDeadZoneOfStripLayergR(Long_t size, void *p);
   static void delete_vectorlEDeadZoneOfStripLayergR(void *p);
   static void deleteArray_vectorlEDeadZoneOfStripLayergR(void *p);
   static void destruct_vectorlEDeadZoneOfStripLayergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<DeadZoneOfStripLayer>*)
   {
      vector<DeadZoneOfStripLayer> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<DeadZoneOfStripLayer>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<DeadZoneOfStripLayer>", -2, "vector", 386,
                  typeid(vector<DeadZoneOfStripLayer>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEDeadZoneOfStripLayergR_Dictionary, isa_proxy, 0,
                  sizeof(vector<DeadZoneOfStripLayer>) );
      instance.SetNew(&new_vectorlEDeadZoneOfStripLayergR);
      instance.SetNewArray(&newArray_vectorlEDeadZoneOfStripLayergR);
      instance.SetDelete(&delete_vectorlEDeadZoneOfStripLayergR);
      instance.SetDeleteArray(&deleteArray_vectorlEDeadZoneOfStripLayergR);
      instance.SetDestructor(&destruct_vectorlEDeadZoneOfStripLayergR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<DeadZoneOfStripLayer> >()));

      ::ROOT::AddClassAlternate("vector<DeadZoneOfStripLayer>","std::vector<DeadZoneOfStripLayer, std::allocator<DeadZoneOfStripLayer> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<DeadZoneOfStripLayer>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEDeadZoneOfStripLayergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<DeadZoneOfStripLayer>*)nullptr)->GetClass();
      vectorlEDeadZoneOfStripLayergR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEDeadZoneOfStripLayergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEDeadZoneOfStripLayergR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DeadZoneOfStripLayer> : new vector<DeadZoneOfStripLayer>;
   }
   static void *newArray_vectorlEDeadZoneOfStripLayergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DeadZoneOfStripLayer>[nElements] : new vector<DeadZoneOfStripLayer>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEDeadZoneOfStripLayergR(void *p) {
      delete ((vector<DeadZoneOfStripLayer>*)p);
   }
   static void deleteArray_vectorlEDeadZoneOfStripLayergR(void *p) {
      delete [] ((vector<DeadZoneOfStripLayer>*)p);
   }
   static void destruct_vectorlEDeadZoneOfStripLayergR(void *p) {
      typedef vector<DeadZoneOfStripLayer> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<DeadZoneOfStripLayer>

namespace ROOT {
   static TClass *vectorlEBmnMatchgR_Dictionary();
   static void vectorlEBmnMatchgR_TClassManip(TClass*);
   static void *new_vectorlEBmnMatchgR(void *p = nullptr);
   static void *newArray_vectorlEBmnMatchgR(Long_t size, void *p);
   static void delete_vectorlEBmnMatchgR(void *p);
   static void deleteArray_vectorlEBmnMatchgR(void *p);
   static void destruct_vectorlEBmnMatchgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnMatch>*)
   {
      vector<BmnMatch> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnMatch>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnMatch>", -2, "vector", 386,
                  typeid(vector<BmnMatch>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnMatchgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnMatch>) );
      instance.SetNew(&new_vectorlEBmnMatchgR);
      instance.SetNewArray(&newArray_vectorlEBmnMatchgR);
      instance.SetDelete(&delete_vectorlEBmnMatchgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnMatchgR);
      instance.SetDestructor(&destruct_vectorlEBmnMatchgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnMatch> >()));

      ::ROOT::AddClassAlternate("vector<BmnMatch>","std::vector<BmnMatch, std::allocator<BmnMatch> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnMatch>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnMatchgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnMatch>*)nullptr)->GetClass();
      vectorlEBmnMatchgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnMatchgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnMatchgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnMatch> : new vector<BmnMatch>;
   }
   static void *newArray_vectorlEBmnMatchgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnMatch>[nElements] : new vector<BmnMatch>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnMatchgR(void *p) {
      delete ((vector<BmnMatch>*)p);
   }
   static void deleteArray_vectorlEBmnMatchgR(void *p) {
      delete [] ((vector<BmnMatch>*)p);
   }
   static void destruct_vectorlEBmnMatchgR(void *p) {
      typedef vector<BmnMatch> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnMatch>

namespace ROOT {
   static TClass *vectorlEBmnGemStripLayergR_Dictionary();
   static void vectorlEBmnGemStripLayergR_TClassManip(TClass*);
   static void *new_vectorlEBmnGemStripLayergR(void *p = nullptr);
   static void *newArray_vectorlEBmnGemStripLayergR(Long_t size, void *p);
   static void delete_vectorlEBmnGemStripLayergR(void *p);
   static void deleteArray_vectorlEBmnGemStripLayergR(void *p);
   static void destruct_vectorlEBmnGemStripLayergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnGemStripLayer>*)
   {
      vector<BmnGemStripLayer> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnGemStripLayer>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnGemStripLayer>", -2, "vector", 386,
                  typeid(vector<BmnGemStripLayer>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnGemStripLayergR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnGemStripLayer>) );
      instance.SetNew(&new_vectorlEBmnGemStripLayergR);
      instance.SetNewArray(&newArray_vectorlEBmnGemStripLayergR);
      instance.SetDelete(&delete_vectorlEBmnGemStripLayergR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnGemStripLayergR);
      instance.SetDestructor(&destruct_vectorlEBmnGemStripLayergR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnGemStripLayer> >()));

      ::ROOT::AddClassAlternate("vector<BmnGemStripLayer>","std::vector<BmnGemStripLayer, std::allocator<BmnGemStripLayer> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnGemStripLayer>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnGemStripLayergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnGemStripLayer>*)nullptr)->GetClass();
      vectorlEBmnGemStripLayergR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnGemStripLayergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnGemStripLayergR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnGemStripLayer> : new vector<BmnGemStripLayer>;
   }
   static void *newArray_vectorlEBmnGemStripLayergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnGemStripLayer>[nElements] : new vector<BmnGemStripLayer>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnGemStripLayergR(void *p) {
      delete ((vector<BmnGemStripLayer>*)p);
   }
   static void deleteArray_vectorlEBmnGemStripLayergR(void *p) {
      delete [] ((vector<BmnGemStripLayer>*)p);
   }
   static void destruct_vectorlEBmnGemStripLayergR(void *p) {
      typedef vector<BmnGemStripLayer> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnGemStripLayer>

namespace ROOT {
   static TClass *vectorlEBmnFitNodegR_Dictionary();
   static void vectorlEBmnFitNodegR_TClassManip(TClass*);
   static void *new_vectorlEBmnFitNodegR(void *p = nullptr);
   static void *newArray_vectorlEBmnFitNodegR(Long_t size, void *p);
   static void delete_vectorlEBmnFitNodegR(void *p);
   static void deleteArray_vectorlEBmnFitNodegR(void *p);
   static void destruct_vectorlEBmnFitNodegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnFitNode>*)
   {
      vector<BmnFitNode> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnFitNode>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnFitNode>", -2, "vector", 386,
                  typeid(vector<BmnFitNode>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnFitNodegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnFitNode>) );
      instance.SetNew(&new_vectorlEBmnFitNodegR);
      instance.SetNewArray(&newArray_vectorlEBmnFitNodegR);
      instance.SetDelete(&delete_vectorlEBmnFitNodegR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnFitNodegR);
      instance.SetDestructor(&destruct_vectorlEBmnFitNodegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnFitNode> >()));

      ::ROOT::AddClassAlternate("vector<BmnFitNode>","std::vector<BmnFitNode, std::allocator<BmnFitNode> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnFitNode>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnFitNodegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnFitNode>*)nullptr)->GetClass();
      vectorlEBmnFitNodegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnFitNodegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnFitNodegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnFitNode> : new vector<BmnFitNode>;
   }
   static void *newArray_vectorlEBmnFitNodegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnFitNode>[nElements] : new vector<BmnFitNode>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnFitNodegR(void *p) {
      delete ((vector<BmnFitNode>*)p);
   }
   static void deleteArray_vectorlEBmnFitNodegR(void *p) {
      delete [] ((vector<BmnFitNode>*)p);
   }
   static void destruct_vectorlEBmnFitNodegR(void *p) {
      typedef vector<BmnFitNode> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnFitNode>

namespace ROOT {
   static TClass *maplEintcOTVector3gR_Dictionary();
   static void maplEintcOTVector3gR_TClassManip(TClass*);
   static void *new_maplEintcOTVector3gR(void *p = nullptr);
   static void *newArray_maplEintcOTVector3gR(Long_t size, void *p);
   static void delete_maplEintcOTVector3gR(void *p);
   static void deleteArray_maplEintcOTVector3gR(void *p);
   static void destruct_maplEintcOTVector3gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,TVector3>*)
   {
      map<int,TVector3> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,TVector3>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,TVector3>", -2, "map", 100,
                  typeid(map<int,TVector3>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOTVector3gR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,TVector3>) );
      instance.SetNew(&new_maplEintcOTVector3gR);
      instance.SetNewArray(&newArray_maplEintcOTVector3gR);
      instance.SetDelete(&delete_maplEintcOTVector3gR);
      instance.SetDeleteArray(&deleteArray_maplEintcOTVector3gR);
      instance.SetDestructor(&destruct_maplEintcOTVector3gR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,TVector3> >()));

      ::ROOT::AddClassAlternate("map<int,TVector3>","std::map<int, TVector3, std::less<int>, std::allocator<std::pair<int const, TVector3> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,TVector3>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOTVector3gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,TVector3>*)nullptr)->GetClass();
      maplEintcOTVector3gR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOTVector3gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOTVector3gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,TVector3> : new map<int,TVector3>;
   }
   static void *newArray_maplEintcOTVector3gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,TVector3>[nElements] : new map<int,TVector3>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOTVector3gR(void *p) {
      delete ((map<int,TVector3>*)p);
   }
   static void deleteArray_maplEintcOTVector3gR(void *p) {
      delete [] ((map<int,TVector3>*)p);
   }
   static void destruct_maplEintcOTVector3gR(void *p) {
      typedef map<int,TVector3> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,TVector3>

namespace {
  void TriggerDictionaryInitialization_G__GemDict_Impl() {
    static const char* headers[] = {
"BmnGemHitProducer.h",
"BmnGemGeo.h",
"BmnGemDigit.h",
"BmnGemGas.h",
"BmnManageQA.h",
"BmnGemDigitizerQAHistograms.h",
"BmnGemStripLayer.h",
"BmnGemStripModule.h",
"BmnGemStripStation.h",
"BmnGemStripStationSet.h",
"BmnGemStripStation_RunSummer2016.h",
"BmnGemStripStationSet_RunSummer2016.h",
"BmnGemStripStation_RunWinter2016.h",
"BmnGemStripStationSet_RunWinter2016.h",
"BmnGemStripStation_RunSpring2017.h",
"BmnGemStripStationSet_RunSpring2017.h",
"BmnGemStripDigit.h",
"BmnGemStripDigitizer.h",
"BmnGemStripHitMaker.h",
"BmnGemStripMedium.h",
"BmnGemStripTransform.h",
"BmnGemStripConfiguration.h",
"BmnGemStripMediumConfiguration.h",
"BmnGemStripHit.h",
"BmnGemTrack.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/base",
"/data/yaopeng/bmnroot_Yaopeng/base/data",
"/data/yaopeng/bmnroot_Yaopeng/base/raw",
"/data/yaopeng/bmnroot_Yaopeng/base/cbm",
"/data/yaopeng/bmnroot_Yaopeng/base/header",
"/data/yaopeng/bmnroot_Yaopeng/database/uni_db",
"/data/yaopeng/bmnroot_Yaopeng/detectors/gem",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/detectors/gem/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__GemDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$BmnGemStripLayer.h")))  __attribute__((annotate("$clingAutoload$BmnGemHitProducer.h")))  BmnGemStripLayer;
class __attribute__((annotate("$clingAutoload$BmnGemStripMedium.h")))  __attribute__((annotate("$clingAutoload$BmnGemHitProducer.h")))  BmnGemStripMedium;
class __attribute__((annotate("$clingAutoload$BmnGemStripModule.h")))  __attribute__((annotate("$clingAutoload$BmnGemHitProducer.h")))  BmnGemStripModule;
class __attribute__((annotate("$clingAutoload$BmnGemStripStation.h")))  __attribute__((annotate("$clingAutoload$BmnGemHitProducer.h")))  BmnGemStripStation;
class __attribute__((annotate("$clingAutoload$BmnGemStripStationSet.h")))  __attribute__((annotate("$clingAutoload$BmnGemHitProducer.h")))  BmnGemStripStationSet;
class __attribute__((annotate("$clingAutoload$BmnGemHitProducer.h")))  BmnGemHitProducer;
class __attribute__((annotate("$clingAutoload$BmnGemGeo.h")))  BmnGemGeo;
class __attribute__((annotate("$clingAutoload$BmnGemDigit.h")))  BmnGemDigit;
class __attribute__((annotate("$clingAutoload$BmnGemGas.h")))  BmnGemGas;
class __attribute__((annotate("$clingAutoload$BmnGemDigitizerQAHistograms.h")))  BmnGemDigitizerQAHistograms;
class __attribute__((annotate("$clingAutoload$BmnGemStripStation_RunSummer2016.h")))  BmnGemStripStation_RunSummer2016;
class __attribute__((annotate("$clingAutoload$BmnGemStripStationSet_RunSummer2016.h")))  BmnGemStripStationSet_RunSummer2016;
class __attribute__((annotate("$clingAutoload$BmnGemStripStation_RunWinter2016.h")))  BmnGemStripStation_RunWinter2016;
class __attribute__((annotate("$clingAutoload$BmnGemStripStationSet_RunWinter2016.h")))  BmnGemStripStationSet_RunWinter2016;
class __attribute__((annotate("$clingAutoload$BmnGemStripStation_RunSpring2017.h")))  BmnGemStripStation_RunSpring2017;
class __attribute__((annotate("$clingAutoload$BmnGemStripStationSet_RunSpring2017.h")))  BmnGemStripStationSet_RunSpring2017;
class __attribute__((annotate("$clingAutoload$BmnGemStripDigit.h")))  BmnGemStripDigit;
class __attribute__((annotate("$clingAutoload$BmnGemStripHit.h")))  __attribute__((annotate("$clingAutoload$BmnGemStripDigitizer.h")))  BmnGemStripHit;
class __attribute__((annotate("$clingAutoload$BmnGemStripTransform.h")))  __attribute__((annotate("$clingAutoload$BmnGemStripDigitizer.h")))  BmnGemStripTransform;
class __attribute__((annotate("$clingAutoload$BmnGemStripDigitizer.h")))  BmnGemStripDigitizer;
class __attribute__((annotate("$clingAutoload$BmnGemStripHitMaker.h")))  BmnGemStripHitMaker;
class __attribute__((annotate("$clingAutoload$BmnGemTrack.h")))  BmnGemTrack;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__GemDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "BmnGemHitProducer.h"
#include "BmnGemGeo.h"
#include "BmnGemDigit.h"
#include "BmnGemGas.h"
#include "BmnManageQA.h"
#include "BmnGemDigitizerQAHistograms.h"
#include "BmnGemStripLayer.h"
#include "BmnGemStripModule.h"
#include "BmnGemStripStation.h"
#include "BmnGemStripStationSet.h"
#include "BmnGemStripStation_RunSummer2016.h"
#include "BmnGemStripStationSet_RunSummer2016.h"
#include "BmnGemStripStation_RunWinter2016.h"
#include "BmnGemStripStationSet_RunWinter2016.h"
#include "BmnGemStripStation_RunSpring2017.h"
#include "BmnGemStripStationSet_RunSpring2017.h"
#include "BmnGemStripDigit.h"
#include "BmnGemStripDigitizer.h"
#include "BmnGemStripHitMaker.h"
#include "BmnGemStripMedium.h"
#include "BmnGemStripTransform.h"
#include "BmnGemStripConfiguration.h"
#include "BmnGemStripMediumConfiguration.h"
#include "BmnGemStripHit.h"
#include "BmnGemTrack.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BmnGemDigit", payloadCode, "@",
"BmnGemDigitizerQAHistograms", payloadCode, "@",
"BmnGemGas", payloadCode, "@",
"BmnGemGeo", payloadCode, "@",
"BmnGemHitProducer", payloadCode, "@",
"BmnGemStripConfiguration::GEM_CONFIG", payloadCode, "@",
"BmnGemStripDigit", payloadCode, "@",
"BmnGemStripDigitizer", payloadCode, "@",
"BmnGemStripHit", payloadCode, "@",
"BmnGemStripHitMaker", payloadCode, "@",
"BmnGemStripLayer", payloadCode, "@",
"BmnGemStripMedium", payloadCode, "@",
"BmnGemStripModule", payloadCode, "@",
"BmnGemStripStation", payloadCode, "@",
"BmnGemStripStationSet", payloadCode, "@",
"BmnGemStripStationSet_RunSpring2017", payloadCode, "@",
"BmnGemStripStationSet_RunSummer2016", payloadCode, "@",
"BmnGemStripStationSet_RunWinter2016", payloadCode, "@",
"BmnGemStripStation_RunSpring2017", payloadCode, "@",
"BmnGemStripStation_RunSummer2016", payloadCode, "@",
"BmnGemStripStation_RunWinter2016", payloadCode, "@",
"BmnGemStripTransform", payloadCode, "@",
"BmnGemTrack", payloadCode, "@",
"ElectronDriftDirectionInModule", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__GemDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__GemDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__GemDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__GemDict() {
  TriggerDictionaryInitialization_G__GemDict_Impl();
}
