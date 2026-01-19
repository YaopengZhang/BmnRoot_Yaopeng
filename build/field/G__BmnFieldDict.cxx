// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIfielddIG__BmnFieldDict
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
#include "BmnNewFieldMap.h"
#include "BmnFieldConst.h"
#include "BmnFieldContFact.h"
#include "BmnFieldMap.h"
#include "BmnFieldMapData.h"
#include "BmnFieldMapSym3.h"
#include "BmnFieldPar.h"
#include "BmnFieldCreator.h"
#include "BmnSP41FieldMapCreator.h"
#include "BmnRegion.h"
#include "BmnConstPar.h"
#include "BmnMapPar.h"
#include "BmnMultiFieldPar.h"
#include "BmnMultiField.h"
#include "BmnFieldParser.h"
#include "BmnFieldPoint.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BmnFieldMapData(void *p = nullptr);
   static void *newArray_BmnFieldMapData(Long_t size, void *p);
   static void delete_BmnFieldMapData(void *p);
   static void deleteArray_BmnFieldMapData(void *p);
   static void destruct_BmnFieldMapData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFieldMapData*)
   {
      ::BmnFieldMapData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnFieldMapData >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnFieldMapData", ::BmnFieldMapData::Class_Version(), "BmnFieldMapData.h", 32,
                  typeid(::BmnFieldMapData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnFieldMapData::Dictionary, isa_proxy, 4,
                  sizeof(::BmnFieldMapData) );
      instance.SetNew(&new_BmnFieldMapData);
      instance.SetNewArray(&newArray_BmnFieldMapData);
      instance.SetDelete(&delete_BmnFieldMapData);
      instance.SetDeleteArray(&deleteArray_BmnFieldMapData);
      instance.SetDestructor(&destruct_BmnFieldMapData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFieldMapData*)
   {
      return GenerateInitInstanceLocal((::BmnFieldMapData*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFieldMapData*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnFieldPar(void *p = nullptr);
   static void *newArray_BmnFieldPar(Long_t size, void *p);
   static void delete_BmnFieldPar(void *p);
   static void deleteArray_BmnFieldPar(void *p);
   static void destruct_BmnFieldPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFieldPar*)
   {
      ::BmnFieldPar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnFieldPar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnFieldPar", ::BmnFieldPar::Class_Version(), "BmnFieldPar.h", 27,
                  typeid(::BmnFieldPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnFieldPar::Dictionary, isa_proxy, 4,
                  sizeof(::BmnFieldPar) );
      instance.SetNew(&new_BmnFieldPar);
      instance.SetNewArray(&newArray_BmnFieldPar);
      instance.SetDelete(&delete_BmnFieldPar);
      instance.SetDeleteArray(&deleteArray_BmnFieldPar);
      instance.SetDestructor(&destruct_BmnFieldPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFieldPar*)
   {
      return GenerateInitInstanceLocal((::BmnFieldPar*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFieldPar*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnFieldMap(void *p);
   static void deleteArray_BmnFieldMap(void *p);
   static void destruct_BmnFieldMap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFieldMap*)
   {
      ::BmnFieldMap *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnFieldMap >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnFieldMap", ::BmnFieldMap::Class_Version(), "BmnFieldMap.h", 20,
                  typeid(::BmnFieldMap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnFieldMap::Dictionary, isa_proxy, 4,
                  sizeof(::BmnFieldMap) );
      instance.SetDelete(&delete_BmnFieldMap);
      instance.SetDeleteArray(&deleteArray_BmnFieldMap);
      instance.SetDestructor(&destruct_BmnFieldMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFieldMap*)
   {
      return GenerateInitInstanceLocal((::BmnFieldMap*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFieldMap*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnNewFieldMap(void *p = nullptr);
   static void *newArray_BmnNewFieldMap(Long_t size, void *p);
   static void delete_BmnNewFieldMap(void *p);
   static void deleteArray_BmnNewFieldMap(void *p);
   static void destruct_BmnNewFieldMap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnNewFieldMap*)
   {
      ::BmnNewFieldMap *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnNewFieldMap >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnNewFieldMap", ::BmnNewFieldMap::Class_Version(), "BmnNewFieldMap.h", 16,
                  typeid(::BmnNewFieldMap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnNewFieldMap::Dictionary, isa_proxy, 4,
                  sizeof(::BmnNewFieldMap) );
      instance.SetNew(&new_BmnNewFieldMap);
      instance.SetNewArray(&newArray_BmnNewFieldMap);
      instance.SetDelete(&delete_BmnNewFieldMap);
      instance.SetDeleteArray(&deleteArray_BmnNewFieldMap);
      instance.SetDestructor(&destruct_BmnNewFieldMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnNewFieldMap*)
   {
      return GenerateInitInstanceLocal((::BmnNewFieldMap*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnNewFieldMap*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnFieldConst(void *p = nullptr);
   static void *newArray_BmnFieldConst(Long_t size, void *p);
   static void delete_BmnFieldConst(void *p);
   static void deleteArray_BmnFieldConst(void *p);
   static void destruct_BmnFieldConst(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFieldConst*)
   {
      ::BmnFieldConst *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnFieldConst >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnFieldConst", ::BmnFieldConst::Class_Version(), "BmnFieldConst.h", 16,
                  typeid(::BmnFieldConst), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnFieldConst::Dictionary, isa_proxy, 4,
                  sizeof(::BmnFieldConst) );
      instance.SetNew(&new_BmnFieldConst);
      instance.SetNewArray(&newArray_BmnFieldConst);
      instance.SetDelete(&delete_BmnFieldConst);
      instance.SetDeleteArray(&deleteArray_BmnFieldConst);
      instance.SetDestructor(&destruct_BmnFieldConst);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFieldConst*)
   {
      return GenerateInitInstanceLocal((::BmnFieldConst*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFieldConst*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnFieldContFact(void *p = nullptr);
   static void *newArray_BmnFieldContFact(Long_t size, void *p);
   static void delete_BmnFieldContFact(void *p);
   static void deleteArray_BmnFieldContFact(void *p);
   static void destruct_BmnFieldContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFieldContFact*)
   {
      ::BmnFieldContFact *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnFieldContFact >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnFieldContFact", ::BmnFieldContFact::Class_Version(), "BmnFieldContFact.h", 27,
                  typeid(::BmnFieldContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnFieldContFact::Dictionary, isa_proxy, 4,
                  sizeof(::BmnFieldContFact) );
      instance.SetNew(&new_BmnFieldContFact);
      instance.SetNewArray(&newArray_BmnFieldContFact);
      instance.SetDelete(&delete_BmnFieldContFact);
      instance.SetDeleteArray(&deleteArray_BmnFieldContFact);
      instance.SetDestructor(&destruct_BmnFieldContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFieldContFact*)
   {
      return GenerateInitInstanceLocal((::BmnFieldContFact*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFieldContFact*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnFieldMapSym3(void *p = nullptr);
   static void *newArray_BmnFieldMapSym3(Long_t size, void *p);
   static void delete_BmnFieldMapSym3(void *p);
   static void deleteArray_BmnFieldMapSym3(void *p);
   static void destruct_BmnFieldMapSym3(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFieldMapSym3*)
   {
      ::BmnFieldMapSym3 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnFieldMapSym3 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnFieldMapSym3", ::BmnFieldMapSym3::Class_Version(), "BmnFieldMapSym3.h", 30,
                  typeid(::BmnFieldMapSym3), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnFieldMapSym3::Dictionary, isa_proxy, 4,
                  sizeof(::BmnFieldMapSym3) );
      instance.SetNew(&new_BmnFieldMapSym3);
      instance.SetNewArray(&newArray_BmnFieldMapSym3);
      instance.SetDelete(&delete_BmnFieldMapSym3);
      instance.SetDeleteArray(&deleteArray_BmnFieldMapSym3);
      instance.SetDestructor(&destruct_BmnFieldMapSym3);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFieldMapSym3*)
   {
      return GenerateInitInstanceLocal((::BmnFieldMapSym3*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFieldMapSym3*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnFieldCreator(void *p = nullptr);
   static void *newArray_BmnFieldCreator(Long_t size, void *p);
   static void delete_BmnFieldCreator(void *p);
   static void deleteArray_BmnFieldCreator(void *p);
   static void destruct_BmnFieldCreator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFieldCreator*)
   {
      ::BmnFieldCreator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnFieldCreator >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnFieldCreator", ::BmnFieldCreator::Class_Version(), "BmnFieldCreator.h", 14,
                  typeid(::BmnFieldCreator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnFieldCreator::Dictionary, isa_proxy, 4,
                  sizeof(::BmnFieldCreator) );
      instance.SetNew(&new_BmnFieldCreator);
      instance.SetNewArray(&newArray_BmnFieldCreator);
      instance.SetDelete(&delete_BmnFieldCreator);
      instance.SetDeleteArray(&deleteArray_BmnFieldCreator);
      instance.SetDestructor(&destruct_BmnFieldCreator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFieldCreator*)
   {
      return GenerateInitInstanceLocal((::BmnFieldCreator*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFieldCreator*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_fitParMonitor(void *p = nullptr);
   static void *newArray_fitParMonitor(Long_t size, void *p);
   static void delete_fitParMonitor(void *p);
   static void deleteArray_fitParMonitor(void *p);
   static void destruct_fitParMonitor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::fitParMonitor*)
   {
      ::fitParMonitor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::fitParMonitor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("fitParMonitor", ::fitParMonitor::Class_Version(), "BmnSP41FieldMapCreator.h", 27,
                  typeid(::fitParMonitor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::fitParMonitor::Dictionary, isa_proxy, 4,
                  sizeof(::fitParMonitor) );
      instance.SetNew(&new_fitParMonitor);
      instance.SetNewArray(&newArray_fitParMonitor);
      instance.SetDelete(&delete_fitParMonitor);
      instance.SetDeleteArray(&deleteArray_fitParMonitor);
      instance.SetDestructor(&destruct_fitParMonitor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::fitParMonitor*)
   {
      return GenerateInitInstanceLocal((::fitParMonitor*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::fitParMonitor*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_extrapolationConditions(void *p = nullptr);
   static void *newArray_extrapolationConditions(Long_t size, void *p);
   static void delete_extrapolationConditions(void *p);
   static void deleteArray_extrapolationConditions(void *p);
   static void destruct_extrapolationConditions(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::extrapolationConditions*)
   {
      ::extrapolationConditions *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::extrapolationConditions >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("extrapolationConditions", ::extrapolationConditions::Class_Version(), "BmnSP41FieldMapCreator.h", 83,
                  typeid(::extrapolationConditions), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::extrapolationConditions::Dictionary, isa_proxy, 4,
                  sizeof(::extrapolationConditions) );
      instance.SetNew(&new_extrapolationConditions);
      instance.SetNewArray(&newArray_extrapolationConditions);
      instance.SetDelete(&delete_extrapolationConditions);
      instance.SetDeleteArray(&deleteArray_extrapolationConditions);
      instance.SetDestructor(&destruct_extrapolationConditions);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::extrapolationConditions*)
   {
      return GenerateInitInstanceLocal((::extrapolationConditions*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::extrapolationConditions*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_smoothedValues(void *p = nullptr);
   static void *newArray_smoothedValues(Long_t size, void *p);
   static void delete_smoothedValues(void *p);
   static void deleteArray_smoothedValues(void *p);
   static void destruct_smoothedValues(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::smoothedValues*)
   {
      ::smoothedValues *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::smoothedValues >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("smoothedValues", ::smoothedValues::Class_Version(), "BmnSP41FieldMapCreator.h", 107,
                  typeid(::smoothedValues), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::smoothedValues::Dictionary, isa_proxy, 4,
                  sizeof(::smoothedValues) );
      instance.SetNew(&new_smoothedValues);
      instance.SetNewArray(&newArray_smoothedValues);
      instance.SetDelete(&delete_smoothedValues);
      instance.SetDeleteArray(&deleteArray_smoothedValues);
      instance.SetDestructor(&destruct_smoothedValues);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::smoothedValues*)
   {
      return GenerateInitInstanceLocal((::smoothedValues*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::smoothedValues*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSP41FieldMapCreator(void *p = nullptr);
   static void *newArray_BmnSP41FieldMapCreator(Long_t size, void *p);
   static void delete_BmnSP41FieldMapCreator(void *p);
   static void deleteArray_BmnSP41FieldMapCreator(void *p);
   static void destruct_BmnSP41FieldMapCreator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSP41FieldMapCreator*)
   {
      ::BmnSP41FieldMapCreator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSP41FieldMapCreator >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSP41FieldMapCreator", ::BmnSP41FieldMapCreator::Class_Version(), "BmnSP41FieldMapCreator.h", 132,
                  typeid(::BmnSP41FieldMapCreator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSP41FieldMapCreator::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSP41FieldMapCreator) );
      instance.SetNew(&new_BmnSP41FieldMapCreator);
      instance.SetNewArray(&newArray_BmnSP41FieldMapCreator);
      instance.SetDelete(&delete_BmnSP41FieldMapCreator);
      instance.SetDeleteArray(&deleteArray_BmnSP41FieldMapCreator);
      instance.SetDestructor(&destruct_BmnSP41FieldMapCreator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSP41FieldMapCreator*)
   {
      return GenerateInitInstanceLocal((::BmnSP41FieldMapCreator*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSP41FieldMapCreator*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnRegion(void *p);
   static void deleteArray_BmnRegion(void *p);
   static void destruct_BmnRegion(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnRegion*)
   {
      ::BmnRegion *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnRegion >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnRegion", ::BmnRegion::Class_Version(), "BmnRegion.h", 5,
                  typeid(::BmnRegion), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnRegion::Dictionary, isa_proxy, 4,
                  sizeof(::BmnRegion) );
      instance.SetDelete(&delete_BmnRegion);
      instance.SetDeleteArray(&deleteArray_BmnRegion);
      instance.SetDestructor(&destruct_BmnRegion);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnRegion*)
   {
      return GenerateInitInstanceLocal((::BmnRegion*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnRegion*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMapPar(void *p = nullptr);
   static void *newArray_BmnMapPar(Long_t size, void *p);
   static void delete_BmnMapPar(void *p);
   static void deleteArray_BmnMapPar(void *p);
   static void destruct_BmnMapPar(void *p);
   static void streamer_BmnMapPar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMapPar*)
   {
      ::BmnMapPar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMapPar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMapPar", ::BmnMapPar::Class_Version(), "BmnMapPar.h", 9,
                  typeid(::BmnMapPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMapPar::Dictionary, isa_proxy, 16,
                  sizeof(::BmnMapPar) );
      instance.SetNew(&new_BmnMapPar);
      instance.SetNewArray(&newArray_BmnMapPar);
      instance.SetDelete(&delete_BmnMapPar);
      instance.SetDeleteArray(&deleteArray_BmnMapPar);
      instance.SetDestructor(&destruct_BmnMapPar);
      instance.SetStreamerFunc(&streamer_BmnMapPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMapPar*)
   {
      return GenerateInitInstanceLocal((::BmnMapPar*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMapPar*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnConstPar(void *p = nullptr);
   static void *newArray_BmnConstPar(Long_t size, void *p);
   static void delete_BmnConstPar(void *p);
   static void deleteArray_BmnConstPar(void *p);
   static void destruct_BmnConstPar(void *p);
   static void streamer_BmnConstPar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnConstPar*)
   {
      ::BmnConstPar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnConstPar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnConstPar", ::BmnConstPar::Class_Version(), "BmnConstPar.h", 10,
                  typeid(::BmnConstPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnConstPar::Dictionary, isa_proxy, 16,
                  sizeof(::BmnConstPar) );
      instance.SetNew(&new_BmnConstPar);
      instance.SetNewArray(&newArray_BmnConstPar);
      instance.SetDelete(&delete_BmnConstPar);
      instance.SetDeleteArray(&deleteArray_BmnConstPar);
      instance.SetDestructor(&destruct_BmnConstPar);
      instance.SetStreamerFunc(&streamer_BmnConstPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnConstPar*)
   {
      return GenerateInitInstanceLocal((::BmnConstPar*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnConstPar*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMultiField(void *p = nullptr);
   static void *newArray_BmnMultiField(Long_t size, void *p);
   static void delete_BmnMultiField(void *p);
   static void deleteArray_BmnMultiField(void *p);
   static void destruct_BmnMultiField(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMultiField*)
   {
      ::BmnMultiField *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMultiField >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMultiField", ::BmnMultiField::Class_Version(), "BmnMultiField.h", 11,
                  typeid(::BmnMultiField), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMultiField::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMultiField) );
      instance.SetNew(&new_BmnMultiField);
      instance.SetNewArray(&newArray_BmnMultiField);
      instance.SetDelete(&delete_BmnMultiField);
      instance.SetDeleteArray(&deleteArray_BmnMultiField);
      instance.SetDestructor(&destruct_BmnMultiField);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMultiField*)
   {
      return GenerateInitInstanceLocal((::BmnMultiField*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMultiField*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMultiFieldPar(void *p = nullptr);
   static void *newArray_BmnMultiFieldPar(Long_t size, void *p);
   static void delete_BmnMultiFieldPar(void *p);
   static void deleteArray_BmnMultiFieldPar(void *p);
   static void destruct_BmnMultiFieldPar(void *p);
   static void streamer_BmnMultiFieldPar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMultiFieldPar*)
   {
      ::BmnMultiFieldPar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMultiFieldPar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMultiFieldPar", ::BmnMultiFieldPar::Class_Version(), "BmnMultiFieldPar.h", 11,
                  typeid(::BmnMultiFieldPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMultiFieldPar::Dictionary, isa_proxy, 16,
                  sizeof(::BmnMultiFieldPar) );
      instance.SetNew(&new_BmnMultiFieldPar);
      instance.SetNewArray(&newArray_BmnMultiFieldPar);
      instance.SetDelete(&delete_BmnMultiFieldPar);
      instance.SetDeleteArray(&deleteArray_BmnMultiFieldPar);
      instance.SetDestructor(&destruct_BmnMultiFieldPar);
      instance.SetStreamerFunc(&streamer_BmnMultiFieldPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMultiFieldPar*)
   {
      return GenerateInitInstanceLocal((::BmnMultiFieldPar*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMultiFieldPar*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnFieldPoint_Dictionary();
   static void BmnFieldPoint_TClassManip(TClass*);
   static void *new_BmnFieldPoint(void *p = nullptr);
   static void *newArray_BmnFieldPoint(Long_t size, void *p);
   static void delete_BmnFieldPoint(void *p);
   static void deleteArray_BmnFieldPoint(void *p);
   static void destruct_BmnFieldPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFieldPoint*)
   {
      ::BmnFieldPoint *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnFieldPoint));
      static ::ROOT::TGenericClassInfo 
         instance("BmnFieldPoint", "BmnFieldPoint.h", 15,
                  typeid(::BmnFieldPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnFieldPoint_Dictionary, isa_proxy, 4,
                  sizeof(::BmnFieldPoint) );
      instance.SetNew(&new_BmnFieldPoint);
      instance.SetNewArray(&newArray_BmnFieldPoint);
      instance.SetDelete(&delete_BmnFieldPoint);
      instance.SetDeleteArray(&deleteArray_BmnFieldPoint);
      instance.SetDestructor(&destruct_BmnFieldPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFieldPoint*)
   {
      return GenerateInitInstanceLocal((::BmnFieldPoint*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFieldPoint*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnFieldPoint_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnFieldPoint*)nullptr)->GetClass();
      BmnFieldPoint_TClassManip(theClass);
   return theClass;
   }

   static void BmnFieldPoint_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnFieldParser_Dictionary();
   static void BmnFieldParser_TClassManip(TClass*);
   static void *new_BmnFieldParser(void *p = nullptr);
   static void *newArray_BmnFieldParser(Long_t size, void *p);
   static void delete_BmnFieldParser(void *p);
   static void deleteArray_BmnFieldParser(void *p);
   static void destruct_BmnFieldParser(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFieldParser*)
   {
      ::BmnFieldParser *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnFieldParser));
      static ::ROOT::TGenericClassInfo 
         instance("BmnFieldParser", "BmnFieldParser.h", 26,
                  typeid(::BmnFieldParser), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnFieldParser_Dictionary, isa_proxy, 4,
                  sizeof(::BmnFieldParser) );
      instance.SetNew(&new_BmnFieldParser);
      instance.SetNewArray(&newArray_BmnFieldParser);
      instance.SetDelete(&delete_BmnFieldParser);
      instance.SetDeleteArray(&deleteArray_BmnFieldParser);
      instance.SetDestructor(&destruct_BmnFieldParser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFieldParser*)
   {
      return GenerateInitInstanceLocal((::BmnFieldParser*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFieldParser*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnFieldParser_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnFieldParser*)nullptr)->GetClass();
      BmnFieldParser_TClassManip(theClass);
   return theClass;
   }

   static void BmnFieldParser_TClassManip(TClass* ){
   }

} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnFieldMapData::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnFieldMapData::Class_Name()
{
   return "BmnFieldMapData";
}

//______________________________________________________________________________
const char *BmnFieldMapData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldMapData*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnFieldMapData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldMapData*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnFieldMapData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldMapData*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnFieldMapData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldMapData*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnFieldPar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnFieldPar::Class_Name()
{
   return "BmnFieldPar";
}

//______________________________________________________________________________
const char *BmnFieldPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldPar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnFieldPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldPar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnFieldPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldPar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnFieldPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldPar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnFieldMap::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnFieldMap::Class_Name()
{
   return "BmnFieldMap";
}

//______________________________________________________________________________
const char *BmnFieldMap::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldMap*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnFieldMap::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldMap*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnFieldMap::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldMap*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnFieldMap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldMap*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnNewFieldMap::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnNewFieldMap::Class_Name()
{
   return "BmnNewFieldMap";
}

//______________________________________________________________________________
const char *BmnNewFieldMap::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnNewFieldMap*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnNewFieldMap::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnNewFieldMap*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnNewFieldMap::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnNewFieldMap*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnNewFieldMap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnNewFieldMap*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnFieldConst::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnFieldConst::Class_Name()
{
   return "BmnFieldConst";
}

//______________________________________________________________________________
const char *BmnFieldConst::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldConst*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnFieldConst::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldConst*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnFieldConst::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldConst*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnFieldConst::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldConst*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnFieldContFact::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnFieldContFact::Class_Name()
{
   return "BmnFieldContFact";
}

//______________________________________________________________________________
const char *BmnFieldContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldContFact*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnFieldContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldContFact*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnFieldContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldContFact*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnFieldContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldContFact*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnFieldMapSym3::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnFieldMapSym3::Class_Name()
{
   return "BmnFieldMapSym3";
}

//______________________________________________________________________________
const char *BmnFieldMapSym3::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldMapSym3*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnFieldMapSym3::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldMapSym3*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnFieldMapSym3::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldMapSym3*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnFieldMapSym3::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldMapSym3*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnFieldCreator::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnFieldCreator::Class_Name()
{
   return "BmnFieldCreator";
}

//______________________________________________________________________________
const char *BmnFieldCreator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldCreator*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnFieldCreator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldCreator*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnFieldCreator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldCreator*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnFieldCreator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldCreator*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr fitParMonitor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *fitParMonitor::Class_Name()
{
   return "fitParMonitor";
}

//______________________________________________________________________________
const char *fitParMonitor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::fitParMonitor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int fitParMonitor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::fitParMonitor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *fitParMonitor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::fitParMonitor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *fitParMonitor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::fitParMonitor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr extrapolationConditions::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *extrapolationConditions::Class_Name()
{
   return "extrapolationConditions";
}

//______________________________________________________________________________
const char *extrapolationConditions::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::extrapolationConditions*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int extrapolationConditions::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::extrapolationConditions*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *extrapolationConditions::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::extrapolationConditions*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *extrapolationConditions::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::extrapolationConditions*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr smoothedValues::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *smoothedValues::Class_Name()
{
   return "smoothedValues";
}

//______________________________________________________________________________
const char *smoothedValues::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::smoothedValues*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int smoothedValues::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::smoothedValues*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *smoothedValues::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::smoothedValues*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *smoothedValues::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::smoothedValues*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSP41FieldMapCreator::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSP41FieldMapCreator::Class_Name()
{
   return "BmnSP41FieldMapCreator";
}

//______________________________________________________________________________
const char *BmnSP41FieldMapCreator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSP41FieldMapCreator*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSP41FieldMapCreator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSP41FieldMapCreator*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSP41FieldMapCreator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSP41FieldMapCreator*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSP41FieldMapCreator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSP41FieldMapCreator*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnRegion::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnRegion::Class_Name()
{
   return "BmnRegion";
}

//______________________________________________________________________________
const char *BmnRegion::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnRegion*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnRegion::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnRegion*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnRegion::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnRegion*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnRegion::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnRegion*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMapPar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMapPar::Class_Name()
{
   return "BmnMapPar";
}

//______________________________________________________________________________
const char *BmnMapPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMapPar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMapPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMapPar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMapPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMapPar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMapPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMapPar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnConstPar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnConstPar::Class_Name()
{
   return "BmnConstPar";
}

//______________________________________________________________________________
const char *BmnConstPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnConstPar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnConstPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnConstPar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnConstPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnConstPar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnConstPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnConstPar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMultiField::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMultiField::Class_Name()
{
   return "BmnMultiField";
}

//______________________________________________________________________________
const char *BmnMultiField::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMultiField*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMultiField::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMultiField*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMultiField::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMultiField*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMultiField::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMultiField*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMultiFieldPar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMultiFieldPar::Class_Name()
{
   return "BmnMultiFieldPar";
}

//______________________________________________________________________________
const char *BmnMultiFieldPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMultiFieldPar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMultiFieldPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMultiFieldPar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMultiFieldPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMultiFieldPar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMultiFieldPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMultiFieldPar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnFieldMapData::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnFieldMapData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnFieldMapData::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnFieldMapData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnFieldMapData(void *p) {
      return  p ? new(p) ::BmnFieldMapData : new ::BmnFieldMapData;
   }
   static void *newArray_BmnFieldMapData(Long_t nElements, void *p) {
      return p ? new(p) ::BmnFieldMapData[nElements] : new ::BmnFieldMapData[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnFieldMapData(void *p) {
      delete ((::BmnFieldMapData*)p);
   }
   static void deleteArray_BmnFieldMapData(void *p) {
      delete [] ((::BmnFieldMapData*)p);
   }
   static void destruct_BmnFieldMapData(void *p) {
      typedef ::BmnFieldMapData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFieldMapData

//______________________________________________________________________________
void BmnFieldPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnFieldPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnFieldPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnFieldPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnFieldPar(void *p) {
      return  p ? new(p) ::BmnFieldPar : new ::BmnFieldPar;
   }
   static void *newArray_BmnFieldPar(Long_t nElements, void *p) {
      return p ? new(p) ::BmnFieldPar[nElements] : new ::BmnFieldPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnFieldPar(void *p) {
      delete ((::BmnFieldPar*)p);
   }
   static void deleteArray_BmnFieldPar(void *p) {
      delete [] ((::BmnFieldPar*)p);
   }
   static void destruct_BmnFieldPar(void *p) {
      typedef ::BmnFieldPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFieldPar

//______________________________________________________________________________
void BmnFieldMap::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnFieldMap.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnFieldMap::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnFieldMap::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnFieldMap(void *p) {
      delete ((::BmnFieldMap*)p);
   }
   static void deleteArray_BmnFieldMap(void *p) {
      delete [] ((::BmnFieldMap*)p);
   }
   static void destruct_BmnFieldMap(void *p) {
      typedef ::BmnFieldMap current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFieldMap

//______________________________________________________________________________
void BmnNewFieldMap::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnNewFieldMap.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnNewFieldMap::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnNewFieldMap::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnNewFieldMap(void *p) {
      return  p ? new(p) ::BmnNewFieldMap : new ::BmnNewFieldMap;
   }
   static void *newArray_BmnNewFieldMap(Long_t nElements, void *p) {
      return p ? new(p) ::BmnNewFieldMap[nElements] : new ::BmnNewFieldMap[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnNewFieldMap(void *p) {
      delete ((::BmnNewFieldMap*)p);
   }
   static void deleteArray_BmnNewFieldMap(void *p) {
      delete [] ((::BmnNewFieldMap*)p);
   }
   static void destruct_BmnNewFieldMap(void *p) {
      typedef ::BmnNewFieldMap current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnNewFieldMap

//______________________________________________________________________________
void BmnFieldConst::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnFieldConst.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnFieldConst::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnFieldConst::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnFieldConst(void *p) {
      return  p ? new(p) ::BmnFieldConst : new ::BmnFieldConst;
   }
   static void *newArray_BmnFieldConst(Long_t nElements, void *p) {
      return p ? new(p) ::BmnFieldConst[nElements] : new ::BmnFieldConst[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnFieldConst(void *p) {
      delete ((::BmnFieldConst*)p);
   }
   static void deleteArray_BmnFieldConst(void *p) {
      delete [] ((::BmnFieldConst*)p);
   }
   static void destruct_BmnFieldConst(void *p) {
      typedef ::BmnFieldConst current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFieldConst

//______________________________________________________________________________
void BmnFieldContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnFieldContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnFieldContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnFieldContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnFieldContFact(void *p) {
      return  p ? new(p) ::BmnFieldContFact : new ::BmnFieldContFact;
   }
   static void *newArray_BmnFieldContFact(Long_t nElements, void *p) {
      return p ? new(p) ::BmnFieldContFact[nElements] : new ::BmnFieldContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnFieldContFact(void *p) {
      delete ((::BmnFieldContFact*)p);
   }
   static void deleteArray_BmnFieldContFact(void *p) {
      delete [] ((::BmnFieldContFact*)p);
   }
   static void destruct_BmnFieldContFact(void *p) {
      typedef ::BmnFieldContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFieldContFact

//______________________________________________________________________________
void BmnFieldMapSym3::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnFieldMapSym3.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnFieldMapSym3::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnFieldMapSym3::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnFieldMapSym3(void *p) {
      return  p ? new(p) ::BmnFieldMapSym3 : new ::BmnFieldMapSym3;
   }
   static void *newArray_BmnFieldMapSym3(Long_t nElements, void *p) {
      return p ? new(p) ::BmnFieldMapSym3[nElements] : new ::BmnFieldMapSym3[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnFieldMapSym3(void *p) {
      delete ((::BmnFieldMapSym3*)p);
   }
   static void deleteArray_BmnFieldMapSym3(void *p) {
      delete [] ((::BmnFieldMapSym3*)p);
   }
   static void destruct_BmnFieldMapSym3(void *p) {
      typedef ::BmnFieldMapSym3 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFieldMapSym3

//______________________________________________________________________________
void BmnFieldCreator::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnFieldCreator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnFieldCreator::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnFieldCreator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnFieldCreator(void *p) {
      return  p ? new(p) ::BmnFieldCreator : new ::BmnFieldCreator;
   }
   static void *newArray_BmnFieldCreator(Long_t nElements, void *p) {
      return p ? new(p) ::BmnFieldCreator[nElements] : new ::BmnFieldCreator[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnFieldCreator(void *p) {
      delete ((::BmnFieldCreator*)p);
   }
   static void deleteArray_BmnFieldCreator(void *p) {
      delete [] ((::BmnFieldCreator*)p);
   }
   static void destruct_BmnFieldCreator(void *p) {
      typedef ::BmnFieldCreator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFieldCreator

//______________________________________________________________________________
void fitParMonitor::Streamer(TBuffer &R__b)
{
   // Stream an object of class fitParMonitor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(fitParMonitor::Class(),this);
   } else {
      R__b.WriteClassBuffer(fitParMonitor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_fitParMonitor(void *p) {
      return  p ? new(p) ::fitParMonitor : new ::fitParMonitor;
   }
   static void *newArray_fitParMonitor(Long_t nElements, void *p) {
      return p ? new(p) ::fitParMonitor[nElements] : new ::fitParMonitor[nElements];
   }
   // Wrapper around operator delete
   static void delete_fitParMonitor(void *p) {
      delete ((::fitParMonitor*)p);
   }
   static void deleteArray_fitParMonitor(void *p) {
      delete [] ((::fitParMonitor*)p);
   }
   static void destruct_fitParMonitor(void *p) {
      typedef ::fitParMonitor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::fitParMonitor

//______________________________________________________________________________
void extrapolationConditions::Streamer(TBuffer &R__b)
{
   // Stream an object of class extrapolationConditions.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(extrapolationConditions::Class(),this);
   } else {
      R__b.WriteClassBuffer(extrapolationConditions::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_extrapolationConditions(void *p) {
      return  p ? new(p) ::extrapolationConditions : new ::extrapolationConditions;
   }
   static void *newArray_extrapolationConditions(Long_t nElements, void *p) {
      return p ? new(p) ::extrapolationConditions[nElements] : new ::extrapolationConditions[nElements];
   }
   // Wrapper around operator delete
   static void delete_extrapolationConditions(void *p) {
      delete ((::extrapolationConditions*)p);
   }
   static void deleteArray_extrapolationConditions(void *p) {
      delete [] ((::extrapolationConditions*)p);
   }
   static void destruct_extrapolationConditions(void *p) {
      typedef ::extrapolationConditions current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::extrapolationConditions

//______________________________________________________________________________
void smoothedValues::Streamer(TBuffer &R__b)
{
   // Stream an object of class smoothedValues.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(smoothedValues::Class(),this);
   } else {
      R__b.WriteClassBuffer(smoothedValues::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_smoothedValues(void *p) {
      return  p ? new(p) ::smoothedValues : new ::smoothedValues;
   }
   static void *newArray_smoothedValues(Long_t nElements, void *p) {
      return p ? new(p) ::smoothedValues[nElements] : new ::smoothedValues[nElements];
   }
   // Wrapper around operator delete
   static void delete_smoothedValues(void *p) {
      delete ((::smoothedValues*)p);
   }
   static void deleteArray_smoothedValues(void *p) {
      delete [] ((::smoothedValues*)p);
   }
   static void destruct_smoothedValues(void *p) {
      typedef ::smoothedValues current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::smoothedValues

//______________________________________________________________________________
void BmnSP41FieldMapCreator::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSP41FieldMapCreator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSP41FieldMapCreator::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSP41FieldMapCreator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSP41FieldMapCreator(void *p) {
      return  p ? new(p) ::BmnSP41FieldMapCreator : new ::BmnSP41FieldMapCreator;
   }
   static void *newArray_BmnSP41FieldMapCreator(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSP41FieldMapCreator[nElements] : new ::BmnSP41FieldMapCreator[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSP41FieldMapCreator(void *p) {
      delete ((::BmnSP41FieldMapCreator*)p);
   }
   static void deleteArray_BmnSP41FieldMapCreator(void *p) {
      delete [] ((::BmnSP41FieldMapCreator*)p);
   }
   static void destruct_BmnSP41FieldMapCreator(void *p) {
      typedef ::BmnSP41FieldMapCreator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSP41FieldMapCreator

//______________________________________________________________________________
void BmnRegion::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnRegion.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnRegion::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnRegion::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnRegion(void *p) {
      delete ((::BmnRegion*)p);
   }
   static void deleteArray_BmnRegion(void *p) {
      delete [] ((::BmnRegion*)p);
   }
   static void destruct_BmnRegion(void *p) {
      typedef ::BmnRegion current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnRegion

//______________________________________________________________________________
void BmnMapPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMapPar.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairParGenericSet::Streamer(R__b);
      R__b >> fType;
      R__b >> fXmin;
      R__b >> fXmax;
      R__b >> fYmin;
      R__b >> fYmax;
      R__b >> fZmin;
      R__b >> fZmax;
      fMapName.Streamer(R__b);
      R__b >> fPosX;
      R__b >> fPosY;
      R__b >> fPosZ;
      R__b >> fScale;
      R__b.CheckByteCount(R__s, R__c, BmnMapPar::IsA());
   } else {
      R__c = R__b.WriteVersion(BmnMapPar::IsA(), kTRUE);
      FairParGenericSet::Streamer(R__b);
      R__b << fType;
      R__b << fXmin;
      R__b << fXmax;
      R__b << fYmin;
      R__b << fYmax;
      R__b << fZmin;
      R__b << fZmax;
      fMapName.Streamer(R__b);
      R__b << fPosX;
      R__b << fPosY;
      R__b << fPosZ;
      R__b << fScale;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMapPar(void *p) {
      return  p ? new(p) ::BmnMapPar : new ::BmnMapPar;
   }
   static void *newArray_BmnMapPar(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMapPar[nElements] : new ::BmnMapPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMapPar(void *p) {
      delete ((::BmnMapPar*)p);
   }
   static void deleteArray_BmnMapPar(void *p) {
      delete [] ((::BmnMapPar*)p);
   }
   static void destruct_BmnMapPar(void *p) {
      typedef ::BmnMapPar current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_BmnMapPar(TBuffer &buf, void *obj) {
      ((::BmnMapPar*)obj)->::BmnMapPar::Streamer(buf);
   }
} // end of namespace ROOT for class ::BmnMapPar

//______________________________________________________________________________
void BmnConstPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnConstPar.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      BmnMapPar::Streamer(R__b);
      R__b >> fBx;
      R__b >> fBy;
      R__b >> fBz;
      R__b.CheckByteCount(R__s, R__c, BmnConstPar::IsA());
   } else {
      R__c = R__b.WriteVersion(BmnConstPar::IsA(), kTRUE);
      BmnMapPar::Streamer(R__b);
      R__b << fBx;
      R__b << fBy;
      R__b << fBz;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnConstPar(void *p) {
      return  p ? new(p) ::BmnConstPar : new ::BmnConstPar;
   }
   static void *newArray_BmnConstPar(Long_t nElements, void *p) {
      return p ? new(p) ::BmnConstPar[nElements] : new ::BmnConstPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnConstPar(void *p) {
      delete ((::BmnConstPar*)p);
   }
   static void deleteArray_BmnConstPar(void *p) {
      delete [] ((::BmnConstPar*)p);
   }
   static void destruct_BmnConstPar(void *p) {
      typedef ::BmnConstPar current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_BmnConstPar(TBuffer &buf, void *obj) {
      ((::BmnConstPar*)obj)->::BmnConstPar::Streamer(buf);
   }
} // end of namespace ROOT for class ::BmnConstPar

//______________________________________________________________________________
void BmnMultiField::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMultiField.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMultiField::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMultiField::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMultiField(void *p) {
      return  p ? new(p) ::BmnMultiField : new ::BmnMultiField;
   }
   static void *newArray_BmnMultiField(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMultiField[nElements] : new ::BmnMultiField[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMultiField(void *p) {
      delete ((::BmnMultiField*)p);
   }
   static void deleteArray_BmnMultiField(void *p) {
      delete [] ((::BmnMultiField*)p);
   }
   static void destruct_BmnMultiField(void *p) {
      typedef ::BmnMultiField current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMultiField

//______________________________________________________________________________
void BmnMultiFieldPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMultiFieldPar.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      BmnMapPar::Streamer(R__b);
      R__b >> fParArray;
      R__b.CheckByteCount(R__s, R__c, BmnMultiFieldPar::IsA());
   } else {
      R__c = R__b.WriteVersion(BmnMultiFieldPar::IsA(), kTRUE);
      BmnMapPar::Streamer(R__b);
      R__b << fParArray;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMultiFieldPar(void *p) {
      return  p ? new(p) ::BmnMultiFieldPar : new ::BmnMultiFieldPar;
   }
   static void *newArray_BmnMultiFieldPar(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMultiFieldPar[nElements] : new ::BmnMultiFieldPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMultiFieldPar(void *p) {
      delete ((::BmnMultiFieldPar*)p);
   }
   static void deleteArray_BmnMultiFieldPar(void *p) {
      delete [] ((::BmnMultiFieldPar*)p);
   }
   static void destruct_BmnMultiFieldPar(void *p) {
      typedef ::BmnMultiFieldPar current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_BmnMultiFieldPar(TBuffer &buf, void *obj) {
      ((::BmnMultiFieldPar*)obj)->::BmnMultiFieldPar::Streamer(buf);
   }
} // end of namespace ROOT for class ::BmnMultiFieldPar

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnFieldPoint(void *p) {
      return  p ? new(p) ::BmnFieldPoint : new ::BmnFieldPoint;
   }
   static void *newArray_BmnFieldPoint(Long_t nElements, void *p) {
      return p ? new(p) ::BmnFieldPoint[nElements] : new ::BmnFieldPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnFieldPoint(void *p) {
      delete ((::BmnFieldPoint*)p);
   }
   static void deleteArray_BmnFieldPoint(void *p) {
      delete [] ((::BmnFieldPoint*)p);
   }
   static void destruct_BmnFieldPoint(void *p) {
      typedef ::BmnFieldPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFieldPoint

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnFieldParser(void *p) {
      return  p ? new(p) ::BmnFieldParser : new ::BmnFieldParser;
   }
   static void *newArray_BmnFieldParser(Long_t nElements, void *p) {
      return p ? new(p) ::BmnFieldParser[nElements] : new ::BmnFieldParser[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnFieldParser(void *p) {
      delete ((::BmnFieldParser*)p);
   }
   static void deleteArray_BmnFieldParser(void *p) {
      delete [] ((::BmnFieldParser*)p);
   }
   static void destruct_BmnFieldParser(void *p) {
      typedef ::BmnFieldParser current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFieldParser

namespace {
  void TriggerDictionaryInitialization_G__BmnFieldDict_Impl() {
    static const char* headers[] = {
"BmnNewFieldMap.h",
"BmnFieldConst.h",
"BmnFieldContFact.h",
"BmnFieldMap.h",
"BmnFieldMapData.h",
"BmnFieldMapSym3.h",
"BmnFieldPar.h",
"BmnFieldCreator.h",
"BmnSP41FieldMapCreator.h",
"BmnRegion.h",
"BmnConstPar.h",
"BmnMapPar.h",
"BmnMultiFieldPar.h",
"BmnMultiField.h",
"BmnFieldParser.h",
"BmnFieldPoint.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/field",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/field/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__BmnFieldDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$BmnFieldMapData.h")))  __attribute__((annotate("$clingAutoload$BmnNewFieldMap.h")))  BmnFieldMapData;
class __attribute__((annotate("$clingAutoload$BmnFieldPar.h")))  __attribute__((annotate("$clingAutoload$BmnNewFieldMap.h")))  BmnFieldPar;
class __attribute__((annotate("$clingAutoload$BmnFieldMap.h")))  __attribute__((annotate("$clingAutoload$BmnNewFieldMap.h")))  BmnFieldMap;
class __attribute__((annotate("$clingAutoload$BmnNewFieldMap.h")))  BmnNewFieldMap;
class __attribute__((annotate("$clingAutoload$BmnFieldConst.h")))  BmnFieldConst;
class __attribute__((annotate("$clingAutoload$BmnFieldContFact.h")))  BmnFieldContFact;
class __attribute__((annotate("$clingAutoload$BmnFieldMapSym3.h")))  BmnFieldMapSym3;
class __attribute__((annotate("$clingAutoload$BmnFieldCreator.h")))  BmnFieldCreator;
class __attribute__((annotate("$clingAutoload$BmnSP41FieldMapCreator.h")))  fitParMonitor;
class __attribute__((annotate("$clingAutoload$BmnSP41FieldMapCreator.h")))  extrapolationConditions;
class __attribute__((annotate("$clingAutoload$BmnSP41FieldMapCreator.h")))  smoothedValues;
class __attribute__((annotate("$clingAutoload$BmnSP41FieldMapCreator.h")))  BmnSP41FieldMapCreator;
class __attribute__((annotate("$clingAutoload$BmnRegion.h")))  BmnRegion;
class __attribute__((annotate("$clingAutoload$BmnMapPar.h")))  __attribute__((annotate("$clingAutoload$BmnConstPar.h")))  BmnMapPar;
class __attribute__((annotate("$clingAutoload$BmnConstPar.h")))  BmnConstPar;
class __attribute__((annotate("$clingAutoload$BmnMultiField.h")))  __attribute__((annotate("$clingAutoload$BmnMultiFieldPar.h")))  BmnMultiField;
class __attribute__((annotate("$clingAutoload$BmnMultiFieldPar.h")))  BmnMultiFieldPar;
class __attribute__((annotate("$clingAutoload$BmnFieldPoint.h")))  __attribute__((annotate("$clingAutoload$BmnFieldParser.h")))  BmnFieldPoint;
class __attribute__((annotate("$clingAutoload$BmnFieldParser.h")))  BmnFieldParser;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__BmnFieldDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "BmnNewFieldMap.h"
#include "BmnFieldConst.h"
#include "BmnFieldContFact.h"
#include "BmnFieldMap.h"
#include "BmnFieldMapData.h"
#include "BmnFieldMapSym3.h"
#include "BmnFieldPar.h"
#include "BmnFieldCreator.h"
#include "BmnSP41FieldMapCreator.h"
#include "BmnRegion.h"
#include "BmnConstPar.h"
#include "BmnMapPar.h"
#include "BmnMultiFieldPar.h"
#include "BmnMultiField.h"
#include "BmnFieldParser.h"
#include "BmnFieldPoint.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BmnConstPar", payloadCode, "@",
"BmnFieldConst", payloadCode, "@",
"BmnFieldContFact", payloadCode, "@",
"BmnFieldCreator", payloadCode, "@",
"BmnFieldMap", payloadCode, "@",
"BmnFieldMapData", payloadCode, "@",
"BmnFieldMapSym3", payloadCode, "@",
"BmnFieldPar", payloadCode, "@",
"BmnFieldParser", payloadCode, "@",
"BmnFieldPoint", payloadCode, "@",
"BmnMapPar", payloadCode, "@",
"BmnMultiField", payloadCode, "@",
"BmnMultiFieldPar", payloadCode, "@",
"BmnNewFieldMap", payloadCode, "@",
"BmnRegion", payloadCode, "@",
"BmnSP41FieldMapCreator", payloadCode, "@",
"extrapolationConditions", payloadCode, "@",
"fitParMonitor", payloadCode, "@",
"smoothedValues", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__BmnFieldDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__BmnFieldDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__BmnFieldDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__BmnFieldDict() {
  TriggerDictionaryInitialization_G__BmnFieldDict_Impl();
}
