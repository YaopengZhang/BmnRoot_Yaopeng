// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIdetectorsdItof1dIG__TOF1Dict
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
#include "BmnTOF1.h"
#include "BmnTOF1Point.h"
#include "BmnTof1Digit.h"
#include "BmnTOF1ContFact.h"
#include "BmnTOF1Geo.h"
#include "BmnTOF1GeoPar.h"
#include "BmnTof1HitProducer.h"
#include "BmnTof1HitProducerIdeal.h"
#include "BmnTof1GeoUtils.h"
#include "BmnTOF1TDC.h"
#include "BmnTOF1Detector.h"
#include "BmnTOF1Conteiner.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BmnTOF1Point(void *p = nullptr);
   static void *newArray_BmnTOF1Point(Long_t size, void *p);
   static void delete_BmnTOF1Point(void *p);
   static void deleteArray_BmnTOF1Point(void *p);
   static void destruct_BmnTOF1Point(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTOF1Point*)
   {
      ::BmnTOF1Point *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTOF1Point >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTOF1Point", ::BmnTOF1Point::Class_Version(), "BmnTOF1Point.h", 10,
                  typeid(::BmnTOF1Point), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTOF1Point::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTOF1Point) );
      instance.SetNew(&new_BmnTOF1Point);
      instance.SetNewArray(&newArray_BmnTOF1Point);
      instance.SetDelete(&delete_BmnTOF1Point);
      instance.SetDeleteArray(&deleteArray_BmnTOF1Point);
      instance.SetDestructor(&destruct_BmnTOF1Point);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTOF1Point*)
   {
      return GenerateInitInstanceLocal((::BmnTOF1Point*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTOF1Point*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTOF1(void *p = nullptr);
   static void *newArray_BmnTOF1(Long_t size, void *p);
   static void delete_BmnTOF1(void *p);
   static void deleteArray_BmnTOF1(void *p);
   static void destruct_BmnTOF1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTOF1*)
   {
      ::BmnTOF1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTOF1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTOF1", ::BmnTOF1::Class_Version(), "BmnTOF1.h", 15,
                  typeid(::BmnTOF1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTOF1::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTOF1) );
      instance.SetNew(&new_BmnTOF1);
      instance.SetNewArray(&newArray_BmnTOF1);
      instance.SetDelete(&delete_BmnTOF1);
      instance.SetDeleteArray(&deleteArray_BmnTOF1);
      instance.SetDestructor(&destruct_BmnTOF1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTOF1*)
   {
      return GenerateInitInstanceLocal((::BmnTOF1*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTOF1*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTof1Digit(void *p = nullptr);
   static void *newArray_BmnTof1Digit(Long_t size, void *p);
   static void delete_BmnTof1Digit(void *p);
   static void deleteArray_BmnTof1Digit(void *p);
   static void destruct_BmnTof1Digit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTof1Digit*)
   {
      ::BmnTof1Digit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTof1Digit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTof1Digit", ::BmnTof1Digit::Class_Version(), "BmnTof1Digit.h", 8,
                  typeid(::BmnTof1Digit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTof1Digit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTof1Digit) );
      instance.SetNew(&new_BmnTof1Digit);
      instance.SetNewArray(&newArray_BmnTof1Digit);
      instance.SetDelete(&delete_BmnTof1Digit);
      instance.SetDeleteArray(&deleteArray_BmnTof1Digit);
      instance.SetDestructor(&destruct_BmnTof1Digit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTof1Digit*)
   {
      return GenerateInitInstanceLocal((::BmnTof1Digit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTof1Digit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTOF1ContFact(void *p = nullptr);
   static void *newArray_BmnTOF1ContFact(Long_t size, void *p);
   static void delete_BmnTOF1ContFact(void *p);
   static void deleteArray_BmnTOF1ContFact(void *p);
   static void destruct_BmnTOF1ContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTOF1ContFact*)
   {
      ::BmnTOF1ContFact *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTOF1ContFact >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTOF1ContFact", ::BmnTOF1ContFact::Class_Version(), "BmnTOF1ContFact.h", 10,
                  typeid(::BmnTOF1ContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTOF1ContFact::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTOF1ContFact) );
      instance.SetNew(&new_BmnTOF1ContFact);
      instance.SetNewArray(&newArray_BmnTOF1ContFact);
      instance.SetDelete(&delete_BmnTOF1ContFact);
      instance.SetDeleteArray(&deleteArray_BmnTOF1ContFact);
      instance.SetDestructor(&destruct_BmnTOF1ContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTOF1ContFact*)
   {
      return GenerateInitInstanceLocal((::BmnTOF1ContFact*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTOF1ContFact*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTOF1Geo(void *p = nullptr);
   static void *newArray_BmnTOF1Geo(Long_t size, void *p);
   static void delete_BmnTOF1Geo(void *p);
   static void deleteArray_BmnTOF1Geo(void *p);
   static void destruct_BmnTOF1Geo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTOF1Geo*)
   {
      ::BmnTOF1Geo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTOF1Geo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTOF1Geo", ::BmnTOF1Geo::Class_Version(), "BmnTOF1Geo.h", 8,
                  typeid(::BmnTOF1Geo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTOF1Geo::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTOF1Geo) );
      instance.SetNew(&new_BmnTOF1Geo);
      instance.SetNewArray(&newArray_BmnTOF1Geo);
      instance.SetDelete(&delete_BmnTOF1Geo);
      instance.SetDeleteArray(&deleteArray_BmnTOF1Geo);
      instance.SetDestructor(&destruct_BmnTOF1Geo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTOF1Geo*)
   {
      return GenerateInitInstanceLocal((::BmnTOF1Geo*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTOF1Geo*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTOF1GeoPar(void *p = nullptr);
   static void *newArray_BmnTOF1GeoPar(Long_t size, void *p);
   static void delete_BmnTOF1GeoPar(void *p);
   static void deleteArray_BmnTOF1GeoPar(void *p);
   static void destruct_BmnTOF1GeoPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTOF1GeoPar*)
   {
      ::BmnTOF1GeoPar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTOF1GeoPar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTOF1GeoPar", ::BmnTOF1GeoPar::Class_Version(), "BmnTOF1GeoPar.h", 10,
                  typeid(::BmnTOF1GeoPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTOF1GeoPar::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTOF1GeoPar) );
      instance.SetNew(&new_BmnTOF1GeoPar);
      instance.SetNewArray(&newArray_BmnTOF1GeoPar);
      instance.SetDelete(&delete_BmnTOF1GeoPar);
      instance.SetDeleteArray(&deleteArray_BmnTOF1GeoPar);
      instance.SetDestructor(&destruct_BmnTOF1GeoPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTOF1GeoPar*)
   {
      return GenerateInitInstanceLocal((::BmnTOF1GeoPar*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTOF1GeoPar*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTOF1Conteiner(void *p = nullptr);
   static void *newArray_BmnTOF1Conteiner(Long_t size, void *p);
   static void delete_BmnTOF1Conteiner(void *p);
   static void deleteArray_BmnTOF1Conteiner(void *p);
   static void destruct_BmnTOF1Conteiner(void *p);
   static void streamer_BmnTOF1Conteiner(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTOF1Conteiner*)
   {
      ::BmnTOF1Conteiner *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTOF1Conteiner >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTOF1Conteiner", ::BmnTOF1Conteiner::Class_Version(), "BmnTOF1Conteiner.h", 23,
                  typeid(::BmnTOF1Conteiner), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTOF1Conteiner::Dictionary, isa_proxy, 16,
                  sizeof(::BmnTOF1Conteiner) );
      instance.SetNew(&new_BmnTOF1Conteiner);
      instance.SetNewArray(&newArray_BmnTOF1Conteiner);
      instance.SetDelete(&delete_BmnTOF1Conteiner);
      instance.SetDeleteArray(&deleteArray_BmnTOF1Conteiner);
      instance.SetDestructor(&destruct_BmnTOF1Conteiner);
      instance.SetStreamerFunc(&streamer_BmnTOF1Conteiner);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTOF1Conteiner*)
   {
      return GenerateInitInstanceLocal((::BmnTOF1Conteiner*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTOF1Conteiner*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTOF1Detector(void *p = nullptr);
   static void *newArray_BmnTOF1Detector(Long_t size, void *p);
   static void delete_BmnTOF1Detector(void *p);
   static void deleteArray_BmnTOF1Detector(void *p);
   static void destruct_BmnTOF1Detector(void *p);
   static void streamer_BmnTOF1Detector(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTOF1Detector*)
   {
      ::BmnTOF1Detector *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTOF1Detector >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTOF1Detector", ::BmnTOF1Detector::Class_Version(), "BmnTOF1Detector.h", 52,
                  typeid(::BmnTOF1Detector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTOF1Detector::Dictionary, isa_proxy, 16,
                  sizeof(::BmnTOF1Detector) );
      instance.SetNew(&new_BmnTOF1Detector);
      instance.SetNewArray(&newArray_BmnTOF1Detector);
      instance.SetDelete(&delete_BmnTOF1Detector);
      instance.SetDeleteArray(&deleteArray_BmnTOF1Detector);
      instance.SetDestructor(&destruct_BmnTOF1Detector);
      instance.SetStreamerFunc(&streamer_BmnTOF1Detector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTOF1Detector*)
   {
      return GenerateInitInstanceLocal((::BmnTOF1Detector*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTOF1Detector*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTof1HitProducerIdeal(void *p = nullptr);
   static void *newArray_BmnTof1HitProducerIdeal(Long_t size, void *p);
   static void delete_BmnTof1HitProducerIdeal(void *p);
   static void deleteArray_BmnTof1HitProducerIdeal(void *p);
   static void destruct_BmnTof1HitProducerIdeal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTof1HitProducerIdeal*)
   {
      ::BmnTof1HitProducerIdeal *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTof1HitProducerIdeal >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTof1HitProducerIdeal", ::BmnTof1HitProducerIdeal::Class_Version(), "BmnTof1HitProducerIdeal.h", 14,
                  typeid(::BmnTof1HitProducerIdeal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTof1HitProducerIdeal::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTof1HitProducerIdeal) );
      instance.SetNew(&new_BmnTof1HitProducerIdeal);
      instance.SetNewArray(&newArray_BmnTof1HitProducerIdeal);
      instance.SetDelete(&delete_BmnTof1HitProducerIdeal);
      instance.SetDeleteArray(&deleteArray_BmnTof1HitProducerIdeal);
      instance.SetDestructor(&destruct_BmnTof1HitProducerIdeal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTof1HitProducerIdeal*)
   {
      return GenerateInitInstanceLocal((::BmnTof1HitProducerIdeal*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTof1HitProducerIdeal*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTof1HitProducer(void *p = nullptr);
   static void *newArray_BmnTof1HitProducer(Long_t size, void *p);
   static void delete_BmnTof1HitProducer(void *p);
   static void deleteArray_BmnTof1HitProducer(void *p);
   static void destruct_BmnTof1HitProducer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTof1HitProducer*)
   {
      ::BmnTof1HitProducer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTof1HitProducer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTof1HitProducer", ::BmnTof1HitProducer::Class_Version(), "BmnTof1HitProducer.h", 15,
                  typeid(::BmnTof1HitProducer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTof1HitProducer::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTof1HitProducer) );
      instance.SetNew(&new_BmnTof1HitProducer);
      instance.SetNewArray(&newArray_BmnTof1HitProducer);
      instance.SetDelete(&delete_BmnTof1HitProducer);
      instance.SetDeleteArray(&deleteArray_BmnTof1HitProducer);
      instance.SetDestructor(&destruct_BmnTof1HitProducer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTof1HitProducer*)
   {
      return GenerateInitInstanceLocal((::BmnTof1HitProducer*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTof1HitProducer*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnTof1TDC(void *p);
   static void deleteArray_BmnTof1TDC(void *p);
   static void destruct_BmnTof1TDC(void *p);
   static void streamer_BmnTof1TDC(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTof1TDC*)
   {
      ::BmnTof1TDC *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTof1TDC >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTof1TDC", ::BmnTof1TDC::Class_Version(), "BmnTOF1TDC.h", 34,
                  typeid(::BmnTof1TDC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTof1TDC::Dictionary, isa_proxy, 16,
                  sizeof(::BmnTof1TDC) );
      instance.SetDelete(&delete_BmnTof1TDC);
      instance.SetDeleteArray(&deleteArray_BmnTof1TDC);
      instance.SetDestructor(&destruct_BmnTof1TDC);
      instance.SetStreamerFunc(&streamer_BmnTof1TDC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTof1TDC*)
   {
      return GenerateInitInstanceLocal((::BmnTof1TDC*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTof1TDC*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnTof1Configure_Dictionary();
   static void BmnTof1Configure_TClassManip(TClass*);
   static void delete_BmnTof1Configure(void *p);
   static void deleteArray_BmnTof1Configure(void *p);
   static void destruct_BmnTof1Configure(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTof1Configure*)
   {
      ::BmnTof1Configure *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnTof1Configure));
      static ::ROOT::TGenericClassInfo 
         instance("BmnTof1Configure", "BmnTOF1TDC.h", 81,
                  typeid(::BmnTof1Configure), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnTof1Configure_Dictionary, isa_proxy, 0,
                  sizeof(::BmnTof1Configure) );
      instance.SetDelete(&delete_BmnTof1Configure);
      instance.SetDeleteArray(&deleteArray_BmnTof1Configure);
      instance.SetDestructor(&destruct_BmnTof1Configure);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTof1Configure*)
   {
      return GenerateInitInstanceLocal((::BmnTof1Configure*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTof1Configure*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnTof1Configure_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnTof1Configure*)nullptr)->GetClass();
      BmnTof1Configure_TClassManip(theClass);
   return theClass;
   }

   static void BmnTof1Configure_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnTof1TDCMapping_Dictionary();
   static void BmnTof1TDCMapping_TClassManip(TClass*);
   static void delete_BmnTof1TDCMapping(void *p);
   static void deleteArray_BmnTof1TDCMapping(void *p);
   static void destruct_BmnTof1TDCMapping(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTof1TDCMapping*)
   {
      ::BmnTof1TDCMapping *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnTof1TDCMapping));
      static ::ROOT::TGenericClassInfo 
         instance("BmnTof1TDCMapping", "BmnTOF1TDC.h", 168,
                  typeid(::BmnTof1TDCMapping), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnTof1TDCMapping_Dictionary, isa_proxy, 0,
                  sizeof(::BmnTof1TDCMapping) );
      instance.SetDelete(&delete_BmnTof1TDCMapping);
      instance.SetDeleteArray(&deleteArray_BmnTof1TDCMapping);
      instance.SetDestructor(&destruct_BmnTof1TDCMapping);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTof1TDCMapping*)
   {
      return GenerateInitInstanceLocal((::BmnTof1TDCMapping*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTof1TDCMapping*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnTof1TDCMapping_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnTof1TDCMapping*)nullptr)->GetClass();
      BmnTof1TDCMapping_TClassManip(theClass);
   return theClass;
   }

   static void BmnTof1TDCMapping_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnTof1DigitConvertor_Dictionary();
   static void BmnTof1DigitConvertor_TClassManip(TClass*);
   static void *new_BmnTof1DigitConvertor(void *p = nullptr);
   static void *newArray_BmnTof1DigitConvertor(Long_t size, void *p);
   static void delete_BmnTof1DigitConvertor(void *p);
   static void deleteArray_BmnTof1DigitConvertor(void *p);
   static void destruct_BmnTof1DigitConvertor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTof1DigitConvertor*)
   {
      ::BmnTof1DigitConvertor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnTof1DigitConvertor));
      static ::ROOT::TGenericClassInfo 
         instance("BmnTof1DigitConvertor", "BmnTOF1TDC.h", 192,
                  typeid(::BmnTof1DigitConvertor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnTof1DigitConvertor_Dictionary, isa_proxy, 0,
                  sizeof(::BmnTof1DigitConvertor) );
      instance.SetNew(&new_BmnTof1DigitConvertor);
      instance.SetNewArray(&newArray_BmnTof1DigitConvertor);
      instance.SetDelete(&delete_BmnTof1DigitConvertor);
      instance.SetDeleteArray(&deleteArray_BmnTof1DigitConvertor);
      instance.SetDestructor(&destruct_BmnTof1DigitConvertor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTof1DigitConvertor*)
   {
      return GenerateInitInstanceLocal((::BmnTof1DigitConvertor*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTof1DigitConvertor*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnTof1DigitConvertor_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnTof1DigitConvertor*)nullptr)->GetClass();
      BmnTof1DigitConvertor_TClassManip(theClass);
   return theClass;
   }

   static void BmnTof1DigitConvertor_TClassManip(TClass* ){
   }

} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnTOF1Point::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTOF1Point::Class_Name()
{
   return "BmnTOF1Point";
}

//______________________________________________________________________________
const char *BmnTOF1Point::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1Point*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTOF1Point::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1Point*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTOF1Point::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1Point*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTOF1Point::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1Point*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTOF1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTOF1::Class_Name()
{
   return "BmnTOF1";
}

//______________________________________________________________________________
const char *BmnTOF1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTOF1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTOF1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTOF1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTof1Digit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTof1Digit::Class_Name()
{
   return "BmnTof1Digit";
}

//______________________________________________________________________________
const char *BmnTof1Digit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTof1Digit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTof1Digit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTof1Digit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTof1Digit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTof1Digit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTof1Digit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTof1Digit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTOF1ContFact::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTOF1ContFact::Class_Name()
{
   return "BmnTOF1ContFact";
}

//______________________________________________________________________________
const char *BmnTOF1ContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1ContFact*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTOF1ContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1ContFact*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTOF1ContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1ContFact*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTOF1ContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1ContFact*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTOF1Geo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTOF1Geo::Class_Name()
{
   return "BmnTOF1Geo";
}

//______________________________________________________________________________
const char *BmnTOF1Geo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1Geo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTOF1Geo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1Geo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTOF1Geo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1Geo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTOF1Geo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1Geo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTOF1GeoPar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTOF1GeoPar::Class_Name()
{
   return "BmnTOF1GeoPar";
}

//______________________________________________________________________________
const char *BmnTOF1GeoPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1GeoPar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTOF1GeoPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1GeoPar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTOF1GeoPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1GeoPar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTOF1GeoPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1GeoPar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTOF1Conteiner::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTOF1Conteiner::Class_Name()
{
   return "BmnTOF1Conteiner";
}

//______________________________________________________________________________
const char *BmnTOF1Conteiner::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1Conteiner*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTOF1Conteiner::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1Conteiner*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTOF1Conteiner::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1Conteiner*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTOF1Conteiner::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1Conteiner*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTOF1Detector::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTOF1Detector::Class_Name()
{
   return "BmnTOF1Detector";
}

//______________________________________________________________________________
const char *BmnTOF1Detector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1Detector*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTOF1Detector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1Detector*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTOF1Detector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1Detector*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTOF1Detector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1Detector*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTof1HitProducerIdeal::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTof1HitProducerIdeal::Class_Name()
{
   return "BmnTof1HitProducerIdeal";
}

//______________________________________________________________________________
const char *BmnTof1HitProducerIdeal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTof1HitProducerIdeal*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTof1HitProducerIdeal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTof1HitProducerIdeal*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTof1HitProducerIdeal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTof1HitProducerIdeal*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTof1HitProducerIdeal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTof1HitProducerIdeal*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTof1HitProducer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTof1HitProducer::Class_Name()
{
   return "BmnTof1HitProducer";
}

//______________________________________________________________________________
const char *BmnTof1HitProducer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTof1HitProducer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTof1HitProducer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTof1HitProducer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTof1HitProducer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTof1HitProducer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTof1HitProducer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTof1HitProducer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTof1TDC::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTof1TDC::Class_Name()
{
   return "BmnTof1TDC";
}

//______________________________________________________________________________
const char *BmnTof1TDC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTof1TDC*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTof1TDC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTof1TDC*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTof1TDC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTof1TDC*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTof1TDC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTof1TDC*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnTOF1Point::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTOF1Point.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTOF1Point::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTOF1Point::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTOF1Point(void *p) {
      return  p ? new(p) ::BmnTOF1Point : new ::BmnTOF1Point;
   }
   static void *newArray_BmnTOF1Point(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTOF1Point[nElements] : new ::BmnTOF1Point[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTOF1Point(void *p) {
      delete ((::BmnTOF1Point*)p);
   }
   static void deleteArray_BmnTOF1Point(void *p) {
      delete [] ((::BmnTOF1Point*)p);
   }
   static void destruct_BmnTOF1Point(void *p) {
      typedef ::BmnTOF1Point current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTOF1Point

//______________________________________________________________________________
void BmnTOF1::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTOF1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTOF1::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTOF1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTOF1(void *p) {
      return  p ? new(p) ::BmnTOF1 : new ::BmnTOF1;
   }
   static void *newArray_BmnTOF1(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTOF1[nElements] : new ::BmnTOF1[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTOF1(void *p) {
      delete ((::BmnTOF1*)p);
   }
   static void deleteArray_BmnTOF1(void *p) {
      delete [] ((::BmnTOF1*)p);
   }
   static void destruct_BmnTOF1(void *p) {
      typedef ::BmnTOF1 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTOF1

//______________________________________________________________________________
void BmnTof1Digit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTof1Digit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTof1Digit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTof1Digit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTof1Digit(void *p) {
      return  p ? new(p) ::BmnTof1Digit : new ::BmnTof1Digit;
   }
   static void *newArray_BmnTof1Digit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTof1Digit[nElements] : new ::BmnTof1Digit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTof1Digit(void *p) {
      delete ((::BmnTof1Digit*)p);
   }
   static void deleteArray_BmnTof1Digit(void *p) {
      delete [] ((::BmnTof1Digit*)p);
   }
   static void destruct_BmnTof1Digit(void *p) {
      typedef ::BmnTof1Digit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTof1Digit

//______________________________________________________________________________
void BmnTOF1ContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTOF1ContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTOF1ContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTOF1ContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTOF1ContFact(void *p) {
      return  p ? new(p) ::BmnTOF1ContFact : new ::BmnTOF1ContFact;
   }
   static void *newArray_BmnTOF1ContFact(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTOF1ContFact[nElements] : new ::BmnTOF1ContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTOF1ContFact(void *p) {
      delete ((::BmnTOF1ContFact*)p);
   }
   static void deleteArray_BmnTOF1ContFact(void *p) {
      delete [] ((::BmnTOF1ContFact*)p);
   }
   static void destruct_BmnTOF1ContFact(void *p) {
      typedef ::BmnTOF1ContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTOF1ContFact

//______________________________________________________________________________
void BmnTOF1Geo::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTOF1Geo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTOF1Geo::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTOF1Geo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTOF1Geo(void *p) {
      return  p ? new(p) ::BmnTOF1Geo : new ::BmnTOF1Geo;
   }
   static void *newArray_BmnTOF1Geo(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTOF1Geo[nElements] : new ::BmnTOF1Geo[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTOF1Geo(void *p) {
      delete ((::BmnTOF1Geo*)p);
   }
   static void deleteArray_BmnTOF1Geo(void *p) {
      delete [] ((::BmnTOF1Geo*)p);
   }
   static void destruct_BmnTOF1Geo(void *p) {
      typedef ::BmnTOF1Geo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTOF1Geo

//______________________________________________________________________________
void BmnTOF1GeoPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTOF1GeoPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTOF1GeoPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTOF1GeoPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTOF1GeoPar(void *p) {
      return  p ? new(p) ::BmnTOF1GeoPar : new ::BmnTOF1GeoPar;
   }
   static void *newArray_BmnTOF1GeoPar(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTOF1GeoPar[nElements] : new ::BmnTOF1GeoPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTOF1GeoPar(void *p) {
      delete ((::BmnTOF1GeoPar*)p);
   }
   static void deleteArray_BmnTOF1GeoPar(void *p) {
      delete [] ((::BmnTOF1GeoPar*)p);
   }
   static void destruct_BmnTOF1GeoPar(void *p) {
      typedef ::BmnTOF1GeoPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTOF1GeoPar

//______________________________________________________________________________
void BmnTOF1Conteiner::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTOF1Conteiner.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TNamed::Streamer(R__b);
      R__b >> fPlane;
      R__b >> fStrip;
      R__b >> fTimeL;
      R__b >> fTimeR;
      R__b >> fTime;
      R__b >> fWidthL;
      R__b >> fWidthR;
      R__b >> fWidth;
      R__b >> fX;
      R__b >> fY;
      R__b >> fZ;
      R__b >> fTimeT0;
      R__b >> fWidthT0;
      R__b.CheckByteCount(R__s, R__c, BmnTOF1Conteiner::IsA());
   } else {
      R__c = R__b.WriteVersion(BmnTOF1Conteiner::IsA(), kTRUE);
      TNamed::Streamer(R__b);
      R__b << fPlane;
      R__b << fStrip;
      R__b << fTimeL;
      R__b << fTimeR;
      R__b << fTime;
      R__b << fWidthL;
      R__b << fWidthR;
      R__b << fWidth;
      R__b << fX;
      R__b << fY;
      R__b << fZ;
      R__b << fTimeT0;
      R__b << fWidthT0;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTOF1Conteiner(void *p) {
      return  p ? new(p) ::BmnTOF1Conteiner : new ::BmnTOF1Conteiner;
   }
   static void *newArray_BmnTOF1Conteiner(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTOF1Conteiner[nElements] : new ::BmnTOF1Conteiner[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTOF1Conteiner(void *p) {
      delete ((::BmnTOF1Conteiner*)p);
   }
   static void deleteArray_BmnTOF1Conteiner(void *p) {
      delete [] ((::BmnTOF1Conteiner*)p);
   }
   static void destruct_BmnTOF1Conteiner(void *p) {
      typedef ::BmnTOF1Conteiner current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_BmnTOF1Conteiner(TBuffer &buf, void *obj) {
      ((::BmnTOF1Conteiner*)obj)->::BmnTOF1Conteiner::Streamer(buf);
   }
} // end of namespace ROOT for class ::BmnTOF1Conteiner

//______________________________________________________________________________
void BmnTOF1Detector::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTOF1Detector.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b >> fVerbose;
      R__b >> fStripLength;
      R__b >> fSignalVelosity;
      fName.Streamer(R__b);
      R__b >> fNPlane;
      R__b >> fMaxL;
      R__b >> fMaxR;
      R__b >> fMax;
      R__b >> fFillHist;
      R__b.ReadStaticArray((double*)fTimeL);
      R__b.ReadStaticArray((double*)fTimeR);
      R__b.ReadStaticArray((double*)fTimeLtemp);
      R__b.ReadStaticArray((double*)fTimeRtemp);
      R__b.ReadStaticArray((double*)fTime);
      R__b.ReadStaticArray((double*)fWidthL);
      R__b.ReadStaticArray((double*)fWidthR);
      R__b.ReadStaticArray((double*)fWidthLtemp);
      R__b.ReadStaticArray((double*)fWidthRtemp);
      R__b.ReadStaticArray((double*)fWidth);
      R__b.ReadStaticArray((double*)fTof);
      R__b >> fDoubleTemp;
      R__b >> fMaxDelta;
      R__b >> fHit_Per_Ev;
      R__b >> fNEvents;
      R__b >> fStrip;
      R__b.ReadStaticArray((bool*)fFlagHit);
      R__b.ReadStaticArray((bool*)fKilled);
      R__b >> fKillSide;
      R__b.ReadStaticArray((double*)fCorrLR);
      R__b.ReadStaticArray((double*)fCorrTimeShift);
      R__b.ReadStaticArray((double*)fDigitL);
      R__b.ReadStaticArray((double*)fDigitR);
      R__b.ReadStaticArray((double*)fHit);
      R__b >> fCommonTimeShift;
      int R__i;
      for (R__i = 0; R__i < 48; R__i++)
         fCentrStrip[R__i].Streamer(R__b);
      for (R__i = 0; R__i < 48; R__i++)
         fStripAngle[R__i].Streamer(R__b);
      for (R__i = 0; R__i < 48; R__i++)
         fCrossPoint[R__i].Streamer(R__b);
      fVectorTemp.Streamer(R__b);
      R__b >> fT0;
      R__b >> fHistListStat;
      R__b >> fHistListdt;
      for (R__i = 0; R__i < 49; R__i++)
         R__b >> hdT_vs_WidthDet[R__i];
      for (R__i = 0; R__i < 49; R__i++)
         R__b >> hdT_vs_WidthT0[R__i];
      for (R__i = 0; R__i < 49; R__i++)
         R__b >> hdT[R__i];
      R__b >> hHitByCh;
      R__b >> hHitPerEv;
      R__b >> hHitLR;
      R__b >> hXY;
      R__b >> hDy_near;
      R__b >> hDtime_near;
      R__b >> hDWidth_near;
      R__b >> hDy_acros;
      R__b >> hDtime_acros;
      R__b >> hDWidth_acros;
      R__b >> hTempDtimeDy_near;
      R__b >> hTempDtimeDy_acros;
      for (R__i = 0; R__i < 48; R__i++)
         R__b >> gSlew[R__i];
      for (R__i = 0; R__i < 48; R__i++)
         R__b >> funT0[R__i];
      for (R__i = 0; R__i < 48; R__i++)
         R__b >> funRPC[R__i];
      R__b.CheckByteCount(R__s, R__c, BmnTOF1Detector::IsA());
   } else {
      R__c = R__b.WriteVersion(BmnTOF1Detector::IsA(), kTRUE);
      R__b << fVerbose;
      R__b << fStripLength;
      R__b << fSignalVelosity;
      fName.Streamer(R__b);
      R__b << fNPlane;
      R__b << fMaxL;
      R__b << fMaxR;
      R__b << fMax;
      R__b << fFillHist;
      R__b.WriteArray(fTimeL, 48);
      R__b.WriteArray(fTimeR, 48);
      R__b.WriteArray(fTimeLtemp, 48);
      R__b.WriteArray(fTimeRtemp, 48);
      R__b.WriteArray(fTime, 48);
      R__b.WriteArray(fWidthL, 48);
      R__b.WriteArray(fWidthR, 48);
      R__b.WriteArray(fWidthLtemp, 48);
      R__b.WriteArray(fWidthRtemp, 48);
      R__b.WriteArray(fWidth, 48);
      R__b.WriteArray(fTof, 48);
      R__b << fDoubleTemp;
      R__b << fMaxDelta;
      R__b << fHit_Per_Ev;
      R__b << fNEvents;
      R__b << fStrip;
      R__b.WriteArray(fFlagHit, 48);
      R__b.WriteArray(fKilled, 48);
      R__b << fKillSide;
      R__b.WriteArray(fCorrLR, 48);
      R__b.WriteArray(fCorrTimeShift, 48);
      R__b.WriteArray(fDigitL, 48);
      R__b.WriteArray(fDigitR, 48);
      R__b.WriteArray(fHit, 48);
      R__b << fCommonTimeShift;
      int R__i;
      for (R__i = 0; R__i < 48; R__i++)
         fCentrStrip[R__i].Streamer(R__b);
      for (R__i = 0; R__i < 48; R__i++)
         fStripAngle[R__i].Streamer(R__b);
      for (R__i = 0; R__i < 48; R__i++)
         fCrossPoint[R__i].Streamer(R__b);
      fVectorTemp.Streamer(R__b);
      R__b << fT0;
      R__b << fHistListStat;
      R__b << fHistListdt;
      for (R__i = 0; R__i < 49; R__i++)
         R__b << (TObject*)hdT_vs_WidthDet[R__i];
      for (R__i = 0; R__i < 49; R__i++)
         R__b << (TObject*)hdT_vs_WidthT0[R__i];
      for (R__i = 0; R__i < 49; R__i++)
         R__b << (TObject*)hdT[R__i];
      R__b << (TObject*)hHitByCh;
      R__b << (TObject*)hHitPerEv;
      R__b << (TObject*)hHitLR;
      R__b << (TObject*)hXY;
      R__b << (TObject*)hDy_near;
      R__b << (TObject*)hDtime_near;
      R__b << (TObject*)hDWidth_near;
      R__b << (TObject*)hDy_acros;
      R__b << (TObject*)hDtime_acros;
      R__b << (TObject*)hDWidth_acros;
      R__b << (TObject*)hTempDtimeDy_near;
      R__b << (TObject*)hTempDtimeDy_acros;
      for (R__i = 0; R__i < 48; R__i++)
         R__b << gSlew[R__i];
      for (R__i = 0; R__i < 48; R__i++)
         R__b << funT0[R__i];
      for (R__i = 0; R__i < 48; R__i++)
         R__b << funRPC[R__i];
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTOF1Detector(void *p) {
      return  p ? new(p) ::BmnTOF1Detector : new ::BmnTOF1Detector;
   }
   static void *newArray_BmnTOF1Detector(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTOF1Detector[nElements] : new ::BmnTOF1Detector[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTOF1Detector(void *p) {
      delete ((::BmnTOF1Detector*)p);
   }
   static void deleteArray_BmnTOF1Detector(void *p) {
      delete [] ((::BmnTOF1Detector*)p);
   }
   static void destruct_BmnTOF1Detector(void *p) {
      typedef ::BmnTOF1Detector current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_BmnTOF1Detector(TBuffer &buf, void *obj) {
      ((::BmnTOF1Detector*)obj)->::BmnTOF1Detector::Streamer(buf);
   }
} // end of namespace ROOT for class ::BmnTOF1Detector

//______________________________________________________________________________
void BmnTof1HitProducerIdeal::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTof1HitProducerIdeal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTof1HitProducerIdeal::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTof1HitProducerIdeal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTof1HitProducerIdeal(void *p) {
      return  p ? new(p) ::BmnTof1HitProducerIdeal : new ::BmnTof1HitProducerIdeal;
   }
   static void *newArray_BmnTof1HitProducerIdeal(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTof1HitProducerIdeal[nElements] : new ::BmnTof1HitProducerIdeal[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTof1HitProducerIdeal(void *p) {
      delete ((::BmnTof1HitProducerIdeal*)p);
   }
   static void deleteArray_BmnTof1HitProducerIdeal(void *p) {
      delete [] ((::BmnTof1HitProducerIdeal*)p);
   }
   static void destruct_BmnTof1HitProducerIdeal(void *p) {
      typedef ::BmnTof1HitProducerIdeal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTof1HitProducerIdeal

//______________________________________________________________________________
void BmnTof1HitProducer::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTof1HitProducer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTof1HitProducer::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTof1HitProducer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTof1HitProducer(void *p) {
      return  p ? new(p) ::BmnTof1HitProducer : new ::BmnTof1HitProducer;
   }
   static void *newArray_BmnTof1HitProducer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTof1HitProducer[nElements] : new ::BmnTof1HitProducer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTof1HitProducer(void *p) {
      delete ((::BmnTof1HitProducer*)p);
   }
   static void deleteArray_BmnTof1HitProducer(void *p) {
      delete [] ((::BmnTof1HitProducer*)p);
   }
   static void destruct_BmnTof1HitProducer(void *p) {
      typedef ::BmnTof1HitProducer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTof1HitProducer

//______________________________________________________________________________
void BmnTof1TDC::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTof1TDC.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TNamed::Streamer(R__b);
      R__b >> const_cast< size_t &>( fTDCSerial );
      R__b >> const_cast< size_t &>( fTDCtype );
      R__b >> fUseINL;
      R__b >> const_cast< double &>( fINLWidth );
      R__b >> const_cast< size_t &>( fINLBins );
      R__b.CheckByteCount(R__s, R__c, BmnTof1TDC::IsA());
   } else {
      R__c = R__b.WriteVersion(BmnTof1TDC::IsA(), kTRUE);
      TNamed::Streamer(R__b);
      R__b << const_cast< size_t &>( fTDCSerial );
      R__b << const_cast< size_t &>( fTDCtype );
      R__b << fUseINL;
      R__b << const_cast< double &>( fINLWidth );
      R__b << const_cast< size_t &>( fINLBins );
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnTof1TDC(void *p) {
      delete ((::BmnTof1TDC*)p);
   }
   static void deleteArray_BmnTof1TDC(void *p) {
      delete [] ((::BmnTof1TDC*)p);
   }
   static void destruct_BmnTof1TDC(void *p) {
      typedef ::BmnTof1TDC current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_BmnTof1TDC(TBuffer &buf, void *obj) {
      ((::BmnTof1TDC*)obj)->::BmnTof1TDC::Streamer(buf);
   }
} // end of namespace ROOT for class ::BmnTof1TDC

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnTof1Configure(void *p) {
      delete ((::BmnTof1Configure*)p);
   }
   static void deleteArray_BmnTof1Configure(void *p) {
      delete [] ((::BmnTof1Configure*)p);
   }
   static void destruct_BmnTof1Configure(void *p) {
      typedef ::BmnTof1Configure current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTof1Configure

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnTof1TDCMapping(void *p) {
      delete ((::BmnTof1TDCMapping*)p);
   }
   static void deleteArray_BmnTof1TDCMapping(void *p) {
      delete [] ((::BmnTof1TDCMapping*)p);
   }
   static void destruct_BmnTof1TDCMapping(void *p) {
      typedef ::BmnTof1TDCMapping current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTof1TDCMapping

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTof1DigitConvertor(void *p) {
      return  p ? new(p) ::BmnTof1DigitConvertor : new ::BmnTof1DigitConvertor;
   }
   static void *newArray_BmnTof1DigitConvertor(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTof1DigitConvertor[nElements] : new ::BmnTof1DigitConvertor[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTof1DigitConvertor(void *p) {
      delete ((::BmnTof1DigitConvertor*)p);
   }
   static void deleteArray_BmnTof1DigitConvertor(void *p) {
      delete [] ((::BmnTof1DigitConvertor*)p);
   }
   static void destruct_BmnTof1DigitConvertor(void *p) {
      typedef ::BmnTof1DigitConvertor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTof1DigitConvertor

namespace {
  void TriggerDictionaryInitialization_G__TOF1Dict_Impl() {
    static const char* headers[] = {
"BmnTOF1.h",
"BmnTOF1Point.h",
"BmnTof1Digit.h",
"BmnTOF1ContFact.h",
"BmnTOF1Geo.h",
"BmnTOF1GeoPar.h",
"BmnTof1HitProducer.h",
"BmnTof1HitProducerIdeal.h",
"BmnTof1GeoUtils.h",
"BmnTOF1TDC.h",
"BmnTOF1Detector.h",
"BmnTOF1Conteiner.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/base",
"/data/yaopeng/bmnroot_Yaopeng/base/data",
"/data/yaopeng/bmnroot_Yaopeng/base/raw",
"/data/yaopeng/bmnroot_Yaopeng/base/header",
"/data/yaopeng/bmnroot_Yaopeng/detectors/tof",
"/data/yaopeng/bmnroot_Yaopeng/detectors/tof1",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/detectors/tof1/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__TOF1Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$BmnTOF1Point.h")))  __attribute__((annotate("$clingAutoload$BmnTOF1.h")))  BmnTOF1Point;
class __attribute__((annotate("$clingAutoload$BmnTOF1.h")))  BmnTOF1;
class __attribute__((annotate("$clingAutoload$BmnTof1Digit.h")))  BmnTof1Digit;
class __attribute__((annotate("$clingAutoload$BmnTOF1ContFact.h")))  BmnTOF1ContFact;
class __attribute__((annotate(R"ATTRDUMP(Class for Hyp)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$BmnTOF1Geo.h")))  BmnTOF1Geo;
class __attribute__((annotate("$clingAutoload$BmnTOF1GeoPar.h")))  BmnTOF1GeoPar;
class __attribute__((annotate("$clingAutoload$BmnTOF1Conteiner.h")))  __attribute__((annotate("$clingAutoload$BmnTof1HitProducer.h")))  BmnTOF1Conteiner;
class __attribute__((annotate("$clingAutoload$BmnTOF1Detector.h")))  __attribute__((annotate("$clingAutoload$BmnTof1HitProducer.h")))  BmnTOF1Detector;
class __attribute__((annotate("$clingAutoload$BmnTof1HitProducerIdeal.h")))  __attribute__((annotate("$clingAutoload$BmnTof1HitProducer.h")))  BmnTof1HitProducerIdeal;
class __attribute__((annotate("$clingAutoload$BmnTof1HitProducer.h")))  BmnTof1HitProducer;
class __attribute__((annotate("$clingAutoload$BmnTOF1TDC.h")))  BmnTof1TDC;
class __attribute__((annotate("$clingAutoload$BmnTOF1TDC.h")))  BmnTof1Configure;
class __attribute__((annotate("$clingAutoload$BmnTOF1TDC.h")))  BmnTof1TDCMapping;
class __attribute__((annotate("$clingAutoload$BmnTOF1TDC.h")))  BmnTof1DigitConvertor;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__TOF1Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "BmnTOF1.h"
#include "BmnTOF1Point.h"
#include "BmnTof1Digit.h"
#include "BmnTOF1ContFact.h"
#include "BmnTOF1Geo.h"
#include "BmnTOF1GeoPar.h"
#include "BmnTof1HitProducer.h"
#include "BmnTof1HitProducerIdeal.h"
#include "BmnTof1GeoUtils.h"
#include "BmnTOF1TDC.h"
#include "BmnTOF1Detector.h"
#include "BmnTOF1Conteiner.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BmnTOF1", payloadCode, "@",
"BmnTOF1ContFact", payloadCode, "@",
"BmnTOF1Conteiner", payloadCode, "@",
"BmnTOF1Detector", payloadCode, "@",
"BmnTOF1Geo", payloadCode, "@",
"BmnTOF1GeoPar", payloadCode, "@",
"BmnTOF1Point", payloadCode, "@",
"BmnTof1Configure", payloadCode, "@",
"BmnTof1Digit", payloadCode, "@",
"BmnTof1DigitConvertor", payloadCode, "@",
"BmnTof1HitProducer", payloadCode, "@",
"BmnTof1HitProducerIdeal", payloadCode, "@",
"BmnTof1TDC", payloadCode, "@",
"BmnTof1TDCMapping", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__TOF1Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__TOF1Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__TOF1Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__TOF1Dict() {
  TriggerDictionaryInitialization_G__TOF1Dict_Impl();
}
