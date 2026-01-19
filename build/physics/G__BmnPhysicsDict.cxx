// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIphysicsdIG__BmnPhysicsDict
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
#include "BmnTwoParticleDecay.h"
#include "BmnParticlePair.h"
#include "BmnParticlePairsInfo.h"
#include "BmnParticlePairCut.h"
#include "BmnMassSpectrumAnal.h"
#include "BmnEfficiency.h"
#include "BmnEfficiencyProbability.h"
#include "BmnRealisticMc.h"
#include "BmnEfficiencyTools.h"
#include "BmnDataTriggerInfo.h"
#include "BmnLambdaEmbeddingMonitor.h"
#include "BmnParticleStore.h"
#include "BmnLambdaEmbeddingQa.h"
#include "BmnLambdaEmbeddingDrawHistos.h"
#include "BmnLambdaMisc.h"
#include "BmnInnerTrackerGeometryDraw.h"
#include "BmnLambdaEmbedding.h"
#include "BmnLambdaAnalRun7.h"
#include "BmnDataAnalRun7.h"
#include "BmnTriggerEfficiencyRun7.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BmnParticlePair(void *p = nullptr);
   static void *newArray_BmnParticlePair(Long_t size, void *p);
   static void delete_BmnParticlePair(void *p);
   static void deleteArray_BmnParticlePair(void *p);
   static void destruct_BmnParticlePair(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnParticlePair*)
   {
      ::BmnParticlePair *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnParticlePair >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnParticlePair", ::BmnParticlePair::Class_Version(), "BmnParticlePair.h", 21,
                  typeid(::BmnParticlePair), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnParticlePair::Dictionary, isa_proxy, 4,
                  sizeof(::BmnParticlePair) );
      instance.SetNew(&new_BmnParticlePair);
      instance.SetNewArray(&newArray_BmnParticlePair);
      instance.SetDelete(&delete_BmnParticlePair);
      instance.SetDeleteArray(&deleteArray_BmnParticlePair);
      instance.SetDestructor(&destruct_BmnParticlePair);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnParticlePair*)
   {
      return GenerateInitInstanceLocal((::BmnParticlePair*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnParticlePair*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DstEventHeaderExtended(void *p = nullptr);
   static void *newArray_DstEventHeaderExtended(Long_t size, void *p);
   static void delete_DstEventHeaderExtended(void *p);
   static void deleteArray_DstEventHeaderExtended(void *p);
   static void destruct_DstEventHeaderExtended(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DstEventHeaderExtended*)
   {
      ::DstEventHeaderExtended *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DstEventHeaderExtended >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("DstEventHeaderExtended", ::DstEventHeaderExtended::Class_Version(), "BmnTwoParticleDecay.h", 56,
                  typeid(::DstEventHeaderExtended), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DstEventHeaderExtended::Dictionary, isa_proxy, 4,
                  sizeof(::DstEventHeaderExtended) );
      instance.SetNew(&new_DstEventHeaderExtended);
      instance.SetNewArray(&newArray_DstEventHeaderExtended);
      instance.SetDelete(&delete_DstEventHeaderExtended);
      instance.SetDeleteArray(&deleteArray_DstEventHeaderExtended);
      instance.SetDestructor(&destruct_DstEventHeaderExtended);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DstEventHeaderExtended*)
   {
      return GenerateInitInstanceLocal((::DstEventHeaderExtended*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DstEventHeaderExtended*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTwoParticleDecay(void *p = nullptr);
   static void *newArray_BmnTwoParticleDecay(Long_t size, void *p);
   static void delete_BmnTwoParticleDecay(void *p);
   static void deleteArray_BmnTwoParticleDecay(void *p);
   static void destruct_BmnTwoParticleDecay(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTwoParticleDecay*)
   {
      ::BmnTwoParticleDecay *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTwoParticleDecay >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTwoParticleDecay", ::BmnTwoParticleDecay::Class_Version(), "BmnTwoParticleDecay.h", 130,
                  typeid(::BmnTwoParticleDecay), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTwoParticleDecay::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTwoParticleDecay) );
      instance.SetNew(&new_BmnTwoParticleDecay);
      instance.SetNewArray(&newArray_BmnTwoParticleDecay);
      instance.SetDelete(&delete_BmnTwoParticleDecay);
      instance.SetDeleteArray(&deleteArray_BmnTwoParticleDecay);
      instance.SetDestructor(&destruct_BmnTwoParticleDecay);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTwoParticleDecay*)
   {
      return GenerateInitInstanceLocal((::BmnTwoParticleDecay*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTwoParticleDecay*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnParticlePairsInfo(void *p = nullptr);
   static void *newArray_BmnParticlePairsInfo(Long_t size, void *p);
   static void delete_BmnParticlePairsInfo(void *p);
   static void deleteArray_BmnParticlePairsInfo(void *p);
   static void destruct_BmnParticlePairsInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnParticlePairsInfo*)
   {
      ::BmnParticlePairsInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnParticlePairsInfo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnParticlePairsInfo", ::BmnParticlePairsInfo::Class_Version(), "BmnParticlePairsInfo.h", 22,
                  typeid(::BmnParticlePairsInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnParticlePairsInfo::Dictionary, isa_proxy, 4,
                  sizeof(::BmnParticlePairsInfo) );
      instance.SetNew(&new_BmnParticlePairsInfo);
      instance.SetNewArray(&newArray_BmnParticlePairsInfo);
      instance.SetDelete(&delete_BmnParticlePairsInfo);
      instance.SetDeleteArray(&deleteArray_BmnParticlePairsInfo);
      instance.SetDestructor(&destruct_BmnParticlePairsInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnParticlePairsInfo*)
   {
      return GenerateInitInstanceLocal((::BmnParticlePairsInfo*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnParticlePairsInfo*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnParticlePairCut(void *p = nullptr);
   static void *newArray_BmnParticlePairCut(Long_t size, void *p);
   static void delete_BmnParticlePairCut(void *p);
   static void deleteArray_BmnParticlePairCut(void *p);
   static void destruct_BmnParticlePairCut(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnParticlePairCut*)
   {
      ::BmnParticlePairCut *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnParticlePairCut >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnParticlePairCut", ::BmnParticlePairCut::Class_Version(), "BmnParticlePairCut.h", 7,
                  typeid(::BmnParticlePairCut), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnParticlePairCut::Dictionary, isa_proxy, 4,
                  sizeof(::BmnParticlePairCut) );
      instance.SetNew(&new_BmnParticlePairCut);
      instance.SetNewArray(&newArray_BmnParticlePairCut);
      instance.SetDelete(&delete_BmnParticlePairCut);
      instance.SetDeleteArray(&deleteArray_BmnParticlePairCut);
      instance.SetDestructor(&destruct_BmnParticlePairCut);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnParticlePairCut*)
   {
      return GenerateInitInstanceLocal((::BmnParticlePairCut*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnParticlePairCut*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMassSpectrumAnal(void *p = nullptr);
   static void *newArray_BmnMassSpectrumAnal(Long_t size, void *p);
   static void delete_BmnMassSpectrumAnal(void *p);
   static void deleteArray_BmnMassSpectrumAnal(void *p);
   static void destruct_BmnMassSpectrumAnal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMassSpectrumAnal*)
   {
      ::BmnMassSpectrumAnal *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMassSpectrumAnal >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMassSpectrumAnal", ::BmnMassSpectrumAnal::Class_Version(), "BmnMassSpectrumAnal.h", 28,
                  typeid(::BmnMassSpectrumAnal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMassSpectrumAnal::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMassSpectrumAnal) );
      instance.SetNew(&new_BmnMassSpectrumAnal);
      instance.SetNewArray(&newArray_BmnMassSpectrumAnal);
      instance.SetDelete(&delete_BmnMassSpectrumAnal);
      instance.SetDeleteArray(&deleteArray_BmnMassSpectrumAnal);
      instance.SetDestructor(&destruct_BmnMassSpectrumAnal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMassSpectrumAnal*)
   {
      return GenerateInitInstanceLocal((::BmnMassSpectrumAnal*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMassSpectrumAnal*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnInnerTrackerGeometryDraw(void *p = nullptr);
   static void *newArray_BmnInnerTrackerGeometryDraw(Long_t size, void *p);
   static void delete_BmnInnerTrackerGeometryDraw(void *p);
   static void deleteArray_BmnInnerTrackerGeometryDraw(void *p);
   static void destruct_BmnInnerTrackerGeometryDraw(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnInnerTrackerGeometryDraw*)
   {
      ::BmnInnerTrackerGeometryDraw *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnInnerTrackerGeometryDraw >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnInnerTrackerGeometryDraw", ::BmnInnerTrackerGeometryDraw::Class_Version(), "BmnInnerTrackerGeometryDraw.h", 23,
                  typeid(::BmnInnerTrackerGeometryDraw), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnInnerTrackerGeometryDraw::Dictionary, isa_proxy, 4,
                  sizeof(::BmnInnerTrackerGeometryDraw) );
      instance.SetNew(&new_BmnInnerTrackerGeometryDraw);
      instance.SetNewArray(&newArray_BmnInnerTrackerGeometryDraw);
      instance.SetDelete(&delete_BmnInnerTrackerGeometryDraw);
      instance.SetDeleteArray(&deleteArray_BmnInnerTrackerGeometryDraw);
      instance.SetDestructor(&destruct_BmnInnerTrackerGeometryDraw);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnInnerTrackerGeometryDraw*)
   {
      return GenerateInitInstanceLocal((::BmnInnerTrackerGeometryDraw*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnInnerTrackerGeometryDraw*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EffStore(void *p = nullptr);
   static void *newArray_EffStore(Long_t size, void *p);
   static void delete_EffStore(void *p);
   static void deleteArray_EffStore(void *p);
   static void destruct_EffStore(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EffStore*)
   {
      ::EffStore *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EffStore >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EffStore", ::EffStore::Class_Version(), "BmnEfficiency.h", 32,
                  typeid(::EffStore), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EffStore::Dictionary, isa_proxy, 4,
                  sizeof(::EffStore) );
      instance.SetNew(&new_EffStore);
      instance.SetNewArray(&newArray_EffStore);
      instance.SetDelete(&delete_EffStore);
      instance.SetDeleteArray(&deleteArray_EffStore);
      instance.SetDestructor(&destruct_EffStore);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EffStore*)
   {
      return GenerateInitInstanceLocal((::EffStore*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::EffStore*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_InnerTrackerParams(void *p = nullptr);
   static void *newArray_InnerTrackerParams(Long_t size, void *p);
   static void delete_InnerTrackerParams(void *p);
   static void deleteArray_InnerTrackerParams(void *p);
   static void destruct_InnerTrackerParams(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::InnerTrackerParams*)
   {
      ::InnerTrackerParams *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::InnerTrackerParams >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("InnerTrackerParams", ::InnerTrackerParams::Class_Version(), "BmnEfficiency.h", 181,
                  typeid(::InnerTrackerParams), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::InnerTrackerParams::Dictionary, isa_proxy, 4,
                  sizeof(::InnerTrackerParams) );
      instance.SetNew(&new_InnerTrackerParams);
      instance.SetNewArray(&newArray_InnerTrackerParams);
      instance.SetDelete(&delete_InnerTrackerParams);
      instance.SetDeleteArray(&deleteArray_InnerTrackerParams);
      instance.SetDestructor(&destruct_InnerTrackerParams);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::InnerTrackerParams*)
   {
      return GenerateInitInstanceLocal((::InnerTrackerParams*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::InnerTrackerParams*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EffStore2D(void *p = nullptr);
   static void *newArray_EffStore2D(Long_t size, void *p);
   static void delete_EffStore2D(void *p);
   static void deleteArray_EffStore2D(void *p);
   static void destruct_EffStore2D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EffStore2D*)
   {
      ::EffStore2D *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EffStore2D >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EffStore2D", ::EffStore2D::Class_Version(), "BmnEfficiency.h", 261,
                  typeid(::EffStore2D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EffStore2D::Dictionary, isa_proxy, 4,
                  sizeof(::EffStore2D) );
      instance.SetNew(&new_EffStore2D);
      instance.SetNewArray(&newArray_EffStore2D);
      instance.SetDelete(&delete_EffStore2D);
      instance.SetDeleteArray(&deleteArray_EffStore2D);
      instance.SetDestructor(&destruct_EffStore2D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EffStore2D*)
   {
      return GenerateInitInstanceLocal((::EffStore2D*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::EffStore2D*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Residuals(void *p = nullptr);
   static void *newArray_Residuals(Long_t size, void *p);
   static void delete_Residuals(void *p);
   static void deleteArray_Residuals(void *p);
   static void destruct_Residuals(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Residuals*)
   {
      ::Residuals *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Residuals >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("Residuals", ::Residuals::Class_Version(), "BmnEfficiency.h", 439,
                  typeid(::Residuals), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Residuals::Dictionary, isa_proxy, 4,
                  sizeof(::Residuals) );
      instance.SetNew(&new_Residuals);
      instance.SetNewArray(&newArray_Residuals);
      instance.SetDelete(&delete_Residuals);
      instance.SetDeleteArray(&deleteArray_Residuals);
      instance.SetDestructor(&destruct_Residuals);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Residuals*)
   {
      return GenerateInitInstanceLocal((::Residuals*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Residuals*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnEfficiency(void *p = nullptr);
   static void *newArray_BmnEfficiency(Long_t size, void *p);
   static void delete_BmnEfficiency(void *p);
   static void deleteArray_BmnEfficiency(void *p);
   static void destruct_BmnEfficiency(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnEfficiency*)
   {
      ::BmnEfficiency *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnEfficiency >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnEfficiency", ::BmnEfficiency::Class_Version(), "BmnEfficiency.h", 480,
                  typeid(::BmnEfficiency), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnEfficiency::Dictionary, isa_proxy, 4,
                  sizeof(::BmnEfficiency) );
      instance.SetNew(&new_BmnEfficiency);
      instance.SetNewArray(&newArray_BmnEfficiency);
      instance.SetDelete(&delete_BmnEfficiency);
      instance.SetDeleteArray(&deleteArray_BmnEfficiency);
      instance.SetDestructor(&destruct_BmnEfficiency);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnEfficiency*)
   {
      return GenerateInitInstanceLocal((::BmnEfficiency*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnEfficiency*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnEfficiencyProbability(void *p = nullptr);
   static void *newArray_BmnEfficiencyProbability(Long_t size, void *p);
   static void delete_BmnEfficiencyProbability(void *p);
   static void deleteArray_BmnEfficiencyProbability(void *p);
   static void destruct_BmnEfficiencyProbability(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnEfficiencyProbability*)
   {
      ::BmnEfficiencyProbability *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnEfficiencyProbability >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnEfficiencyProbability", ::BmnEfficiencyProbability::Class_Version(), "BmnEfficiencyProbability.h", 18,
                  typeid(::BmnEfficiencyProbability), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnEfficiencyProbability::Dictionary, isa_proxy, 4,
                  sizeof(::BmnEfficiencyProbability) );
      instance.SetNew(&new_BmnEfficiencyProbability);
      instance.SetNewArray(&newArray_BmnEfficiencyProbability);
      instance.SetDelete(&delete_BmnEfficiencyProbability);
      instance.SetDeleteArray(&deleteArray_BmnEfficiencyProbability);
      instance.SetDestructor(&destruct_BmnEfficiencyProbability);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnEfficiencyProbability*)
   {
      return GenerateInitInstanceLocal((::BmnEfficiencyProbability*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnEfficiencyProbability*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnRealisticMc(void *p = nullptr);
   static void *newArray_BmnRealisticMc(Long_t size, void *p);
   static void delete_BmnRealisticMc(void *p);
   static void deleteArray_BmnRealisticMc(void *p);
   static void destruct_BmnRealisticMc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnRealisticMc*)
   {
      ::BmnRealisticMc *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnRealisticMc >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnRealisticMc", ::BmnRealisticMc::Class_Version(), "BmnRealisticMc.h", 17,
                  typeid(::BmnRealisticMc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnRealisticMc::Dictionary, isa_proxy, 4,
                  sizeof(::BmnRealisticMc) );
      instance.SetNew(&new_BmnRealisticMc);
      instance.SetNewArray(&newArray_BmnRealisticMc);
      instance.SetDelete(&delete_BmnRealisticMc);
      instance.SetDeleteArray(&deleteArray_BmnRealisticMc);
      instance.SetDestructor(&destruct_BmnRealisticMc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnRealisticMc*)
   {
      return GenerateInitInstanceLocal((::BmnRealisticMc*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnRealisticMc*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnDataTriggerInfo(void *p = nullptr);
   static void *newArray_BmnDataTriggerInfo(Long_t size, void *p);
   static void delete_BmnDataTriggerInfo(void *p);
   static void deleteArray_BmnDataTriggerInfo(void *p);
   static void destruct_BmnDataTriggerInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnDataTriggerInfo*)
   {
      ::BmnDataTriggerInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnDataTriggerInfo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnDataTriggerInfo", ::BmnDataTriggerInfo::Class_Version(), "BmnDataTriggerInfo.h", 14,
                  typeid(::BmnDataTriggerInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnDataTriggerInfo::Dictionary, isa_proxy, 4,
                  sizeof(::BmnDataTriggerInfo) );
      instance.SetNew(&new_BmnDataTriggerInfo);
      instance.SetNewArray(&newArray_BmnDataTriggerInfo);
      instance.SetDelete(&delete_BmnDataTriggerInfo);
      instance.SetDeleteArray(&deleteArray_BmnDataTriggerInfo);
      instance.SetDestructor(&destruct_BmnDataTriggerInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnDataTriggerInfo*)
   {
      return GenerateInitInstanceLocal((::BmnDataTriggerInfo*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnDataTriggerInfo*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnEfficiencyTools(void *p = nullptr);
   static void *newArray_BmnEfficiencyTools(Long_t size, void *p);
   static void delete_BmnEfficiencyTools(void *p);
   static void deleteArray_BmnEfficiencyTools(void *p);
   static void destruct_BmnEfficiencyTools(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnEfficiencyTools*)
   {
      ::BmnEfficiencyTools *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnEfficiencyTools >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnEfficiencyTools", ::BmnEfficiencyTools::Class_Version(), "BmnEfficiencyTools.h", 20,
                  typeid(::BmnEfficiencyTools), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnEfficiencyTools::Dictionary, isa_proxy, 4,
                  sizeof(::BmnEfficiencyTools) );
      instance.SetNew(&new_BmnEfficiencyTools);
      instance.SetNewArray(&newArray_BmnEfficiencyTools);
      instance.SetDelete(&delete_BmnEfficiencyTools);
      instance.SetDeleteArray(&deleteArray_BmnEfficiencyTools);
      instance.SetDestructor(&destruct_BmnEfficiencyTools);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnEfficiencyTools*)
   {
      return GenerateInitInstanceLocal((::BmnEfficiencyTools*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnEfficiencyTools*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnLambdaEmbeddingMonitor(void *p = nullptr);
   static void *newArray_BmnLambdaEmbeddingMonitor(Long_t size, void *p);
   static void delete_BmnLambdaEmbeddingMonitor(void *p);
   static void deleteArray_BmnLambdaEmbeddingMonitor(void *p);
   static void destruct_BmnLambdaEmbeddingMonitor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnLambdaEmbeddingMonitor*)
   {
      ::BmnLambdaEmbeddingMonitor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnLambdaEmbeddingMonitor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnLambdaEmbeddingMonitor", ::BmnLambdaEmbeddingMonitor::Class_Version(), "BmnLambdaEmbeddingMonitor.h", 7,
                  typeid(::BmnLambdaEmbeddingMonitor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnLambdaEmbeddingMonitor::Dictionary, isa_proxy, 4,
                  sizeof(::BmnLambdaEmbeddingMonitor) );
      instance.SetNew(&new_BmnLambdaEmbeddingMonitor);
      instance.SetNewArray(&newArray_BmnLambdaEmbeddingMonitor);
      instance.SetDelete(&delete_BmnLambdaEmbeddingMonitor);
      instance.SetDeleteArray(&deleteArray_BmnLambdaEmbeddingMonitor);
      instance.SetDestructor(&destruct_BmnLambdaEmbeddingMonitor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnLambdaEmbeddingMonitor*)
   {
      return GenerateInitInstanceLocal((::BmnLambdaEmbeddingMonitor*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnLambdaEmbeddingMonitor*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnParticleStore(void *p = nullptr);
   static void *newArray_BmnParticleStore(Long_t size, void *p);
   static void delete_BmnParticleStore(void *p);
   static void deleteArray_BmnParticleStore(void *p);
   static void destruct_BmnParticleStore(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnParticleStore*)
   {
      ::BmnParticleStore *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnParticleStore >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnParticleStore", ::BmnParticleStore::Class_Version(), "BmnParticleStore.h", 10,
                  typeid(::BmnParticleStore), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnParticleStore::Dictionary, isa_proxy, 4,
                  sizeof(::BmnParticleStore) );
      instance.SetNew(&new_BmnParticleStore);
      instance.SetNewArray(&newArray_BmnParticleStore);
      instance.SetDelete(&delete_BmnParticleStore);
      instance.SetDeleteArray(&deleteArray_BmnParticleStore);
      instance.SetDestructor(&destruct_BmnParticleStore);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnParticleStore*)
   {
      return GenerateInitInstanceLocal((::BmnParticleStore*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnParticleStore*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnLambdaMisc(void *p = nullptr);
   static void *newArray_BmnLambdaMisc(Long_t size, void *p);
   static void delete_BmnLambdaMisc(void *p);
   static void deleteArray_BmnLambdaMisc(void *p);
   static void destruct_BmnLambdaMisc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnLambdaMisc*)
   {
      ::BmnLambdaMisc *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnLambdaMisc >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnLambdaMisc", ::BmnLambdaMisc::Class_Version(), "BmnLambdaMisc.h", 82,
                  typeid(::BmnLambdaMisc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnLambdaMisc::Dictionary, isa_proxy, 4,
                  sizeof(::BmnLambdaMisc) );
      instance.SetNew(&new_BmnLambdaMisc);
      instance.SetNewArray(&newArray_BmnLambdaMisc);
      instance.SetDelete(&delete_BmnLambdaMisc);
      instance.SetDeleteArray(&deleteArray_BmnLambdaMisc);
      instance.SetDestructor(&destruct_BmnLambdaMisc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnLambdaMisc*)
   {
      return GenerateInitInstanceLocal((::BmnLambdaMisc*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnLambdaMisc*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnLambdaEmbeddingDrawHistos(void *p = nullptr);
   static void *newArray_BmnLambdaEmbeddingDrawHistos(Long_t size, void *p);
   static void delete_BmnLambdaEmbeddingDrawHistos(void *p);
   static void deleteArray_BmnLambdaEmbeddingDrawHistos(void *p);
   static void destruct_BmnLambdaEmbeddingDrawHistos(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnLambdaEmbeddingDrawHistos*)
   {
      ::BmnLambdaEmbeddingDrawHistos *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnLambdaEmbeddingDrawHistos >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnLambdaEmbeddingDrawHistos", ::BmnLambdaEmbeddingDrawHistos::Class_Version(), "BmnLambdaEmbeddingDrawHistos.h", 100,
                  typeid(::BmnLambdaEmbeddingDrawHistos), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnLambdaEmbeddingDrawHistos::Dictionary, isa_proxy, 4,
                  sizeof(::BmnLambdaEmbeddingDrawHistos) );
      instance.SetNew(&new_BmnLambdaEmbeddingDrawHistos);
      instance.SetNewArray(&newArray_BmnLambdaEmbeddingDrawHistos);
      instance.SetDelete(&delete_BmnLambdaEmbeddingDrawHistos);
      instance.SetDeleteArray(&deleteArray_BmnLambdaEmbeddingDrawHistos);
      instance.SetDestructor(&destruct_BmnLambdaEmbeddingDrawHistos);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnLambdaEmbeddingDrawHistos*)
   {
      return GenerateInitInstanceLocal((::BmnLambdaEmbeddingDrawHistos*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnLambdaEmbeddingDrawHistos*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnLambdaEmbeddingQa(void *p = nullptr);
   static void *newArray_BmnLambdaEmbeddingQa(Long_t size, void *p);
   static void delete_BmnLambdaEmbeddingQa(void *p);
   static void deleteArray_BmnLambdaEmbeddingQa(void *p);
   static void destruct_BmnLambdaEmbeddingQa(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnLambdaEmbeddingQa*)
   {
      ::BmnLambdaEmbeddingQa *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnLambdaEmbeddingQa >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnLambdaEmbeddingQa", ::BmnLambdaEmbeddingQa::Class_Version(), "BmnLambdaEmbeddingQa.h", 51,
                  typeid(::BmnLambdaEmbeddingQa), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnLambdaEmbeddingQa::Dictionary, isa_proxy, 4,
                  sizeof(::BmnLambdaEmbeddingQa) );
      instance.SetNew(&new_BmnLambdaEmbeddingQa);
      instance.SetNewArray(&newArray_BmnLambdaEmbeddingQa);
      instance.SetDelete(&delete_BmnLambdaEmbeddingQa);
      instance.SetDeleteArray(&deleteArray_BmnLambdaEmbeddingQa);
      instance.SetDestructor(&destruct_BmnLambdaEmbeddingQa);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnLambdaEmbeddingQa*)
   {
      return GenerateInitInstanceLocal((::BmnLambdaEmbeddingQa*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnLambdaEmbeddingQa*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnLambdaEmbedding(void *p = nullptr);
   static void *newArray_BmnLambdaEmbedding(Long_t size, void *p);
   static void delete_BmnLambdaEmbedding(void *p);
   static void deleteArray_BmnLambdaEmbedding(void *p);
   static void destruct_BmnLambdaEmbedding(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnLambdaEmbedding*)
   {
      ::BmnLambdaEmbedding *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnLambdaEmbedding >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnLambdaEmbedding", ::BmnLambdaEmbedding::Class_Version(), "BmnLambdaEmbedding.h", 139,
                  typeid(::BmnLambdaEmbedding), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnLambdaEmbedding::Dictionary, isa_proxy, 4,
                  sizeof(::BmnLambdaEmbedding) );
      instance.SetNew(&new_BmnLambdaEmbedding);
      instance.SetNewArray(&newArray_BmnLambdaEmbedding);
      instance.SetDelete(&delete_BmnLambdaEmbedding);
      instance.SetDeleteArray(&deleteArray_BmnLambdaEmbedding);
      instance.SetDestructor(&destruct_BmnLambdaEmbedding);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnLambdaEmbedding*)
   {
      return GenerateInitInstanceLocal((::BmnLambdaEmbedding*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnLambdaEmbedding*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TriggerEfficiency(void *p = nullptr);
   static void *newArray_TriggerEfficiency(Long_t size, void *p);
   static void delete_TriggerEfficiency(void *p);
   static void deleteArray_TriggerEfficiency(void *p);
   static void destruct_TriggerEfficiency(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TriggerEfficiency*)
   {
      ::TriggerEfficiency *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TriggerEfficiency >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TriggerEfficiency", ::TriggerEfficiency::Class_Version(), "BmnLambdaAnalRun7.h", 26,
                  typeid(::TriggerEfficiency), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TriggerEfficiency::Dictionary, isa_proxy, 4,
                  sizeof(::TriggerEfficiency) );
      instance.SetNew(&new_TriggerEfficiency);
      instance.SetNewArray(&newArray_TriggerEfficiency);
      instance.SetDelete(&delete_TriggerEfficiency);
      instance.SetDeleteArray(&deleteArray_TriggerEfficiency);
      instance.SetDestructor(&destruct_TriggerEfficiency);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TriggerEfficiency*)
   {
      return GenerateInitInstanceLocal((::TriggerEfficiency*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TriggerEfficiency*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnLambdaAnalRun7(void *p = nullptr);
   static void *newArray_BmnLambdaAnalRun7(Long_t size, void *p);
   static void delete_BmnLambdaAnalRun7(void *p);
   static void deleteArray_BmnLambdaAnalRun7(void *p);
   static void destruct_BmnLambdaAnalRun7(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnLambdaAnalRun7*)
   {
      ::BmnLambdaAnalRun7 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnLambdaAnalRun7 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnLambdaAnalRun7", ::BmnLambdaAnalRun7::Class_Version(), "BmnLambdaAnalRun7.h", 77,
                  typeid(::BmnLambdaAnalRun7), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnLambdaAnalRun7::Dictionary, isa_proxy, 4,
                  sizeof(::BmnLambdaAnalRun7) );
      instance.SetNew(&new_BmnLambdaAnalRun7);
      instance.SetNewArray(&newArray_BmnLambdaAnalRun7);
      instance.SetDelete(&delete_BmnLambdaAnalRun7);
      instance.SetDeleteArray(&deleteArray_BmnLambdaAnalRun7);
      instance.SetDestructor(&destruct_BmnLambdaAnalRun7);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnLambdaAnalRun7*)
   {
      return GenerateInitInstanceLocal((::BmnLambdaAnalRun7*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnLambdaAnalRun7*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnDataAnalRun7(void *p = nullptr);
   static void *newArray_BmnDataAnalRun7(Long_t size, void *p);
   static void delete_BmnDataAnalRun7(void *p);
   static void deleteArray_BmnDataAnalRun7(void *p);
   static void destruct_BmnDataAnalRun7(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnDataAnalRun7*)
   {
      ::BmnDataAnalRun7 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnDataAnalRun7 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnDataAnalRun7", ::BmnDataAnalRun7::Class_Version(), "BmnDataAnalRun7.h", 12,
                  typeid(::BmnDataAnalRun7), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnDataAnalRun7::Dictionary, isa_proxy, 4,
                  sizeof(::BmnDataAnalRun7) );
      instance.SetNew(&new_BmnDataAnalRun7);
      instance.SetNewArray(&newArray_BmnDataAnalRun7);
      instance.SetDelete(&delete_BmnDataAnalRun7);
      instance.SetDeleteArray(&deleteArray_BmnDataAnalRun7);
      instance.SetDestructor(&destruct_BmnDataAnalRun7);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnDataAnalRun7*)
   {
      return GenerateInitInstanceLocal((::BmnDataAnalRun7*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnDataAnalRun7*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTriggerEfficiencyRun7(void *p = nullptr);
   static void *newArray_BmnTriggerEfficiencyRun7(Long_t size, void *p);
   static void delete_BmnTriggerEfficiencyRun7(void *p);
   static void deleteArray_BmnTriggerEfficiencyRun7(void *p);
   static void destruct_BmnTriggerEfficiencyRun7(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTriggerEfficiencyRun7*)
   {
      ::BmnTriggerEfficiencyRun7 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTriggerEfficiencyRun7 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTriggerEfficiencyRun7", ::BmnTriggerEfficiencyRun7::Class_Version(), "BmnTriggerEfficiencyRun7.h", 12,
                  typeid(::BmnTriggerEfficiencyRun7), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTriggerEfficiencyRun7::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTriggerEfficiencyRun7) );
      instance.SetNew(&new_BmnTriggerEfficiencyRun7);
      instance.SetNewArray(&newArray_BmnTriggerEfficiencyRun7);
      instance.SetDelete(&delete_BmnTriggerEfficiencyRun7);
      instance.SetDeleteArray(&deleteArray_BmnTriggerEfficiencyRun7);
      instance.SetDestructor(&destruct_BmnTriggerEfficiencyRun7);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTriggerEfficiencyRun7*)
   {
      return GenerateInitInstanceLocal((::BmnTriggerEfficiencyRun7*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTriggerEfficiencyRun7*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnParticlePair::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnParticlePair::Class_Name()
{
   return "BmnParticlePair";
}

//______________________________________________________________________________
const char *BmnParticlePair::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnParticlePair*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnParticlePair::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnParticlePair*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnParticlePair::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnParticlePair*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnParticlePair::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnParticlePair*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DstEventHeaderExtended::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *DstEventHeaderExtended::Class_Name()
{
   return "DstEventHeaderExtended";
}

//______________________________________________________________________________
const char *DstEventHeaderExtended::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DstEventHeaderExtended*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int DstEventHeaderExtended::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DstEventHeaderExtended*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DstEventHeaderExtended::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DstEventHeaderExtended*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DstEventHeaderExtended::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DstEventHeaderExtended*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTwoParticleDecay::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTwoParticleDecay::Class_Name()
{
   return "BmnTwoParticleDecay";
}

//______________________________________________________________________________
const char *BmnTwoParticleDecay::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTwoParticleDecay*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTwoParticleDecay::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTwoParticleDecay*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTwoParticleDecay::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTwoParticleDecay*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTwoParticleDecay::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTwoParticleDecay*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnParticlePairsInfo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnParticlePairsInfo::Class_Name()
{
   return "BmnParticlePairsInfo";
}

//______________________________________________________________________________
const char *BmnParticlePairsInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnParticlePairsInfo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnParticlePairsInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnParticlePairsInfo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnParticlePairsInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnParticlePairsInfo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnParticlePairsInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnParticlePairsInfo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnParticlePairCut::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnParticlePairCut::Class_Name()
{
   return "BmnParticlePairCut";
}

//______________________________________________________________________________
const char *BmnParticlePairCut::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnParticlePairCut*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnParticlePairCut::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnParticlePairCut*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnParticlePairCut::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnParticlePairCut*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnParticlePairCut::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnParticlePairCut*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMassSpectrumAnal::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMassSpectrumAnal::Class_Name()
{
   return "BmnMassSpectrumAnal";
}

//______________________________________________________________________________
const char *BmnMassSpectrumAnal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMassSpectrumAnal*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMassSpectrumAnal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMassSpectrumAnal*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMassSpectrumAnal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMassSpectrumAnal*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMassSpectrumAnal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMassSpectrumAnal*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnInnerTrackerGeometryDraw::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnInnerTrackerGeometryDraw::Class_Name()
{
   return "BmnInnerTrackerGeometryDraw";
}

//______________________________________________________________________________
const char *BmnInnerTrackerGeometryDraw::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnInnerTrackerGeometryDraw*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnInnerTrackerGeometryDraw::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnInnerTrackerGeometryDraw*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnInnerTrackerGeometryDraw::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnInnerTrackerGeometryDraw*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnInnerTrackerGeometryDraw::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnInnerTrackerGeometryDraw*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EffStore::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EffStore::Class_Name()
{
   return "EffStore";
}

//______________________________________________________________________________
const char *EffStore::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EffStore*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EffStore::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EffStore*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EffStore::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EffStore*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EffStore::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EffStore*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr InnerTrackerParams::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *InnerTrackerParams::Class_Name()
{
   return "InnerTrackerParams";
}

//______________________________________________________________________________
const char *InnerTrackerParams::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::InnerTrackerParams*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int InnerTrackerParams::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::InnerTrackerParams*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *InnerTrackerParams::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::InnerTrackerParams*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *InnerTrackerParams::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::InnerTrackerParams*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EffStore2D::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EffStore2D::Class_Name()
{
   return "EffStore2D";
}

//______________________________________________________________________________
const char *EffStore2D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EffStore2D*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EffStore2D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EffStore2D*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EffStore2D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EffStore2D*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EffStore2D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EffStore2D*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Residuals::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *Residuals::Class_Name()
{
   return "Residuals";
}

//______________________________________________________________________________
const char *Residuals::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Residuals*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int Residuals::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Residuals*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Residuals::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Residuals*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Residuals::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Residuals*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnEfficiency::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnEfficiency::Class_Name()
{
   return "BmnEfficiency";
}

//______________________________________________________________________________
const char *BmnEfficiency::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnEfficiency*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnEfficiency::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnEfficiency*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnEfficiency::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnEfficiency*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnEfficiency::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnEfficiency*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnEfficiencyProbability::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnEfficiencyProbability::Class_Name()
{
   return "BmnEfficiencyProbability";
}

//______________________________________________________________________________
const char *BmnEfficiencyProbability::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnEfficiencyProbability*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnEfficiencyProbability::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnEfficiencyProbability*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnEfficiencyProbability::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnEfficiencyProbability*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnEfficiencyProbability::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnEfficiencyProbability*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnRealisticMc::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnRealisticMc::Class_Name()
{
   return "BmnRealisticMc";
}

//______________________________________________________________________________
const char *BmnRealisticMc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnRealisticMc*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnRealisticMc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnRealisticMc*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnRealisticMc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnRealisticMc*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnRealisticMc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnRealisticMc*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnDataTriggerInfo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnDataTriggerInfo::Class_Name()
{
   return "BmnDataTriggerInfo";
}

//______________________________________________________________________________
const char *BmnDataTriggerInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDataTriggerInfo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnDataTriggerInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDataTriggerInfo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnDataTriggerInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDataTriggerInfo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnDataTriggerInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDataTriggerInfo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnEfficiencyTools::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnEfficiencyTools::Class_Name()
{
   return "BmnEfficiencyTools";
}

//______________________________________________________________________________
const char *BmnEfficiencyTools::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnEfficiencyTools*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnEfficiencyTools::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnEfficiencyTools*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnEfficiencyTools::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnEfficiencyTools*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnEfficiencyTools::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnEfficiencyTools*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnLambdaEmbeddingMonitor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnLambdaEmbeddingMonitor::Class_Name()
{
   return "BmnLambdaEmbeddingMonitor";
}

//______________________________________________________________________________
const char *BmnLambdaEmbeddingMonitor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnLambdaEmbeddingMonitor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnLambdaEmbeddingMonitor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnLambdaEmbeddingMonitor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnLambdaEmbeddingMonitor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnLambdaEmbeddingMonitor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnLambdaEmbeddingMonitor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnLambdaEmbeddingMonitor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnParticleStore::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnParticleStore::Class_Name()
{
   return "BmnParticleStore";
}

//______________________________________________________________________________
const char *BmnParticleStore::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnParticleStore*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnParticleStore::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnParticleStore*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnParticleStore::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnParticleStore*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnParticleStore::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnParticleStore*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnLambdaMisc::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnLambdaMisc::Class_Name()
{
   return "BmnLambdaMisc";
}

//______________________________________________________________________________
const char *BmnLambdaMisc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnLambdaMisc*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnLambdaMisc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnLambdaMisc*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnLambdaMisc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnLambdaMisc*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnLambdaMisc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnLambdaMisc*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnLambdaEmbeddingDrawHistos::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnLambdaEmbeddingDrawHistos::Class_Name()
{
   return "BmnLambdaEmbeddingDrawHistos";
}

//______________________________________________________________________________
const char *BmnLambdaEmbeddingDrawHistos::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnLambdaEmbeddingDrawHistos*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnLambdaEmbeddingDrawHistos::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnLambdaEmbeddingDrawHistos*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnLambdaEmbeddingDrawHistos::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnLambdaEmbeddingDrawHistos*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnLambdaEmbeddingDrawHistos::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnLambdaEmbeddingDrawHistos*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnLambdaEmbeddingQa::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnLambdaEmbeddingQa::Class_Name()
{
   return "BmnLambdaEmbeddingQa";
}

//______________________________________________________________________________
const char *BmnLambdaEmbeddingQa::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnLambdaEmbeddingQa*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnLambdaEmbeddingQa::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnLambdaEmbeddingQa*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnLambdaEmbeddingQa::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnLambdaEmbeddingQa*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnLambdaEmbeddingQa::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnLambdaEmbeddingQa*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnLambdaEmbedding::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnLambdaEmbedding::Class_Name()
{
   return "BmnLambdaEmbedding";
}

//______________________________________________________________________________
const char *BmnLambdaEmbedding::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnLambdaEmbedding*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnLambdaEmbedding::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnLambdaEmbedding*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnLambdaEmbedding::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnLambdaEmbedding*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnLambdaEmbedding::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnLambdaEmbedding*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TriggerEfficiency::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TriggerEfficiency::Class_Name()
{
   return "TriggerEfficiency";
}

//______________________________________________________________________________
const char *TriggerEfficiency::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TriggerEfficiency*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TriggerEfficiency::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TriggerEfficiency*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TriggerEfficiency::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TriggerEfficiency*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TriggerEfficiency::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TriggerEfficiency*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnLambdaAnalRun7::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnLambdaAnalRun7::Class_Name()
{
   return "BmnLambdaAnalRun7";
}

//______________________________________________________________________________
const char *BmnLambdaAnalRun7::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnLambdaAnalRun7*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnLambdaAnalRun7::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnLambdaAnalRun7*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnLambdaAnalRun7::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnLambdaAnalRun7*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnLambdaAnalRun7::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnLambdaAnalRun7*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnDataAnalRun7::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnDataAnalRun7::Class_Name()
{
   return "BmnDataAnalRun7";
}

//______________________________________________________________________________
const char *BmnDataAnalRun7::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDataAnalRun7*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnDataAnalRun7::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDataAnalRun7*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnDataAnalRun7::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDataAnalRun7*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnDataAnalRun7::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDataAnalRun7*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTriggerEfficiencyRun7::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTriggerEfficiencyRun7::Class_Name()
{
   return "BmnTriggerEfficiencyRun7";
}

//______________________________________________________________________________
const char *BmnTriggerEfficiencyRun7::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTriggerEfficiencyRun7*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTriggerEfficiencyRun7::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTriggerEfficiencyRun7*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTriggerEfficiencyRun7::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTriggerEfficiencyRun7*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTriggerEfficiencyRun7::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTriggerEfficiencyRun7*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnParticlePair::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnParticlePair.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnParticlePair::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnParticlePair::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnParticlePair(void *p) {
      return  p ? new(p) ::BmnParticlePair : new ::BmnParticlePair;
   }
   static void *newArray_BmnParticlePair(Long_t nElements, void *p) {
      return p ? new(p) ::BmnParticlePair[nElements] : new ::BmnParticlePair[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnParticlePair(void *p) {
      delete ((::BmnParticlePair*)p);
   }
   static void deleteArray_BmnParticlePair(void *p) {
      delete [] ((::BmnParticlePair*)p);
   }
   static void destruct_BmnParticlePair(void *p) {
      typedef ::BmnParticlePair current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnParticlePair

//______________________________________________________________________________
void DstEventHeaderExtended::Streamer(TBuffer &R__b)
{
   // Stream an object of class DstEventHeaderExtended.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DstEventHeaderExtended::Class(),this);
   } else {
      R__b.WriteClassBuffer(DstEventHeaderExtended::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DstEventHeaderExtended(void *p) {
      return  p ? new(p) ::DstEventHeaderExtended : new ::DstEventHeaderExtended;
   }
   static void *newArray_DstEventHeaderExtended(Long_t nElements, void *p) {
      return p ? new(p) ::DstEventHeaderExtended[nElements] : new ::DstEventHeaderExtended[nElements];
   }
   // Wrapper around operator delete
   static void delete_DstEventHeaderExtended(void *p) {
      delete ((::DstEventHeaderExtended*)p);
   }
   static void deleteArray_DstEventHeaderExtended(void *p) {
      delete [] ((::DstEventHeaderExtended*)p);
   }
   static void destruct_DstEventHeaderExtended(void *p) {
      typedef ::DstEventHeaderExtended current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DstEventHeaderExtended

//______________________________________________________________________________
void BmnTwoParticleDecay::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTwoParticleDecay.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTwoParticleDecay::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTwoParticleDecay::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTwoParticleDecay(void *p) {
      return  p ? new(p) ::BmnTwoParticleDecay : new ::BmnTwoParticleDecay;
   }
   static void *newArray_BmnTwoParticleDecay(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTwoParticleDecay[nElements] : new ::BmnTwoParticleDecay[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTwoParticleDecay(void *p) {
      delete ((::BmnTwoParticleDecay*)p);
   }
   static void deleteArray_BmnTwoParticleDecay(void *p) {
      delete [] ((::BmnTwoParticleDecay*)p);
   }
   static void destruct_BmnTwoParticleDecay(void *p) {
      typedef ::BmnTwoParticleDecay current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTwoParticleDecay

//______________________________________________________________________________
void BmnParticlePairsInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnParticlePairsInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnParticlePairsInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnParticlePairsInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnParticlePairsInfo(void *p) {
      return  p ? new(p) ::BmnParticlePairsInfo : new ::BmnParticlePairsInfo;
   }
   static void *newArray_BmnParticlePairsInfo(Long_t nElements, void *p) {
      return p ? new(p) ::BmnParticlePairsInfo[nElements] : new ::BmnParticlePairsInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnParticlePairsInfo(void *p) {
      delete ((::BmnParticlePairsInfo*)p);
   }
   static void deleteArray_BmnParticlePairsInfo(void *p) {
      delete [] ((::BmnParticlePairsInfo*)p);
   }
   static void destruct_BmnParticlePairsInfo(void *p) {
      typedef ::BmnParticlePairsInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnParticlePairsInfo

//______________________________________________________________________________
void BmnParticlePairCut::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnParticlePairCut.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnParticlePairCut::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnParticlePairCut::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnParticlePairCut(void *p) {
      return  p ? new(p) ::BmnParticlePairCut : new ::BmnParticlePairCut;
   }
   static void *newArray_BmnParticlePairCut(Long_t nElements, void *p) {
      return p ? new(p) ::BmnParticlePairCut[nElements] : new ::BmnParticlePairCut[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnParticlePairCut(void *p) {
      delete ((::BmnParticlePairCut*)p);
   }
   static void deleteArray_BmnParticlePairCut(void *p) {
      delete [] ((::BmnParticlePairCut*)p);
   }
   static void destruct_BmnParticlePairCut(void *p) {
      typedef ::BmnParticlePairCut current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnParticlePairCut

//______________________________________________________________________________
void BmnMassSpectrumAnal::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMassSpectrumAnal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMassSpectrumAnal::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMassSpectrumAnal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMassSpectrumAnal(void *p) {
      return  p ? new(p) ::BmnMassSpectrumAnal : new ::BmnMassSpectrumAnal;
   }
   static void *newArray_BmnMassSpectrumAnal(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMassSpectrumAnal[nElements] : new ::BmnMassSpectrumAnal[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMassSpectrumAnal(void *p) {
      delete ((::BmnMassSpectrumAnal*)p);
   }
   static void deleteArray_BmnMassSpectrumAnal(void *p) {
      delete [] ((::BmnMassSpectrumAnal*)p);
   }
   static void destruct_BmnMassSpectrumAnal(void *p) {
      typedef ::BmnMassSpectrumAnal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMassSpectrumAnal

//______________________________________________________________________________
void BmnInnerTrackerGeometryDraw::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnInnerTrackerGeometryDraw.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnInnerTrackerGeometryDraw::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnInnerTrackerGeometryDraw::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnInnerTrackerGeometryDraw(void *p) {
      return  p ? new(p) ::BmnInnerTrackerGeometryDraw : new ::BmnInnerTrackerGeometryDraw;
   }
   static void *newArray_BmnInnerTrackerGeometryDraw(Long_t nElements, void *p) {
      return p ? new(p) ::BmnInnerTrackerGeometryDraw[nElements] : new ::BmnInnerTrackerGeometryDraw[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnInnerTrackerGeometryDraw(void *p) {
      delete ((::BmnInnerTrackerGeometryDraw*)p);
   }
   static void deleteArray_BmnInnerTrackerGeometryDraw(void *p) {
      delete [] ((::BmnInnerTrackerGeometryDraw*)p);
   }
   static void destruct_BmnInnerTrackerGeometryDraw(void *p) {
      typedef ::BmnInnerTrackerGeometryDraw current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnInnerTrackerGeometryDraw

//______________________________________________________________________________
void EffStore::Streamer(TBuffer &R__b)
{
   // Stream an object of class EffStore.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(EffStore::Class(),this);
   } else {
      R__b.WriteClassBuffer(EffStore::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EffStore(void *p) {
      return  p ? new(p) ::EffStore : new ::EffStore;
   }
   static void *newArray_EffStore(Long_t nElements, void *p) {
      return p ? new(p) ::EffStore[nElements] : new ::EffStore[nElements];
   }
   // Wrapper around operator delete
   static void delete_EffStore(void *p) {
      delete ((::EffStore*)p);
   }
   static void deleteArray_EffStore(void *p) {
      delete [] ((::EffStore*)p);
   }
   static void destruct_EffStore(void *p) {
      typedef ::EffStore current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::EffStore

//______________________________________________________________________________
void InnerTrackerParams::Streamer(TBuffer &R__b)
{
   // Stream an object of class InnerTrackerParams.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(InnerTrackerParams::Class(),this);
   } else {
      R__b.WriteClassBuffer(InnerTrackerParams::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_InnerTrackerParams(void *p) {
      return  p ? new(p) ::InnerTrackerParams : new ::InnerTrackerParams;
   }
   static void *newArray_InnerTrackerParams(Long_t nElements, void *p) {
      return p ? new(p) ::InnerTrackerParams[nElements] : new ::InnerTrackerParams[nElements];
   }
   // Wrapper around operator delete
   static void delete_InnerTrackerParams(void *p) {
      delete ((::InnerTrackerParams*)p);
   }
   static void deleteArray_InnerTrackerParams(void *p) {
      delete [] ((::InnerTrackerParams*)p);
   }
   static void destruct_InnerTrackerParams(void *p) {
      typedef ::InnerTrackerParams current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::InnerTrackerParams

//______________________________________________________________________________
void EffStore2D::Streamer(TBuffer &R__b)
{
   // Stream an object of class EffStore2D.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(EffStore2D::Class(),this);
   } else {
      R__b.WriteClassBuffer(EffStore2D::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EffStore2D(void *p) {
      return  p ? new(p) ::EffStore2D : new ::EffStore2D;
   }
   static void *newArray_EffStore2D(Long_t nElements, void *p) {
      return p ? new(p) ::EffStore2D[nElements] : new ::EffStore2D[nElements];
   }
   // Wrapper around operator delete
   static void delete_EffStore2D(void *p) {
      delete ((::EffStore2D*)p);
   }
   static void deleteArray_EffStore2D(void *p) {
      delete [] ((::EffStore2D*)p);
   }
   static void destruct_EffStore2D(void *p) {
      typedef ::EffStore2D current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::EffStore2D

//______________________________________________________________________________
void Residuals::Streamer(TBuffer &R__b)
{
   // Stream an object of class Residuals.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Residuals::Class(),this);
   } else {
      R__b.WriteClassBuffer(Residuals::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Residuals(void *p) {
      return  p ? new(p) ::Residuals : new ::Residuals;
   }
   static void *newArray_Residuals(Long_t nElements, void *p) {
      return p ? new(p) ::Residuals[nElements] : new ::Residuals[nElements];
   }
   // Wrapper around operator delete
   static void delete_Residuals(void *p) {
      delete ((::Residuals*)p);
   }
   static void deleteArray_Residuals(void *p) {
      delete [] ((::Residuals*)p);
   }
   static void destruct_Residuals(void *p) {
      typedef ::Residuals current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Residuals

//______________________________________________________________________________
void BmnEfficiency::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnEfficiency.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnEfficiency::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnEfficiency::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnEfficiency(void *p) {
      return  p ? new(p) ::BmnEfficiency : new ::BmnEfficiency;
   }
   static void *newArray_BmnEfficiency(Long_t nElements, void *p) {
      return p ? new(p) ::BmnEfficiency[nElements] : new ::BmnEfficiency[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnEfficiency(void *p) {
      delete ((::BmnEfficiency*)p);
   }
   static void deleteArray_BmnEfficiency(void *p) {
      delete [] ((::BmnEfficiency*)p);
   }
   static void destruct_BmnEfficiency(void *p) {
      typedef ::BmnEfficiency current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnEfficiency

//______________________________________________________________________________
void BmnEfficiencyProbability::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnEfficiencyProbability.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnEfficiencyProbability::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnEfficiencyProbability::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnEfficiencyProbability(void *p) {
      return  p ? new(p) ::BmnEfficiencyProbability : new ::BmnEfficiencyProbability;
   }
   static void *newArray_BmnEfficiencyProbability(Long_t nElements, void *p) {
      return p ? new(p) ::BmnEfficiencyProbability[nElements] : new ::BmnEfficiencyProbability[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnEfficiencyProbability(void *p) {
      delete ((::BmnEfficiencyProbability*)p);
   }
   static void deleteArray_BmnEfficiencyProbability(void *p) {
      delete [] ((::BmnEfficiencyProbability*)p);
   }
   static void destruct_BmnEfficiencyProbability(void *p) {
      typedef ::BmnEfficiencyProbability current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnEfficiencyProbability

//______________________________________________________________________________
void BmnRealisticMc::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnRealisticMc.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnRealisticMc::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnRealisticMc::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnRealisticMc(void *p) {
      return  p ? new(p) ::BmnRealisticMc : new ::BmnRealisticMc;
   }
   static void *newArray_BmnRealisticMc(Long_t nElements, void *p) {
      return p ? new(p) ::BmnRealisticMc[nElements] : new ::BmnRealisticMc[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnRealisticMc(void *p) {
      delete ((::BmnRealisticMc*)p);
   }
   static void deleteArray_BmnRealisticMc(void *p) {
      delete [] ((::BmnRealisticMc*)p);
   }
   static void destruct_BmnRealisticMc(void *p) {
      typedef ::BmnRealisticMc current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnRealisticMc

//______________________________________________________________________________
void BmnDataTriggerInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnDataTriggerInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnDataTriggerInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnDataTriggerInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnDataTriggerInfo(void *p) {
      return  p ? new(p) ::BmnDataTriggerInfo : new ::BmnDataTriggerInfo;
   }
   static void *newArray_BmnDataTriggerInfo(Long_t nElements, void *p) {
      return p ? new(p) ::BmnDataTriggerInfo[nElements] : new ::BmnDataTriggerInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnDataTriggerInfo(void *p) {
      delete ((::BmnDataTriggerInfo*)p);
   }
   static void deleteArray_BmnDataTriggerInfo(void *p) {
      delete [] ((::BmnDataTriggerInfo*)p);
   }
   static void destruct_BmnDataTriggerInfo(void *p) {
      typedef ::BmnDataTriggerInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnDataTriggerInfo

//______________________________________________________________________________
void BmnEfficiencyTools::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnEfficiencyTools.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnEfficiencyTools::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnEfficiencyTools::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnEfficiencyTools(void *p) {
      return  p ? new(p) ::BmnEfficiencyTools : new ::BmnEfficiencyTools;
   }
   static void *newArray_BmnEfficiencyTools(Long_t nElements, void *p) {
      return p ? new(p) ::BmnEfficiencyTools[nElements] : new ::BmnEfficiencyTools[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnEfficiencyTools(void *p) {
      delete ((::BmnEfficiencyTools*)p);
   }
   static void deleteArray_BmnEfficiencyTools(void *p) {
      delete [] ((::BmnEfficiencyTools*)p);
   }
   static void destruct_BmnEfficiencyTools(void *p) {
      typedef ::BmnEfficiencyTools current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnEfficiencyTools

//______________________________________________________________________________
void BmnLambdaEmbeddingMonitor::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnLambdaEmbeddingMonitor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnLambdaEmbeddingMonitor::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnLambdaEmbeddingMonitor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnLambdaEmbeddingMonitor(void *p) {
      return  p ? new(p) ::BmnLambdaEmbeddingMonitor : new ::BmnLambdaEmbeddingMonitor;
   }
   static void *newArray_BmnLambdaEmbeddingMonitor(Long_t nElements, void *p) {
      return p ? new(p) ::BmnLambdaEmbeddingMonitor[nElements] : new ::BmnLambdaEmbeddingMonitor[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnLambdaEmbeddingMonitor(void *p) {
      delete ((::BmnLambdaEmbeddingMonitor*)p);
   }
   static void deleteArray_BmnLambdaEmbeddingMonitor(void *p) {
      delete [] ((::BmnLambdaEmbeddingMonitor*)p);
   }
   static void destruct_BmnLambdaEmbeddingMonitor(void *p) {
      typedef ::BmnLambdaEmbeddingMonitor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnLambdaEmbeddingMonitor

//______________________________________________________________________________
void BmnParticleStore::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnParticleStore.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnParticleStore::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnParticleStore::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnParticleStore(void *p) {
      return  p ? new(p) ::BmnParticleStore : new ::BmnParticleStore;
   }
   static void *newArray_BmnParticleStore(Long_t nElements, void *p) {
      return p ? new(p) ::BmnParticleStore[nElements] : new ::BmnParticleStore[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnParticleStore(void *p) {
      delete ((::BmnParticleStore*)p);
   }
   static void deleteArray_BmnParticleStore(void *p) {
      delete [] ((::BmnParticleStore*)p);
   }
   static void destruct_BmnParticleStore(void *p) {
      typedef ::BmnParticleStore current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnParticleStore

//______________________________________________________________________________
void BmnLambdaMisc::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnLambdaMisc.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnLambdaMisc::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnLambdaMisc::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnLambdaMisc(void *p) {
      return  p ? new(p) ::BmnLambdaMisc : new ::BmnLambdaMisc;
   }
   static void *newArray_BmnLambdaMisc(Long_t nElements, void *p) {
      return p ? new(p) ::BmnLambdaMisc[nElements] : new ::BmnLambdaMisc[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnLambdaMisc(void *p) {
      delete ((::BmnLambdaMisc*)p);
   }
   static void deleteArray_BmnLambdaMisc(void *p) {
      delete [] ((::BmnLambdaMisc*)p);
   }
   static void destruct_BmnLambdaMisc(void *p) {
      typedef ::BmnLambdaMisc current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnLambdaMisc

//______________________________________________________________________________
void BmnLambdaEmbeddingDrawHistos::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnLambdaEmbeddingDrawHistos.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnLambdaEmbeddingDrawHistos::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnLambdaEmbeddingDrawHistos::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnLambdaEmbeddingDrawHistos(void *p) {
      return  p ? new(p) ::BmnLambdaEmbeddingDrawHistos : new ::BmnLambdaEmbeddingDrawHistos;
   }
   static void *newArray_BmnLambdaEmbeddingDrawHistos(Long_t nElements, void *p) {
      return p ? new(p) ::BmnLambdaEmbeddingDrawHistos[nElements] : new ::BmnLambdaEmbeddingDrawHistos[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnLambdaEmbeddingDrawHistos(void *p) {
      delete ((::BmnLambdaEmbeddingDrawHistos*)p);
   }
   static void deleteArray_BmnLambdaEmbeddingDrawHistos(void *p) {
      delete [] ((::BmnLambdaEmbeddingDrawHistos*)p);
   }
   static void destruct_BmnLambdaEmbeddingDrawHistos(void *p) {
      typedef ::BmnLambdaEmbeddingDrawHistos current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnLambdaEmbeddingDrawHistos

//______________________________________________________________________________
void BmnLambdaEmbeddingQa::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnLambdaEmbeddingQa.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnLambdaEmbeddingQa::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnLambdaEmbeddingQa::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnLambdaEmbeddingQa(void *p) {
      return  p ? new(p) ::BmnLambdaEmbeddingQa : new ::BmnLambdaEmbeddingQa;
   }
   static void *newArray_BmnLambdaEmbeddingQa(Long_t nElements, void *p) {
      return p ? new(p) ::BmnLambdaEmbeddingQa[nElements] : new ::BmnLambdaEmbeddingQa[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnLambdaEmbeddingQa(void *p) {
      delete ((::BmnLambdaEmbeddingQa*)p);
   }
   static void deleteArray_BmnLambdaEmbeddingQa(void *p) {
      delete [] ((::BmnLambdaEmbeddingQa*)p);
   }
   static void destruct_BmnLambdaEmbeddingQa(void *p) {
      typedef ::BmnLambdaEmbeddingQa current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnLambdaEmbeddingQa

//______________________________________________________________________________
void BmnLambdaEmbedding::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnLambdaEmbedding.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnLambdaEmbedding::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnLambdaEmbedding::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnLambdaEmbedding(void *p) {
      return  p ? new(p) ::BmnLambdaEmbedding : new ::BmnLambdaEmbedding;
   }
   static void *newArray_BmnLambdaEmbedding(Long_t nElements, void *p) {
      return p ? new(p) ::BmnLambdaEmbedding[nElements] : new ::BmnLambdaEmbedding[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnLambdaEmbedding(void *p) {
      delete ((::BmnLambdaEmbedding*)p);
   }
   static void deleteArray_BmnLambdaEmbedding(void *p) {
      delete [] ((::BmnLambdaEmbedding*)p);
   }
   static void destruct_BmnLambdaEmbedding(void *p) {
      typedef ::BmnLambdaEmbedding current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnLambdaEmbedding

//______________________________________________________________________________
void TriggerEfficiency::Streamer(TBuffer &R__b)
{
   // Stream an object of class TriggerEfficiency.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TriggerEfficiency::Class(),this);
   } else {
      R__b.WriteClassBuffer(TriggerEfficiency::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TriggerEfficiency(void *p) {
      return  p ? new(p) ::TriggerEfficiency : new ::TriggerEfficiency;
   }
   static void *newArray_TriggerEfficiency(Long_t nElements, void *p) {
      return p ? new(p) ::TriggerEfficiency[nElements] : new ::TriggerEfficiency[nElements];
   }
   // Wrapper around operator delete
   static void delete_TriggerEfficiency(void *p) {
      delete ((::TriggerEfficiency*)p);
   }
   static void deleteArray_TriggerEfficiency(void *p) {
      delete [] ((::TriggerEfficiency*)p);
   }
   static void destruct_TriggerEfficiency(void *p) {
      typedef ::TriggerEfficiency current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TriggerEfficiency

//______________________________________________________________________________
void BmnLambdaAnalRun7::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnLambdaAnalRun7.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnLambdaAnalRun7::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnLambdaAnalRun7::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnLambdaAnalRun7(void *p) {
      return  p ? new(p) ::BmnLambdaAnalRun7 : new ::BmnLambdaAnalRun7;
   }
   static void *newArray_BmnLambdaAnalRun7(Long_t nElements, void *p) {
      return p ? new(p) ::BmnLambdaAnalRun7[nElements] : new ::BmnLambdaAnalRun7[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnLambdaAnalRun7(void *p) {
      delete ((::BmnLambdaAnalRun7*)p);
   }
   static void deleteArray_BmnLambdaAnalRun7(void *p) {
      delete [] ((::BmnLambdaAnalRun7*)p);
   }
   static void destruct_BmnLambdaAnalRun7(void *p) {
      typedef ::BmnLambdaAnalRun7 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnLambdaAnalRun7

//______________________________________________________________________________
void BmnDataAnalRun7::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnDataAnalRun7.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnDataAnalRun7::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnDataAnalRun7::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnDataAnalRun7(void *p) {
      return  p ? new(p) ::BmnDataAnalRun7 : new ::BmnDataAnalRun7;
   }
   static void *newArray_BmnDataAnalRun7(Long_t nElements, void *p) {
      return p ? new(p) ::BmnDataAnalRun7[nElements] : new ::BmnDataAnalRun7[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnDataAnalRun7(void *p) {
      delete ((::BmnDataAnalRun7*)p);
   }
   static void deleteArray_BmnDataAnalRun7(void *p) {
      delete [] ((::BmnDataAnalRun7*)p);
   }
   static void destruct_BmnDataAnalRun7(void *p) {
      typedef ::BmnDataAnalRun7 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnDataAnalRun7

//______________________________________________________________________________
void BmnTriggerEfficiencyRun7::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTriggerEfficiencyRun7.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTriggerEfficiencyRun7::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTriggerEfficiencyRun7::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTriggerEfficiencyRun7(void *p) {
      return  p ? new(p) ::BmnTriggerEfficiencyRun7 : new ::BmnTriggerEfficiencyRun7;
   }
   static void *newArray_BmnTriggerEfficiencyRun7(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTriggerEfficiencyRun7[nElements] : new ::BmnTriggerEfficiencyRun7[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTriggerEfficiencyRun7(void *p) {
      delete ((::BmnTriggerEfficiencyRun7*)p);
   }
   static void deleteArray_BmnTriggerEfficiencyRun7(void *p) {
      delete [] ((::BmnTriggerEfficiencyRun7*)p);
   }
   static void destruct_BmnTriggerEfficiencyRun7(void *p) {
      typedef ::BmnTriggerEfficiencyRun7 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTriggerEfficiencyRun7

namespace ROOT {
   static TClass *vectorlEvectorlEintgRsPgR_Dictionary();
   static void vectorlEvectorlEintgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEintgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlEintgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEintgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEintgRsPgR(void *p);
   static void destruct_vectorlEvectorlEintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<int> >*)
   {
      vector<vector<int> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<int> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<int> >", -2, "vector", 386,
                  typeid(vector<vector<int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<int> >) );
      instance.SetNew(&new_vectorlEvectorlEintgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEintgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEintgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEintgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<int> > >()));

      ::ROOT::AddClassAlternate("vector<vector<int> >","std::vector<std::vector<int, std::allocator<int> >, std::allocator<std::vector<int, std::allocator<int> > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<int> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<int> >*)nullptr)->GetClass();
      vectorlEvectorlEintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<int> > : new vector<vector<int> >;
   }
   static void *newArray_vectorlEvectorlEintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<int> >[nElements] : new vector<vector<int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEintgRsPgR(void *p) {
      delete ((vector<vector<int> >*)p);
   }
   static void deleteArray_vectorlEvectorlEintgRsPgR(void *p) {
      delete [] ((vector<vector<int> >*)p);
   }
   static void destruct_vectorlEvectorlEintgRsPgR(void *p) {
      typedef vector<vector<int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<int> >

namespace ROOT {
   static TClass *vectorlEshortgR_Dictionary();
   static void vectorlEshortgR_TClassManip(TClass*);
   static void *new_vectorlEshortgR(void *p = nullptr);
   static void *newArray_vectorlEshortgR(Long_t size, void *p);
   static void delete_vectorlEshortgR(void *p);
   static void deleteArray_vectorlEshortgR(void *p);
   static void destruct_vectorlEshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<short>*)
   {
      vector<short> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<short>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<short>", -2, "vector", 386,
                  typeid(vector<short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEshortgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<short>) );
      instance.SetNew(&new_vectorlEshortgR);
      instance.SetNewArray(&newArray_vectorlEshortgR);
      instance.SetDelete(&delete_vectorlEshortgR);
      instance.SetDeleteArray(&deleteArray_vectorlEshortgR);
      instance.SetDestructor(&destruct_vectorlEshortgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<short> >()));

      ::ROOT::AddClassAlternate("vector<short>","std::vector<short, std::allocator<short> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<short>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<short>*)nullptr)->GetClass();
      vectorlEshortgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEshortgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<short> : new vector<short>;
   }
   static void *newArray_vectorlEshortgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<short>[nElements] : new vector<short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEshortgR(void *p) {
      delete ((vector<short>*)p);
   }
   static void deleteArray_vectorlEshortgR(void *p) {
      delete [] ((vector<short>*)p);
   }
   static void destruct_vectorlEshortgR(void *p) {
      typedef vector<short> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<short>

namespace ROOT {
   static TClass *vectorlEpairlEdoublecOdoublegRsPgR_Dictionary();
   static void vectorlEpairlEdoublecOdoublegRsPgR_TClassManip(TClass*);
   static void *new_vectorlEpairlEdoublecOdoublegRsPgR(void *p = nullptr);
   static void *newArray_vectorlEpairlEdoublecOdoublegRsPgR(Long_t size, void *p);
   static void delete_vectorlEpairlEdoublecOdoublegRsPgR(void *p);
   static void deleteArray_vectorlEpairlEdoublecOdoublegRsPgR(void *p);
   static void destruct_vectorlEpairlEdoublecOdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pair<double,double> >*)
   {
      vector<pair<double,double> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pair<double,double> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pair<double,double> >", -2, "vector", 386,
                  typeid(vector<pair<double,double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEpairlEdoublecOdoublegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<pair<double,double> >) );
      instance.SetNew(&new_vectorlEpairlEdoublecOdoublegRsPgR);
      instance.SetNewArray(&newArray_vectorlEpairlEdoublecOdoublegRsPgR);
      instance.SetDelete(&delete_vectorlEpairlEdoublecOdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpairlEdoublecOdoublegRsPgR);
      instance.SetDestructor(&destruct_vectorlEpairlEdoublecOdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pair<double,double> > >()));

      ::ROOT::AddClassAlternate("vector<pair<double,double> >","std::vector<std::pair<double, double>, std::allocator<std::pair<double, double> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<pair<double,double> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpairlEdoublecOdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<pair<double,double> >*)nullptr)->GetClass();
      vectorlEpairlEdoublecOdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpairlEdoublecOdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpairlEdoublecOdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pair<double,double> > : new vector<pair<double,double> >;
   }
   static void *newArray_vectorlEpairlEdoublecOdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pair<double,double> >[nElements] : new vector<pair<double,double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpairlEdoublecOdoublegRsPgR(void *p) {
      delete ((vector<pair<double,double> >*)p);
   }
   static void deleteArray_vectorlEpairlEdoublecOdoublegRsPgR(void *p) {
      delete [] ((vector<pair<double,double> >*)p);
   }
   static void destruct_vectorlEpairlEdoublecOdoublegRsPgR(void *p) {
      typedef vector<pair<double,double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<pair<double,double> >

namespace ROOT {
   static TClass *vectorlElonggR_Dictionary();
   static void vectorlElonggR_TClassManip(TClass*);
   static void *new_vectorlElonggR(void *p = nullptr);
   static void *newArray_vectorlElonggR(Long_t size, void *p);
   static void delete_vectorlElonggR(void *p);
   static void deleteArray_vectorlElonggR(void *p);
   static void destruct_vectorlElonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<long>*)
   {
      vector<long> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<long>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<long>", -2, "vector", 386,
                  typeid(vector<long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlElonggR_Dictionary, isa_proxy, 0,
                  sizeof(vector<long>) );
      instance.SetNew(&new_vectorlElonggR);
      instance.SetNewArray(&newArray_vectorlElonggR);
      instance.SetDelete(&delete_vectorlElonggR);
      instance.SetDeleteArray(&deleteArray_vectorlElonggR);
      instance.SetDestructor(&destruct_vectorlElonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<long> >()));

      ::ROOT::AddClassAlternate("vector<long>","std::vector<long, std::allocator<long> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<long>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<long>*)nullptr)->GetClass();
      vectorlElonggR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElonggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<long> : new vector<long>;
   }
   static void *newArray_vectorlElonggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<long>[nElements] : new vector<long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElonggR(void *p) {
      delete ((vector<long>*)p);
   }
   static void deleteArray_vectorlElonggR(void *p) {
      delete [] ((vector<long>*)p);
   }
   static void destruct_vectorlElonggR(void *p) {
      typedef vector<long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<long>

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
   static TClass *vectorlETLorentzVectorgR_Dictionary();
   static void vectorlETLorentzVectorgR_TClassManip(TClass*);
   static void *new_vectorlETLorentzVectorgR(void *p = nullptr);
   static void *newArray_vectorlETLorentzVectorgR(Long_t size, void *p);
   static void delete_vectorlETLorentzVectorgR(void *p);
   static void deleteArray_vectorlETLorentzVectorgR(void *p);
   static void destruct_vectorlETLorentzVectorgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TLorentzVector>*)
   {
      vector<TLorentzVector> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TLorentzVector>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TLorentzVector>", -2, "vector", 386,
                  typeid(vector<TLorentzVector>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETLorentzVectorgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TLorentzVector>) );
      instance.SetNew(&new_vectorlETLorentzVectorgR);
      instance.SetNewArray(&newArray_vectorlETLorentzVectorgR);
      instance.SetDelete(&delete_vectorlETLorentzVectorgR);
      instance.SetDeleteArray(&deleteArray_vectorlETLorentzVectorgR);
      instance.SetDestructor(&destruct_vectorlETLorentzVectorgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TLorentzVector> >()));

      ::ROOT::AddClassAlternate("vector<TLorentzVector>","std::vector<TLorentzVector, std::allocator<TLorentzVector> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TLorentzVector>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETLorentzVectorgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TLorentzVector>*)nullptr)->GetClass();
      vectorlETLorentzVectorgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETLorentzVectorgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETLorentzVectorgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TLorentzVector> : new vector<TLorentzVector>;
   }
   static void *newArray_vectorlETLorentzVectorgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TLorentzVector>[nElements] : new vector<TLorentzVector>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETLorentzVectorgR(void *p) {
      delete ((vector<TLorentzVector>*)p);
   }
   static void deleteArray_vectorlETLorentzVectorgR(void *p) {
      delete [] ((vector<TLorentzVector>*)p);
   }
   static void destruct_vectorlETLorentzVectorgR(void *p) {
      typedef vector<TLorentzVector> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TLorentzVector>

namespace ROOT {
   static TClass *maplEvectorlEintgRcOvectorlElonggRsPgR_Dictionary();
   static void maplEvectorlEintgRcOvectorlElonggRsPgR_TClassManip(TClass*);
   static void *new_maplEvectorlEintgRcOvectorlElonggRsPgR(void *p = nullptr);
   static void *newArray_maplEvectorlEintgRcOvectorlElonggRsPgR(Long_t size, void *p);
   static void delete_maplEvectorlEintgRcOvectorlElonggRsPgR(void *p);
   static void deleteArray_maplEvectorlEintgRcOvectorlElonggRsPgR(void *p);
   static void destruct_maplEvectorlEintgRcOvectorlElonggRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<vector<int>,vector<long> >*)
   {
      map<vector<int>,vector<long> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<vector<int>,vector<long> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<vector<int>,vector<long> >", -2, "map", 100,
                  typeid(map<vector<int>,vector<long> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEvectorlEintgRcOvectorlElonggRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<vector<int>,vector<long> >) );
      instance.SetNew(&new_maplEvectorlEintgRcOvectorlElonggRsPgR);
      instance.SetNewArray(&newArray_maplEvectorlEintgRcOvectorlElonggRsPgR);
      instance.SetDelete(&delete_maplEvectorlEintgRcOvectorlElonggRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEvectorlEintgRcOvectorlElonggRsPgR);
      instance.SetDestructor(&destruct_maplEvectorlEintgRcOvectorlElonggRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<vector<int>,vector<long> > >()));

      ::ROOT::AddClassAlternate("map<vector<int>,vector<long> >","std::map<std::vector<int, std::allocator<int> >, std::vector<long, std::allocator<long> >, std::less<std::vector<int, std::allocator<int> > >, std::allocator<std::pair<std::vector<int, std::allocator<int> > const, std::vector<long, std::allocator<long> > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<vector<int>,vector<long> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEvectorlEintgRcOvectorlElonggRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<vector<int>,vector<long> >*)nullptr)->GetClass();
      maplEvectorlEintgRcOvectorlElonggRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEvectorlEintgRcOvectorlElonggRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEvectorlEintgRcOvectorlElonggRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<vector<int>,vector<long> > : new map<vector<int>,vector<long> >;
   }
   static void *newArray_maplEvectorlEintgRcOvectorlElonggRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<vector<int>,vector<long> >[nElements] : new map<vector<int>,vector<long> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEvectorlEintgRcOvectorlElonggRsPgR(void *p) {
      delete ((map<vector<int>,vector<long> >*)p);
   }
   static void deleteArray_maplEvectorlEintgRcOvectorlElonggRsPgR(void *p) {
      delete [] ((map<vector<int>,vector<long> >*)p);
   }
   static void destruct_maplEvectorlEintgRcOvectorlElonggRsPgR(void *p) {
      typedef map<vector<int>,vector<long> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<vector<int>,vector<long> >

namespace ROOT {
   static TClass *maplEpairlEintcOintgRcOvectorlEdoublegRsPgR_Dictionary();
   static void maplEpairlEintcOintgRcOvectorlEdoublegRsPgR_TClassManip(TClass*);
   static void *new_maplEpairlEintcOintgRcOvectorlEdoublegRsPgR(void *p = nullptr);
   static void *newArray_maplEpairlEintcOintgRcOvectorlEdoublegRsPgR(Long_t size, void *p);
   static void delete_maplEpairlEintcOintgRcOvectorlEdoublegRsPgR(void *p);
   static void deleteArray_maplEpairlEintcOintgRcOvectorlEdoublegRsPgR(void *p);
   static void destruct_maplEpairlEintcOintgRcOvectorlEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<pair<int,int>,vector<double> >*)
   {
      map<pair<int,int>,vector<double> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<pair<int,int>,vector<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<pair<int,int>,vector<double> >", -2, "map", 100,
                  typeid(map<pair<int,int>,vector<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEpairlEintcOintgRcOvectorlEdoublegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<pair<int,int>,vector<double> >) );
      instance.SetNew(&new_maplEpairlEintcOintgRcOvectorlEdoublegRsPgR);
      instance.SetNewArray(&newArray_maplEpairlEintcOintgRcOvectorlEdoublegRsPgR);
      instance.SetDelete(&delete_maplEpairlEintcOintgRcOvectorlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEpairlEintcOintgRcOvectorlEdoublegRsPgR);
      instance.SetDestructor(&destruct_maplEpairlEintcOintgRcOvectorlEdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<pair<int,int>,vector<double> > >()));

      ::ROOT::AddClassAlternate("map<pair<int,int>,vector<double> >","std::map<std::pair<int, int>, std::vector<double, std::allocator<double> >, std::less<std::pair<int, int> >, std::allocator<std::pair<std::pair<int, int> const, std::vector<double, std::allocator<double> > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<pair<int,int>,vector<double> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEpairlEintcOintgRcOvectorlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<pair<int,int>,vector<double> >*)nullptr)->GetClass();
      maplEpairlEintcOintgRcOvectorlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEpairlEintcOintgRcOvectorlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEpairlEintcOintgRcOvectorlEdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<pair<int,int>,vector<double> > : new map<pair<int,int>,vector<double> >;
   }
   static void *newArray_maplEpairlEintcOintgRcOvectorlEdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<pair<int,int>,vector<double> >[nElements] : new map<pair<int,int>,vector<double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEpairlEintcOintgRcOvectorlEdoublegRsPgR(void *p) {
      delete ((map<pair<int,int>,vector<double> >*)p);
   }
   static void deleteArray_maplEpairlEintcOintgRcOvectorlEdoublegRsPgR(void *p) {
      delete [] ((map<pair<int,int>,vector<double> >*)p);
   }
   static void destruct_maplEpairlEintcOintgRcOvectorlEdoublegRsPgR(void *p) {
      typedef map<pair<int,int>,vector<double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<pair<int,int>,vector<double> >

namespace ROOT {
   static TClass *maplEpairlEintcOintgRcOdoublegR_Dictionary();
   static void maplEpairlEintcOintgRcOdoublegR_TClassManip(TClass*);
   static void *new_maplEpairlEintcOintgRcOdoublegR(void *p = nullptr);
   static void *newArray_maplEpairlEintcOintgRcOdoublegR(Long_t size, void *p);
   static void delete_maplEpairlEintcOintgRcOdoublegR(void *p);
   static void deleteArray_maplEpairlEintcOintgRcOdoublegR(void *p);
   static void destruct_maplEpairlEintcOintgRcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<pair<int,int>,double>*)
   {
      map<pair<int,int>,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<pair<int,int>,double>));
      static ::ROOT::TGenericClassInfo 
         instance("map<pair<int,int>,double>", -2, "map", 100,
                  typeid(map<pair<int,int>,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEpairlEintcOintgRcOdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(map<pair<int,int>,double>) );
      instance.SetNew(&new_maplEpairlEintcOintgRcOdoublegR);
      instance.SetNewArray(&newArray_maplEpairlEintcOintgRcOdoublegR);
      instance.SetDelete(&delete_maplEpairlEintcOintgRcOdoublegR);
      instance.SetDeleteArray(&deleteArray_maplEpairlEintcOintgRcOdoublegR);
      instance.SetDestructor(&destruct_maplEpairlEintcOintgRcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<pair<int,int>,double> >()));

      ::ROOT::AddClassAlternate("map<pair<int,int>,double>","std::map<std::pair<int, int>, double, std::less<std::pair<int, int> >, std::allocator<std::pair<std::pair<int, int> const, double> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<pair<int,int>,double>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEpairlEintcOintgRcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<pair<int,int>,double>*)nullptr)->GetClass();
      maplEpairlEintcOintgRcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void maplEpairlEintcOintgRcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEpairlEintcOintgRcOdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<pair<int,int>,double> : new map<pair<int,int>,double>;
   }
   static void *newArray_maplEpairlEintcOintgRcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<pair<int,int>,double>[nElements] : new map<pair<int,int>,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEpairlEintcOintgRcOdoublegR(void *p) {
      delete ((map<pair<int,int>,double>*)p);
   }
   static void deleteArray_maplEpairlEintcOintgRcOdoublegR(void *p) {
      delete [] ((map<pair<int,int>,double>*)p);
   }
   static void destruct_maplEpairlEintcOintgRcOdoublegR(void *p) {
      typedef map<pair<int,int>,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<pair<int,int>,double>

namespace ROOT {
   static TClass *maplEintcOvectorlEpairlEdoublecOdoublegRsPgRsPgR_Dictionary();
   static void maplEintcOvectorlEpairlEdoublecOdoublegRsPgRsPgR_TClassManip(TClass*);
   static void *new_maplEintcOvectorlEpairlEdoublecOdoublegRsPgRsPgR(void *p = nullptr);
   static void *newArray_maplEintcOvectorlEpairlEdoublecOdoublegRsPgRsPgR(Long_t size, void *p);
   static void delete_maplEintcOvectorlEpairlEdoublecOdoublegRsPgRsPgR(void *p);
   static void deleteArray_maplEintcOvectorlEpairlEdoublecOdoublegRsPgRsPgR(void *p);
   static void destruct_maplEintcOvectorlEpairlEdoublecOdoublegRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,vector<pair<double,double> > >*)
   {
      map<int,vector<pair<double,double> > > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,vector<pair<double,double> > >));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,vector<pair<double,double> > >", -2, "map", 100,
                  typeid(map<int,vector<pair<double,double> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOvectorlEpairlEdoublecOdoublegRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,vector<pair<double,double> > >) );
      instance.SetNew(&new_maplEintcOvectorlEpairlEdoublecOdoublegRsPgRsPgR);
      instance.SetNewArray(&newArray_maplEintcOvectorlEpairlEdoublecOdoublegRsPgRsPgR);
      instance.SetDelete(&delete_maplEintcOvectorlEpairlEdoublecOdoublegRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOvectorlEpairlEdoublecOdoublegRsPgRsPgR);
      instance.SetDestructor(&destruct_maplEintcOvectorlEpairlEdoublecOdoublegRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,vector<pair<double,double> > > >()));

      ::ROOT::AddClassAlternate("map<int,vector<pair<double,double> > >","std::map<int, std::vector<std::pair<double, double>, std::allocator<std::pair<double, double> > >, std::less<int>, std::allocator<std::pair<int const, std::vector<std::pair<double, double>, std::allocator<std::pair<double, double> > > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,vector<pair<double,double> > >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOvectorlEpairlEdoublecOdoublegRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,vector<pair<double,double> > >*)nullptr)->GetClass();
      maplEintcOvectorlEpairlEdoublecOdoublegRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOvectorlEpairlEdoublecOdoublegRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOvectorlEpairlEdoublecOdoublegRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,vector<pair<double,double> > > : new map<int,vector<pair<double,double> > >;
   }
   static void *newArray_maplEintcOvectorlEpairlEdoublecOdoublegRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,vector<pair<double,double> > >[nElements] : new map<int,vector<pair<double,double> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOvectorlEpairlEdoublecOdoublegRsPgRsPgR(void *p) {
      delete ((map<int,vector<pair<double,double> > >*)p);
   }
   static void deleteArray_maplEintcOvectorlEpairlEdoublecOdoublegRsPgRsPgR(void *p) {
      delete [] ((map<int,vector<pair<double,double> > >*)p);
   }
   static void destruct_maplEintcOvectorlEpairlEdoublecOdoublegRsPgRsPgR(void *p) {
      typedef map<int,vector<pair<double,double> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,vector<pair<double,double> > >

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

namespace {
  void TriggerDictionaryInitialization_G__BmnPhysicsDict_Impl() {
    static const char* headers[] = {
"BmnTwoParticleDecay.h",
"BmnParticlePair.h",
"BmnParticlePairsInfo.h",
"BmnParticlePairCut.h",
"BmnMassSpectrumAnal.h",
"BmnEfficiency.h",
"BmnEfficiencyProbability.h",
"BmnRealisticMc.h",
"BmnEfficiencyTools.h",
"BmnDataTriggerInfo.h",
"BmnLambdaEmbeddingMonitor.h",
"BmnParticleStore.h",
"BmnLambdaEmbeddingQa.h",
"BmnLambdaEmbeddingDrawHistos.h",
"BmnLambdaMisc.h",
"BmnInnerTrackerGeometryDraw.h",
"BmnLambdaEmbedding.h",
"BmnLambdaAnalRun7.h",
"BmnDataAnalRun7.h",
"BmnTriggerEfficiencyRun7.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/database/uni_db",
"/data/yaopeng/bmnroot_Yaopeng/database/elog_db",
"/data/yaopeng/bmnroot_Yaopeng/database/tango",
"/data/yaopeng/bmnroot_Yaopeng/database/tools",
"/data/yaopeng/bmnroot_Yaopeng/field",
"/data/yaopeng/bmnroot_Yaopeng/base",
"/data/yaopeng/bmnroot_Yaopeng/base/data",
"/data/yaopeng/bmnroot_Yaopeng/base/raw",
"/data/yaopeng/bmnroot_Yaopeng/base/header",
"/data/yaopeng/bmnroot_Yaopeng/base/math",
"/data/yaopeng/bmnroot_Yaopeng/base/cbm",
"/data/yaopeng/bmnroot_Yaopeng/detectors/mwpc",
"/data/yaopeng/bmnroot_Yaopeng/detectors/silicon",
"/data/yaopeng/bmnroot_Yaopeng/detectors/gem",
"/data/yaopeng/bmnroot_Yaopeng/detectors/csc",
"/data/yaopeng/bmnroot_Yaopeng/detectors/dch",
"/data/yaopeng/bmnroot_Yaopeng/detectors/tof1",
"/data/yaopeng/bmnroot_Yaopeng/detectors/tof",
"/data/yaopeng/bmnroot_Yaopeng/detectors/tofcal",
"/data/yaopeng/bmnroot_Yaopeng/detectors/ecal",
"/data/yaopeng/bmnroot_Yaopeng/detectors/zdc",
"/data/yaopeng/bmnroot_Yaopeng/detectors/scwall",
"/data/yaopeng/bmnroot_Yaopeng/detectors/hodo",
"/data/yaopeng/bmnroot_Yaopeng/detectors/fhcal",
"/data/yaopeng/bmnroot_Yaopeng/detectors/ndet",
"/data/yaopeng/bmnroot_Yaopeng/detectors/land",
"/data/yaopeng/bmnroot_Yaopeng/decoder",
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/bmnrecotools",
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/globaltracking",
"/data/yaopeng/bmnroot_Yaopeng/physics",
"/data/yaopeng/bmnroot_Yaopeng/physics/decay",
"/data/yaopeng/bmnroot_Yaopeng/physics/efficiency",
"/data/yaopeng/bmnroot_Yaopeng/physics/embedding",
"/data/yaopeng/bmnroot_Yaopeng/physics/run7",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/physics/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__BmnPhysicsDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$BmnParticlePair.h")))  __attribute__((annotate("$clingAutoload$BmnTwoParticleDecay.h")))  BmnParticlePair;
class __attribute__((annotate("$clingAutoload$BmnTwoParticleDecay.h")))  DstEventHeaderExtended;
class __attribute__((annotate("$clingAutoload$BmnTwoParticleDecay.h")))  BmnTwoParticleDecay;
class __attribute__((annotate("$clingAutoload$BmnParticlePairsInfo.h")))  BmnParticlePairsInfo;
class __attribute__((annotate("$clingAutoload$BmnParticlePairCut.h")))  BmnParticlePairCut;
class __attribute__((annotate("$clingAutoload$BmnMassSpectrumAnal.h")))  BmnMassSpectrumAnal;
class __attribute__((annotate("$clingAutoload$BmnInnerTrackerGeometryDraw.h")))  __attribute__((annotate("$clingAutoload$BmnEfficiency.h")))  BmnInnerTrackerGeometryDraw;
class __attribute__((annotate("$clingAutoload$BmnEfficiency.h")))  EffStore;
class __attribute__((annotate("$clingAutoload$BmnEfficiency.h")))  InnerTrackerParams;
class __attribute__((annotate("$clingAutoload$BmnEfficiency.h")))  EffStore2D;
class __attribute__((annotate("$clingAutoload$BmnEfficiency.h")))  Residuals;
class __attribute__((annotate("$clingAutoload$BmnEfficiency.h")))  BmnEfficiency;
class __attribute__((annotate("$clingAutoload$BmnEfficiencyProbability.h")))  BmnEfficiencyProbability;
class __attribute__((annotate("$clingAutoload$BmnRealisticMc.h")))  BmnRealisticMc;
class __attribute__((annotate("$clingAutoload$BmnDataTriggerInfo.h")))  __attribute__((annotate("$clingAutoload$BmnEfficiencyTools.h")))  BmnDataTriggerInfo;
class __attribute__((annotate("$clingAutoload$BmnEfficiencyTools.h")))  BmnEfficiencyTools;
class __attribute__((annotate("$clingAutoload$BmnLambdaEmbeddingMonitor.h")))  BmnLambdaEmbeddingMonitor;
class __attribute__((annotate("$clingAutoload$BmnParticleStore.h")))  BmnParticleStore;
class __attribute__((annotate("$clingAutoload$BmnLambdaMisc.h")))  __attribute__((annotate("$clingAutoload$BmnLambdaEmbeddingQa.h")))  BmnLambdaMisc;
class __attribute__((annotate("$clingAutoload$BmnLambdaEmbeddingDrawHistos.h")))  __attribute__((annotate("$clingAutoload$BmnLambdaEmbeddingQa.h")))  BmnLambdaEmbeddingDrawHistos;
class __attribute__((annotate("$clingAutoload$BmnLambdaEmbeddingQa.h")))  BmnLambdaEmbeddingQa;
class __attribute__((annotate("$clingAutoload$BmnLambdaEmbedding.h")))  BmnLambdaEmbedding;
class __attribute__((annotate("$clingAutoload$BmnLambdaAnalRun7.h")))  TriggerEfficiency;
class __attribute__((annotate("$clingAutoload$BmnLambdaAnalRun7.h")))  BmnLambdaAnalRun7;
class __attribute__((annotate("$clingAutoload$BmnDataAnalRun7.h")))  BmnDataAnalRun7;
class __attribute__((annotate("$clingAutoload$BmnTriggerEfficiencyRun7.h")))  BmnTriggerEfficiencyRun7;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__BmnPhysicsDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "BmnTwoParticleDecay.h"
#include "BmnParticlePair.h"
#include "BmnParticlePairsInfo.h"
#include "BmnParticlePairCut.h"
#include "BmnMassSpectrumAnal.h"
#include "BmnEfficiency.h"
#include "BmnEfficiencyProbability.h"
#include "BmnRealisticMc.h"
#include "BmnEfficiencyTools.h"
#include "BmnDataTriggerInfo.h"
#include "BmnLambdaEmbeddingMonitor.h"
#include "BmnParticleStore.h"
#include "BmnLambdaEmbeddingQa.h"
#include "BmnLambdaEmbeddingDrawHistos.h"
#include "BmnLambdaMisc.h"
#include "BmnInnerTrackerGeometryDraw.h"
#include "BmnLambdaEmbedding.h"
#include "BmnLambdaAnalRun7.h"
#include "BmnDataAnalRun7.h"
#include "BmnTriggerEfficiencyRun7.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BmnDataAnalRun7", payloadCode, "@",
"BmnDataTriggerInfo", payloadCode, "@",
"BmnEfficiency", payloadCode, "@",
"BmnEfficiencyProbability", payloadCode, "@",
"BmnEfficiencyTools", payloadCode, "@",
"BmnInnerTrackerGeometryDraw", payloadCode, "@",
"BmnLambdaAnalRun7", payloadCode, "@",
"BmnLambdaEmbedding", payloadCode, "@",
"BmnLambdaEmbeddingDrawHistos", payloadCode, "@",
"BmnLambdaEmbeddingMonitor", payloadCode, "@",
"BmnLambdaEmbeddingQa", payloadCode, "@",
"BmnLambdaMisc", payloadCode, "@",
"BmnMassSpectrumAnal", payloadCode, "@",
"BmnParticlePair", payloadCode, "@",
"BmnParticlePairCut", payloadCode, "@",
"BmnParticlePairsInfo", payloadCode, "@",
"BmnParticleStore", payloadCode, "@",
"BmnRealisticMc", payloadCode, "@",
"BmnTriggerEfficiencyRun7", payloadCode, "@",
"BmnTwoParticleDecay", payloadCode, "@",
"DstEventHeaderExtended", payloadCode, "@",
"EffStore", payloadCode, "@",
"EffStore2D", payloadCode, "@",
"InnerTrackerParams", payloadCode, "@",
"Residuals", payloadCode, "@",
"TriggerEfficiency", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__BmnPhysicsDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__BmnPhysicsDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__BmnPhysicsDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__BmnPhysicsDict() {
  TriggerDictionaryInitialization_G__BmnPhysicsDict_Impl();
}
