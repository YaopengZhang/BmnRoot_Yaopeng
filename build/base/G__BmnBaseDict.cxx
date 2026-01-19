// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIbasedIG__BmnBaseDict
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
#include "CbmStsPoint.h"
#include "CbmDigi.h"
#include "CbmBaseHit.h"
#include "CbmHit.h"
#include "CbmStripHit.h"
#include "CbmVertex.h"
#include "CbmStsTrack.h"
#include "CbmStsTrackFinder.h"
#include "CbmStsTrackFitter.h"
#include "CbmTofMerger.h"
#include "CbmTrackMerger.h"
#include "CbmPrimaryVertexFinder.h"
#include "CbmFindPrimaryVertex.h"
#include "CbmL1Counters.h"
#include "CbmTrackMatch.h"
#include "CbmGlobalTrack.h"
#include "CbmMvdDetectorId.h"
#include "CbmMvdGeoPar.h"
#include "CbmMvdPoint.h"
#include "CbmMvdHit.h"
#include "CbmMvdHitMatch.h"
#include "CbmTofPoint.h"
#include "CbmTofHit.h"
#include "CbmTofTrack.h"
#include "CbmGeoSttPar.h"
#include "BmnMath.h"
#include "BmnMatrixMath.h"
#include "FitWLSQ.h"
#include "BmnGeoNavigator.h"
#include "BmnKalmanFilter.h"
#include "BmnMaterialEffects.h"
#include "BmnMaterialInfo.h"
#include "BmnProfRawTools.h"
#include "BmnFileSource.h"
#include "BmnDecoSource.h"
#include "BmnProfilometerSource.h"
#include "BmnOnlineShmSource.h"
#include "BmnEventHeader.h"
#include "BmnSpillHeader.h"
#include "DigiRunHeader.h"
#include "DstRunHeader.h"
#include "DstEventHeader.h"
#include "RawTypes.h"
#include "BmnADCDigit.h"
#include "BmnTDCDigit.h"
#include "BmnTQDCADCDigit.h"
#include "BmnTTBDigit.h"
#include "BmnMSCDigit.h"
#include "BmnHRBDigit.h"
#include "BmnSyncDigit.h"
#include "BmnTrigDigit.h"
#include "BmnTrigWaveDigit.h"
#include "BmnTrigInfo.h"
#include "BmnTrigUnion.h"
#include "DigiArrays.h"
#include "CbmMCTrack.h"
#include "CbmStack.h"
#include "BmnStripData.h"
#include "BmnStripDigit.h"
#include "BmnCaloDigit.h"
#include "BmnTacquilaDigit.h"
#include "BmnDigiContainerTemplate.h"
#include "BmnHit.h"
#include "BmnLink.h"
#include "BmnMatch.h"
#include "BmnTrack.h"
#include "BmnIdentifiableTrack.h"
#include "BmnTrackMatch.h"
#include "BmnVertex.h"
#include "BmnEventQuality.h"
#include "BmnFitNode.h"
#include "BmnEnums.h"
#include "BmnDetectorList.h"
#include "BmnTask.h"
#include "BmnFunctionSet.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_CbmStsPoint(void *p = nullptr);
   static void *newArray_CbmStsPoint(Long_t size, void *p);
   static void delete_CbmStsPoint(void *p);
   static void deleteArray_CbmStsPoint(void *p);
   static void destruct_CbmStsPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsPoint*)
   {
      ::CbmStsPoint *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsPoint >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsPoint", ::CbmStsPoint::Class_Version(), "CbmStsPoint.h", 25,
                  typeid(::CbmStsPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsPoint::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsPoint) );
      instance.SetNew(&new_CbmStsPoint);
      instance.SetNewArray(&newArray_CbmStsPoint);
      instance.SetDelete(&delete_CbmStsPoint);
      instance.SetDeleteArray(&deleteArray_CbmStsPoint);
      instance.SetDestructor(&destruct_CbmStsPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsPoint*)
   {
      return GenerateInitInstanceLocal((::CbmStsPoint*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsPoint*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_CbmDigi(void *p);
   static void deleteArray_CbmDigi(void *p);
   static void destruct_CbmDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmDigi*)
   {
      ::CbmDigi *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmDigi >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmDigi", ::CbmDigi::Class_Version(), "CbmDigi.h", 43,
                  typeid(::CbmDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmDigi::Dictionary, isa_proxy, 4,
                  sizeof(::CbmDigi) );
      instance.SetDelete(&delete_CbmDigi);
      instance.SetDeleteArray(&deleteArray_CbmDigi);
      instance.SetDestructor(&destruct_CbmDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmDigi*)
   {
      return GenerateInitInstanceLocal((::CbmDigi*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmDigi*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_CbmBaseHit(void *p);
   static void deleteArray_CbmBaseHit(void *p);
   static void destruct_CbmBaseHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmBaseHit*)
   {
      ::CbmBaseHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmBaseHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmBaseHit", ::CbmBaseHit::Class_Version(), "CbmBaseHit.h", 33,
                  typeid(::CbmBaseHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmBaseHit::Dictionary, isa_proxy, 4,
                  sizeof(::CbmBaseHit) );
      instance.SetDelete(&delete_CbmBaseHit);
      instance.SetDeleteArray(&deleteArray_CbmBaseHit);
      instance.SetDestructor(&destruct_CbmBaseHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmBaseHit*)
   {
      return GenerateInitInstanceLocal((::CbmBaseHit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmBaseHit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_CbmHit(void *p);
   static void deleteArray_CbmHit(void *p);
   static void destruct_CbmHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmHit*)
   {
      ::CbmHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmHit", ::CbmHit::Class_Version(), "CbmHit.h", 23,
                  typeid(::CbmHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmHit::Dictionary, isa_proxy, 4,
                  sizeof(::CbmHit) );
      instance.SetDelete(&delete_CbmHit);
      instance.SetDeleteArray(&deleteArray_CbmHit);
      instance.SetDestructor(&destruct_CbmHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmHit*)
   {
      return GenerateInitInstanceLocal((::CbmHit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmHit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_CbmStripHit(void *p);
   static void deleteArray_CbmStripHit(void *p);
   static void destruct_CbmStripHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStripHit*)
   {
      ::CbmStripHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStripHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStripHit", ::CbmStripHit::Class_Version(), "CbmStripHit.h", 17,
                  typeid(::CbmStripHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStripHit::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStripHit) );
      instance.SetDelete(&delete_CbmStripHit);
      instance.SetDeleteArray(&deleteArray_CbmStripHit);
      instance.SetDestructor(&destruct_CbmStripHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStripHit*)
   {
      return GenerateInitInstanceLocal((::CbmStripHit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStripHit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmVertex(void *p = nullptr);
   static void *newArray_CbmVertex(Long_t size, void *p);
   static void delete_CbmVertex(void *p);
   static void deleteArray_CbmVertex(void *p);
   static void destruct_CbmVertex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmVertex*)
   {
      ::CbmVertex *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmVertex >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmVertex", ::CbmVertex::Class_Version(), "CbmVertex.h", 24,
                  typeid(::CbmVertex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmVertex::Dictionary, isa_proxy, 4,
                  sizeof(::CbmVertex) );
      instance.SetNew(&new_CbmVertex);
      instance.SetNewArray(&newArray_CbmVertex);
      instance.SetDelete(&delete_CbmVertex);
      instance.SetDeleteArray(&deleteArray_CbmVertex);
      instance.SetDestructor(&destruct_CbmVertex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmVertex*)
   {
      return GenerateInitInstanceLocal((::CbmVertex*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmVertex*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsTrack(void *p = nullptr);
   static void *newArray_CbmStsTrack(Long_t size, void *p);
   static void delete_CbmStsTrack(void *p);
   static void deleteArray_CbmStsTrack(void *p);
   static void destruct_CbmStsTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsTrack*)
   {
      ::CbmStsTrack *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsTrack >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsTrack", ::CbmStsTrack::Class_Version(), "CbmStsTrack.h", 32,
                  typeid(::CbmStsTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsTrack::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsTrack) );
      instance.SetNew(&new_CbmStsTrack);
      instance.SetNewArray(&newArray_CbmStsTrack);
      instance.SetDelete(&delete_CbmStsTrack);
      instance.SetDeleteArray(&deleteArray_CbmStsTrack);
      instance.SetDestructor(&destruct_CbmStsTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsTrack*)
   {
      return GenerateInitInstanceLocal((::CbmStsTrack*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsTrack*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_CbmStsTrackFinder(void *p);
   static void deleteArray_CbmStsTrackFinder(void *p);
   static void destruct_CbmStsTrackFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsTrackFinder*)
   {
      ::CbmStsTrackFinder *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsTrackFinder >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsTrackFinder", ::CbmStsTrackFinder::Class_Version(), "CbmStsTrackFinder.h", 28,
                  typeid(::CbmStsTrackFinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsTrackFinder::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsTrackFinder) );
      instance.SetDelete(&delete_CbmStsTrackFinder);
      instance.SetDeleteArray(&deleteArray_CbmStsTrackFinder);
      instance.SetDestructor(&destruct_CbmStsTrackFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsTrackFinder*)
   {
      return GenerateInitInstanceLocal((::CbmStsTrackFinder*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsTrackFinder*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_CbmStsTrackFitter(void *p);
   static void deleteArray_CbmStsTrackFitter(void *p);
   static void destruct_CbmStsTrackFitter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsTrackFitter*)
   {
      ::CbmStsTrackFitter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsTrackFitter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsTrackFitter", ::CbmStsTrackFitter::Class_Version(), "CbmStsTrackFitter.h", 26,
                  typeid(::CbmStsTrackFitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsTrackFitter::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsTrackFitter) );
      instance.SetDelete(&delete_CbmStsTrackFitter);
      instance.SetDeleteArray(&deleteArray_CbmStsTrackFitter);
      instance.SetDestructor(&destruct_CbmStsTrackFitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsTrackFitter*)
   {
      return GenerateInitInstanceLocal((::CbmStsTrackFitter*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsTrackFitter*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_CbmTofMerger(void *p);
   static void deleteArray_CbmTofMerger(void *p);
   static void destruct_CbmTofMerger(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmTofMerger*)
   {
      ::CbmTofMerger *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmTofMerger >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmTofMerger", ::CbmTofMerger::Class_Version(), "CbmTofMerger.h", 13,
                  typeid(::CbmTofMerger), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmTofMerger::Dictionary, isa_proxy, 4,
                  sizeof(::CbmTofMerger) );
      instance.SetDelete(&delete_CbmTofMerger);
      instance.SetDeleteArray(&deleteArray_CbmTofMerger);
      instance.SetDestructor(&destruct_CbmTofMerger);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmTofMerger*)
   {
      return GenerateInitInstanceLocal((::CbmTofMerger*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmTofMerger*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_CbmTrackMerger(void *p);
   static void deleteArray_CbmTrackMerger(void *p);
   static void destruct_CbmTrackMerger(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmTrackMerger*)
   {
      ::CbmTrackMerger *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmTrackMerger >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmTrackMerger", ::CbmTrackMerger::Class_Version(), "CbmTrackMerger.h", 25,
                  typeid(::CbmTrackMerger), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmTrackMerger::Dictionary, isa_proxy, 4,
                  sizeof(::CbmTrackMerger) );
      instance.SetDelete(&delete_CbmTrackMerger);
      instance.SetDeleteArray(&deleteArray_CbmTrackMerger);
      instance.SetDestructor(&destruct_CbmTrackMerger);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmTrackMerger*)
   {
      return GenerateInitInstanceLocal((::CbmTrackMerger*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmTrackMerger*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_CbmPrimaryVertexFinder(void *p);
   static void deleteArray_CbmPrimaryVertexFinder(void *p);
   static void destruct_CbmPrimaryVertexFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmPrimaryVertexFinder*)
   {
      ::CbmPrimaryVertexFinder *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmPrimaryVertexFinder >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmPrimaryVertexFinder", ::CbmPrimaryVertexFinder::Class_Version(), "CbmPrimaryVertexFinder.h", 28,
                  typeid(::CbmPrimaryVertexFinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmPrimaryVertexFinder::Dictionary, isa_proxy, 4,
                  sizeof(::CbmPrimaryVertexFinder) );
      instance.SetDelete(&delete_CbmPrimaryVertexFinder);
      instance.SetDeleteArray(&deleteArray_CbmPrimaryVertexFinder);
      instance.SetDestructor(&destruct_CbmPrimaryVertexFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmPrimaryVertexFinder*)
   {
      return GenerateInitInstanceLocal((::CbmPrimaryVertexFinder*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmPrimaryVertexFinder*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmFindPrimaryVertex(void *p = nullptr);
   static void *newArray_CbmFindPrimaryVertex(Long_t size, void *p);
   static void delete_CbmFindPrimaryVertex(void *p);
   static void deleteArray_CbmFindPrimaryVertex(void *p);
   static void destruct_CbmFindPrimaryVertex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmFindPrimaryVertex*)
   {
      ::CbmFindPrimaryVertex *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmFindPrimaryVertex >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmFindPrimaryVertex", ::CbmFindPrimaryVertex::Class_Version(), "CbmFindPrimaryVertex.h", 31,
                  typeid(::CbmFindPrimaryVertex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmFindPrimaryVertex::Dictionary, isa_proxy, 4,
                  sizeof(::CbmFindPrimaryVertex) );
      instance.SetNew(&new_CbmFindPrimaryVertex);
      instance.SetNewArray(&newArray_CbmFindPrimaryVertex);
      instance.SetDelete(&delete_CbmFindPrimaryVertex);
      instance.SetDeleteArray(&deleteArray_CbmFindPrimaryVertex);
      instance.SetDestructor(&destruct_CbmFindPrimaryVertex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmFindPrimaryVertex*)
   {
      return GenerateInitInstanceLocal((::CbmFindPrimaryVertex*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmFindPrimaryVertex*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmTrackMatch(void *p = nullptr);
   static void *newArray_CbmTrackMatch(Long_t size, void *p);
   static void delete_CbmTrackMatch(void *p);
   static void deleteArray_CbmTrackMatch(void *p);
   static void destruct_CbmTrackMatch(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmTrackMatch*)
   {
      ::CbmTrackMatch *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmTrackMatch >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmTrackMatch", ::CbmTrackMatch::Class_Version(), "CbmTrackMatch.h", 19,
                  typeid(::CbmTrackMatch), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmTrackMatch::Dictionary, isa_proxy, 4,
                  sizeof(::CbmTrackMatch) );
      instance.SetNew(&new_CbmTrackMatch);
      instance.SetNewArray(&newArray_CbmTrackMatch);
      instance.SetDelete(&delete_CbmTrackMatch);
      instance.SetDeleteArray(&deleteArray_CbmTrackMatch);
      instance.SetDestructor(&destruct_CbmTrackMatch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmTrackMatch*)
   {
      return GenerateInitInstanceLocal((::CbmTrackMatch*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmTrackMatch*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnFitNode_Dictionary();
   static void BmnFitNode_TClassManip(TClass*);
   static void *new_BmnFitNode(void *p = nullptr);
   static void *newArray_BmnFitNode(Long_t size, void *p);
   static void delete_BmnFitNode(void *p);
   static void deleteArray_BmnFitNode(void *p);
   static void destruct_BmnFitNode(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFitNode*)
   {
      ::BmnFitNode *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnFitNode));
      static ::ROOT::TGenericClassInfo 
         instance("BmnFitNode", "BmnFitNode.h", 22,
                  typeid(::BmnFitNode), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnFitNode_Dictionary, isa_proxy, 4,
                  sizeof(::BmnFitNode) );
      instance.SetNew(&new_BmnFitNode);
      instance.SetNewArray(&newArray_BmnFitNode);
      instance.SetDelete(&delete_BmnFitNode);
      instance.SetDeleteArray(&deleteArray_BmnFitNode);
      instance.SetDestructor(&destruct_BmnFitNode);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFitNode*)
   {
      return GenerateInitInstanceLocal((::BmnFitNode*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFitNode*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnFitNode_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnFitNode*)nullptr)->GetClass();
      BmnFitNode_TClassManip(theClass);
   return theClass;
   }

   static void BmnFitNode_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmGlobalTrack(void *p = nullptr);
   static void *newArray_CbmGlobalTrack(Long_t size, void *p);
   static void delete_CbmGlobalTrack(void *p);
   static void deleteArray_CbmGlobalTrack(void *p);
   static void destruct_CbmGlobalTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmGlobalTrack*)
   {
      ::CbmGlobalTrack *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmGlobalTrack >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmGlobalTrack", ::CbmGlobalTrack::Class_Version(), "CbmGlobalTrack.h", 22,
                  typeid(::CbmGlobalTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmGlobalTrack::Dictionary, isa_proxy, 4,
                  sizeof(::CbmGlobalTrack) );
      instance.SetNew(&new_CbmGlobalTrack);
      instance.SetNewArray(&newArray_CbmGlobalTrack);
      instance.SetDelete(&delete_CbmGlobalTrack);
      instance.SetDeleteArray(&deleteArray_CbmGlobalTrack);
      instance.SetDestructor(&destruct_CbmGlobalTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmGlobalTrack*)
   {
      return GenerateInitInstanceLocal((::CbmGlobalTrack*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmGlobalTrack*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnDetectorList(void *p = nullptr);
   static void *newArray_BmnDetectorList(Long_t size, void *p);
   static void delete_BmnDetectorList(void *p);
   static void deleteArray_BmnDetectorList(void *p);
   static void destruct_BmnDetectorList(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnDetectorList*)
   {
      ::BmnDetectorList *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnDetectorList >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnDetectorList", ::BmnDetectorList::Class_Version(), "BmnDetectorList.h", 60,
                  typeid(::BmnDetectorList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnDetectorList::Dictionary, isa_proxy, 4,
                  sizeof(::BmnDetectorList) );
      instance.SetNew(&new_BmnDetectorList);
      instance.SetNewArray(&newArray_BmnDetectorList);
      instance.SetDelete(&delete_BmnDetectorList);
      instance.SetDeleteArray(&deleteArray_BmnDetectorList);
      instance.SetDestructor(&destruct_BmnDetectorList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnDetectorList*)
   {
      return GenerateInitInstanceLocal((::BmnDetectorList*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnDetectorList*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmMvdDetectorId(void *p = nullptr);
   static void *newArray_CbmMvdDetectorId(Long_t size, void *p);
   static void delete_CbmMvdDetectorId(void *p);
   static void deleteArray_CbmMvdDetectorId(void *p);
   static void destruct_CbmMvdDetectorId(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmMvdDetectorId*)
   {
      ::CbmMvdDetectorId *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmMvdDetectorId >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmMvdDetectorId", ::CbmMvdDetectorId::Class_Version(), "CbmMvdDetectorId.h", 24,
                  typeid(::CbmMvdDetectorId), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmMvdDetectorId::Dictionary, isa_proxy, 4,
                  sizeof(::CbmMvdDetectorId) );
      instance.SetNew(&new_CbmMvdDetectorId);
      instance.SetNewArray(&newArray_CbmMvdDetectorId);
      instance.SetDelete(&delete_CbmMvdDetectorId);
      instance.SetDeleteArray(&deleteArray_CbmMvdDetectorId);
      instance.SetDestructor(&destruct_CbmMvdDetectorId);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmMvdDetectorId*)
   {
      return GenerateInitInstanceLocal((::CbmMvdDetectorId*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmMvdDetectorId*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmMvdGeoPar(void *p = nullptr);
   static void *newArray_CbmMvdGeoPar(Long_t size, void *p);
   static void delete_CbmMvdGeoPar(void *p);
   static void deleteArray_CbmMvdGeoPar(void *p);
   static void destruct_CbmMvdGeoPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmMvdGeoPar*)
   {
      ::CbmMvdGeoPar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmMvdGeoPar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmMvdGeoPar", ::CbmMvdGeoPar::Class_Version(), "CbmMvdGeoPar.h", 23,
                  typeid(::CbmMvdGeoPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmMvdGeoPar::Dictionary, isa_proxy, 4,
                  sizeof(::CbmMvdGeoPar) );
      instance.SetNew(&new_CbmMvdGeoPar);
      instance.SetNewArray(&newArray_CbmMvdGeoPar);
      instance.SetDelete(&delete_CbmMvdGeoPar);
      instance.SetDeleteArray(&deleteArray_CbmMvdGeoPar);
      instance.SetDestructor(&destruct_CbmMvdGeoPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmMvdGeoPar*)
   {
      return GenerateInitInstanceLocal((::CbmMvdGeoPar*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmMvdGeoPar*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmMvdPoint(void *p = nullptr);
   static void *newArray_CbmMvdPoint(Long_t size, void *p);
   static void delete_CbmMvdPoint(void *p);
   static void deleteArray_CbmMvdPoint(void *p);
   static void destruct_CbmMvdPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmMvdPoint*)
   {
      ::CbmMvdPoint *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmMvdPoint >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmMvdPoint", ::CbmMvdPoint::Class_Version(), "CbmMvdPoint.h", 27,
                  typeid(::CbmMvdPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmMvdPoint::Dictionary, isa_proxy, 4,
                  sizeof(::CbmMvdPoint) );
      instance.SetNew(&new_CbmMvdPoint);
      instance.SetNewArray(&newArray_CbmMvdPoint);
      instance.SetDelete(&delete_CbmMvdPoint);
      instance.SetDeleteArray(&deleteArray_CbmMvdPoint);
      instance.SetDestructor(&destruct_CbmMvdPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmMvdPoint*)
   {
      return GenerateInitInstanceLocal((::CbmMvdPoint*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmMvdPoint*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmMvdHit(void *p = nullptr);
   static void *newArray_CbmMvdHit(Long_t size, void *p);
   static void delete_CbmMvdHit(void *p);
   static void deleteArray_CbmMvdHit(void *p);
   static void destruct_CbmMvdHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmMvdHit*)
   {
      ::CbmMvdHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmMvdHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmMvdHit", ::CbmMvdHit::Class_Version(), "CbmMvdHit.h", 27,
                  typeid(::CbmMvdHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmMvdHit::Dictionary, isa_proxy, 4,
                  sizeof(::CbmMvdHit) );
      instance.SetNew(&new_CbmMvdHit);
      instance.SetNewArray(&newArray_CbmMvdHit);
      instance.SetDelete(&delete_CbmMvdHit);
      instance.SetDeleteArray(&deleteArray_CbmMvdHit);
      instance.SetDestructor(&destruct_CbmMvdHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmMvdHit*)
   {
      return GenerateInitInstanceLocal((::CbmMvdHit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmMvdHit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmMvdHitMatch(void *p = nullptr);
   static void *newArray_CbmMvdHitMatch(Long_t size, void *p);
   static void delete_CbmMvdHitMatch(void *p);
   static void deleteArray_CbmMvdHitMatch(void *p);
   static void destruct_CbmMvdHitMatch(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmMvdHitMatch*)
   {
      ::CbmMvdHitMatch *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmMvdHitMatch >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmMvdHitMatch", ::CbmMvdHitMatch::Class_Version(), "CbmMvdHitMatch.h", 23,
                  typeid(::CbmMvdHitMatch), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmMvdHitMatch::Dictionary, isa_proxy, 4,
                  sizeof(::CbmMvdHitMatch) );
      instance.SetNew(&new_CbmMvdHitMatch);
      instance.SetNewArray(&newArray_CbmMvdHitMatch);
      instance.SetDelete(&delete_CbmMvdHitMatch);
      instance.SetDeleteArray(&deleteArray_CbmMvdHitMatch);
      instance.SetDestructor(&destruct_CbmMvdHitMatch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmMvdHitMatch*)
   {
      return GenerateInitInstanceLocal((::CbmMvdHitMatch*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmMvdHitMatch*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmTofPoint(void *p = nullptr);
   static void *newArray_CbmTofPoint(Long_t size, void *p);
   static void delete_CbmTofPoint(void *p);
   static void deleteArray_CbmTofPoint(void *p);
   static void destruct_CbmTofPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmTofPoint*)
   {
      ::CbmTofPoint *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmTofPoint >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmTofPoint", ::CbmTofPoint::Class_Version(), "CbmTofPoint.h", 22,
                  typeid(::CbmTofPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmTofPoint::Dictionary, isa_proxy, 4,
                  sizeof(::CbmTofPoint) );
      instance.SetNew(&new_CbmTofPoint);
      instance.SetNewArray(&newArray_CbmTofPoint);
      instance.SetDelete(&delete_CbmTofPoint);
      instance.SetDeleteArray(&deleteArray_CbmTofPoint);
      instance.SetDestructor(&destruct_CbmTofPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmTofPoint*)
   {
      return GenerateInitInstanceLocal((::CbmTofPoint*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmTofPoint*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnLink(void *p = nullptr);
   static void *newArray_BmnLink(Long_t size, void *p);
   static void delete_BmnLink(void *p);
   static void deleteArray_BmnLink(void *p);
   static void destruct_BmnLink(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnLink*)
   {
      ::BmnLink *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnLink >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnLink", ::BmnLink::Class_Version(), "BmnLink.h", 18,
                  typeid(::BmnLink), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnLink::Dictionary, isa_proxy, 4,
                  sizeof(::BmnLink) );
      instance.SetNew(&new_BmnLink);
      instance.SetNewArray(&newArray_BmnLink);
      instance.SetDelete(&delete_BmnLink);
      instance.SetDeleteArray(&deleteArray_BmnLink);
      instance.SetDestructor(&destruct_BmnLink);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnLink*)
   {
      return GenerateInitInstanceLocal((::BmnLink*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnLink*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMatch(void *p = nullptr);
   static void *newArray_BmnMatch(Long_t size, void *p);
   static void delete_BmnMatch(void *p);
   static void deleteArray_BmnMatch(void *p);
   static void destruct_BmnMatch(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMatch*)
   {
      ::BmnMatch *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMatch >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMatch", ::BmnMatch::Class_Version(), "BmnMatch.h", 23,
                  typeid(::BmnMatch), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMatch::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMatch) );
      instance.SetNew(&new_BmnMatch);
      instance.SetNewArray(&newArray_BmnMatch);
      instance.SetDelete(&delete_BmnMatch);
      instance.SetDeleteArray(&deleteArray_BmnMatch);
      instance.SetDestructor(&destruct_BmnMatch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMatch*)
   {
      return GenerateInitInstanceLocal((::BmnMatch*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMatch*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnHit(void *p = nullptr);
   static void *newArray_BmnHit(Long_t size, void *p);
   static void delete_BmnHit(void *p);
   static void deleteArray_BmnHit(void *p);
   static void destruct_BmnHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHit*)
   {
      ::BmnHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHit", ::BmnHit::Class_Version(), "BmnHit.h", 20,
                  typeid(::BmnHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHit) );
      instance.SetNew(&new_BmnHit);
      instance.SetNewArray(&newArray_BmnHit);
      instance.SetDelete(&delete_BmnHit);
      instance.SetDeleteArray(&deleteArray_BmnHit);
      instance.SetDestructor(&destruct_BmnHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHit*)
   {
      return GenerateInitInstanceLocal((::BmnHit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmTofHit(void *p = nullptr);
   static void *newArray_CbmTofHit(Long_t size, void *p);
   static void delete_CbmTofHit(void *p);
   static void deleteArray_CbmTofHit(void *p);
   static void destruct_CbmTofHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmTofHit*)
   {
      ::CbmTofHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmTofHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmTofHit", ::CbmTofHit::Class_Version(), "CbmTofHit.h", 16,
                  typeid(::CbmTofHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmTofHit::Dictionary, isa_proxy, 4,
                  sizeof(::CbmTofHit) );
      instance.SetNew(&new_CbmTofHit);
      instance.SetNewArray(&newArray_CbmTofHit);
      instance.SetDelete(&delete_CbmTofHit);
      instance.SetDeleteArray(&deleteArray_CbmTofHit);
      instance.SetDestructor(&destruct_CbmTofHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmTofHit*)
   {
      return GenerateInitInstanceLocal((::CbmTofHit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmTofHit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmTofTrack(void *p = nullptr);
   static void *newArray_CbmTofTrack(Long_t size, void *p);
   static void delete_CbmTofTrack(void *p);
   static void deleteArray_CbmTofTrack(void *p);
   static void destruct_CbmTofTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmTofTrack*)
   {
      ::CbmTofTrack *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmTofTrack >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmTofTrack", ::CbmTofTrack::Class_Version(), "CbmTofTrack.h", 20,
                  typeid(::CbmTofTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmTofTrack::Dictionary, isa_proxy, 4,
                  sizeof(::CbmTofTrack) );
      instance.SetNew(&new_CbmTofTrack);
      instance.SetNewArray(&newArray_CbmTofTrack);
      instance.SetDelete(&delete_CbmTofTrack);
      instance.SetDeleteArray(&deleteArray_CbmTofTrack);
      instance.SetDestructor(&destruct_CbmTofTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmTofTrack*)
   {
      return GenerateInitInstanceLocal((::CbmTofTrack*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmTofTrack*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmGeoSttPar(void *p = nullptr);
   static void *newArray_CbmGeoSttPar(Long_t size, void *p);
   static void delete_CbmGeoSttPar(void *p);
   static void deleteArray_CbmGeoSttPar(void *p);
   static void destruct_CbmGeoSttPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmGeoSttPar*)
   {
      ::CbmGeoSttPar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmGeoSttPar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmGeoSttPar", ::CbmGeoSttPar::Class_Version(), "CbmGeoSttPar.h", 9,
                  typeid(::CbmGeoSttPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmGeoSttPar::Dictionary, isa_proxy, 4,
                  sizeof(::CbmGeoSttPar) );
      instance.SetNew(&new_CbmGeoSttPar);
      instance.SetNewArray(&newArray_CbmGeoSttPar);
      instance.SetDelete(&delete_CbmGeoSttPar);
      instance.SetDeleteArray(&deleteArray_CbmGeoSttPar);
      instance.SetDestructor(&destruct_CbmGeoSttPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmGeoSttPar*)
   {
      return GenerateInitInstanceLocal((::CbmGeoSttPar*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmGeoSttPar*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTrack(void *p = nullptr);
   static void *newArray_BmnTrack(Long_t size, void *p);
   static void delete_BmnTrack(void *p);
   static void deleteArray_BmnTrack(void *p);
   static void destruct_BmnTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTrack*)
   {
      ::BmnTrack *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTrack >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTrack", ::BmnTrack::Class_Version(), "BmnTrack.h", 18,
                  typeid(::BmnTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTrack::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTrack) );
      instance.SetNew(&new_BmnTrack);
      instance.SetNewArray(&newArray_BmnTrack);
      instance.SetDelete(&delete_BmnTrack);
      instance.SetDeleteArray(&deleteArray_BmnTrack);
      instance.SetDestructor(&destruct_BmnTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTrack*)
   {
      return GenerateInitInstanceLocal((::BmnTrack*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTrack*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *FitWLSQ_Dictionary();
   static void FitWLSQ_TClassManip(TClass*);
   static void delete_FitWLSQ(void *p);
   static void deleteArray_FitWLSQ(void *p);
   static void destruct_FitWLSQ(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::FitWLSQ*)
   {
      ::FitWLSQ *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::FitWLSQ));
      static ::ROOT::TGenericClassInfo 
         instance("FitWLSQ", "FitWLSQ.h", 9,
                  typeid(::FitWLSQ), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &FitWLSQ_Dictionary, isa_proxy, 4,
                  sizeof(::FitWLSQ) );
      instance.SetDelete(&delete_FitWLSQ);
      instance.SetDeleteArray(&deleteArray_FitWLSQ);
      instance.SetDestructor(&destruct_FitWLSQ);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::FitWLSQ*)
   {
      return GenerateInitInstanceLocal((::FitWLSQ*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::FitWLSQ*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *FitWLSQ_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::FitWLSQ*)nullptr)->GetClass();
      FitWLSQ_TClassManip(theClass);
   return theClass;
   }

   static void FitWLSQ_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnGeoNavigator_Dictionary();
   static void BmnGeoNavigator_TClassManip(TClass*);
   static void *new_BmnGeoNavigator(void *p = nullptr);
   static void *newArray_BmnGeoNavigator(Long_t size, void *p);
   static void delete_BmnGeoNavigator(void *p);
   static void deleteArray_BmnGeoNavigator(void *p);
   static void destruct_BmnGeoNavigator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGeoNavigator*)
   {
      ::BmnGeoNavigator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnGeoNavigator));
      static ::ROOT::TGenericClassInfo 
         instance("BmnGeoNavigator", "BmnGeoNavigator.h", 21,
                  typeid(::BmnGeoNavigator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnGeoNavigator_Dictionary, isa_proxy, 4,
                  sizeof(::BmnGeoNavigator) );
      instance.SetNew(&new_BmnGeoNavigator);
      instance.SetNewArray(&newArray_BmnGeoNavigator);
      instance.SetDelete(&delete_BmnGeoNavigator);
      instance.SetDeleteArray(&deleteArray_BmnGeoNavigator);
      instance.SetDestructor(&destruct_BmnGeoNavigator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGeoNavigator*)
   {
      return GenerateInitInstanceLocal((::BmnGeoNavigator*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGeoNavigator*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnGeoNavigator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnGeoNavigator*)nullptr)->GetClass();
      BmnGeoNavigator_TClassManip(theClass);
   return theClass;
   }

   static void BmnGeoNavigator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnKalmanFilter_Dictionary();
   static void BmnKalmanFilter_TClassManip(TClass*);
   static void *new_BmnKalmanFilter(void *p = nullptr);
   static void *newArray_BmnKalmanFilter(Long_t size, void *p);
   static void delete_BmnKalmanFilter(void *p);
   static void deleteArray_BmnKalmanFilter(void *p);
   static void destruct_BmnKalmanFilter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnKalmanFilter*)
   {
      ::BmnKalmanFilter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnKalmanFilter));
      static ::ROOT::TGenericClassInfo 
         instance("BmnKalmanFilter", "BmnKalmanFilter.h", 28,
                  typeid(::BmnKalmanFilter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnKalmanFilter_Dictionary, isa_proxy, 4,
                  sizeof(::BmnKalmanFilter) );
      instance.SetNew(&new_BmnKalmanFilter);
      instance.SetNewArray(&newArray_BmnKalmanFilter);
      instance.SetDelete(&delete_BmnKalmanFilter);
      instance.SetDeleteArray(&deleteArray_BmnKalmanFilter);
      instance.SetDestructor(&destruct_BmnKalmanFilter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnKalmanFilter*)
   {
      return GenerateInitInstanceLocal((::BmnKalmanFilter*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnKalmanFilter*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnKalmanFilter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnKalmanFilter*)nullptr)->GetClass();
      BmnKalmanFilter_TClassManip(theClass);
   return theClass;
   }

   static void BmnKalmanFilter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnProfRawTools_Dictionary();
   static void BmnProfRawTools_TClassManip(TClass*);
   static void *new_BmnProfRawTools(void *p = nullptr);
   static void *newArray_BmnProfRawTools(Long_t size, void *p);
   static void delete_BmnProfRawTools(void *p);
   static void deleteArray_BmnProfRawTools(void *p);
   static void destruct_BmnProfRawTools(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnProfRawTools*)
   {
      ::BmnProfRawTools *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnProfRawTools));
      static ::ROOT::TGenericClassInfo 
         instance("BmnProfRawTools", "BmnProfRawTools.h", 14,
                  typeid(::BmnProfRawTools), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnProfRawTools_Dictionary, isa_proxy, 4,
                  sizeof(::BmnProfRawTools) );
      instance.SetNew(&new_BmnProfRawTools);
      instance.SetNewArray(&newArray_BmnProfRawTools);
      instance.SetDelete(&delete_BmnProfRawTools);
      instance.SetDeleteArray(&deleteArray_BmnProfRawTools);
      instance.SetDestructor(&destruct_BmnProfRawTools);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnProfRawTools*)
   {
      return GenerateInitInstanceLocal((::BmnProfRawTools*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnProfRawTools*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnProfRawTools_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnProfRawTools*)nullptr)->GetClass();
      BmnProfRawTools_TClassManip(theClass);
   return theClass;
   }

   static void BmnProfRawTools_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnFileSource(void *p);
   static void deleteArray_BmnFileSource(void *p);
   static void destruct_BmnFileSource(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFileSource*)
   {
      ::BmnFileSource *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnFileSource >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnFileSource", ::BmnFileSource::Class_Version(), "BmnFileSource.h", 25,
                  typeid(::BmnFileSource), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnFileSource::Dictionary, isa_proxy, 4,
                  sizeof(::BmnFileSource) );
      instance.SetDelete(&delete_BmnFileSource);
      instance.SetDeleteArray(&deleteArray_BmnFileSource);
      instance.SetDestructor(&destruct_BmnFileSource);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFileSource*)
   {
      return GenerateInitInstanceLocal((::BmnFileSource*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFileSource*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTrigInfo(void *p = nullptr);
   static void *newArray_BmnTrigInfo(Long_t size, void *p);
   static void delete_BmnTrigInfo(void *p);
   static void deleteArray_BmnTrigInfo(void *p);
   static void destruct_BmnTrigInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTrigInfo*)
   {
      ::BmnTrigInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTrigInfo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTrigInfo", ::BmnTrigInfo::Class_Version(), "BmnTrigInfo.h", 14,
                  typeid(::BmnTrigInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTrigInfo::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTrigInfo) );
      instance.SetNew(&new_BmnTrigInfo);
      instance.SetNewArray(&newArray_BmnTrigInfo);
      instance.SetDelete(&delete_BmnTrigInfo);
      instance.SetDeleteArray(&deleteArray_BmnTrigInfo);
      instance.SetDestructor(&destruct_BmnTrigInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTrigInfo*)
   {
      return GenerateInitInstanceLocal((::BmnTrigInfo*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTrigInfo*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnEventHeader(void *p = nullptr);
   static void *newArray_BmnEventHeader(Long_t size, void *p);
   static void delete_BmnEventHeader(void *p);
   static void deleteArray_BmnEventHeader(void *p);
   static void destruct_BmnEventHeader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnEventHeader*)
   {
      ::BmnEventHeader *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnEventHeader >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnEventHeader", ::BmnEventHeader::Class_Version(), "BmnEventHeader.h", 17,
                  typeid(::BmnEventHeader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnEventHeader::Dictionary, isa_proxy, 4,
                  sizeof(::BmnEventHeader) );
      instance.SetNew(&new_BmnEventHeader);
      instance.SetNewArray(&newArray_BmnEventHeader);
      instance.SetDelete(&delete_BmnEventHeader);
      instance.SetDeleteArray(&deleteArray_BmnEventHeader);
      instance.SetDestructor(&destruct_BmnEventHeader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnEventHeader*)
   {
      return GenerateInitInstanceLocal((::BmnEventHeader*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnEventHeader*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DigiArrays(void *p = nullptr);
   static void *newArray_DigiArrays(Long_t size, void *p);
   static void delete_DigiArrays(void *p);
   static void deleteArray_DigiArrays(void *p);
   static void destruct_DigiArrays(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DigiArrays*)
   {
      ::DigiArrays *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DigiArrays >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("DigiArrays", ::DigiArrays::Class_Version(), "DigiArrays.h", 8,
                  typeid(::DigiArrays), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DigiArrays::Dictionary, isa_proxy, 4,
                  sizeof(::DigiArrays) );
      instance.SetNew(&new_DigiArrays);
      instance.SetNewArray(&newArray_DigiArrays);
      instance.SetDelete(&delete_DigiArrays);
      instance.SetDeleteArray(&deleteArray_DigiArrays);
      instance.SetDestructor(&destruct_DigiArrays);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DigiArrays*)
   {
      return GenerateInitInstanceLocal((::DigiArrays*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DigiArrays*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnDecoSource(void *p = nullptr);
   static void *newArray_BmnDecoSource(Long_t size, void *p);
   static void delete_BmnDecoSource(void *p);
   static void deleteArray_BmnDecoSource(void *p);
   static void destruct_BmnDecoSource(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnDecoSource*)
   {
      ::BmnDecoSource *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnDecoSource >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnDecoSource", ::BmnDecoSource::Class_Version(), "BmnDecoSource.h", 30,
                  typeid(::BmnDecoSource), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnDecoSource::Dictionary, isa_proxy, 4,
                  sizeof(::BmnDecoSource) );
      instance.SetNew(&new_BmnDecoSource);
      instance.SetNewArray(&newArray_BmnDecoSource);
      instance.SetDelete(&delete_BmnDecoSource);
      instance.SetDeleteArray(&deleteArray_BmnDecoSource);
      instance.SetDestructor(&destruct_BmnDecoSource);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnDecoSource*)
   {
      return GenerateInitInstanceLocal((::BmnDecoSource*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnDecoSource*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnADCDigit(void *p = nullptr);
   static void *newArray_BmnADCDigit(Long_t size, void *p);
   static void delete_BmnADCDigit(void *p);
   static void deleteArray_BmnADCDigit(void *p);
   static void destruct_BmnADCDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnADCDigit*)
   {
      ::BmnADCDigit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnADCDigit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnADCDigit", ::BmnADCDigit::Class_Version(), "BmnADCDigit.h", 10,
                  typeid(::BmnADCDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnADCDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnADCDigit) );
      instance.SetNew(&new_BmnADCDigit);
      instance.SetNewArray(&newArray_BmnADCDigit);
      instance.SetDelete(&delete_BmnADCDigit);
      instance.SetDeleteArray(&deleteArray_BmnADCDigit);
      instance.SetDestructor(&destruct_BmnADCDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnADCDigit*)
   {
      return GenerateInitInstanceLocal((::BmnADCDigit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnADCDigit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnProfilometerSource(void *p = nullptr);
   static void *newArray_BmnProfilometerSource(Long_t size, void *p);
   static void delete_BmnProfilometerSource(void *p);
   static void deleteArray_BmnProfilometerSource(void *p);
   static void destruct_BmnProfilometerSource(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnProfilometerSource*)
   {
      ::BmnProfilometerSource *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnProfilometerSource >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnProfilometerSource", ::BmnProfilometerSource::Class_Version(), "BmnProfilometerSource.h", 41,
                  typeid(::BmnProfilometerSource), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnProfilometerSource::Dictionary, isa_proxy, 4,
                  sizeof(::BmnProfilometerSource) );
      instance.SetNew(&new_BmnProfilometerSource);
      instance.SetNewArray(&newArray_BmnProfilometerSource);
      instance.SetDelete(&delete_BmnProfilometerSource);
      instance.SetDeleteArray(&deleteArray_BmnProfilometerSource);
      instance.SetDestructor(&destruct_BmnProfilometerSource);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnProfilometerSource*)
   {
      return GenerateInitInstanceLocal((::BmnProfilometerSource*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnProfilometerSource*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnOnlineShmSource(void *p = nullptr);
   static void *newArray_BmnOnlineShmSource(Long_t size, void *p);
   static void delete_BmnOnlineShmSource(void *p);
   static void deleteArray_BmnOnlineShmSource(void *p);
   static void destruct_BmnOnlineShmSource(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnOnlineShmSource*)
   {
      ::BmnOnlineShmSource *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnOnlineShmSource >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnOnlineShmSource", ::BmnOnlineShmSource::Class_Version(), "BmnOnlineShmSource.h", 14,
                  typeid(::BmnOnlineShmSource), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnOnlineShmSource::Dictionary, isa_proxy, 4,
                  sizeof(::BmnOnlineShmSource) );
      instance.SetNew(&new_BmnOnlineShmSource);
      instance.SetNewArray(&newArray_BmnOnlineShmSource);
      instance.SetDelete(&delete_BmnOnlineShmSource);
      instance.SetDeleteArray(&deleteArray_BmnOnlineShmSource);
      instance.SetDestructor(&destruct_BmnOnlineShmSource);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnOnlineShmSource*)
   {
      return GenerateInitInstanceLocal((::BmnOnlineShmSource*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnOnlineShmSource*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSpillHeader(void *p = nullptr);
   static void *newArray_BmnSpillHeader(Long_t size, void *p);
   static void delete_BmnSpillHeader(void *p);
   static void deleteArray_BmnSpillHeader(void *p);
   static void destruct_BmnSpillHeader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSpillHeader*)
   {
      ::BmnSpillHeader *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSpillHeader >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSpillHeader", ::BmnSpillHeader::Class_Version(), "BmnSpillHeader.h", 12,
                  typeid(::BmnSpillHeader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSpillHeader::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSpillHeader) );
      instance.SetNew(&new_BmnSpillHeader);
      instance.SetNewArray(&newArray_BmnSpillHeader);
      instance.SetDelete(&delete_BmnSpillHeader);
      instance.SetDeleteArray(&deleteArray_BmnSpillHeader);
      instance.SetDestructor(&destruct_BmnSpillHeader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSpillHeader*)
   {
      return GenerateInitInstanceLocal((::BmnSpillHeader*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSpillHeader*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DigiRunHeader(void *p = nullptr);
   static void *newArray_DigiRunHeader(Long_t size, void *p);
   static void delete_DigiRunHeader(void *p);
   static void deleteArray_DigiRunHeader(void *p);
   static void destruct_DigiRunHeader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DigiRunHeader*)
   {
      ::DigiRunHeader *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DigiRunHeader >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("DigiRunHeader", ::DigiRunHeader::Class_Version(), "DigiRunHeader.h", 10,
                  typeid(::DigiRunHeader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DigiRunHeader::Dictionary, isa_proxy, 4,
                  sizeof(::DigiRunHeader) );
      instance.SetNew(&new_DigiRunHeader);
      instance.SetNewArray(&newArray_DigiRunHeader);
      instance.SetDelete(&delete_DigiRunHeader);
      instance.SetDeleteArray(&deleteArray_DigiRunHeader);
      instance.SetDestructor(&destruct_DigiRunHeader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DigiRunHeader*)
   {
      return GenerateInitInstanceLocal((::DigiRunHeader*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DigiRunHeader*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DstRunHeader(void *p = nullptr);
   static void *newArray_DstRunHeader(Long_t size, void *p);
   static void delete_DstRunHeader(void *p);
   static void deleteArray_DstRunHeader(void *p);
   static void destruct_DstRunHeader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DstRunHeader*)
   {
      ::DstRunHeader *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DstRunHeader >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("DstRunHeader", ::DstRunHeader::Class_Version(), "DstRunHeader.h", 8,
                  typeid(::DstRunHeader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DstRunHeader::Dictionary, isa_proxy, 4,
                  sizeof(::DstRunHeader) );
      instance.SetNew(&new_DstRunHeader);
      instance.SetNewArray(&newArray_DstRunHeader);
      instance.SetDelete(&delete_DstRunHeader);
      instance.SetDeleteArray(&deleteArray_DstRunHeader);
      instance.SetDestructor(&destruct_DstRunHeader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DstRunHeader*)
   {
      return GenerateInitInstanceLocal((::DstRunHeader*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DstRunHeader*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DstEventHeader(void *p = nullptr);
   static void *newArray_DstEventHeader(Long_t size, void *p);
   static void delete_DstEventHeader(void *p);
   static void deleteArray_DstEventHeader(void *p);
   static void destruct_DstEventHeader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DstEventHeader*)
   {
      ::DstEventHeader *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DstEventHeader >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("DstEventHeader", ::DstEventHeader::Class_Version(), "DstEventHeader.h", 14,
                  typeid(::DstEventHeader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DstEventHeader::Dictionary, isa_proxy, 4,
                  sizeof(::DstEventHeader) );
      instance.SetNew(&new_DstEventHeader);
      instance.SetNewArray(&newArray_DstEventHeader);
      instance.SetDelete(&delete_DstEventHeader);
      instance.SetDeleteArray(&deleteArray_DstEventHeader);
      instance.SetDestructor(&destruct_DstEventHeader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DstEventHeader*)
   {
      return GenerateInitInstanceLocal((::DstEventHeader*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DstEventHeader*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTDCDigit(void *p = nullptr);
   static void *newArray_BmnTDCDigit(Long_t size, void *p);
   static void delete_BmnTDCDigit(void *p);
   static void deleteArray_BmnTDCDigit(void *p);
   static void destruct_BmnTDCDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTDCDigit*)
   {
      ::BmnTDCDigit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTDCDigit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTDCDigit", ::BmnTDCDigit::Class_Version(), "BmnTDCDigit.h", 8,
                  typeid(::BmnTDCDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTDCDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTDCDigit) );
      instance.SetNew(&new_BmnTDCDigit);
      instance.SetNewArray(&newArray_BmnTDCDigit);
      instance.SetDelete(&delete_BmnTDCDigit);
      instance.SetDeleteArray(&deleteArray_BmnTDCDigit);
      instance.SetDestructor(&destruct_BmnTDCDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTDCDigit*)
   {
      return GenerateInitInstanceLocal((::BmnTDCDigit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTDCDigit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTQDCADCDigit(void *p = nullptr);
   static void *newArray_BmnTQDCADCDigit(Long_t size, void *p);
   static void delete_BmnTQDCADCDigit(void *p);
   static void deleteArray_BmnTQDCADCDigit(void *p);
   static void destruct_BmnTQDCADCDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTQDCADCDigit*)
   {
      ::BmnTQDCADCDigit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTQDCADCDigit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTQDCADCDigit", ::BmnTQDCADCDigit::Class_Version(), "BmnTQDCADCDigit.h", 20,
                  typeid(::BmnTQDCADCDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTQDCADCDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTQDCADCDigit) );
      instance.SetNew(&new_BmnTQDCADCDigit);
      instance.SetNewArray(&newArray_BmnTQDCADCDigit);
      instance.SetDelete(&delete_BmnTQDCADCDigit);
      instance.SetDeleteArray(&deleteArray_BmnTQDCADCDigit);
      instance.SetDestructor(&destruct_BmnTQDCADCDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTQDCADCDigit*)
   {
      return GenerateInitInstanceLocal((::BmnTQDCADCDigit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTQDCADCDigit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTTBDigit(void *p = nullptr);
   static void *newArray_BmnTTBDigit(Long_t size, void *p);
   static void delete_BmnTTBDigit(void *p);
   static void deleteArray_BmnTTBDigit(void *p);
   static void destruct_BmnTTBDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTTBDigit*)
   {
      ::BmnTTBDigit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTTBDigit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTTBDigit", ::BmnTTBDigit::Class_Version(), "BmnTTBDigit.h", 8,
                  typeid(::BmnTTBDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTTBDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTTBDigit) );
      instance.SetNew(&new_BmnTTBDigit);
      instance.SetNewArray(&newArray_BmnTTBDigit);
      instance.SetDelete(&delete_BmnTTBDigit);
      instance.SetDeleteArray(&deleteArray_BmnTTBDigit);
      instance.SetDestructor(&destruct_BmnTTBDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTTBDigit*)
   {
      return GenerateInitInstanceLocal((::BmnTTBDigit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTTBDigit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMSCDigit(void *p = nullptr);
   static void *newArray_BmnMSCDigit(Long_t size, void *p);
   static void delete_BmnMSCDigit(void *p);
   static void deleteArray_BmnMSCDigit(void *p);
   static void destruct_BmnMSCDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMSCDigit*)
   {
      ::BmnMSCDigit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMSCDigit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMSCDigit", ::BmnMSCDigit::Class_Version(), "BmnMSCDigit.h", 9,
                  typeid(::BmnMSCDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMSCDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMSCDigit) );
      instance.SetNew(&new_BmnMSCDigit);
      instance.SetNewArray(&newArray_BmnMSCDigit);
      instance.SetDelete(&delete_BmnMSCDigit);
      instance.SetDeleteArray(&deleteArray_BmnMSCDigit);
      instance.SetDestructor(&destruct_BmnMSCDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMSCDigit*)
   {
      return GenerateInitInstanceLocal((::BmnMSCDigit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMSCDigit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnHRBDigit(void *p = nullptr);
   static void *newArray_BmnHRBDigit(Long_t size, void *p);
   static void delete_BmnHRBDigit(void *p);
   static void deleteArray_BmnHRBDigit(void *p);
   static void destruct_BmnHRBDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHRBDigit*)
   {
      ::BmnHRBDigit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHRBDigit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHRBDigit", ::BmnHRBDigit::Class_Version(), "BmnHRBDigit.h", 8,
                  typeid(::BmnHRBDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHRBDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHRBDigit) );
      instance.SetNew(&new_BmnHRBDigit);
      instance.SetNewArray(&newArray_BmnHRBDigit);
      instance.SetDelete(&delete_BmnHRBDigit);
      instance.SetDeleteArray(&deleteArray_BmnHRBDigit);
      instance.SetDestructor(&destruct_BmnHRBDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHRBDigit*)
   {
      return GenerateInitInstanceLocal((::BmnHRBDigit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHRBDigit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSyncDigit(void *p = nullptr);
   static void *newArray_BmnSyncDigit(Long_t size, void *p);
   static void delete_BmnSyncDigit(void *p);
   static void deleteArray_BmnSyncDigit(void *p);
   static void destruct_BmnSyncDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSyncDigit*)
   {
      ::BmnSyncDigit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSyncDigit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSyncDigit", ::BmnSyncDigit::Class_Version(), "BmnSyncDigit.h", 8,
                  typeid(::BmnSyncDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSyncDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSyncDigit) );
      instance.SetNew(&new_BmnSyncDigit);
      instance.SetNewArray(&newArray_BmnSyncDigit);
      instance.SetDelete(&delete_BmnSyncDigit);
      instance.SetDeleteArray(&deleteArray_BmnSyncDigit);
      instance.SetDestructor(&destruct_BmnSyncDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSyncDigit*)
   {
      return GenerateInitInstanceLocal((::BmnSyncDigit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSyncDigit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTrigDigit(void *p = nullptr);
   static void *newArray_BmnTrigDigit(Long_t size, void *p);
   static void delete_BmnTrigDigit(void *p);
   static void deleteArray_BmnTrigDigit(void *p);
   static void destruct_BmnTrigDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTrigDigit*)
   {
      ::BmnTrigDigit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTrigDigit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTrigDigit", ::BmnTrigDigit::Class_Version(), "BmnTrigDigit.h", 8,
                  typeid(::BmnTrigDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTrigDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTrigDigit) );
      instance.SetNew(&new_BmnTrigDigit);
      instance.SetNewArray(&newArray_BmnTrigDigit);
      instance.SetDelete(&delete_BmnTrigDigit);
      instance.SetDeleteArray(&deleteArray_BmnTrigDigit);
      instance.SetDestructor(&destruct_BmnTrigDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTrigDigit*)
   {
      return GenerateInitInstanceLocal((::BmnTrigDigit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTrigDigit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTrigWaveDigit(void *p = nullptr);
   static void *newArray_BmnTrigWaveDigit(Long_t size, void *p);
   static void delete_BmnTrigWaveDigit(void *p);
   static void deleteArray_BmnTrigWaveDigit(void *p);
   static void destruct_BmnTrigWaveDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTrigWaveDigit*)
   {
      ::BmnTrigWaveDigit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTrigWaveDigit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTrigWaveDigit", ::BmnTrigWaveDigit::Class_Version(), "BmnTrigWaveDigit.h", 23,
                  typeid(::BmnTrigWaveDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTrigWaveDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTrigWaveDigit) );
      instance.SetNew(&new_BmnTrigWaveDigit);
      instance.SetNewArray(&newArray_BmnTrigWaveDigit);
      instance.SetDelete(&delete_BmnTrigWaveDigit);
      instance.SetDeleteArray(&deleteArray_BmnTrigWaveDigit);
      instance.SetDestructor(&destruct_BmnTrigWaveDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTrigWaveDigit*)
   {
      return GenerateInitInstanceLocal((::BmnTrigWaveDigit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTrigWaveDigit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmMCTrack(void *p = nullptr);
   static void *newArray_CbmMCTrack(Long_t size, void *p);
   static void delete_CbmMCTrack(void *p);
   static void deleteArray_CbmMCTrack(void *p);
   static void destruct_CbmMCTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmMCTrack*)
   {
      ::CbmMCTrack *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmMCTrack >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmMCTrack", ::CbmMCTrack::Class_Version(), "CbmMCTrack.h", 27,
                  typeid(::CbmMCTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmMCTrack::Dictionary, isa_proxy, 4,
                  sizeof(::CbmMCTrack) );
      instance.SetNew(&new_CbmMCTrack);
      instance.SetNewArray(&newArray_CbmMCTrack);
      instance.SetDelete(&delete_CbmMCTrack);
      instance.SetDeleteArray(&deleteArray_CbmMCTrack);
      instance.SetDestructor(&destruct_CbmMCTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmMCTrack*)
   {
      return GenerateInitInstanceLocal((::CbmMCTrack*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmMCTrack*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStack(void *p = nullptr);
   static void *newArray_CbmStack(Long_t size, void *p);
   static void delete_CbmStack(void *p);
   static void deleteArray_CbmStack(void *p);
   static void destruct_CbmStack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStack*)
   {
      ::CbmStack *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStack >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStack", ::CbmStack::Class_Version(), "CbmStack.h", 43,
                  typeid(::CbmStack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStack::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStack) );
      instance.SetNew(&new_CbmStack);
      instance.SetNewArray(&newArray_CbmStack);
      instance.SetDelete(&delete_CbmStack);
      instance.SetDeleteArray(&deleteArray_CbmStack);
      instance.SetDestructor(&destruct_CbmStack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStack*)
   {
      return GenerateInitInstanceLocal((::CbmStack*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStack*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_StripCluster(void *p = nullptr);
   static void *newArray_StripCluster(Long_t size, void *p);
   static void delete_StripCluster(void *p);
   static void deleteArray_StripCluster(void *p);
   static void destruct_StripCluster(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StripCluster*)
   {
      ::StripCluster *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::StripCluster >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("StripCluster", ::StripCluster::Class_Version(), "BmnStripData.h", 145,
                  typeid(::StripCluster), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::StripCluster::Dictionary, isa_proxy, 4,
                  sizeof(::StripCluster) );
      instance.SetNew(&new_StripCluster);
      instance.SetNewArray(&newArray_StripCluster);
      instance.SetDelete(&delete_StripCluster);
      instance.SetDeleteArray(&deleteArray_StripCluster);
      instance.SetDestructor(&destruct_StripCluster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StripCluster*)
   {
      return GenerateInitInstanceLocal((::StripCluster*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::StripCluster*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnStripDigit(void *p = nullptr);
   static void *newArray_BmnStripDigit(Long_t size, void *p);
   static void delete_BmnStripDigit(void *p);
   static void deleteArray_BmnStripDigit(void *p);
   static void destruct_BmnStripDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnStripDigit*)
   {
      ::BmnStripDigit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnStripDigit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnStripDigit", ::BmnStripDigit::Class_Version(), "BmnStripDigit.h", 14,
                  typeid(::BmnStripDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnStripDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnStripDigit) );
      instance.SetNew(&new_BmnStripDigit);
      instance.SetNewArray(&newArray_BmnStripDigit);
      instance.SetDelete(&delete_BmnStripDigit);
      instance.SetDeleteArray(&deleteArray_BmnStripDigit);
      instance.SetDestructor(&destruct_BmnStripDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnStripDigit*)
   {
      return GenerateInitInstanceLocal((::BmnStripDigit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnStripDigit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnCaloDigit(void *p = nullptr);
   static void *newArray_BmnCaloDigit(Long_t size, void *p);
   static void delete_BmnCaloDigit(void *p);
   static void deleteArray_BmnCaloDigit(void *p);
   static void destruct_BmnCaloDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnCaloDigit*)
   {
      ::BmnCaloDigit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnCaloDigit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnCaloDigit", ::BmnCaloDigit::Class_Version(), "BmnCaloDigit.h", 14,
                  typeid(::BmnCaloDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnCaloDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnCaloDigit) );
      instance.SetNew(&new_BmnCaloDigit);
      instance.SetNewArray(&newArray_BmnCaloDigit);
      instance.SetDelete(&delete_BmnCaloDigit);
      instance.SetDeleteArray(&deleteArray_BmnCaloDigit);
      instance.SetDestructor(&destruct_BmnCaloDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnCaloDigit*)
   {
      return GenerateInitInstanceLocal((::BmnCaloDigit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnCaloDigit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTacquilaDigit(void *p = nullptr);
   static void *newArray_BmnTacquilaDigit(Long_t size, void *p);
   static void delete_BmnTacquilaDigit(void *p);
   static void deleteArray_BmnTacquilaDigit(void *p);
   static void destruct_BmnTacquilaDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTacquilaDigit*)
   {
      ::BmnTacquilaDigit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTacquilaDigit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTacquilaDigit", ::BmnTacquilaDigit::Class_Version(), "BmnTacquilaDigit.h", 6,
                  typeid(::BmnTacquilaDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTacquilaDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTacquilaDigit) );
      instance.SetNew(&new_BmnTacquilaDigit);
      instance.SetNewArray(&newArray_BmnTacquilaDigit);
      instance.SetDelete(&delete_BmnTacquilaDigit);
      instance.SetDeleteArray(&deleteArray_BmnTacquilaDigit);
      instance.SetDestructor(&destruct_BmnTacquilaDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTacquilaDigit*)
   {
      return GenerateInitInstanceLocal((::BmnTacquilaDigit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTacquilaDigit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnDigiContainerTemplate(void *p = nullptr);
   static void *newArray_BmnDigiContainerTemplate(Long_t size, void *p);
   static void delete_BmnDigiContainerTemplate(void *p);
   static void deleteArray_BmnDigiContainerTemplate(void *p);
   static void destruct_BmnDigiContainerTemplate(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnDigiContainerTemplate*)
   {
      ::BmnDigiContainerTemplate *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnDigiContainerTemplate >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnDigiContainerTemplate", ::BmnDigiContainerTemplate::Class_Version(), "BmnDigiContainerTemplate.h", 32,
                  typeid(::BmnDigiContainerTemplate), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnDigiContainerTemplate::Dictionary, isa_proxy, 4,
                  sizeof(::BmnDigiContainerTemplate) );
      instance.SetNew(&new_BmnDigiContainerTemplate);
      instance.SetNewArray(&newArray_BmnDigiContainerTemplate);
      instance.SetDelete(&delete_BmnDigiContainerTemplate);
      instance.SetDeleteArray(&deleteArray_BmnDigiContainerTemplate);
      instance.SetDestructor(&destruct_BmnDigiContainerTemplate);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnDigiContainerTemplate*)
   {
      return GenerateInitInstanceLocal((::BmnDigiContainerTemplate*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnDigiContainerTemplate*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnIdentifiableTrack(void *p = nullptr);
   static void *newArray_BmnIdentifiableTrack(Long_t size, void *p);
   static void delete_BmnIdentifiableTrack(void *p);
   static void deleteArray_BmnIdentifiableTrack(void *p);
   static void destruct_BmnIdentifiableTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnIdentifiableTrack*)
   {
      ::BmnIdentifiableTrack *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnIdentifiableTrack >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnIdentifiableTrack", ::BmnIdentifiableTrack::Class_Version(), "BmnIdentifiableTrack.h", 13,
                  typeid(::BmnIdentifiableTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnIdentifiableTrack::Dictionary, isa_proxy, 4,
                  sizeof(::BmnIdentifiableTrack) );
      instance.SetNew(&new_BmnIdentifiableTrack);
      instance.SetNewArray(&newArray_BmnIdentifiableTrack);
      instance.SetDelete(&delete_BmnIdentifiableTrack);
      instance.SetDeleteArray(&deleteArray_BmnIdentifiableTrack);
      instance.SetDestructor(&destruct_BmnIdentifiableTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnIdentifiableTrack*)
   {
      return GenerateInitInstanceLocal((::BmnIdentifiableTrack*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnIdentifiableTrack*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTrackMatch(void *p = nullptr);
   static void *newArray_BmnTrackMatch(Long_t size, void *p);
   static void delete_BmnTrackMatch(void *p);
   static void deleteArray_BmnTrackMatch(void *p);
   static void destruct_BmnTrackMatch(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTrackMatch*)
   {
      ::BmnTrackMatch *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTrackMatch >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTrackMatch", ::BmnTrackMatch::Class_Version(), "BmnTrackMatch.h", 18,
                  typeid(::BmnTrackMatch), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTrackMatch::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTrackMatch) );
      instance.SetNew(&new_BmnTrackMatch);
      instance.SetNewArray(&newArray_BmnTrackMatch);
      instance.SetDelete(&delete_BmnTrackMatch);
      instance.SetDeleteArray(&deleteArray_BmnTrackMatch);
      instance.SetDestructor(&destruct_BmnTrackMatch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTrackMatch*)
   {
      return GenerateInitInstanceLocal((::BmnTrackMatch*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTrackMatch*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnVertex(void *p = nullptr);
   static void *newArray_BmnVertex(Long_t size, void *p);
   static void delete_BmnVertex(void *p);
   static void deleteArray_BmnVertex(void *p);
   static void destruct_BmnVertex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnVertex*)
   {
      ::BmnVertex *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnVertex >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnVertex", ::BmnVertex::Class_Version(), "BmnVertex.h", 21,
                  typeid(::BmnVertex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnVertex::Dictionary, isa_proxy, 4,
                  sizeof(::BmnVertex) );
      instance.SetNew(&new_BmnVertex);
      instance.SetNewArray(&newArray_BmnVertex);
      instance.SetDelete(&delete_BmnVertex);
      instance.SetDeleteArray(&deleteArray_BmnVertex);
      instance.SetDestructor(&destruct_BmnVertex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnVertex*)
   {
      return GenerateInitInstanceLocal((::BmnVertex*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnVertex*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnEventQuality(void *p = nullptr);
   static void *newArray_BmnEventQuality(Long_t size, void *p);
   static void delete_BmnEventQuality(void *p);
   static void deleteArray_BmnEventQuality(void *p);
   static void destruct_BmnEventQuality(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnEventQuality*)
   {
      ::BmnEventQuality *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnEventQuality >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnEventQuality", ::BmnEventQuality::Class_Version(), "BmnEventQuality.h", 9,
                  typeid(::BmnEventQuality), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnEventQuality::Dictionary, isa_proxy, 4,
                  sizeof(::BmnEventQuality) );
      instance.SetNew(&new_BmnEventQuality);
      instance.SetNewArray(&newArray_BmnEventQuality);
      instance.SetDelete(&delete_BmnEventQuality);
      instance.SetDeleteArray(&deleteArray_BmnEventQuality);
      instance.SetDestructor(&destruct_BmnEventQuality);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnEventQuality*)
   {
      return GenerateInitInstanceLocal((::BmnEventQuality*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnEventQuality*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTask(void *p = nullptr);
   static void *newArray_BmnTask(Long_t size, void *p);
   static void delete_BmnTask(void *p);
   static void deleteArray_BmnTask(void *p);
   static void destruct_BmnTask(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTask*)
   {
      ::BmnTask *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTask >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTask", ::BmnTask::Class_Version(), "BmnTask.h", 13,
                  typeid(::BmnTask), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTask::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTask) );
      instance.SetNew(&new_BmnTask);
      instance.SetNewArray(&newArray_BmnTask);
      instance.SetDelete(&delete_BmnTask);
      instance.SetDeleteArray(&deleteArray_BmnTask);
      instance.SetDestructor(&destruct_BmnTask);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTask*)
   {
      return GenerateInitInstanceLocal((::BmnTask*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTask*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFunctionSet*)
   {
      ::BmnFunctionSet *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnFunctionSet >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnFunctionSet", ::BmnFunctionSet::Class_Version(), "BmnFunctionSet.h", 10,
                  typeid(::BmnFunctionSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnFunctionSet::Dictionary, isa_proxy, 4,
                  sizeof(::BmnFunctionSet) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFunctionSet*)
   {
      return GenerateInitInstanceLocal((::BmnFunctionSet*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFunctionSet*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr CbmStsPoint::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsPoint::Class_Name()
{
   return "CbmStsPoint";
}

//______________________________________________________________________________
const char *CbmStsPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsPoint*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsPoint*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsPoint*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsPoint*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmDigi::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmDigi::Class_Name()
{
   return "CbmDigi";
}

//______________________________________________________________________________
const char *CbmDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmDigi*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmDigi*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmDigi*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmDigi*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmBaseHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmBaseHit::Class_Name()
{
   return "CbmBaseHit";
}

//______________________________________________________________________________
const char *CbmBaseHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmBaseHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmBaseHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmBaseHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmBaseHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmBaseHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmBaseHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmBaseHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmHit::Class_Name()
{
   return "CbmHit";
}

//______________________________________________________________________________
const char *CbmHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStripHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStripHit::Class_Name()
{
   return "CbmStripHit";
}

//______________________________________________________________________________
const char *CbmStripHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStripHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStripHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStripHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStripHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStripHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStripHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStripHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmVertex::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmVertex::Class_Name()
{
   return "CbmVertex";
}

//______________________________________________________________________________
const char *CbmVertex::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmVertex*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmVertex::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmVertex*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmVertex::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmVertex*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmVertex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmVertex*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsTrack::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsTrack::Class_Name()
{
   return "CbmStsTrack";
}

//______________________________________________________________________________
const char *CbmStsTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsTrack*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsTrack*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsTrack*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsTrack*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsTrackFinder::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsTrackFinder::Class_Name()
{
   return "CbmStsTrackFinder";
}

//______________________________________________________________________________
const char *CbmStsTrackFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsTrackFinder*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsTrackFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsTrackFinder*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsTrackFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsTrackFinder*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsTrackFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsTrackFinder*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsTrackFitter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsTrackFitter::Class_Name()
{
   return "CbmStsTrackFitter";
}

//______________________________________________________________________________
const char *CbmStsTrackFitter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsTrackFitter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsTrackFitter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsTrackFitter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsTrackFitter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsTrackFitter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsTrackFitter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsTrackFitter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmTofMerger::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmTofMerger::Class_Name()
{
   return "CbmTofMerger";
}

//______________________________________________________________________________
const char *CbmTofMerger::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmTofMerger*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmTofMerger::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmTofMerger*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmTofMerger::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmTofMerger*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmTofMerger::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmTofMerger*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmTrackMerger::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmTrackMerger::Class_Name()
{
   return "CbmTrackMerger";
}

//______________________________________________________________________________
const char *CbmTrackMerger::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmTrackMerger*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmTrackMerger::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmTrackMerger*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmTrackMerger::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmTrackMerger*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmTrackMerger::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmTrackMerger*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmPrimaryVertexFinder::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmPrimaryVertexFinder::Class_Name()
{
   return "CbmPrimaryVertexFinder";
}

//______________________________________________________________________________
const char *CbmPrimaryVertexFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmPrimaryVertexFinder*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmPrimaryVertexFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmPrimaryVertexFinder*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmPrimaryVertexFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmPrimaryVertexFinder*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmPrimaryVertexFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmPrimaryVertexFinder*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmFindPrimaryVertex::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmFindPrimaryVertex::Class_Name()
{
   return "CbmFindPrimaryVertex";
}

//______________________________________________________________________________
const char *CbmFindPrimaryVertex::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmFindPrimaryVertex*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmFindPrimaryVertex::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmFindPrimaryVertex*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmFindPrimaryVertex::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmFindPrimaryVertex*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmFindPrimaryVertex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmFindPrimaryVertex*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmTrackMatch::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmTrackMatch::Class_Name()
{
   return "CbmTrackMatch";
}

//______________________________________________________________________________
const char *CbmTrackMatch::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmTrackMatch*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmTrackMatch::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmTrackMatch*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmTrackMatch::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmTrackMatch*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmTrackMatch::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmTrackMatch*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmGlobalTrack::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmGlobalTrack::Class_Name()
{
   return "CbmGlobalTrack";
}

//______________________________________________________________________________
const char *CbmGlobalTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmGlobalTrack*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmGlobalTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmGlobalTrack*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmGlobalTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmGlobalTrack*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmGlobalTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmGlobalTrack*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnDetectorList::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnDetectorList::Class_Name()
{
   return "BmnDetectorList";
}

//______________________________________________________________________________
const char *BmnDetectorList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDetectorList*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnDetectorList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDetectorList*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnDetectorList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDetectorList*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnDetectorList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDetectorList*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmMvdDetectorId::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmMvdDetectorId::Class_Name()
{
   return "CbmMvdDetectorId";
}

//______________________________________________________________________________
const char *CbmMvdDetectorId::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmMvdDetectorId*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmMvdDetectorId::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmMvdDetectorId*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmMvdDetectorId::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmMvdDetectorId*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmMvdDetectorId::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmMvdDetectorId*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmMvdGeoPar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmMvdGeoPar::Class_Name()
{
   return "CbmMvdGeoPar";
}

//______________________________________________________________________________
const char *CbmMvdGeoPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmMvdGeoPar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmMvdGeoPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmMvdGeoPar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmMvdGeoPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmMvdGeoPar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmMvdGeoPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmMvdGeoPar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmMvdPoint::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmMvdPoint::Class_Name()
{
   return "CbmMvdPoint";
}

//______________________________________________________________________________
const char *CbmMvdPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmMvdPoint*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmMvdPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmMvdPoint*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmMvdPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmMvdPoint*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmMvdPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmMvdPoint*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmMvdHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmMvdHit::Class_Name()
{
   return "CbmMvdHit";
}

//______________________________________________________________________________
const char *CbmMvdHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmMvdHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmMvdHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmMvdHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmMvdHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmMvdHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmMvdHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmMvdHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmMvdHitMatch::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmMvdHitMatch::Class_Name()
{
   return "CbmMvdHitMatch";
}

//______________________________________________________________________________
const char *CbmMvdHitMatch::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmMvdHitMatch*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmMvdHitMatch::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmMvdHitMatch*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmMvdHitMatch::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmMvdHitMatch*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmMvdHitMatch::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmMvdHitMatch*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmTofPoint::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmTofPoint::Class_Name()
{
   return "CbmTofPoint";
}

//______________________________________________________________________________
const char *CbmTofPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmTofPoint*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmTofPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmTofPoint*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmTofPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmTofPoint*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmTofPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmTofPoint*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnLink::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnLink::Class_Name()
{
   return "BmnLink";
}

//______________________________________________________________________________
const char *BmnLink::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnLink*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnLink::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnLink*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnLink::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnLink*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnLink::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnLink*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMatch::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMatch::Class_Name()
{
   return "BmnMatch";
}

//______________________________________________________________________________
const char *BmnMatch::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMatch*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMatch::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMatch*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMatch::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMatch*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMatch::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMatch*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHit::Class_Name()
{
   return "BmnHit";
}

//______________________________________________________________________________
const char *BmnHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmTofHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmTofHit::Class_Name()
{
   return "CbmTofHit";
}

//______________________________________________________________________________
const char *CbmTofHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmTofHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmTofHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmTofHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmTofHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmTofHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmTofHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmTofHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmTofTrack::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmTofTrack::Class_Name()
{
   return "CbmTofTrack";
}

//______________________________________________________________________________
const char *CbmTofTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmTofTrack*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmTofTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmTofTrack*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmTofTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmTofTrack*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmTofTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmTofTrack*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmGeoSttPar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmGeoSttPar::Class_Name()
{
   return "CbmGeoSttPar";
}

//______________________________________________________________________________
const char *CbmGeoSttPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmGeoSttPar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmGeoSttPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmGeoSttPar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmGeoSttPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmGeoSttPar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmGeoSttPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmGeoSttPar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTrack::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTrack::Class_Name()
{
   return "BmnTrack";
}

//______________________________________________________________________________
const char *BmnTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrack*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrack*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrack*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrack*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnFileSource::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnFileSource::Class_Name()
{
   return "BmnFileSource";
}

//______________________________________________________________________________
const char *BmnFileSource::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFileSource*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnFileSource::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFileSource*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnFileSource::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFileSource*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnFileSource::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFileSource*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTrigInfo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTrigInfo::Class_Name()
{
   return "BmnTrigInfo";
}

//______________________________________________________________________________
const char *BmnTrigInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrigInfo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTrigInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrigInfo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTrigInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrigInfo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTrigInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrigInfo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnEventHeader::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnEventHeader::Class_Name()
{
   return "BmnEventHeader";
}

//______________________________________________________________________________
const char *BmnEventHeader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnEventHeader*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnEventHeader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnEventHeader*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnEventHeader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnEventHeader*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnEventHeader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnEventHeader*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DigiArrays::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *DigiArrays::Class_Name()
{
   return "DigiArrays";
}

//______________________________________________________________________________
const char *DigiArrays::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DigiArrays*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int DigiArrays::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DigiArrays*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DigiArrays::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DigiArrays*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DigiArrays::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DigiArrays*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnDecoSource::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnDecoSource::Class_Name()
{
   return "BmnDecoSource";
}

//______________________________________________________________________________
const char *BmnDecoSource::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDecoSource*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnDecoSource::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDecoSource*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnDecoSource::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDecoSource*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnDecoSource::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDecoSource*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnADCDigit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnADCDigit::Class_Name()
{
   return "BmnADCDigit";
}

//______________________________________________________________________________
const char *BmnADCDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnADCDigit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnADCDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnADCDigit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnADCDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnADCDigit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnADCDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnADCDigit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnProfilometerSource::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnProfilometerSource::Class_Name()
{
   return "BmnProfilometerSource";
}

//______________________________________________________________________________
const char *BmnProfilometerSource::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnProfilometerSource*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnProfilometerSource::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnProfilometerSource*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnProfilometerSource::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnProfilometerSource*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnProfilometerSource::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnProfilometerSource*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnOnlineShmSource::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnOnlineShmSource::Class_Name()
{
   return "BmnOnlineShmSource";
}

//______________________________________________________________________________
const char *BmnOnlineShmSource::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnOnlineShmSource*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnOnlineShmSource::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnOnlineShmSource*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnOnlineShmSource::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnOnlineShmSource*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnOnlineShmSource::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnOnlineShmSource*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSpillHeader::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSpillHeader::Class_Name()
{
   return "BmnSpillHeader";
}

//______________________________________________________________________________
const char *BmnSpillHeader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSpillHeader*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSpillHeader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSpillHeader*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSpillHeader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSpillHeader*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSpillHeader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSpillHeader*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DigiRunHeader::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *DigiRunHeader::Class_Name()
{
   return "DigiRunHeader";
}

//______________________________________________________________________________
const char *DigiRunHeader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DigiRunHeader*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int DigiRunHeader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DigiRunHeader*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DigiRunHeader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DigiRunHeader*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DigiRunHeader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DigiRunHeader*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DstRunHeader::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *DstRunHeader::Class_Name()
{
   return "DstRunHeader";
}

//______________________________________________________________________________
const char *DstRunHeader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DstRunHeader*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int DstRunHeader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DstRunHeader*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DstRunHeader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DstRunHeader*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DstRunHeader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DstRunHeader*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DstEventHeader::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *DstEventHeader::Class_Name()
{
   return "DstEventHeader";
}

//______________________________________________________________________________
const char *DstEventHeader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DstEventHeader*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int DstEventHeader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DstEventHeader*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DstEventHeader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DstEventHeader*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DstEventHeader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DstEventHeader*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTDCDigit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTDCDigit::Class_Name()
{
   return "BmnTDCDigit";
}

//______________________________________________________________________________
const char *BmnTDCDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTDCDigit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTDCDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTDCDigit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTDCDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTDCDigit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTDCDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTDCDigit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTQDCADCDigit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTQDCADCDigit::Class_Name()
{
   return "BmnTQDCADCDigit";
}

//______________________________________________________________________________
const char *BmnTQDCADCDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTQDCADCDigit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTQDCADCDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTQDCADCDigit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTQDCADCDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTQDCADCDigit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTQDCADCDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTQDCADCDigit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTTBDigit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTTBDigit::Class_Name()
{
   return "BmnTTBDigit";
}

//______________________________________________________________________________
const char *BmnTTBDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTTBDigit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTTBDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTTBDigit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTTBDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTTBDigit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTTBDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTTBDigit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMSCDigit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMSCDigit::Class_Name()
{
   return "BmnMSCDigit";
}

//______________________________________________________________________________
const char *BmnMSCDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMSCDigit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMSCDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMSCDigit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMSCDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMSCDigit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMSCDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMSCDigit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHRBDigit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHRBDigit::Class_Name()
{
   return "BmnHRBDigit";
}

//______________________________________________________________________________
const char *BmnHRBDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHRBDigit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHRBDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHRBDigit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHRBDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHRBDigit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHRBDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHRBDigit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSyncDigit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSyncDigit::Class_Name()
{
   return "BmnSyncDigit";
}

//______________________________________________________________________________
const char *BmnSyncDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSyncDigit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSyncDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSyncDigit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSyncDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSyncDigit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSyncDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSyncDigit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTrigDigit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTrigDigit::Class_Name()
{
   return "BmnTrigDigit";
}

//______________________________________________________________________________
const char *BmnTrigDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrigDigit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTrigDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrigDigit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTrigDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrigDigit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTrigDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrigDigit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTrigWaveDigit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTrigWaveDigit::Class_Name()
{
   return "BmnTrigWaveDigit";
}

//______________________________________________________________________________
const char *BmnTrigWaveDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrigWaveDigit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTrigWaveDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrigWaveDigit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTrigWaveDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrigWaveDigit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTrigWaveDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrigWaveDigit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmMCTrack::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmMCTrack::Class_Name()
{
   return "CbmMCTrack";
}

//______________________________________________________________________________
const char *CbmMCTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmMCTrack*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmMCTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmMCTrack*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmMCTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmMCTrack*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmMCTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmMCTrack*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStack::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStack::Class_Name()
{
   return "CbmStack";
}

//______________________________________________________________________________
const char *CbmStack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStack*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStack*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStack*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStack*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr StripCluster::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *StripCluster::Class_Name()
{
   return "StripCluster";
}

//______________________________________________________________________________
const char *StripCluster::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::StripCluster*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int StripCluster::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::StripCluster*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *StripCluster::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::StripCluster*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *StripCluster::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::StripCluster*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnStripDigit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnStripDigit::Class_Name()
{
   return "BmnStripDigit";
}

//______________________________________________________________________________
const char *BmnStripDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnStripDigit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnStripDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnStripDigit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnStripDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnStripDigit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnStripDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnStripDigit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnCaloDigit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnCaloDigit::Class_Name()
{
   return "BmnCaloDigit";
}

//______________________________________________________________________________
const char *BmnCaloDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCaloDigit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnCaloDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCaloDigit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnCaloDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCaloDigit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnCaloDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCaloDigit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTacquilaDigit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTacquilaDigit::Class_Name()
{
   return "BmnTacquilaDigit";
}

//______________________________________________________________________________
const char *BmnTacquilaDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTacquilaDigit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTacquilaDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTacquilaDigit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTacquilaDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTacquilaDigit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTacquilaDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTacquilaDigit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnDigiContainerTemplate::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnDigiContainerTemplate::Class_Name()
{
   return "BmnDigiContainerTemplate";
}

//______________________________________________________________________________
const char *BmnDigiContainerTemplate::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDigiContainerTemplate*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnDigiContainerTemplate::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDigiContainerTemplate*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnDigiContainerTemplate::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDigiContainerTemplate*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnDigiContainerTemplate::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDigiContainerTemplate*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnIdentifiableTrack::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnIdentifiableTrack::Class_Name()
{
   return "BmnIdentifiableTrack";
}

//______________________________________________________________________________
const char *BmnIdentifiableTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnIdentifiableTrack*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnIdentifiableTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnIdentifiableTrack*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnIdentifiableTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnIdentifiableTrack*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnIdentifiableTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnIdentifiableTrack*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTrackMatch::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTrackMatch::Class_Name()
{
   return "BmnTrackMatch";
}

//______________________________________________________________________________
const char *BmnTrackMatch::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackMatch*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTrackMatch::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackMatch*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTrackMatch::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackMatch*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTrackMatch::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackMatch*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnVertex::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnVertex::Class_Name()
{
   return "BmnVertex";
}

//______________________________________________________________________________
const char *BmnVertex::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnVertex*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnVertex::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnVertex*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnVertex::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnVertex*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnVertex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnVertex*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnEventQuality::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnEventQuality::Class_Name()
{
   return "BmnEventQuality";
}

//______________________________________________________________________________
const char *BmnEventQuality::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnEventQuality*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnEventQuality::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnEventQuality*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnEventQuality::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnEventQuality*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnEventQuality::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnEventQuality*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTask::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTask::Class_Name()
{
   return "BmnTask";
}

//______________________________________________________________________________
const char *BmnTask::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTask*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTask::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTask*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTask::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTask*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTask::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTask*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnFunctionSet::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnFunctionSet::Class_Name()
{
   return "BmnFunctionSet";
}

//______________________________________________________________________________
const char *BmnFunctionSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFunctionSet*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnFunctionSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFunctionSet*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnFunctionSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFunctionSet*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnFunctionSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFunctionSet*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void CbmStsPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsPoint(void *p) {
      return  p ? new(p) ::CbmStsPoint : new ::CbmStsPoint;
   }
   static void *newArray_CbmStsPoint(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsPoint[nElements] : new ::CbmStsPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsPoint(void *p) {
      delete ((::CbmStsPoint*)p);
   }
   static void deleteArray_CbmStsPoint(void *p) {
      delete [] ((::CbmStsPoint*)p);
   }
   static void destruct_CbmStsPoint(void *p) {
      typedef ::CbmStsPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsPoint

//______________________________________________________________________________
void CbmDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_CbmDigi(void *p) {
      delete ((::CbmDigi*)p);
   }
   static void deleteArray_CbmDigi(void *p) {
      delete [] ((::CbmDigi*)p);
   }
   static void destruct_CbmDigi(void *p) {
      typedef ::CbmDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmDigi

//______________________________________________________________________________
void CbmBaseHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmBaseHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmBaseHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmBaseHit::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_CbmBaseHit(void *p) {
      delete ((::CbmBaseHit*)p);
   }
   static void deleteArray_CbmBaseHit(void *p) {
      delete [] ((::CbmBaseHit*)p);
   }
   static void destruct_CbmBaseHit(void *p) {
      typedef ::CbmBaseHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmBaseHit

//______________________________________________________________________________
void CbmHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmHit::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_CbmHit(void *p) {
      delete ((::CbmHit*)p);
   }
   static void deleteArray_CbmHit(void *p) {
      delete [] ((::CbmHit*)p);
   }
   static void destruct_CbmHit(void *p) {
      typedef ::CbmHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmHit

//______________________________________________________________________________
void CbmStripHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStripHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStripHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStripHit::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_CbmStripHit(void *p) {
      delete ((::CbmStripHit*)p);
   }
   static void deleteArray_CbmStripHit(void *p) {
      delete [] ((::CbmStripHit*)p);
   }
   static void destruct_CbmStripHit(void *p) {
      typedef ::CbmStripHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStripHit

//______________________________________________________________________________
void CbmVertex::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmVertex.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmVertex::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmVertex::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmVertex(void *p) {
      return  p ? new(p) ::CbmVertex : new ::CbmVertex;
   }
   static void *newArray_CbmVertex(Long_t nElements, void *p) {
      return p ? new(p) ::CbmVertex[nElements] : new ::CbmVertex[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmVertex(void *p) {
      delete ((::CbmVertex*)p);
   }
   static void deleteArray_CbmVertex(void *p) {
      delete [] ((::CbmVertex*)p);
   }
   static void destruct_CbmVertex(void *p) {
      typedef ::CbmVertex current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmVertex

//______________________________________________________________________________
void CbmStsTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsTrack(void *p) {
      return  p ? new(p) ::CbmStsTrack : new ::CbmStsTrack;
   }
   static void *newArray_CbmStsTrack(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsTrack[nElements] : new ::CbmStsTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsTrack(void *p) {
      delete ((::CbmStsTrack*)p);
   }
   static void deleteArray_CbmStsTrack(void *p) {
      delete [] ((::CbmStsTrack*)p);
   }
   static void destruct_CbmStsTrack(void *p) {
      typedef ::CbmStsTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsTrack

//______________________________________________________________________________
void CbmStsTrackFinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsTrackFinder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsTrackFinder::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsTrackFinder::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_CbmStsTrackFinder(void *p) {
      delete ((::CbmStsTrackFinder*)p);
   }
   static void deleteArray_CbmStsTrackFinder(void *p) {
      delete [] ((::CbmStsTrackFinder*)p);
   }
   static void destruct_CbmStsTrackFinder(void *p) {
      typedef ::CbmStsTrackFinder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsTrackFinder

//______________________________________________________________________________
void CbmStsTrackFitter::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsTrackFitter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsTrackFitter::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsTrackFitter::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_CbmStsTrackFitter(void *p) {
      delete ((::CbmStsTrackFitter*)p);
   }
   static void deleteArray_CbmStsTrackFitter(void *p) {
      delete [] ((::CbmStsTrackFitter*)p);
   }
   static void destruct_CbmStsTrackFitter(void *p) {
      typedef ::CbmStsTrackFitter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsTrackFitter

//______________________________________________________________________________
void CbmTofMerger::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmTofMerger.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmTofMerger::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmTofMerger::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_CbmTofMerger(void *p) {
      delete ((::CbmTofMerger*)p);
   }
   static void deleteArray_CbmTofMerger(void *p) {
      delete [] ((::CbmTofMerger*)p);
   }
   static void destruct_CbmTofMerger(void *p) {
      typedef ::CbmTofMerger current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmTofMerger

//______________________________________________________________________________
void CbmTrackMerger::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmTrackMerger.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmTrackMerger::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmTrackMerger::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_CbmTrackMerger(void *p) {
      delete ((::CbmTrackMerger*)p);
   }
   static void deleteArray_CbmTrackMerger(void *p) {
      delete [] ((::CbmTrackMerger*)p);
   }
   static void destruct_CbmTrackMerger(void *p) {
      typedef ::CbmTrackMerger current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmTrackMerger

//______________________________________________________________________________
void CbmPrimaryVertexFinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmPrimaryVertexFinder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmPrimaryVertexFinder::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmPrimaryVertexFinder::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_CbmPrimaryVertexFinder(void *p) {
      delete ((::CbmPrimaryVertexFinder*)p);
   }
   static void deleteArray_CbmPrimaryVertexFinder(void *p) {
      delete [] ((::CbmPrimaryVertexFinder*)p);
   }
   static void destruct_CbmPrimaryVertexFinder(void *p) {
      typedef ::CbmPrimaryVertexFinder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmPrimaryVertexFinder

//______________________________________________________________________________
void CbmFindPrimaryVertex::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmFindPrimaryVertex.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmFindPrimaryVertex::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmFindPrimaryVertex::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmFindPrimaryVertex(void *p) {
      return  p ? new(p) ::CbmFindPrimaryVertex : new ::CbmFindPrimaryVertex;
   }
   static void *newArray_CbmFindPrimaryVertex(Long_t nElements, void *p) {
      return p ? new(p) ::CbmFindPrimaryVertex[nElements] : new ::CbmFindPrimaryVertex[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmFindPrimaryVertex(void *p) {
      delete ((::CbmFindPrimaryVertex*)p);
   }
   static void deleteArray_CbmFindPrimaryVertex(void *p) {
      delete [] ((::CbmFindPrimaryVertex*)p);
   }
   static void destruct_CbmFindPrimaryVertex(void *p) {
      typedef ::CbmFindPrimaryVertex current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmFindPrimaryVertex

//______________________________________________________________________________
void CbmTrackMatch::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmTrackMatch.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmTrackMatch::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmTrackMatch::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmTrackMatch(void *p) {
      return  p ? new(p) ::CbmTrackMatch : new ::CbmTrackMatch;
   }
   static void *newArray_CbmTrackMatch(Long_t nElements, void *p) {
      return p ? new(p) ::CbmTrackMatch[nElements] : new ::CbmTrackMatch[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmTrackMatch(void *p) {
      delete ((::CbmTrackMatch*)p);
   }
   static void deleteArray_CbmTrackMatch(void *p) {
      delete [] ((::CbmTrackMatch*)p);
   }
   static void destruct_CbmTrackMatch(void *p) {
      typedef ::CbmTrackMatch current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmTrackMatch

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnFitNode(void *p) {
      return  p ? new(p) ::BmnFitNode : new ::BmnFitNode;
   }
   static void *newArray_BmnFitNode(Long_t nElements, void *p) {
      return p ? new(p) ::BmnFitNode[nElements] : new ::BmnFitNode[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnFitNode(void *p) {
      delete ((::BmnFitNode*)p);
   }
   static void deleteArray_BmnFitNode(void *p) {
      delete [] ((::BmnFitNode*)p);
   }
   static void destruct_BmnFitNode(void *p) {
      typedef ::BmnFitNode current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFitNode

//______________________________________________________________________________
void CbmGlobalTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmGlobalTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmGlobalTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmGlobalTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmGlobalTrack(void *p) {
      return  p ? new(p) ::CbmGlobalTrack : new ::CbmGlobalTrack;
   }
   static void *newArray_CbmGlobalTrack(Long_t nElements, void *p) {
      return p ? new(p) ::CbmGlobalTrack[nElements] : new ::CbmGlobalTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmGlobalTrack(void *p) {
      delete ((::CbmGlobalTrack*)p);
   }
   static void deleteArray_CbmGlobalTrack(void *p) {
      delete [] ((::CbmGlobalTrack*)p);
   }
   static void destruct_CbmGlobalTrack(void *p) {
      typedef ::CbmGlobalTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmGlobalTrack

//______________________________________________________________________________
void BmnDetectorList::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnDetectorList.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnDetectorList::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnDetectorList::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnDetectorList(void *p) {
      return  p ? new(p) ::BmnDetectorList : new ::BmnDetectorList;
   }
   static void *newArray_BmnDetectorList(Long_t nElements, void *p) {
      return p ? new(p) ::BmnDetectorList[nElements] : new ::BmnDetectorList[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnDetectorList(void *p) {
      delete ((::BmnDetectorList*)p);
   }
   static void deleteArray_BmnDetectorList(void *p) {
      delete [] ((::BmnDetectorList*)p);
   }
   static void destruct_BmnDetectorList(void *p) {
      typedef ::BmnDetectorList current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnDetectorList

//______________________________________________________________________________
void CbmMvdDetectorId::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmMvdDetectorId.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmMvdDetectorId::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmMvdDetectorId::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmMvdDetectorId(void *p) {
      return  p ? new(p) ::CbmMvdDetectorId : new ::CbmMvdDetectorId;
   }
   static void *newArray_CbmMvdDetectorId(Long_t nElements, void *p) {
      return p ? new(p) ::CbmMvdDetectorId[nElements] : new ::CbmMvdDetectorId[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmMvdDetectorId(void *p) {
      delete ((::CbmMvdDetectorId*)p);
   }
   static void deleteArray_CbmMvdDetectorId(void *p) {
      delete [] ((::CbmMvdDetectorId*)p);
   }
   static void destruct_CbmMvdDetectorId(void *p) {
      typedef ::CbmMvdDetectorId current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmMvdDetectorId

//______________________________________________________________________________
void CbmMvdGeoPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmMvdGeoPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmMvdGeoPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmMvdGeoPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmMvdGeoPar(void *p) {
      return  p ? new(p) ::CbmMvdGeoPar : new ::CbmMvdGeoPar;
   }
   static void *newArray_CbmMvdGeoPar(Long_t nElements, void *p) {
      return p ? new(p) ::CbmMvdGeoPar[nElements] : new ::CbmMvdGeoPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmMvdGeoPar(void *p) {
      delete ((::CbmMvdGeoPar*)p);
   }
   static void deleteArray_CbmMvdGeoPar(void *p) {
      delete [] ((::CbmMvdGeoPar*)p);
   }
   static void destruct_CbmMvdGeoPar(void *p) {
      typedef ::CbmMvdGeoPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmMvdGeoPar

//______________________________________________________________________________
void CbmMvdPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmMvdPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmMvdPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmMvdPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmMvdPoint(void *p) {
      return  p ? new(p) ::CbmMvdPoint : new ::CbmMvdPoint;
   }
   static void *newArray_CbmMvdPoint(Long_t nElements, void *p) {
      return p ? new(p) ::CbmMvdPoint[nElements] : new ::CbmMvdPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmMvdPoint(void *p) {
      delete ((::CbmMvdPoint*)p);
   }
   static void deleteArray_CbmMvdPoint(void *p) {
      delete [] ((::CbmMvdPoint*)p);
   }
   static void destruct_CbmMvdPoint(void *p) {
      typedef ::CbmMvdPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmMvdPoint

//______________________________________________________________________________
void CbmMvdHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmMvdHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmMvdHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmMvdHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmMvdHit(void *p) {
      return  p ? new(p) ::CbmMvdHit : new ::CbmMvdHit;
   }
   static void *newArray_CbmMvdHit(Long_t nElements, void *p) {
      return p ? new(p) ::CbmMvdHit[nElements] : new ::CbmMvdHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmMvdHit(void *p) {
      delete ((::CbmMvdHit*)p);
   }
   static void deleteArray_CbmMvdHit(void *p) {
      delete [] ((::CbmMvdHit*)p);
   }
   static void destruct_CbmMvdHit(void *p) {
      typedef ::CbmMvdHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmMvdHit

//______________________________________________________________________________
void CbmMvdHitMatch::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmMvdHitMatch.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmMvdHitMatch::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmMvdHitMatch::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmMvdHitMatch(void *p) {
      return  p ? new(p) ::CbmMvdHitMatch : new ::CbmMvdHitMatch;
   }
   static void *newArray_CbmMvdHitMatch(Long_t nElements, void *p) {
      return p ? new(p) ::CbmMvdHitMatch[nElements] : new ::CbmMvdHitMatch[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmMvdHitMatch(void *p) {
      delete ((::CbmMvdHitMatch*)p);
   }
   static void deleteArray_CbmMvdHitMatch(void *p) {
      delete [] ((::CbmMvdHitMatch*)p);
   }
   static void destruct_CbmMvdHitMatch(void *p) {
      typedef ::CbmMvdHitMatch current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmMvdHitMatch

//______________________________________________________________________________
void CbmTofPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmTofPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmTofPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmTofPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmTofPoint(void *p) {
      return  p ? new(p) ::CbmTofPoint : new ::CbmTofPoint;
   }
   static void *newArray_CbmTofPoint(Long_t nElements, void *p) {
      return p ? new(p) ::CbmTofPoint[nElements] : new ::CbmTofPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmTofPoint(void *p) {
      delete ((::CbmTofPoint*)p);
   }
   static void deleteArray_CbmTofPoint(void *p) {
      delete [] ((::CbmTofPoint*)p);
   }
   static void destruct_CbmTofPoint(void *p) {
      typedef ::CbmTofPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmTofPoint

//______________________________________________________________________________
void BmnLink::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnLink.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnLink::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnLink::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnLink(void *p) {
      return  p ? new(p) ::BmnLink : new ::BmnLink;
   }
   static void *newArray_BmnLink(Long_t nElements, void *p) {
      return p ? new(p) ::BmnLink[nElements] : new ::BmnLink[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnLink(void *p) {
      delete ((::BmnLink*)p);
   }
   static void deleteArray_BmnLink(void *p) {
      delete [] ((::BmnLink*)p);
   }
   static void destruct_BmnLink(void *p) {
      typedef ::BmnLink current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnLink

//______________________________________________________________________________
void BmnMatch::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMatch.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMatch::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMatch::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMatch(void *p) {
      return  p ? new(p) ::BmnMatch : new ::BmnMatch;
   }
   static void *newArray_BmnMatch(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMatch[nElements] : new ::BmnMatch[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMatch(void *p) {
      delete ((::BmnMatch*)p);
   }
   static void deleteArray_BmnMatch(void *p) {
      delete [] ((::BmnMatch*)p);
   }
   static void destruct_BmnMatch(void *p) {
      typedef ::BmnMatch current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMatch

//______________________________________________________________________________
void BmnHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnHit(void *p) {
      return  p ? new(p) ::BmnHit : new ::BmnHit;
   }
   static void *newArray_BmnHit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnHit[nElements] : new ::BmnHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnHit(void *p) {
      delete ((::BmnHit*)p);
   }
   static void deleteArray_BmnHit(void *p) {
      delete [] ((::BmnHit*)p);
   }
   static void destruct_BmnHit(void *p) {
      typedef ::BmnHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHit

//______________________________________________________________________________
void CbmTofHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmTofHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmTofHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmTofHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmTofHit(void *p) {
      return  p ? new(p) ::CbmTofHit : new ::CbmTofHit;
   }
   static void *newArray_CbmTofHit(Long_t nElements, void *p) {
      return p ? new(p) ::CbmTofHit[nElements] : new ::CbmTofHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmTofHit(void *p) {
      delete ((::CbmTofHit*)p);
   }
   static void deleteArray_CbmTofHit(void *p) {
      delete [] ((::CbmTofHit*)p);
   }
   static void destruct_CbmTofHit(void *p) {
      typedef ::CbmTofHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmTofHit

//______________________________________________________________________________
void CbmTofTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmTofTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmTofTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmTofTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmTofTrack(void *p) {
      return  p ? new(p) ::CbmTofTrack : new ::CbmTofTrack;
   }
   static void *newArray_CbmTofTrack(Long_t nElements, void *p) {
      return p ? new(p) ::CbmTofTrack[nElements] : new ::CbmTofTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmTofTrack(void *p) {
      delete ((::CbmTofTrack*)p);
   }
   static void deleteArray_CbmTofTrack(void *p) {
      delete [] ((::CbmTofTrack*)p);
   }
   static void destruct_CbmTofTrack(void *p) {
      typedef ::CbmTofTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmTofTrack

//______________________________________________________________________________
void CbmGeoSttPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmGeoSttPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmGeoSttPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmGeoSttPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmGeoSttPar(void *p) {
      return  p ? new(p) ::CbmGeoSttPar : new ::CbmGeoSttPar;
   }
   static void *newArray_CbmGeoSttPar(Long_t nElements, void *p) {
      return p ? new(p) ::CbmGeoSttPar[nElements] : new ::CbmGeoSttPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmGeoSttPar(void *p) {
      delete ((::CbmGeoSttPar*)p);
   }
   static void deleteArray_CbmGeoSttPar(void *p) {
      delete [] ((::CbmGeoSttPar*)p);
   }
   static void destruct_CbmGeoSttPar(void *p) {
      typedef ::CbmGeoSttPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmGeoSttPar

//______________________________________________________________________________
void BmnTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTrack(void *p) {
      return  p ? new(p) ::BmnTrack : new ::BmnTrack;
   }
   static void *newArray_BmnTrack(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTrack[nElements] : new ::BmnTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTrack(void *p) {
      delete ((::BmnTrack*)p);
   }
   static void deleteArray_BmnTrack(void *p) {
      delete [] ((::BmnTrack*)p);
   }
   static void destruct_BmnTrack(void *p) {
      typedef ::BmnTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTrack

namespace ROOT {
   // Wrapper around operator delete
   static void delete_FitWLSQ(void *p) {
      delete ((::FitWLSQ*)p);
   }
   static void deleteArray_FitWLSQ(void *p) {
      delete [] ((::FitWLSQ*)p);
   }
   static void destruct_FitWLSQ(void *p) {
      typedef ::FitWLSQ current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::FitWLSQ

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGeoNavigator(void *p) {
      return  p ? new(p) ::BmnGeoNavigator : new ::BmnGeoNavigator;
   }
   static void *newArray_BmnGeoNavigator(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGeoNavigator[nElements] : new ::BmnGeoNavigator[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGeoNavigator(void *p) {
      delete ((::BmnGeoNavigator*)p);
   }
   static void deleteArray_BmnGeoNavigator(void *p) {
      delete [] ((::BmnGeoNavigator*)p);
   }
   static void destruct_BmnGeoNavigator(void *p) {
      typedef ::BmnGeoNavigator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGeoNavigator

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnKalmanFilter(void *p) {
      return  p ? new(p) ::BmnKalmanFilter : new ::BmnKalmanFilter;
   }
   static void *newArray_BmnKalmanFilter(Long_t nElements, void *p) {
      return p ? new(p) ::BmnKalmanFilter[nElements] : new ::BmnKalmanFilter[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnKalmanFilter(void *p) {
      delete ((::BmnKalmanFilter*)p);
   }
   static void deleteArray_BmnKalmanFilter(void *p) {
      delete [] ((::BmnKalmanFilter*)p);
   }
   static void destruct_BmnKalmanFilter(void *p) {
      typedef ::BmnKalmanFilter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnKalmanFilter

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnProfRawTools(void *p) {
      return  p ? new(p) ::BmnProfRawTools : new ::BmnProfRawTools;
   }
   static void *newArray_BmnProfRawTools(Long_t nElements, void *p) {
      return p ? new(p) ::BmnProfRawTools[nElements] : new ::BmnProfRawTools[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnProfRawTools(void *p) {
      delete ((::BmnProfRawTools*)p);
   }
   static void deleteArray_BmnProfRawTools(void *p) {
      delete [] ((::BmnProfRawTools*)p);
   }
   static void destruct_BmnProfRawTools(void *p) {
      typedef ::BmnProfRawTools current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnProfRawTools

//______________________________________________________________________________
void BmnFileSource::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnFileSource.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnFileSource::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnFileSource::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnFileSource(void *p) {
      delete ((::BmnFileSource*)p);
   }
   static void deleteArray_BmnFileSource(void *p) {
      delete [] ((::BmnFileSource*)p);
   }
   static void destruct_BmnFileSource(void *p) {
      typedef ::BmnFileSource current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFileSource

//______________________________________________________________________________
void BmnTrigInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTrigInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTrigInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTrigInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTrigInfo(void *p) {
      return  p ? new(p) ::BmnTrigInfo : new ::BmnTrigInfo;
   }
   static void *newArray_BmnTrigInfo(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTrigInfo[nElements] : new ::BmnTrigInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTrigInfo(void *p) {
      delete ((::BmnTrigInfo*)p);
   }
   static void deleteArray_BmnTrigInfo(void *p) {
      delete [] ((::BmnTrigInfo*)p);
   }
   static void destruct_BmnTrigInfo(void *p) {
      typedef ::BmnTrigInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTrigInfo

//______________________________________________________________________________
void BmnEventHeader::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnEventHeader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnEventHeader::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnEventHeader::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnEventHeader(void *p) {
      return  p ? new(p) ::BmnEventHeader : new ::BmnEventHeader;
   }
   static void *newArray_BmnEventHeader(Long_t nElements, void *p) {
      return p ? new(p) ::BmnEventHeader[nElements] : new ::BmnEventHeader[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnEventHeader(void *p) {
      delete ((::BmnEventHeader*)p);
   }
   static void deleteArray_BmnEventHeader(void *p) {
      delete [] ((::BmnEventHeader*)p);
   }
   static void destruct_BmnEventHeader(void *p) {
      typedef ::BmnEventHeader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnEventHeader

//______________________________________________________________________________
void DigiArrays::Streamer(TBuffer &R__b)
{
   // Stream an object of class DigiArrays.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DigiArrays::Class(),this);
   } else {
      R__b.WriteClassBuffer(DigiArrays::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DigiArrays(void *p) {
      return  p ? new(p) ::DigiArrays : new ::DigiArrays;
   }
   static void *newArray_DigiArrays(Long_t nElements, void *p) {
      return p ? new(p) ::DigiArrays[nElements] : new ::DigiArrays[nElements];
   }
   // Wrapper around operator delete
   static void delete_DigiArrays(void *p) {
      delete ((::DigiArrays*)p);
   }
   static void deleteArray_DigiArrays(void *p) {
      delete [] ((::DigiArrays*)p);
   }
   static void destruct_DigiArrays(void *p) {
      typedef ::DigiArrays current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DigiArrays

//______________________________________________________________________________
void BmnDecoSource::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnDecoSource.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnDecoSource::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnDecoSource::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnDecoSource(void *p) {
      return  p ? new(p) ::BmnDecoSource : new ::BmnDecoSource;
   }
   static void *newArray_BmnDecoSource(Long_t nElements, void *p) {
      return p ? new(p) ::BmnDecoSource[nElements] : new ::BmnDecoSource[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnDecoSource(void *p) {
      delete ((::BmnDecoSource*)p);
   }
   static void deleteArray_BmnDecoSource(void *p) {
      delete [] ((::BmnDecoSource*)p);
   }
   static void destruct_BmnDecoSource(void *p) {
      typedef ::BmnDecoSource current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnDecoSource

//______________________________________________________________________________
void BmnADCDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnADCDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnADCDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnADCDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnADCDigit(void *p) {
      return  p ? new(p) ::BmnADCDigit : new ::BmnADCDigit;
   }
   static void *newArray_BmnADCDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnADCDigit[nElements] : new ::BmnADCDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnADCDigit(void *p) {
      delete ((::BmnADCDigit*)p);
   }
   static void deleteArray_BmnADCDigit(void *p) {
      delete [] ((::BmnADCDigit*)p);
   }
   static void destruct_BmnADCDigit(void *p) {
      typedef ::BmnADCDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnADCDigit

//______________________________________________________________________________
void BmnProfilometerSource::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnProfilometerSource.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnProfilometerSource::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnProfilometerSource::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnProfilometerSource(void *p) {
      return  p ? new(p) ::BmnProfilometerSource : new ::BmnProfilometerSource;
   }
   static void *newArray_BmnProfilometerSource(Long_t nElements, void *p) {
      return p ? new(p) ::BmnProfilometerSource[nElements] : new ::BmnProfilometerSource[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnProfilometerSource(void *p) {
      delete ((::BmnProfilometerSource*)p);
   }
   static void deleteArray_BmnProfilometerSource(void *p) {
      delete [] ((::BmnProfilometerSource*)p);
   }
   static void destruct_BmnProfilometerSource(void *p) {
      typedef ::BmnProfilometerSource current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnProfilometerSource

//______________________________________________________________________________
void BmnOnlineShmSource::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnOnlineShmSource.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnOnlineShmSource::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnOnlineShmSource::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnOnlineShmSource(void *p) {
      return  p ? new(p) ::BmnOnlineShmSource : new ::BmnOnlineShmSource;
   }
   static void *newArray_BmnOnlineShmSource(Long_t nElements, void *p) {
      return p ? new(p) ::BmnOnlineShmSource[nElements] : new ::BmnOnlineShmSource[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnOnlineShmSource(void *p) {
      delete ((::BmnOnlineShmSource*)p);
   }
   static void deleteArray_BmnOnlineShmSource(void *p) {
      delete [] ((::BmnOnlineShmSource*)p);
   }
   static void destruct_BmnOnlineShmSource(void *p) {
      typedef ::BmnOnlineShmSource current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnOnlineShmSource

//______________________________________________________________________________
void BmnSpillHeader::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSpillHeader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSpillHeader::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSpillHeader::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSpillHeader(void *p) {
      return  p ? new(p) ::BmnSpillHeader : new ::BmnSpillHeader;
   }
   static void *newArray_BmnSpillHeader(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSpillHeader[nElements] : new ::BmnSpillHeader[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSpillHeader(void *p) {
      delete ((::BmnSpillHeader*)p);
   }
   static void deleteArray_BmnSpillHeader(void *p) {
      delete [] ((::BmnSpillHeader*)p);
   }
   static void destruct_BmnSpillHeader(void *p) {
      typedef ::BmnSpillHeader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSpillHeader

//______________________________________________________________________________
void DigiRunHeader::Streamer(TBuffer &R__b)
{
   // Stream an object of class DigiRunHeader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DigiRunHeader::Class(),this);
   } else {
      R__b.WriteClassBuffer(DigiRunHeader::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DigiRunHeader(void *p) {
      return  p ? new(p) ::DigiRunHeader : new ::DigiRunHeader;
   }
   static void *newArray_DigiRunHeader(Long_t nElements, void *p) {
      return p ? new(p) ::DigiRunHeader[nElements] : new ::DigiRunHeader[nElements];
   }
   // Wrapper around operator delete
   static void delete_DigiRunHeader(void *p) {
      delete ((::DigiRunHeader*)p);
   }
   static void deleteArray_DigiRunHeader(void *p) {
      delete [] ((::DigiRunHeader*)p);
   }
   static void destruct_DigiRunHeader(void *p) {
      typedef ::DigiRunHeader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DigiRunHeader

//______________________________________________________________________________
void DstRunHeader::Streamer(TBuffer &R__b)
{
   // Stream an object of class DstRunHeader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DstRunHeader::Class(),this);
   } else {
      R__b.WriteClassBuffer(DstRunHeader::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DstRunHeader(void *p) {
      return  p ? new(p) ::DstRunHeader : new ::DstRunHeader;
   }
   static void *newArray_DstRunHeader(Long_t nElements, void *p) {
      return p ? new(p) ::DstRunHeader[nElements] : new ::DstRunHeader[nElements];
   }
   // Wrapper around operator delete
   static void delete_DstRunHeader(void *p) {
      delete ((::DstRunHeader*)p);
   }
   static void deleteArray_DstRunHeader(void *p) {
      delete [] ((::DstRunHeader*)p);
   }
   static void destruct_DstRunHeader(void *p) {
      typedef ::DstRunHeader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DstRunHeader

//______________________________________________________________________________
void DstEventHeader::Streamer(TBuffer &R__b)
{
   // Stream an object of class DstEventHeader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DstEventHeader::Class(),this);
   } else {
      R__b.WriteClassBuffer(DstEventHeader::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DstEventHeader(void *p) {
      return  p ? new(p) ::DstEventHeader : new ::DstEventHeader;
   }
   static void *newArray_DstEventHeader(Long_t nElements, void *p) {
      return p ? new(p) ::DstEventHeader[nElements] : new ::DstEventHeader[nElements];
   }
   // Wrapper around operator delete
   static void delete_DstEventHeader(void *p) {
      delete ((::DstEventHeader*)p);
   }
   static void deleteArray_DstEventHeader(void *p) {
      delete [] ((::DstEventHeader*)p);
   }
   static void destruct_DstEventHeader(void *p) {
      typedef ::DstEventHeader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DstEventHeader

//______________________________________________________________________________
void BmnTDCDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTDCDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTDCDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTDCDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTDCDigit(void *p) {
      return  p ? new(p) ::BmnTDCDigit : new ::BmnTDCDigit;
   }
   static void *newArray_BmnTDCDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTDCDigit[nElements] : new ::BmnTDCDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTDCDigit(void *p) {
      delete ((::BmnTDCDigit*)p);
   }
   static void deleteArray_BmnTDCDigit(void *p) {
      delete [] ((::BmnTDCDigit*)p);
   }
   static void destruct_BmnTDCDigit(void *p) {
      typedef ::BmnTDCDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTDCDigit

//______________________________________________________________________________
void BmnTQDCADCDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTQDCADCDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTQDCADCDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTQDCADCDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTQDCADCDigit(void *p) {
      return  p ? new(p) ::BmnTQDCADCDigit : new ::BmnTQDCADCDigit;
   }
   static void *newArray_BmnTQDCADCDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTQDCADCDigit[nElements] : new ::BmnTQDCADCDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTQDCADCDigit(void *p) {
      delete ((::BmnTQDCADCDigit*)p);
   }
   static void deleteArray_BmnTQDCADCDigit(void *p) {
      delete [] ((::BmnTQDCADCDigit*)p);
   }
   static void destruct_BmnTQDCADCDigit(void *p) {
      typedef ::BmnTQDCADCDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTQDCADCDigit

//______________________________________________________________________________
void BmnTTBDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTTBDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTTBDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTTBDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTTBDigit(void *p) {
      return  p ? new(p) ::BmnTTBDigit : new ::BmnTTBDigit;
   }
   static void *newArray_BmnTTBDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTTBDigit[nElements] : new ::BmnTTBDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTTBDigit(void *p) {
      delete ((::BmnTTBDigit*)p);
   }
   static void deleteArray_BmnTTBDigit(void *p) {
      delete [] ((::BmnTTBDigit*)p);
   }
   static void destruct_BmnTTBDigit(void *p) {
      typedef ::BmnTTBDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTTBDigit

//______________________________________________________________________________
void BmnMSCDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMSCDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMSCDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMSCDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMSCDigit(void *p) {
      return  p ? new(p) ::BmnMSCDigit : new ::BmnMSCDigit;
   }
   static void *newArray_BmnMSCDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMSCDigit[nElements] : new ::BmnMSCDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMSCDigit(void *p) {
      delete ((::BmnMSCDigit*)p);
   }
   static void deleteArray_BmnMSCDigit(void *p) {
      delete [] ((::BmnMSCDigit*)p);
   }
   static void destruct_BmnMSCDigit(void *p) {
      typedef ::BmnMSCDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMSCDigit

//______________________________________________________________________________
void BmnHRBDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHRBDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHRBDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHRBDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnHRBDigit(void *p) {
      return  p ? new(p) ::BmnHRBDigit : new ::BmnHRBDigit;
   }
   static void *newArray_BmnHRBDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnHRBDigit[nElements] : new ::BmnHRBDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnHRBDigit(void *p) {
      delete ((::BmnHRBDigit*)p);
   }
   static void deleteArray_BmnHRBDigit(void *p) {
      delete [] ((::BmnHRBDigit*)p);
   }
   static void destruct_BmnHRBDigit(void *p) {
      typedef ::BmnHRBDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHRBDigit

//______________________________________________________________________________
void BmnSyncDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSyncDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSyncDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSyncDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSyncDigit(void *p) {
      return  p ? new(p) ::BmnSyncDigit : new ::BmnSyncDigit;
   }
   static void *newArray_BmnSyncDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSyncDigit[nElements] : new ::BmnSyncDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSyncDigit(void *p) {
      delete ((::BmnSyncDigit*)p);
   }
   static void deleteArray_BmnSyncDigit(void *p) {
      delete [] ((::BmnSyncDigit*)p);
   }
   static void destruct_BmnSyncDigit(void *p) {
      typedef ::BmnSyncDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSyncDigit

//______________________________________________________________________________
void BmnTrigDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTrigDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTrigDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTrigDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTrigDigit(void *p) {
      return  p ? new(p) ::BmnTrigDigit : new ::BmnTrigDigit;
   }
   static void *newArray_BmnTrigDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTrigDigit[nElements] : new ::BmnTrigDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTrigDigit(void *p) {
      delete ((::BmnTrigDigit*)p);
   }
   static void deleteArray_BmnTrigDigit(void *p) {
      delete [] ((::BmnTrigDigit*)p);
   }
   static void destruct_BmnTrigDigit(void *p) {
      typedef ::BmnTrigDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTrigDigit

//______________________________________________________________________________
void BmnTrigWaveDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTrigWaveDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTrigWaveDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTrigWaveDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTrigWaveDigit(void *p) {
      return  p ? new(p) ::BmnTrigWaveDigit : new ::BmnTrigWaveDigit;
   }
   static void *newArray_BmnTrigWaveDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTrigWaveDigit[nElements] : new ::BmnTrigWaveDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTrigWaveDigit(void *p) {
      delete ((::BmnTrigWaveDigit*)p);
   }
   static void deleteArray_BmnTrigWaveDigit(void *p) {
      delete [] ((::BmnTrigWaveDigit*)p);
   }
   static void destruct_BmnTrigWaveDigit(void *p) {
      typedef ::BmnTrigWaveDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTrigWaveDigit

//______________________________________________________________________________
void CbmMCTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmMCTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmMCTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmMCTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmMCTrack(void *p) {
      return  p ? new(p) ::CbmMCTrack : new ::CbmMCTrack;
   }
   static void *newArray_CbmMCTrack(Long_t nElements, void *p) {
      return p ? new(p) ::CbmMCTrack[nElements] : new ::CbmMCTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmMCTrack(void *p) {
      delete ((::CbmMCTrack*)p);
   }
   static void deleteArray_CbmMCTrack(void *p) {
      delete [] ((::CbmMCTrack*)p);
   }
   static void destruct_CbmMCTrack(void *p) {
      typedef ::CbmMCTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmMCTrack

//______________________________________________________________________________
void CbmStack::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStack::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStack(void *p) {
      return  p ? new(p) ::CbmStack : new ::CbmStack;
   }
   static void *newArray_CbmStack(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStack[nElements] : new ::CbmStack[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStack(void *p) {
      delete ((::CbmStack*)p);
   }
   static void deleteArray_CbmStack(void *p) {
      delete [] ((::CbmStack*)p);
   }
   static void destruct_CbmStack(void *p) {
      typedef ::CbmStack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStack

//______________________________________________________________________________
void StripCluster::Streamer(TBuffer &R__b)
{
   // Stream an object of class StripCluster.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(StripCluster::Class(),this);
   } else {
      R__b.WriteClassBuffer(StripCluster::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_StripCluster(void *p) {
      return  p ? new(p) ::StripCluster : new ::StripCluster;
   }
   static void *newArray_StripCluster(Long_t nElements, void *p) {
      return p ? new(p) ::StripCluster[nElements] : new ::StripCluster[nElements];
   }
   // Wrapper around operator delete
   static void delete_StripCluster(void *p) {
      delete ((::StripCluster*)p);
   }
   static void deleteArray_StripCluster(void *p) {
      delete [] ((::StripCluster*)p);
   }
   static void destruct_StripCluster(void *p) {
      typedef ::StripCluster current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::StripCluster

//______________________________________________________________________________
void BmnStripDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnStripDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnStripDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnStripDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnStripDigit(void *p) {
      return  p ? new(p) ::BmnStripDigit : new ::BmnStripDigit;
   }
   static void *newArray_BmnStripDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnStripDigit[nElements] : new ::BmnStripDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnStripDigit(void *p) {
      delete ((::BmnStripDigit*)p);
   }
   static void deleteArray_BmnStripDigit(void *p) {
      delete [] ((::BmnStripDigit*)p);
   }
   static void destruct_BmnStripDigit(void *p) {
      typedef ::BmnStripDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnStripDigit

//______________________________________________________________________________
void BmnCaloDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnCaloDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnCaloDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnCaloDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnCaloDigit(void *p) {
      return  p ? new(p) ::BmnCaloDigit : new ::BmnCaloDigit;
   }
   static void *newArray_BmnCaloDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnCaloDigit[nElements] : new ::BmnCaloDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnCaloDigit(void *p) {
      delete ((::BmnCaloDigit*)p);
   }
   static void deleteArray_BmnCaloDigit(void *p) {
      delete [] ((::BmnCaloDigit*)p);
   }
   static void destruct_BmnCaloDigit(void *p) {
      typedef ::BmnCaloDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnCaloDigit

//______________________________________________________________________________
void BmnTacquilaDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTacquilaDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTacquilaDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTacquilaDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTacquilaDigit(void *p) {
      return  p ? new(p) ::BmnTacquilaDigit : new ::BmnTacquilaDigit;
   }
   static void *newArray_BmnTacquilaDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTacquilaDigit[nElements] : new ::BmnTacquilaDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTacquilaDigit(void *p) {
      delete ((::BmnTacquilaDigit*)p);
   }
   static void deleteArray_BmnTacquilaDigit(void *p) {
      delete [] ((::BmnTacquilaDigit*)p);
   }
   static void destruct_BmnTacquilaDigit(void *p) {
      typedef ::BmnTacquilaDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTacquilaDigit

//______________________________________________________________________________
void BmnDigiContainerTemplate::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnDigiContainerTemplate.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnDigiContainerTemplate::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnDigiContainerTemplate::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnDigiContainerTemplate(void *p) {
      return  p ? new(p) ::BmnDigiContainerTemplate : new ::BmnDigiContainerTemplate;
   }
   static void *newArray_BmnDigiContainerTemplate(Long_t nElements, void *p) {
      return p ? new(p) ::BmnDigiContainerTemplate[nElements] : new ::BmnDigiContainerTemplate[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnDigiContainerTemplate(void *p) {
      delete ((::BmnDigiContainerTemplate*)p);
   }
   static void deleteArray_BmnDigiContainerTemplate(void *p) {
      delete [] ((::BmnDigiContainerTemplate*)p);
   }
   static void destruct_BmnDigiContainerTemplate(void *p) {
      typedef ::BmnDigiContainerTemplate current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnDigiContainerTemplate

//______________________________________________________________________________
void BmnIdentifiableTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnIdentifiableTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnIdentifiableTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnIdentifiableTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnIdentifiableTrack(void *p) {
      return  p ? new(p) ::BmnIdentifiableTrack : new ::BmnIdentifiableTrack;
   }
   static void *newArray_BmnIdentifiableTrack(Long_t nElements, void *p) {
      return p ? new(p) ::BmnIdentifiableTrack[nElements] : new ::BmnIdentifiableTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnIdentifiableTrack(void *p) {
      delete ((::BmnIdentifiableTrack*)p);
   }
   static void deleteArray_BmnIdentifiableTrack(void *p) {
      delete [] ((::BmnIdentifiableTrack*)p);
   }
   static void destruct_BmnIdentifiableTrack(void *p) {
      typedef ::BmnIdentifiableTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnIdentifiableTrack

//______________________________________________________________________________
void BmnTrackMatch::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTrackMatch.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTrackMatch::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTrackMatch::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTrackMatch(void *p) {
      return  p ? new(p) ::BmnTrackMatch : new ::BmnTrackMatch;
   }
   static void *newArray_BmnTrackMatch(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTrackMatch[nElements] : new ::BmnTrackMatch[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTrackMatch(void *p) {
      delete ((::BmnTrackMatch*)p);
   }
   static void deleteArray_BmnTrackMatch(void *p) {
      delete [] ((::BmnTrackMatch*)p);
   }
   static void destruct_BmnTrackMatch(void *p) {
      typedef ::BmnTrackMatch current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTrackMatch

//______________________________________________________________________________
void BmnVertex::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnVertex.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnVertex::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnVertex::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnVertex(void *p) {
      return  p ? new(p) ::BmnVertex : new ::BmnVertex;
   }
   static void *newArray_BmnVertex(Long_t nElements, void *p) {
      return p ? new(p) ::BmnVertex[nElements] : new ::BmnVertex[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnVertex(void *p) {
      delete ((::BmnVertex*)p);
   }
   static void deleteArray_BmnVertex(void *p) {
      delete [] ((::BmnVertex*)p);
   }
   static void destruct_BmnVertex(void *p) {
      typedef ::BmnVertex current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnVertex

//______________________________________________________________________________
void BmnEventQuality::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnEventQuality.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnEventQuality::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnEventQuality::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnEventQuality(void *p) {
      return  p ? new(p) ::BmnEventQuality : new ::BmnEventQuality;
   }
   static void *newArray_BmnEventQuality(Long_t nElements, void *p) {
      return p ? new(p) ::BmnEventQuality[nElements] : new ::BmnEventQuality[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnEventQuality(void *p) {
      delete ((::BmnEventQuality*)p);
   }
   static void deleteArray_BmnEventQuality(void *p) {
      delete [] ((::BmnEventQuality*)p);
   }
   static void destruct_BmnEventQuality(void *p) {
      typedef ::BmnEventQuality current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnEventQuality

//______________________________________________________________________________
void BmnTask::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTask.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTask::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTask::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTask(void *p) {
      return  p ? new(p) ::BmnTask : new ::BmnTask;
   }
   static void *newArray_BmnTask(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTask[nElements] : new ::BmnTask[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTask(void *p) {
      delete ((::BmnTask*)p);
   }
   static void deleteArray_BmnTask(void *p) {
      delete [] ((::BmnTask*)p);
   }
   static void destruct_BmnTask(void *p) {
      typedef ::BmnTask current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTask

//______________________________________________________________________________
void BmnFunctionSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnFunctionSet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnFunctionSet::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnFunctionSet::Class(),this);
   }
}

namespace ROOT {
} // end of namespace ROOT for class ::BmnFunctionSet

namespace ROOT {
   static TClass *vectorlEunsignedsPlonggR_Dictionary();
   static void vectorlEunsignedsPlonggR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPlonggR(void *p = nullptr);
   static void *newArray_vectorlEunsignedsPlonggR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPlonggR(void *p);
   static void deleteArray_vectorlEunsignedsPlonggR(void *p);
   static void destruct_vectorlEunsignedsPlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned long>*)
   {
      vector<unsigned long> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned long>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned long>", -2, "vector", 386,
                  typeid(vector<unsigned long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPlonggR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned long>) );
      instance.SetNew(&new_vectorlEunsignedsPlonggR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPlonggR);
      instance.SetDelete(&delete_vectorlEunsignedsPlonggR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPlonggR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPlonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned long> >()));

      ::ROOT::AddClassAlternate("vector<unsigned long>","std::vector<unsigned long, std::allocator<unsigned long> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<unsigned long>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<unsigned long>*)nullptr)->GetClass();
      vectorlEunsignedsPlonggR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPlonggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned long> : new vector<unsigned long>;
   }
   static void *newArray_vectorlEunsignedsPlonggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned long>[nElements] : new vector<unsigned long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPlonggR(void *p) {
      delete ((vector<unsigned long>*)p);
   }
   static void deleteArray_vectorlEunsignedsPlonggR(void *p) {
      delete [] ((vector<unsigned long>*)p);
   }
   static void destruct_vectorlEunsignedsPlonggR(void *p) {
      typedef vector<unsigned long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned long>

namespace ROOT {
   static TClass *vectorlEstringgR_Dictionary();
   static void vectorlEstringgR_TClassManip(TClass*);
   static void *new_vectorlEstringgR(void *p = nullptr);
   static void *newArray_vectorlEstringgR(Long_t size, void *p);
   static void delete_vectorlEstringgR(void *p);
   static void deleteArray_vectorlEstringgR(void *p);
   static void destruct_vectorlEstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<string>*)
   {
      vector<string> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<string>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<string>", -2, "vector", 386,
                  typeid(vector<string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEstringgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<string>) );
      instance.SetNew(&new_vectorlEstringgR);
      instance.SetNewArray(&newArray_vectorlEstringgR);
      instance.SetDelete(&delete_vectorlEstringgR);
      instance.SetDeleteArray(&deleteArray_vectorlEstringgR);
      instance.SetDestructor(&destruct_vectorlEstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<string> >()));

      ::ROOT::AddClassAlternate("vector<string>","std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<string>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<string>*)nullptr)->GetClass();
      vectorlEstringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEstringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<string> : new vector<string>;
   }
   static void *newArray_vectorlEstringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<string>[nElements] : new vector<string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEstringgR(void *p) {
      delete ((vector<string>*)p);
   }
   static void deleteArray_vectorlEstringgR(void *p) {
      delete [] ((vector<string>*)p);
   }
   static void destruct_vectorlEstringgR(void *p) {
      typedef vector<string> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<string>

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
   static TClass *vectorlEfloatgR_Dictionary();
   static void vectorlEfloatgR_TClassManip(TClass*);
   static void *new_vectorlEfloatgR(void *p = nullptr);
   static void *newArray_vectorlEfloatgR(Long_t size, void *p);
   static void delete_vectorlEfloatgR(void *p);
   static void deleteArray_vectorlEfloatgR(void *p);
   static void destruct_vectorlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<float>*)
   {
      vector<float> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<float>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<float>", -2, "vector", 386,
                  typeid(vector<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEfloatgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<float>) );
      instance.SetNew(&new_vectorlEfloatgR);
      instance.SetNewArray(&newArray_vectorlEfloatgR);
      instance.SetDelete(&delete_vectorlEfloatgR);
      instance.SetDeleteArray(&deleteArray_vectorlEfloatgR);
      instance.SetDestructor(&destruct_vectorlEfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<float> >()));

      ::ROOT::AddClassAlternate("vector<float>","std::vector<float, std::allocator<float> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<float>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<float>*)nullptr)->GetClass();
      vectorlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<float> : new vector<float>;
   }
   static void *newArray_vectorlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<float>[nElements] : new vector<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEfloatgR(void *p) {
      delete ((vector<float>*)p);
   }
   static void deleteArray_vectorlEfloatgR(void *p) {
      delete [] ((vector<float>*)p);
   }
   static void destruct_vectorlEfloatgR(void *p) {
      typedef vector<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<float>

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

namespace ROOT {
   static TClass *vectorlETClonesArraymUgR_Dictionary();
   static void vectorlETClonesArraymUgR_TClassManip(TClass*);
   static void *new_vectorlETClonesArraymUgR(void *p = nullptr);
   static void *newArray_vectorlETClonesArraymUgR(Long_t size, void *p);
   static void delete_vectorlETClonesArraymUgR(void *p);
   static void deleteArray_vectorlETClonesArraymUgR(void *p);
   static void destruct_vectorlETClonesArraymUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TClonesArray*>*)
   {
      vector<TClonesArray*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TClonesArray*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TClonesArray*>", -2, "vector", 386,
                  typeid(vector<TClonesArray*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETClonesArraymUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<TClonesArray*>) );
      instance.SetNew(&new_vectorlETClonesArraymUgR);
      instance.SetNewArray(&newArray_vectorlETClonesArraymUgR);
      instance.SetDelete(&delete_vectorlETClonesArraymUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETClonesArraymUgR);
      instance.SetDestructor(&destruct_vectorlETClonesArraymUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TClonesArray*> >()));

      ::ROOT::AddClassAlternate("vector<TClonesArray*>","std::vector<TClonesArray*, std::allocator<TClonesArray*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TClonesArray*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETClonesArraymUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TClonesArray*>*)nullptr)->GetClass();
      vectorlETClonesArraymUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETClonesArraymUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETClonesArraymUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TClonesArray*> : new vector<TClonesArray*>;
   }
   static void *newArray_vectorlETClonesArraymUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TClonesArray*>[nElements] : new vector<TClonesArray*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETClonesArraymUgR(void *p) {
      delete ((vector<TClonesArray*>*)p);
   }
   static void deleteArray_vectorlETClonesArraymUgR(void *p) {
      delete [] ((vector<TClonesArray*>*)p);
   }
   static void destruct_vectorlETClonesArraymUgR(void *p) {
      typedef vector<TClonesArray*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TClonesArray*>

namespace ROOT {
   static TClass *vectorlEBmnLinkgR_Dictionary();
   static void vectorlEBmnLinkgR_TClassManip(TClass*);
   static void *new_vectorlEBmnLinkgR(void *p = nullptr);
   static void *newArray_vectorlEBmnLinkgR(Long_t size, void *p);
   static void delete_vectorlEBmnLinkgR(void *p);
   static void deleteArray_vectorlEBmnLinkgR(void *p);
   static void destruct_vectorlEBmnLinkgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnLink>*)
   {
      vector<BmnLink> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnLink>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnLink>", -2, "vector", 386,
                  typeid(vector<BmnLink>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnLinkgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnLink>) );
      instance.SetNew(&new_vectorlEBmnLinkgR);
      instance.SetNewArray(&newArray_vectorlEBmnLinkgR);
      instance.SetDelete(&delete_vectorlEBmnLinkgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnLinkgR);
      instance.SetDestructor(&destruct_vectorlEBmnLinkgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnLink> >()));

      ::ROOT::AddClassAlternate("vector<BmnLink>","std::vector<BmnLink, std::allocator<BmnLink> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnLink>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnLinkgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnLink>*)nullptr)->GetClass();
      vectorlEBmnLinkgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnLinkgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnLinkgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnLink> : new vector<BmnLink>;
   }
   static void *newArray_vectorlEBmnLinkgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnLink>[nElements] : new vector<BmnLink>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnLinkgR(void *p) {
      delete ((vector<BmnLink>*)p);
   }
   static void deleteArray_vectorlEBmnLinkgR(void *p) {
      delete [] ((vector<BmnLink>*)p);
   }
   static void destruct_vectorlEBmnLinkgR(void *p) {
      typedef vector<BmnLink> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnLink>

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
   static TClass *maplEunsignedsPintcOvectorlEunsignedsPlonggRsPgR_Dictionary();
   static void maplEunsignedsPintcOvectorlEunsignedsPlonggRsPgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcOvectorlEunsignedsPlonggRsPgR(void *p = nullptr);
   static void *newArray_maplEunsignedsPintcOvectorlEunsignedsPlonggRsPgR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcOvectorlEunsignedsPlonggRsPgR(void *p);
   static void deleteArray_maplEunsignedsPintcOvectorlEunsignedsPlonggRsPgR(void *p);
   static void destruct_maplEunsignedsPintcOvectorlEunsignedsPlonggRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,vector<unsigned long> >*)
   {
      map<unsigned int,vector<unsigned long> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,vector<unsigned long> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,vector<unsigned long> >", -2, "map", 100,
                  typeid(map<unsigned int,vector<unsigned long> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcOvectorlEunsignedsPlonggRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned int,vector<unsigned long> >) );
      instance.SetNew(&new_maplEunsignedsPintcOvectorlEunsignedsPlonggRsPgR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcOvectorlEunsignedsPlonggRsPgR);
      instance.SetDelete(&delete_maplEunsignedsPintcOvectorlEunsignedsPlonggRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcOvectorlEunsignedsPlonggRsPgR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcOvectorlEunsignedsPlonggRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,vector<unsigned long> > >()));

      ::ROOT::AddClassAlternate("map<unsigned int,vector<unsigned long> >","std::map<unsigned int, std::vector<unsigned long, std::allocator<unsigned long> >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, std::vector<unsigned long, std::allocator<unsigned long> > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<unsigned int,vector<unsigned long> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcOvectorlEunsignedsPlonggRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned int,vector<unsigned long> >*)nullptr)->GetClass();
      maplEunsignedsPintcOvectorlEunsignedsPlonggRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcOvectorlEunsignedsPlonggRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcOvectorlEunsignedsPlonggRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,vector<unsigned long> > : new map<unsigned int,vector<unsigned long> >;
   }
   static void *newArray_maplEunsignedsPintcOvectorlEunsignedsPlonggRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,vector<unsigned long> >[nElements] : new map<unsigned int,vector<unsigned long> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcOvectorlEunsignedsPlonggRsPgR(void *p) {
      delete ((map<unsigned int,vector<unsigned long> >*)p);
   }
   static void deleteArray_maplEunsignedsPintcOvectorlEunsignedsPlonggRsPgR(void *p) {
      delete [] ((map<unsigned int,vector<unsigned long> >*)p);
   }
   static void destruct_maplEunsignedsPintcOvectorlEunsignedsPlonggRsPgR(void *p) {
      typedef map<unsigned int,vector<unsigned long> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,vector<unsigned long> >

namespace ROOT {
   static TClass *maplEunsignedsPintcOLong64_tgR_Dictionary();
   static void maplEunsignedsPintcOLong64_tgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcOLong64_tgR(void *p = nullptr);
   static void *newArray_maplEunsignedsPintcOLong64_tgR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcOLong64_tgR(void *p);
   static void deleteArray_maplEunsignedsPintcOLong64_tgR(void *p);
   static void destruct_maplEunsignedsPintcOLong64_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,Long64_t>*)
   {
      map<unsigned int,Long64_t> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,Long64_t>));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,Long64_t>", -2, "map", 100,
                  typeid(map<unsigned int,Long64_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcOLong64_tgR_Dictionary, isa_proxy, 4,
                  sizeof(map<unsigned int,Long64_t>) );
      instance.SetNew(&new_maplEunsignedsPintcOLong64_tgR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcOLong64_tgR);
      instance.SetDelete(&delete_maplEunsignedsPintcOLong64_tgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcOLong64_tgR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcOLong64_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,Long64_t> >()));

      ::ROOT::AddClassAlternate("map<unsigned int,Long64_t>","std::map<unsigned int, long long, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, long long> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<unsigned int,Long64_t>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcOLong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned int,Long64_t>*)nullptr)->GetClass();
      maplEunsignedsPintcOLong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcOLong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcOLong64_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,Long64_t> : new map<unsigned int,Long64_t>;
   }
   static void *newArray_maplEunsignedsPintcOLong64_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,Long64_t>[nElements] : new map<unsigned int,Long64_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcOLong64_tgR(void *p) {
      delete ((map<unsigned int,Long64_t>*)p);
   }
   static void deleteArray_maplEunsignedsPintcOLong64_tgR(void *p) {
      delete [] ((map<unsigned int,Long64_t>*)p);
   }
   static void destruct_maplEunsignedsPintcOLong64_tgR(void *p) {
      typedef map<unsigned int,Long64_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,Long64_t>

namespace ROOT {
   static TClass *maplEstringcOProfBoardmUgR_Dictionary();
   static void maplEstringcOProfBoardmUgR_TClassManip(TClass*);
   static void *new_maplEstringcOProfBoardmUgR(void *p = nullptr);
   static void *newArray_maplEstringcOProfBoardmUgR(Long_t size, void *p);
   static void delete_maplEstringcOProfBoardmUgR(void *p);
   static void deleteArray_maplEstringcOProfBoardmUgR(void *p);
   static void destruct_maplEstringcOProfBoardmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,ProfBoard*>*)
   {
      map<string,ProfBoard*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,ProfBoard*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,ProfBoard*>", -2, "map", 100,
                  typeid(map<string,ProfBoard*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOProfBoardmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,ProfBoard*>) );
      instance.SetNew(&new_maplEstringcOProfBoardmUgR);
      instance.SetNewArray(&newArray_maplEstringcOProfBoardmUgR);
      instance.SetDelete(&delete_maplEstringcOProfBoardmUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOProfBoardmUgR);
      instance.SetDestructor(&destruct_maplEstringcOProfBoardmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,ProfBoard*> >()));

      ::ROOT::AddClassAlternate("map<string,ProfBoard*>","std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, ProfBoard*, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, ProfBoard*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,ProfBoard*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOProfBoardmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,ProfBoard*>*)nullptr)->GetClass();
      maplEstringcOProfBoardmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOProfBoardmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOProfBoardmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,ProfBoard*> : new map<string,ProfBoard*>;
   }
   static void *newArray_maplEstringcOProfBoardmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,ProfBoard*>[nElements] : new map<string,ProfBoard*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOProfBoardmUgR(void *p) {
      delete ((map<string,ProfBoard*>*)p);
   }
   static void deleteArray_maplEstringcOProfBoardmUgR(void *p) {
      delete [] ((map<string,ProfBoard*>*)p);
   }
   static void destruct_maplEstringcOProfBoardmUgR(void *p) {
      typedef map<string,ProfBoard*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,ProfBoard*>

namespace {
  void TriggerDictionaryInitialization_G__BmnBaseDict_Impl() {
    static const char* headers[] = {
"CbmStsPoint.h",
"CbmDigi.h",
"CbmBaseHit.h",
"CbmHit.h",
"CbmStripHit.h",
"CbmVertex.h",
"CbmStsTrack.h",
"CbmStsTrackFinder.h",
"CbmStsTrackFitter.h",
"CbmTofMerger.h",
"CbmTrackMerger.h",
"CbmPrimaryVertexFinder.h",
"CbmFindPrimaryVertex.h",
"CbmL1Counters.h",
"CbmTrackMatch.h",
"CbmGlobalTrack.h",
"CbmMvdDetectorId.h",
"CbmMvdGeoPar.h",
"CbmMvdPoint.h",
"CbmMvdHit.h",
"CbmMvdHitMatch.h",
"CbmTofPoint.h",
"CbmTofHit.h",
"CbmTofTrack.h",
"CbmGeoSttPar.h",
"BmnMath.h",
"BmnMatrixMath.h",
"FitWLSQ.h",
"BmnGeoNavigator.h",
"BmnKalmanFilter.h",
"BmnMaterialEffects.h",
"BmnMaterialInfo.h",
"BmnProfRawTools.h",
"BmnFileSource.h",
"BmnDecoSource.h",
"BmnProfilometerSource.h",
"BmnOnlineShmSource.h",
"BmnEventHeader.h",
"BmnSpillHeader.h",
"DigiRunHeader.h",
"DstRunHeader.h",
"DstEventHeader.h",
"RawTypes.h",
"BmnADCDigit.h",
"BmnTDCDigit.h",
"BmnTQDCADCDigit.h",
"BmnTTBDigit.h",
"BmnMSCDigit.h",
"BmnHRBDigit.h",
"BmnSyncDigit.h",
"BmnTrigDigit.h",
"BmnTrigWaveDigit.h",
"BmnTrigInfo.h",
"BmnTrigUnion.h",
"DigiArrays.h",
"CbmMCTrack.h",
"CbmStack.h",
"BmnStripData.h",
"BmnStripDigit.h",
"BmnCaloDigit.h",
"BmnTacquilaDigit.h",
"BmnDigiContainerTemplate.h",
"BmnHit.h",
"BmnLink.h",
"BmnMatch.h",
"BmnTrack.h",
"BmnIdentifiableTrack.h",
"BmnTrackMatch.h",
"BmnVertex.h",
"BmnEventQuality.h",
"BmnFitNode.h",
"BmnEnums.h",
"BmnDetectorList.h",
"BmnTask.h",
"BmnFunctionSet.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/field",
"/data/yaopeng/bmnroot_Yaopeng/base",
"/data/yaopeng/bmnroot_Yaopeng/base/data",
"/data/yaopeng/bmnroot_Yaopeng/base/cbm",
"/data/yaopeng/bmnroot_Yaopeng/base/math",
"/data/yaopeng/bmnroot_Yaopeng/base/source",
"/data/yaopeng/bmnroot_Yaopeng/base/header",
"/data/yaopeng/bmnroot_Yaopeng/base/raw",
"/data/yaopeng/bmnroot_Yaopeng/services",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/base/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__BmnBaseDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$TClonesArray.h")))  __attribute__((annotate("$clingAutoload$CbmStsTrack.h")))  TClonesArray;
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace std{template <class T = void> struct __attribute__((annotate("$clingAutoload$boost/intrusive/detail/std_fwd.hpp")))  __attribute__((annotate("$clingAutoload$BmnOnlineShmSource.h")))  less;
}
namespace std{template <typename _T1, typename _T2> struct __attribute__((annotate("$clingAutoload$bits/stl_iterator.h")))  __attribute__((annotate("$clingAutoload$string")))  pair;
}
class __attribute__((annotate("$clingAutoload$CbmStsPoint.h")))  CbmStsPoint;
class __attribute__((annotate("$clingAutoload$CbmDigi.h")))  CbmDigi;
class __attribute__((annotate("$clingAutoload$CbmBaseHit.h")))  CbmBaseHit;
class __attribute__((annotate("$clingAutoload$CbmHit.h")))  CbmHit;
class __attribute__((annotate("$clingAutoload$CbmStripHit.h")))  CbmStripHit;
class __attribute__((annotate("$clingAutoload$CbmVertex.h")))  CbmVertex;
class __attribute__((annotate("$clingAutoload$CbmStsTrack.h")))  CbmStsTrack;
class __attribute__((annotate("$clingAutoload$CbmStsTrackFinder.h")))  CbmStsTrackFinder;
class __attribute__((annotate("$clingAutoload$CbmStsTrackFitter.h")))  CbmStsTrackFitter;
class __attribute__((annotate("$clingAutoload$CbmTofMerger.h")))  CbmTofMerger;
class __attribute__((annotate("$clingAutoload$CbmTrackMerger.h")))  CbmTrackMerger;
class __attribute__((annotate("$clingAutoload$CbmPrimaryVertexFinder.h")))  CbmPrimaryVertexFinder;
class __attribute__((annotate("$clingAutoload$CbmFindPrimaryVertex.h")))  CbmFindPrimaryVertex;
class __attribute__((annotate("$clingAutoload$CbmTrackMatch.h")))  CbmTrackMatch;
class __attribute__((annotate("$clingAutoload$BmnFitNode.h")))  __attribute__((annotate("$clingAutoload$CbmGlobalTrack.h")))  BmnFitNode;
class __attribute__((annotate("$clingAutoload$CbmGlobalTrack.h")))  CbmGlobalTrack;
class __attribute__((annotate("$clingAutoload$BmnDetectorList.h")))  __attribute__((annotate("$clingAutoload$CbmMvdDetectorId.h")))  BmnDetectorList;
class __attribute__((annotate("$clingAutoload$CbmMvdDetectorId.h")))  CbmMvdDetectorId;
class __attribute__((annotate("$clingAutoload$CbmMvdGeoPar.h")))  CbmMvdGeoPar;
class __attribute__((annotate("$clingAutoload$CbmMvdPoint.h")))  CbmMvdPoint;
class __attribute__((annotate("$clingAutoload$CbmMvdHit.h")))  CbmMvdHit;
class __attribute__((annotate("$clingAutoload$CbmMvdHitMatch.h")))  CbmMvdHitMatch;
class __attribute__((annotate("$clingAutoload$CbmTofPoint.h")))  CbmTofPoint;
class __attribute__((annotate("$clingAutoload$BmnLink.h")))  __attribute__((annotate("$clingAutoload$CbmTofHit.h")))  BmnLink;
class __attribute__((annotate("$clingAutoload$BmnMatch.h")))  __attribute__((annotate("$clingAutoload$CbmTofHit.h")))  BmnMatch;
class __attribute__((annotate("$clingAutoload$BmnHit.h")))  __attribute__((annotate("$clingAutoload$CbmTofHit.h")))  BmnHit;
class __attribute__((annotate("$clingAutoload$CbmTofHit.h")))  CbmTofHit;
class __attribute__((annotate("$clingAutoload$CbmTofTrack.h")))  CbmTofTrack;
class __attribute__((annotate("$clingAutoload$CbmGeoSttPar.h")))  CbmGeoSttPar;
class __attribute__((annotate("$clingAutoload$BmnTrack.h")))  __attribute__((annotate("$clingAutoload$BmnMath.h")))  BmnTrack;
class __attribute__((annotate("$clingAutoload$FitWLSQ.h")))  FitWLSQ;
class __attribute__((annotate("$clingAutoload$BmnGeoNavigator.h")))  BmnGeoNavigator;
class __attribute__((annotate("$clingAutoload$BmnKalmanFilter.h")))  BmnKalmanFilter;
class __attribute__((annotate("$clingAutoload$BmnProfRawTools.h")))  BmnProfRawTools;
class __attribute__((annotate("$clingAutoload$BmnFileSource.h")))  BmnFileSource;
class __attribute__((annotate("$clingAutoload$BmnTrigInfo.h")))  __attribute__((annotate("$clingAutoload$BmnDecoSource.h")))  BmnTrigInfo;
class __attribute__((annotate("$clingAutoload$BmnEventHeader.h")))  __attribute__((annotate("$clingAutoload$BmnDecoSource.h")))  BmnEventHeader;
class __attribute__((annotate("$clingAutoload$DigiArrays.h")))  __attribute__((annotate("$clingAutoload$BmnDecoSource.h")))  DigiArrays;
class __attribute__((annotate("$clingAutoload$BmnDecoSource.h")))  BmnDecoSource;
class __attribute__((annotate("$clingAutoload$BmnADCDigit.h")))  __attribute__((annotate("$clingAutoload$BmnProfilometerSource.h")))  BmnADCDigit;
class __attribute__((annotate("$clingAutoload$BmnProfilometerSource.h")))  BmnProfilometerSource;
class __attribute__((annotate("$clingAutoload$BmnOnlineShmSource.h")))  BmnOnlineShmSource;
class __attribute__((annotate("$clingAutoload$BmnSpillHeader.h")))  BmnSpillHeader;
class __attribute__((annotate("$clingAutoload$DigiRunHeader.h")))  DigiRunHeader;
class __attribute__((annotate("$clingAutoload$DstRunHeader.h")))  DstRunHeader;
class __attribute__((annotate("$clingAutoload$DstEventHeader.h")))  DstEventHeader;
class __attribute__((annotate("$clingAutoload$BmnTDCDigit.h")))  BmnTDCDigit;
class __attribute__((annotate("$clingAutoload$BmnTQDCADCDigit.h")))  BmnTQDCADCDigit;
class __attribute__((annotate("$clingAutoload$BmnTTBDigit.h")))  BmnTTBDigit;
class __attribute__((annotate("$clingAutoload$BmnMSCDigit.h")))  BmnMSCDigit;
class __attribute__((annotate("$clingAutoload$BmnHRBDigit.h")))  BmnHRBDigit;
class __attribute__((annotate("$clingAutoload$BmnSyncDigit.h")))  BmnSyncDigit;
class __attribute__((annotate("$clingAutoload$BmnTrigDigit.h")))  BmnTrigDigit;
class __attribute__((annotate("$clingAutoload$BmnTrigWaveDigit.h")))  BmnTrigWaveDigit;
class __attribute__((annotate(R"ATTRDUMP(AZ-310822)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(AZ-310822)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(AZ-310822)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(AZ-310822)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$CbmMCTrack.h")))  CbmMCTrack;
class __attribute__((annotate("$clingAutoload$CbmStack.h")))  CbmStack;
class __attribute__((annotate("$clingAutoload$BmnStripData.h")))  StripCluster;
class __attribute__((annotate("$clingAutoload$BmnStripDigit.h")))  BmnStripDigit;
class __attribute__((annotate("$clingAutoload$BmnCaloDigit.h")))  BmnCaloDigit;
class __attribute__((annotate("$clingAutoload$BmnTacquilaDigit.h")))  BmnTacquilaDigit;
class __attribute__((annotate("$clingAutoload$BmnDigiContainerTemplate.h")))  BmnDigiContainerTemplate;
class __attribute__((annotate("$clingAutoload$BmnIdentifiableTrack.h")))  BmnIdentifiableTrack;
class __attribute__((annotate("$clingAutoload$BmnTrackMatch.h")))  BmnTrackMatch;
class __attribute__((annotate("$clingAutoload$BmnVertex.h")))  BmnVertex;
class __attribute__((annotate("$clingAutoload$BmnEventQuality.h")))  BmnEventQuality;
class __attribute__((annotate("$clingAutoload$BmnTask.h")))  BmnTask;
class __attribute__((annotate("$clingAutoload$BmnFunctionSet.h")))  BmnFunctionSet;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__BmnBaseDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "CbmStsPoint.h"
#include "CbmDigi.h"
#include "CbmBaseHit.h"
#include "CbmHit.h"
#include "CbmStripHit.h"
#include "CbmVertex.h"
#include "CbmStsTrack.h"
#include "CbmStsTrackFinder.h"
#include "CbmStsTrackFitter.h"
#include "CbmTofMerger.h"
#include "CbmTrackMerger.h"
#include "CbmPrimaryVertexFinder.h"
#include "CbmFindPrimaryVertex.h"
#include "CbmL1Counters.h"
#include "CbmTrackMatch.h"
#include "CbmGlobalTrack.h"
#include "CbmMvdDetectorId.h"
#include "CbmMvdGeoPar.h"
#include "CbmMvdPoint.h"
#include "CbmMvdHit.h"
#include "CbmMvdHitMatch.h"
#include "CbmTofPoint.h"
#include "CbmTofHit.h"
#include "CbmTofTrack.h"
#include "CbmGeoSttPar.h"
#include "BmnMath.h"
#include "BmnMatrixMath.h"
#include "FitWLSQ.h"
#include "BmnGeoNavigator.h"
#include "BmnKalmanFilter.h"
#include "BmnMaterialEffects.h"
#include "BmnMaterialInfo.h"
#include "BmnProfRawTools.h"
#include "BmnFileSource.h"
#include "BmnDecoSource.h"
#include "BmnProfilometerSource.h"
#include "BmnOnlineShmSource.h"
#include "BmnEventHeader.h"
#include "BmnSpillHeader.h"
#include "DigiRunHeader.h"
#include "DstRunHeader.h"
#include "DstEventHeader.h"
#include "RawTypes.h"
#include "BmnADCDigit.h"
#include "BmnTDCDigit.h"
#include "BmnTQDCADCDigit.h"
#include "BmnTTBDigit.h"
#include "BmnMSCDigit.h"
#include "BmnHRBDigit.h"
#include "BmnSyncDigit.h"
#include "BmnTrigDigit.h"
#include "BmnTrigWaveDigit.h"
#include "BmnTrigInfo.h"
#include "BmnTrigUnion.h"
#include "DigiArrays.h"
#include "CbmMCTrack.h"
#include "CbmStack.h"
#include "BmnStripData.h"
#include "BmnStripDigit.h"
#include "BmnCaloDigit.h"
#include "BmnTacquilaDigit.h"
#include "BmnDigiContainerTemplate.h"
#include "BmnHit.h"
#include "BmnLink.h"
#include "BmnMatch.h"
#include "BmnTrack.h"
#include "BmnIdentifiableTrack.h"
#include "BmnTrackMatch.h"
#include "BmnVertex.h"
#include "BmnEventQuality.h"
#include "BmnFitNode.h"
#include "BmnEnums.h"
#include "BmnDetectorList.h"
#include "BmnTask.h"
#include "BmnFunctionSet.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BmnADCDigit", payloadCode, "@",
"BmnCaloDigit", payloadCode, "@",
"BmnDecoSource", payloadCode, "@",
"BmnDetectorList", payloadCode, "@",
"BmnDigiContainerTemplate", payloadCode, "@",
"BmnEventHeader", payloadCode, "@",
"BmnEventQuality", payloadCode, "@",
"BmnFileSource", payloadCode, "@",
"BmnFitNode", payloadCode, "@",
"BmnFunctionSet", payloadCode, "@",
"BmnGeoNavigator", payloadCode, "@",
"BmnHRBDigit", payloadCode, "@",
"BmnHit", payloadCode, "@",
"BmnIdentifiableTrack", payloadCode, "@",
"BmnKalmanFilter", payloadCode, "@",
"BmnLink", payloadCode, "@",
"BmnMSCDigit", payloadCode, "@",
"BmnMatch", payloadCode, "@",
"BmnOnlineShmSource", payloadCode, "@",
"BmnProfRawTools", payloadCode, "@",
"BmnProfilometerSource", payloadCode, "@",
"BmnSetup", payloadCode, "@",
"BmnSpillHeader", payloadCode, "@",
"BmnStripDigit", payloadCode, "@",
"BmnSyncDigit", payloadCode, "@",
"BmnTDCDigit", payloadCode, "@",
"BmnTQDCADCDigit", payloadCode, "@",
"BmnTTBDigit", payloadCode, "@",
"BmnTacquilaDigit", payloadCode, "@",
"BmnTask", payloadCode, "@",
"BmnTrack", payloadCode, "@",
"BmnTrackMatch", payloadCode, "@",
"BmnTrigDigit", payloadCode, "@",
"BmnTrigInfo", payloadCode, "@",
"BmnTrigWaveDigit", payloadCode, "@",
"BmnVertex", payloadCode, "@",
"CbmBaseHit", payloadCode, "@",
"CbmDigi", payloadCode, "@",
"CbmFindPrimaryVertex", payloadCode, "@",
"CbmGeoSttPar", payloadCode, "@",
"CbmGlobalTrack", payloadCode, "@",
"CbmHit", payloadCode, "@",
"CbmMCTrack", payloadCode, "@",
"CbmMvdDetectorId", payloadCode, "@",
"CbmMvdGeoPar", payloadCode, "@",
"CbmMvdHit", payloadCode, "@",
"CbmMvdHitMatch", payloadCode, "@",
"CbmMvdPoint", payloadCode, "@",
"CbmPrimaryVertexFinder", payloadCode, "@",
"CbmStack", payloadCode, "@",
"CbmStripHit", payloadCode, "@",
"CbmStsPoint", payloadCode, "@",
"CbmStsTrack", payloadCode, "@",
"CbmStsTrackFinder", payloadCode, "@",
"CbmStsTrackFitter", payloadCode, "@",
"CbmTofHit", payloadCode, "@",
"CbmTofMerger", payloadCode, "@",
"CbmTofPoint", payloadCode, "@",
"CbmTofTrack", payloadCode, "@",
"CbmTrackMatch", payloadCode, "@",
"CbmTrackMerger", payloadCode, "@",
"CbmVertex", payloadCode, "@",
"DigiArrays", payloadCode, "@",
"DigiRunHeader", payloadCode, "@",
"DstEventHeader", payloadCode, "@",
"DstRunHeader", payloadCode, "@",
"FitWLSQ", payloadCode, "@",
"StripCluster", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__BmnBaseDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__BmnBaseDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__BmnBaseDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__BmnBaseDict() {
  TriggerDictionaryInitialization_G__BmnBaseDict_Impl();
}
