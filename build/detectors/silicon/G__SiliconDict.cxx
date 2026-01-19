// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIdetectorsdIsilicondIG__SiliconDict
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
#include "BmnSilicon.h"
#include "BmnSiliconPoint.h"
#include "BmnSiliconLayer.h"
#include "BmnSiliconModule.h"
#include "BmnSiliconStation.h"
#include "BmnSiliconStationSet.h"
#include "BmnSiliconDigitizer.h"
#include "BmnSiliconHitMaker.h"
#include "BmnSiliconDigit.h"
#include "BmnSiliconTrack.h"
#include "BmnSiliconHit.h"
#include "BmnSiliconHitProducer.h"
#include "BmnSiliconHitProducerSRC.h"
#include "BmnSiliconTrackFinder.h"
#include "BmnSiliconTransform.h"
#include "BmnSiliconConfiguration.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace BmnSiliconConfiguration {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *BmnSiliconConfiguration_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("BmnSiliconConfiguration", 0 /*version*/, "BmnSiliconConfiguration.h", 4,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &BmnSiliconConfiguration_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *BmnSiliconConfiguration_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static void *new_BmnSiliconPoint(void *p = nullptr);
   static void *newArray_BmnSiliconPoint(Long_t size, void *p);
   static void delete_BmnSiliconPoint(void *p);
   static void deleteArray_BmnSiliconPoint(void *p);
   static void destruct_BmnSiliconPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiliconPoint*)
   {
      ::BmnSiliconPoint *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiliconPoint >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiliconPoint", ::BmnSiliconPoint::Class_Version(), "BmnSiliconPoint.h", 6,
                  typeid(::BmnSiliconPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiliconPoint::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiliconPoint) );
      instance.SetNew(&new_BmnSiliconPoint);
      instance.SetNewArray(&newArray_BmnSiliconPoint);
      instance.SetDelete(&delete_BmnSiliconPoint);
      instance.SetDeleteArray(&deleteArray_BmnSiliconPoint);
      instance.SetDestructor(&destruct_BmnSiliconPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiliconPoint*)
   {
      return GenerateInitInstanceLocal((::BmnSiliconPoint*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiliconPoint*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSilicon(void *p = nullptr);
   static void *newArray_BmnSilicon(Long_t size, void *p);
   static void delete_BmnSilicon(void *p);
   static void deleteArray_BmnSilicon(void *p);
   static void destruct_BmnSilicon(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSilicon*)
   {
      ::BmnSilicon *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSilicon >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSilicon", ::BmnSilicon::Class_Version(), "BmnSilicon.h", 15,
                  typeid(::BmnSilicon), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSilicon::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSilicon) );
      instance.SetNew(&new_BmnSilicon);
      instance.SetNewArray(&newArray_BmnSilicon);
      instance.SetDelete(&delete_BmnSilicon);
      instance.SetDeleteArray(&deleteArray_BmnSilicon);
      instance.SetDestructor(&destruct_BmnSilicon);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSilicon*)
   {
      return GenerateInitInstanceLocal((::BmnSilicon*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSilicon*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiliconLayer(void *p = nullptr);
   static void *newArray_BmnSiliconLayer(Long_t size, void *p);
   static void delete_BmnSiliconLayer(void *p);
   static void deleteArray_BmnSiliconLayer(void *p);
   static void destruct_BmnSiliconLayer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiliconLayer*)
   {
      ::BmnSiliconLayer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiliconLayer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiliconLayer", ::BmnSiliconLayer::Class_Version(), "BmnSiliconLayer.h", 13,
                  typeid(::BmnSiliconLayer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiliconLayer::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiliconLayer) );
      instance.SetNew(&new_BmnSiliconLayer);
      instance.SetNewArray(&newArray_BmnSiliconLayer);
      instance.SetDelete(&delete_BmnSiliconLayer);
      instance.SetDeleteArray(&deleteArray_BmnSiliconLayer);
      instance.SetDestructor(&destruct_BmnSiliconLayer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiliconLayer*)
   {
      return GenerateInitInstanceLocal((::BmnSiliconLayer*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiliconLayer*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiliconModule(void *p = nullptr);
   static void *newArray_BmnSiliconModule(Long_t size, void *p);
   static void delete_BmnSiliconModule(void *p);
   static void deleteArray_BmnSiliconModule(void *p);
   static void destruct_BmnSiliconModule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiliconModule*)
   {
      ::BmnSiliconModule *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiliconModule >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiliconModule", ::BmnSiliconModule::Class_Version(), "BmnSiliconModule.h", 8,
                  typeid(::BmnSiliconModule), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiliconModule::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiliconModule) );
      instance.SetNew(&new_BmnSiliconModule);
      instance.SetNewArray(&newArray_BmnSiliconModule);
      instance.SetDelete(&delete_BmnSiliconModule);
      instance.SetDeleteArray(&deleteArray_BmnSiliconModule);
      instance.SetDestructor(&destruct_BmnSiliconModule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiliconModule*)
   {
      return GenerateInitInstanceLocal((::BmnSiliconModule*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiliconModule*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiliconStation(void *p = nullptr);
   static void *newArray_BmnSiliconStation(Long_t size, void *p);
   static void delete_BmnSiliconStation(void *p);
   static void deleteArray_BmnSiliconStation(void *p);
   static void destruct_BmnSiliconStation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiliconStation*)
   {
      ::BmnSiliconStation *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiliconStation >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiliconStation", ::BmnSiliconStation::Class_Version(), "BmnSiliconStation.h", 14,
                  typeid(::BmnSiliconStation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiliconStation::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiliconStation) );
      instance.SetNew(&new_BmnSiliconStation);
      instance.SetNewArray(&newArray_BmnSiliconStation);
      instance.SetDelete(&delete_BmnSiliconStation);
      instance.SetDeleteArray(&deleteArray_BmnSiliconStation);
      instance.SetDestructor(&destruct_BmnSiliconStation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiliconStation*)
   {
      return GenerateInitInstanceLocal((::BmnSiliconStation*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiliconStation*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiliconStationSet(void *p = nullptr);
   static void *newArray_BmnSiliconStationSet(Long_t size, void *p);
   static void delete_BmnSiliconStationSet(void *p);
   static void deleteArray_BmnSiliconStationSet(void *p);
   static void destruct_BmnSiliconStationSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiliconStationSet*)
   {
      ::BmnSiliconStationSet *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiliconStationSet >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiliconStationSet", ::BmnSiliconStationSet::Class_Version(), "BmnSiliconStationSet.h", 13,
                  typeid(::BmnSiliconStationSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiliconStationSet::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiliconStationSet) );
      instance.SetNew(&new_BmnSiliconStationSet);
      instance.SetNewArray(&newArray_BmnSiliconStationSet);
      instance.SetDelete(&delete_BmnSiliconStationSet);
      instance.SetDeleteArray(&deleteArray_BmnSiliconStationSet);
      instance.SetDestructor(&destruct_BmnSiliconStationSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiliconStationSet*)
   {
      return GenerateInitInstanceLocal((::BmnSiliconStationSet*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiliconStationSet*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiliconDigit(void *p = nullptr);
   static void *newArray_BmnSiliconDigit(Long_t size, void *p);
   static void delete_BmnSiliconDigit(void *p);
   static void deleteArray_BmnSiliconDigit(void *p);
   static void destruct_BmnSiliconDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiliconDigit*)
   {
      ::BmnSiliconDigit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiliconDigit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiliconDigit", ::BmnSiliconDigit::Class_Version(), "BmnSiliconDigit.h", 8,
                  typeid(::BmnSiliconDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiliconDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiliconDigit) );
      instance.SetNew(&new_BmnSiliconDigit);
      instance.SetNewArray(&newArray_BmnSiliconDigit);
      instance.SetDelete(&delete_BmnSiliconDigit);
      instance.SetDeleteArray(&deleteArray_BmnSiliconDigit);
      instance.SetDestructor(&destruct_BmnSiliconDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiliconDigit*)
   {
      return GenerateInitInstanceLocal((::BmnSiliconDigit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiliconDigit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiliconTransform(void *p = nullptr);
   static void *newArray_BmnSiliconTransform(Long_t size, void *p);
   static void delete_BmnSiliconTransform(void *p);
   static void deleteArray_BmnSiliconTransform(void *p);
   static void destruct_BmnSiliconTransform(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiliconTransform*)
   {
      ::BmnSiliconTransform *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiliconTransform >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiliconTransform", ::BmnSiliconTransform::Class_Version(), "BmnSiliconTransform.h", 19,
                  typeid(::BmnSiliconTransform), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiliconTransform::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiliconTransform) );
      instance.SetNew(&new_BmnSiliconTransform);
      instance.SetNewArray(&newArray_BmnSiliconTransform);
      instance.SetDelete(&delete_BmnSiliconTransform);
      instance.SetDeleteArray(&deleteArray_BmnSiliconTransform);
      instance.SetDestructor(&destruct_BmnSiliconTransform);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiliconTransform*)
   {
      return GenerateInitInstanceLocal((::BmnSiliconTransform*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiliconTransform*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiliconDigitizer(void *p = nullptr);
   static void *newArray_BmnSiliconDigitizer(Long_t size, void *p);
   static void delete_BmnSiliconDigitizer(void *p);
   static void deleteArray_BmnSiliconDigitizer(void *p);
   static void destruct_BmnSiliconDigitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiliconDigitizer*)
   {
      ::BmnSiliconDigitizer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiliconDigitizer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiliconDigitizer", ::BmnSiliconDigitizer::Class_Version(), "BmnSiliconDigitizer.h", 21,
                  typeid(::BmnSiliconDigitizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiliconDigitizer::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiliconDigitizer) );
      instance.SetNew(&new_BmnSiliconDigitizer);
      instance.SetNewArray(&newArray_BmnSiliconDigitizer);
      instance.SetDelete(&delete_BmnSiliconDigitizer);
      instance.SetDeleteArray(&deleteArray_BmnSiliconDigitizer);
      instance.SetDestructor(&destruct_BmnSiliconDigitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiliconDigitizer*)
   {
      return GenerateInitInstanceLocal((::BmnSiliconDigitizer*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiliconDigitizer*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiliconHit(void *p = nullptr);
   static void *newArray_BmnSiliconHit(Long_t size, void *p);
   static void delete_BmnSiliconHit(void *p);
   static void deleteArray_BmnSiliconHit(void *p);
   static void destruct_BmnSiliconHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiliconHit*)
   {
      ::BmnSiliconHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiliconHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiliconHit", ::BmnSiliconHit::Class_Version(), "BmnSiliconHit.h", 9,
                  typeid(::BmnSiliconHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiliconHit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiliconHit) );
      instance.SetNew(&new_BmnSiliconHit);
      instance.SetNewArray(&newArray_BmnSiliconHit);
      instance.SetDelete(&delete_BmnSiliconHit);
      instance.SetDeleteArray(&deleteArray_BmnSiliconHit);
      instance.SetDestructor(&destruct_BmnSiliconHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiliconHit*)
   {
      return GenerateInitInstanceLocal((::BmnSiliconHit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiliconHit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiliconHitMaker(void *p = nullptr);
   static void *newArray_BmnSiliconHitMaker(Long_t size, void *p);
   static void delete_BmnSiliconHitMaker(void *p);
   static void deleteArray_BmnSiliconHitMaker(void *p);
   static void destruct_BmnSiliconHitMaker(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiliconHitMaker*)
   {
      ::BmnSiliconHitMaker *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiliconHitMaker >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiliconHitMaker", ::BmnSiliconHitMaker::Class_Version(), "BmnSiliconHitMaker.h", 19,
                  typeid(::BmnSiliconHitMaker), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiliconHitMaker::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiliconHitMaker) );
      instance.SetNew(&new_BmnSiliconHitMaker);
      instance.SetNewArray(&newArray_BmnSiliconHitMaker);
      instance.SetDelete(&delete_BmnSiliconHitMaker);
      instance.SetDeleteArray(&deleteArray_BmnSiliconHitMaker);
      instance.SetDestructor(&destruct_BmnSiliconHitMaker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiliconHitMaker*)
   {
      return GenerateInitInstanceLocal((::BmnSiliconHitMaker*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiliconHitMaker*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiliconTrack(void *p = nullptr);
   static void *newArray_BmnSiliconTrack(Long_t size, void *p);
   static void delete_BmnSiliconTrack(void *p);
   static void deleteArray_BmnSiliconTrack(void *p);
   static void destruct_BmnSiliconTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiliconTrack*)
   {
      ::BmnSiliconTrack *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiliconTrack >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiliconTrack", ::BmnSiliconTrack::Class_Version(), "BmnSiliconTrack.h", 15,
                  typeid(::BmnSiliconTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiliconTrack::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiliconTrack) );
      instance.SetNew(&new_BmnSiliconTrack);
      instance.SetNewArray(&newArray_BmnSiliconTrack);
      instance.SetDelete(&delete_BmnSiliconTrack);
      instance.SetDeleteArray(&deleteArray_BmnSiliconTrack);
      instance.SetDestructor(&destruct_BmnSiliconTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiliconTrack*)
   {
      return GenerateInitInstanceLocal((::BmnSiliconTrack*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiliconTrack*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiliconHitProducer(void *p = nullptr);
   static void *newArray_BmnSiliconHitProducer(Long_t size, void *p);
   static void delete_BmnSiliconHitProducer(void *p);
   static void deleteArray_BmnSiliconHitProducer(void *p);
   static void destruct_BmnSiliconHitProducer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiliconHitProducer*)
   {
      ::BmnSiliconHitProducer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiliconHitProducer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiliconHitProducer", ::BmnSiliconHitProducer::Class_Version(), "BmnSiliconHitProducer.h", 23,
                  typeid(::BmnSiliconHitProducer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiliconHitProducer::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiliconHitProducer) );
      instance.SetNew(&new_BmnSiliconHitProducer);
      instance.SetNewArray(&newArray_BmnSiliconHitProducer);
      instance.SetDelete(&delete_BmnSiliconHitProducer);
      instance.SetDeleteArray(&deleteArray_BmnSiliconHitProducer);
      instance.SetDestructor(&destruct_BmnSiliconHitProducer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiliconHitProducer*)
   {
      return GenerateInitInstanceLocal((::BmnSiliconHitProducer*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiliconHitProducer*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiliconHitProducerSRC(void *p = nullptr);
   static void *newArray_BmnSiliconHitProducerSRC(Long_t size, void *p);
   static void delete_BmnSiliconHitProducerSRC(void *p);
   static void deleteArray_BmnSiliconHitProducerSRC(void *p);
   static void destruct_BmnSiliconHitProducerSRC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiliconHitProducerSRC*)
   {
      ::BmnSiliconHitProducerSRC *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiliconHitProducerSRC >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiliconHitProducerSRC", ::BmnSiliconHitProducerSRC::Class_Version(), "BmnSiliconHitProducerSRC.h", 25,
                  typeid(::BmnSiliconHitProducerSRC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiliconHitProducerSRC::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiliconHitProducerSRC) );
      instance.SetNew(&new_BmnSiliconHitProducerSRC);
      instance.SetNewArray(&newArray_BmnSiliconHitProducerSRC);
      instance.SetDelete(&delete_BmnSiliconHitProducerSRC);
      instance.SetDeleteArray(&deleteArray_BmnSiliconHitProducerSRC);
      instance.SetDestructor(&destruct_BmnSiliconHitProducerSRC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiliconHitProducerSRC*)
   {
      return GenerateInitInstanceLocal((::BmnSiliconHitProducerSRC*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiliconHitProducerSRC*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiliconTrackFinder(void *p = nullptr);
   static void *newArray_BmnSiliconTrackFinder(Long_t size, void *p);
   static void delete_BmnSiliconTrackFinder(void *p);
   static void deleteArray_BmnSiliconTrackFinder(void *p);
   static void destruct_BmnSiliconTrackFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiliconTrackFinder*)
   {
      ::BmnSiliconTrackFinder *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiliconTrackFinder >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiliconTrackFinder", ::BmnSiliconTrackFinder::Class_Version(), "BmnSiliconTrackFinder.h", 68,
                  typeid(::BmnSiliconTrackFinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiliconTrackFinder::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiliconTrackFinder) );
      instance.SetNew(&new_BmnSiliconTrackFinder);
      instance.SetNewArray(&newArray_BmnSiliconTrackFinder);
      instance.SetDelete(&delete_BmnSiliconTrackFinder);
      instance.SetDeleteArray(&deleteArray_BmnSiliconTrackFinder);
      instance.SetDestructor(&destruct_BmnSiliconTrackFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiliconTrackFinder*)
   {
      return GenerateInitInstanceLocal((::BmnSiliconTrackFinder*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiliconTrackFinder*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnSiliconPoint::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiliconPoint::Class_Name()
{
   return "BmnSiliconPoint";
}

//______________________________________________________________________________
const char *BmnSiliconPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconPoint*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiliconPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconPoint*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiliconPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconPoint*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiliconPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconPoint*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSilicon::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSilicon::Class_Name()
{
   return "BmnSilicon";
}

//______________________________________________________________________________
const char *BmnSilicon::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSilicon*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSilicon::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSilicon*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSilicon::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSilicon*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSilicon::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSilicon*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiliconLayer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiliconLayer::Class_Name()
{
   return "BmnSiliconLayer";
}

//______________________________________________________________________________
const char *BmnSiliconLayer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconLayer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiliconLayer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconLayer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiliconLayer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconLayer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiliconLayer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconLayer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiliconModule::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiliconModule::Class_Name()
{
   return "BmnSiliconModule";
}

//______________________________________________________________________________
const char *BmnSiliconModule::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconModule*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiliconModule::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconModule*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiliconModule::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconModule*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiliconModule::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconModule*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiliconStation::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiliconStation::Class_Name()
{
   return "BmnSiliconStation";
}

//______________________________________________________________________________
const char *BmnSiliconStation::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconStation*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiliconStation::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconStation*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiliconStation::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconStation*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiliconStation::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconStation*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiliconStationSet::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiliconStationSet::Class_Name()
{
   return "BmnSiliconStationSet";
}

//______________________________________________________________________________
const char *BmnSiliconStationSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconStationSet*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiliconStationSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconStationSet*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiliconStationSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconStationSet*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiliconStationSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconStationSet*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiliconDigit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiliconDigit::Class_Name()
{
   return "BmnSiliconDigit";
}

//______________________________________________________________________________
const char *BmnSiliconDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconDigit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiliconDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconDigit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiliconDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconDigit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiliconDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconDigit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiliconTransform::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiliconTransform::Class_Name()
{
   return "BmnSiliconTransform";
}

//______________________________________________________________________________
const char *BmnSiliconTransform::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconTransform*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiliconTransform::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconTransform*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiliconTransform::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconTransform*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiliconTransform::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconTransform*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiliconDigitizer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiliconDigitizer::Class_Name()
{
   return "BmnSiliconDigitizer";
}

//______________________________________________________________________________
const char *BmnSiliconDigitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconDigitizer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiliconDigitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconDigitizer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiliconDigitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconDigitizer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiliconDigitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconDigitizer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiliconHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiliconHit::Class_Name()
{
   return "BmnSiliconHit";
}

//______________________________________________________________________________
const char *BmnSiliconHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiliconHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiliconHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiliconHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiliconHitMaker::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiliconHitMaker::Class_Name()
{
   return "BmnSiliconHitMaker";
}

//______________________________________________________________________________
const char *BmnSiliconHitMaker::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconHitMaker*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiliconHitMaker::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconHitMaker*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiliconHitMaker::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconHitMaker*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiliconHitMaker::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconHitMaker*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiliconTrack::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiliconTrack::Class_Name()
{
   return "BmnSiliconTrack";
}

//______________________________________________________________________________
const char *BmnSiliconTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconTrack*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiliconTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconTrack*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiliconTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconTrack*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiliconTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconTrack*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiliconHitProducer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiliconHitProducer::Class_Name()
{
   return "BmnSiliconHitProducer";
}

//______________________________________________________________________________
const char *BmnSiliconHitProducer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconHitProducer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiliconHitProducer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconHitProducer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiliconHitProducer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconHitProducer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiliconHitProducer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconHitProducer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiliconHitProducerSRC::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiliconHitProducerSRC::Class_Name()
{
   return "BmnSiliconHitProducerSRC";
}

//______________________________________________________________________________
const char *BmnSiliconHitProducerSRC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconHitProducerSRC*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiliconHitProducerSRC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconHitProducerSRC*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiliconHitProducerSRC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconHitProducerSRC*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiliconHitProducerSRC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconHitProducerSRC*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiliconTrackFinder::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiliconTrackFinder::Class_Name()
{
   return "BmnSiliconTrackFinder";
}

//______________________________________________________________________________
const char *BmnSiliconTrackFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconTrackFinder*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiliconTrackFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconTrackFinder*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiliconTrackFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconTrackFinder*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiliconTrackFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconTrackFinder*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnSiliconPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiliconPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiliconPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiliconPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiliconPoint(void *p) {
      return  p ? new(p) ::BmnSiliconPoint : new ::BmnSiliconPoint;
   }
   static void *newArray_BmnSiliconPoint(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiliconPoint[nElements] : new ::BmnSiliconPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiliconPoint(void *p) {
      delete ((::BmnSiliconPoint*)p);
   }
   static void deleteArray_BmnSiliconPoint(void *p) {
      delete [] ((::BmnSiliconPoint*)p);
   }
   static void destruct_BmnSiliconPoint(void *p) {
      typedef ::BmnSiliconPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiliconPoint

//______________________________________________________________________________
void BmnSilicon::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSilicon.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSilicon::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSilicon::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSilicon(void *p) {
      return  p ? new(p) ::BmnSilicon : new ::BmnSilicon;
   }
   static void *newArray_BmnSilicon(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSilicon[nElements] : new ::BmnSilicon[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSilicon(void *p) {
      delete ((::BmnSilicon*)p);
   }
   static void deleteArray_BmnSilicon(void *p) {
      delete [] ((::BmnSilicon*)p);
   }
   static void destruct_BmnSilicon(void *p) {
      typedef ::BmnSilicon current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSilicon

//______________________________________________________________________________
void BmnSiliconLayer::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiliconLayer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiliconLayer::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiliconLayer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiliconLayer(void *p) {
      return  p ? new(p) ::BmnSiliconLayer : new ::BmnSiliconLayer;
   }
   static void *newArray_BmnSiliconLayer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiliconLayer[nElements] : new ::BmnSiliconLayer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiliconLayer(void *p) {
      delete ((::BmnSiliconLayer*)p);
   }
   static void deleteArray_BmnSiliconLayer(void *p) {
      delete [] ((::BmnSiliconLayer*)p);
   }
   static void destruct_BmnSiliconLayer(void *p) {
      typedef ::BmnSiliconLayer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiliconLayer

//______________________________________________________________________________
void BmnSiliconModule::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiliconModule.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiliconModule::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiliconModule::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiliconModule(void *p) {
      return  p ? new(p) ::BmnSiliconModule : new ::BmnSiliconModule;
   }
   static void *newArray_BmnSiliconModule(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiliconModule[nElements] : new ::BmnSiliconModule[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiliconModule(void *p) {
      delete ((::BmnSiliconModule*)p);
   }
   static void deleteArray_BmnSiliconModule(void *p) {
      delete [] ((::BmnSiliconModule*)p);
   }
   static void destruct_BmnSiliconModule(void *p) {
      typedef ::BmnSiliconModule current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiliconModule

//______________________________________________________________________________
void BmnSiliconStation::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiliconStation.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiliconStation::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiliconStation::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiliconStation(void *p) {
      return  p ? new(p) ::BmnSiliconStation : new ::BmnSiliconStation;
   }
   static void *newArray_BmnSiliconStation(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiliconStation[nElements] : new ::BmnSiliconStation[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiliconStation(void *p) {
      delete ((::BmnSiliconStation*)p);
   }
   static void deleteArray_BmnSiliconStation(void *p) {
      delete [] ((::BmnSiliconStation*)p);
   }
   static void destruct_BmnSiliconStation(void *p) {
      typedef ::BmnSiliconStation current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiliconStation

//______________________________________________________________________________
void BmnSiliconStationSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiliconStationSet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiliconStationSet::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiliconStationSet::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiliconStationSet(void *p) {
      return  p ? new(p) ::BmnSiliconStationSet : new ::BmnSiliconStationSet;
   }
   static void *newArray_BmnSiliconStationSet(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiliconStationSet[nElements] : new ::BmnSiliconStationSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiliconStationSet(void *p) {
      delete ((::BmnSiliconStationSet*)p);
   }
   static void deleteArray_BmnSiliconStationSet(void *p) {
      delete [] ((::BmnSiliconStationSet*)p);
   }
   static void destruct_BmnSiliconStationSet(void *p) {
      typedef ::BmnSiliconStationSet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiliconStationSet

//______________________________________________________________________________
void BmnSiliconDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiliconDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiliconDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiliconDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiliconDigit(void *p) {
      return  p ? new(p) ::BmnSiliconDigit : new ::BmnSiliconDigit;
   }
   static void *newArray_BmnSiliconDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiliconDigit[nElements] : new ::BmnSiliconDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiliconDigit(void *p) {
      delete ((::BmnSiliconDigit*)p);
   }
   static void deleteArray_BmnSiliconDigit(void *p) {
      delete [] ((::BmnSiliconDigit*)p);
   }
   static void destruct_BmnSiliconDigit(void *p) {
      typedef ::BmnSiliconDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiliconDigit

//______________________________________________________________________________
void BmnSiliconTransform::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiliconTransform.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiliconTransform::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiliconTransform::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiliconTransform(void *p) {
      return  p ? new(p) ::BmnSiliconTransform : new ::BmnSiliconTransform;
   }
   static void *newArray_BmnSiliconTransform(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiliconTransform[nElements] : new ::BmnSiliconTransform[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiliconTransform(void *p) {
      delete ((::BmnSiliconTransform*)p);
   }
   static void deleteArray_BmnSiliconTransform(void *p) {
      delete [] ((::BmnSiliconTransform*)p);
   }
   static void destruct_BmnSiliconTransform(void *p) {
      typedef ::BmnSiliconTransform current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiliconTransform

//______________________________________________________________________________
void BmnSiliconDigitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiliconDigitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiliconDigitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiliconDigitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiliconDigitizer(void *p) {
      return  p ? new(p) ::BmnSiliconDigitizer : new ::BmnSiliconDigitizer;
   }
   static void *newArray_BmnSiliconDigitizer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiliconDigitizer[nElements] : new ::BmnSiliconDigitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiliconDigitizer(void *p) {
      delete ((::BmnSiliconDigitizer*)p);
   }
   static void deleteArray_BmnSiliconDigitizer(void *p) {
      delete [] ((::BmnSiliconDigitizer*)p);
   }
   static void destruct_BmnSiliconDigitizer(void *p) {
      typedef ::BmnSiliconDigitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiliconDigitizer

//______________________________________________________________________________
void BmnSiliconHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiliconHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiliconHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiliconHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiliconHit(void *p) {
      return  p ? new(p) ::BmnSiliconHit : new ::BmnSiliconHit;
   }
   static void *newArray_BmnSiliconHit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiliconHit[nElements] : new ::BmnSiliconHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiliconHit(void *p) {
      delete ((::BmnSiliconHit*)p);
   }
   static void deleteArray_BmnSiliconHit(void *p) {
      delete [] ((::BmnSiliconHit*)p);
   }
   static void destruct_BmnSiliconHit(void *p) {
      typedef ::BmnSiliconHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiliconHit

//______________________________________________________________________________
void BmnSiliconHitMaker::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiliconHitMaker.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiliconHitMaker::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiliconHitMaker::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiliconHitMaker(void *p) {
      return  p ? new(p) ::BmnSiliconHitMaker : new ::BmnSiliconHitMaker;
   }
   static void *newArray_BmnSiliconHitMaker(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiliconHitMaker[nElements] : new ::BmnSiliconHitMaker[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiliconHitMaker(void *p) {
      delete ((::BmnSiliconHitMaker*)p);
   }
   static void deleteArray_BmnSiliconHitMaker(void *p) {
      delete [] ((::BmnSiliconHitMaker*)p);
   }
   static void destruct_BmnSiliconHitMaker(void *p) {
      typedef ::BmnSiliconHitMaker current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiliconHitMaker

//______________________________________________________________________________
void BmnSiliconTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiliconTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiliconTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiliconTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiliconTrack(void *p) {
      return  p ? new(p) ::BmnSiliconTrack : new ::BmnSiliconTrack;
   }
   static void *newArray_BmnSiliconTrack(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiliconTrack[nElements] : new ::BmnSiliconTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiliconTrack(void *p) {
      delete ((::BmnSiliconTrack*)p);
   }
   static void deleteArray_BmnSiliconTrack(void *p) {
      delete [] ((::BmnSiliconTrack*)p);
   }
   static void destruct_BmnSiliconTrack(void *p) {
      typedef ::BmnSiliconTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiliconTrack

//______________________________________________________________________________
void BmnSiliconHitProducer::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiliconHitProducer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiliconHitProducer::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiliconHitProducer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiliconHitProducer(void *p) {
      return  p ? new(p) ::BmnSiliconHitProducer : new ::BmnSiliconHitProducer;
   }
   static void *newArray_BmnSiliconHitProducer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiliconHitProducer[nElements] : new ::BmnSiliconHitProducer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiliconHitProducer(void *p) {
      delete ((::BmnSiliconHitProducer*)p);
   }
   static void deleteArray_BmnSiliconHitProducer(void *p) {
      delete [] ((::BmnSiliconHitProducer*)p);
   }
   static void destruct_BmnSiliconHitProducer(void *p) {
      typedef ::BmnSiliconHitProducer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiliconHitProducer

//______________________________________________________________________________
void BmnSiliconHitProducerSRC::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiliconHitProducerSRC.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiliconHitProducerSRC::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiliconHitProducerSRC::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiliconHitProducerSRC(void *p) {
      return  p ? new(p) ::BmnSiliconHitProducerSRC : new ::BmnSiliconHitProducerSRC;
   }
   static void *newArray_BmnSiliconHitProducerSRC(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiliconHitProducerSRC[nElements] : new ::BmnSiliconHitProducerSRC[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiliconHitProducerSRC(void *p) {
      delete ((::BmnSiliconHitProducerSRC*)p);
   }
   static void deleteArray_BmnSiliconHitProducerSRC(void *p) {
      delete [] ((::BmnSiliconHitProducerSRC*)p);
   }
   static void destruct_BmnSiliconHitProducerSRC(void *p) {
      typedef ::BmnSiliconHitProducerSRC current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiliconHitProducerSRC

//______________________________________________________________________________
void BmnSiliconTrackFinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiliconTrackFinder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiliconTrackFinder::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiliconTrackFinder::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiliconTrackFinder(void *p) {
      return  p ? new(p) ::BmnSiliconTrackFinder : new ::BmnSiliconTrackFinder;
   }
   static void *newArray_BmnSiliconTrackFinder(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiliconTrackFinder[nElements] : new ::BmnSiliconTrackFinder[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiliconTrackFinder(void *p) {
      delete ((::BmnSiliconTrackFinder*)p);
   }
   static void deleteArray_BmnSiliconTrackFinder(void *p) {
      delete [] ((::BmnSiliconTrackFinder*)p);
   }
   static void destruct_BmnSiliconTrackFinder(void *p) {
      typedef ::BmnSiliconTrackFinder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiliconTrackFinder

namespace ROOT {
   static TClass *vectorlEvectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgRsPgR_Dictionary();
   static void vectorlEvectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgRsPgR(void *p);
   static void destruct_vectorlEvectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<vector<ROOT::Math::Impl::Transform3D<double> > > >*)
   {
      vector<vector<vector<ROOT::Math::Impl::Transform3D<double> > > > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<vector<ROOT::Math::Impl::Transform3D<double> > > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<vector<ROOT::Math::Impl::Transform3D<double> > > >", -2, "vector", 386,
                  typeid(vector<vector<vector<ROOT::Math::Impl::Transform3D<double> > > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<vector<ROOT::Math::Impl::Transform3D<double> > > >) );
      instance.SetNew(&new_vectorlEvectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<vector<ROOT::Math::Impl::Transform3D<double> > > > >()));

      ::ROOT::AddClassAlternate("vector<vector<vector<ROOT::Math::Impl::Transform3D<double> > > >","std::vector<std::vector<std::vector<ROOT::Math::Impl::Transform3D<double>, std::allocator<ROOT::Math::Impl::Transform3D<double> > >, std::allocator<std::vector<ROOT::Math::Impl::Transform3D<double>, std::allocator<ROOT::Math::Impl::Transform3D<double> > > > >, std::allocator<std::vector<std::vector<ROOT::Math::Impl::Transform3D<double>, std::allocator<ROOT::Math::Impl::Transform3D<double> > >, std::allocator<std::vector<ROOT::Math::Impl::Transform3D<double>, std::allocator<ROOT::Math::Impl::Transform3D<double> > > > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<vector<ROOT::Math::Impl::Transform3D<double> > > >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<vector<ROOT::Math::Impl::Transform3D<double> > > >*)nullptr)->GetClass();
      vectorlEvectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<vector<ROOT::Math::Impl::Transform3D<double> > > > : new vector<vector<vector<ROOT::Math::Impl::Transform3D<double> > > >;
   }
   static void *newArray_vectorlEvectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<vector<ROOT::Math::Impl::Transform3D<double> > > >[nElements] : new vector<vector<vector<ROOT::Math::Impl::Transform3D<double> > > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgRsPgR(void *p) {
      delete ((vector<vector<vector<ROOT::Math::Impl::Transform3D<double> > > >*)p);
   }
   static void deleteArray_vectorlEvectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgRsPgR(void *p) {
      delete [] ((vector<vector<vector<ROOT::Math::Impl::Transform3D<double> > > >*)p);
   }
   static void destruct_vectorlEvectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgRsPgR(void *p) {
      typedef vector<vector<vector<ROOT::Math::Impl::Transform3D<double> > > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<vector<ROOT::Math::Impl::Transform3D<double> > > >

namespace ROOT {
   static TClass *vectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgR_Dictionary();
   static void vectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgR(void *p);
   static void destruct_vectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<ROOT::Math::Impl::Transform3D<double> > >*)
   {
      vector<vector<ROOT::Math::Impl::Transform3D<double> > > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<ROOT::Math::Impl::Transform3D<double> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<ROOT::Math::Impl::Transform3D<double> > >", -2, "vector", 386,
                  typeid(vector<vector<ROOT::Math::Impl::Transform3D<double> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<ROOT::Math::Impl::Transform3D<double> > >) );
      instance.SetNew(&new_vectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<ROOT::Math::Impl::Transform3D<double> > > >()));

      ::ROOT::AddClassAlternate("vector<vector<ROOT::Math::Impl::Transform3D<double> > >","std::vector<std::vector<ROOT::Math::Impl::Transform3D<double>, std::allocator<ROOT::Math::Impl::Transform3D<double> > >, std::allocator<std::vector<ROOT::Math::Impl::Transform3D<double>, std::allocator<ROOT::Math::Impl::Transform3D<double> > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<ROOT::Math::Impl::Transform3D<double> > >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<ROOT::Math::Impl::Transform3D<double> > >*)nullptr)->GetClass();
      vectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<ROOT::Math::Impl::Transform3D<double> > > : new vector<vector<ROOT::Math::Impl::Transform3D<double> > >;
   }
   static void *newArray_vectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<ROOT::Math::Impl::Transform3D<double> > >[nElements] : new vector<vector<ROOT::Math::Impl::Transform3D<double> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgR(void *p) {
      delete ((vector<vector<ROOT::Math::Impl::Transform3D<double> > >*)p);
   }
   static void deleteArray_vectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgR(void *p) {
      delete [] ((vector<vector<ROOT::Math::Impl::Transform3D<double> > >*)p);
   }
   static void destruct_vectorlEvectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgRsPgR(void *p) {
      typedef vector<vector<ROOT::Math::Impl::Transform3D<double> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<ROOT::Math::Impl::Transform3D<double> > >

namespace ROOT {
   static TClass *vectorlEtracksXgR_Dictionary();
   static void vectorlEtracksXgR_TClassManip(TClass*);
   static void *new_vectorlEtracksXgR(void *p = nullptr);
   static void *newArray_vectorlEtracksXgR(Long_t size, void *p);
   static void delete_vectorlEtracksXgR(void *p);
   static void deleteArray_vectorlEtracksXgR(void *p);
   static void destruct_vectorlEtracksXgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<tracksX>*)
   {
      vector<tracksX> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<tracksX>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<tracksX>", -2, "vector", 386,
                  typeid(vector<tracksX>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEtracksXgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<tracksX>) );
      instance.SetNew(&new_vectorlEtracksXgR);
      instance.SetNewArray(&newArray_vectorlEtracksXgR);
      instance.SetDelete(&delete_vectorlEtracksXgR);
      instance.SetDeleteArray(&deleteArray_vectorlEtracksXgR);
      instance.SetDestructor(&destruct_vectorlEtracksXgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<tracksX> >()));

      ::ROOT::AddClassAlternate("vector<tracksX>","std::vector<tracksX, std::allocator<tracksX> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<tracksX>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEtracksXgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<tracksX>*)nullptr)->GetClass();
      vectorlEtracksXgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEtracksXgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEtracksXgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<tracksX> : new vector<tracksX>;
   }
   static void *newArray_vectorlEtracksXgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<tracksX>[nElements] : new vector<tracksX>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEtracksXgR(void *p) {
      delete ((vector<tracksX>*)p);
   }
   static void deleteArray_vectorlEtracksXgR(void *p) {
      delete [] ((vector<tracksX>*)p);
   }
   static void destruct_vectorlEtracksXgR(void *p) {
      typedef vector<tracksX> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<tracksX>

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
   static TClass *vectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgR_Dictionary();
   static void vectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgR(void *p = nullptr);
   static void *newArray_vectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgR(void *p);
   static void deleteArray_vectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgR(void *p);
   static void destruct_vectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Math::Impl::Transform3D<double> >*)
   {
      vector<ROOT::Math::Impl::Transform3D<double> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Math::Impl::Transform3D<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Math::Impl::Transform3D<double> >", -2, "vector", 386,
                  typeid(vector<ROOT::Math::Impl::Transform3D<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::Math::Impl::Transform3D<double> >) );
      instance.SetNew(&new_vectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Math::Impl::Transform3D<double> > >()));

      ::ROOT::AddClassAlternate("vector<ROOT::Math::Impl::Transform3D<double> >","std::vector<ROOT::Math::Impl::Transform3D<double>, std::allocator<ROOT::Math::Impl::Transform3D<double> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ROOT::Math::Impl::Transform3D<double> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ROOT::Math::Impl::Transform3D<double> >*)nullptr)->GetClass();
      vectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Math::Impl::Transform3D<double> > : new vector<ROOT::Math::Impl::Transform3D<double> >;
   }
   static void *newArray_vectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ROOT::Math::Impl::Transform3D<double> >[nElements] : new vector<ROOT::Math::Impl::Transform3D<double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgR(void *p) {
      delete ((vector<ROOT::Math::Impl::Transform3D<double> >*)p);
   }
   static void deleteArray_vectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgR(void *p) {
      delete [] ((vector<ROOT::Math::Impl::Transform3D<double> >*)p);
   }
   static void destruct_vectorlEROOTcLcLMathcLcLImplcLcLTransform3DlEdoublegRsPgR(void *p) {
      typedef vector<ROOT::Math::Impl::Transform3D<double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Math::Impl::Transform3D<double> >

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
   static TClass *vectorlEBmnSiliconTrackFindercLcLMC_pointsgR_Dictionary();
   static void vectorlEBmnSiliconTrackFindercLcLMC_pointsgR_TClassManip(TClass*);
   static void *new_vectorlEBmnSiliconTrackFindercLcLMC_pointsgR(void *p = nullptr);
   static void *newArray_vectorlEBmnSiliconTrackFindercLcLMC_pointsgR(Long_t size, void *p);
   static void delete_vectorlEBmnSiliconTrackFindercLcLMC_pointsgR(void *p);
   static void deleteArray_vectorlEBmnSiliconTrackFindercLcLMC_pointsgR(void *p);
   static void destruct_vectorlEBmnSiliconTrackFindercLcLMC_pointsgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnSiliconTrackFinder::MC_points>*)
   {
      vector<BmnSiliconTrackFinder::MC_points> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnSiliconTrackFinder::MC_points>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnSiliconTrackFinder::MC_points>", -2, "vector", 386,
                  typeid(vector<BmnSiliconTrackFinder::MC_points>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnSiliconTrackFindercLcLMC_pointsgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnSiliconTrackFinder::MC_points>) );
      instance.SetNew(&new_vectorlEBmnSiliconTrackFindercLcLMC_pointsgR);
      instance.SetNewArray(&newArray_vectorlEBmnSiliconTrackFindercLcLMC_pointsgR);
      instance.SetDelete(&delete_vectorlEBmnSiliconTrackFindercLcLMC_pointsgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnSiliconTrackFindercLcLMC_pointsgR);
      instance.SetDestructor(&destruct_vectorlEBmnSiliconTrackFindercLcLMC_pointsgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnSiliconTrackFinder::MC_points> >()));

      ::ROOT::AddClassAlternate("vector<BmnSiliconTrackFinder::MC_points>","std::vector<BmnSiliconTrackFinder::MC_points, std::allocator<BmnSiliconTrackFinder::MC_points> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnSiliconTrackFinder::MC_points>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnSiliconTrackFindercLcLMC_pointsgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnSiliconTrackFinder::MC_points>*)nullptr)->GetClass();
      vectorlEBmnSiliconTrackFindercLcLMC_pointsgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnSiliconTrackFindercLcLMC_pointsgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnSiliconTrackFindercLcLMC_pointsgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnSiliconTrackFinder::MC_points> : new vector<BmnSiliconTrackFinder::MC_points>;
   }
   static void *newArray_vectorlEBmnSiliconTrackFindercLcLMC_pointsgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnSiliconTrackFinder::MC_points>[nElements] : new vector<BmnSiliconTrackFinder::MC_points>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnSiliconTrackFindercLcLMC_pointsgR(void *p) {
      delete ((vector<BmnSiliconTrackFinder::MC_points>*)p);
   }
   static void deleteArray_vectorlEBmnSiliconTrackFindercLcLMC_pointsgR(void *p) {
      delete [] ((vector<BmnSiliconTrackFinder::MC_points>*)p);
   }
   static void destruct_vectorlEBmnSiliconTrackFindercLcLMC_pointsgR(void *p) {
      typedef vector<BmnSiliconTrackFinder::MC_points> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnSiliconTrackFinder::MC_points>

namespace ROOT {
   static TClass *vectorlEBmnSiliconLayergR_Dictionary();
   static void vectorlEBmnSiliconLayergR_TClassManip(TClass*);
   static void *new_vectorlEBmnSiliconLayergR(void *p = nullptr);
   static void *newArray_vectorlEBmnSiliconLayergR(Long_t size, void *p);
   static void delete_vectorlEBmnSiliconLayergR(void *p);
   static void deleteArray_vectorlEBmnSiliconLayergR(void *p);
   static void destruct_vectorlEBmnSiliconLayergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnSiliconLayer>*)
   {
      vector<BmnSiliconLayer> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnSiliconLayer>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnSiliconLayer>", -2, "vector", 386,
                  typeid(vector<BmnSiliconLayer>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnSiliconLayergR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnSiliconLayer>) );
      instance.SetNew(&new_vectorlEBmnSiliconLayergR);
      instance.SetNewArray(&newArray_vectorlEBmnSiliconLayergR);
      instance.SetDelete(&delete_vectorlEBmnSiliconLayergR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnSiliconLayergR);
      instance.SetDestructor(&destruct_vectorlEBmnSiliconLayergR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnSiliconLayer> >()));

      ::ROOT::AddClassAlternate("vector<BmnSiliconLayer>","std::vector<BmnSiliconLayer, std::allocator<BmnSiliconLayer> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnSiliconLayer>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnSiliconLayergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnSiliconLayer>*)nullptr)->GetClass();
      vectorlEBmnSiliconLayergR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnSiliconLayergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnSiliconLayergR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnSiliconLayer> : new vector<BmnSiliconLayer>;
   }
   static void *newArray_vectorlEBmnSiliconLayergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnSiliconLayer>[nElements] : new vector<BmnSiliconLayer>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnSiliconLayergR(void *p) {
      delete ((vector<BmnSiliconLayer>*)p);
   }
   static void deleteArray_vectorlEBmnSiliconLayergR(void *p) {
      delete [] ((vector<BmnSiliconLayer>*)p);
   }
   static void destruct_vectorlEBmnSiliconLayergR(void *p) {
      typedef vector<BmnSiliconLayer> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnSiliconLayer>

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

namespace ROOT {
   static TClass *maplETStringcOTGeoMediummUgR_Dictionary();
   static void maplETStringcOTGeoMediummUgR_TClassManip(TClass*);
   static void *new_maplETStringcOTGeoMediummUgR(void *p = nullptr);
   static void *newArray_maplETStringcOTGeoMediummUgR(Long_t size, void *p);
   static void delete_maplETStringcOTGeoMediummUgR(void *p);
   static void deleteArray_maplETStringcOTGeoMediummUgR(void *p);
   static void destruct_maplETStringcOTGeoMediummUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TString,TGeoMedium*>*)
   {
      map<TString,TGeoMedium*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TString,TGeoMedium*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TString,TGeoMedium*>", -2, "map", 100,
                  typeid(map<TString,TGeoMedium*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETStringcOTGeoMediummUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TString,TGeoMedium*>) );
      instance.SetNew(&new_maplETStringcOTGeoMediummUgR);
      instance.SetNewArray(&newArray_maplETStringcOTGeoMediummUgR);
      instance.SetDelete(&delete_maplETStringcOTGeoMediummUgR);
      instance.SetDeleteArray(&deleteArray_maplETStringcOTGeoMediummUgR);
      instance.SetDestructor(&destruct_maplETStringcOTGeoMediummUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TString,TGeoMedium*> >()));

      ::ROOT::AddClassAlternate("map<TString,TGeoMedium*>","std::map<TString, TGeoMedium*, std::less<TString>, std::allocator<std::pair<TString const, TGeoMedium*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TString,TGeoMedium*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETStringcOTGeoMediummUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TString,TGeoMedium*>*)nullptr)->GetClass();
      maplETStringcOTGeoMediummUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETStringcOTGeoMediummUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETStringcOTGeoMediummUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,TGeoMedium*> : new map<TString,TGeoMedium*>;
   }
   static void *newArray_maplETStringcOTGeoMediummUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,TGeoMedium*>[nElements] : new map<TString,TGeoMedium*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETStringcOTGeoMediummUgR(void *p) {
      delete ((map<TString,TGeoMedium*>*)p);
   }
   static void deleteArray_maplETStringcOTGeoMediummUgR(void *p) {
      delete [] ((map<TString,TGeoMedium*>*)p);
   }
   static void destruct_maplETStringcOTGeoMediummUgR(void *p) {
      typedef map<TString,TGeoMedium*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TString,TGeoMedium*>

namespace {
  void TriggerDictionaryInitialization_G__SiliconDict_Impl() {
    static const char* headers[] = {
"BmnSilicon.h",
"BmnSiliconPoint.h",
"BmnSiliconLayer.h",
"BmnSiliconModule.h",
"BmnSiliconStation.h",
"BmnSiliconStationSet.h",
"BmnSiliconDigitizer.h",
"BmnSiliconHitMaker.h",
"BmnSiliconDigit.h",
"BmnSiliconTrack.h",
"BmnSiliconHit.h",
"BmnSiliconHitProducer.h",
"BmnSiliconHitProducerSRC.h",
"BmnSiliconTrackFinder.h",
"BmnSiliconTransform.h",
"BmnSiliconConfiguration.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/base",
"/data/yaopeng/bmnroot_Yaopeng/base/data",
"/data/yaopeng/bmnroot_Yaopeng/base/cbm",
"/data/yaopeng/bmnroot_Yaopeng/database/uni_db",
"/data/yaopeng/bmnroot_Yaopeng/detectors/silicon",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/detectors/silicon/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__SiliconDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$BmnSiliconPoint.h")))  __attribute__((annotate("$clingAutoload$BmnSilicon.h")))  BmnSiliconPoint;
class __attribute__((annotate("$clingAutoload$BmnSilicon.h")))  BmnSilicon;
class __attribute__((annotate("$clingAutoload$BmnSiliconLayer.h")))  BmnSiliconLayer;
class __attribute__((annotate("$clingAutoload$BmnSiliconModule.h")))  BmnSiliconModule;
class __attribute__((annotate("$clingAutoload$BmnSiliconStation.h")))  BmnSiliconStation;
class __attribute__((annotate("$clingAutoload$BmnSiliconStationSet.h")))  BmnSiliconStationSet;
class __attribute__((annotate("$clingAutoload$BmnSiliconDigit.h")))  __attribute__((annotate("$clingAutoload$BmnSiliconDigitizer.h")))  BmnSiliconDigit;
class __attribute__((annotate("$clingAutoload$BmnSiliconTransform.h")))  __attribute__((annotate("$clingAutoload$BmnSiliconDigitizer.h")))  BmnSiliconTransform;
class __attribute__((annotate("$clingAutoload$BmnSiliconDigitizer.h")))  BmnSiliconDigitizer;
class __attribute__((annotate("$clingAutoload$BmnSiliconHit.h")))  __attribute__((annotate("$clingAutoload$BmnSiliconHitMaker.h")))  BmnSiliconHit;
class __attribute__((annotate("$clingAutoload$BmnSiliconHitMaker.h")))  BmnSiliconHitMaker;
class __attribute__((annotate("$clingAutoload$BmnSiliconTrack.h")))  BmnSiliconTrack;
class __attribute__((annotate("$clingAutoload$BmnSiliconHitProducer.h")))  BmnSiliconHitProducer;
class __attribute__((annotate("$clingAutoload$BmnSiliconHitProducerSRC.h")))  BmnSiliconHitProducerSRC;
class __attribute__((annotate("$clingAutoload$BmnSiliconTrackFinder.h")))  BmnSiliconTrackFinder;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__SiliconDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "BmnSilicon.h"
#include "BmnSiliconPoint.h"
#include "BmnSiliconLayer.h"
#include "BmnSiliconModule.h"
#include "BmnSiliconStation.h"
#include "BmnSiliconStationSet.h"
#include "BmnSiliconDigitizer.h"
#include "BmnSiliconHitMaker.h"
#include "BmnSiliconDigit.h"
#include "BmnSiliconTrack.h"
#include "BmnSiliconHit.h"
#include "BmnSiliconHitProducer.h"
#include "BmnSiliconHitProducerSRC.h"
#include "BmnSiliconTrackFinder.h"
#include "BmnSiliconTransform.h"
#include "BmnSiliconConfiguration.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BmnSilicon", payloadCode, "@",
"BmnSiliconConfiguration::SILICON_CONFIG", payloadCode, "@",
"BmnSiliconDigit", payloadCode, "@",
"BmnSiliconDigitizer", payloadCode, "@",
"BmnSiliconHit", payloadCode, "@",
"BmnSiliconHitMaker", payloadCode, "@",
"BmnSiliconHitProducer", payloadCode, "@",
"BmnSiliconHitProducerSRC", payloadCode, "@",
"BmnSiliconLayer", payloadCode, "@",
"BmnSiliconModule", payloadCode, "@",
"BmnSiliconPoint", payloadCode, "@",
"BmnSiliconStation", payloadCode, "@",
"BmnSiliconStationSet", payloadCode, "@",
"BmnSiliconTrack", payloadCode, "@",
"BmnSiliconTrackFinder", payloadCode, "@",
"BmnSiliconTransform", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__SiliconDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__SiliconDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__SiliconDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__SiliconDict() {
  TriggerDictionaryInitialization_G__SiliconDict_Impl();
}
