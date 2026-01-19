// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIdetectorsdISiBTdIG__SiBTDict
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
#include "BmnSiBT.h"
#include "BmnSiBTPoint.h"
#include "BmnSiBTStationSet.h"
#include "BmnSiBTStation.h"
#include "BmnSiBTModule.h"
#include "BmnSiBTLayer.h"
#include "BmnSiBTDigit.h"
#include "BmnSiBTDigitizer.h"
#include "BmnSiBTHit.h"
#include "BmnSiBTHitMaker.h"
#include "BmnSiBTTransform.h"
#include "BmnSiBTConfiguration.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace BmnSiBTConfiguration {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *BmnSiBTConfiguration_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("BmnSiBTConfiguration", 0 /*version*/, "BmnSiBTConfiguration.h", 4,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &BmnSiBTConfiguration_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *BmnSiBTConfiguration_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static void *new_BmnSiBTPoint(void *p = nullptr);
   static void *newArray_BmnSiBTPoint(Long_t size, void *p);
   static void delete_BmnSiBTPoint(void *p);
   static void deleteArray_BmnSiBTPoint(void *p);
   static void destruct_BmnSiBTPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiBTPoint*)
   {
      ::BmnSiBTPoint *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiBTPoint >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiBTPoint", ::BmnSiBTPoint::Class_Version(), "BmnSiBTPoint.h", 6,
                  typeid(::BmnSiBTPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiBTPoint::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiBTPoint) );
      instance.SetNew(&new_BmnSiBTPoint);
      instance.SetNewArray(&newArray_BmnSiBTPoint);
      instance.SetDelete(&delete_BmnSiBTPoint);
      instance.SetDeleteArray(&deleteArray_BmnSiBTPoint);
      instance.SetDestructor(&destruct_BmnSiBTPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiBTPoint*)
   {
      return GenerateInitInstanceLocal((::BmnSiBTPoint*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiBTPoint*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiBT(void *p = nullptr);
   static void *newArray_BmnSiBT(Long_t size, void *p);
   static void delete_BmnSiBT(void *p);
   static void deleteArray_BmnSiBT(void *p);
   static void destruct_BmnSiBT(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiBT*)
   {
      ::BmnSiBT *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiBT >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiBT", ::BmnSiBT::Class_Version(), "BmnSiBT.h", 15,
                  typeid(::BmnSiBT), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiBT::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiBT) );
      instance.SetNew(&new_BmnSiBT);
      instance.SetNewArray(&newArray_BmnSiBT);
      instance.SetDelete(&delete_BmnSiBT);
      instance.SetDeleteArray(&deleteArray_BmnSiBT);
      instance.SetDestructor(&destruct_BmnSiBT);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiBT*)
   {
      return GenerateInitInstanceLocal((::BmnSiBT*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiBT*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnSiBTLayer_Dictionary();
   static void BmnSiBTLayer_TClassManip(TClass*);
   static void *new_BmnSiBTLayer(void *p = nullptr);
   static void *newArray_BmnSiBTLayer(Long_t size, void *p);
   static void delete_BmnSiBTLayer(void *p);
   static void deleteArray_BmnSiBTLayer(void *p);
   static void destruct_BmnSiBTLayer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiBTLayer*)
   {
      ::BmnSiBTLayer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnSiBTLayer));
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiBTLayer", "BmnSiBTLayer.h", 15,
                  typeid(::BmnSiBTLayer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnSiBTLayer_Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiBTLayer) );
      instance.SetNew(&new_BmnSiBTLayer);
      instance.SetNewArray(&newArray_BmnSiBTLayer);
      instance.SetDelete(&delete_BmnSiBTLayer);
      instance.SetDeleteArray(&deleteArray_BmnSiBTLayer);
      instance.SetDestructor(&destruct_BmnSiBTLayer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiBTLayer*)
   {
      return GenerateInitInstanceLocal((::BmnSiBTLayer*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiBTLayer*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnSiBTLayer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnSiBTLayer*)nullptr)->GetClass();
      BmnSiBTLayer_TClassManip(theClass);
   return theClass;
   }

   static void BmnSiBTLayer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnSiBTModule_Dictionary();
   static void BmnSiBTModule_TClassManip(TClass*);
   static void *new_BmnSiBTModule(void *p = nullptr);
   static void *newArray_BmnSiBTModule(Long_t size, void *p);
   static void delete_BmnSiBTModule(void *p);
   static void deleteArray_BmnSiBTModule(void *p);
   static void destruct_BmnSiBTModule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiBTModule*)
   {
      ::BmnSiBTModule *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnSiBTModule));
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiBTModule", "BmnSiBTModule.h", 14,
                  typeid(::BmnSiBTModule), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnSiBTModule_Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiBTModule) );
      instance.SetNew(&new_BmnSiBTModule);
      instance.SetNewArray(&newArray_BmnSiBTModule);
      instance.SetDelete(&delete_BmnSiBTModule);
      instance.SetDeleteArray(&deleteArray_BmnSiBTModule);
      instance.SetDestructor(&destruct_BmnSiBTModule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiBTModule*)
   {
      return GenerateInitInstanceLocal((::BmnSiBTModule*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiBTModule*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnSiBTModule_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnSiBTModule*)nullptr)->GetClass();
      BmnSiBTModule_TClassManip(theClass);
   return theClass;
   }

   static void BmnSiBTModule_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiBTStation(void *p = nullptr);
   static void *newArray_BmnSiBTStation(Long_t size, void *p);
   static void delete_BmnSiBTStation(void *p);
   static void deleteArray_BmnSiBTStation(void *p);
   static void destruct_BmnSiBTStation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiBTStation*)
   {
      ::BmnSiBTStation *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiBTStation >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiBTStation", ::BmnSiBTStation::Class_Version(), "BmnSiBTStation.h", 12,
                  typeid(::BmnSiBTStation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiBTStation::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiBTStation) );
      instance.SetNew(&new_BmnSiBTStation);
      instance.SetNewArray(&newArray_BmnSiBTStation);
      instance.SetDelete(&delete_BmnSiBTStation);
      instance.SetDeleteArray(&deleteArray_BmnSiBTStation);
      instance.SetDestructor(&destruct_BmnSiBTStation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiBTStation*)
   {
      return GenerateInitInstanceLocal((::BmnSiBTStation*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiBTStation*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiBTStationSet(void *p = nullptr);
   static void *newArray_BmnSiBTStationSet(Long_t size, void *p);
   static void delete_BmnSiBTStationSet(void *p);
   static void deleteArray_BmnSiBTStationSet(void *p);
   static void destruct_BmnSiBTStationSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiBTStationSet*)
   {
      ::BmnSiBTStationSet *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiBTStationSet >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiBTStationSet", ::BmnSiBTStationSet::Class_Version(), "BmnSiBTStationSet.h", 13,
                  typeid(::BmnSiBTStationSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiBTStationSet::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiBTStationSet) );
      instance.SetNew(&new_BmnSiBTStationSet);
      instance.SetNewArray(&newArray_BmnSiBTStationSet);
      instance.SetDelete(&delete_BmnSiBTStationSet);
      instance.SetDeleteArray(&deleteArray_BmnSiBTStationSet);
      instance.SetDestructor(&destruct_BmnSiBTStationSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiBTStationSet*)
   {
      return GenerateInitInstanceLocal((::BmnSiBTStationSet*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiBTStationSet*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiBTDigit(void *p = nullptr);
   static void *newArray_BmnSiBTDigit(Long_t size, void *p);
   static void delete_BmnSiBTDigit(void *p);
   static void deleteArray_BmnSiBTDigit(void *p);
   static void destruct_BmnSiBTDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiBTDigit*)
   {
      ::BmnSiBTDigit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiBTDigit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiBTDigit", ::BmnSiBTDigit::Class_Version(), "BmnSiBTDigit.h", 8,
                  typeid(::BmnSiBTDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiBTDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiBTDigit) );
      instance.SetNew(&new_BmnSiBTDigit);
      instance.SetNewArray(&newArray_BmnSiBTDigit);
      instance.SetDelete(&delete_BmnSiBTDigit);
      instance.SetDeleteArray(&deleteArray_BmnSiBTDigit);
      instance.SetDestructor(&destruct_BmnSiBTDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiBTDigit*)
   {
      return GenerateInitInstanceLocal((::BmnSiBTDigit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiBTDigit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiBTHit(void *p = nullptr);
   static void *newArray_BmnSiBTHit(Long_t size, void *p);
   static void delete_BmnSiBTHit(void *p);
   static void deleteArray_BmnSiBTHit(void *p);
   static void destruct_BmnSiBTHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiBTHit*)
   {
      ::BmnSiBTHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiBTHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiBTHit", ::BmnSiBTHit::Class_Version(), "BmnSiBTHit.h", 8,
                  typeid(::BmnSiBTHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiBTHit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiBTHit) );
      instance.SetNew(&new_BmnSiBTHit);
      instance.SetNewArray(&newArray_BmnSiBTHit);
      instance.SetDelete(&delete_BmnSiBTHit);
      instance.SetDeleteArray(&deleteArray_BmnSiBTHit);
      instance.SetDestructor(&destruct_BmnSiBTHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiBTHit*)
   {
      return GenerateInitInstanceLocal((::BmnSiBTHit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiBTHit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiBTTransform(void *p = nullptr);
   static void *newArray_BmnSiBTTransform(Long_t size, void *p);
   static void delete_BmnSiBTTransform(void *p);
   static void deleteArray_BmnSiBTTransform(void *p);
   static void destruct_BmnSiBTTransform(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiBTTransform*)
   {
      ::BmnSiBTTransform *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiBTTransform >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiBTTransform", ::BmnSiBTTransform::Class_Version(), "BmnSiBTTransform.h", 19,
                  typeid(::BmnSiBTTransform), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiBTTransform::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiBTTransform) );
      instance.SetNew(&new_BmnSiBTTransform);
      instance.SetNewArray(&newArray_BmnSiBTTransform);
      instance.SetDelete(&delete_BmnSiBTTransform);
      instance.SetDeleteArray(&deleteArray_BmnSiBTTransform);
      instance.SetDestructor(&destruct_BmnSiBTTransform);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiBTTransform*)
   {
      return GenerateInitInstanceLocal((::BmnSiBTTransform*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiBTTransform*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiBTDigitizer(void *p = nullptr);
   static void *newArray_BmnSiBTDigitizer(Long_t size, void *p);
   static void delete_BmnSiBTDigitizer(void *p);
   static void deleteArray_BmnSiBTDigitizer(void *p);
   static void destruct_BmnSiBTDigitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiBTDigitizer*)
   {
      ::BmnSiBTDigitizer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiBTDigitizer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiBTDigitizer", ::BmnSiBTDigitizer::Class_Version(), "BmnSiBTDigitizer.h", 20,
                  typeid(::BmnSiBTDigitizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiBTDigitizer::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiBTDigitizer) );
      instance.SetNew(&new_BmnSiBTDigitizer);
      instance.SetNewArray(&newArray_BmnSiBTDigitizer);
      instance.SetDelete(&delete_BmnSiBTDigitizer);
      instance.SetDeleteArray(&deleteArray_BmnSiBTDigitizer);
      instance.SetDestructor(&destruct_BmnSiBTDigitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiBTDigitizer*)
   {
      return GenerateInitInstanceLocal((::BmnSiBTDigitizer*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiBTDigitizer*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiBTHitMaker(void *p = nullptr);
   static void *newArray_BmnSiBTHitMaker(Long_t size, void *p);
   static void delete_BmnSiBTHitMaker(void *p);
   static void deleteArray_BmnSiBTHitMaker(void *p);
   static void destruct_BmnSiBTHitMaker(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiBTHitMaker*)
   {
      ::BmnSiBTHitMaker *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiBTHitMaker >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiBTHitMaker", ::BmnSiBTHitMaker::Class_Version(), "BmnSiBTHitMaker.h", 25,
                  typeid(::BmnSiBTHitMaker), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiBTHitMaker::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiBTHitMaker) );
      instance.SetNew(&new_BmnSiBTHitMaker);
      instance.SetNewArray(&newArray_BmnSiBTHitMaker);
      instance.SetDelete(&delete_BmnSiBTHitMaker);
      instance.SetDeleteArray(&deleteArray_BmnSiBTHitMaker);
      instance.SetDestructor(&destruct_BmnSiBTHitMaker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiBTHitMaker*)
   {
      return GenerateInitInstanceLocal((::BmnSiBTHitMaker*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiBTHitMaker*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnSiBTPoint::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiBTPoint::Class_Name()
{
   return "BmnSiBTPoint";
}

//______________________________________________________________________________
const char *BmnSiBTPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiBTPoint*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiBTPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiBTPoint*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiBTPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiBTPoint*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiBTPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiBTPoint*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiBT::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiBT::Class_Name()
{
   return "BmnSiBT";
}

//______________________________________________________________________________
const char *BmnSiBT::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiBT*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiBT::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiBT*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiBT::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiBT*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiBT::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiBT*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiBTStation::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiBTStation::Class_Name()
{
   return "BmnSiBTStation";
}

//______________________________________________________________________________
const char *BmnSiBTStation::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiBTStation*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiBTStation::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiBTStation*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiBTStation::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiBTStation*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiBTStation::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiBTStation*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiBTStationSet::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiBTStationSet::Class_Name()
{
   return "BmnSiBTStationSet";
}

//______________________________________________________________________________
const char *BmnSiBTStationSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiBTStationSet*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiBTStationSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiBTStationSet*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiBTStationSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiBTStationSet*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiBTStationSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiBTStationSet*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiBTDigit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiBTDigit::Class_Name()
{
   return "BmnSiBTDigit";
}

//______________________________________________________________________________
const char *BmnSiBTDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiBTDigit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiBTDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiBTDigit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiBTDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiBTDigit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiBTDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiBTDigit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiBTHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiBTHit::Class_Name()
{
   return "BmnSiBTHit";
}

//______________________________________________________________________________
const char *BmnSiBTHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiBTHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiBTHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiBTHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiBTHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiBTHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiBTHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiBTHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiBTTransform::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiBTTransform::Class_Name()
{
   return "BmnSiBTTransform";
}

//______________________________________________________________________________
const char *BmnSiBTTransform::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiBTTransform*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiBTTransform::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiBTTransform*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiBTTransform::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiBTTransform*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiBTTransform::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiBTTransform*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiBTDigitizer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiBTDigitizer::Class_Name()
{
   return "BmnSiBTDigitizer";
}

//______________________________________________________________________________
const char *BmnSiBTDigitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiBTDigitizer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiBTDigitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiBTDigitizer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiBTDigitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiBTDigitizer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiBTDigitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiBTDigitizer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiBTHitMaker::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiBTHitMaker::Class_Name()
{
   return "BmnSiBTHitMaker";
}

//______________________________________________________________________________
const char *BmnSiBTHitMaker::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiBTHitMaker*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiBTHitMaker::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiBTHitMaker*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiBTHitMaker::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiBTHitMaker*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiBTHitMaker::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiBTHitMaker*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnSiBTPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiBTPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiBTPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiBTPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiBTPoint(void *p) {
      return  p ? new(p) ::BmnSiBTPoint : new ::BmnSiBTPoint;
   }
   static void *newArray_BmnSiBTPoint(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiBTPoint[nElements] : new ::BmnSiBTPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiBTPoint(void *p) {
      delete ((::BmnSiBTPoint*)p);
   }
   static void deleteArray_BmnSiBTPoint(void *p) {
      delete [] ((::BmnSiBTPoint*)p);
   }
   static void destruct_BmnSiBTPoint(void *p) {
      typedef ::BmnSiBTPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiBTPoint

//______________________________________________________________________________
void BmnSiBT::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiBT.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiBT::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiBT::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiBT(void *p) {
      return  p ? new(p) ::BmnSiBT : new ::BmnSiBT;
   }
   static void *newArray_BmnSiBT(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiBT[nElements] : new ::BmnSiBT[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiBT(void *p) {
      delete ((::BmnSiBT*)p);
   }
   static void deleteArray_BmnSiBT(void *p) {
      delete [] ((::BmnSiBT*)p);
   }
   static void destruct_BmnSiBT(void *p) {
      typedef ::BmnSiBT current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiBT

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiBTLayer(void *p) {
      return  p ? new(p) ::BmnSiBTLayer : new ::BmnSiBTLayer;
   }
   static void *newArray_BmnSiBTLayer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiBTLayer[nElements] : new ::BmnSiBTLayer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiBTLayer(void *p) {
      delete ((::BmnSiBTLayer*)p);
   }
   static void deleteArray_BmnSiBTLayer(void *p) {
      delete [] ((::BmnSiBTLayer*)p);
   }
   static void destruct_BmnSiBTLayer(void *p) {
      typedef ::BmnSiBTLayer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiBTLayer

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiBTModule(void *p) {
      return  p ? new(p) ::BmnSiBTModule : new ::BmnSiBTModule;
   }
   static void *newArray_BmnSiBTModule(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiBTModule[nElements] : new ::BmnSiBTModule[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiBTModule(void *p) {
      delete ((::BmnSiBTModule*)p);
   }
   static void deleteArray_BmnSiBTModule(void *p) {
      delete [] ((::BmnSiBTModule*)p);
   }
   static void destruct_BmnSiBTModule(void *p) {
      typedef ::BmnSiBTModule current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiBTModule

//______________________________________________________________________________
void BmnSiBTStation::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiBTStation.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiBTStation::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiBTStation::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiBTStation(void *p) {
      return  p ? new(p) ::BmnSiBTStation : new ::BmnSiBTStation;
   }
   static void *newArray_BmnSiBTStation(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiBTStation[nElements] : new ::BmnSiBTStation[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiBTStation(void *p) {
      delete ((::BmnSiBTStation*)p);
   }
   static void deleteArray_BmnSiBTStation(void *p) {
      delete [] ((::BmnSiBTStation*)p);
   }
   static void destruct_BmnSiBTStation(void *p) {
      typedef ::BmnSiBTStation current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiBTStation

//______________________________________________________________________________
void BmnSiBTStationSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiBTStationSet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiBTStationSet::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiBTStationSet::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiBTStationSet(void *p) {
      return  p ? new(p) ::BmnSiBTStationSet : new ::BmnSiBTStationSet;
   }
   static void *newArray_BmnSiBTStationSet(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiBTStationSet[nElements] : new ::BmnSiBTStationSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiBTStationSet(void *p) {
      delete ((::BmnSiBTStationSet*)p);
   }
   static void deleteArray_BmnSiBTStationSet(void *p) {
      delete [] ((::BmnSiBTStationSet*)p);
   }
   static void destruct_BmnSiBTStationSet(void *p) {
      typedef ::BmnSiBTStationSet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiBTStationSet

//______________________________________________________________________________
void BmnSiBTDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiBTDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiBTDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiBTDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiBTDigit(void *p) {
      return  p ? new(p) ::BmnSiBTDigit : new ::BmnSiBTDigit;
   }
   static void *newArray_BmnSiBTDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiBTDigit[nElements] : new ::BmnSiBTDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiBTDigit(void *p) {
      delete ((::BmnSiBTDigit*)p);
   }
   static void deleteArray_BmnSiBTDigit(void *p) {
      delete [] ((::BmnSiBTDigit*)p);
   }
   static void destruct_BmnSiBTDigit(void *p) {
      typedef ::BmnSiBTDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiBTDigit

//______________________________________________________________________________
void BmnSiBTHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiBTHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiBTHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiBTHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiBTHit(void *p) {
      return  p ? new(p) ::BmnSiBTHit : new ::BmnSiBTHit;
   }
   static void *newArray_BmnSiBTHit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiBTHit[nElements] : new ::BmnSiBTHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiBTHit(void *p) {
      delete ((::BmnSiBTHit*)p);
   }
   static void deleteArray_BmnSiBTHit(void *p) {
      delete [] ((::BmnSiBTHit*)p);
   }
   static void destruct_BmnSiBTHit(void *p) {
      typedef ::BmnSiBTHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiBTHit

//______________________________________________________________________________
void BmnSiBTTransform::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiBTTransform.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiBTTransform::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiBTTransform::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiBTTransform(void *p) {
      return  p ? new(p) ::BmnSiBTTransform : new ::BmnSiBTTransform;
   }
   static void *newArray_BmnSiBTTransform(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiBTTransform[nElements] : new ::BmnSiBTTransform[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiBTTransform(void *p) {
      delete ((::BmnSiBTTransform*)p);
   }
   static void deleteArray_BmnSiBTTransform(void *p) {
      delete [] ((::BmnSiBTTransform*)p);
   }
   static void destruct_BmnSiBTTransform(void *p) {
      typedef ::BmnSiBTTransform current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiBTTransform

//______________________________________________________________________________
void BmnSiBTDigitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiBTDigitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiBTDigitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiBTDigitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiBTDigitizer(void *p) {
      return  p ? new(p) ::BmnSiBTDigitizer : new ::BmnSiBTDigitizer;
   }
   static void *newArray_BmnSiBTDigitizer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiBTDigitizer[nElements] : new ::BmnSiBTDigitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiBTDigitizer(void *p) {
      delete ((::BmnSiBTDigitizer*)p);
   }
   static void deleteArray_BmnSiBTDigitizer(void *p) {
      delete [] ((::BmnSiBTDigitizer*)p);
   }
   static void destruct_BmnSiBTDigitizer(void *p) {
      typedef ::BmnSiBTDigitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiBTDigitizer

//______________________________________________________________________________
void BmnSiBTHitMaker::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiBTHitMaker.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiBTHitMaker::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiBTHitMaker::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiBTHitMaker(void *p) {
      return  p ? new(p) ::BmnSiBTHitMaker : new ::BmnSiBTHitMaker;
   }
   static void *newArray_BmnSiBTHitMaker(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiBTHitMaker[nElements] : new ::BmnSiBTHitMaker[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiBTHitMaker(void *p) {
      delete ((::BmnSiBTHitMaker*)p);
   }
   static void deleteArray_BmnSiBTHitMaker(void *p) {
      delete [] ((::BmnSiBTHitMaker*)p);
   }
   static void destruct_BmnSiBTHitMaker(void *p) {
      typedef ::BmnSiBTHitMaker current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiBTHitMaker

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
   static TClass *vectorlEBmnSiBTLayergR_Dictionary();
   static void vectorlEBmnSiBTLayergR_TClassManip(TClass*);
   static void *new_vectorlEBmnSiBTLayergR(void *p = nullptr);
   static void *newArray_vectorlEBmnSiBTLayergR(Long_t size, void *p);
   static void delete_vectorlEBmnSiBTLayergR(void *p);
   static void deleteArray_vectorlEBmnSiBTLayergR(void *p);
   static void destruct_vectorlEBmnSiBTLayergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnSiBTLayer>*)
   {
      vector<BmnSiBTLayer> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnSiBTLayer>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnSiBTLayer>", -2, "vector", 386,
                  typeid(vector<BmnSiBTLayer>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnSiBTLayergR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnSiBTLayer>) );
      instance.SetNew(&new_vectorlEBmnSiBTLayergR);
      instance.SetNewArray(&newArray_vectorlEBmnSiBTLayergR);
      instance.SetDelete(&delete_vectorlEBmnSiBTLayergR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnSiBTLayergR);
      instance.SetDestructor(&destruct_vectorlEBmnSiBTLayergR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnSiBTLayer> >()));

      ::ROOT::AddClassAlternate("vector<BmnSiBTLayer>","std::vector<BmnSiBTLayer, std::allocator<BmnSiBTLayer> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnSiBTLayer>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnSiBTLayergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnSiBTLayer>*)nullptr)->GetClass();
      vectorlEBmnSiBTLayergR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnSiBTLayergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnSiBTLayergR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnSiBTLayer> : new vector<BmnSiBTLayer>;
   }
   static void *newArray_vectorlEBmnSiBTLayergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnSiBTLayer>[nElements] : new vector<BmnSiBTLayer>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnSiBTLayergR(void *p) {
      delete ((vector<BmnSiBTLayer>*)p);
   }
   static void deleteArray_vectorlEBmnSiBTLayergR(void *p) {
      delete [] ((vector<BmnSiBTLayer>*)p);
   }
   static void destruct_vectorlEBmnSiBTLayergR(void *p) {
      typedef vector<BmnSiBTLayer> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnSiBTLayer>

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
  void TriggerDictionaryInitialization_G__SiBTDict_Impl() {
    static const char* headers[] = {
"BmnSiBT.h",
"BmnSiBTPoint.h",
"BmnSiBTStationSet.h",
"BmnSiBTStation.h",
"BmnSiBTModule.h",
"BmnSiBTLayer.h",
"BmnSiBTDigit.h",
"BmnSiBTDigitizer.h",
"BmnSiBTHit.h",
"BmnSiBTHitMaker.h",
"BmnSiBTTransform.h",
"BmnSiBTConfiguration.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/base",
"/data/yaopeng/bmnroot_Yaopeng/base/data",
"/data/yaopeng/bmnroot_Yaopeng/base/raw",
"/data/yaopeng/bmnroot_Yaopeng/base/header",
"/data/yaopeng/bmnroot_Yaopeng/detectors/SiBT",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/detectors/SiBT/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__SiBTDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$BmnSiBTPoint.h")))  __attribute__((annotate("$clingAutoload$BmnSiBT.h")))  BmnSiBTPoint;
class __attribute__((annotate("$clingAutoload$BmnSiBT.h")))  BmnSiBT;
class __attribute__((annotate("$clingAutoload$BmnSiBTLayer.h")))  __attribute__((annotate("$clingAutoload$BmnSiBTStationSet.h")))  BmnSiBTLayer;
class __attribute__((annotate("$clingAutoload$BmnSiBTModule.h")))  __attribute__((annotate("$clingAutoload$BmnSiBTStationSet.h")))  BmnSiBTModule;
class __attribute__((annotate("$clingAutoload$BmnSiBTStation.h")))  __attribute__((annotate("$clingAutoload$BmnSiBTStationSet.h")))  BmnSiBTStation;
class __attribute__((annotate("$clingAutoload$BmnSiBTStationSet.h")))  BmnSiBTStationSet;
class __attribute__((annotate("$clingAutoload$BmnSiBTDigit.h")))  BmnSiBTDigit;
class __attribute__((annotate("$clingAutoload$BmnSiBTHit.h")))  __attribute__((annotate("$clingAutoload$BmnSiBTDigitizer.h")))  BmnSiBTHit;
class __attribute__((annotate("$clingAutoload$BmnSiBTTransform.h")))  __attribute__((annotate("$clingAutoload$BmnSiBTDigitizer.h")))  BmnSiBTTransform;
class __attribute__((annotate("$clingAutoload$BmnSiBTDigitizer.h")))  BmnSiBTDigitizer;
class __attribute__((annotate("$clingAutoload$BmnSiBTHitMaker.h")))  BmnSiBTHitMaker;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__SiBTDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "BmnSiBT.h"
#include "BmnSiBTPoint.h"
#include "BmnSiBTStationSet.h"
#include "BmnSiBTStation.h"
#include "BmnSiBTModule.h"
#include "BmnSiBTLayer.h"
#include "BmnSiBTDigit.h"
#include "BmnSiBTDigitizer.h"
#include "BmnSiBTHit.h"
#include "BmnSiBTHitMaker.h"
#include "BmnSiBTTransform.h"
#include "BmnSiBTConfiguration.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BmnSiBT", payloadCode, "@",
"BmnSiBTConfiguration::SiBT_CONFIG", payloadCode, "@",
"BmnSiBTDigit", payloadCode, "@",
"BmnSiBTDigitizer", payloadCode, "@",
"BmnSiBTHit", payloadCode, "@",
"BmnSiBTHitMaker", payloadCode, "@",
"BmnSiBTLayer", payloadCode, "@",
"BmnSiBTModule", payloadCode, "@",
"BmnSiBTPoint", payloadCode, "@",
"BmnSiBTStation", payloadCode, "@",
"BmnSiBTStationSet", payloadCode, "@",
"BmnSiBTTransform", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__SiBTDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__SiBTDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__SiBTDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__SiBTDict() {
  TriggerDictionaryInitialization_G__SiBTDict_Impl();
}
