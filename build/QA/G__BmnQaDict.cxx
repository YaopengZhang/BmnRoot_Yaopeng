// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIQAdIG__BmnQaDict
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
#include "BmnRunInfo.h"
#include "BmnSimulationReport.h"
#include "BmnStudyReport.h"
#include "BmnHtmlReportElement.h"
#include "BmnReport.h"
#include "BmnDrawHist.h"
#include "BmnDrawOnline.h"
#include "BmnHistManager.h"
#include "BmnSimulationReport.h"
#include "BmnReportElement.h"
#include "BmnHist.h"
#include "PadInfo.h"
#include "BmnPadBranch.h"
#include "BmnPadGenerator.h"
#include "BmnQaBase.h"
#include "BmnPidQa.h"
#include "BmnPidQaReport.h"
#include "BmnTrackingQa.h"
#include "BmnTrackingQaExp.h"
#include "BmnLambdaQa.h"
#include "BmnClusteringQa.h"
#include "BmnUtils.h"
#include "BmnTrackingQaReport.h"
#include "BmnTrackingQaExpReport.h"
#include "BmnLambdaQaReport.h"
#include "BmnClusteringQaReport.h"
#include "BmnCustomQa.h"
#include "BmnMCTrack.h"
#include "BmnMCTrackCreator.h"
#include "BmnAcceptanceFunction.h"
#include "BmnMCPoint.h"
#include "BmnMatchRecoToMC.h"
#include "BmnQaHistoManager.h"
#include "BmnQaOffline.h"
#include "BmnCoordinateDetQa.h"
#include "BmnTimeDetQa.h"
#include "BmnCalorimeterDetQa.h"
#include "BmnTrigDetQa.h"
#include "BmnDstQa.h"
#include "BmnQaMonitor.h"
#include "BmnTrackingQaOffline.h"
#include "BmnTrackingQaOfflineDraw.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BmnRunInfo(void *p = nullptr);
   static void *newArray_BmnRunInfo(Long_t size, void *p);
   static void delete_BmnRunInfo(void *p);
   static void deleteArray_BmnRunInfo(void *p);
   static void destruct_BmnRunInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnRunInfo*)
   {
      ::BmnRunInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnRunInfo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnRunInfo", ::BmnRunInfo::Class_Version(), "BmnRunInfo.h", 6,
                  typeid(::BmnRunInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnRunInfo::Dictionary, isa_proxy, 4,
                  sizeof(::BmnRunInfo) );
      instance.SetNew(&new_BmnRunInfo);
      instance.SetNewArray(&newArray_BmnRunInfo);
      instance.SetDelete(&delete_BmnRunInfo);
      instance.SetDeleteArray(&deleteArray_BmnRunInfo);
      instance.SetDestructor(&destruct_BmnRunInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnRunInfo*)
   {
      return GenerateInitInstanceLocal((::BmnRunInfo*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnRunInfo*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnReport(void *p);
   static void deleteArray_BmnReport(void *p);
   static void destruct_BmnReport(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnReport*)
   {
      ::BmnReport *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnReport >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnReport", ::BmnReport::Class_Version(), "BmnReport.h", 29,
                  typeid(::BmnReport), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnReport::Dictionary, isa_proxy, 4,
                  sizeof(::BmnReport) );
      instance.SetDelete(&delete_BmnReport);
      instance.SetDeleteArray(&deleteArray_BmnReport);
      instance.SetDestructor(&destruct_BmnReport);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnReport*)
   {
      return GenerateInitInstanceLocal((::BmnReport*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnReport*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnSimulationReport(void *p);
   static void deleteArray_BmnSimulationReport(void *p);
   static void destruct_BmnSimulationReport(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSimulationReport*)
   {
      ::BmnSimulationReport *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSimulationReport >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSimulationReport", ::BmnSimulationReport::Class_Version(), "BmnSimulationReport.h", 33,
                  typeid(::BmnSimulationReport), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSimulationReport::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSimulationReport) );
      instance.SetDelete(&delete_BmnSimulationReport);
      instance.SetDeleteArray(&deleteArray_BmnSimulationReport);
      instance.SetDestructor(&destruct_BmnSimulationReport);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSimulationReport*)
   {
      return GenerateInitInstanceLocal((::BmnSimulationReport*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSimulationReport*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnStudyReport(void *p);
   static void deleteArray_BmnStudyReport(void *p);
   static void destruct_BmnStudyReport(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnStudyReport*)
   {
      ::BmnStudyReport *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnStudyReport >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnStudyReport", ::BmnStudyReport::Class_Version(), "BmnStudyReport.h", 26,
                  typeid(::BmnStudyReport), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnStudyReport::Dictionary, isa_proxy, 4,
                  sizeof(::BmnStudyReport) );
      instance.SetDelete(&delete_BmnStudyReport);
      instance.SetDeleteArray(&deleteArray_BmnStudyReport);
      instance.SetDestructor(&destruct_BmnStudyReport);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnStudyReport*)
   {
      return GenerateInitInstanceLocal((::BmnStudyReport*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnStudyReport*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnReportElement(void *p);
   static void deleteArray_BmnReportElement(void *p);
   static void destruct_BmnReportElement(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnReportElement*)
   {
      ::BmnReportElement *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnReportElement >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnReportElement", ::BmnReportElement::Class_Version(), "BmnReportElement.h", 32,
                  typeid(::BmnReportElement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnReportElement::Dictionary, isa_proxy, 4,
                  sizeof(::BmnReportElement) );
      instance.SetDelete(&delete_BmnReportElement);
      instance.SetDeleteArray(&deleteArray_BmnReportElement);
      instance.SetDestructor(&destruct_BmnReportElement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnReportElement*)
   {
      return GenerateInitInstanceLocal((::BmnReportElement*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnReportElement*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnHtmlReportElement(void *p = nullptr);
   static void *newArray_BmnHtmlReportElement(Long_t size, void *p);
   static void delete_BmnHtmlReportElement(void *p);
   static void deleteArray_BmnHtmlReportElement(void *p);
   static void destruct_BmnHtmlReportElement(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHtmlReportElement*)
   {
      ::BmnHtmlReportElement *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHtmlReportElement >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHtmlReportElement", ::BmnHtmlReportElement::Class_Version(), "BmnHtmlReportElement.h", 22,
                  typeid(::BmnHtmlReportElement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHtmlReportElement::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHtmlReportElement) );
      instance.SetNew(&new_BmnHtmlReportElement);
      instance.SetNewArray(&newArray_BmnHtmlReportElement);
      instance.SetDelete(&delete_BmnHtmlReportElement);
      instance.SetDeleteArray(&deleteArray_BmnHtmlReportElement);
      instance.SetDestructor(&destruct_BmnHtmlReportElement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHtmlReportElement*)
   {
      return GenerateInitInstanceLocal((::BmnHtmlReportElement*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHtmlReportElement*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnDrawOnline(void *p);
   static void deleteArray_BmnDrawOnline(void *p);
   static void destruct_BmnDrawOnline(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnDrawOnline*)
   {
      ::BmnDrawOnline *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnDrawOnline >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnDrawOnline", ::BmnDrawOnline::Class_Version(), "BmnDrawOnline.h", 23,
                  typeid(::BmnDrawOnline), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnDrawOnline::Dictionary, isa_proxy, 4,
                  sizeof(::BmnDrawOnline) );
      instance.SetDelete(&delete_BmnDrawOnline);
      instance.SetDeleteArray(&deleteArray_BmnDrawOnline);
      instance.SetDestructor(&destruct_BmnDrawOnline);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnDrawOnline*)
   {
      return GenerateInitInstanceLocal((::BmnDrawOnline*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnDrawOnline*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnHistManager(void *p = nullptr);
   static void *newArray_BmnHistManager(Long_t size, void *p);
   static void delete_BmnHistManager(void *p);
   static void deleteArray_BmnHistManager(void *p);
   static void destruct_BmnHistManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHistManager*)
   {
      ::BmnHistManager *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHistManager >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHistManager", ::BmnHistManager::Class_Version(), "BmnHistManager.h", 40,
                  typeid(::BmnHistManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHistManager::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHistManager) );
      instance.SetNew(&new_BmnHistManager);
      instance.SetNewArray(&newArray_BmnHistManager);
      instance.SetDelete(&delete_BmnHistManager);
      instance.SetDeleteArray(&deleteArray_BmnHistManager);
      instance.SetDestructor(&destruct_BmnHistManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHistManager*)
   {
      return GenerateInitInstanceLocal((::BmnHistManager*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHistManager*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_PadInfo(void *p = nullptr);
   static void *newArray_PadInfo(Long_t size, void *p);
   static void delete_PadInfo(void *p);
   static void deleteArray_PadInfo(void *p);
   static void destruct_PadInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PadInfo*)
   {
      ::PadInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PadInfo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("PadInfo", ::PadInfo::Class_Version(), "PadInfo.h", 14,
                  typeid(::PadInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::PadInfo::Dictionary, isa_proxy, 4,
                  sizeof(::PadInfo) );
      instance.SetNew(&new_PadInfo);
      instance.SetNewArray(&newArray_PadInfo);
      instance.SetDelete(&delete_PadInfo);
      instance.SetDeleteArray(&deleteArray_PadInfo);
      instance.SetDestructor(&destruct_PadInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PadInfo*)
   {
      return GenerateInitInstanceLocal((::PadInfo*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::PadInfo*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnPadBranch_Dictionary();
   static void BmnPadBranch_TClassManip(TClass*);
   static void *new_BmnPadBranch(void *p = nullptr);
   static void *newArray_BmnPadBranch(Long_t size, void *p);
   static void delete_BmnPadBranch(void *p);
   static void deleteArray_BmnPadBranch(void *p);
   static void destruct_BmnPadBranch(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnPadBranch*)
   {
      ::BmnPadBranch *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnPadBranch));
      static ::ROOT::TGenericClassInfo 
         instance("BmnPadBranch", "BmnPadBranch.h", 15,
                  typeid(::BmnPadBranch), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnPadBranch_Dictionary, isa_proxy, 4,
                  sizeof(::BmnPadBranch) );
      instance.SetNew(&new_BmnPadBranch);
      instance.SetNewArray(&newArray_BmnPadBranch);
      instance.SetDelete(&delete_BmnPadBranch);
      instance.SetDeleteArray(&deleteArray_BmnPadBranch);
      instance.SetDestructor(&destruct_BmnPadBranch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnPadBranch*)
   {
      return GenerateInitInstanceLocal((::BmnPadBranch*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnPadBranch*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnPadBranch_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnPadBranch*)nullptr)->GetClass();
      BmnPadBranch_TClassManip(theClass);
   return theClass;
   }

   static void BmnPadBranch_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnHist(void *p);
   static void deleteArray_BmnHist(void *p);
   static void destruct_BmnHist(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHist*)
   {
      ::BmnHist *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHist >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHist", ::BmnHist::Class_Version(), "BmnHist.h", 35,
                  typeid(::BmnHist), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHist::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHist) );
      instance.SetDelete(&delete_BmnHist);
      instance.SetDeleteArray(&deleteArray_BmnHist);
      instance.SetDestructor(&destruct_BmnHist);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHist*)
   {
      return GenerateInitInstanceLocal((::BmnHist*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHist*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnPadGenerator_Dictionary();
   static void BmnPadGenerator_TClassManip(TClass*);
   static void *new_BmnPadGenerator(void *p = nullptr);
   static void *newArray_BmnPadGenerator(Long_t size, void *p);
   static void delete_BmnPadGenerator(void *p);
   static void deleteArray_BmnPadGenerator(void *p);
   static void destruct_BmnPadGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnPadGenerator*)
   {
      ::BmnPadGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnPadGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("BmnPadGenerator", "BmnPadGenerator.h", 29,
                  typeid(::BmnPadGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnPadGenerator_Dictionary, isa_proxy, 4,
                  sizeof(::BmnPadGenerator) );
      instance.SetNew(&new_BmnPadGenerator);
      instance.SetNewArray(&newArray_BmnPadGenerator);
      instance.SetDelete(&delete_BmnPadGenerator);
      instance.SetDeleteArray(&deleteArray_BmnPadGenerator);
      instance.SetDestructor(&destruct_BmnPadGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnPadGenerator*)
   {
      return GenerateInitInstanceLocal((::BmnPadGenerator*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnPadGenerator*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnPadGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnPadGenerator*)nullptr)->GetClass();
      BmnPadGenerator_TClassManip(theClass);
   return theClass;
   }

   static void BmnPadGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnMCPoint_Dictionary();
   static void BmnMCPoint_TClassManip(TClass*);
   static void *new_BmnMCPoint(void *p = nullptr);
   static void *newArray_BmnMCPoint(Long_t size, void *p);
   static void delete_BmnMCPoint(void *p);
   static void deleteArray_BmnMCPoint(void *p);
   static void destruct_BmnMCPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMCPoint*)
   {
      ::BmnMCPoint *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnMCPoint));
      static ::ROOT::TGenericClassInfo 
         instance("BmnMCPoint", "BmnMCPoint.h", 21,
                  typeid(::BmnMCPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnMCPoint_Dictionary, isa_proxy, 4,
                  sizeof(::BmnMCPoint) );
      instance.SetNew(&new_BmnMCPoint);
      instance.SetNewArray(&newArray_BmnMCPoint);
      instance.SetDelete(&delete_BmnMCPoint);
      instance.SetDeleteArray(&deleteArray_BmnMCPoint);
      instance.SetDestructor(&destruct_BmnMCPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMCPoint*)
   {
      return GenerateInitInstanceLocal((::BmnMCPoint*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMCPoint*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnMCPoint_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnMCPoint*)nullptr)->GetClass();
      BmnMCPoint_TClassManip(theClass);
   return theClass;
   }

   static void BmnMCPoint_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnMCTrack_Dictionary();
   static void BmnMCTrack_TClassManip(TClass*);
   static void *new_BmnMCTrack(void *p = nullptr);
   static void *newArray_BmnMCTrack(Long_t size, void *p);
   static void delete_BmnMCTrack(void *p);
   static void deleteArray_BmnMCTrack(void *p);
   static void destruct_BmnMCTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMCTrack*)
   {
      ::BmnMCTrack *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnMCTrack));
      static ::ROOT::TGenericClassInfo 
         instance("BmnMCTrack", "BmnMCTrack.h", 26,
                  typeid(::BmnMCTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnMCTrack_Dictionary, isa_proxy, 4,
                  sizeof(::BmnMCTrack) );
      instance.SetNew(&new_BmnMCTrack);
      instance.SetNewArray(&newArray_BmnMCTrack);
      instance.SetDelete(&delete_BmnMCTrack);
      instance.SetDeleteArray(&deleteArray_BmnMCTrack);
      instance.SetDestructor(&destruct_BmnMCTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMCTrack*)
   {
      return GenerateInitInstanceLocal((::BmnMCTrack*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMCTrack*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnMCTrack_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnMCTrack*)nullptr)->GetClass();
      BmnMCTrack_TClassManip(theClass);
   return theClass;
   }

   static void BmnMCTrack_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnMCTrackCreator_Dictionary();
   static void BmnMCTrackCreator_TClassManip(TClass*);
   static void delete_BmnMCTrackCreator(void *p);
   static void deleteArray_BmnMCTrackCreator(void *p);
   static void destruct_BmnMCTrackCreator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMCTrackCreator*)
   {
      ::BmnMCTrackCreator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnMCTrackCreator));
      static ::ROOT::TGenericClassInfo 
         instance("BmnMCTrackCreator", "BmnMCTrackCreator.h", 33,
                  typeid(::BmnMCTrackCreator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnMCTrackCreator_Dictionary, isa_proxy, 4,
                  sizeof(::BmnMCTrackCreator) );
      instance.SetDelete(&delete_BmnMCTrackCreator);
      instance.SetDeleteArray(&deleteArray_BmnMCTrackCreator);
      instance.SetDestructor(&destruct_BmnMCTrackCreator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMCTrackCreator*)
   {
      return GenerateInitInstanceLocal((::BmnMCTrackCreator*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMCTrackCreator*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnMCTrackCreator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnMCTrackCreator*)nullptr)->GetClass();
      BmnMCTrackCreator_TClassManip(theClass);
   return theClass;
   }

   static void BmnMCTrackCreator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTrackingQaExpReport(void *p = nullptr);
   static void *newArray_BmnTrackingQaExpReport(Long_t size, void *p);
   static void delete_BmnTrackingQaExpReport(void *p);
   static void deleteArray_BmnTrackingQaExpReport(void *p);
   static void destruct_BmnTrackingQaExpReport(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTrackingQaExpReport*)
   {
      ::BmnTrackingQaExpReport *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTrackingQaExpReport >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTrackingQaExpReport", ::BmnTrackingQaExpReport::Class_Version(), "BmnTrackingQaExpReport.h", 19,
                  typeid(::BmnTrackingQaExpReport), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTrackingQaExpReport::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTrackingQaExpReport) );
      instance.SetNew(&new_BmnTrackingQaExpReport);
      instance.SetNewArray(&newArray_BmnTrackingQaExpReport);
      instance.SetDelete(&delete_BmnTrackingQaExpReport);
      instance.SetDeleteArray(&deleteArray_BmnTrackingQaExpReport);
      instance.SetDestructor(&destruct_BmnTrackingQaExpReport);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTrackingQaExpReport*)
   {
      return GenerateInitInstanceLocal((::BmnTrackingQaExpReport*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTrackingQaExpReport*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnQaBase(void *p);
   static void deleteArray_BmnQaBase(void *p);
   static void destruct_BmnQaBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnQaBase*)
   {
      ::BmnQaBase *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnQaBase >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnQaBase", ::BmnQaBase::Class_Version(), "BmnQaBase.h", 30,
                  typeid(::BmnQaBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnQaBase::Dictionary, isa_proxy, 4,
                  sizeof(::BmnQaBase) );
      instance.SetDelete(&delete_BmnQaBase);
      instance.SetDeleteArray(&deleteArray_BmnQaBase);
      instance.SetDestructor(&destruct_BmnQaBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnQaBase*)
   {
      return GenerateInitInstanceLocal((::BmnQaBase*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnQaBase*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnPidQa(void *p = nullptr);
   static void *newArray_BmnPidQa(Long_t size, void *p);
   static void delete_BmnPidQa(void *p);
   static void deleteArray_BmnPidQa(void *p);
   static void destruct_BmnPidQa(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnPidQa*)
   {
      ::BmnPidQa *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnPidQa >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnPidQa", ::BmnPidQa::Class_Version(), "BmnPidQa.h", 31,
                  typeid(::BmnPidQa), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnPidQa::Dictionary, isa_proxy, 4,
                  sizeof(::BmnPidQa) );
      instance.SetNew(&new_BmnPidQa);
      instance.SetNewArray(&newArray_BmnPidQa);
      instance.SetDelete(&delete_BmnPidQa);
      instance.SetDeleteArray(&deleteArray_BmnPidQa);
      instance.SetDestructor(&destruct_BmnPidQa);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnPidQa*)
   {
      return GenerateInitInstanceLocal((::BmnPidQa*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnPidQa*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnPidQaReport(void *p = nullptr);
   static void *newArray_BmnPidQaReport(Long_t size, void *p);
   static void delete_BmnPidQaReport(void *p);
   static void deleteArray_BmnPidQaReport(void *p);
   static void destruct_BmnPidQaReport(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnPidQaReport*)
   {
      ::BmnPidQaReport *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnPidQaReport >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnPidQaReport", ::BmnPidQaReport::Class_Version(), "BmnPidQaReport.h", 27,
                  typeid(::BmnPidQaReport), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnPidQaReport::Dictionary, isa_proxy, 4,
                  sizeof(::BmnPidQaReport) );
      instance.SetNew(&new_BmnPidQaReport);
      instance.SetNewArray(&newArray_BmnPidQaReport);
      instance.SetDelete(&delete_BmnPidQaReport);
      instance.SetDeleteArray(&deleteArray_BmnPidQaReport);
      instance.SetDestructor(&destruct_BmnPidQaReport);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnPidQaReport*)
   {
      return GenerateInitInstanceLocal((::BmnPidQaReport*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnPidQaReport*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTrackingQa(void *p = nullptr);
   static void *newArray_BmnTrackingQa(Long_t size, void *p);
   static void delete_BmnTrackingQa(void *p);
   static void deleteArray_BmnTrackingQa(void *p);
   static void destruct_BmnTrackingQa(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTrackingQa*)
   {
      ::BmnTrackingQa *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTrackingQa >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTrackingQa", ::BmnTrackingQa::Class_Version(), "BmnTrackingQa.h", 28,
                  typeid(::BmnTrackingQa), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTrackingQa::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTrackingQa) );
      instance.SetNew(&new_BmnTrackingQa);
      instance.SetNewArray(&newArray_BmnTrackingQa);
      instance.SetDelete(&delete_BmnTrackingQa);
      instance.SetDeleteArray(&deleteArray_BmnTrackingQa);
      instance.SetDestructor(&destruct_BmnTrackingQa);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTrackingQa*)
   {
      return GenerateInitInstanceLocal((::BmnTrackingQa*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTrackingQa*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTrackingQaExp(void *p = nullptr);
   static void *newArray_BmnTrackingQaExp(Long_t size, void *p);
   static void delete_BmnTrackingQaExp(void *p);
   static void deleteArray_BmnTrackingQaExp(void *p);
   static void destruct_BmnTrackingQaExp(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTrackingQaExp*)
   {
      ::BmnTrackingQaExp *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTrackingQaExp >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTrackingQaExp", ::BmnTrackingQaExp::Class_Version(), "BmnTrackingQaExp.h", 36,
                  typeid(::BmnTrackingQaExp), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTrackingQaExp::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTrackingQaExp) );
      instance.SetNew(&new_BmnTrackingQaExp);
      instance.SetNewArray(&newArray_BmnTrackingQaExp);
      instance.SetDelete(&delete_BmnTrackingQaExp);
      instance.SetDeleteArray(&deleteArray_BmnTrackingQaExp);
      instance.SetDestructor(&destruct_BmnTrackingQaExp);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTrackingQaExp*)
   {
      return GenerateInitInstanceLocal((::BmnTrackingQaExp*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTrackingQaExp*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnLambdaQa(void *p = nullptr);
   static void *newArray_BmnLambdaQa(Long_t size, void *p);
   static void delete_BmnLambdaQa(void *p);
   static void deleteArray_BmnLambdaQa(void *p);
   static void destruct_BmnLambdaQa(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnLambdaQa*)
   {
      ::BmnLambdaQa *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnLambdaQa >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnLambdaQa", ::BmnLambdaQa::Class_Version(), "BmnLambdaQa.h", 26,
                  typeid(::BmnLambdaQa), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnLambdaQa::Dictionary, isa_proxy, 4,
                  sizeof(::BmnLambdaQa) );
      instance.SetNew(&new_BmnLambdaQa);
      instance.SetNewArray(&newArray_BmnLambdaQa);
      instance.SetDelete(&delete_BmnLambdaQa);
      instance.SetDeleteArray(&deleteArray_BmnLambdaQa);
      instance.SetDestructor(&destruct_BmnLambdaQa);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnLambdaQa*)
   {
      return GenerateInitInstanceLocal((::BmnLambdaQa*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnLambdaQa*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnClusteringQa(void *p = nullptr);
   static void *newArray_BmnClusteringQa(Long_t size, void *p);
   static void delete_BmnClusteringQa(void *p);
   static void deleteArray_BmnClusteringQa(void *p);
   static void destruct_BmnClusteringQa(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnClusteringQa*)
   {
      ::BmnClusteringQa *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnClusteringQa >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnClusteringQa", ::BmnClusteringQa::Class_Version(), "BmnClusteringQa.h", 28,
                  typeid(::BmnClusteringQa), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnClusteringQa::Dictionary, isa_proxy, 4,
                  sizeof(::BmnClusteringQa) );
      instance.SetNew(&new_BmnClusteringQa);
      instance.SetNewArray(&newArray_BmnClusteringQa);
      instance.SetDelete(&delete_BmnClusteringQa);
      instance.SetDeleteArray(&deleteArray_BmnClusteringQa);
      instance.SetDestructor(&destruct_BmnClusteringQa);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnClusteringQa*)
   {
      return GenerateInitInstanceLocal((::BmnClusteringQa*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnClusteringQa*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTrackingQaReport(void *p = nullptr);
   static void *newArray_BmnTrackingQaReport(Long_t size, void *p);
   static void delete_BmnTrackingQaReport(void *p);
   static void deleteArray_BmnTrackingQaReport(void *p);
   static void destruct_BmnTrackingQaReport(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTrackingQaReport*)
   {
      ::BmnTrackingQaReport *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTrackingQaReport >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTrackingQaReport", ::BmnTrackingQaReport::Class_Version(), "BmnTrackingQaReport.h", 24,
                  typeid(::BmnTrackingQaReport), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTrackingQaReport::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTrackingQaReport) );
      instance.SetNew(&new_BmnTrackingQaReport);
      instance.SetNewArray(&newArray_BmnTrackingQaReport);
      instance.SetDelete(&delete_BmnTrackingQaReport);
      instance.SetDeleteArray(&deleteArray_BmnTrackingQaReport);
      instance.SetDestructor(&destruct_BmnTrackingQaReport);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTrackingQaReport*)
   {
      return GenerateInitInstanceLocal((::BmnTrackingQaReport*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTrackingQaReport*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnLambdaQaReport(void *p = nullptr);
   static void *newArray_BmnLambdaQaReport(Long_t size, void *p);
   static void delete_BmnLambdaQaReport(void *p);
   static void deleteArray_BmnLambdaQaReport(void *p);
   static void destruct_BmnLambdaQaReport(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnLambdaQaReport*)
   {
      ::BmnLambdaQaReport *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnLambdaQaReport >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnLambdaQaReport", ::BmnLambdaQaReport::Class_Version(), "BmnLambdaQaReport.h", 21,
                  typeid(::BmnLambdaQaReport), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnLambdaQaReport::Dictionary, isa_proxy, 4,
                  sizeof(::BmnLambdaQaReport) );
      instance.SetNew(&new_BmnLambdaQaReport);
      instance.SetNewArray(&newArray_BmnLambdaQaReport);
      instance.SetDelete(&delete_BmnLambdaQaReport);
      instance.SetDeleteArray(&deleteArray_BmnLambdaQaReport);
      instance.SetDestructor(&destruct_BmnLambdaQaReport);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnLambdaQaReport*)
   {
      return GenerateInitInstanceLocal((::BmnLambdaQaReport*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnLambdaQaReport*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnClusteringQaReport(void *p);
   static void deleteArray_BmnClusteringQaReport(void *p);
   static void destruct_BmnClusteringQaReport(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnClusteringQaReport*)
   {
      ::BmnClusteringQaReport *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnClusteringQaReport >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnClusteringQaReport", ::BmnClusteringQaReport::Class_Version(), "BmnClusteringQaReport.h", 23,
                  typeid(::BmnClusteringQaReport), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnClusteringQaReport::Dictionary, isa_proxy, 4,
                  sizeof(::BmnClusteringQaReport) );
      instance.SetDelete(&delete_BmnClusteringQaReport);
      instance.SetDeleteArray(&deleteArray_BmnClusteringQaReport);
      instance.SetDestructor(&destruct_BmnClusteringQaReport);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnClusteringQaReport*)
   {
      return GenerateInitInstanceLocal((::BmnClusteringQaReport*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnClusteringQaReport*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnCustomQa(void *p = nullptr);
   static void *newArray_BmnCustomQa(Long_t size, void *p);
   static void delete_BmnCustomQa(void *p);
   static void deleteArray_BmnCustomQa(void *p);
   static void destruct_BmnCustomQa(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnCustomQa*)
   {
      ::BmnCustomQa *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnCustomQa >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnCustomQa", ::BmnCustomQa::Class_Version(), "BmnCustomQa.h", 32,
                  typeid(::BmnCustomQa), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnCustomQa::Dictionary, isa_proxy, 4,
                  sizeof(::BmnCustomQa) );
      instance.SetNew(&new_BmnCustomQa);
      instance.SetNewArray(&newArray_BmnCustomQa);
      instance.SetDelete(&delete_BmnCustomQa);
      instance.SetDeleteArray(&deleteArray_BmnCustomQa);
      instance.SetDestructor(&destruct_BmnCustomQa);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnCustomQa*)
   {
      return GenerateInitInstanceLocal((::BmnCustomQa*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnCustomQa*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnAcceptanceFunction_Dictionary();
   static void BmnAcceptanceFunction_TClassManip(TClass*);
   static void *new_BmnAcceptanceFunction(void *p = nullptr);
   static void *newArray_BmnAcceptanceFunction(Long_t size, void *p);
   static void delete_BmnAcceptanceFunction(void *p);
   static void deleteArray_BmnAcceptanceFunction(void *p);
   static void destruct_BmnAcceptanceFunction(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnAcceptanceFunction*)
   {
      ::BmnAcceptanceFunction *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnAcceptanceFunction));
      static ::ROOT::TGenericClassInfo 
         instance("BmnAcceptanceFunction", "BmnAcceptanceFunction.h", 21,
                  typeid(::BmnAcceptanceFunction), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnAcceptanceFunction_Dictionary, isa_proxy, 0,
                  sizeof(::BmnAcceptanceFunction) );
      instance.SetNew(&new_BmnAcceptanceFunction);
      instance.SetNewArray(&newArray_BmnAcceptanceFunction);
      instance.SetDelete(&delete_BmnAcceptanceFunction);
      instance.SetDeleteArray(&deleteArray_BmnAcceptanceFunction);
      instance.SetDestructor(&destruct_BmnAcceptanceFunction);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnAcceptanceFunction*)
   {
      return GenerateInitInstanceLocal((::BmnAcceptanceFunction*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnAcceptanceFunction*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnAcceptanceFunction_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnAcceptanceFunction*)nullptr)->GetClass();
      BmnAcceptanceFunction_TClassManip(theClass);
   return theClass;
   }

   static void BmnAcceptanceFunction_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMatchRecoToMC(void *p = nullptr);
   static void *newArray_BmnMatchRecoToMC(Long_t size, void *p);
   static void delete_BmnMatchRecoToMC(void *p);
   static void deleteArray_BmnMatchRecoToMC(void *p);
   static void destruct_BmnMatchRecoToMC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMatchRecoToMC*)
   {
      ::BmnMatchRecoToMC *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMatchRecoToMC >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMatchRecoToMC", ::BmnMatchRecoToMC::Class_Version(), "BmnMatchRecoToMC.h", 19,
                  typeid(::BmnMatchRecoToMC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMatchRecoToMC::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMatchRecoToMC) );
      instance.SetNew(&new_BmnMatchRecoToMC);
      instance.SetNewArray(&newArray_BmnMatchRecoToMC);
      instance.SetDelete(&delete_BmnMatchRecoToMC);
      instance.SetDeleteArray(&deleteArray_BmnMatchRecoToMC);
      instance.SetDestructor(&destruct_BmnMatchRecoToMC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMatchRecoToMC*)
   {
      return GenerateInitInstanceLocal((::BmnMatchRecoToMC*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMatchRecoToMC*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnQaHistoManager(void *p = nullptr);
   static void *newArray_BmnQaHistoManager(Long_t size, void *p);
   static void delete_BmnQaHistoManager(void *p);
   static void deleteArray_BmnQaHistoManager(void *p);
   static void destruct_BmnQaHistoManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnQaHistoManager*)
   {
      ::BmnQaHistoManager *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnQaHistoManager >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnQaHistoManager", ::BmnQaHistoManager::Class_Version(), "BmnQaHistoManager.h", 9,
                  typeid(::BmnQaHistoManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnQaHistoManager::Dictionary, isa_proxy, 4,
                  sizeof(::BmnQaHistoManager) );
      instance.SetNew(&new_BmnQaHistoManager);
      instance.SetNewArray(&newArray_BmnQaHistoManager);
      instance.SetDelete(&delete_BmnQaHistoManager);
      instance.SetDeleteArray(&deleteArray_BmnQaHistoManager);
      instance.SetDestructor(&destruct_BmnQaHistoManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnQaHistoManager*)
   {
      return GenerateInitInstanceLocal((::BmnQaHistoManager*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnQaHistoManager*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnCoordinateDetQa(void *p = nullptr);
   static void *newArray_BmnCoordinateDetQa(Long_t size, void *p);
   static void delete_BmnCoordinateDetQa(void *p);
   static void deleteArray_BmnCoordinateDetQa(void *p);
   static void destruct_BmnCoordinateDetQa(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnCoordinateDetQa*)
   {
      ::BmnCoordinateDetQa *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnCoordinateDetQa >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnCoordinateDetQa", ::BmnCoordinateDetQa::Class_Version(), "BmnCoordinateDetQa.h", 18,
                  typeid(::BmnCoordinateDetQa), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnCoordinateDetQa::Dictionary, isa_proxy, 4,
                  sizeof(::BmnCoordinateDetQa) );
      instance.SetNew(&new_BmnCoordinateDetQa);
      instance.SetNewArray(&newArray_BmnCoordinateDetQa);
      instance.SetDelete(&delete_BmnCoordinateDetQa);
      instance.SetDeleteArray(&deleteArray_BmnCoordinateDetQa);
      instance.SetDestructor(&destruct_BmnCoordinateDetQa);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnCoordinateDetQa*)
   {
      return GenerateInitInstanceLocal((::BmnCoordinateDetQa*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnCoordinateDetQa*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTimeDetQa(void *p = nullptr);
   static void *newArray_BmnTimeDetQa(Long_t size, void *p);
   static void delete_BmnTimeDetQa(void *p);
   static void deleteArray_BmnTimeDetQa(void *p);
   static void destruct_BmnTimeDetQa(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTimeDetQa*)
   {
      ::BmnTimeDetQa *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTimeDetQa >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTimeDetQa", ::BmnTimeDetQa::Class_Version(), "BmnTimeDetQa.h", 12,
                  typeid(::BmnTimeDetQa), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTimeDetQa::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTimeDetQa) );
      instance.SetNew(&new_BmnTimeDetQa);
      instance.SetNewArray(&newArray_BmnTimeDetQa);
      instance.SetDelete(&delete_BmnTimeDetQa);
      instance.SetDeleteArray(&deleteArray_BmnTimeDetQa);
      instance.SetDestructor(&destruct_BmnTimeDetQa);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTimeDetQa*)
   {
      return GenerateInitInstanceLocal((::BmnTimeDetQa*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTimeDetQa*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnCalorimeterDetQa(void *p = nullptr);
   static void *newArray_BmnCalorimeterDetQa(Long_t size, void *p);
   static void delete_BmnCalorimeterDetQa(void *p);
   static void deleteArray_BmnCalorimeterDetQa(void *p);
   static void destruct_BmnCalorimeterDetQa(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnCalorimeterDetQa*)
   {
      ::BmnCalorimeterDetQa *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnCalorimeterDetQa >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnCalorimeterDetQa", ::BmnCalorimeterDetQa::Class_Version(), "BmnCalorimeterDetQa.h", 12,
                  typeid(::BmnCalorimeterDetQa), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnCalorimeterDetQa::Dictionary, isa_proxy, 4,
                  sizeof(::BmnCalorimeterDetQa) );
      instance.SetNew(&new_BmnCalorimeterDetQa);
      instance.SetNewArray(&newArray_BmnCalorimeterDetQa);
      instance.SetDelete(&delete_BmnCalorimeterDetQa);
      instance.SetDeleteArray(&deleteArray_BmnCalorimeterDetQa);
      instance.SetDestructor(&destruct_BmnCalorimeterDetQa);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnCalorimeterDetQa*)
   {
      return GenerateInitInstanceLocal((::BmnCalorimeterDetQa*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnCalorimeterDetQa*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTrigDetQa(void *p = nullptr);
   static void *newArray_BmnTrigDetQa(Long_t size, void *p);
   static void delete_BmnTrigDetQa(void *p);
   static void deleteArray_BmnTrigDetQa(void *p);
   static void destruct_BmnTrigDetQa(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTrigDetQa*)
   {
      ::BmnTrigDetQa *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTrigDetQa >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTrigDetQa", ::BmnTrigDetQa::Class_Version(), "BmnTrigDetQa.h", 13,
                  typeid(::BmnTrigDetQa), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTrigDetQa::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTrigDetQa) );
      instance.SetNew(&new_BmnTrigDetQa);
      instance.SetNewArray(&newArray_BmnTrigDetQa);
      instance.SetDelete(&delete_BmnTrigDetQa);
      instance.SetDeleteArray(&deleteArray_BmnTrigDetQa);
      instance.SetDestructor(&destruct_BmnTrigDetQa);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTrigDetQa*)
   {
      return GenerateInitInstanceLocal((::BmnTrigDetQa*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTrigDetQa*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnDstQa(void *p = nullptr);
   static void *newArray_BmnDstQa(Long_t size, void *p);
   static void delete_BmnDstQa(void *p);
   static void deleteArray_BmnDstQa(void *p);
   static void destruct_BmnDstQa(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnDstQa*)
   {
      ::BmnDstQa *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnDstQa >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnDstQa", ::BmnDstQa::Class_Version(), "BmnDstQa.h", 13,
                  typeid(::BmnDstQa), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnDstQa::Dictionary, isa_proxy, 4,
                  sizeof(::BmnDstQa) );
      instance.SetNew(&new_BmnDstQa);
      instance.SetNewArray(&newArray_BmnDstQa);
      instance.SetDelete(&delete_BmnDstQa);
      instance.SetDeleteArray(&deleteArray_BmnDstQa);
      instance.SetDestructor(&destruct_BmnDstQa);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnDstQa*)
   {
      return GenerateInitInstanceLocal((::BmnDstQa*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnDstQa*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnQaOffline(void *p = nullptr);
   static void *newArray_BmnQaOffline(Long_t size, void *p);
   static void delete_BmnQaOffline(void *p);
   static void deleteArray_BmnQaOffline(void *p);
   static void destruct_BmnQaOffline(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnQaOffline*)
   {
      ::BmnQaOffline *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnQaOffline >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnQaOffline", ::BmnQaOffline::Class_Version(), "BmnQaOffline.h", 49,
                  typeid(::BmnQaOffline), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnQaOffline::Dictionary, isa_proxy, 4,
                  sizeof(::BmnQaOffline) );
      instance.SetNew(&new_BmnQaOffline);
      instance.SetNewArray(&newArray_BmnQaOffline);
      instance.SetDelete(&delete_BmnQaOffline);
      instance.SetDeleteArray(&deleteArray_BmnQaOffline);
      instance.SetDestructor(&destruct_BmnQaOffline);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnQaOffline*)
   {
      return GenerateInitInstanceLocal((::BmnQaOffline*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnQaOffline*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_AllHistos(void *p = nullptr);
   static void *newArray_AllHistos(Long_t size, void *p);
   static void delete_AllHistos(void *p);
   static void deleteArray_AllHistos(void *p);
   static void destruct_AllHistos(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AllHistos*)
   {
      ::AllHistos *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::AllHistos >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("AllHistos", ::AllHistos::Class_Version(), "BmnQaMonitor.h", 24,
                  typeid(::AllHistos), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::AllHistos::Dictionary, isa_proxy, 4,
                  sizeof(::AllHistos) );
      instance.SetNew(&new_AllHistos);
      instance.SetNewArray(&newArray_AllHistos);
      instance.SetDelete(&delete_AllHistos);
      instance.SetDeleteArray(&deleteArray_AllHistos);
      instance.SetDestructor(&destruct_AllHistos);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AllHistos*)
   {
      return GenerateInitInstanceLocal((::AllHistos*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::AllHistos*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnQaMonitor(void *p = nullptr);
   static void *newArray_BmnQaMonitor(Long_t size, void *p);
   static void delete_BmnQaMonitor(void *p);
   static void deleteArray_BmnQaMonitor(void *p);
   static void destruct_BmnQaMonitor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnQaMonitor*)
   {
      ::BmnQaMonitor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnQaMonitor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnQaMonitor", ::BmnQaMonitor::Class_Version(), "BmnQaMonitor.h", 58,
                  typeid(::BmnQaMonitor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnQaMonitor::Dictionary, isa_proxy, 4,
                  sizeof(::BmnQaMonitor) );
      instance.SetNew(&new_BmnQaMonitor);
      instance.SetNewArray(&newArray_BmnQaMonitor);
      instance.SetDelete(&delete_BmnQaMonitor);
      instance.SetDeleteArray(&deleteArray_BmnQaMonitor);
      instance.SetDestructor(&destruct_BmnQaMonitor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnQaMonitor*)
   {
      return GenerateInitInstanceLocal((::BmnQaMonitor*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnQaMonitor*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTrackingQaOfflineDraw(void *p = nullptr);
   static void *newArray_BmnTrackingQaOfflineDraw(Long_t size, void *p);
   static void delete_BmnTrackingQaOfflineDraw(void *p);
   static void deleteArray_BmnTrackingQaOfflineDraw(void *p);
   static void destruct_BmnTrackingQaOfflineDraw(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTrackingQaOfflineDraw*)
   {
      ::BmnTrackingQaOfflineDraw *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTrackingQaOfflineDraw >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTrackingQaOfflineDraw", ::BmnTrackingQaOfflineDraw::Class_Version(), "BmnTrackingQaOfflineDraw.h", 15,
                  typeid(::BmnTrackingQaOfflineDraw), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTrackingQaOfflineDraw::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTrackingQaOfflineDraw) );
      instance.SetNew(&new_BmnTrackingQaOfflineDraw);
      instance.SetNewArray(&newArray_BmnTrackingQaOfflineDraw);
      instance.SetDelete(&delete_BmnTrackingQaOfflineDraw);
      instance.SetDeleteArray(&deleteArray_BmnTrackingQaOfflineDraw);
      instance.SetDestructor(&destruct_BmnTrackingQaOfflineDraw);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTrackingQaOfflineDraw*)
   {
      return GenerateInitInstanceLocal((::BmnTrackingQaOfflineDraw*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTrackingQaOfflineDraw*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTrackingQaOffline(void *p = nullptr);
   static void *newArray_BmnTrackingQaOffline(Long_t size, void *p);
   static void delete_BmnTrackingQaOffline(void *p);
   static void deleteArray_BmnTrackingQaOffline(void *p);
   static void destruct_BmnTrackingQaOffline(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTrackingQaOffline*)
   {
      ::BmnTrackingQaOffline *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTrackingQaOffline >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTrackingQaOffline", ::BmnTrackingQaOffline::Class_Version(), "BmnTrackingQaOffline.h", 29,
                  typeid(::BmnTrackingQaOffline), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTrackingQaOffline::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTrackingQaOffline) );
      instance.SetNew(&new_BmnTrackingQaOffline);
      instance.SetNewArray(&newArray_BmnTrackingQaOffline);
      instance.SetDelete(&delete_BmnTrackingQaOffline);
      instance.SetDeleteArray(&deleteArray_BmnTrackingQaOffline);
      instance.SetDestructor(&destruct_BmnTrackingQaOffline);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTrackingQaOffline*)
   {
      return GenerateInitInstanceLocal((::BmnTrackingQaOffline*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTrackingQaOffline*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnRunInfo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnRunInfo::Class_Name()
{
   return "BmnRunInfo";
}

//______________________________________________________________________________
const char *BmnRunInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnRunInfo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnRunInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnRunInfo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnRunInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnRunInfo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnRunInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnRunInfo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnReport::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnReport::Class_Name()
{
   return "BmnReport";
}

//______________________________________________________________________________
const char *BmnReport::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnReport*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnReport::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnReport*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnReport::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnReport*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnReport::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnReport*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSimulationReport::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSimulationReport::Class_Name()
{
   return "BmnSimulationReport";
}

//______________________________________________________________________________
const char *BmnSimulationReport::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSimulationReport*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSimulationReport::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSimulationReport*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSimulationReport::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSimulationReport*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSimulationReport::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSimulationReport*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnStudyReport::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnStudyReport::Class_Name()
{
   return "BmnStudyReport";
}

//______________________________________________________________________________
const char *BmnStudyReport::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnStudyReport*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnStudyReport::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnStudyReport*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnStudyReport::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnStudyReport*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnStudyReport::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnStudyReport*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnReportElement::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnReportElement::Class_Name()
{
   return "BmnReportElement";
}

//______________________________________________________________________________
const char *BmnReportElement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnReportElement*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnReportElement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnReportElement*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnReportElement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnReportElement*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnReportElement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnReportElement*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHtmlReportElement::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHtmlReportElement::Class_Name()
{
   return "BmnHtmlReportElement";
}

//______________________________________________________________________________
const char *BmnHtmlReportElement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHtmlReportElement*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHtmlReportElement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHtmlReportElement*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHtmlReportElement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHtmlReportElement*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHtmlReportElement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHtmlReportElement*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnDrawOnline::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnDrawOnline::Class_Name()
{
   return "BmnDrawOnline";
}

//______________________________________________________________________________
const char *BmnDrawOnline::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDrawOnline*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnDrawOnline::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDrawOnline*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnDrawOnline::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDrawOnline*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnDrawOnline::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDrawOnline*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHistManager::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHistManager::Class_Name()
{
   return "BmnHistManager";
}

//______________________________________________________________________________
const char *BmnHistManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistManager*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHistManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistManager*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHistManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistManager*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHistManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistManager*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr PadInfo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *PadInfo::Class_Name()
{
   return "PadInfo";
}

//______________________________________________________________________________
const char *PadInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PadInfo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int PadInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PadInfo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PadInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PadInfo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PadInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PadInfo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHist::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHist::Class_Name()
{
   return "BmnHist";
}

//______________________________________________________________________________
const char *BmnHist::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHist*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHist::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHist*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHist::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHist*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHist::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHist*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTrackingQaExpReport::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTrackingQaExpReport::Class_Name()
{
   return "BmnTrackingQaExpReport";
}

//______________________________________________________________________________
const char *BmnTrackingQaExpReport::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackingQaExpReport*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTrackingQaExpReport::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackingQaExpReport*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTrackingQaExpReport::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackingQaExpReport*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTrackingQaExpReport::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackingQaExpReport*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnQaBase::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnQaBase::Class_Name()
{
   return "BmnQaBase";
}

//______________________________________________________________________________
const char *BmnQaBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnQaBase*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnQaBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnQaBase*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnQaBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnQaBase*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnQaBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnQaBase*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnPidQa::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnPidQa::Class_Name()
{
   return "BmnPidQa";
}

//______________________________________________________________________________
const char *BmnPidQa::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnPidQa*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnPidQa::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnPidQa*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnPidQa::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnPidQa*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnPidQa::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnPidQa*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnPidQaReport::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnPidQaReport::Class_Name()
{
   return "BmnPidQaReport";
}

//______________________________________________________________________________
const char *BmnPidQaReport::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnPidQaReport*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnPidQaReport::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnPidQaReport*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnPidQaReport::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnPidQaReport*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnPidQaReport::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnPidQaReport*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTrackingQa::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTrackingQa::Class_Name()
{
   return "BmnTrackingQa";
}

//______________________________________________________________________________
const char *BmnTrackingQa::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackingQa*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTrackingQa::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackingQa*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTrackingQa::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackingQa*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTrackingQa::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackingQa*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTrackingQaExp::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTrackingQaExp::Class_Name()
{
   return "BmnTrackingQaExp";
}

//______________________________________________________________________________
const char *BmnTrackingQaExp::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackingQaExp*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTrackingQaExp::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackingQaExp*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTrackingQaExp::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackingQaExp*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTrackingQaExp::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackingQaExp*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnLambdaQa::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnLambdaQa::Class_Name()
{
   return "BmnLambdaQa";
}

//______________________________________________________________________________
const char *BmnLambdaQa::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnLambdaQa*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnLambdaQa::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnLambdaQa*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnLambdaQa::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnLambdaQa*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnLambdaQa::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnLambdaQa*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnClusteringQa::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnClusteringQa::Class_Name()
{
   return "BmnClusteringQa";
}

//______________________________________________________________________________
const char *BmnClusteringQa::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnClusteringQa*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnClusteringQa::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnClusteringQa*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnClusteringQa::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnClusteringQa*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnClusteringQa::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnClusteringQa*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTrackingQaReport::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTrackingQaReport::Class_Name()
{
   return "BmnTrackingQaReport";
}

//______________________________________________________________________________
const char *BmnTrackingQaReport::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackingQaReport*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTrackingQaReport::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackingQaReport*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTrackingQaReport::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackingQaReport*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTrackingQaReport::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackingQaReport*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnLambdaQaReport::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnLambdaQaReport::Class_Name()
{
   return "BmnLambdaQaReport";
}

//______________________________________________________________________________
const char *BmnLambdaQaReport::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnLambdaQaReport*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnLambdaQaReport::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnLambdaQaReport*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnLambdaQaReport::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnLambdaQaReport*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnLambdaQaReport::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnLambdaQaReport*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnClusteringQaReport::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnClusteringQaReport::Class_Name()
{
   return "BmnClusteringQaReport";
}

//______________________________________________________________________________
const char *BmnClusteringQaReport::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnClusteringQaReport*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnClusteringQaReport::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnClusteringQaReport*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnClusteringQaReport::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnClusteringQaReport*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnClusteringQaReport::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnClusteringQaReport*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnCustomQa::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnCustomQa::Class_Name()
{
   return "BmnCustomQa";
}

//______________________________________________________________________________
const char *BmnCustomQa::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCustomQa*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnCustomQa::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCustomQa*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnCustomQa::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCustomQa*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnCustomQa::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCustomQa*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMatchRecoToMC::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMatchRecoToMC::Class_Name()
{
   return "BmnMatchRecoToMC";
}

//______________________________________________________________________________
const char *BmnMatchRecoToMC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMatchRecoToMC*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMatchRecoToMC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMatchRecoToMC*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMatchRecoToMC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMatchRecoToMC*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMatchRecoToMC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMatchRecoToMC*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnQaHistoManager::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnQaHistoManager::Class_Name()
{
   return "BmnQaHistoManager";
}

//______________________________________________________________________________
const char *BmnQaHistoManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnQaHistoManager*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnQaHistoManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnQaHistoManager*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnQaHistoManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnQaHistoManager*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnQaHistoManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnQaHistoManager*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnCoordinateDetQa::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnCoordinateDetQa::Class_Name()
{
   return "BmnCoordinateDetQa";
}

//______________________________________________________________________________
const char *BmnCoordinateDetQa::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCoordinateDetQa*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnCoordinateDetQa::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCoordinateDetQa*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnCoordinateDetQa::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCoordinateDetQa*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnCoordinateDetQa::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCoordinateDetQa*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTimeDetQa::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTimeDetQa::Class_Name()
{
   return "BmnTimeDetQa";
}

//______________________________________________________________________________
const char *BmnTimeDetQa::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTimeDetQa*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTimeDetQa::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTimeDetQa*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTimeDetQa::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTimeDetQa*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTimeDetQa::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTimeDetQa*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnCalorimeterDetQa::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnCalorimeterDetQa::Class_Name()
{
   return "BmnCalorimeterDetQa";
}

//______________________________________________________________________________
const char *BmnCalorimeterDetQa::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCalorimeterDetQa*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnCalorimeterDetQa::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCalorimeterDetQa*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnCalorimeterDetQa::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCalorimeterDetQa*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnCalorimeterDetQa::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCalorimeterDetQa*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTrigDetQa::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTrigDetQa::Class_Name()
{
   return "BmnTrigDetQa";
}

//______________________________________________________________________________
const char *BmnTrigDetQa::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrigDetQa*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTrigDetQa::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrigDetQa*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTrigDetQa::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrigDetQa*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTrigDetQa::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrigDetQa*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnDstQa::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnDstQa::Class_Name()
{
   return "BmnDstQa";
}

//______________________________________________________________________________
const char *BmnDstQa::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDstQa*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnDstQa::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDstQa*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnDstQa::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDstQa*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnDstQa::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDstQa*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnQaOffline::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnQaOffline::Class_Name()
{
   return "BmnQaOffline";
}

//______________________________________________________________________________
const char *BmnQaOffline::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnQaOffline*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnQaOffline::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnQaOffline*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnQaOffline::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnQaOffline*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnQaOffline::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnQaOffline*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr AllHistos::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *AllHistos::Class_Name()
{
   return "AllHistos";
}

//______________________________________________________________________________
const char *AllHistos::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AllHistos*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int AllHistos::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AllHistos*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AllHistos::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AllHistos*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AllHistos::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AllHistos*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnQaMonitor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnQaMonitor::Class_Name()
{
   return "BmnQaMonitor";
}

//______________________________________________________________________________
const char *BmnQaMonitor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnQaMonitor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnQaMonitor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnQaMonitor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnQaMonitor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnQaMonitor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnQaMonitor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnQaMonitor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTrackingQaOfflineDraw::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTrackingQaOfflineDraw::Class_Name()
{
   return "BmnTrackingQaOfflineDraw";
}

//______________________________________________________________________________
const char *BmnTrackingQaOfflineDraw::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackingQaOfflineDraw*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTrackingQaOfflineDraw::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackingQaOfflineDraw*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTrackingQaOfflineDraw::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackingQaOfflineDraw*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTrackingQaOfflineDraw::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackingQaOfflineDraw*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTrackingQaOffline::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTrackingQaOffline::Class_Name()
{
   return "BmnTrackingQaOffline";
}

//______________________________________________________________________________
const char *BmnTrackingQaOffline::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackingQaOffline*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTrackingQaOffline::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackingQaOffline*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTrackingQaOffline::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackingQaOffline*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTrackingQaOffline::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackingQaOffline*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnRunInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnRunInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnRunInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnRunInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnRunInfo(void *p) {
      return  p ? new(p) ::BmnRunInfo : new ::BmnRunInfo;
   }
   static void *newArray_BmnRunInfo(Long_t nElements, void *p) {
      return p ? new(p) ::BmnRunInfo[nElements] : new ::BmnRunInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnRunInfo(void *p) {
      delete ((::BmnRunInfo*)p);
   }
   static void deleteArray_BmnRunInfo(void *p) {
      delete [] ((::BmnRunInfo*)p);
   }
   static void destruct_BmnRunInfo(void *p) {
      typedef ::BmnRunInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnRunInfo

//______________________________________________________________________________
void BmnReport::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnReport.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnReport::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnReport::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnReport(void *p) {
      delete ((::BmnReport*)p);
   }
   static void deleteArray_BmnReport(void *p) {
      delete [] ((::BmnReport*)p);
   }
   static void destruct_BmnReport(void *p) {
      typedef ::BmnReport current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnReport

//______________________________________________________________________________
void BmnSimulationReport::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSimulationReport.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSimulationReport::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSimulationReport::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnSimulationReport(void *p) {
      delete ((::BmnSimulationReport*)p);
   }
   static void deleteArray_BmnSimulationReport(void *p) {
      delete [] ((::BmnSimulationReport*)p);
   }
   static void destruct_BmnSimulationReport(void *p) {
      typedef ::BmnSimulationReport current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSimulationReport

//______________________________________________________________________________
void BmnStudyReport::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnStudyReport.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnStudyReport::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnStudyReport::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnStudyReport(void *p) {
      delete ((::BmnStudyReport*)p);
   }
   static void deleteArray_BmnStudyReport(void *p) {
      delete [] ((::BmnStudyReport*)p);
   }
   static void destruct_BmnStudyReport(void *p) {
      typedef ::BmnStudyReport current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnStudyReport

//______________________________________________________________________________
void BmnReportElement::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnReportElement.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnReportElement::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnReportElement::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnReportElement(void *p) {
      delete ((::BmnReportElement*)p);
   }
   static void deleteArray_BmnReportElement(void *p) {
      delete [] ((::BmnReportElement*)p);
   }
   static void destruct_BmnReportElement(void *p) {
      typedef ::BmnReportElement current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnReportElement

//______________________________________________________________________________
void BmnHtmlReportElement::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHtmlReportElement.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHtmlReportElement::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHtmlReportElement::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnHtmlReportElement(void *p) {
      return  p ? new(p) ::BmnHtmlReportElement : new ::BmnHtmlReportElement;
   }
   static void *newArray_BmnHtmlReportElement(Long_t nElements, void *p) {
      return p ? new(p) ::BmnHtmlReportElement[nElements] : new ::BmnHtmlReportElement[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnHtmlReportElement(void *p) {
      delete ((::BmnHtmlReportElement*)p);
   }
   static void deleteArray_BmnHtmlReportElement(void *p) {
      delete [] ((::BmnHtmlReportElement*)p);
   }
   static void destruct_BmnHtmlReportElement(void *p) {
      typedef ::BmnHtmlReportElement current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHtmlReportElement

//______________________________________________________________________________
void BmnDrawOnline::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnDrawOnline.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnDrawOnline::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnDrawOnline::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnDrawOnline(void *p) {
      delete ((::BmnDrawOnline*)p);
   }
   static void deleteArray_BmnDrawOnline(void *p) {
      delete [] ((::BmnDrawOnline*)p);
   }
   static void destruct_BmnDrawOnline(void *p) {
      typedef ::BmnDrawOnline current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnDrawOnline

//______________________________________________________________________________
void BmnHistManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHistManager.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHistManager::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHistManager::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnHistManager(void *p) {
      return  p ? new(p) ::BmnHistManager : new ::BmnHistManager;
   }
   static void *newArray_BmnHistManager(Long_t nElements, void *p) {
      return p ? new(p) ::BmnHistManager[nElements] : new ::BmnHistManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnHistManager(void *p) {
      delete ((::BmnHistManager*)p);
   }
   static void deleteArray_BmnHistManager(void *p) {
      delete [] ((::BmnHistManager*)p);
   }
   static void destruct_BmnHistManager(void *p) {
      typedef ::BmnHistManager current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHistManager

//______________________________________________________________________________
void PadInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class PadInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(PadInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(PadInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_PadInfo(void *p) {
      return  p ? new(p) ::PadInfo : new ::PadInfo;
   }
   static void *newArray_PadInfo(Long_t nElements, void *p) {
      return p ? new(p) ::PadInfo[nElements] : new ::PadInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_PadInfo(void *p) {
      delete ((::PadInfo*)p);
   }
   static void deleteArray_PadInfo(void *p) {
      delete [] ((::PadInfo*)p);
   }
   static void destruct_PadInfo(void *p) {
      typedef ::PadInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::PadInfo

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnPadBranch(void *p) {
      return  p ? new(p) ::BmnPadBranch : new ::BmnPadBranch;
   }
   static void *newArray_BmnPadBranch(Long_t nElements, void *p) {
      return p ? new(p) ::BmnPadBranch[nElements] : new ::BmnPadBranch[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnPadBranch(void *p) {
      delete ((::BmnPadBranch*)p);
   }
   static void deleteArray_BmnPadBranch(void *p) {
      delete [] ((::BmnPadBranch*)p);
   }
   static void destruct_BmnPadBranch(void *p) {
      typedef ::BmnPadBranch current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnPadBranch

//______________________________________________________________________________
void BmnHist::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHist.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHist::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHist::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnHist(void *p) {
      delete ((::BmnHist*)p);
   }
   static void deleteArray_BmnHist(void *p) {
      delete [] ((::BmnHist*)p);
   }
   static void destruct_BmnHist(void *p) {
      typedef ::BmnHist current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHist

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnPadGenerator(void *p) {
      return  p ? new(p) ::BmnPadGenerator : new ::BmnPadGenerator;
   }
   static void *newArray_BmnPadGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::BmnPadGenerator[nElements] : new ::BmnPadGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnPadGenerator(void *p) {
      delete ((::BmnPadGenerator*)p);
   }
   static void deleteArray_BmnPadGenerator(void *p) {
      delete [] ((::BmnPadGenerator*)p);
   }
   static void destruct_BmnPadGenerator(void *p) {
      typedef ::BmnPadGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnPadGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMCPoint(void *p) {
      return  p ? new(p) ::BmnMCPoint : new ::BmnMCPoint;
   }
   static void *newArray_BmnMCPoint(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMCPoint[nElements] : new ::BmnMCPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMCPoint(void *p) {
      delete ((::BmnMCPoint*)p);
   }
   static void deleteArray_BmnMCPoint(void *p) {
      delete [] ((::BmnMCPoint*)p);
   }
   static void destruct_BmnMCPoint(void *p) {
      typedef ::BmnMCPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMCPoint

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMCTrack(void *p) {
      return  p ? new(p) ::BmnMCTrack : new ::BmnMCTrack;
   }
   static void *newArray_BmnMCTrack(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMCTrack[nElements] : new ::BmnMCTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMCTrack(void *p) {
      delete ((::BmnMCTrack*)p);
   }
   static void deleteArray_BmnMCTrack(void *p) {
      delete [] ((::BmnMCTrack*)p);
   }
   static void destruct_BmnMCTrack(void *p) {
      typedef ::BmnMCTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMCTrack

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnMCTrackCreator(void *p) {
      delete ((::BmnMCTrackCreator*)p);
   }
   static void deleteArray_BmnMCTrackCreator(void *p) {
      delete [] ((::BmnMCTrackCreator*)p);
   }
   static void destruct_BmnMCTrackCreator(void *p) {
      typedef ::BmnMCTrackCreator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMCTrackCreator

//______________________________________________________________________________
void BmnTrackingQaExpReport::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTrackingQaExpReport.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTrackingQaExpReport::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTrackingQaExpReport::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTrackingQaExpReport(void *p) {
      return  p ? new(p) ::BmnTrackingQaExpReport : new ::BmnTrackingQaExpReport;
   }
   static void *newArray_BmnTrackingQaExpReport(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTrackingQaExpReport[nElements] : new ::BmnTrackingQaExpReport[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTrackingQaExpReport(void *p) {
      delete ((::BmnTrackingQaExpReport*)p);
   }
   static void deleteArray_BmnTrackingQaExpReport(void *p) {
      delete [] ((::BmnTrackingQaExpReport*)p);
   }
   static void destruct_BmnTrackingQaExpReport(void *p) {
      typedef ::BmnTrackingQaExpReport current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTrackingQaExpReport

//______________________________________________________________________________
void BmnQaBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnQaBase.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnQaBase::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnQaBase::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnQaBase(void *p) {
      delete ((::BmnQaBase*)p);
   }
   static void deleteArray_BmnQaBase(void *p) {
      delete [] ((::BmnQaBase*)p);
   }
   static void destruct_BmnQaBase(void *p) {
      typedef ::BmnQaBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnQaBase

//______________________________________________________________________________
void BmnPidQa::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnPidQa.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnPidQa::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnPidQa::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnPidQa(void *p) {
      return  p ? new(p) ::BmnPidQa : new ::BmnPidQa;
   }
   static void *newArray_BmnPidQa(Long_t nElements, void *p) {
      return p ? new(p) ::BmnPidQa[nElements] : new ::BmnPidQa[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnPidQa(void *p) {
      delete ((::BmnPidQa*)p);
   }
   static void deleteArray_BmnPidQa(void *p) {
      delete [] ((::BmnPidQa*)p);
   }
   static void destruct_BmnPidQa(void *p) {
      typedef ::BmnPidQa current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnPidQa

//______________________________________________________________________________
void BmnPidQaReport::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnPidQaReport.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnPidQaReport::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnPidQaReport::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnPidQaReport(void *p) {
      return  p ? new(p) ::BmnPidQaReport : new ::BmnPidQaReport;
   }
   static void *newArray_BmnPidQaReport(Long_t nElements, void *p) {
      return p ? new(p) ::BmnPidQaReport[nElements] : new ::BmnPidQaReport[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnPidQaReport(void *p) {
      delete ((::BmnPidQaReport*)p);
   }
   static void deleteArray_BmnPidQaReport(void *p) {
      delete [] ((::BmnPidQaReport*)p);
   }
   static void destruct_BmnPidQaReport(void *p) {
      typedef ::BmnPidQaReport current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnPidQaReport

//______________________________________________________________________________
void BmnTrackingQa::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTrackingQa.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTrackingQa::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTrackingQa::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTrackingQa(void *p) {
      return  p ? new(p) ::BmnTrackingQa : new ::BmnTrackingQa;
   }
   static void *newArray_BmnTrackingQa(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTrackingQa[nElements] : new ::BmnTrackingQa[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTrackingQa(void *p) {
      delete ((::BmnTrackingQa*)p);
   }
   static void deleteArray_BmnTrackingQa(void *p) {
      delete [] ((::BmnTrackingQa*)p);
   }
   static void destruct_BmnTrackingQa(void *p) {
      typedef ::BmnTrackingQa current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTrackingQa

//______________________________________________________________________________
void BmnTrackingQaExp::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTrackingQaExp.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTrackingQaExp::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTrackingQaExp::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTrackingQaExp(void *p) {
      return  p ? new(p) ::BmnTrackingQaExp : new ::BmnTrackingQaExp;
   }
   static void *newArray_BmnTrackingQaExp(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTrackingQaExp[nElements] : new ::BmnTrackingQaExp[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTrackingQaExp(void *p) {
      delete ((::BmnTrackingQaExp*)p);
   }
   static void deleteArray_BmnTrackingQaExp(void *p) {
      delete [] ((::BmnTrackingQaExp*)p);
   }
   static void destruct_BmnTrackingQaExp(void *p) {
      typedef ::BmnTrackingQaExp current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTrackingQaExp

//______________________________________________________________________________
void BmnLambdaQa::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnLambdaQa.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnLambdaQa::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnLambdaQa::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnLambdaQa(void *p) {
      return  p ? new(p) ::BmnLambdaQa : new ::BmnLambdaQa;
   }
   static void *newArray_BmnLambdaQa(Long_t nElements, void *p) {
      return p ? new(p) ::BmnLambdaQa[nElements] : new ::BmnLambdaQa[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnLambdaQa(void *p) {
      delete ((::BmnLambdaQa*)p);
   }
   static void deleteArray_BmnLambdaQa(void *p) {
      delete [] ((::BmnLambdaQa*)p);
   }
   static void destruct_BmnLambdaQa(void *p) {
      typedef ::BmnLambdaQa current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnLambdaQa

//______________________________________________________________________________
void BmnClusteringQa::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnClusteringQa.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnClusteringQa::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnClusteringQa::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnClusteringQa(void *p) {
      return  p ? new(p) ::BmnClusteringQa : new ::BmnClusteringQa;
   }
   static void *newArray_BmnClusteringQa(Long_t nElements, void *p) {
      return p ? new(p) ::BmnClusteringQa[nElements] : new ::BmnClusteringQa[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnClusteringQa(void *p) {
      delete ((::BmnClusteringQa*)p);
   }
   static void deleteArray_BmnClusteringQa(void *p) {
      delete [] ((::BmnClusteringQa*)p);
   }
   static void destruct_BmnClusteringQa(void *p) {
      typedef ::BmnClusteringQa current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnClusteringQa

//______________________________________________________________________________
void BmnTrackingQaReport::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTrackingQaReport.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTrackingQaReport::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTrackingQaReport::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTrackingQaReport(void *p) {
      return  p ? new(p) ::BmnTrackingQaReport : new ::BmnTrackingQaReport;
   }
   static void *newArray_BmnTrackingQaReport(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTrackingQaReport[nElements] : new ::BmnTrackingQaReport[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTrackingQaReport(void *p) {
      delete ((::BmnTrackingQaReport*)p);
   }
   static void deleteArray_BmnTrackingQaReport(void *p) {
      delete [] ((::BmnTrackingQaReport*)p);
   }
   static void destruct_BmnTrackingQaReport(void *p) {
      typedef ::BmnTrackingQaReport current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTrackingQaReport

//______________________________________________________________________________
void BmnLambdaQaReport::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnLambdaQaReport.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnLambdaQaReport::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnLambdaQaReport::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnLambdaQaReport(void *p) {
      return  p ? new(p) ::BmnLambdaQaReport : new ::BmnLambdaQaReport;
   }
   static void *newArray_BmnLambdaQaReport(Long_t nElements, void *p) {
      return p ? new(p) ::BmnLambdaQaReport[nElements] : new ::BmnLambdaQaReport[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnLambdaQaReport(void *p) {
      delete ((::BmnLambdaQaReport*)p);
   }
   static void deleteArray_BmnLambdaQaReport(void *p) {
      delete [] ((::BmnLambdaQaReport*)p);
   }
   static void destruct_BmnLambdaQaReport(void *p) {
      typedef ::BmnLambdaQaReport current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnLambdaQaReport

//______________________________________________________________________________
void BmnClusteringQaReport::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnClusteringQaReport.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnClusteringQaReport::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnClusteringQaReport::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnClusteringQaReport(void *p) {
      delete ((::BmnClusteringQaReport*)p);
   }
   static void deleteArray_BmnClusteringQaReport(void *p) {
      delete [] ((::BmnClusteringQaReport*)p);
   }
   static void destruct_BmnClusteringQaReport(void *p) {
      typedef ::BmnClusteringQaReport current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnClusteringQaReport

//______________________________________________________________________________
void BmnCustomQa::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnCustomQa.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnCustomQa::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnCustomQa::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnCustomQa(void *p) {
      return  p ? new(p) ::BmnCustomQa : new ::BmnCustomQa;
   }
   static void *newArray_BmnCustomQa(Long_t nElements, void *p) {
      return p ? new(p) ::BmnCustomQa[nElements] : new ::BmnCustomQa[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnCustomQa(void *p) {
      delete ((::BmnCustomQa*)p);
   }
   static void deleteArray_BmnCustomQa(void *p) {
      delete [] ((::BmnCustomQa*)p);
   }
   static void destruct_BmnCustomQa(void *p) {
      typedef ::BmnCustomQa current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnCustomQa

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnAcceptanceFunction(void *p) {
      return  p ? new(p) ::BmnAcceptanceFunction : new ::BmnAcceptanceFunction;
   }
   static void *newArray_BmnAcceptanceFunction(Long_t nElements, void *p) {
      return p ? new(p) ::BmnAcceptanceFunction[nElements] : new ::BmnAcceptanceFunction[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnAcceptanceFunction(void *p) {
      delete ((::BmnAcceptanceFunction*)p);
   }
   static void deleteArray_BmnAcceptanceFunction(void *p) {
      delete [] ((::BmnAcceptanceFunction*)p);
   }
   static void destruct_BmnAcceptanceFunction(void *p) {
      typedef ::BmnAcceptanceFunction current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnAcceptanceFunction

//______________________________________________________________________________
void BmnMatchRecoToMC::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMatchRecoToMC.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMatchRecoToMC::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMatchRecoToMC::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMatchRecoToMC(void *p) {
      return  p ? new(p) ::BmnMatchRecoToMC : new ::BmnMatchRecoToMC;
   }
   static void *newArray_BmnMatchRecoToMC(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMatchRecoToMC[nElements] : new ::BmnMatchRecoToMC[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMatchRecoToMC(void *p) {
      delete ((::BmnMatchRecoToMC*)p);
   }
   static void deleteArray_BmnMatchRecoToMC(void *p) {
      delete [] ((::BmnMatchRecoToMC*)p);
   }
   static void destruct_BmnMatchRecoToMC(void *p) {
      typedef ::BmnMatchRecoToMC current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMatchRecoToMC

//______________________________________________________________________________
void BmnQaHistoManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnQaHistoManager.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnQaHistoManager::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnQaHistoManager::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnQaHistoManager(void *p) {
      return  p ? new(p) ::BmnQaHistoManager : new ::BmnQaHistoManager;
   }
   static void *newArray_BmnQaHistoManager(Long_t nElements, void *p) {
      return p ? new(p) ::BmnQaHistoManager[nElements] : new ::BmnQaHistoManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnQaHistoManager(void *p) {
      delete ((::BmnQaHistoManager*)p);
   }
   static void deleteArray_BmnQaHistoManager(void *p) {
      delete [] ((::BmnQaHistoManager*)p);
   }
   static void destruct_BmnQaHistoManager(void *p) {
      typedef ::BmnQaHistoManager current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnQaHistoManager

//______________________________________________________________________________
void BmnCoordinateDetQa::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnCoordinateDetQa.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnCoordinateDetQa::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnCoordinateDetQa::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnCoordinateDetQa(void *p) {
      return  p ? new(p) ::BmnCoordinateDetQa : new ::BmnCoordinateDetQa;
   }
   static void *newArray_BmnCoordinateDetQa(Long_t nElements, void *p) {
      return p ? new(p) ::BmnCoordinateDetQa[nElements] : new ::BmnCoordinateDetQa[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnCoordinateDetQa(void *p) {
      delete ((::BmnCoordinateDetQa*)p);
   }
   static void deleteArray_BmnCoordinateDetQa(void *p) {
      delete [] ((::BmnCoordinateDetQa*)p);
   }
   static void destruct_BmnCoordinateDetQa(void *p) {
      typedef ::BmnCoordinateDetQa current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnCoordinateDetQa

//______________________________________________________________________________
void BmnTimeDetQa::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTimeDetQa.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTimeDetQa::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTimeDetQa::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTimeDetQa(void *p) {
      return  p ? new(p) ::BmnTimeDetQa : new ::BmnTimeDetQa;
   }
   static void *newArray_BmnTimeDetQa(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTimeDetQa[nElements] : new ::BmnTimeDetQa[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTimeDetQa(void *p) {
      delete ((::BmnTimeDetQa*)p);
   }
   static void deleteArray_BmnTimeDetQa(void *p) {
      delete [] ((::BmnTimeDetQa*)p);
   }
   static void destruct_BmnTimeDetQa(void *p) {
      typedef ::BmnTimeDetQa current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTimeDetQa

//______________________________________________________________________________
void BmnCalorimeterDetQa::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnCalorimeterDetQa.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnCalorimeterDetQa::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnCalorimeterDetQa::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnCalorimeterDetQa(void *p) {
      return  p ? new(p) ::BmnCalorimeterDetQa : new ::BmnCalorimeterDetQa;
   }
   static void *newArray_BmnCalorimeterDetQa(Long_t nElements, void *p) {
      return p ? new(p) ::BmnCalorimeterDetQa[nElements] : new ::BmnCalorimeterDetQa[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnCalorimeterDetQa(void *p) {
      delete ((::BmnCalorimeterDetQa*)p);
   }
   static void deleteArray_BmnCalorimeterDetQa(void *p) {
      delete [] ((::BmnCalorimeterDetQa*)p);
   }
   static void destruct_BmnCalorimeterDetQa(void *p) {
      typedef ::BmnCalorimeterDetQa current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnCalorimeterDetQa

//______________________________________________________________________________
void BmnTrigDetQa::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTrigDetQa.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTrigDetQa::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTrigDetQa::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTrigDetQa(void *p) {
      return  p ? new(p) ::BmnTrigDetQa : new ::BmnTrigDetQa;
   }
   static void *newArray_BmnTrigDetQa(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTrigDetQa[nElements] : new ::BmnTrigDetQa[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTrigDetQa(void *p) {
      delete ((::BmnTrigDetQa*)p);
   }
   static void deleteArray_BmnTrigDetQa(void *p) {
      delete [] ((::BmnTrigDetQa*)p);
   }
   static void destruct_BmnTrigDetQa(void *p) {
      typedef ::BmnTrigDetQa current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTrigDetQa

//______________________________________________________________________________
void BmnDstQa::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnDstQa.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnDstQa::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnDstQa::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnDstQa(void *p) {
      return  p ? new(p) ::BmnDstQa : new ::BmnDstQa;
   }
   static void *newArray_BmnDstQa(Long_t nElements, void *p) {
      return p ? new(p) ::BmnDstQa[nElements] : new ::BmnDstQa[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnDstQa(void *p) {
      delete ((::BmnDstQa*)p);
   }
   static void deleteArray_BmnDstQa(void *p) {
      delete [] ((::BmnDstQa*)p);
   }
   static void destruct_BmnDstQa(void *p) {
      typedef ::BmnDstQa current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnDstQa

//______________________________________________________________________________
void BmnQaOffline::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnQaOffline.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnQaOffline::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnQaOffline::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnQaOffline(void *p) {
      return  p ? new(p) ::BmnQaOffline : new ::BmnQaOffline;
   }
   static void *newArray_BmnQaOffline(Long_t nElements, void *p) {
      return p ? new(p) ::BmnQaOffline[nElements] : new ::BmnQaOffline[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnQaOffline(void *p) {
      delete ((::BmnQaOffline*)p);
   }
   static void deleteArray_BmnQaOffline(void *p) {
      delete [] ((::BmnQaOffline*)p);
   }
   static void destruct_BmnQaOffline(void *p) {
      typedef ::BmnQaOffline current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnQaOffline

//______________________________________________________________________________
void AllHistos::Streamer(TBuffer &R__b)
{
   // Stream an object of class AllHistos.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(AllHistos::Class(),this);
   } else {
      R__b.WriteClassBuffer(AllHistos::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_AllHistos(void *p) {
      return  p ? new(p) ::AllHistos : new ::AllHistos;
   }
   static void *newArray_AllHistos(Long_t nElements, void *p) {
      return p ? new(p) ::AllHistos[nElements] : new ::AllHistos[nElements];
   }
   // Wrapper around operator delete
   static void delete_AllHistos(void *p) {
      delete ((::AllHistos*)p);
   }
   static void deleteArray_AllHistos(void *p) {
      delete [] ((::AllHistos*)p);
   }
   static void destruct_AllHistos(void *p) {
      typedef ::AllHistos current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::AllHistos

//______________________________________________________________________________
void BmnQaMonitor::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnQaMonitor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnQaMonitor::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnQaMonitor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnQaMonitor(void *p) {
      return  p ? new(p) ::BmnQaMonitor : new ::BmnQaMonitor;
   }
   static void *newArray_BmnQaMonitor(Long_t nElements, void *p) {
      return p ? new(p) ::BmnQaMonitor[nElements] : new ::BmnQaMonitor[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnQaMonitor(void *p) {
      delete ((::BmnQaMonitor*)p);
   }
   static void deleteArray_BmnQaMonitor(void *p) {
      delete [] ((::BmnQaMonitor*)p);
   }
   static void destruct_BmnQaMonitor(void *p) {
      typedef ::BmnQaMonitor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnQaMonitor

//______________________________________________________________________________
void BmnTrackingQaOfflineDraw::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTrackingQaOfflineDraw.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTrackingQaOfflineDraw::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTrackingQaOfflineDraw::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTrackingQaOfflineDraw(void *p) {
      return  p ? new(p) ::BmnTrackingQaOfflineDraw : new ::BmnTrackingQaOfflineDraw;
   }
   static void *newArray_BmnTrackingQaOfflineDraw(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTrackingQaOfflineDraw[nElements] : new ::BmnTrackingQaOfflineDraw[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTrackingQaOfflineDraw(void *p) {
      delete ((::BmnTrackingQaOfflineDraw*)p);
   }
   static void deleteArray_BmnTrackingQaOfflineDraw(void *p) {
      delete [] ((::BmnTrackingQaOfflineDraw*)p);
   }
   static void destruct_BmnTrackingQaOfflineDraw(void *p) {
      typedef ::BmnTrackingQaOfflineDraw current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTrackingQaOfflineDraw

//______________________________________________________________________________
void BmnTrackingQaOffline::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTrackingQaOffline.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTrackingQaOffline::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTrackingQaOffline::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTrackingQaOffline(void *p) {
      return  p ? new(p) ::BmnTrackingQaOffline : new ::BmnTrackingQaOffline;
   }
   static void *newArray_BmnTrackingQaOffline(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTrackingQaOffline[nElements] : new ::BmnTrackingQaOffline[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTrackingQaOffline(void *p) {
      delete ((::BmnTrackingQaOffline*)p);
   }
   static void deleteArray_BmnTrackingQaOffline(void *p) {
      delete [] ((::BmnTrackingQaOffline*)p);
   }
   static void destruct_BmnTrackingQaOffline(void *p) {
      typedef ::BmnTrackingQaOffline current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTrackingQaOffline

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
   static TClass *vectorlETParticlePDGmUgR_Dictionary();
   static void vectorlETParticlePDGmUgR_TClassManip(TClass*);
   static void *new_vectorlETParticlePDGmUgR(void *p = nullptr);
   static void *newArray_vectorlETParticlePDGmUgR(Long_t size, void *p);
   static void delete_vectorlETParticlePDGmUgR(void *p);
   static void deleteArray_vectorlETParticlePDGmUgR(void *p);
   static void destruct_vectorlETParticlePDGmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TParticlePDG*>*)
   {
      vector<TParticlePDG*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TParticlePDG*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TParticlePDG*>", -2, "vector", 386,
                  typeid(vector<TParticlePDG*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETParticlePDGmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TParticlePDG*>) );
      instance.SetNew(&new_vectorlETParticlePDGmUgR);
      instance.SetNewArray(&newArray_vectorlETParticlePDGmUgR);
      instance.SetDelete(&delete_vectorlETParticlePDGmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETParticlePDGmUgR);
      instance.SetDestructor(&destruct_vectorlETParticlePDGmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TParticlePDG*> >()));

      ::ROOT::AddClassAlternate("vector<TParticlePDG*>","std::vector<TParticlePDG*, std::allocator<TParticlePDG*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TParticlePDG*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETParticlePDGmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TParticlePDG*>*)nullptr)->GetClass();
      vectorlETParticlePDGmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETParticlePDGmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETParticlePDGmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TParticlePDG*> : new vector<TParticlePDG*>;
   }
   static void *newArray_vectorlETParticlePDGmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TParticlePDG*>[nElements] : new vector<TParticlePDG*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETParticlePDGmUgR(void *p) {
      delete ((vector<TParticlePDG*>*)p);
   }
   static void deleteArray_vectorlETParticlePDGmUgR(void *p) {
      delete [] ((vector<TParticlePDG*>*)p);
   }
   static void destruct_vectorlETParticlePDGmUgR(void *p) {
      typedef vector<TParticlePDG*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TParticlePDG*>

namespace ROOT {
   static TClass *vectorlETObjectmUgR_Dictionary();
   static void vectorlETObjectmUgR_TClassManip(TClass*);
   static void *new_vectorlETObjectmUgR(void *p = nullptr);
   static void *newArray_vectorlETObjectmUgR(Long_t size, void *p);
   static void delete_vectorlETObjectmUgR(void *p);
   static void deleteArray_vectorlETObjectmUgR(void *p);
   static void destruct_vectorlETObjectmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TObject*>*)
   {
      vector<TObject*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TObject*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TObject*>", -2, "vector", 386,
                  typeid(vector<TObject*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETObjectmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TObject*>) );
      instance.SetNew(&new_vectorlETObjectmUgR);
      instance.SetNewArray(&newArray_vectorlETObjectmUgR);
      instance.SetDelete(&delete_vectorlETObjectmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETObjectmUgR);
      instance.SetDestructor(&destruct_vectorlETObjectmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TObject*> >()));

      ::ROOT::AddClassAlternate("vector<TObject*>","std::vector<TObject*, std::allocator<TObject*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TObject*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETObjectmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TObject*>*)nullptr)->GetClass();
      vectorlETObjectmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETObjectmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETObjectmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TObject*> : new vector<TObject*>;
   }
   static void *newArray_vectorlETObjectmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TObject*>[nElements] : new vector<TObject*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETObjectmUgR(void *p) {
      delete ((vector<TObject*>*)p);
   }
   static void deleteArray_vectorlETObjectmUgR(void *p) {
      delete [] ((vector<TObject*>*)p);
   }
   static void destruct_vectorlETObjectmUgR(void *p) {
      typedef vector<TObject*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TObject*>

namespace ROOT {
   static TClass *vectorlETH2FmUgR_Dictionary();
   static void vectorlETH2FmUgR_TClassManip(TClass*);
   static void *new_vectorlETH2FmUgR(void *p = nullptr);
   static void *newArray_vectorlETH2FmUgR(Long_t size, void *p);
   static void delete_vectorlETH2FmUgR(void *p);
   static void deleteArray_vectorlETH2FmUgR(void *p);
   static void destruct_vectorlETH2FmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TH2F*>*)
   {
      vector<TH2F*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TH2F*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TH2F*>", -2, "vector", 386,
                  typeid(vector<TH2F*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETH2FmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TH2F*>) );
      instance.SetNew(&new_vectorlETH2FmUgR);
      instance.SetNewArray(&newArray_vectorlETH2FmUgR);
      instance.SetDelete(&delete_vectorlETH2FmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETH2FmUgR);
      instance.SetDestructor(&destruct_vectorlETH2FmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TH2F*> >()));

      ::ROOT::AddClassAlternate("vector<TH2F*>","std::vector<TH2F*, std::allocator<TH2F*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TH2F*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETH2FmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TH2F*>*)nullptr)->GetClass();
      vectorlETH2FmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETH2FmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETH2FmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH2F*> : new vector<TH2F*>;
   }
   static void *newArray_vectorlETH2FmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH2F*>[nElements] : new vector<TH2F*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETH2FmUgR(void *p) {
      delete ((vector<TH2F*>*)p);
   }
   static void deleteArray_vectorlETH2FmUgR(void *p) {
      delete [] ((vector<TH2F*>*)p);
   }
   static void destruct_vectorlETH2FmUgR(void *p) {
      typedef vector<TH2F*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TH2F*>

namespace ROOT {
   static TClass *vectorlETH1FmUgR_Dictionary();
   static void vectorlETH1FmUgR_TClassManip(TClass*);
   static void *new_vectorlETH1FmUgR(void *p = nullptr);
   static void *newArray_vectorlETH1FmUgR(Long_t size, void *p);
   static void delete_vectorlETH1FmUgR(void *p);
   static void deleteArray_vectorlETH1FmUgR(void *p);
   static void destruct_vectorlETH1FmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TH1F*>*)
   {
      vector<TH1F*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TH1F*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TH1F*>", -2, "vector", 386,
                  typeid(vector<TH1F*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETH1FmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TH1F*>) );
      instance.SetNew(&new_vectorlETH1FmUgR);
      instance.SetNewArray(&newArray_vectorlETH1FmUgR);
      instance.SetDelete(&delete_vectorlETH1FmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETH1FmUgR);
      instance.SetDestructor(&destruct_vectorlETH1FmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TH1F*> >()));

      ::ROOT::AddClassAlternate("vector<TH1F*>","std::vector<TH1F*, std::allocator<TH1F*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TH1F*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETH1FmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TH1F*>*)nullptr)->GetClass();
      vectorlETH1FmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETH1FmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETH1FmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH1F*> : new vector<TH1F*>;
   }
   static void *newArray_vectorlETH1FmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH1F*>[nElements] : new vector<TH1F*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETH1FmUgR(void *p) {
      delete ((vector<TH1F*>*)p);
   }
   static void deleteArray_vectorlETH1FmUgR(void *p) {
      delete [] ((vector<TH1F*>*)p);
   }
   static void destruct_vectorlETH1FmUgR(void *p) {
      typedef vector<TH1F*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TH1F*>

namespace ROOT {
   static TClass *vectorlETH1mUgR_Dictionary();
   static void vectorlETH1mUgR_TClassManip(TClass*);
   static void *new_vectorlETH1mUgR(void *p = nullptr);
   static void *newArray_vectorlETH1mUgR(Long_t size, void *p);
   static void delete_vectorlETH1mUgR(void *p);
   static void deleteArray_vectorlETH1mUgR(void *p);
   static void destruct_vectorlETH1mUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TH1*>*)
   {
      vector<TH1*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TH1*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TH1*>", -2, "vector", 386,
                  typeid(vector<TH1*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETH1mUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TH1*>) );
      instance.SetNew(&new_vectorlETH1mUgR);
      instance.SetNewArray(&newArray_vectorlETH1mUgR);
      instance.SetDelete(&delete_vectorlETH1mUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETH1mUgR);
      instance.SetDestructor(&destruct_vectorlETH1mUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TH1*> >()));

      ::ROOT::AddClassAlternate("vector<TH1*>","std::vector<TH1*, std::allocator<TH1*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TH1*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETH1mUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TH1*>*)nullptr)->GetClass();
      vectorlETH1mUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETH1mUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETH1mUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH1*> : new vector<TH1*>;
   }
   static void *newArray_vectorlETH1mUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH1*>[nElements] : new vector<TH1*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETH1mUgR(void *p) {
      delete ((vector<TH1*>*)p);
   }
   static void deleteArray_vectorlETH1mUgR(void *p) {
      delete [] ((vector<TH1*>*)p);
   }
   static void destruct_vectorlETH1mUgR(void *p) {
      typedef vector<TH1*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TH1*>

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
                  &vectorlETClonesArraymUgR_Dictionary, isa_proxy, 0,
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
   static TClass *vectorlETCanvasmUgR_Dictionary();
   static void vectorlETCanvasmUgR_TClassManip(TClass*);
   static void *new_vectorlETCanvasmUgR(void *p = nullptr);
   static void *newArray_vectorlETCanvasmUgR(Long_t size, void *p);
   static void delete_vectorlETCanvasmUgR(void *p);
   static void deleteArray_vectorlETCanvasmUgR(void *p);
   static void destruct_vectorlETCanvasmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TCanvas*>*)
   {
      vector<TCanvas*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TCanvas*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TCanvas*>", -2, "vector", 386,
                  typeid(vector<TCanvas*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETCanvasmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TCanvas*>) );
      instance.SetNew(&new_vectorlETCanvasmUgR);
      instance.SetNewArray(&newArray_vectorlETCanvasmUgR);
      instance.SetDelete(&delete_vectorlETCanvasmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETCanvasmUgR);
      instance.SetDestructor(&destruct_vectorlETCanvasmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TCanvas*> >()));

      ::ROOT::AddClassAlternate("vector<TCanvas*>","std::vector<TCanvas*, std::allocator<TCanvas*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TCanvas*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETCanvasmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TCanvas*>*)nullptr)->GetClass();
      vectorlETCanvasmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETCanvasmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETCanvasmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TCanvas*> : new vector<TCanvas*>;
   }
   static void *newArray_vectorlETCanvasmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TCanvas*>[nElements] : new vector<TCanvas*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETCanvasmUgR(void *p) {
      delete ((vector<TCanvas*>*)p);
   }
   static void deleteArray_vectorlETCanvasmUgR(void *p) {
      delete [] ((vector<TCanvas*>*)p);
   }
   static void destruct_vectorlETCanvasmUgR(void *p) {
      typedef vector<TCanvas*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TCanvas*>

namespace ROOT {
   static TClass *vectorlEBmnPadBranchmUgR_Dictionary();
   static void vectorlEBmnPadBranchmUgR_TClassManip(TClass*);
   static void *new_vectorlEBmnPadBranchmUgR(void *p = nullptr);
   static void *newArray_vectorlEBmnPadBranchmUgR(Long_t size, void *p);
   static void delete_vectorlEBmnPadBranchmUgR(void *p);
   static void deleteArray_vectorlEBmnPadBranchmUgR(void *p);
   static void destruct_vectorlEBmnPadBranchmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnPadBranch*>*)
   {
      vector<BmnPadBranch*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnPadBranch*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnPadBranch*>", -2, "vector", 386,
                  typeid(vector<BmnPadBranch*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnPadBranchmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnPadBranch*>) );
      instance.SetNew(&new_vectorlEBmnPadBranchmUgR);
      instance.SetNewArray(&newArray_vectorlEBmnPadBranchmUgR);
      instance.SetDelete(&delete_vectorlEBmnPadBranchmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnPadBranchmUgR);
      instance.SetDestructor(&destruct_vectorlEBmnPadBranchmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnPadBranch*> >()));

      ::ROOT::AddClassAlternate("vector<BmnPadBranch*>","std::vector<BmnPadBranch*, std::allocator<BmnPadBranch*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnPadBranch*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnPadBranchmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnPadBranch*>*)nullptr)->GetClass();
      vectorlEBmnPadBranchmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnPadBranchmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnPadBranchmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnPadBranch*> : new vector<BmnPadBranch*>;
   }
   static void *newArray_vectorlEBmnPadBranchmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnPadBranch*>[nElements] : new vector<BmnPadBranch*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnPadBranchmUgR(void *p) {
      delete ((vector<BmnPadBranch*>*)p);
   }
   static void deleteArray_vectorlEBmnPadBranchmUgR(void *p) {
      delete [] ((vector<BmnPadBranch*>*)p);
   }
   static void destruct_vectorlEBmnPadBranchmUgR(void *p) {
      typedef vector<BmnPadBranch*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnPadBranch*>

namespace ROOT {
   static TClass *vectorlEBmnMCPointgR_Dictionary();
   static void vectorlEBmnMCPointgR_TClassManip(TClass*);
   static void *new_vectorlEBmnMCPointgR(void *p = nullptr);
   static void *newArray_vectorlEBmnMCPointgR(Long_t size, void *p);
   static void delete_vectorlEBmnMCPointgR(void *p);
   static void deleteArray_vectorlEBmnMCPointgR(void *p);
   static void destruct_vectorlEBmnMCPointgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnMCPoint>*)
   {
      vector<BmnMCPoint> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnMCPoint>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnMCPoint>", -2, "vector", 386,
                  typeid(vector<BmnMCPoint>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnMCPointgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnMCPoint>) );
      instance.SetNew(&new_vectorlEBmnMCPointgR);
      instance.SetNewArray(&newArray_vectorlEBmnMCPointgR);
      instance.SetDelete(&delete_vectorlEBmnMCPointgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnMCPointgR);
      instance.SetDestructor(&destruct_vectorlEBmnMCPointgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnMCPoint> >()));

      ::ROOT::AddClassAlternate("vector<BmnMCPoint>","std::vector<BmnMCPoint, std::allocator<BmnMCPoint> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnMCPoint>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnMCPointgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnMCPoint>*)nullptr)->GetClass();
      vectorlEBmnMCPointgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnMCPointgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnMCPointgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnMCPoint> : new vector<BmnMCPoint>;
   }
   static void *newArray_vectorlEBmnMCPointgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnMCPoint>[nElements] : new vector<BmnMCPoint>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnMCPointgR(void *p) {
      delete ((vector<BmnMCPoint>*)p);
   }
   static void deleteArray_vectorlEBmnMCPointgR(void *p) {
      delete [] ((vector<BmnMCPoint>*)p);
   }
   static void destruct_vectorlEBmnMCPointgR(void *p) {
      typedef vector<BmnMCPoint> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnMCPoint>

namespace ROOT {
   static TClass *vectorlEBmnHistManagermUgR_Dictionary();
   static void vectorlEBmnHistManagermUgR_TClassManip(TClass*);
   static void *new_vectorlEBmnHistManagermUgR(void *p = nullptr);
   static void *newArray_vectorlEBmnHistManagermUgR(Long_t size, void *p);
   static void delete_vectorlEBmnHistManagermUgR(void *p);
   static void deleteArray_vectorlEBmnHistManagermUgR(void *p);
   static void destruct_vectorlEBmnHistManagermUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnHistManager*>*)
   {
      vector<BmnHistManager*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnHistManager*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnHistManager*>", -2, "vector", 386,
                  typeid(vector<BmnHistManager*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnHistManagermUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnHistManager*>) );
      instance.SetNew(&new_vectorlEBmnHistManagermUgR);
      instance.SetNewArray(&newArray_vectorlEBmnHistManagermUgR);
      instance.SetDelete(&delete_vectorlEBmnHistManagermUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnHistManagermUgR);
      instance.SetDestructor(&destruct_vectorlEBmnHistManagermUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnHistManager*> >()));

      ::ROOT::AddClassAlternate("vector<BmnHistManager*>","std::vector<BmnHistManager*, std::allocator<BmnHistManager*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnHistManager*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnHistManagermUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnHistManager*>*)nullptr)->GetClass();
      vectorlEBmnHistManagermUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnHistManagermUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnHistManagermUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnHistManager*> : new vector<BmnHistManager*>;
   }
   static void *newArray_vectorlEBmnHistManagermUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnHistManager*>[nElements] : new vector<BmnHistManager*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnHistManagermUgR(void *p) {
      delete ((vector<BmnHistManager*>*)p);
   }
   static void deleteArray_vectorlEBmnHistManagermUgR(void *p) {
      delete [] ((vector<BmnHistManager*>*)p);
   }
   static void destruct_vectorlEBmnHistManagermUgR(void *p) {
      typedef vector<BmnHistManager*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnHistManager*>

namespace ROOT {
   static TClass *unordered_maplEstringcOvectorlEintgRsPgR_Dictionary();
   static void unordered_maplEstringcOvectorlEintgRsPgR_TClassManip(TClass*);
   static void *new_unordered_maplEstringcOvectorlEintgRsPgR(void *p = nullptr);
   static void *newArray_unordered_maplEstringcOvectorlEintgRsPgR(Long_t size, void *p);
   static void delete_unordered_maplEstringcOvectorlEintgRsPgR(void *p);
   static void deleteArray_unordered_maplEstringcOvectorlEintgRsPgR(void *p);
   static void destruct_unordered_maplEstringcOvectorlEintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<string,vector<int> >*)
   {
      unordered_map<string,vector<int> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<string,vector<int> >));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<string,vector<int> >", -2, "unordered_map", 102,
                  typeid(unordered_map<string,vector<int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplEstringcOvectorlEintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(unordered_map<string,vector<int> >) );
      instance.SetNew(&new_unordered_maplEstringcOvectorlEintgRsPgR);
      instance.SetNewArray(&newArray_unordered_maplEstringcOvectorlEintgRsPgR);
      instance.SetDelete(&delete_unordered_maplEstringcOvectorlEintgRsPgR);
      instance.SetDeleteArray(&deleteArray_unordered_maplEstringcOvectorlEintgRsPgR);
      instance.SetDestructor(&destruct_unordered_maplEstringcOvectorlEintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<string,vector<int> > >()));

      ::ROOT::AddClassAlternate("unordered_map<string,vector<int> >","std::unordered_map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::vector<int, std::allocator<int> >, std::hash<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::equal_to<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::vector<int, std::allocator<int> > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const unordered_map<string,vector<int> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplEstringcOvectorlEintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const unordered_map<string,vector<int> >*)nullptr)->GetClass();
      unordered_maplEstringcOvectorlEintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplEstringcOvectorlEintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplEstringcOvectorlEintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<string,vector<int> > : new unordered_map<string,vector<int> >;
   }
   static void *newArray_unordered_maplEstringcOvectorlEintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<string,vector<int> >[nElements] : new unordered_map<string,vector<int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplEstringcOvectorlEintgRsPgR(void *p) {
      delete ((unordered_map<string,vector<int> >*)p);
   }
   static void deleteArray_unordered_maplEstringcOvectorlEintgRsPgR(void *p) {
      delete [] ((unordered_map<string,vector<int> >*)p);
   }
   static void destruct_unordered_maplEstringcOvectorlEintgRsPgR(void *p) {
      typedef unordered_map<string,vector<int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class unordered_map<string,vector<int> >

namespace ROOT {
   static TClass *unordered_maplEdoublecOstringgR_Dictionary();
   static void unordered_maplEdoublecOstringgR_TClassManip(TClass*);
   static void *new_unordered_maplEdoublecOstringgR(void *p = nullptr);
   static void *newArray_unordered_maplEdoublecOstringgR(Long_t size, void *p);
   static void delete_unordered_maplEdoublecOstringgR(void *p);
   static void deleteArray_unordered_maplEdoublecOstringgR(void *p);
   static void destruct_unordered_maplEdoublecOstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<double,string>*)
   {
      unordered_map<double,string> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<double,string>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<double,string>", -2, "unordered_map", 102,
                  typeid(unordered_map<double,string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplEdoublecOstringgR_Dictionary, isa_proxy, 0,
                  sizeof(unordered_map<double,string>) );
      instance.SetNew(&new_unordered_maplEdoublecOstringgR);
      instance.SetNewArray(&newArray_unordered_maplEdoublecOstringgR);
      instance.SetDelete(&delete_unordered_maplEdoublecOstringgR);
      instance.SetDeleteArray(&deleteArray_unordered_maplEdoublecOstringgR);
      instance.SetDestructor(&destruct_unordered_maplEdoublecOstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<double,string> >()));

      ::ROOT::AddClassAlternate("unordered_map<double,string>","std::unordered_map<double, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<double const, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const unordered_map<double,string>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplEdoublecOstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const unordered_map<double,string>*)nullptr)->GetClass();
      unordered_maplEdoublecOstringgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplEdoublecOstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplEdoublecOstringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<double,string> : new unordered_map<double,string>;
   }
   static void *newArray_unordered_maplEdoublecOstringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<double,string>[nElements] : new unordered_map<double,string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplEdoublecOstringgR(void *p) {
      delete ((unordered_map<double,string>*)p);
   }
   static void deleteArray_unordered_maplEdoublecOstringgR(void *p) {
      delete [] ((unordered_map<double,string>*)p);
   }
   static void destruct_unordered_maplEdoublecOstringgR(void *p) {
      typedef unordered_map<double,string> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class unordered_map<double,string>

namespace ROOT {
   static TClass *maplEstringcOTCanvasmUgR_Dictionary();
   static void maplEstringcOTCanvasmUgR_TClassManip(TClass*);
   static void *new_maplEstringcOTCanvasmUgR(void *p = nullptr);
   static void *newArray_maplEstringcOTCanvasmUgR(Long_t size, void *p);
   static void delete_maplEstringcOTCanvasmUgR(void *p);
   static void deleteArray_maplEstringcOTCanvasmUgR(void *p);
   static void destruct_maplEstringcOTCanvasmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,TCanvas*>*)
   {
      map<string,TCanvas*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,TCanvas*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,TCanvas*>", -2, "map", 100,
                  typeid(map<string,TCanvas*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOTCanvasmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,TCanvas*>) );
      instance.SetNew(&new_maplEstringcOTCanvasmUgR);
      instance.SetNewArray(&newArray_maplEstringcOTCanvasmUgR);
      instance.SetDelete(&delete_maplEstringcOTCanvasmUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOTCanvasmUgR);
      instance.SetDestructor(&destruct_maplEstringcOTCanvasmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,TCanvas*> >()));

      ::ROOT::AddClassAlternate("map<string,TCanvas*>","std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, TCanvas*, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, TCanvas*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,TCanvas*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOTCanvasmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,TCanvas*>*)nullptr)->GetClass();
      maplEstringcOTCanvasmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOTCanvasmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOTCanvasmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,TCanvas*> : new map<string,TCanvas*>;
   }
   static void *newArray_maplEstringcOTCanvasmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,TCanvas*>[nElements] : new map<string,TCanvas*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOTCanvasmUgR(void *p) {
      delete ((map<string,TCanvas*>*)p);
   }
   static void deleteArray_maplEstringcOTCanvasmUgR(void *p) {
      delete [] ((map<string,TCanvas*>*)p);
   }
   static void destruct_maplEstringcOTCanvasmUgR(void *p) {
      typedef map<string,TCanvas*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,TCanvas*>

namespace ROOT {
   static TClass *maplEintcOvectorlEBmnMCPointgRsPgR_Dictionary();
   static void maplEintcOvectorlEBmnMCPointgRsPgR_TClassManip(TClass*);
   static void *new_maplEintcOvectorlEBmnMCPointgRsPgR(void *p = nullptr);
   static void *newArray_maplEintcOvectorlEBmnMCPointgRsPgR(Long_t size, void *p);
   static void delete_maplEintcOvectorlEBmnMCPointgRsPgR(void *p);
   static void deleteArray_maplEintcOvectorlEBmnMCPointgRsPgR(void *p);
   static void destruct_maplEintcOvectorlEBmnMCPointgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,vector<BmnMCPoint> >*)
   {
      map<int,vector<BmnMCPoint> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,vector<BmnMCPoint> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,vector<BmnMCPoint> >", -2, "map", 100,
                  typeid(map<int,vector<BmnMCPoint> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOvectorlEBmnMCPointgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,vector<BmnMCPoint> >) );
      instance.SetNew(&new_maplEintcOvectorlEBmnMCPointgRsPgR);
      instance.SetNewArray(&newArray_maplEintcOvectorlEBmnMCPointgRsPgR);
      instance.SetDelete(&delete_maplEintcOvectorlEBmnMCPointgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOvectorlEBmnMCPointgRsPgR);
      instance.SetDestructor(&destruct_maplEintcOvectorlEBmnMCPointgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,vector<BmnMCPoint> > >()));

      ::ROOT::AddClassAlternate("map<int,vector<BmnMCPoint> >","std::map<int, std::vector<BmnMCPoint, std::allocator<BmnMCPoint> >, std::less<int>, std::allocator<std::pair<int const, std::vector<BmnMCPoint, std::allocator<BmnMCPoint> > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,vector<BmnMCPoint> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOvectorlEBmnMCPointgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,vector<BmnMCPoint> >*)nullptr)->GetClass();
      maplEintcOvectorlEBmnMCPointgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOvectorlEBmnMCPointgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOvectorlEBmnMCPointgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,vector<BmnMCPoint> > : new map<int,vector<BmnMCPoint> >;
   }
   static void *newArray_maplEintcOvectorlEBmnMCPointgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,vector<BmnMCPoint> >[nElements] : new map<int,vector<BmnMCPoint> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOvectorlEBmnMCPointgRsPgR(void *p) {
      delete ((map<int,vector<BmnMCPoint> >*)p);
   }
   static void deleteArray_maplEintcOvectorlEBmnMCPointgRsPgR(void *p) {
      delete [] ((map<int,vector<BmnMCPoint> >*)p);
   }
   static void destruct_maplEintcOvectorlEBmnMCPointgRsPgR(void *p) {
      typedef map<int,vector<BmnMCPoint> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,vector<BmnMCPoint> >

namespace ROOT {
   static TClass *maplEintcOBmnMCTrackgR_Dictionary();
   static void maplEintcOBmnMCTrackgR_TClassManip(TClass*);
   static void *new_maplEintcOBmnMCTrackgR(void *p = nullptr);
   static void *newArray_maplEintcOBmnMCTrackgR(Long_t size, void *p);
   static void delete_maplEintcOBmnMCTrackgR(void *p);
   static void deleteArray_maplEintcOBmnMCTrackgR(void *p);
   static void destruct_maplEintcOBmnMCTrackgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,BmnMCTrack>*)
   {
      map<int,BmnMCTrack> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,BmnMCTrack>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,BmnMCTrack>", -2, "map", 100,
                  typeid(map<int,BmnMCTrack>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOBmnMCTrackgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,BmnMCTrack>) );
      instance.SetNew(&new_maplEintcOBmnMCTrackgR);
      instance.SetNewArray(&newArray_maplEintcOBmnMCTrackgR);
      instance.SetDelete(&delete_maplEintcOBmnMCTrackgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOBmnMCTrackgR);
      instance.SetDestructor(&destruct_maplEintcOBmnMCTrackgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,BmnMCTrack> >()));

      ::ROOT::AddClassAlternate("map<int,BmnMCTrack>","std::map<int, BmnMCTrack, std::less<int>, std::allocator<std::pair<int const, BmnMCTrack> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,BmnMCTrack>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOBmnMCTrackgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,BmnMCTrack>*)nullptr)->GetClass();
      maplEintcOBmnMCTrackgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOBmnMCTrackgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOBmnMCTrackgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,BmnMCTrack> : new map<int,BmnMCTrack>;
   }
   static void *newArray_maplEintcOBmnMCTrackgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,BmnMCTrack>[nElements] : new map<int,BmnMCTrack>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOBmnMCTrackgR(void *p) {
      delete ((map<int,BmnMCTrack>*)p);
   }
   static void deleteArray_maplEintcOBmnMCTrackgR(void *p) {
      delete [] ((map<int,BmnMCTrack>*)p);
   }
   static void destruct_maplEintcOBmnMCTrackgR(void *p) {
      typedef map<int,BmnMCTrack> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,BmnMCTrack>

namespace ROOT {
   static TClass *maplETStringcOTStringgR_Dictionary();
   static void maplETStringcOTStringgR_TClassManip(TClass*);
   static void *new_maplETStringcOTStringgR(void *p = nullptr);
   static void *newArray_maplETStringcOTStringgR(Long_t size, void *p);
   static void delete_maplETStringcOTStringgR(void *p);
   static void deleteArray_maplETStringcOTStringgR(void *p);
   static void destruct_maplETStringcOTStringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TString,TString>*)
   {
      map<TString,TString> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TString,TString>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TString,TString>", -2, "map", 100,
                  typeid(map<TString,TString>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETStringcOTStringgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TString,TString>) );
      instance.SetNew(&new_maplETStringcOTStringgR);
      instance.SetNewArray(&newArray_maplETStringcOTStringgR);
      instance.SetDelete(&delete_maplETStringcOTStringgR);
      instance.SetDeleteArray(&deleteArray_maplETStringcOTStringgR);
      instance.SetDestructor(&destruct_maplETStringcOTStringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TString,TString> >()));

      ::ROOT::AddClassAlternate("map<TString,TString>","std::map<TString, TString, std::less<TString>, std::allocator<std::pair<TString const, TString> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TString,TString>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETStringcOTStringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TString,TString>*)nullptr)->GetClass();
      maplETStringcOTStringgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETStringcOTStringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETStringcOTStringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,TString> : new map<TString,TString>;
   }
   static void *newArray_maplETStringcOTStringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,TString>[nElements] : new map<TString,TString>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETStringcOTStringgR(void *p) {
      delete ((map<TString,TString>*)p);
   }
   static void deleteArray_maplETStringcOTStringgR(void *p) {
      delete [] ((map<TString,TString>*)p);
   }
   static void destruct_maplETStringcOTStringgR(void *p) {
      typedef map<TString,TString> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TString,TString>

namespace ROOT {
   static TClass *maplETStringcOTNamedmUgR_Dictionary();
   static void maplETStringcOTNamedmUgR_TClassManip(TClass*);
   static void *new_maplETStringcOTNamedmUgR(void *p = nullptr);
   static void *newArray_maplETStringcOTNamedmUgR(Long_t size, void *p);
   static void delete_maplETStringcOTNamedmUgR(void *p);
   static void deleteArray_maplETStringcOTNamedmUgR(void *p);
   static void destruct_maplETStringcOTNamedmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TString,TNamed*>*)
   {
      map<TString,TNamed*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TString,TNamed*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TString,TNamed*>", -2, "map", 100,
                  typeid(map<TString,TNamed*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETStringcOTNamedmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TString,TNamed*>) );
      instance.SetNew(&new_maplETStringcOTNamedmUgR);
      instance.SetNewArray(&newArray_maplETStringcOTNamedmUgR);
      instance.SetDelete(&delete_maplETStringcOTNamedmUgR);
      instance.SetDeleteArray(&deleteArray_maplETStringcOTNamedmUgR);
      instance.SetDestructor(&destruct_maplETStringcOTNamedmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TString,TNamed*> >()));

      ::ROOT::AddClassAlternate("map<TString,TNamed*>","std::map<TString, TNamed*, std::less<TString>, std::allocator<std::pair<TString const, TNamed*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TString,TNamed*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETStringcOTNamedmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TString,TNamed*>*)nullptr)->GetClass();
      maplETStringcOTNamedmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETStringcOTNamedmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETStringcOTNamedmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,TNamed*> : new map<TString,TNamed*>;
   }
   static void *newArray_maplETStringcOTNamedmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,TNamed*>[nElements] : new map<TString,TNamed*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETStringcOTNamedmUgR(void *p) {
      delete ((map<TString,TNamed*>*)p);
   }
   static void deleteArray_maplETStringcOTNamedmUgR(void *p) {
      delete [] ((map<TString,TNamed*>*)p);
   }
   static void destruct_maplETStringcOTNamedmUgR(void *p) {
      typedef map<TString,TNamed*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TString,TNamed*>

namespace ROOT {
   static TClass *maplETClonesArraymUcOTStringgR_Dictionary();
   static void maplETClonesArraymUcOTStringgR_TClassManip(TClass*);
   static void *new_maplETClonesArraymUcOTStringgR(void *p = nullptr);
   static void *newArray_maplETClonesArraymUcOTStringgR(Long_t size, void *p);
   static void delete_maplETClonesArraymUcOTStringgR(void *p);
   static void deleteArray_maplETClonesArraymUcOTStringgR(void *p);
   static void destruct_maplETClonesArraymUcOTStringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TClonesArray*,TString>*)
   {
      map<TClonesArray*,TString> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TClonesArray*,TString>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TClonesArray*,TString>", -2, "map", 100,
                  typeid(map<TClonesArray*,TString>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETClonesArraymUcOTStringgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TClonesArray*,TString>) );
      instance.SetNew(&new_maplETClonesArraymUcOTStringgR);
      instance.SetNewArray(&newArray_maplETClonesArraymUcOTStringgR);
      instance.SetDelete(&delete_maplETClonesArraymUcOTStringgR);
      instance.SetDeleteArray(&deleteArray_maplETClonesArraymUcOTStringgR);
      instance.SetDestructor(&destruct_maplETClonesArraymUcOTStringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TClonesArray*,TString> >()));

      ::ROOT::AddClassAlternate("map<TClonesArray*,TString>","std::map<TClonesArray*, TString, std::less<TClonesArray*>, std::allocator<std::pair<TClonesArray* const, TString> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TClonesArray*,TString>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETClonesArraymUcOTStringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TClonesArray*,TString>*)nullptr)->GetClass();
      maplETClonesArraymUcOTStringgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETClonesArraymUcOTStringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETClonesArraymUcOTStringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TClonesArray*,TString> : new map<TClonesArray*,TString>;
   }
   static void *newArray_maplETClonesArraymUcOTStringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TClonesArray*,TString>[nElements] : new map<TClonesArray*,TString>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETClonesArraymUcOTStringgR(void *p) {
      delete ((map<TClonesArray*,TString>*)p);
   }
   static void deleteArray_maplETClonesArraymUcOTStringgR(void *p) {
      delete [] ((map<TClonesArray*,TString>*)p);
   }
   static void destruct_maplETClonesArraymUcOTStringgR(void *p) {
      typedef map<TClonesArray*,TString> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TClonesArray*,TString>

namespace ROOT {
   static TClass *maplEDetectorIdcOboolgR_Dictionary();
   static void maplEDetectorIdcOboolgR_TClassManip(TClass*);
   static void *new_maplEDetectorIdcOboolgR(void *p = nullptr);
   static void *newArray_maplEDetectorIdcOboolgR(Long_t size, void *p);
   static void delete_maplEDetectorIdcOboolgR(void *p);
   static void deleteArray_maplEDetectorIdcOboolgR(void *p);
   static void destruct_maplEDetectorIdcOboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<DetectorId,bool>*)
   {
      map<DetectorId,bool> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<DetectorId,bool>));
      static ::ROOT::TGenericClassInfo 
         instance("map<DetectorId,bool>", -2, "map", 100,
                  typeid(map<DetectorId,bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEDetectorIdcOboolgR_Dictionary, isa_proxy, 0,
                  sizeof(map<DetectorId,bool>) );
      instance.SetNew(&new_maplEDetectorIdcOboolgR);
      instance.SetNewArray(&newArray_maplEDetectorIdcOboolgR);
      instance.SetDelete(&delete_maplEDetectorIdcOboolgR);
      instance.SetDeleteArray(&deleteArray_maplEDetectorIdcOboolgR);
      instance.SetDestructor(&destruct_maplEDetectorIdcOboolgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<DetectorId,bool> >()));

      ::ROOT::AddClassAlternate("map<DetectorId,bool>","std::map<DetectorId, bool, std::less<DetectorId>, std::allocator<std::pair<DetectorId const, bool> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<DetectorId,bool>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEDetectorIdcOboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<DetectorId,bool>*)nullptr)->GetClass();
      maplEDetectorIdcOboolgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEDetectorIdcOboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEDetectorIdcOboolgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<DetectorId,bool> : new map<DetectorId,bool>;
   }
   static void *newArray_maplEDetectorIdcOboolgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<DetectorId,bool>[nElements] : new map<DetectorId,bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEDetectorIdcOboolgR(void *p) {
      delete ((map<DetectorId,bool>*)p);
   }
   static void deleteArray_maplEDetectorIdcOboolgR(void *p) {
      delete [] ((map<DetectorId,bool>*)p);
   }
   static void destruct_maplEDetectorIdcOboolgR(void *p) {
      typedef map<DetectorId,bool> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<DetectorId,bool>

namespace {
  void TriggerDictionaryInitialization_G__BmnQaDict_Impl() {
    static const char* headers[] = {
"BmnRunInfo.h",
"BmnSimulationReport.h",
"BmnStudyReport.h",
"BmnHtmlReportElement.h",
"BmnReport.h",
"BmnDrawHist.h",
"BmnDrawOnline.h",
"BmnHistManager.h",
"BmnSimulationReport.h",
"BmnReportElement.h",
"BmnHist.h",
"PadInfo.h",
"BmnPadBranch.h",
"BmnPadGenerator.h",
"BmnQaBase.h",
"BmnPidQa.h",
"BmnPidQaReport.h",
"BmnTrackingQa.h",
"BmnTrackingQaExp.h",
"BmnLambdaQa.h",
"BmnClusteringQa.h",
"BmnUtils.h",
"BmnTrackingQaReport.h",
"BmnTrackingQaExpReport.h",
"BmnLambdaQaReport.h",
"BmnClusteringQaReport.h",
"BmnCustomQa.h",
"BmnMCTrack.h",
"BmnMCTrackCreator.h",
"BmnAcceptanceFunction.h",
"BmnMCPoint.h",
"BmnMatchRecoToMC.h",
"BmnQaHistoManager.h",
"BmnQaOffline.h",
"BmnCoordinateDetQa.h",
"BmnTimeDetQa.h",
"BmnCalorimeterDetQa.h",
"BmnTrigDetQa.h",
"BmnDstQa.h",
"BmnQaMonitor.h",
"BmnTrackingQaOffline.h",
"BmnTrackingQaOfflineDraw.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/database/uni_db",
"/data/yaopeng/bmnroot_Yaopeng/database/elog_db",
"/data/yaopeng/bmnroot_Yaopeng/field",
"/data/yaopeng/bmnroot_Yaopeng/base",
"/data/yaopeng/bmnroot_Yaopeng/base/data",
"/data/yaopeng/bmnroot_Yaopeng/base/raw",
"/data/yaopeng/bmnroot_Yaopeng/base/header",
"/data/yaopeng/bmnroot_Yaopeng/base/cbm",
"/data/yaopeng/bmnroot_Yaopeng/base/math",
"/data/yaopeng/bmnroot_Yaopeng/detectors/ssd/auxx/data",
"/data/yaopeng/bmnroot_Yaopeng/detectors/mwpc",
"/data/yaopeng/bmnroot_Yaopeng/detectors/csc",
"/data/yaopeng/bmnroot_Yaopeng/detectors/dch",
"/data/yaopeng/bmnroot_Yaopeng/detectors/silicon",
"/data/yaopeng/bmnroot_Yaopeng/detectors/gem",
"/data/yaopeng/bmnroot_Yaopeng/detectors/sts",
"/data/yaopeng/bmnroot_Yaopeng/detectors/tof",
"/data/yaopeng/bmnroot_Yaopeng/detectors/tof1",
"/data/yaopeng/bmnroot_Yaopeng/detectors/ecal",
"/data/yaopeng/bmnroot_Yaopeng/detectors/zdc",
"/data/yaopeng/bmnroot_Yaopeng/steering",
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/globaltracking",
"/data/yaopeng/bmnroot_Yaopeng/physics/decay",
"/data/yaopeng/bmnroot_Yaopeng/QA",
"/data/yaopeng/bmnroot_Yaopeng/QA/report",
"/data/yaopeng/bmnroot_Yaopeng/QA/offline",
"/home/tools/FairSoft/fairsoft/install/include",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/QA/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__BmnQaDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$BmnRunInfo.h")))  BmnRunInfo;
class __attribute__((annotate("$clingAutoload$BmnReport.h")))  __attribute__((annotate("$clingAutoload$BmnSimulationReport.h")))  BmnReport;
class __attribute__((annotate("$clingAutoload$BmnSimulationReport.h")))  BmnSimulationReport;
class __attribute__((annotate("$clingAutoload$BmnStudyReport.h")))  BmnStudyReport;
class __attribute__((annotate("$clingAutoload$BmnReportElement.h")))  __attribute__((annotate("$clingAutoload$BmnHtmlReportElement.h")))  BmnReportElement;
class __attribute__((annotate("$clingAutoload$BmnHtmlReportElement.h")))  BmnHtmlReportElement;
class __attribute__((annotate("$clingAutoload$BmnDrawOnline.h")))  BmnDrawOnline;
class __attribute__((annotate("$clingAutoload$BmnHistManager.h")))  BmnHistManager;
class __attribute__((annotate("$clingAutoload$PadInfo.h")))  __attribute__((annotate("$clingAutoload$BmnHist.h")))  PadInfo;
class __attribute__((annotate("$clingAutoload$BmnPadBranch.h")))  __attribute__((annotate("$clingAutoload$BmnHist.h")))  BmnPadBranch;
class __attribute__((annotate("$clingAutoload$BmnHist.h")))  BmnHist;
class __attribute__((annotate("$clingAutoload$BmnPadGenerator.h")))  BmnPadGenerator;
class __attribute__((annotate("$clingAutoload$BmnMCPoint.h")))  __attribute__((annotate("$clingAutoload$BmnQaBase.h")))  BmnMCPoint;
class __attribute__((annotate("$clingAutoload$BmnMCTrack.h")))  __attribute__((annotate("$clingAutoload$BmnQaBase.h")))  BmnMCTrack;
class __attribute__((annotate("$clingAutoload$BmnMCTrackCreator.h")))  __attribute__((annotate("$clingAutoload$BmnQaBase.h")))  BmnMCTrackCreator;
class __attribute__((annotate("$clingAutoload$BmnTrackingQaExpReport.h")))  __attribute__((annotate("$clingAutoload$BmnQaBase.h")))  BmnTrackingQaExpReport;
class __attribute__((annotate("$clingAutoload$BmnQaBase.h")))  BmnQaBase;
class __attribute__((annotate("$clingAutoload$BmnPidQa.h")))  BmnPidQa;
class __attribute__((annotate("$clingAutoload$BmnPidQaReport.h")))  BmnPidQaReport;
class __attribute__((annotate("$clingAutoload$BmnTrackingQa.h")))  BmnTrackingQa;
class __attribute__((annotate("$clingAutoload$BmnTrackingQaExp.h")))  BmnTrackingQaExp;
class __attribute__((annotate("$clingAutoload$BmnLambdaQa.h")))  BmnLambdaQa;
class __attribute__((annotate("$clingAutoload$BmnClusteringQa.h")))  BmnClusteringQa;
class __attribute__((annotate("$clingAutoload$BmnTrackingQaReport.h")))  BmnTrackingQaReport;
class __attribute__((annotate("$clingAutoload$BmnLambdaQaReport.h")))  BmnLambdaQaReport;
class __attribute__((annotate("$clingAutoload$BmnClusteringQaReport.h")))  BmnClusteringQaReport;
class __attribute__((annotate("$clingAutoload$BmnCustomQa.h")))  BmnCustomQa;
class __attribute__((annotate("$clingAutoload$BmnAcceptanceFunction.h")))  BmnAcceptanceFunction;
class __attribute__((annotate("$clingAutoload$BmnMatchRecoToMC.h")))  BmnMatchRecoToMC;
class __attribute__((annotate("$clingAutoload$BmnQaHistoManager.h")))  BmnQaHistoManager;
class __attribute__((annotate("$clingAutoload$BmnCoordinateDetQa.h")))  __attribute__((annotate("$clingAutoload$BmnQaOffline.h")))  BmnCoordinateDetQa;
class __attribute__((annotate("$clingAutoload$BmnTimeDetQa.h")))  __attribute__((annotate("$clingAutoload$BmnQaOffline.h")))  BmnTimeDetQa;
class __attribute__((annotate("$clingAutoload$BmnCalorimeterDetQa.h")))  __attribute__((annotate("$clingAutoload$BmnQaOffline.h")))  BmnCalorimeterDetQa;
class __attribute__((annotate("$clingAutoload$BmnTrigDetQa.h")))  __attribute__((annotate("$clingAutoload$BmnQaOffline.h")))  BmnTrigDetQa;
class __attribute__((annotate("$clingAutoload$BmnDstQa.h")))  __attribute__((annotate("$clingAutoload$BmnQaOffline.h")))  BmnDstQa;
class __attribute__((annotate("$clingAutoload$BmnQaOffline.h")))  BmnQaOffline;
class __attribute__((annotate("$clingAutoload$BmnQaMonitor.h")))  AllHistos;
class __attribute__((annotate("$clingAutoload$BmnQaMonitor.h")))  BmnQaMonitor;
class __attribute__((annotate("$clingAutoload$BmnTrackingQaOfflineDraw.h")))  __attribute__((annotate("$clingAutoload$BmnTrackingQaOffline.h")))  BmnTrackingQaOfflineDraw;
class __attribute__((annotate("$clingAutoload$BmnTrackingQaOffline.h")))  BmnTrackingQaOffline;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__BmnQaDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "BmnRunInfo.h"
#include "BmnSimulationReport.h"
#include "BmnStudyReport.h"
#include "BmnHtmlReportElement.h"
#include "BmnReport.h"
#include "BmnDrawHist.h"
#include "BmnDrawOnline.h"
#include "BmnHistManager.h"
#include "BmnSimulationReport.h"
#include "BmnReportElement.h"
#include "BmnHist.h"
#include "PadInfo.h"
#include "BmnPadBranch.h"
#include "BmnPadGenerator.h"
#include "BmnQaBase.h"
#include "BmnPidQa.h"
#include "BmnPidQaReport.h"
#include "BmnTrackingQa.h"
#include "BmnTrackingQaExp.h"
#include "BmnLambdaQa.h"
#include "BmnClusteringQa.h"
#include "BmnUtils.h"
#include "BmnTrackingQaReport.h"
#include "BmnTrackingQaExpReport.h"
#include "BmnLambdaQaReport.h"
#include "BmnClusteringQaReport.h"
#include "BmnCustomQa.h"
#include "BmnMCTrack.h"
#include "BmnMCTrackCreator.h"
#include "BmnAcceptanceFunction.h"
#include "BmnMCPoint.h"
#include "BmnMatchRecoToMC.h"
#include "BmnQaHistoManager.h"
#include "BmnQaOffline.h"
#include "BmnCoordinateDetQa.h"
#include "BmnTimeDetQa.h"
#include "BmnCalorimeterDetQa.h"
#include "BmnTrigDetQa.h"
#include "BmnDstQa.h"
#include "BmnQaMonitor.h"
#include "BmnTrackingQaOffline.h"
#include "BmnTrackingQaOfflineDraw.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"AllHistos", payloadCode, "@",
"BmnAcceptanceFunction", payloadCode, "@",
"BmnCalorimeterDetQa", payloadCode, "@",
"BmnClusteringQa", payloadCode, "@",
"BmnClusteringQaReport", payloadCode, "@",
"BmnCoordinateDetQa", payloadCode, "@",
"BmnCustomQa", payloadCode, "@",
"BmnDrawOnline", payloadCode, "@",
"BmnDstQa", payloadCode, "@",
"BmnHist", payloadCode, "@",
"BmnHistManager", payloadCode, "@",
"BmnHtmlReportElement", payloadCode, "@",
"BmnLambdaQa", payloadCode, "@",
"BmnLambdaQaReport", payloadCode, "@",
"BmnMCPoint", payloadCode, "@",
"BmnMCTrack", payloadCode, "@",
"BmnMCTrackCreator", payloadCode, "@",
"BmnMatchRecoToMC", payloadCode, "@",
"BmnPadBranch", payloadCode, "@",
"BmnPadGenerator", payloadCode, "@",
"BmnPidQa", payloadCode, "@",
"BmnPidQaReport", payloadCode, "@",
"BmnQaBase", payloadCode, "@",
"BmnQaHistoManager", payloadCode, "@",
"BmnQaMonitor", payloadCode, "@",
"BmnQaOffline", payloadCode, "@",
"BmnReport", payloadCode, "@",
"BmnReportElement", payloadCode, "@",
"BmnRunInfo", payloadCode, "@",
"BmnSimulationReport", payloadCode, "@",
"BmnStudyReport", payloadCode, "@",
"BmnTimeDetQa", payloadCode, "@",
"BmnTrackingQa", payloadCode, "@",
"BmnTrackingQaExp", payloadCode, "@",
"BmnTrackingQaExpReport", payloadCode, "@",
"BmnTrackingQaOffline", payloadCode, "@",
"BmnTrackingQaOfflineDraw", payloadCode, "@",
"BmnTrackingQaReport", payloadCode, "@",
"BmnTrigDetQa", payloadCode, "@",
"PadInfo", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__BmnQaDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__BmnQaDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__BmnQaDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__BmnQaDict() {
  TriggerDictionaryInitialization_G__BmnQaDict_Impl();
}
