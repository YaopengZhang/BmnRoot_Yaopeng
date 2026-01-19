// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIdetectorsdIcscdIG__CSCDict
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
#include "BmnCSC.h"
#include "BmnCSCPoint.h"
#include "BmnCSCStationSet.h"
#include "BmnCSCStation.h"
#include "BmnCSCModule.h"
#include "BmnCSCLayer.h"
#include "BmnCSCDigit.h"
#include "BmnCSCDigitizer.h"
#include "BmnCSCHit.h"
#include "BmnCSCHitMaker.h"
#include "BmnCSCTransform.h"
#include "BmnCSCConfiguration.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace BmnCSCConfiguration {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *BmnCSCConfiguration_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("BmnCSCConfiguration", 0 /*version*/, "BmnCSCConfiguration.h", 4,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &BmnCSCConfiguration_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *BmnCSCConfiguration_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static void *new_BmnCSCPoint(void *p = nullptr);
   static void *newArray_BmnCSCPoint(Long_t size, void *p);
   static void delete_BmnCSCPoint(void *p);
   static void deleteArray_BmnCSCPoint(void *p);
   static void destruct_BmnCSCPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnCSCPoint*)
   {
      ::BmnCSCPoint *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnCSCPoint >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnCSCPoint", ::BmnCSCPoint::Class_Version(), "BmnCSCPoint.h", 6,
                  typeid(::BmnCSCPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnCSCPoint::Dictionary, isa_proxy, 4,
                  sizeof(::BmnCSCPoint) );
      instance.SetNew(&new_BmnCSCPoint);
      instance.SetNewArray(&newArray_BmnCSCPoint);
      instance.SetDelete(&delete_BmnCSCPoint);
      instance.SetDeleteArray(&deleteArray_BmnCSCPoint);
      instance.SetDestructor(&destruct_BmnCSCPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnCSCPoint*)
   {
      return GenerateInitInstanceLocal((::BmnCSCPoint*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnCSCPoint*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnCSC(void *p = nullptr);
   static void *newArray_BmnCSC(Long_t size, void *p);
   static void delete_BmnCSC(void *p);
   static void deleteArray_BmnCSC(void *p);
   static void destruct_BmnCSC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnCSC*)
   {
      ::BmnCSC *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnCSC >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnCSC", ::BmnCSC::Class_Version(), "BmnCSC.h", 15,
                  typeid(::BmnCSC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnCSC::Dictionary, isa_proxy, 4,
                  sizeof(::BmnCSC) );
      instance.SetNew(&new_BmnCSC);
      instance.SetNewArray(&newArray_BmnCSC);
      instance.SetDelete(&delete_BmnCSC);
      instance.SetDeleteArray(&deleteArray_BmnCSC);
      instance.SetDestructor(&destruct_BmnCSC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnCSC*)
   {
      return GenerateInitInstanceLocal((::BmnCSC*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnCSC*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnCSCLayer_Dictionary();
   static void BmnCSCLayer_TClassManip(TClass*);
   static void *new_BmnCSCLayer(void *p = nullptr);
   static void *newArray_BmnCSCLayer(Long_t size, void *p);
   static void delete_BmnCSCLayer(void *p);
   static void deleteArray_BmnCSCLayer(void *p);
   static void destruct_BmnCSCLayer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnCSCLayer*)
   {
      ::BmnCSCLayer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnCSCLayer));
      static ::ROOT::TGenericClassInfo 
         instance("BmnCSCLayer", "BmnCSCLayer.h", 15,
                  typeid(::BmnCSCLayer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnCSCLayer_Dictionary, isa_proxy, 4,
                  sizeof(::BmnCSCLayer) );
      instance.SetNew(&new_BmnCSCLayer);
      instance.SetNewArray(&newArray_BmnCSCLayer);
      instance.SetDelete(&delete_BmnCSCLayer);
      instance.SetDeleteArray(&deleteArray_BmnCSCLayer);
      instance.SetDestructor(&destruct_BmnCSCLayer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnCSCLayer*)
   {
      return GenerateInitInstanceLocal((::BmnCSCLayer*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnCSCLayer*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnCSCLayer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnCSCLayer*)nullptr)->GetClass();
      BmnCSCLayer_TClassManip(theClass);
   return theClass;
   }

   static void BmnCSCLayer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnCSCModule_Dictionary();
   static void BmnCSCModule_TClassManip(TClass*);
   static void *new_BmnCSCModule(void *p = nullptr);
   static void *newArray_BmnCSCModule(Long_t size, void *p);
   static void delete_BmnCSCModule(void *p);
   static void deleteArray_BmnCSCModule(void *p);
   static void destruct_BmnCSCModule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnCSCModule*)
   {
      ::BmnCSCModule *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnCSCModule));
      static ::ROOT::TGenericClassInfo 
         instance("BmnCSCModule", "BmnCSCModule.h", 14,
                  typeid(::BmnCSCModule), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnCSCModule_Dictionary, isa_proxy, 4,
                  sizeof(::BmnCSCModule) );
      instance.SetNew(&new_BmnCSCModule);
      instance.SetNewArray(&newArray_BmnCSCModule);
      instance.SetDelete(&delete_BmnCSCModule);
      instance.SetDeleteArray(&deleteArray_BmnCSCModule);
      instance.SetDestructor(&destruct_BmnCSCModule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnCSCModule*)
   {
      return GenerateInitInstanceLocal((::BmnCSCModule*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnCSCModule*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnCSCModule_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnCSCModule*)nullptr)->GetClass();
      BmnCSCModule_TClassManip(theClass);
   return theClass;
   }

   static void BmnCSCModule_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnCSCStation(void *p = nullptr);
   static void *newArray_BmnCSCStation(Long_t size, void *p);
   static void delete_BmnCSCStation(void *p);
   static void deleteArray_BmnCSCStation(void *p);
   static void destruct_BmnCSCStation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnCSCStation*)
   {
      ::BmnCSCStation *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnCSCStation >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnCSCStation", ::BmnCSCStation::Class_Version(), "BmnCSCStation.h", 12,
                  typeid(::BmnCSCStation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnCSCStation::Dictionary, isa_proxy, 4,
                  sizeof(::BmnCSCStation) );
      instance.SetNew(&new_BmnCSCStation);
      instance.SetNewArray(&newArray_BmnCSCStation);
      instance.SetDelete(&delete_BmnCSCStation);
      instance.SetDeleteArray(&deleteArray_BmnCSCStation);
      instance.SetDestructor(&destruct_BmnCSCStation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnCSCStation*)
   {
      return GenerateInitInstanceLocal((::BmnCSCStation*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnCSCStation*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnCSCStationSet(void *p = nullptr);
   static void *newArray_BmnCSCStationSet(Long_t size, void *p);
   static void delete_BmnCSCStationSet(void *p);
   static void deleteArray_BmnCSCStationSet(void *p);
   static void destruct_BmnCSCStationSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnCSCStationSet*)
   {
      ::BmnCSCStationSet *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnCSCStationSet >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnCSCStationSet", ::BmnCSCStationSet::Class_Version(), "BmnCSCStationSet.h", 13,
                  typeid(::BmnCSCStationSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnCSCStationSet::Dictionary, isa_proxy, 4,
                  sizeof(::BmnCSCStationSet) );
      instance.SetNew(&new_BmnCSCStationSet);
      instance.SetNewArray(&newArray_BmnCSCStationSet);
      instance.SetDelete(&delete_BmnCSCStationSet);
      instance.SetDeleteArray(&deleteArray_BmnCSCStationSet);
      instance.SetDestructor(&destruct_BmnCSCStationSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnCSCStationSet*)
   {
      return GenerateInitInstanceLocal((::BmnCSCStationSet*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnCSCStationSet*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnCSCDigit(void *p = nullptr);
   static void *newArray_BmnCSCDigit(Long_t size, void *p);
   static void delete_BmnCSCDigit(void *p);
   static void deleteArray_BmnCSCDigit(void *p);
   static void destruct_BmnCSCDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnCSCDigit*)
   {
      ::BmnCSCDigit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnCSCDigit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnCSCDigit", ::BmnCSCDigit::Class_Version(), "BmnCSCDigit.h", 8,
                  typeid(::BmnCSCDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnCSCDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnCSCDigit) );
      instance.SetNew(&new_BmnCSCDigit);
      instance.SetNewArray(&newArray_BmnCSCDigit);
      instance.SetDelete(&delete_BmnCSCDigit);
      instance.SetDeleteArray(&deleteArray_BmnCSCDigit);
      instance.SetDestructor(&destruct_BmnCSCDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnCSCDigit*)
   {
      return GenerateInitInstanceLocal((::BmnCSCDigit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnCSCDigit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnCSCHit(void *p = nullptr);
   static void *newArray_BmnCSCHit(Long_t size, void *p);
   static void delete_BmnCSCHit(void *p);
   static void deleteArray_BmnCSCHit(void *p);
   static void destruct_BmnCSCHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnCSCHit*)
   {
      ::BmnCSCHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnCSCHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnCSCHit", ::BmnCSCHit::Class_Version(), "BmnCSCHit.h", 8,
                  typeid(::BmnCSCHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnCSCHit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnCSCHit) );
      instance.SetNew(&new_BmnCSCHit);
      instance.SetNewArray(&newArray_BmnCSCHit);
      instance.SetDelete(&delete_BmnCSCHit);
      instance.SetDeleteArray(&deleteArray_BmnCSCHit);
      instance.SetDestructor(&destruct_BmnCSCHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnCSCHit*)
   {
      return GenerateInitInstanceLocal((::BmnCSCHit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnCSCHit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnCSCTransform(void *p = nullptr);
   static void *newArray_BmnCSCTransform(Long_t size, void *p);
   static void delete_BmnCSCTransform(void *p);
   static void deleteArray_BmnCSCTransform(void *p);
   static void destruct_BmnCSCTransform(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnCSCTransform*)
   {
      ::BmnCSCTransform *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnCSCTransform >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnCSCTransform", ::BmnCSCTransform::Class_Version(), "BmnCSCTransform.h", 19,
                  typeid(::BmnCSCTransform), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnCSCTransform::Dictionary, isa_proxy, 4,
                  sizeof(::BmnCSCTransform) );
      instance.SetNew(&new_BmnCSCTransform);
      instance.SetNewArray(&newArray_BmnCSCTransform);
      instance.SetDelete(&delete_BmnCSCTransform);
      instance.SetDeleteArray(&deleteArray_BmnCSCTransform);
      instance.SetDestructor(&destruct_BmnCSCTransform);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnCSCTransform*)
   {
      return GenerateInitInstanceLocal((::BmnCSCTransform*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnCSCTransform*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnCSCDigitizer(void *p = nullptr);
   static void *newArray_BmnCSCDigitizer(Long_t size, void *p);
   static void delete_BmnCSCDigitizer(void *p);
   static void deleteArray_BmnCSCDigitizer(void *p);
   static void destruct_BmnCSCDigitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnCSCDigitizer*)
   {
      ::BmnCSCDigitizer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnCSCDigitizer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnCSCDigitizer", ::BmnCSCDigitizer::Class_Version(), "BmnCSCDigitizer.h", 20,
                  typeid(::BmnCSCDigitizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnCSCDigitizer::Dictionary, isa_proxy, 4,
                  sizeof(::BmnCSCDigitizer) );
      instance.SetNew(&new_BmnCSCDigitizer);
      instance.SetNewArray(&newArray_BmnCSCDigitizer);
      instance.SetDelete(&delete_BmnCSCDigitizer);
      instance.SetDeleteArray(&deleteArray_BmnCSCDigitizer);
      instance.SetDestructor(&destruct_BmnCSCDigitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnCSCDigitizer*)
   {
      return GenerateInitInstanceLocal((::BmnCSCDigitizer*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnCSCDigitizer*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnCSCHitMaker(void *p = nullptr);
   static void *newArray_BmnCSCHitMaker(Long_t size, void *p);
   static void delete_BmnCSCHitMaker(void *p);
   static void deleteArray_BmnCSCHitMaker(void *p);
   static void destruct_BmnCSCHitMaker(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnCSCHitMaker*)
   {
      ::BmnCSCHitMaker *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnCSCHitMaker >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnCSCHitMaker", ::BmnCSCHitMaker::Class_Version(), "BmnCSCHitMaker.h", 24,
                  typeid(::BmnCSCHitMaker), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnCSCHitMaker::Dictionary, isa_proxy, 4,
                  sizeof(::BmnCSCHitMaker) );
      instance.SetNew(&new_BmnCSCHitMaker);
      instance.SetNewArray(&newArray_BmnCSCHitMaker);
      instance.SetDelete(&delete_BmnCSCHitMaker);
      instance.SetDeleteArray(&deleteArray_BmnCSCHitMaker);
      instance.SetDestructor(&destruct_BmnCSCHitMaker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnCSCHitMaker*)
   {
      return GenerateInitInstanceLocal((::BmnCSCHitMaker*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnCSCHitMaker*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnCSCPoint::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnCSCPoint::Class_Name()
{
   return "BmnCSCPoint";
}

//______________________________________________________________________________
const char *BmnCSCPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCSCPoint*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnCSCPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCSCPoint*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnCSCPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCSCPoint*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnCSCPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCSCPoint*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnCSC::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnCSC::Class_Name()
{
   return "BmnCSC";
}

//______________________________________________________________________________
const char *BmnCSC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCSC*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnCSC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCSC*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnCSC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCSC*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnCSC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCSC*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnCSCStation::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnCSCStation::Class_Name()
{
   return "BmnCSCStation";
}

//______________________________________________________________________________
const char *BmnCSCStation::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCSCStation*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnCSCStation::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCSCStation*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnCSCStation::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCSCStation*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnCSCStation::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCSCStation*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnCSCStationSet::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnCSCStationSet::Class_Name()
{
   return "BmnCSCStationSet";
}

//______________________________________________________________________________
const char *BmnCSCStationSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCSCStationSet*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnCSCStationSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCSCStationSet*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnCSCStationSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCSCStationSet*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnCSCStationSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCSCStationSet*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnCSCDigit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnCSCDigit::Class_Name()
{
   return "BmnCSCDigit";
}

//______________________________________________________________________________
const char *BmnCSCDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCSCDigit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnCSCDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCSCDigit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnCSCDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCSCDigit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnCSCDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCSCDigit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnCSCHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnCSCHit::Class_Name()
{
   return "BmnCSCHit";
}

//______________________________________________________________________________
const char *BmnCSCHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCSCHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnCSCHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCSCHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnCSCHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCSCHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnCSCHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCSCHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnCSCTransform::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnCSCTransform::Class_Name()
{
   return "BmnCSCTransform";
}

//______________________________________________________________________________
const char *BmnCSCTransform::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCSCTransform*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnCSCTransform::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCSCTransform*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnCSCTransform::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCSCTransform*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnCSCTransform::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCSCTransform*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnCSCDigitizer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnCSCDigitizer::Class_Name()
{
   return "BmnCSCDigitizer";
}

//______________________________________________________________________________
const char *BmnCSCDigitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCSCDigitizer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnCSCDigitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCSCDigitizer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnCSCDigitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCSCDigitizer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnCSCDigitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCSCDigitizer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnCSCHitMaker::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnCSCHitMaker::Class_Name()
{
   return "BmnCSCHitMaker";
}

//______________________________________________________________________________
const char *BmnCSCHitMaker::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCSCHitMaker*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnCSCHitMaker::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCSCHitMaker*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnCSCHitMaker::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCSCHitMaker*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnCSCHitMaker::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCSCHitMaker*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnCSCPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnCSCPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnCSCPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnCSCPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnCSCPoint(void *p) {
      return  p ? new(p) ::BmnCSCPoint : new ::BmnCSCPoint;
   }
   static void *newArray_BmnCSCPoint(Long_t nElements, void *p) {
      return p ? new(p) ::BmnCSCPoint[nElements] : new ::BmnCSCPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnCSCPoint(void *p) {
      delete ((::BmnCSCPoint*)p);
   }
   static void deleteArray_BmnCSCPoint(void *p) {
      delete [] ((::BmnCSCPoint*)p);
   }
   static void destruct_BmnCSCPoint(void *p) {
      typedef ::BmnCSCPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnCSCPoint

//______________________________________________________________________________
void BmnCSC::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnCSC.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnCSC::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnCSC::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnCSC(void *p) {
      return  p ? new(p) ::BmnCSC : new ::BmnCSC;
   }
   static void *newArray_BmnCSC(Long_t nElements, void *p) {
      return p ? new(p) ::BmnCSC[nElements] : new ::BmnCSC[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnCSC(void *p) {
      delete ((::BmnCSC*)p);
   }
   static void deleteArray_BmnCSC(void *p) {
      delete [] ((::BmnCSC*)p);
   }
   static void destruct_BmnCSC(void *p) {
      typedef ::BmnCSC current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnCSC

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnCSCLayer(void *p) {
      return  p ? new(p) ::BmnCSCLayer : new ::BmnCSCLayer;
   }
   static void *newArray_BmnCSCLayer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnCSCLayer[nElements] : new ::BmnCSCLayer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnCSCLayer(void *p) {
      delete ((::BmnCSCLayer*)p);
   }
   static void deleteArray_BmnCSCLayer(void *p) {
      delete [] ((::BmnCSCLayer*)p);
   }
   static void destruct_BmnCSCLayer(void *p) {
      typedef ::BmnCSCLayer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnCSCLayer

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnCSCModule(void *p) {
      return  p ? new(p) ::BmnCSCModule : new ::BmnCSCModule;
   }
   static void *newArray_BmnCSCModule(Long_t nElements, void *p) {
      return p ? new(p) ::BmnCSCModule[nElements] : new ::BmnCSCModule[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnCSCModule(void *p) {
      delete ((::BmnCSCModule*)p);
   }
   static void deleteArray_BmnCSCModule(void *p) {
      delete [] ((::BmnCSCModule*)p);
   }
   static void destruct_BmnCSCModule(void *p) {
      typedef ::BmnCSCModule current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnCSCModule

//______________________________________________________________________________
void BmnCSCStation::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnCSCStation.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnCSCStation::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnCSCStation::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnCSCStation(void *p) {
      return  p ? new(p) ::BmnCSCStation : new ::BmnCSCStation;
   }
   static void *newArray_BmnCSCStation(Long_t nElements, void *p) {
      return p ? new(p) ::BmnCSCStation[nElements] : new ::BmnCSCStation[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnCSCStation(void *p) {
      delete ((::BmnCSCStation*)p);
   }
   static void deleteArray_BmnCSCStation(void *p) {
      delete [] ((::BmnCSCStation*)p);
   }
   static void destruct_BmnCSCStation(void *p) {
      typedef ::BmnCSCStation current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnCSCStation

//______________________________________________________________________________
void BmnCSCStationSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnCSCStationSet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnCSCStationSet::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnCSCStationSet::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnCSCStationSet(void *p) {
      return  p ? new(p) ::BmnCSCStationSet : new ::BmnCSCStationSet;
   }
   static void *newArray_BmnCSCStationSet(Long_t nElements, void *p) {
      return p ? new(p) ::BmnCSCStationSet[nElements] : new ::BmnCSCStationSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnCSCStationSet(void *p) {
      delete ((::BmnCSCStationSet*)p);
   }
   static void deleteArray_BmnCSCStationSet(void *p) {
      delete [] ((::BmnCSCStationSet*)p);
   }
   static void destruct_BmnCSCStationSet(void *p) {
      typedef ::BmnCSCStationSet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnCSCStationSet

//______________________________________________________________________________
void BmnCSCDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnCSCDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnCSCDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnCSCDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnCSCDigit(void *p) {
      return  p ? new(p) ::BmnCSCDigit : new ::BmnCSCDigit;
   }
   static void *newArray_BmnCSCDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnCSCDigit[nElements] : new ::BmnCSCDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnCSCDigit(void *p) {
      delete ((::BmnCSCDigit*)p);
   }
   static void deleteArray_BmnCSCDigit(void *p) {
      delete [] ((::BmnCSCDigit*)p);
   }
   static void destruct_BmnCSCDigit(void *p) {
      typedef ::BmnCSCDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnCSCDigit

//______________________________________________________________________________
void BmnCSCHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnCSCHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnCSCHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnCSCHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnCSCHit(void *p) {
      return  p ? new(p) ::BmnCSCHit : new ::BmnCSCHit;
   }
   static void *newArray_BmnCSCHit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnCSCHit[nElements] : new ::BmnCSCHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnCSCHit(void *p) {
      delete ((::BmnCSCHit*)p);
   }
   static void deleteArray_BmnCSCHit(void *p) {
      delete [] ((::BmnCSCHit*)p);
   }
   static void destruct_BmnCSCHit(void *p) {
      typedef ::BmnCSCHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnCSCHit

//______________________________________________________________________________
void BmnCSCTransform::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnCSCTransform.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnCSCTransform::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnCSCTransform::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnCSCTransform(void *p) {
      return  p ? new(p) ::BmnCSCTransform : new ::BmnCSCTransform;
   }
   static void *newArray_BmnCSCTransform(Long_t nElements, void *p) {
      return p ? new(p) ::BmnCSCTransform[nElements] : new ::BmnCSCTransform[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnCSCTransform(void *p) {
      delete ((::BmnCSCTransform*)p);
   }
   static void deleteArray_BmnCSCTransform(void *p) {
      delete [] ((::BmnCSCTransform*)p);
   }
   static void destruct_BmnCSCTransform(void *p) {
      typedef ::BmnCSCTransform current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnCSCTransform

//______________________________________________________________________________
void BmnCSCDigitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnCSCDigitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnCSCDigitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnCSCDigitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnCSCDigitizer(void *p) {
      return  p ? new(p) ::BmnCSCDigitizer : new ::BmnCSCDigitizer;
   }
   static void *newArray_BmnCSCDigitizer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnCSCDigitizer[nElements] : new ::BmnCSCDigitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnCSCDigitizer(void *p) {
      delete ((::BmnCSCDigitizer*)p);
   }
   static void deleteArray_BmnCSCDigitizer(void *p) {
      delete [] ((::BmnCSCDigitizer*)p);
   }
   static void destruct_BmnCSCDigitizer(void *p) {
      typedef ::BmnCSCDigitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnCSCDigitizer

//______________________________________________________________________________
void BmnCSCHitMaker::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnCSCHitMaker.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnCSCHitMaker::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnCSCHitMaker::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnCSCHitMaker(void *p) {
      return  p ? new(p) ::BmnCSCHitMaker : new ::BmnCSCHitMaker;
   }
   static void *newArray_BmnCSCHitMaker(Long_t nElements, void *p) {
      return p ? new(p) ::BmnCSCHitMaker[nElements] : new ::BmnCSCHitMaker[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnCSCHitMaker(void *p) {
      delete ((::BmnCSCHitMaker*)p);
   }
   static void deleteArray_BmnCSCHitMaker(void *p) {
      delete [] ((::BmnCSCHitMaker*)p);
   }
   static void destruct_BmnCSCHitMaker(void *p) {
      typedef ::BmnCSCHitMaker current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnCSCHitMaker

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
   static TClass *vectorlEBmnCSCLayergR_Dictionary();
   static void vectorlEBmnCSCLayergR_TClassManip(TClass*);
   static void *new_vectorlEBmnCSCLayergR(void *p = nullptr);
   static void *newArray_vectorlEBmnCSCLayergR(Long_t size, void *p);
   static void delete_vectorlEBmnCSCLayergR(void *p);
   static void deleteArray_vectorlEBmnCSCLayergR(void *p);
   static void destruct_vectorlEBmnCSCLayergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnCSCLayer>*)
   {
      vector<BmnCSCLayer> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnCSCLayer>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnCSCLayer>", -2, "vector", 386,
                  typeid(vector<BmnCSCLayer>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnCSCLayergR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnCSCLayer>) );
      instance.SetNew(&new_vectorlEBmnCSCLayergR);
      instance.SetNewArray(&newArray_vectorlEBmnCSCLayergR);
      instance.SetDelete(&delete_vectorlEBmnCSCLayergR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnCSCLayergR);
      instance.SetDestructor(&destruct_vectorlEBmnCSCLayergR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnCSCLayer> >()));

      ::ROOT::AddClassAlternate("vector<BmnCSCLayer>","std::vector<BmnCSCLayer, std::allocator<BmnCSCLayer> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnCSCLayer>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnCSCLayergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnCSCLayer>*)nullptr)->GetClass();
      vectorlEBmnCSCLayergR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnCSCLayergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnCSCLayergR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnCSCLayer> : new vector<BmnCSCLayer>;
   }
   static void *newArray_vectorlEBmnCSCLayergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnCSCLayer>[nElements] : new vector<BmnCSCLayer>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnCSCLayergR(void *p) {
      delete ((vector<BmnCSCLayer>*)p);
   }
   static void deleteArray_vectorlEBmnCSCLayergR(void *p) {
      delete [] ((vector<BmnCSCLayer>*)p);
   }
   static void destruct_vectorlEBmnCSCLayergR(void *p) {
      typedef vector<BmnCSCLayer> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnCSCLayer>

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
  void TriggerDictionaryInitialization_G__CSCDict_Impl() {
    static const char* headers[] = {
"BmnCSC.h",
"BmnCSCPoint.h",
"BmnCSCStationSet.h",
"BmnCSCStation.h",
"BmnCSCModule.h",
"BmnCSCLayer.h",
"BmnCSCDigit.h",
"BmnCSCDigitizer.h",
"BmnCSCHit.h",
"BmnCSCHitMaker.h",
"BmnCSCTransform.h",
"BmnCSCConfiguration.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/base",
"/data/yaopeng/bmnroot_Yaopeng/base/data",
"/data/yaopeng/bmnroot_Yaopeng/base/raw",
"/data/yaopeng/bmnroot_Yaopeng/base/header",
"/data/yaopeng/bmnroot_Yaopeng/detectors/csc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/detectors/csc/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__CSCDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$BmnCSCPoint.h")))  __attribute__((annotate("$clingAutoload$BmnCSC.h")))  BmnCSCPoint;
class __attribute__((annotate("$clingAutoload$BmnCSC.h")))  BmnCSC;
class __attribute__((annotate("$clingAutoload$BmnCSCLayer.h")))  __attribute__((annotate("$clingAutoload$BmnCSCStationSet.h")))  BmnCSCLayer;
class __attribute__((annotate("$clingAutoload$BmnCSCModule.h")))  __attribute__((annotate("$clingAutoload$BmnCSCStationSet.h")))  BmnCSCModule;
class __attribute__((annotate("$clingAutoload$BmnCSCStation.h")))  __attribute__((annotate("$clingAutoload$BmnCSCStationSet.h")))  BmnCSCStation;
class __attribute__((annotate("$clingAutoload$BmnCSCStationSet.h")))  BmnCSCStationSet;
class __attribute__((annotate("$clingAutoload$BmnCSCDigit.h")))  BmnCSCDigit;
class __attribute__((annotate("$clingAutoload$BmnCSCHit.h")))  __attribute__((annotate("$clingAutoload$BmnCSCDigitizer.h")))  BmnCSCHit;
class __attribute__((annotate("$clingAutoload$BmnCSCTransform.h")))  __attribute__((annotate("$clingAutoload$BmnCSCDigitizer.h")))  BmnCSCTransform;
class __attribute__((annotate("$clingAutoload$BmnCSCDigitizer.h")))  BmnCSCDigitizer;
class __attribute__((annotate("$clingAutoload$BmnCSCHitMaker.h")))  BmnCSCHitMaker;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__CSCDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "BmnCSC.h"
#include "BmnCSCPoint.h"
#include "BmnCSCStationSet.h"
#include "BmnCSCStation.h"
#include "BmnCSCModule.h"
#include "BmnCSCLayer.h"
#include "BmnCSCDigit.h"
#include "BmnCSCDigitizer.h"
#include "BmnCSCHit.h"
#include "BmnCSCHitMaker.h"
#include "BmnCSCTransform.h"
#include "BmnCSCConfiguration.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BmnCSC", payloadCode, "@",
"BmnCSCConfiguration::CSC_CONFIG", payloadCode, "@",
"BmnCSCDigit", payloadCode, "@",
"BmnCSCDigitizer", payloadCode, "@",
"BmnCSCHit", payloadCode, "@",
"BmnCSCHitMaker", payloadCode, "@",
"BmnCSCLayer", payloadCode, "@",
"BmnCSCModule", payloadCode, "@",
"BmnCSCPoint", payloadCode, "@",
"BmnCSCStation", payloadCode, "@",
"BmnCSCStationSet", payloadCode, "@",
"BmnCSCTransform", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__CSCDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__CSCDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__CSCDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__CSCDict() {
  TriggerDictionaryInitialization_G__CSCDict_Impl();
}
