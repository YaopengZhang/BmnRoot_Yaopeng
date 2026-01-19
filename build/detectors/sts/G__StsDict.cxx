// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIdetectorsdIstsdIG__StsDict
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
#include "CbmStsDetectorId.h"
#include "CbmStsDigi.h"
#include "CbmStsDigiMatch.h"
#include "CbmStsDigiLight.h"
#include "CbmStsHit.h"
#include "CbmStsCluster.h"
#include "CbmGeoSts.h"
#include "CbmGeoStsPar.h"
#include "CbmSts.h"
#include "CbmStsContFact.h"
#include "CbmStsDigiPar.h"
#include "CbmStsDigiScheme.h"
#include "CbmStsDigitize.h"
#include "CbmStsClusterFinder.h"
#include "CbmStsFindHits.h"
#include "CbmStsFitTracks.h"
#include "CbmStsMatchHits.h"
#include "CbmStsMatchTracks.h"
#include "CbmStsParAsciiFileIo.h"
#include "CbmStsParRootFileIo.h"
#include "CbmStsRadTool.h"
#include "CbmStsSensor.h"
#include "CbmStsSensorDigiPar.h"
#include "CbmStsSector.h"
#include "CbmStsSectorDigiPar.h"
#include "CbmStsStation.h"
#include "CbmStsStationDigiPar.h"
#include "CbmStsTrackFinderIdeal.h"
#include "CbmStsTrackFitterIdeal.h"
#include "CbmStsSimulationQa.h"
#include "CbmStsFindHitsQa.h"
#include "CbmStsReconstructionQa.h"
#include "CbmBmnStsDigitize.h"
#include "BmnGemFastDigitize.h"
#include "BmnToCbmHitConverter.h"
#include "BmnStsMatchTracks.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_CbmStsDetectorId(void *p = nullptr);
   static void *newArray_CbmStsDetectorId(Long_t size, void *p);
   static void delete_CbmStsDetectorId(void *p);
   static void deleteArray_CbmStsDetectorId(void *p);
   static void destruct_CbmStsDetectorId(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsDetectorId*)
   {
      ::CbmStsDetectorId *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsDetectorId >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsDetectorId", ::CbmStsDetectorId::Class_Version(), "CbmStsDetectorId.h", 27,
                  typeid(::CbmStsDetectorId), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsDetectorId::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsDetectorId) );
      instance.SetNew(&new_CbmStsDetectorId);
      instance.SetNewArray(&newArray_CbmStsDetectorId);
      instance.SetDelete(&delete_CbmStsDetectorId);
      instance.SetDeleteArray(&deleteArray_CbmStsDetectorId);
      instance.SetDestructor(&destruct_CbmStsDetectorId);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsDetectorId*)
   {
      return GenerateInitInstanceLocal((::CbmStsDetectorId*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsDetectorId*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsDigi(void *p = nullptr);
   static void *newArray_CbmStsDigi(Long_t size, void *p);
   static void delete_CbmStsDigi(void *p);
   static void deleteArray_CbmStsDigi(void *p);
   static void destruct_CbmStsDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsDigi*)
   {
      ::CbmStsDigi *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsDigi >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsDigi", ::CbmStsDigi::Class_Version(), "CbmStsDigi.h", 29,
                  typeid(::CbmStsDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsDigi::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsDigi) );
      instance.SetNew(&new_CbmStsDigi);
      instance.SetNewArray(&newArray_CbmStsDigi);
      instance.SetDelete(&delete_CbmStsDigi);
      instance.SetDeleteArray(&deleteArray_CbmStsDigi);
      instance.SetDestructor(&destruct_CbmStsDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsDigi*)
   {
      return GenerateInitInstanceLocal((::CbmStsDigi*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsDigi*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsDigiMatch(void *p = nullptr);
   static void *newArray_CbmStsDigiMatch(Long_t size, void *p);
   static void delete_CbmStsDigiMatch(void *p);
   static void deleteArray_CbmStsDigiMatch(void *p);
   static void destruct_CbmStsDigiMatch(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsDigiMatch*)
   {
      ::CbmStsDigiMatch *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsDigiMatch >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsDigiMatch", ::CbmStsDigiMatch::Class_Version(), "CbmStsDigiMatch.h", 30,
                  typeid(::CbmStsDigiMatch), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsDigiMatch::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsDigiMatch) );
      instance.SetNew(&new_CbmStsDigiMatch);
      instance.SetNewArray(&newArray_CbmStsDigiMatch);
      instance.SetDelete(&delete_CbmStsDigiMatch);
      instance.SetDeleteArray(&deleteArray_CbmStsDigiMatch);
      instance.SetDestructor(&destruct_CbmStsDigiMatch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsDigiMatch*)
   {
      return GenerateInitInstanceLocal((::CbmStsDigiMatch*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsDigiMatch*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsDigiLight(void *p = nullptr);
   static void *newArray_CbmStsDigiLight(Long_t size, void *p);
   static void delete_CbmStsDigiLight(void *p);
   static void deleteArray_CbmStsDigiLight(void *p);
   static void destruct_CbmStsDigiLight(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsDigiLight*)
   {
      ::CbmStsDigiLight *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsDigiLight >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsDigiLight", ::CbmStsDigiLight::Class_Version(), "CbmStsDigiLight.h", 31,
                  typeid(::CbmStsDigiLight), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsDigiLight::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsDigiLight) );
      instance.SetNew(&new_CbmStsDigiLight);
      instance.SetNewArray(&newArray_CbmStsDigiLight);
      instance.SetDelete(&delete_CbmStsDigiLight);
      instance.SetDeleteArray(&deleteArray_CbmStsDigiLight);
      instance.SetDestructor(&destruct_CbmStsDigiLight);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsDigiLight*)
   {
      return GenerateInitInstanceLocal((::CbmStsDigiLight*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsDigiLight*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsHit(void *p = nullptr);
   static void *newArray_CbmStsHit(Long_t size, void *p);
   static void delete_CbmStsHit(void *p);
   static void deleteArray_CbmStsHit(void *p);
   static void destruct_CbmStsHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsHit*)
   {
      ::CbmStsHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsHit", ::CbmStsHit::Class_Version(), "CbmStsHit.h", 30,
                  typeid(::CbmStsHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsHit::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsHit) );
      instance.SetNew(&new_CbmStsHit);
      instance.SetNewArray(&newArray_CbmStsHit);
      instance.SetDelete(&delete_CbmStsHit);
      instance.SetDeleteArray(&deleteArray_CbmStsHit);
      instance.SetDestructor(&destruct_CbmStsHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsHit*)
   {
      return GenerateInitInstanceLocal((::CbmStsHit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsHit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsCluster(void *p = nullptr);
   static void *newArray_CbmStsCluster(Long_t size, void *p);
   static void delete_CbmStsCluster(void *p);
   static void deleteArray_CbmStsCluster(void *p);
   static void destruct_CbmStsCluster(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsCluster*)
   {
      ::CbmStsCluster *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsCluster >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsCluster", ::CbmStsCluster::Class_Version(), "CbmStsCluster.h", 32,
                  typeid(::CbmStsCluster), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsCluster::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsCluster) );
      instance.SetNew(&new_CbmStsCluster);
      instance.SetNewArray(&newArray_CbmStsCluster);
      instance.SetDelete(&delete_CbmStsCluster);
      instance.SetDeleteArray(&deleteArray_CbmStsCluster);
      instance.SetDestructor(&destruct_CbmStsCluster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsCluster*)
   {
      return GenerateInitInstanceLocal((::CbmStsCluster*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsCluster*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmGeoSts(void *p = nullptr);
   static void *newArray_CbmGeoSts(Long_t size, void *p);
   static void delete_CbmGeoSts(void *p);
   static void deleteArray_CbmGeoSts(void *p);
   static void destruct_CbmGeoSts(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmGeoSts*)
   {
      ::CbmGeoSts *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmGeoSts >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmGeoSts", ::CbmGeoSts::Class_Version(), "CbmGeoSts.h", 6,
                  typeid(::CbmGeoSts), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmGeoSts::Dictionary, isa_proxy, 4,
                  sizeof(::CbmGeoSts) );
      instance.SetNew(&new_CbmGeoSts);
      instance.SetNewArray(&newArray_CbmGeoSts);
      instance.SetDelete(&delete_CbmGeoSts);
      instance.SetDeleteArray(&deleteArray_CbmGeoSts);
      instance.SetDestructor(&destruct_CbmGeoSts);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmGeoSts*)
   {
      return GenerateInitInstanceLocal((::CbmGeoSts*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmGeoSts*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmGeoStsPar(void *p = nullptr);
   static void *newArray_CbmGeoStsPar(Long_t size, void *p);
   static void delete_CbmGeoStsPar(void *p);
   static void deleteArray_CbmGeoStsPar(void *p);
   static void destruct_CbmGeoStsPar(void *p);
   static void streamer_CbmGeoStsPar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmGeoStsPar*)
   {
      ::CbmGeoStsPar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmGeoStsPar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmGeoStsPar", ::CbmGeoStsPar::Class_Version(), "CbmGeoStsPar.h", 8,
                  typeid(::CbmGeoStsPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmGeoStsPar::Dictionary, isa_proxy, 16,
                  sizeof(::CbmGeoStsPar) );
      instance.SetNew(&new_CbmGeoStsPar);
      instance.SetNewArray(&newArray_CbmGeoStsPar);
      instance.SetDelete(&delete_CbmGeoStsPar);
      instance.SetDeleteArray(&deleteArray_CbmGeoStsPar);
      instance.SetDestructor(&destruct_CbmGeoStsPar);
      instance.SetStreamerFunc(&streamer_CbmGeoStsPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmGeoStsPar*)
   {
      return GenerateInitInstanceLocal((::CbmGeoStsPar*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmGeoStsPar*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmSts(void *p = nullptr);
   static void *newArray_CbmSts(Long_t size, void *p);
   static void delete_CbmSts(void *p);
   static void deleteArray_CbmSts(void *p);
   static void destruct_CbmSts(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmSts*)
   {
      ::CbmSts *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmSts >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmSts", ::CbmSts::Class_Version(), "CbmSts.h", 26,
                  typeid(::CbmSts), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmSts::Dictionary, isa_proxy, 4,
                  sizeof(::CbmSts) );
      instance.SetNew(&new_CbmSts);
      instance.SetNewArray(&newArray_CbmSts);
      instance.SetDelete(&delete_CbmSts);
      instance.SetDeleteArray(&deleteArray_CbmSts);
      instance.SetDestructor(&destruct_CbmSts);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmSts*)
   {
      return GenerateInitInstanceLocal((::CbmSts*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmSts*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsContFact(void *p = nullptr);
   static void *newArray_CbmStsContFact(Long_t size, void *p);
   static void delete_CbmStsContFact(void *p);
   static void deleteArray_CbmStsContFact(void *p);
   static void destruct_CbmStsContFact(void *p);
   static void streamer_CbmStsContFact(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsContFact*)
   {
      ::CbmStsContFact *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsContFact >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsContFact", ::CbmStsContFact::Class_Version(), "CbmStsContFact.h", 8,
                  typeid(::CbmStsContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsContFact::Dictionary, isa_proxy, 16,
                  sizeof(::CbmStsContFact) );
      instance.SetNew(&new_CbmStsContFact);
      instance.SetNewArray(&newArray_CbmStsContFact);
      instance.SetDelete(&delete_CbmStsContFact);
      instance.SetDeleteArray(&deleteArray_CbmStsContFact);
      instance.SetDestructor(&destruct_CbmStsContFact);
      instance.SetStreamerFunc(&streamer_CbmStsContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsContFact*)
   {
      return GenerateInitInstanceLocal((::CbmStsContFact*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsContFact*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsDigiPar(void *p = nullptr);
   static void *newArray_CbmStsDigiPar(Long_t size, void *p);
   static void delete_CbmStsDigiPar(void *p);
   static void deleteArray_CbmStsDigiPar(void *p);
   static void destruct_CbmStsDigiPar(void *p);
   static void streamer_CbmStsDigiPar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsDigiPar*)
   {
      ::CbmStsDigiPar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsDigiPar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsDigiPar", ::CbmStsDigiPar::Class_Version(), "CbmStsDigiPar.h", 37,
                  typeid(::CbmStsDigiPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsDigiPar::Dictionary, isa_proxy, 16,
                  sizeof(::CbmStsDigiPar) );
      instance.SetNew(&new_CbmStsDigiPar);
      instance.SetNewArray(&newArray_CbmStsDigiPar);
      instance.SetDelete(&delete_CbmStsDigiPar);
      instance.SetDeleteArray(&deleteArray_CbmStsDigiPar);
      instance.SetDestructor(&destruct_CbmStsDigiPar);
      instance.SetStreamerFunc(&streamer_CbmStsDigiPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsDigiPar*)
   {
      return GenerateInitInstanceLocal((::CbmStsDigiPar*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsDigiPar*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_CbmStsDigiScheme(void *p);
   static void deleteArray_CbmStsDigiScheme(void *p);
   static void destruct_CbmStsDigiScheme(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsDigiScheme*)
   {
      ::CbmStsDigiScheme *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsDigiScheme >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsDigiScheme", ::CbmStsDigiScheme::Class_Version(), "CbmStsDigiScheme.h", 36,
                  typeid(::CbmStsDigiScheme), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsDigiScheme::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsDigiScheme) );
      instance.SetDelete(&delete_CbmStsDigiScheme);
      instance.SetDeleteArray(&deleteArray_CbmStsDigiScheme);
      instance.SetDestructor(&destruct_CbmStsDigiScheme);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsDigiScheme*)
   {
      return GenerateInitInstanceLocal((::CbmStsDigiScheme*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsDigiScheme*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsDigitize(void *p = nullptr);
   static void *newArray_CbmStsDigitize(Long_t size, void *p);
   static void delete_CbmStsDigitize(void *p);
   static void deleteArray_CbmStsDigitize(void *p);
   static void destruct_CbmStsDigitize(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsDigitize*)
   {
      ::CbmStsDigitize *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsDigitize >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsDigitize", ::CbmStsDigitize::Class_Version(), "CbmStsDigitize.h", 42,
                  typeid(::CbmStsDigitize), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsDigitize::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsDigitize) );
      instance.SetNew(&new_CbmStsDigitize);
      instance.SetNewArray(&newArray_CbmStsDigitize);
      instance.SetDelete(&delete_CbmStsDigitize);
      instance.SetDeleteArray(&deleteArray_CbmStsDigitize);
      instance.SetDestructor(&destruct_CbmStsDigitize);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsDigitize*)
   {
      return GenerateInitInstanceLocal((::CbmStsDigitize*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsDigitize*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsClusterFinder(void *p = nullptr);
   static void *newArray_CbmStsClusterFinder(Long_t size, void *p);
   static void delete_CbmStsClusterFinder(void *p);
   static void deleteArray_CbmStsClusterFinder(void *p);
   static void destruct_CbmStsClusterFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsClusterFinder*)
   {
      ::CbmStsClusterFinder *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsClusterFinder >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsClusterFinder", ::CbmStsClusterFinder::Class_Version(), "CbmStsClusterFinder.h", 42,
                  typeid(::CbmStsClusterFinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsClusterFinder::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsClusterFinder) );
      instance.SetNew(&new_CbmStsClusterFinder);
      instance.SetNewArray(&newArray_CbmStsClusterFinder);
      instance.SetDelete(&delete_CbmStsClusterFinder);
      instance.SetDeleteArray(&deleteArray_CbmStsClusterFinder);
      instance.SetDestructor(&destruct_CbmStsClusterFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsClusterFinder*)
   {
      return GenerateInitInstanceLocal((::CbmStsClusterFinder*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsClusterFinder*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsFindHits(void *p = nullptr);
   static void *newArray_CbmStsFindHits(Long_t size, void *p);
   static void delete_CbmStsFindHits(void *p);
   static void deleteArray_CbmStsFindHits(void *p);
   static void destruct_CbmStsFindHits(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsFindHits*)
   {
      ::CbmStsFindHits *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsFindHits >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsFindHits", ::CbmStsFindHits::Class_Version(), "CbmStsFindHits.h", 49,
                  typeid(::CbmStsFindHits), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsFindHits::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsFindHits) );
      instance.SetNew(&new_CbmStsFindHits);
      instance.SetNewArray(&newArray_CbmStsFindHits);
      instance.SetDelete(&delete_CbmStsFindHits);
      instance.SetDeleteArray(&deleteArray_CbmStsFindHits);
      instance.SetDestructor(&destruct_CbmStsFindHits);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsFindHits*)
   {
      return GenerateInitInstanceLocal((::CbmStsFindHits*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsFindHits*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsFitTracks(void *p = nullptr);
   static void *newArray_CbmStsFitTracks(Long_t size, void *p);
   static void delete_CbmStsFitTracks(void *p);
   static void deleteArray_CbmStsFitTracks(void *p);
   static void destruct_CbmStsFitTracks(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsFitTracks*)
   {
      ::CbmStsFitTracks *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsFitTracks >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsFitTracks", ::CbmStsFitTracks::Class_Version(), "CbmStsFitTracks.h", 29,
                  typeid(::CbmStsFitTracks), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsFitTracks::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsFitTracks) );
      instance.SetNew(&new_CbmStsFitTracks);
      instance.SetNewArray(&newArray_CbmStsFitTracks);
      instance.SetDelete(&delete_CbmStsFitTracks);
      instance.SetDeleteArray(&deleteArray_CbmStsFitTracks);
      instance.SetDestructor(&destruct_CbmStsFitTracks);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsFitTracks*)
   {
      return GenerateInitInstanceLocal((::CbmStsFitTracks*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsFitTracks*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsMatchHits(void *p = nullptr);
   static void *newArray_CbmStsMatchHits(Long_t size, void *p);
   static void delete_CbmStsMatchHits(void *p);
   static void deleteArray_CbmStsMatchHits(void *p);
   static void destruct_CbmStsMatchHits(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsMatchHits*)
   {
      ::CbmStsMatchHits *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsMatchHits >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsMatchHits", ::CbmStsMatchHits::Class_Version(), "CbmStsMatchHits.h", 42,
                  typeid(::CbmStsMatchHits), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsMatchHits::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsMatchHits) );
      instance.SetNew(&new_CbmStsMatchHits);
      instance.SetNewArray(&newArray_CbmStsMatchHits);
      instance.SetDelete(&delete_CbmStsMatchHits);
      instance.SetDeleteArray(&deleteArray_CbmStsMatchHits);
      instance.SetDestructor(&destruct_CbmStsMatchHits);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsMatchHits*)
   {
      return GenerateInitInstanceLocal((::CbmStsMatchHits*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsMatchHits*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsMatchTracks(void *p = nullptr);
   static void *newArray_CbmStsMatchTracks(Long_t size, void *p);
   static void delete_CbmStsMatchTracks(void *p);
   static void deleteArray_CbmStsMatchTracks(void *p);
   static void destruct_CbmStsMatchTracks(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsMatchTracks*)
   {
      ::CbmStsMatchTracks *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsMatchTracks >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsMatchTracks", ::CbmStsMatchTracks::Class_Version(), "CbmStsMatchTracks.h", 31,
                  typeid(::CbmStsMatchTracks), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsMatchTracks::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsMatchTracks) );
      instance.SetNew(&new_CbmStsMatchTracks);
      instance.SetNewArray(&newArray_CbmStsMatchTracks);
      instance.SetDelete(&delete_CbmStsMatchTracks);
      instance.SetDeleteArray(&deleteArray_CbmStsMatchTracks);
      instance.SetDestructor(&destruct_CbmStsMatchTracks);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsMatchTracks*)
   {
      return GenerateInitInstanceLocal((::CbmStsMatchTracks*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsMatchTracks*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_CbmStsParAsciiFileIo(void *p);
   static void deleteArray_CbmStsParAsciiFileIo(void *p);
   static void destruct_CbmStsParAsciiFileIo(void *p);
   static void streamer_CbmStsParAsciiFileIo(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsParAsciiFileIo*)
   {
      ::CbmStsParAsciiFileIo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsParAsciiFileIo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsParAsciiFileIo", ::CbmStsParAsciiFileIo::Class_Version(), "CbmStsParAsciiFileIo.h", 15,
                  typeid(::CbmStsParAsciiFileIo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsParAsciiFileIo::Dictionary, isa_proxy, 16,
                  sizeof(::CbmStsParAsciiFileIo) );
      instance.SetDelete(&delete_CbmStsParAsciiFileIo);
      instance.SetDeleteArray(&deleteArray_CbmStsParAsciiFileIo);
      instance.SetDestructor(&destruct_CbmStsParAsciiFileIo);
      instance.SetStreamerFunc(&streamer_CbmStsParAsciiFileIo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsParAsciiFileIo*)
   {
      return GenerateInitInstanceLocal((::CbmStsParAsciiFileIo*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsParAsciiFileIo*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_CbmStsParRootFileIo(void *p);
   static void deleteArray_CbmStsParRootFileIo(void *p);
   static void destruct_CbmStsParRootFileIo(void *p);
   static void streamer_CbmStsParRootFileIo(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsParRootFileIo*)
   {
      ::CbmStsParRootFileIo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsParRootFileIo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsParRootFileIo", ::CbmStsParRootFileIo::Class_Version(), "CbmStsParRootFileIo.h", 13,
                  typeid(::CbmStsParRootFileIo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsParRootFileIo::Dictionary, isa_proxy, 16,
                  sizeof(::CbmStsParRootFileIo) );
      instance.SetDelete(&delete_CbmStsParRootFileIo);
      instance.SetDeleteArray(&deleteArray_CbmStsParRootFileIo);
      instance.SetDestructor(&destruct_CbmStsParRootFileIo);
      instance.SetStreamerFunc(&streamer_CbmStsParRootFileIo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsParRootFileIo*)
   {
      return GenerateInitInstanceLocal((::CbmStsParRootFileIo*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsParRootFileIo*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsRadTool(void *p = nullptr);
   static void *newArray_CbmStsRadTool(Long_t size, void *p);
   static void delete_CbmStsRadTool(void *p);
   static void deleteArray_CbmStsRadTool(void *p);
   static void destruct_CbmStsRadTool(void *p);
   static void streamer_CbmStsRadTool(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsRadTool*)
   {
      ::CbmStsRadTool *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsRadTool >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsRadTool", ::CbmStsRadTool::Class_Version(), "CbmStsRadTool.h", 38,
                  typeid(::CbmStsRadTool), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsRadTool::Dictionary, isa_proxy, 16,
                  sizeof(::CbmStsRadTool) );
      instance.SetNew(&new_CbmStsRadTool);
      instance.SetNewArray(&newArray_CbmStsRadTool);
      instance.SetDelete(&delete_CbmStsRadTool);
      instance.SetDeleteArray(&deleteArray_CbmStsRadTool);
      instance.SetDestructor(&destruct_CbmStsRadTool);
      instance.SetStreamerFunc(&streamer_CbmStsRadTool);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsRadTool*)
   {
      return GenerateInitInstanceLocal((::CbmStsRadTool*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsRadTool*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsSensor(void *p = nullptr);
   static void *newArray_CbmStsSensor(Long_t size, void *p);
   static void delete_CbmStsSensor(void *p);
   static void deleteArray_CbmStsSensor(void *p);
   static void destruct_CbmStsSensor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsSensor*)
   {
      ::CbmStsSensor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsSensor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsSensor", ::CbmStsSensor::Class_Version(), "CbmStsSensor.h", 46,
                  typeid(::CbmStsSensor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsSensor::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsSensor) );
      instance.SetNew(&new_CbmStsSensor);
      instance.SetNewArray(&newArray_CbmStsSensor);
      instance.SetDelete(&delete_CbmStsSensor);
      instance.SetDeleteArray(&deleteArray_CbmStsSensor);
      instance.SetDestructor(&destruct_CbmStsSensor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsSensor*)
   {
      return GenerateInitInstanceLocal((::CbmStsSensor*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsSensor*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsSensorDigiPar(void *p = nullptr);
   static void *newArray_CbmStsSensorDigiPar(Long_t size, void *p);
   static void delete_CbmStsSensorDigiPar(void *p);
   static void deleteArray_CbmStsSensorDigiPar(void *p);
   static void destruct_CbmStsSensorDigiPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsSensorDigiPar*)
   {
      ::CbmStsSensorDigiPar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsSensorDigiPar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsSensorDigiPar", ::CbmStsSensorDigiPar::Class_Version(), "CbmStsSensorDigiPar.h", 34,
                  typeid(::CbmStsSensorDigiPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsSensorDigiPar::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsSensorDigiPar) );
      instance.SetNew(&new_CbmStsSensorDigiPar);
      instance.SetNewArray(&newArray_CbmStsSensorDigiPar);
      instance.SetDelete(&delete_CbmStsSensorDigiPar);
      instance.SetDeleteArray(&deleteArray_CbmStsSensorDigiPar);
      instance.SetDestructor(&destruct_CbmStsSensorDigiPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsSensorDigiPar*)
   {
      return GenerateInitInstanceLocal((::CbmStsSensorDigiPar*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsSensorDigiPar*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsSector(void *p = nullptr);
   static void *newArray_CbmStsSector(Long_t size, void *p);
   static void delete_CbmStsSector(void *p);
   static void deleteArray_CbmStsSector(void *p);
   static void destruct_CbmStsSector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsSector*)
   {
      ::CbmStsSector *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsSector >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsSector", ::CbmStsSector::Class_Version(), "CbmStsSector.h", 44,
                  typeid(::CbmStsSector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsSector::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsSector) );
      instance.SetNew(&new_CbmStsSector);
      instance.SetNewArray(&newArray_CbmStsSector);
      instance.SetDelete(&delete_CbmStsSector);
      instance.SetDeleteArray(&deleteArray_CbmStsSector);
      instance.SetDestructor(&destruct_CbmStsSector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsSector*)
   {
      return GenerateInitInstanceLocal((::CbmStsSector*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsSector*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsSectorDigiPar(void *p = nullptr);
   static void *newArray_CbmStsSectorDigiPar(Long_t size, void *p);
   static void delete_CbmStsSectorDigiPar(void *p);
   static void deleteArray_CbmStsSectorDigiPar(void *p);
   static void destruct_CbmStsSectorDigiPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsSectorDigiPar*)
   {
      ::CbmStsSectorDigiPar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsSectorDigiPar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsSectorDigiPar", ::CbmStsSectorDigiPar::Class_Version(), "CbmStsSectorDigiPar.h", 35,
                  typeid(::CbmStsSectorDigiPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsSectorDigiPar::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsSectorDigiPar) );
      instance.SetNew(&new_CbmStsSectorDigiPar);
      instance.SetNewArray(&newArray_CbmStsSectorDigiPar);
      instance.SetDelete(&delete_CbmStsSectorDigiPar);
      instance.SetDeleteArray(&deleteArray_CbmStsSectorDigiPar);
      instance.SetDestructor(&destruct_CbmStsSectorDigiPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsSectorDigiPar*)
   {
      return GenerateInitInstanceLocal((::CbmStsSectorDigiPar*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsSectorDigiPar*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsStation(void *p = nullptr);
   static void *newArray_CbmStsStation(Long_t size, void *p);
   static void delete_CbmStsStation(void *p);
   static void deleteArray_CbmStsStation(void *p);
   static void destruct_CbmStsStation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsStation*)
   {
      ::CbmStsStation *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsStation >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsStation", ::CbmStsStation::Class_Version(), "CbmStsStation.h", 29,
                  typeid(::CbmStsStation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsStation::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsStation) );
      instance.SetNew(&new_CbmStsStation);
      instance.SetNewArray(&newArray_CbmStsStation);
      instance.SetDelete(&delete_CbmStsStation);
      instance.SetDeleteArray(&deleteArray_CbmStsStation);
      instance.SetDestructor(&destruct_CbmStsStation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsStation*)
   {
      return GenerateInitInstanceLocal((::CbmStsStation*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsStation*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsStationDigiPar(void *p = nullptr);
   static void *newArray_CbmStsStationDigiPar(Long_t size, void *p);
   static void delete_CbmStsStationDigiPar(void *p);
   static void deleteArray_CbmStsStationDigiPar(void *p);
   static void destruct_CbmStsStationDigiPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsStationDigiPar*)
   {
      ::CbmStsStationDigiPar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsStationDigiPar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsStationDigiPar", ::CbmStsStationDigiPar::Class_Version(), "CbmStsStationDigiPar.h", 24,
                  typeid(::CbmStsStationDigiPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsStationDigiPar::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsStationDigiPar) );
      instance.SetNew(&new_CbmStsStationDigiPar);
      instance.SetNewArray(&newArray_CbmStsStationDigiPar);
      instance.SetDelete(&delete_CbmStsStationDigiPar);
      instance.SetDeleteArray(&deleteArray_CbmStsStationDigiPar);
      instance.SetDestructor(&destruct_CbmStsStationDigiPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsStationDigiPar*)
   {
      return GenerateInitInstanceLocal((::CbmStsStationDigiPar*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsStationDigiPar*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsTrackFinderIdeal(void *p = nullptr);
   static void *newArray_CbmStsTrackFinderIdeal(Long_t size, void *p);
   static void delete_CbmStsTrackFinderIdeal(void *p);
   static void deleteArray_CbmStsTrackFinderIdeal(void *p);
   static void destruct_CbmStsTrackFinderIdeal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsTrackFinderIdeal*)
   {
      ::CbmStsTrackFinderIdeal *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsTrackFinderIdeal >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsTrackFinderIdeal", ::CbmStsTrackFinderIdeal::Class_Version(), "CbmStsTrackFinderIdeal.h", 26,
                  typeid(::CbmStsTrackFinderIdeal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsTrackFinderIdeal::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsTrackFinderIdeal) );
      instance.SetNew(&new_CbmStsTrackFinderIdeal);
      instance.SetNewArray(&newArray_CbmStsTrackFinderIdeal);
      instance.SetDelete(&delete_CbmStsTrackFinderIdeal);
      instance.SetDeleteArray(&deleteArray_CbmStsTrackFinderIdeal);
      instance.SetDestructor(&destruct_CbmStsTrackFinderIdeal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsTrackFinderIdeal*)
   {
      return GenerateInitInstanceLocal((::CbmStsTrackFinderIdeal*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsTrackFinderIdeal*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsTrackFitterIdeal(void *p = nullptr);
   static void *newArray_CbmStsTrackFitterIdeal(Long_t size, void *p);
   static void delete_CbmStsTrackFitterIdeal(void *p);
   static void deleteArray_CbmStsTrackFitterIdeal(void *p);
   static void destruct_CbmStsTrackFitterIdeal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsTrackFitterIdeal*)
   {
      ::CbmStsTrackFitterIdeal *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsTrackFitterIdeal >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsTrackFitterIdeal", ::CbmStsTrackFitterIdeal::Class_Version(), "CbmStsTrackFitterIdeal.h", 24,
                  typeid(::CbmStsTrackFitterIdeal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsTrackFitterIdeal::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsTrackFitterIdeal) );
      instance.SetNew(&new_CbmStsTrackFitterIdeal);
      instance.SetNewArray(&newArray_CbmStsTrackFitterIdeal);
      instance.SetDelete(&delete_CbmStsTrackFitterIdeal);
      instance.SetDeleteArray(&deleteArray_CbmStsTrackFitterIdeal);
      instance.SetDestructor(&destruct_CbmStsTrackFitterIdeal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsTrackFitterIdeal*)
   {
      return GenerateInitInstanceLocal((::CbmStsTrackFitterIdeal*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsTrackFitterIdeal*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsSimulationQa(void *p = nullptr);
   static void *newArray_CbmStsSimulationQa(Long_t size, void *p);
   static void delete_CbmStsSimulationQa(void *p);
   static void deleteArray_CbmStsSimulationQa(void *p);
   static void destruct_CbmStsSimulationQa(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsSimulationQa*)
   {
      ::CbmStsSimulationQa *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsSimulationQa >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsSimulationQa", ::CbmStsSimulationQa::Class_Version(), "CbmStsSimulationQa.h", 33,
                  typeid(::CbmStsSimulationQa), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsSimulationQa::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsSimulationQa) );
      instance.SetNew(&new_CbmStsSimulationQa);
      instance.SetNewArray(&newArray_CbmStsSimulationQa);
      instance.SetDelete(&delete_CbmStsSimulationQa);
      instance.SetDeleteArray(&deleteArray_CbmStsSimulationQa);
      instance.SetDestructor(&destruct_CbmStsSimulationQa);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsSimulationQa*)
   {
      return GenerateInitInstanceLocal((::CbmStsSimulationQa*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsSimulationQa*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsFindHitsQa(void *p = nullptr);
   static void *newArray_CbmStsFindHitsQa(Long_t size, void *p);
   static void delete_CbmStsFindHitsQa(void *p);
   static void deleteArray_CbmStsFindHitsQa(void *p);
   static void destruct_CbmStsFindHitsQa(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsFindHitsQa*)
   {
      ::CbmStsFindHitsQa *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsFindHitsQa >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsFindHitsQa", ::CbmStsFindHitsQa::Class_Version(), "CbmStsFindHitsQa.h", 48,
                  typeid(::CbmStsFindHitsQa), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsFindHitsQa::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsFindHitsQa) );
      instance.SetNew(&new_CbmStsFindHitsQa);
      instance.SetNewArray(&newArray_CbmStsFindHitsQa);
      instance.SetDelete(&delete_CbmStsFindHitsQa);
      instance.SetDeleteArray(&deleteArray_CbmStsFindHitsQa);
      instance.SetDestructor(&destruct_CbmStsFindHitsQa);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsFindHitsQa*)
   {
      return GenerateInitInstanceLocal((::CbmStsFindHitsQa*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsFindHitsQa*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsReconstructionQa(void *p = nullptr);
   static void *newArray_CbmStsReconstructionQa(Long_t size, void *p);
   static void delete_CbmStsReconstructionQa(void *p);
   static void deleteArray_CbmStsReconstructionQa(void *p);
   static void destruct_CbmStsReconstructionQa(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsReconstructionQa*)
   {
      ::CbmStsReconstructionQa *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsReconstructionQa >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsReconstructionQa", ::CbmStsReconstructionQa::Class_Version(), "CbmStsReconstructionQa.h", 38,
                  typeid(::CbmStsReconstructionQa), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsReconstructionQa::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsReconstructionQa) );
      instance.SetNew(&new_CbmStsReconstructionQa);
      instance.SetNewArray(&newArray_CbmStsReconstructionQa);
      instance.SetDelete(&delete_CbmStsReconstructionQa);
      instance.SetDeleteArray(&deleteArray_CbmStsReconstructionQa);
      instance.SetDestructor(&destruct_CbmStsReconstructionQa);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsReconstructionQa*)
   {
      return GenerateInitInstanceLocal((::CbmStsReconstructionQa*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsReconstructionQa*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmBmnStsDigitize(void *p = nullptr);
   static void *newArray_CbmBmnStsDigitize(Long_t size, void *p);
   static void delete_CbmBmnStsDigitize(void *p);
   static void deleteArray_CbmBmnStsDigitize(void *p);
   static void destruct_CbmBmnStsDigitize(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmBmnStsDigitize*)
   {
      ::CbmBmnStsDigitize *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmBmnStsDigitize >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmBmnStsDigitize", ::CbmBmnStsDigitize::Class_Version(), "CbmBmnStsDigitize.h", 45,
                  typeid(::CbmBmnStsDigitize), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmBmnStsDigitize::Dictionary, isa_proxy, 4,
                  sizeof(::CbmBmnStsDigitize) );
      instance.SetNew(&new_CbmBmnStsDigitize);
      instance.SetNewArray(&newArray_CbmBmnStsDigitize);
      instance.SetDelete(&delete_CbmBmnStsDigitize);
      instance.SetDeleteArray(&deleteArray_CbmBmnStsDigitize);
      instance.SetDestructor(&destruct_CbmBmnStsDigitize);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmBmnStsDigitize*)
   {
      return GenerateInitInstanceLocal((::CbmBmnStsDigitize*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmBmnStsDigitize*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnGemFastDigitize(void *p = nullptr);
   static void *newArray_BmnGemFastDigitize(Long_t size, void *p);
   static void delete_BmnGemFastDigitize(void *p);
   static void deleteArray_BmnGemFastDigitize(void *p);
   static void destruct_BmnGemFastDigitize(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemFastDigitize*)
   {
      ::BmnGemFastDigitize *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemFastDigitize >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemFastDigitize", ::BmnGemFastDigitize::Class_Version(), "BmnGemFastDigitize.h", 29,
                  typeid(::BmnGemFastDigitize), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemFastDigitize::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemFastDigitize) );
      instance.SetNew(&new_BmnGemFastDigitize);
      instance.SetNewArray(&newArray_BmnGemFastDigitize);
      instance.SetDelete(&delete_BmnGemFastDigitize);
      instance.SetDeleteArray(&deleteArray_BmnGemFastDigitize);
      instance.SetDestructor(&destruct_BmnGemFastDigitize);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemFastDigitize*)
   {
      return GenerateInitInstanceLocal((::BmnGemFastDigitize*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemFastDigitize*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnToCbmHitConverter(void *p = nullptr);
   static void *newArray_BmnToCbmHitConverter(Long_t size, void *p);
   static void delete_BmnToCbmHitConverter(void *p);
   static void deleteArray_BmnToCbmHitConverter(void *p);
   static void destruct_BmnToCbmHitConverter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnToCbmHitConverter*)
   {
      ::BmnToCbmHitConverter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnToCbmHitConverter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnToCbmHitConverter", ::BmnToCbmHitConverter::Class_Version(), "BmnToCbmHitConverter.h", 19,
                  typeid(::BmnToCbmHitConverter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnToCbmHitConverter::Dictionary, isa_proxy, 4,
                  sizeof(::BmnToCbmHitConverter) );
      instance.SetNew(&new_BmnToCbmHitConverter);
      instance.SetNewArray(&newArray_BmnToCbmHitConverter);
      instance.SetDelete(&delete_BmnToCbmHitConverter);
      instance.SetDeleteArray(&deleteArray_BmnToCbmHitConverter);
      instance.SetDestructor(&destruct_BmnToCbmHitConverter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnToCbmHitConverter*)
   {
      return GenerateInitInstanceLocal((::BmnToCbmHitConverter*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnToCbmHitConverter*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnStsMatchTracks(void *p = nullptr);
   static void *newArray_BmnStsMatchTracks(Long_t size, void *p);
   static void delete_BmnStsMatchTracks(void *p);
   static void deleteArray_BmnStsMatchTracks(void *p);
   static void destruct_BmnStsMatchTracks(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnStsMatchTracks*)
   {
      ::BmnStsMatchTracks *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnStsMatchTracks >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnStsMatchTracks", ::BmnStsMatchTracks::Class_Version(), "BmnStsMatchTracks.h", 33,
                  typeid(::BmnStsMatchTracks), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnStsMatchTracks::Dictionary, isa_proxy, 4,
                  sizeof(::BmnStsMatchTracks) );
      instance.SetNew(&new_BmnStsMatchTracks);
      instance.SetNewArray(&newArray_BmnStsMatchTracks);
      instance.SetDelete(&delete_BmnStsMatchTracks);
      instance.SetDeleteArray(&deleteArray_BmnStsMatchTracks);
      instance.SetDestructor(&destruct_BmnStsMatchTracks);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnStsMatchTracks*)
   {
      return GenerateInitInstanceLocal((::BmnStsMatchTracks*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnStsMatchTracks*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr CbmStsDetectorId::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsDetectorId::Class_Name()
{
   return "CbmStsDetectorId";
}

//______________________________________________________________________________
const char *CbmStsDetectorId::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDetectorId*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsDetectorId::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDetectorId*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsDetectorId::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDetectorId*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsDetectorId::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDetectorId*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsDigi::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsDigi::Class_Name()
{
   return "CbmStsDigi";
}

//______________________________________________________________________________
const char *CbmStsDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigi*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigi*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigi*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigi*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsDigiMatch::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsDigiMatch::Class_Name()
{
   return "CbmStsDigiMatch";
}

//______________________________________________________________________________
const char *CbmStsDigiMatch::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigiMatch*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsDigiMatch::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigiMatch*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsDigiMatch::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigiMatch*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsDigiMatch::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigiMatch*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsDigiLight::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsDigiLight::Class_Name()
{
   return "CbmStsDigiLight";
}

//______________________________________________________________________________
const char *CbmStsDigiLight::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigiLight*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsDigiLight::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigiLight*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsDigiLight::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigiLight*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsDigiLight::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigiLight*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsHit::Class_Name()
{
   return "CbmStsHit";
}

//______________________________________________________________________________
const char *CbmStsHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsCluster::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsCluster::Class_Name()
{
   return "CbmStsCluster";
}

//______________________________________________________________________________
const char *CbmStsCluster::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsCluster*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsCluster::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsCluster*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsCluster::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsCluster*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsCluster::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsCluster*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmGeoSts::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmGeoSts::Class_Name()
{
   return "CbmGeoSts";
}

//______________________________________________________________________________
const char *CbmGeoSts::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmGeoSts*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmGeoSts::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmGeoSts*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmGeoSts::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmGeoSts*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmGeoSts::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmGeoSts*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmGeoStsPar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmGeoStsPar::Class_Name()
{
   return "CbmGeoStsPar";
}

//______________________________________________________________________________
const char *CbmGeoStsPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmGeoStsPar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmGeoStsPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmGeoStsPar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmGeoStsPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmGeoStsPar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmGeoStsPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmGeoStsPar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmSts::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmSts::Class_Name()
{
   return "CbmSts";
}

//______________________________________________________________________________
const char *CbmSts::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmSts*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmSts::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmSts*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmSts::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmSts*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmSts::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmSts*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsContFact::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsContFact::Class_Name()
{
   return "CbmStsContFact";
}

//______________________________________________________________________________
const char *CbmStsContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsContFact*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsContFact*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsContFact*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsContFact*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsDigiPar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsDigiPar::Class_Name()
{
   return "CbmStsDigiPar";
}

//______________________________________________________________________________
const char *CbmStsDigiPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigiPar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsDigiPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigiPar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsDigiPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigiPar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsDigiPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigiPar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsDigiScheme::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsDigiScheme::Class_Name()
{
   return "CbmStsDigiScheme";
}

//______________________________________________________________________________
const char *CbmStsDigiScheme::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigiScheme*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsDigiScheme::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigiScheme*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsDigiScheme::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigiScheme*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsDigiScheme::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigiScheme*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsDigitize::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsDigitize::Class_Name()
{
   return "CbmStsDigitize";
}

//______________________________________________________________________________
const char *CbmStsDigitize::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigitize*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsDigitize::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigitize*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsDigitize::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigitize*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsDigitize::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigitize*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsClusterFinder::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsClusterFinder::Class_Name()
{
   return "CbmStsClusterFinder";
}

//______________________________________________________________________________
const char *CbmStsClusterFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsClusterFinder*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsClusterFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsClusterFinder*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsClusterFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsClusterFinder*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsClusterFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsClusterFinder*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsFindHits::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsFindHits::Class_Name()
{
   return "CbmStsFindHits";
}

//______________________________________________________________________________
const char *CbmStsFindHits::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsFindHits*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsFindHits::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsFindHits*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsFindHits::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsFindHits*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsFindHits::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsFindHits*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsFitTracks::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsFitTracks::Class_Name()
{
   return "CbmStsFitTracks";
}

//______________________________________________________________________________
const char *CbmStsFitTracks::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsFitTracks*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsFitTracks::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsFitTracks*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsFitTracks::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsFitTracks*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsFitTracks::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsFitTracks*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsMatchHits::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsMatchHits::Class_Name()
{
   return "CbmStsMatchHits";
}

//______________________________________________________________________________
const char *CbmStsMatchHits::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsMatchHits*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsMatchHits::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsMatchHits*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsMatchHits::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsMatchHits*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsMatchHits::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsMatchHits*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsMatchTracks::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsMatchTracks::Class_Name()
{
   return "CbmStsMatchTracks";
}

//______________________________________________________________________________
const char *CbmStsMatchTracks::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsMatchTracks*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsMatchTracks::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsMatchTracks*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsMatchTracks::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsMatchTracks*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsMatchTracks::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsMatchTracks*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsParAsciiFileIo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsParAsciiFileIo::Class_Name()
{
   return "CbmStsParAsciiFileIo";
}

//______________________________________________________________________________
const char *CbmStsParAsciiFileIo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsParAsciiFileIo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsParAsciiFileIo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsParAsciiFileIo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsParAsciiFileIo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsParAsciiFileIo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsParAsciiFileIo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsParAsciiFileIo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsParRootFileIo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsParRootFileIo::Class_Name()
{
   return "CbmStsParRootFileIo";
}

//______________________________________________________________________________
const char *CbmStsParRootFileIo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsParRootFileIo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsParRootFileIo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsParRootFileIo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsParRootFileIo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsParRootFileIo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsParRootFileIo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsParRootFileIo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsRadTool::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsRadTool::Class_Name()
{
   return "CbmStsRadTool";
}

//______________________________________________________________________________
const char *CbmStsRadTool::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsRadTool*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsRadTool::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsRadTool*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsRadTool::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsRadTool*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsRadTool::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsRadTool*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsSensor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsSensor::Class_Name()
{
   return "CbmStsSensor";
}

//______________________________________________________________________________
const char *CbmStsSensor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsSensor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsSensor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsSensor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsSensor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsSensor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsSensor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsSensor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsSensorDigiPar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsSensorDigiPar::Class_Name()
{
   return "CbmStsSensorDigiPar";
}

//______________________________________________________________________________
const char *CbmStsSensorDigiPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsSensorDigiPar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsSensorDigiPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsSensorDigiPar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsSensorDigiPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsSensorDigiPar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsSensorDigiPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsSensorDigiPar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsSector::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsSector::Class_Name()
{
   return "CbmStsSector";
}

//______________________________________________________________________________
const char *CbmStsSector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsSector*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsSector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsSector*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsSector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsSector*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsSector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsSector*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsSectorDigiPar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsSectorDigiPar::Class_Name()
{
   return "CbmStsSectorDigiPar";
}

//______________________________________________________________________________
const char *CbmStsSectorDigiPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsSectorDigiPar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsSectorDigiPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsSectorDigiPar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsSectorDigiPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsSectorDigiPar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsSectorDigiPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsSectorDigiPar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsStation::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsStation::Class_Name()
{
   return "CbmStsStation";
}

//______________________________________________________________________________
const char *CbmStsStation::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsStation*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsStation::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsStation*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsStation::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsStation*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsStation::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsStation*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsStationDigiPar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsStationDigiPar::Class_Name()
{
   return "CbmStsStationDigiPar";
}

//______________________________________________________________________________
const char *CbmStsStationDigiPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsStationDigiPar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsStationDigiPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsStationDigiPar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsStationDigiPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsStationDigiPar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsStationDigiPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsStationDigiPar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsTrackFinderIdeal::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsTrackFinderIdeal::Class_Name()
{
   return "CbmStsTrackFinderIdeal";
}

//______________________________________________________________________________
const char *CbmStsTrackFinderIdeal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsTrackFinderIdeal*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsTrackFinderIdeal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsTrackFinderIdeal*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsTrackFinderIdeal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsTrackFinderIdeal*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsTrackFinderIdeal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsTrackFinderIdeal*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsTrackFitterIdeal::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsTrackFitterIdeal::Class_Name()
{
   return "CbmStsTrackFitterIdeal";
}

//______________________________________________________________________________
const char *CbmStsTrackFitterIdeal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsTrackFitterIdeal*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsTrackFitterIdeal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsTrackFitterIdeal*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsTrackFitterIdeal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsTrackFitterIdeal*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsTrackFitterIdeal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsTrackFitterIdeal*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsSimulationQa::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsSimulationQa::Class_Name()
{
   return "CbmStsSimulationQa";
}

//______________________________________________________________________________
const char *CbmStsSimulationQa::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsSimulationQa*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsSimulationQa::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsSimulationQa*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsSimulationQa::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsSimulationQa*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsSimulationQa::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsSimulationQa*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsFindHitsQa::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsFindHitsQa::Class_Name()
{
   return "CbmStsFindHitsQa";
}

//______________________________________________________________________________
const char *CbmStsFindHitsQa::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsFindHitsQa*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsFindHitsQa::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsFindHitsQa*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsFindHitsQa::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsFindHitsQa*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsFindHitsQa::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsFindHitsQa*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsReconstructionQa::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsReconstructionQa::Class_Name()
{
   return "CbmStsReconstructionQa";
}

//______________________________________________________________________________
const char *CbmStsReconstructionQa::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsReconstructionQa*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsReconstructionQa::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsReconstructionQa*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsReconstructionQa::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsReconstructionQa*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsReconstructionQa::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsReconstructionQa*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmBmnStsDigitize::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmBmnStsDigitize::Class_Name()
{
   return "CbmBmnStsDigitize";
}

//______________________________________________________________________________
const char *CbmBmnStsDigitize::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmBmnStsDigitize*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmBmnStsDigitize::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmBmnStsDigitize*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmBmnStsDigitize::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmBmnStsDigitize*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmBmnStsDigitize::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmBmnStsDigitize*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemFastDigitize::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemFastDigitize::Class_Name()
{
   return "BmnGemFastDigitize";
}

//______________________________________________________________________________
const char *BmnGemFastDigitize::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemFastDigitize*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemFastDigitize::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemFastDigitize*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemFastDigitize::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemFastDigitize*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemFastDigitize::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemFastDigitize*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnToCbmHitConverter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnToCbmHitConverter::Class_Name()
{
   return "BmnToCbmHitConverter";
}

//______________________________________________________________________________
const char *BmnToCbmHitConverter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnToCbmHitConverter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnToCbmHitConverter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnToCbmHitConverter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnToCbmHitConverter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnToCbmHitConverter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnToCbmHitConverter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnToCbmHitConverter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnStsMatchTracks::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnStsMatchTracks::Class_Name()
{
   return "BmnStsMatchTracks";
}

//______________________________________________________________________________
const char *BmnStsMatchTracks::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnStsMatchTracks*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnStsMatchTracks::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnStsMatchTracks*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnStsMatchTracks::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnStsMatchTracks*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnStsMatchTracks::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnStsMatchTracks*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void CbmStsDetectorId::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsDetectorId.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsDetectorId::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsDetectorId::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsDetectorId(void *p) {
      return  p ? new(p) ::CbmStsDetectorId : new ::CbmStsDetectorId;
   }
   static void *newArray_CbmStsDetectorId(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsDetectorId[nElements] : new ::CbmStsDetectorId[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsDetectorId(void *p) {
      delete ((::CbmStsDetectorId*)p);
   }
   static void deleteArray_CbmStsDetectorId(void *p) {
      delete [] ((::CbmStsDetectorId*)p);
   }
   static void destruct_CbmStsDetectorId(void *p) {
      typedef ::CbmStsDetectorId current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsDetectorId

//______________________________________________________________________________
void CbmStsDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsDigi(void *p) {
      return  p ? new(p) ::CbmStsDigi : new ::CbmStsDigi;
   }
   static void *newArray_CbmStsDigi(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsDigi[nElements] : new ::CbmStsDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsDigi(void *p) {
      delete ((::CbmStsDigi*)p);
   }
   static void deleteArray_CbmStsDigi(void *p) {
      delete [] ((::CbmStsDigi*)p);
   }
   static void destruct_CbmStsDigi(void *p) {
      typedef ::CbmStsDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsDigi

//______________________________________________________________________________
void CbmStsDigiMatch::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsDigiMatch.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsDigiMatch::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsDigiMatch::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsDigiMatch(void *p) {
      return  p ? new(p) ::CbmStsDigiMatch : new ::CbmStsDigiMatch;
   }
   static void *newArray_CbmStsDigiMatch(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsDigiMatch[nElements] : new ::CbmStsDigiMatch[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsDigiMatch(void *p) {
      delete ((::CbmStsDigiMatch*)p);
   }
   static void deleteArray_CbmStsDigiMatch(void *p) {
      delete [] ((::CbmStsDigiMatch*)p);
   }
   static void destruct_CbmStsDigiMatch(void *p) {
      typedef ::CbmStsDigiMatch current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsDigiMatch

//______________________________________________________________________________
void CbmStsDigiLight::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsDigiLight.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsDigiLight::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsDigiLight::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsDigiLight(void *p) {
      return  p ? new(p) ::CbmStsDigiLight : new ::CbmStsDigiLight;
   }
   static void *newArray_CbmStsDigiLight(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsDigiLight[nElements] : new ::CbmStsDigiLight[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsDigiLight(void *p) {
      delete ((::CbmStsDigiLight*)p);
   }
   static void deleteArray_CbmStsDigiLight(void *p) {
      delete [] ((::CbmStsDigiLight*)p);
   }
   static void destruct_CbmStsDigiLight(void *p) {
      typedef ::CbmStsDigiLight current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsDigiLight

//______________________________________________________________________________
void CbmStsHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsHit(void *p) {
      return  p ? new(p) ::CbmStsHit : new ::CbmStsHit;
   }
   static void *newArray_CbmStsHit(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsHit[nElements] : new ::CbmStsHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsHit(void *p) {
      delete ((::CbmStsHit*)p);
   }
   static void deleteArray_CbmStsHit(void *p) {
      delete [] ((::CbmStsHit*)p);
   }
   static void destruct_CbmStsHit(void *p) {
      typedef ::CbmStsHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsHit

//______________________________________________________________________________
void CbmStsCluster::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsCluster.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsCluster::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsCluster::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsCluster(void *p) {
      return  p ? new(p) ::CbmStsCluster : new ::CbmStsCluster;
   }
   static void *newArray_CbmStsCluster(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsCluster[nElements] : new ::CbmStsCluster[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsCluster(void *p) {
      delete ((::CbmStsCluster*)p);
   }
   static void deleteArray_CbmStsCluster(void *p) {
      delete [] ((::CbmStsCluster*)p);
   }
   static void destruct_CbmStsCluster(void *p) {
      typedef ::CbmStsCluster current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsCluster

//______________________________________________________________________________
void CbmGeoSts::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmGeoSts.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmGeoSts::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmGeoSts::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmGeoSts(void *p) {
      return  p ? new(p) ::CbmGeoSts : new ::CbmGeoSts;
   }
   static void *newArray_CbmGeoSts(Long_t nElements, void *p) {
      return p ? new(p) ::CbmGeoSts[nElements] : new ::CbmGeoSts[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmGeoSts(void *p) {
      delete ((::CbmGeoSts*)p);
   }
   static void deleteArray_CbmGeoSts(void *p) {
      delete [] ((::CbmGeoSts*)p);
   }
   static void destruct_CbmGeoSts(void *p) {
      typedef ::CbmGeoSts current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmGeoSts

//______________________________________________________________________________
void CbmGeoStsPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmGeoStsPar.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairParGenericSet::Streamer(R__b);
      R__b >> fGeoSensNodes;
      R__b >> fGeoPassNodes;
      R__b.CheckByteCount(R__s, R__c, CbmGeoStsPar::IsA());
   } else {
      R__c = R__b.WriteVersion(CbmGeoStsPar::IsA(), kTRUE);
      FairParGenericSet::Streamer(R__b);
      R__b << fGeoSensNodes;
      R__b << fGeoPassNodes;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmGeoStsPar(void *p) {
      return  p ? new(p) ::CbmGeoStsPar : new ::CbmGeoStsPar;
   }
   static void *newArray_CbmGeoStsPar(Long_t nElements, void *p) {
      return p ? new(p) ::CbmGeoStsPar[nElements] : new ::CbmGeoStsPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmGeoStsPar(void *p) {
      delete ((::CbmGeoStsPar*)p);
   }
   static void deleteArray_CbmGeoStsPar(void *p) {
      delete [] ((::CbmGeoStsPar*)p);
   }
   static void destruct_CbmGeoStsPar(void *p) {
      typedef ::CbmGeoStsPar current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CbmGeoStsPar(TBuffer &buf, void *obj) {
      ((::CbmGeoStsPar*)obj)->::CbmGeoStsPar::Streamer(buf);
   }
} // end of namespace ROOT for class ::CbmGeoStsPar

//______________________________________________________________________________
void CbmSts::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmSts.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmSts::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmSts::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmSts(void *p) {
      return  p ? new(p) ::CbmSts : new ::CbmSts;
   }
   static void *newArray_CbmSts(Long_t nElements, void *p) {
      return p ? new(p) ::CbmSts[nElements] : new ::CbmSts[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmSts(void *p) {
      delete ((::CbmSts*)p);
   }
   static void deleteArray_CbmSts(void *p) {
      delete [] ((::CbmSts*)p);
   }
   static void destruct_CbmSts(void *p) {
      typedef ::CbmSts current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmSts

//______________________________________________________________________________
void CbmStsContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsContFact.

   FairContFact::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsContFact(void *p) {
      return  p ? new(p) ::CbmStsContFact : new ::CbmStsContFact;
   }
   static void *newArray_CbmStsContFact(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsContFact[nElements] : new ::CbmStsContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsContFact(void *p) {
      delete ((::CbmStsContFact*)p);
   }
   static void deleteArray_CbmStsContFact(void *p) {
      delete [] ((::CbmStsContFact*)p);
   }
   static void destruct_CbmStsContFact(void *p) {
      typedef ::CbmStsContFact current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CbmStsContFact(TBuffer &buf, void *obj) {
      ((::CbmStsContFact*)obj)->::CbmStsContFact::Streamer(buf);
   }
} // end of namespace ROOT for class ::CbmStsContFact

//______________________________________________________________________________
void CbmStsDigiPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsDigiPar.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairParSet::Streamer(R__b);
      R__b >> fStations;
      R__b.CheckByteCount(R__s, R__c, CbmStsDigiPar::IsA());
   } else {
      R__c = R__b.WriteVersion(CbmStsDigiPar::IsA(), kTRUE);
      FairParSet::Streamer(R__b);
      R__b << fStations;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsDigiPar(void *p) {
      return  p ? new(p) ::CbmStsDigiPar : new ::CbmStsDigiPar;
   }
   static void *newArray_CbmStsDigiPar(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsDigiPar[nElements] : new ::CbmStsDigiPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsDigiPar(void *p) {
      delete ((::CbmStsDigiPar*)p);
   }
   static void deleteArray_CbmStsDigiPar(void *p) {
      delete [] ((::CbmStsDigiPar*)p);
   }
   static void destruct_CbmStsDigiPar(void *p) {
      typedef ::CbmStsDigiPar current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CbmStsDigiPar(TBuffer &buf, void *obj) {
      ((::CbmStsDigiPar*)obj)->::CbmStsDigiPar::Streamer(buf);
   }
} // end of namespace ROOT for class ::CbmStsDigiPar

//______________________________________________________________________________
void CbmStsDigiScheme::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsDigiScheme.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsDigiScheme::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsDigiScheme::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_CbmStsDigiScheme(void *p) {
      delete ((::CbmStsDigiScheme*)p);
   }
   static void deleteArray_CbmStsDigiScheme(void *p) {
      delete [] ((::CbmStsDigiScheme*)p);
   }
   static void destruct_CbmStsDigiScheme(void *p) {
      typedef ::CbmStsDigiScheme current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsDigiScheme

//______________________________________________________________________________
void CbmStsDigitize::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsDigitize.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsDigitize::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsDigitize::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsDigitize(void *p) {
      return  p ? new(p) ::CbmStsDigitize : new ::CbmStsDigitize;
   }
   static void *newArray_CbmStsDigitize(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsDigitize[nElements] : new ::CbmStsDigitize[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsDigitize(void *p) {
      delete ((::CbmStsDigitize*)p);
   }
   static void deleteArray_CbmStsDigitize(void *p) {
      delete [] ((::CbmStsDigitize*)p);
   }
   static void destruct_CbmStsDigitize(void *p) {
      typedef ::CbmStsDigitize current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsDigitize

//______________________________________________________________________________
void CbmStsClusterFinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsClusterFinder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsClusterFinder::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsClusterFinder::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsClusterFinder(void *p) {
      return  p ? new(p) ::CbmStsClusterFinder : new ::CbmStsClusterFinder;
   }
   static void *newArray_CbmStsClusterFinder(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsClusterFinder[nElements] : new ::CbmStsClusterFinder[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsClusterFinder(void *p) {
      delete ((::CbmStsClusterFinder*)p);
   }
   static void deleteArray_CbmStsClusterFinder(void *p) {
      delete [] ((::CbmStsClusterFinder*)p);
   }
   static void destruct_CbmStsClusterFinder(void *p) {
      typedef ::CbmStsClusterFinder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsClusterFinder

//______________________________________________________________________________
void CbmStsFindHits::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsFindHits.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsFindHits::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsFindHits::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsFindHits(void *p) {
      return  p ? new(p) ::CbmStsFindHits : new ::CbmStsFindHits;
   }
   static void *newArray_CbmStsFindHits(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsFindHits[nElements] : new ::CbmStsFindHits[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsFindHits(void *p) {
      delete ((::CbmStsFindHits*)p);
   }
   static void deleteArray_CbmStsFindHits(void *p) {
      delete [] ((::CbmStsFindHits*)p);
   }
   static void destruct_CbmStsFindHits(void *p) {
      typedef ::CbmStsFindHits current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsFindHits

//______________________________________________________________________________
void CbmStsFitTracks::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsFitTracks.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsFitTracks::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsFitTracks::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsFitTracks(void *p) {
      return  p ? new(p) ::CbmStsFitTracks : new ::CbmStsFitTracks;
   }
   static void *newArray_CbmStsFitTracks(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsFitTracks[nElements] : new ::CbmStsFitTracks[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsFitTracks(void *p) {
      delete ((::CbmStsFitTracks*)p);
   }
   static void deleteArray_CbmStsFitTracks(void *p) {
      delete [] ((::CbmStsFitTracks*)p);
   }
   static void destruct_CbmStsFitTracks(void *p) {
      typedef ::CbmStsFitTracks current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsFitTracks

//______________________________________________________________________________
void CbmStsMatchHits::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsMatchHits.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsMatchHits::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsMatchHits::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsMatchHits(void *p) {
      return  p ? new(p) ::CbmStsMatchHits : new ::CbmStsMatchHits;
   }
   static void *newArray_CbmStsMatchHits(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsMatchHits[nElements] : new ::CbmStsMatchHits[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsMatchHits(void *p) {
      delete ((::CbmStsMatchHits*)p);
   }
   static void deleteArray_CbmStsMatchHits(void *p) {
      delete [] ((::CbmStsMatchHits*)p);
   }
   static void destruct_CbmStsMatchHits(void *p) {
      typedef ::CbmStsMatchHits current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsMatchHits

//______________________________________________________________________________
void CbmStsMatchTracks::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsMatchTracks.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsMatchTracks::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsMatchTracks::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsMatchTracks(void *p) {
      return  p ? new(p) ::CbmStsMatchTracks : new ::CbmStsMatchTracks;
   }
   static void *newArray_CbmStsMatchTracks(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsMatchTracks[nElements] : new ::CbmStsMatchTracks[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsMatchTracks(void *p) {
      delete ((::CbmStsMatchTracks*)p);
   }
   static void deleteArray_CbmStsMatchTracks(void *p) {
      delete [] ((::CbmStsMatchTracks*)p);
   }
   static void destruct_CbmStsMatchTracks(void *p) {
      typedef ::CbmStsMatchTracks current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsMatchTracks

//______________________________________________________________________________
void CbmStsParAsciiFileIo::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsParAsciiFileIo.

   FairDetParAsciiFileIo::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_CbmStsParAsciiFileIo(void *p) {
      delete ((::CbmStsParAsciiFileIo*)p);
   }
   static void deleteArray_CbmStsParAsciiFileIo(void *p) {
      delete [] ((::CbmStsParAsciiFileIo*)p);
   }
   static void destruct_CbmStsParAsciiFileIo(void *p) {
      typedef ::CbmStsParAsciiFileIo current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CbmStsParAsciiFileIo(TBuffer &buf, void *obj) {
      ((::CbmStsParAsciiFileIo*)obj)->::CbmStsParAsciiFileIo::Streamer(buf);
   }
} // end of namespace ROOT for class ::CbmStsParAsciiFileIo

//______________________________________________________________________________
void CbmStsParRootFileIo::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsParRootFileIo.

   FairDetParRootFileIo::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_CbmStsParRootFileIo(void *p) {
      delete ((::CbmStsParRootFileIo*)p);
   }
   static void deleteArray_CbmStsParRootFileIo(void *p) {
      delete [] ((::CbmStsParRootFileIo*)p);
   }
   static void destruct_CbmStsParRootFileIo(void *p) {
      typedef ::CbmStsParRootFileIo current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CbmStsParRootFileIo(TBuffer &buf, void *obj) {
      ((::CbmStsParRootFileIo*)obj)->::CbmStsParRootFileIo::Streamer(buf);
   }
} // end of namespace ROOT for class ::CbmStsParRootFileIo

//______________________________________________________________________________
void CbmStsRadTool::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsRadTool.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      {
         map<Double_t,Double_t> &R__stl =  niel_neutron;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         for (R__i = 0; R__i < R__n; R__i++) {
            double R__t;
            R__b >> R__t;
            double R__t2;
            R__b >> R__t2;
            typedef double Value_t;
            std::pair<Value_t const, double > R__t3(R__t,R__t2);
            R__stl.insert(R__t3);
         }
      }
      {
         map<Double_t,Double_t> &R__stl =  niel_proton;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         for (R__i = 0; R__i < R__n; R__i++) {
            double R__t;
            R__b >> R__t;
            double R__t2;
            R__b >> R__t2;
            typedef double Value_t;
            std::pair<Value_t const, double > R__t3(R__t,R__t2);
            R__stl.insert(R__t3);
         }
      }
      {
         map<Double_t,Double_t> &R__stl =  niel_pion;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         for (R__i = 0; R__i < R__n; R__i++) {
            double R__t;
            R__b >> R__t;
            double R__t2;
            R__b >> R__t2;
            typedef double Value_t;
            std::pair<Value_t const, double > R__t3(R__t,R__t2);
            R__stl.insert(R__t3);
         }
      }
      {
         map<Double_t,Double_t> &R__stl =  niel_electron;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         for (R__i = 0; R__i < R__n; R__i++) {
            double R__t;
            R__b >> R__t;
            double R__t2;
            R__b >> R__t2;
            typedef double Value_t;
            std::pair<Value_t const, double > R__t3(R__t,R__t2);
            R__stl.insert(R__t3);
         }
      }
      R__b >> fIAlpha;
      R__b >> fEGap0;
      R__b >> fEGapAlpha;
      R__b >> fEGapBeta;
      R__b >> fNeff0;
      R__b >> fNeffC;
      R__b >> fNeffGc;
      R__b >> fEpsilon;
      R__b.CheckByteCount(R__s, R__c, CbmStsRadTool::IsA());
   } else {
      R__c = R__b.WriteVersion(CbmStsRadTool::IsA(), kTRUE);
      TObject::Streamer(R__b);
      {
         map<Double_t,Double_t> &R__stl =  niel_neutron;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            map<Double_t,Double_t>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << ((*R__k).first );
            R__b << ((*R__k).second);
            }
         }
      }
      {
         map<Double_t,Double_t> &R__stl =  niel_proton;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            map<Double_t,Double_t>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << ((*R__k).first );
            R__b << ((*R__k).second);
            }
         }
      }
      {
         map<Double_t,Double_t> &R__stl =  niel_pion;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            map<Double_t,Double_t>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << ((*R__k).first );
            R__b << ((*R__k).second);
            }
         }
      }
      {
         map<Double_t,Double_t> &R__stl =  niel_electron;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            map<Double_t,Double_t>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << ((*R__k).first );
            R__b << ((*R__k).second);
            }
         }
      }
      R__b << fIAlpha;
      R__b << fEGap0;
      R__b << fEGapAlpha;
      R__b << fEGapBeta;
      R__b << fNeff0;
      R__b << fNeffC;
      R__b << fNeffGc;
      R__b << fEpsilon;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsRadTool(void *p) {
      return  p ? new(p) ::CbmStsRadTool : new ::CbmStsRadTool;
   }
   static void *newArray_CbmStsRadTool(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsRadTool[nElements] : new ::CbmStsRadTool[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsRadTool(void *p) {
      delete ((::CbmStsRadTool*)p);
   }
   static void deleteArray_CbmStsRadTool(void *p) {
      delete [] ((::CbmStsRadTool*)p);
   }
   static void destruct_CbmStsRadTool(void *p) {
      typedef ::CbmStsRadTool current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CbmStsRadTool(TBuffer &buf, void *obj) {
      ((::CbmStsRadTool*)obj)->::CbmStsRadTool::Streamer(buf);
   }
} // end of namespace ROOT for class ::CbmStsRadTool

//______________________________________________________________________________
void CbmStsSensor::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsSensor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsSensor::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsSensor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsSensor(void *p) {
      return  p ? new(p) ::CbmStsSensor : new ::CbmStsSensor;
   }
   static void *newArray_CbmStsSensor(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsSensor[nElements] : new ::CbmStsSensor[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsSensor(void *p) {
      delete ((::CbmStsSensor*)p);
   }
   static void deleteArray_CbmStsSensor(void *p) {
      delete [] ((::CbmStsSensor*)p);
   }
   static void destruct_CbmStsSensor(void *p) {
      typedef ::CbmStsSensor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsSensor

//______________________________________________________________________________
void CbmStsSensorDigiPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsSensorDigiPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsSensorDigiPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsSensorDigiPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsSensorDigiPar(void *p) {
      return  p ? new(p) ::CbmStsSensorDigiPar : new ::CbmStsSensorDigiPar;
   }
   static void *newArray_CbmStsSensorDigiPar(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsSensorDigiPar[nElements] : new ::CbmStsSensorDigiPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsSensorDigiPar(void *p) {
      delete ((::CbmStsSensorDigiPar*)p);
   }
   static void deleteArray_CbmStsSensorDigiPar(void *p) {
      delete [] ((::CbmStsSensorDigiPar*)p);
   }
   static void destruct_CbmStsSensorDigiPar(void *p) {
      typedef ::CbmStsSensorDigiPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsSensorDigiPar

//______________________________________________________________________________
void CbmStsSector::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsSector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsSector::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsSector::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsSector(void *p) {
      return  p ? new(p) ::CbmStsSector : new ::CbmStsSector;
   }
   static void *newArray_CbmStsSector(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsSector[nElements] : new ::CbmStsSector[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsSector(void *p) {
      delete ((::CbmStsSector*)p);
   }
   static void deleteArray_CbmStsSector(void *p) {
      delete [] ((::CbmStsSector*)p);
   }
   static void destruct_CbmStsSector(void *p) {
      typedef ::CbmStsSector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsSector

//______________________________________________________________________________
void CbmStsSectorDigiPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsSectorDigiPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsSectorDigiPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsSectorDigiPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsSectorDigiPar(void *p) {
      return  p ? new(p) ::CbmStsSectorDigiPar : new ::CbmStsSectorDigiPar;
   }
   static void *newArray_CbmStsSectorDigiPar(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsSectorDigiPar[nElements] : new ::CbmStsSectorDigiPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsSectorDigiPar(void *p) {
      delete ((::CbmStsSectorDigiPar*)p);
   }
   static void deleteArray_CbmStsSectorDigiPar(void *p) {
      delete [] ((::CbmStsSectorDigiPar*)p);
   }
   static void destruct_CbmStsSectorDigiPar(void *p) {
      typedef ::CbmStsSectorDigiPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsSectorDigiPar

//______________________________________________________________________________
void CbmStsStation::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsStation.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsStation::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsStation::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsStation(void *p) {
      return  p ? new(p) ::CbmStsStation : new ::CbmStsStation;
   }
   static void *newArray_CbmStsStation(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsStation[nElements] : new ::CbmStsStation[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsStation(void *p) {
      delete ((::CbmStsStation*)p);
   }
   static void deleteArray_CbmStsStation(void *p) {
      delete [] ((::CbmStsStation*)p);
   }
   static void destruct_CbmStsStation(void *p) {
      typedef ::CbmStsStation current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsStation

//______________________________________________________________________________
void CbmStsStationDigiPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsStationDigiPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsStationDigiPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsStationDigiPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsStationDigiPar(void *p) {
      return  p ? new(p) ::CbmStsStationDigiPar : new ::CbmStsStationDigiPar;
   }
   static void *newArray_CbmStsStationDigiPar(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsStationDigiPar[nElements] : new ::CbmStsStationDigiPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsStationDigiPar(void *p) {
      delete ((::CbmStsStationDigiPar*)p);
   }
   static void deleteArray_CbmStsStationDigiPar(void *p) {
      delete [] ((::CbmStsStationDigiPar*)p);
   }
   static void destruct_CbmStsStationDigiPar(void *p) {
      typedef ::CbmStsStationDigiPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsStationDigiPar

//______________________________________________________________________________
void CbmStsTrackFinderIdeal::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsTrackFinderIdeal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsTrackFinderIdeal::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsTrackFinderIdeal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsTrackFinderIdeal(void *p) {
      return  p ? new(p) ::CbmStsTrackFinderIdeal : new ::CbmStsTrackFinderIdeal;
   }
   static void *newArray_CbmStsTrackFinderIdeal(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsTrackFinderIdeal[nElements] : new ::CbmStsTrackFinderIdeal[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsTrackFinderIdeal(void *p) {
      delete ((::CbmStsTrackFinderIdeal*)p);
   }
   static void deleteArray_CbmStsTrackFinderIdeal(void *p) {
      delete [] ((::CbmStsTrackFinderIdeal*)p);
   }
   static void destruct_CbmStsTrackFinderIdeal(void *p) {
      typedef ::CbmStsTrackFinderIdeal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsTrackFinderIdeal

//______________________________________________________________________________
void CbmStsTrackFitterIdeal::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsTrackFitterIdeal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsTrackFitterIdeal::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsTrackFitterIdeal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsTrackFitterIdeal(void *p) {
      return  p ? new(p) ::CbmStsTrackFitterIdeal : new ::CbmStsTrackFitterIdeal;
   }
   static void *newArray_CbmStsTrackFitterIdeal(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsTrackFitterIdeal[nElements] : new ::CbmStsTrackFitterIdeal[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsTrackFitterIdeal(void *p) {
      delete ((::CbmStsTrackFitterIdeal*)p);
   }
   static void deleteArray_CbmStsTrackFitterIdeal(void *p) {
      delete [] ((::CbmStsTrackFitterIdeal*)p);
   }
   static void destruct_CbmStsTrackFitterIdeal(void *p) {
      typedef ::CbmStsTrackFitterIdeal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsTrackFitterIdeal

//______________________________________________________________________________
void CbmStsSimulationQa::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsSimulationQa.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsSimulationQa::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsSimulationQa::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsSimulationQa(void *p) {
      return  p ? new(p) ::CbmStsSimulationQa : new ::CbmStsSimulationQa;
   }
   static void *newArray_CbmStsSimulationQa(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsSimulationQa[nElements] : new ::CbmStsSimulationQa[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsSimulationQa(void *p) {
      delete ((::CbmStsSimulationQa*)p);
   }
   static void deleteArray_CbmStsSimulationQa(void *p) {
      delete [] ((::CbmStsSimulationQa*)p);
   }
   static void destruct_CbmStsSimulationQa(void *p) {
      typedef ::CbmStsSimulationQa current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsSimulationQa

//______________________________________________________________________________
void CbmStsFindHitsQa::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsFindHitsQa.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsFindHitsQa::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsFindHitsQa::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsFindHitsQa(void *p) {
      return  p ? new(p) ::CbmStsFindHitsQa : new ::CbmStsFindHitsQa;
   }
   static void *newArray_CbmStsFindHitsQa(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsFindHitsQa[nElements] : new ::CbmStsFindHitsQa[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsFindHitsQa(void *p) {
      delete ((::CbmStsFindHitsQa*)p);
   }
   static void deleteArray_CbmStsFindHitsQa(void *p) {
      delete [] ((::CbmStsFindHitsQa*)p);
   }
   static void destruct_CbmStsFindHitsQa(void *p) {
      typedef ::CbmStsFindHitsQa current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsFindHitsQa

//______________________________________________________________________________
void CbmStsReconstructionQa::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsReconstructionQa.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsReconstructionQa::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsReconstructionQa::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsReconstructionQa(void *p) {
      return  p ? new(p) ::CbmStsReconstructionQa : new ::CbmStsReconstructionQa;
   }
   static void *newArray_CbmStsReconstructionQa(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsReconstructionQa[nElements] : new ::CbmStsReconstructionQa[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsReconstructionQa(void *p) {
      delete ((::CbmStsReconstructionQa*)p);
   }
   static void deleteArray_CbmStsReconstructionQa(void *p) {
      delete [] ((::CbmStsReconstructionQa*)p);
   }
   static void destruct_CbmStsReconstructionQa(void *p) {
      typedef ::CbmStsReconstructionQa current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsReconstructionQa

//______________________________________________________________________________
void CbmBmnStsDigitize::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmBmnStsDigitize.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmBmnStsDigitize::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmBmnStsDigitize::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmBmnStsDigitize(void *p) {
      return  p ? new(p) ::CbmBmnStsDigitize : new ::CbmBmnStsDigitize;
   }
   static void *newArray_CbmBmnStsDigitize(Long_t nElements, void *p) {
      return p ? new(p) ::CbmBmnStsDigitize[nElements] : new ::CbmBmnStsDigitize[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmBmnStsDigitize(void *p) {
      delete ((::CbmBmnStsDigitize*)p);
   }
   static void deleteArray_CbmBmnStsDigitize(void *p) {
      delete [] ((::CbmBmnStsDigitize*)p);
   }
   static void destruct_CbmBmnStsDigitize(void *p) {
      typedef ::CbmBmnStsDigitize current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmBmnStsDigitize

//______________________________________________________________________________
void BmnGemFastDigitize::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemFastDigitize.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemFastDigitize::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemFastDigitize::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGemFastDigitize(void *p) {
      return  p ? new(p) ::BmnGemFastDigitize : new ::BmnGemFastDigitize;
   }
   static void *newArray_BmnGemFastDigitize(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGemFastDigitize[nElements] : new ::BmnGemFastDigitize[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGemFastDigitize(void *p) {
      delete ((::BmnGemFastDigitize*)p);
   }
   static void deleteArray_BmnGemFastDigitize(void *p) {
      delete [] ((::BmnGemFastDigitize*)p);
   }
   static void destruct_BmnGemFastDigitize(void *p) {
      typedef ::BmnGemFastDigitize current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemFastDigitize

//______________________________________________________________________________
void BmnToCbmHitConverter::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnToCbmHitConverter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnToCbmHitConverter::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnToCbmHitConverter::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnToCbmHitConverter(void *p) {
      return  p ? new(p) ::BmnToCbmHitConverter : new ::BmnToCbmHitConverter;
   }
   static void *newArray_BmnToCbmHitConverter(Long_t nElements, void *p) {
      return p ? new(p) ::BmnToCbmHitConverter[nElements] : new ::BmnToCbmHitConverter[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnToCbmHitConverter(void *p) {
      delete ((::BmnToCbmHitConverter*)p);
   }
   static void deleteArray_BmnToCbmHitConverter(void *p) {
      delete [] ((::BmnToCbmHitConverter*)p);
   }
   static void destruct_BmnToCbmHitConverter(void *p) {
      typedef ::BmnToCbmHitConverter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnToCbmHitConverter

//______________________________________________________________________________
void BmnStsMatchTracks::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnStsMatchTracks.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnStsMatchTracks::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnStsMatchTracks::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnStsMatchTracks(void *p) {
      return  p ? new(p) ::BmnStsMatchTracks : new ::BmnStsMatchTracks;
   }
   static void *newArray_BmnStsMatchTracks(Long_t nElements, void *p) {
      return p ? new(p) ::BmnStsMatchTracks[nElements] : new ::BmnStsMatchTracks[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnStsMatchTracks(void *p) {
      delete ((::BmnStsMatchTracks*)p);
   }
   static void deleteArray_BmnStsMatchTracks(void *p) {
      delete [] ((::BmnStsMatchTracks*)p);
   }
   static void destruct_BmnStsMatchTracks(void *p) {
      typedef ::BmnStsMatchTracks current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnStsMatchTracks

namespace ROOT {
   static TClass *setlEintgR_Dictionary();
   static void setlEintgR_TClassManip(TClass*);
   static void *new_setlEintgR(void *p = nullptr);
   static void *newArray_setlEintgR(Long_t size, void *p);
   static void delete_setlEintgR(void *p);
   static void deleteArray_setlEintgR(void *p);
   static void destruct_setlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const set<int>*)
   {
      set<int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(set<int>));
      static ::ROOT::TGenericClassInfo 
         instance("set<int>", -2, "set", 94,
                  typeid(set<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &setlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(set<int>) );
      instance.SetNew(&new_setlEintgR);
      instance.SetNewArray(&newArray_setlEintgR);
      instance.SetDelete(&delete_setlEintgR);
      instance.SetDeleteArray(&deleteArray_setlEintgR);
      instance.SetDestructor(&destruct_setlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< set<int> >()));

      ::ROOT::AddClassAlternate("set<int>","std::set<int, std::less<int>, std::allocator<int> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const set<int>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *setlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const set<int>*)nullptr)->GetClass();
      setlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void setlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_setlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) set<int> : new set<int>;
   }
   static void *newArray_setlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) set<int>[nElements] : new set<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_setlEintgR(void *p) {
      delete ((set<int>*)p);
   }
   static void deleteArray_setlEintgR(void *p) {
      delete [] ((set<int>*)p);
   }
   static void destruct_setlEintgR(void *p) {
      typedef set<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class set<int>

namespace ROOT {
   static TClass *maplEintcOsetlEintgRsPgR_Dictionary();
   static void maplEintcOsetlEintgRsPgR_TClassManip(TClass*);
   static void *new_maplEintcOsetlEintgRsPgR(void *p = nullptr);
   static void *newArray_maplEintcOsetlEintgRsPgR(Long_t size, void *p);
   static void delete_maplEintcOsetlEintgRsPgR(void *p);
   static void deleteArray_maplEintcOsetlEintgRsPgR(void *p);
   static void destruct_maplEintcOsetlEintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,set<int> >*)
   {
      map<int,set<int> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,set<int> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,set<int> >", -2, "map", 100,
                  typeid(map<int,set<int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOsetlEintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,set<int> >) );
      instance.SetNew(&new_maplEintcOsetlEintgRsPgR);
      instance.SetNewArray(&newArray_maplEintcOsetlEintgRsPgR);
      instance.SetDelete(&delete_maplEintcOsetlEintgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOsetlEintgRsPgR);
      instance.SetDestructor(&destruct_maplEintcOsetlEintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,set<int> > >()));

      ::ROOT::AddClassAlternate("map<int,set<int> >","std::map<int, std::set<int, std::less<int>, std::allocator<int> >, std::less<int>, std::allocator<std::pair<int const, std::set<int, std::less<int>, std::allocator<int> > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,set<int> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOsetlEintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,set<int> >*)nullptr)->GetClass();
      maplEintcOsetlEintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOsetlEintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOsetlEintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,set<int> > : new map<int,set<int> >;
   }
   static void *newArray_maplEintcOsetlEintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,set<int> >[nElements] : new map<int,set<int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOsetlEintgRsPgR(void *p) {
      delete ((map<int,set<int> >*)p);
   }
   static void deleteArray_maplEintcOsetlEintgRsPgR(void *p) {
      delete [] ((map<int,set<int> >*)p);
   }
   static void destruct_maplEintcOsetlEintgRsPgR(void *p) {
      typedef map<int,set<int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,set<int> >

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

namespace ROOT {
   static TClass *maplEdoublecOdoublegR_Dictionary();
   static void maplEdoublecOdoublegR_TClassManip(TClass*);
   static void *new_maplEdoublecOdoublegR(void *p = nullptr);
   static void *newArray_maplEdoublecOdoublegR(Long_t size, void *p);
   static void delete_maplEdoublecOdoublegR(void *p);
   static void deleteArray_maplEdoublecOdoublegR(void *p);
   static void destruct_maplEdoublecOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<double,double>*)
   {
      map<double,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<double,double>));
      static ::ROOT::TGenericClassInfo 
         instance("map<double,double>", -2, "map", 100,
                  typeid(map<double,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEdoublecOdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(map<double,double>) );
      instance.SetNew(&new_maplEdoublecOdoublegR);
      instance.SetNewArray(&newArray_maplEdoublecOdoublegR);
      instance.SetDelete(&delete_maplEdoublecOdoublegR);
      instance.SetDeleteArray(&deleteArray_maplEdoublecOdoublegR);
      instance.SetDestructor(&destruct_maplEdoublecOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<double,double> >()));

      ::ROOT::AddClassAlternate("map<double,double>","std::map<double, double, std::less<double>, std::allocator<std::pair<double const, double> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<double,double>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEdoublecOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<double,double>*)nullptr)->GetClass();
      maplEdoublecOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void maplEdoublecOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEdoublecOdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<double,double> : new map<double,double>;
   }
   static void *newArray_maplEdoublecOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<double,double>[nElements] : new map<double,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEdoublecOdoublegR(void *p) {
      delete ((map<double,double>*)p);
   }
   static void deleteArray_maplEdoublecOdoublegR(void *p) {
      delete [] ((map<double,double>*)p);
   }
   static void destruct_maplEdoublecOdoublegR(void *p) {
      typedef map<double,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<double,double>

namespace ROOT {
   static TClass *maplETStringcOintgR_Dictionary();
   static void maplETStringcOintgR_TClassManip(TClass*);
   static void *new_maplETStringcOintgR(void *p = nullptr);
   static void *newArray_maplETStringcOintgR(Long_t size, void *p);
   static void delete_maplETStringcOintgR(void *p);
   static void deleteArray_maplETStringcOintgR(void *p);
   static void destruct_maplETStringcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TString,int>*)
   {
      map<TString,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TString,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TString,int>", -2, "map", 100,
                  typeid(map<TString,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETStringcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TString,int>) );
      instance.SetNew(&new_maplETStringcOintgR);
      instance.SetNewArray(&newArray_maplETStringcOintgR);
      instance.SetDelete(&delete_maplETStringcOintgR);
      instance.SetDeleteArray(&deleteArray_maplETStringcOintgR);
      instance.SetDestructor(&destruct_maplETStringcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TString,int> >()));

      ::ROOT::AddClassAlternate("map<TString,int>","std::map<TString, int, std::less<TString>, std::allocator<std::pair<TString const, int> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TString,int>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETStringcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TString,int>*)nullptr)->GetClass();
      maplETStringcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETStringcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETStringcOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,int> : new map<TString,int>;
   }
   static void *newArray_maplETStringcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,int>[nElements] : new map<TString,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETStringcOintgR(void *p) {
      delete ((map<TString,int>*)p);
   }
   static void deleteArray_maplETStringcOintgR(void *p) {
      delete [] ((map<TString,int>*)p);
   }
   static void destruct_maplETStringcOintgR(void *p) {
      typedef map<TString,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TString,int>

namespace ROOT {
   static TClass *maplETStringcOCbmStsSensormUgR_Dictionary();
   static void maplETStringcOCbmStsSensormUgR_TClassManip(TClass*);
   static void *new_maplETStringcOCbmStsSensormUgR(void *p = nullptr);
   static void *newArray_maplETStringcOCbmStsSensormUgR(Long_t size, void *p);
   static void delete_maplETStringcOCbmStsSensormUgR(void *p);
   static void deleteArray_maplETStringcOCbmStsSensormUgR(void *p);
   static void destruct_maplETStringcOCbmStsSensormUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TString,CbmStsSensor*>*)
   {
      map<TString,CbmStsSensor*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TString,CbmStsSensor*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TString,CbmStsSensor*>", -2, "map", 100,
                  typeid(map<TString,CbmStsSensor*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETStringcOCbmStsSensormUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TString,CbmStsSensor*>) );
      instance.SetNew(&new_maplETStringcOCbmStsSensormUgR);
      instance.SetNewArray(&newArray_maplETStringcOCbmStsSensormUgR);
      instance.SetDelete(&delete_maplETStringcOCbmStsSensormUgR);
      instance.SetDeleteArray(&deleteArray_maplETStringcOCbmStsSensormUgR);
      instance.SetDestructor(&destruct_maplETStringcOCbmStsSensormUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TString,CbmStsSensor*> >()));

      ::ROOT::AddClassAlternate("map<TString,CbmStsSensor*>","std::map<TString, CbmStsSensor*, std::less<TString>, std::allocator<std::pair<TString const, CbmStsSensor*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TString,CbmStsSensor*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETStringcOCbmStsSensormUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TString,CbmStsSensor*>*)nullptr)->GetClass();
      maplETStringcOCbmStsSensormUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETStringcOCbmStsSensormUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETStringcOCbmStsSensormUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,CbmStsSensor*> : new map<TString,CbmStsSensor*>;
   }
   static void *newArray_maplETStringcOCbmStsSensormUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,CbmStsSensor*>[nElements] : new map<TString,CbmStsSensor*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETStringcOCbmStsSensormUgR(void *p) {
      delete ((map<TString,CbmStsSensor*>*)p);
   }
   static void deleteArray_maplETStringcOCbmStsSensormUgR(void *p) {
      delete [] ((map<TString,CbmStsSensor*>*)p);
   }
   static void destruct_maplETStringcOCbmStsSensormUgR(void *p) {
      typedef map<TString,CbmStsSensor*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TString,CbmStsSensor*>

namespace ROOT {
   static TClass *maplECbmStsSensormUcOsetlEintgRsPgR_Dictionary();
   static void maplECbmStsSensormUcOsetlEintgRsPgR_TClassManip(TClass*);
   static void *new_maplECbmStsSensormUcOsetlEintgRsPgR(void *p = nullptr);
   static void *newArray_maplECbmStsSensormUcOsetlEintgRsPgR(Long_t size, void *p);
   static void delete_maplECbmStsSensormUcOsetlEintgRsPgR(void *p);
   static void deleteArray_maplECbmStsSensormUcOsetlEintgRsPgR(void *p);
   static void destruct_maplECbmStsSensormUcOsetlEintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<CbmStsSensor*,set<int> >*)
   {
      map<CbmStsSensor*,set<int> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<CbmStsSensor*,set<int> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<CbmStsSensor*,set<int> >", -2, "map", 100,
                  typeid(map<CbmStsSensor*,set<int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplECbmStsSensormUcOsetlEintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<CbmStsSensor*,set<int> >) );
      instance.SetNew(&new_maplECbmStsSensormUcOsetlEintgRsPgR);
      instance.SetNewArray(&newArray_maplECbmStsSensormUcOsetlEintgRsPgR);
      instance.SetDelete(&delete_maplECbmStsSensormUcOsetlEintgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplECbmStsSensormUcOsetlEintgRsPgR);
      instance.SetDestructor(&destruct_maplECbmStsSensormUcOsetlEintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<CbmStsSensor*,set<int> > >()));

      ::ROOT::AddClassAlternate("map<CbmStsSensor*,set<int> >","std::map<CbmStsSensor*, std::set<int, std::less<int>, std::allocator<int> >, std::less<CbmStsSensor*>, std::allocator<std::pair<CbmStsSensor* const, std::set<int, std::less<int>, std::allocator<int> > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<CbmStsSensor*,set<int> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplECbmStsSensormUcOsetlEintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<CbmStsSensor*,set<int> >*)nullptr)->GetClass();
      maplECbmStsSensormUcOsetlEintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplECbmStsSensormUcOsetlEintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplECbmStsSensormUcOsetlEintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<CbmStsSensor*,set<int> > : new map<CbmStsSensor*,set<int> >;
   }
   static void *newArray_maplECbmStsSensormUcOsetlEintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<CbmStsSensor*,set<int> >[nElements] : new map<CbmStsSensor*,set<int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplECbmStsSensormUcOsetlEintgRsPgR(void *p) {
      delete ((map<CbmStsSensor*,set<int> >*)p);
   }
   static void deleteArray_maplECbmStsSensormUcOsetlEintgRsPgR(void *p) {
      delete [] ((map<CbmStsSensor*,set<int> >*)p);
   }
   static void destruct_maplECbmStsSensormUcOsetlEintgRsPgR(void *p) {
      typedef map<CbmStsSensor*,set<int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<CbmStsSensor*,set<int> >

namespace ROOT {
   static TClass *maplECbmStsSectormUcOsetlEintgRsPgR_Dictionary();
   static void maplECbmStsSectormUcOsetlEintgRsPgR_TClassManip(TClass*);
   static void *new_maplECbmStsSectormUcOsetlEintgRsPgR(void *p = nullptr);
   static void *newArray_maplECbmStsSectormUcOsetlEintgRsPgR(Long_t size, void *p);
   static void delete_maplECbmStsSectormUcOsetlEintgRsPgR(void *p);
   static void deleteArray_maplECbmStsSectormUcOsetlEintgRsPgR(void *p);
   static void destruct_maplECbmStsSectormUcOsetlEintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<CbmStsSector*,set<int> >*)
   {
      map<CbmStsSector*,set<int> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<CbmStsSector*,set<int> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<CbmStsSector*,set<int> >", -2, "map", 100,
                  typeid(map<CbmStsSector*,set<int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplECbmStsSectormUcOsetlEintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<CbmStsSector*,set<int> >) );
      instance.SetNew(&new_maplECbmStsSectormUcOsetlEintgRsPgR);
      instance.SetNewArray(&newArray_maplECbmStsSectormUcOsetlEintgRsPgR);
      instance.SetDelete(&delete_maplECbmStsSectormUcOsetlEintgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplECbmStsSectormUcOsetlEintgRsPgR);
      instance.SetDestructor(&destruct_maplECbmStsSectormUcOsetlEintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<CbmStsSector*,set<int> > >()));

      ::ROOT::AddClassAlternate("map<CbmStsSector*,set<int> >","std::map<CbmStsSector*, std::set<int, std::less<int>, std::allocator<int> >, std::less<CbmStsSector*>, std::allocator<std::pair<CbmStsSector* const, std::set<int, std::less<int>, std::allocator<int> > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<CbmStsSector*,set<int> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplECbmStsSectormUcOsetlEintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<CbmStsSector*,set<int> >*)nullptr)->GetClass();
      maplECbmStsSectormUcOsetlEintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplECbmStsSectormUcOsetlEintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplECbmStsSectormUcOsetlEintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<CbmStsSector*,set<int> > : new map<CbmStsSector*,set<int> >;
   }
   static void *newArray_maplECbmStsSectormUcOsetlEintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<CbmStsSector*,set<int> >[nElements] : new map<CbmStsSector*,set<int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplECbmStsSectormUcOsetlEintgRsPgR(void *p) {
      delete ((map<CbmStsSector*,set<int> >*)p);
   }
   static void deleteArray_maplECbmStsSectormUcOsetlEintgRsPgR(void *p) {
      delete [] ((map<CbmStsSector*,set<int> >*)p);
   }
   static void destruct_maplECbmStsSectormUcOsetlEintgRsPgR(void *p) {
      typedef map<CbmStsSector*,set<int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<CbmStsSector*,set<int> >

namespace ROOT {
   static TClass *maplECbmMCTrackmUcOsetlEintgRsPgR_Dictionary();
   static void maplECbmMCTrackmUcOsetlEintgRsPgR_TClassManip(TClass*);
   static void *new_maplECbmMCTrackmUcOsetlEintgRsPgR(void *p = nullptr);
   static void *newArray_maplECbmMCTrackmUcOsetlEintgRsPgR(Long_t size, void *p);
   static void delete_maplECbmMCTrackmUcOsetlEintgRsPgR(void *p);
   static void deleteArray_maplECbmMCTrackmUcOsetlEintgRsPgR(void *p);
   static void destruct_maplECbmMCTrackmUcOsetlEintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<CbmMCTrack*,set<int> >*)
   {
      map<CbmMCTrack*,set<int> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<CbmMCTrack*,set<int> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<CbmMCTrack*,set<int> >", -2, "map", 100,
                  typeid(map<CbmMCTrack*,set<int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplECbmMCTrackmUcOsetlEintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<CbmMCTrack*,set<int> >) );
      instance.SetNew(&new_maplECbmMCTrackmUcOsetlEintgRsPgR);
      instance.SetNewArray(&newArray_maplECbmMCTrackmUcOsetlEintgRsPgR);
      instance.SetDelete(&delete_maplECbmMCTrackmUcOsetlEintgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplECbmMCTrackmUcOsetlEintgRsPgR);
      instance.SetDestructor(&destruct_maplECbmMCTrackmUcOsetlEintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<CbmMCTrack*,set<int> > >()));

      ::ROOT::AddClassAlternate("map<CbmMCTrack*,set<int> >","std::map<CbmMCTrack*, std::set<int, std::less<int>, std::allocator<int> >, std::less<CbmMCTrack*>, std::allocator<std::pair<CbmMCTrack* const, std::set<int, std::less<int>, std::allocator<int> > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<CbmMCTrack*,set<int> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplECbmMCTrackmUcOsetlEintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<CbmMCTrack*,set<int> >*)nullptr)->GetClass();
      maplECbmMCTrackmUcOsetlEintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplECbmMCTrackmUcOsetlEintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplECbmMCTrackmUcOsetlEintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<CbmMCTrack*,set<int> > : new map<CbmMCTrack*,set<int> >;
   }
   static void *newArray_maplECbmMCTrackmUcOsetlEintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<CbmMCTrack*,set<int> >[nElements] : new map<CbmMCTrack*,set<int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplECbmMCTrackmUcOsetlEintgRsPgR(void *p) {
      delete ((map<CbmMCTrack*,set<int> >*)p);
   }
   static void deleteArray_maplECbmMCTrackmUcOsetlEintgRsPgR(void *p) {
      delete [] ((map<CbmMCTrack*,set<int> >*)p);
   }
   static void destruct_maplECbmMCTrackmUcOsetlEintgRsPgR(void *p) {
      typedef map<CbmMCTrack*,set<int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<CbmMCTrack*,set<int> >

namespace {
  void TriggerDictionaryInitialization_G__StsDict_Impl() {
    static const char* headers[] = {
"CbmStsDetectorId.h",
"CbmStsDigi.h",
"CbmStsDigiMatch.h",
"CbmStsDigiLight.h",
"CbmStsHit.h",
"CbmStsCluster.h",
"CbmGeoSts.h",
"CbmGeoStsPar.h",
"CbmSts.h",
"CbmStsContFact.h",
"CbmStsDigiPar.h",
"CbmStsDigiScheme.h",
"CbmStsDigitize.h",
"CbmStsClusterFinder.h",
"CbmStsFindHits.h",
"CbmStsFitTracks.h",
"CbmStsMatchHits.h",
"CbmStsMatchTracks.h",
"CbmStsParAsciiFileIo.h",
"CbmStsParRootFileIo.h",
"CbmStsRadTool.h",
"CbmStsSensor.h",
"CbmStsSensorDigiPar.h",
"CbmStsSector.h",
"CbmStsSectorDigiPar.h",
"CbmStsStation.h",
"CbmStsStationDigiPar.h",
"CbmStsTrackFinderIdeal.h",
"CbmStsTrackFitterIdeal.h",
"CbmStsSimulationQa.h",
"CbmStsFindHitsQa.h",
"CbmStsReconstructionQa.h",
"CbmBmnStsDigitize.h",
"BmnGemFastDigitize.h",
"BmnToCbmHitConverter.h",
"BmnStsMatchTracks.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/passive",
"/data/yaopeng/bmnroot_Yaopeng/base",
"/data/yaopeng/bmnroot_Yaopeng/base/data",
"/data/yaopeng/bmnroot_Yaopeng/base/raw",
"/data/yaopeng/bmnroot_Yaopeng/base/header",
"/data/yaopeng/bmnroot_Yaopeng/base/cbm",
"/data/yaopeng/bmnroot_Yaopeng/detectors/silicon",
"/data/yaopeng/bmnroot_Yaopeng/detectors/gem",
"/data/yaopeng/bmnroot_Yaopeng/detectors/sts",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/detectors/sts/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__StsDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$CbmStsDetectorId.h")))  CbmStsDetectorId;
class __attribute__((annotate("$clingAutoload$CbmStsDigi.h")))  CbmStsDigi;
class __attribute__((annotate("$clingAutoload$CbmStsDigiMatch.h")))  CbmStsDigiMatch;
class __attribute__((annotate("$clingAutoload$CbmStsDigiLight.h")))  CbmStsDigiLight;
class __attribute__((annotate("$clingAutoload$CbmStsHit.h")))  CbmStsHit;
class __attribute__((annotate("$clingAutoload$CbmStsCluster.h")))  CbmStsCluster;
class __attribute__((annotate(R"ATTRDUMP(Class for STS)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$CbmGeoSts.h")))  CbmGeoSts;
class __attribute__((annotate("$clingAutoload$CbmGeoStsPar.h")))  CbmGeoStsPar;
class __attribute__((annotate("$clingAutoload$CbmSts.h")))  CbmSts;
class __attribute__((annotate(R"ATTRDUMP(Factory for all STS parameter containers)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$CbmStsContFact.h")))  CbmStsContFact;
class __attribute__((annotate("$clingAutoload$CbmStsDigiPar.h")))  CbmStsDigiPar;
class __attribute__((annotate("$clingAutoload$CbmStsDigiScheme.h")))  CbmStsDigiScheme;
class __attribute__((annotate("$clingAutoload$CbmStsDigitize.h")))  CbmStsDigitize;
class __attribute__((annotate("$clingAutoload$CbmStsClusterFinder.h")))  CbmStsClusterFinder;
class __attribute__((annotate("$clingAutoload$CbmStsFindHits.h")))  CbmStsFindHits;
class __attribute__((annotate("$clingAutoload$CbmStsFitTracks.h")))  CbmStsFitTracks;
class __attribute__((annotate("$clingAutoload$CbmStsMatchHits.h")))  CbmStsMatchHits;
class __attribute__((annotate("$clingAutoload$CbmStsMatchTracks.h")))  CbmStsMatchTracks;
class __attribute__((annotate(R"ATTRDUMP(Class for STS parameter I/O from Ascii files)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$CbmStsParAsciiFileIo.h")))  CbmStsParAsciiFileIo;
class __attribute__((annotate(R"ATTRDUMP(Class for STS parameter I/O from ROOT file)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$CbmStsParRootFileIo.h")))  CbmStsParRootFileIo;
class __attribute__((annotate("$clingAutoload$CbmStsRadTool.h")))  CbmStsRadTool;
class __attribute__((annotate("$clingAutoload$CbmStsSensor.h")))  CbmStsSensor;
class __attribute__((annotate("$clingAutoload$CbmStsSensorDigiPar.h")))  CbmStsSensorDigiPar;
class __attribute__((annotate("$clingAutoload$CbmStsSector.h")))  CbmStsSector;
class __attribute__((annotate("$clingAutoload$CbmStsSectorDigiPar.h")))  CbmStsSectorDigiPar;
class __attribute__((annotate("$clingAutoload$CbmStsStation.h")))  CbmStsStation;
class __attribute__((annotate("$clingAutoload$CbmStsStationDigiPar.h")))  CbmStsStationDigiPar;
class __attribute__((annotate("$clingAutoload$CbmStsTrackFinderIdeal.h")))  CbmStsTrackFinderIdeal;
class __attribute__((annotate("$clingAutoload$CbmStsTrackFitterIdeal.h")))  CbmStsTrackFitterIdeal;
class __attribute__((annotate("$clingAutoload$CbmStsSimulationQa.h")))  CbmStsSimulationQa;
class __attribute__((annotate("$clingAutoload$CbmStsFindHitsQa.h")))  CbmStsFindHitsQa;
class __attribute__((annotate("$clingAutoload$CbmStsReconstructionQa.h")))  CbmStsReconstructionQa;
class __attribute__((annotate("$clingAutoload$CbmBmnStsDigitize.h")))  CbmBmnStsDigitize;
class __attribute__((annotate("$clingAutoload$BmnGemFastDigitize.h")))  BmnGemFastDigitize;
class __attribute__((annotate("$clingAutoload$BmnToCbmHitConverter.h")))  BmnToCbmHitConverter;
class __attribute__((annotate("$clingAutoload$BmnStsMatchTracks.h")))  BmnStsMatchTracks;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__StsDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "CbmStsDetectorId.h"
#include "CbmStsDigi.h"
#include "CbmStsDigiMatch.h"
#include "CbmStsDigiLight.h"
#include "CbmStsHit.h"
#include "CbmStsCluster.h"
#include "CbmGeoSts.h"
#include "CbmGeoStsPar.h"
#include "CbmSts.h"
#include "CbmStsContFact.h"
#include "CbmStsDigiPar.h"
#include "CbmStsDigiScheme.h"
#include "CbmStsDigitize.h"
#include "CbmStsClusterFinder.h"
#include "CbmStsFindHits.h"
#include "CbmStsFitTracks.h"
#include "CbmStsMatchHits.h"
#include "CbmStsMatchTracks.h"
#include "CbmStsParAsciiFileIo.h"
#include "CbmStsParRootFileIo.h"
#include "CbmStsRadTool.h"
#include "CbmStsSensor.h"
#include "CbmStsSensorDigiPar.h"
#include "CbmStsSector.h"
#include "CbmStsSectorDigiPar.h"
#include "CbmStsStation.h"
#include "CbmStsStationDigiPar.h"
#include "CbmStsTrackFinderIdeal.h"
#include "CbmStsTrackFitterIdeal.h"
#include "CbmStsSimulationQa.h"
#include "CbmStsFindHitsQa.h"
#include "CbmStsReconstructionQa.h"
#include "CbmBmnStsDigitize.h"
#include "BmnGemFastDigitize.h"
#include "BmnToCbmHitConverter.h"
#include "BmnStsMatchTracks.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BmnGemFastDigitize", payloadCode, "@",
"BmnStsMatchTracks", payloadCode, "@",
"BmnToCbmHitConverter", payloadCode, "@",
"CbmBmnStsDigitize", payloadCode, "@",
"CbmGeoSts", payloadCode, "@",
"CbmGeoStsPar", payloadCode, "@",
"CbmSts", payloadCode, "@",
"CbmStsCluster", payloadCode, "@",
"CbmStsClusterFinder", payloadCode, "@",
"CbmStsContFact", payloadCode, "@",
"CbmStsDetectorId", payloadCode, "@",
"CbmStsDigi", payloadCode, "@",
"CbmStsDigiLight", payloadCode, "@",
"CbmStsDigiMatch", payloadCode, "@",
"CbmStsDigiPar", payloadCode, "@",
"CbmStsDigiScheme", payloadCode, "@",
"CbmStsDigitize", payloadCode, "@",
"CbmStsFindHits", payloadCode, "@",
"CbmStsFindHitsQa", payloadCode, "@",
"CbmStsFitTracks", payloadCode, "@",
"CbmStsHit", payloadCode, "@",
"CbmStsMatchHits", payloadCode, "@",
"CbmStsMatchTracks", payloadCode, "@",
"CbmStsParAsciiFileIo", payloadCode, "@",
"CbmStsParRootFileIo", payloadCode, "@",
"CbmStsRadTool", payloadCode, "@",
"CbmStsReconstructionQa", payloadCode, "@",
"CbmStsSector", payloadCode, "@",
"CbmStsSectorDigiPar", payloadCode, "@",
"CbmStsSensor", payloadCode, "@",
"CbmStsSensorDigiPar", payloadCode, "@",
"CbmStsSimulationQa", payloadCode, "@",
"CbmStsStation", payloadCode, "@",
"CbmStsStationDigiPar", payloadCode, "@",
"CbmStsTrackFinderIdeal", payloadCode, "@",
"CbmStsTrackFitterIdeal", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__StsDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__StsDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__StsDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__StsDict() {
  TriggerDictionaryInitialization_G__StsDict_Impl();
}
