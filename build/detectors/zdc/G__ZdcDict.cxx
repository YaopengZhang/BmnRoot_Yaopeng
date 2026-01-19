// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIdetectorsdIzdcdIG__ZdcDict
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
#include "BmnZdc.h"
#include "BmnZdcPoint.h"
#include "BmnZdcContFact.h"
#include "BmnZdcGeo.h"
#include "BmnZdcGeoPar.h"
#include "BmnZdcDigi.h"
#include "BmnZdcDigiPar.h"
#include "BmnZdcDigiScheme.h"
#include "BmnZdcDigiProducer.h"
#include "BmnZdcBScanner.h"
#include "BmnZDCDigit.h"
#include "BmnZdcDigitizer.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BmnZdcPoint(void *p = nullptr);
   static void *newArray_BmnZdcPoint(Long_t size, void *p);
   static void delete_BmnZdcPoint(void *p);
   static void deleteArray_BmnZdcPoint(void *p);
   static void destruct_BmnZdcPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnZdcPoint*)
   {
      ::BmnZdcPoint *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnZdcPoint >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnZdcPoint", ::BmnZdcPoint::Class_Version(), "BmnZdcPoint.h", 17,
                  typeid(::BmnZdcPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnZdcPoint::Dictionary, isa_proxy, 4,
                  sizeof(::BmnZdcPoint) );
      instance.SetNew(&new_BmnZdcPoint);
      instance.SetNewArray(&newArray_BmnZdcPoint);
      instance.SetDelete(&delete_BmnZdcPoint);
      instance.SetDeleteArray(&deleteArray_BmnZdcPoint);
      instance.SetDestructor(&destruct_BmnZdcPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnZdcPoint*)
   {
      return GenerateInitInstanceLocal((::BmnZdcPoint*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnZdcPoint*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnZdc(void *p = nullptr);
   static void *newArray_BmnZdc(Long_t size, void *p);
   static void delete_BmnZdc(void *p);
   static void deleteArray_BmnZdc(void *p);
   static void destruct_BmnZdc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnZdc*)
   {
      ::BmnZdc *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnZdc >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnZdc", ::BmnZdc::Class_Version(), "BmnZdc.h", 21,
                  typeid(::BmnZdc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnZdc::Dictionary, isa_proxy, 4,
                  sizeof(::BmnZdc) );
      instance.SetNew(&new_BmnZdc);
      instance.SetNewArray(&newArray_BmnZdc);
      instance.SetDelete(&delete_BmnZdc);
      instance.SetDeleteArray(&deleteArray_BmnZdc);
      instance.SetDestructor(&destruct_BmnZdc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnZdc*)
   {
      return GenerateInitInstanceLocal((::BmnZdc*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnZdc*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnZdcContFact(void *p = nullptr);
   static void *newArray_BmnZdcContFact(Long_t size, void *p);
   static void delete_BmnZdcContFact(void *p);
   static void deleteArray_BmnZdcContFact(void *p);
   static void destruct_BmnZdcContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnZdcContFact*)
   {
      ::BmnZdcContFact *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnZdcContFact >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnZdcContFact", ::BmnZdcContFact::Class_Version(), "BmnZdcContFact.h", 13,
                  typeid(::BmnZdcContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnZdcContFact::Dictionary, isa_proxy, 4,
                  sizeof(::BmnZdcContFact) );
      instance.SetNew(&new_BmnZdcContFact);
      instance.SetNewArray(&newArray_BmnZdcContFact);
      instance.SetDelete(&delete_BmnZdcContFact);
      instance.SetDeleteArray(&deleteArray_BmnZdcContFact);
      instance.SetDestructor(&destruct_BmnZdcContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnZdcContFact*)
   {
      return GenerateInitInstanceLocal((::BmnZdcContFact*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnZdcContFact*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnZdcGeo(void *p = nullptr);
   static void *newArray_BmnZdcGeo(Long_t size, void *p);
   static void delete_BmnZdcGeo(void *p);
   static void deleteArray_BmnZdcGeo(void *p);
   static void destruct_BmnZdcGeo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnZdcGeo*)
   {
      ::BmnZdcGeo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnZdcGeo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnZdcGeo", ::BmnZdcGeo::Class_Version(), "BmnZdcGeo.h", 16,
                  typeid(::BmnZdcGeo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnZdcGeo::Dictionary, isa_proxy, 4,
                  sizeof(::BmnZdcGeo) );
      instance.SetNew(&new_BmnZdcGeo);
      instance.SetNewArray(&newArray_BmnZdcGeo);
      instance.SetDelete(&delete_BmnZdcGeo);
      instance.SetDeleteArray(&deleteArray_BmnZdcGeo);
      instance.SetDestructor(&destruct_BmnZdcGeo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnZdcGeo*)
   {
      return GenerateInitInstanceLocal((::BmnZdcGeo*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnZdcGeo*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnZdcGeoPar(void *p = nullptr);
   static void *newArray_BmnZdcGeoPar(Long_t size, void *p);
   static void delete_BmnZdcGeoPar(void *p);
   static void deleteArray_BmnZdcGeoPar(void *p);
   static void destruct_BmnZdcGeoPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnZdcGeoPar*)
   {
      ::BmnZdcGeoPar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnZdcGeoPar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnZdcGeoPar", ::BmnZdcGeoPar::Class_Version(), "BmnZdcGeoPar.h", 17,
                  typeid(::BmnZdcGeoPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnZdcGeoPar::Dictionary, isa_proxy, 4,
                  sizeof(::BmnZdcGeoPar) );
      instance.SetNew(&new_BmnZdcGeoPar);
      instance.SetNewArray(&newArray_BmnZdcGeoPar);
      instance.SetDelete(&delete_BmnZdcGeoPar);
      instance.SetDeleteArray(&deleteArray_BmnZdcGeoPar);
      instance.SetDestructor(&destruct_BmnZdcGeoPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnZdcGeoPar*)
   {
      return GenerateInitInstanceLocal((::BmnZdcGeoPar*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnZdcGeoPar*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnZdcDigi(void *p = nullptr);
   static void *newArray_BmnZdcDigi(Long_t size, void *p);
   static void delete_BmnZdcDigi(void *p);
   static void deleteArray_BmnZdcDigi(void *p);
   static void destruct_BmnZdcDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnZdcDigi*)
   {
      ::BmnZdcDigi *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnZdcDigi >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnZdcDigi", ::BmnZdcDigi::Class_Version(), "BmnZdcDigi.h", 17,
                  typeid(::BmnZdcDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnZdcDigi::Dictionary, isa_proxy, 4,
                  sizeof(::BmnZdcDigi) );
      instance.SetNew(&new_BmnZdcDigi);
      instance.SetNewArray(&newArray_BmnZdcDigi);
      instance.SetDelete(&delete_BmnZdcDigi);
      instance.SetDeleteArray(&deleteArray_BmnZdcDigi);
      instance.SetDestructor(&destruct_BmnZdcDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnZdcDigi*)
   {
      return GenerateInitInstanceLocal((::BmnZdcDigi*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnZdcDigi*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnZdcDigiPar(void *p = nullptr);
   static void *newArray_BmnZdcDigiPar(Long_t size, void *p);
   static void delete_BmnZdcDigiPar(void *p);
   static void deleteArray_BmnZdcDigiPar(void *p);
   static void destruct_BmnZdcDigiPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnZdcDigiPar*)
   {
      ::BmnZdcDigiPar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnZdcDigiPar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnZdcDigiPar", ::BmnZdcDigiPar::Class_Version(), "BmnZdcDigiPar.h", 18,
                  typeid(::BmnZdcDigiPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnZdcDigiPar::Dictionary, isa_proxy, 4,
                  sizeof(::BmnZdcDigiPar) );
      instance.SetNew(&new_BmnZdcDigiPar);
      instance.SetNewArray(&newArray_BmnZdcDigiPar);
      instance.SetDelete(&delete_BmnZdcDigiPar);
      instance.SetDeleteArray(&deleteArray_BmnZdcDigiPar);
      instance.SetDestructor(&destruct_BmnZdcDigiPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnZdcDigiPar*)
   {
      return GenerateInitInstanceLocal((::BmnZdcDigiPar*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnZdcDigiPar*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnZdcDigiScheme(void *p = nullptr);
   static void *newArray_BmnZdcDigiScheme(Long_t size, void *p);
   static void delete_BmnZdcDigiScheme(void *p);
   static void deleteArray_BmnZdcDigiScheme(void *p);
   static void destruct_BmnZdcDigiScheme(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnZdcDigiScheme*)
   {
      ::BmnZdcDigiScheme *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnZdcDigiScheme >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnZdcDigiScheme", ::BmnZdcDigiScheme::Class_Version(), "BmnZdcDigiScheme.h", 29,
                  typeid(::BmnZdcDigiScheme), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnZdcDigiScheme::Dictionary, isa_proxy, 4,
                  sizeof(::BmnZdcDigiScheme) );
      instance.SetNew(&new_BmnZdcDigiScheme);
      instance.SetNewArray(&newArray_BmnZdcDigiScheme);
      instance.SetDelete(&delete_BmnZdcDigiScheme);
      instance.SetDeleteArray(&deleteArray_BmnZdcDigiScheme);
      instance.SetDestructor(&destruct_BmnZdcDigiScheme);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnZdcDigiScheme*)
   {
      return GenerateInitInstanceLocal((::BmnZdcDigiScheme*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnZdcDigiScheme*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnZdcDigiProducer(void *p = nullptr);
   static void *newArray_BmnZdcDigiProducer(Long_t size, void *p);
   static void delete_BmnZdcDigiProducer(void *p);
   static void deleteArray_BmnZdcDigiProducer(void *p);
   static void destruct_BmnZdcDigiProducer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnZdcDigiProducer*)
   {
      ::BmnZdcDigiProducer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnZdcDigiProducer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnZdcDigiProducer", ::BmnZdcDigiProducer::Class_Version(), "BmnZdcDigiProducer.h", 21,
                  typeid(::BmnZdcDigiProducer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnZdcDigiProducer::Dictionary, isa_proxy, 4,
                  sizeof(::BmnZdcDigiProducer) );
      instance.SetNew(&new_BmnZdcDigiProducer);
      instance.SetNewArray(&newArray_BmnZdcDigiProducer);
      instance.SetDelete(&delete_BmnZdcDigiProducer);
      instance.SetDeleteArray(&deleteArray_BmnZdcDigiProducer);
      instance.SetDestructor(&destruct_BmnZdcDigiProducer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnZdcDigiProducer*)
   {
      return GenerateInitInstanceLocal((::BmnZdcDigiProducer*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnZdcDigiProducer*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnZDCDigit(void *p = nullptr);
   static void *newArray_BmnZDCDigit(Long_t size, void *p);
   static void delete_BmnZDCDigit(void *p);
   static void deleteArray_BmnZDCDigit(void *p);
   static void destruct_BmnZDCDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnZDCDigit*)
   {
      ::BmnZDCDigit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnZDCDigit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnZDCDigit", ::BmnZDCDigit::Class_Version(), "BmnZDCDigit.h", 6,
                  typeid(::BmnZDCDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnZDCDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnZDCDigit) );
      instance.SetNew(&new_BmnZDCDigit);
      instance.SetNewArray(&newArray_BmnZDCDigit);
      instance.SetDelete(&delete_BmnZDCDigit);
      instance.SetDeleteArray(&deleteArray_BmnZDCDigit);
      instance.SetDestructor(&destruct_BmnZDCDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnZDCDigit*)
   {
      return GenerateInitInstanceLocal((::BmnZDCDigit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnZDCDigit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnZdcBScanner_Dictionary();
   static void BmnZdcBScanner_TClassManip(TClass*);
   static void *new_BmnZdcBScanner(void *p = nullptr);
   static void *newArray_BmnZdcBScanner(Long_t size, void *p);
   static void delete_BmnZdcBScanner(void *p);
   static void deleteArray_BmnZdcBScanner(void *p);
   static void destruct_BmnZdcBScanner(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnZdcBScanner*)
   {
      ::BmnZdcBScanner *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnZdcBScanner));
      static ::ROOT::TGenericClassInfo 
         instance("BmnZdcBScanner", "BmnZdcBScanner.h", 78,
                  typeid(::BmnZdcBScanner), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnZdcBScanner_Dictionary, isa_proxy, 4,
                  sizeof(::BmnZdcBScanner) );
      instance.SetNew(&new_BmnZdcBScanner);
      instance.SetNewArray(&newArray_BmnZdcBScanner);
      instance.SetDelete(&delete_BmnZdcBScanner);
      instance.SetDeleteArray(&deleteArray_BmnZdcBScanner);
      instance.SetDestructor(&destruct_BmnZdcBScanner);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnZdcBScanner*)
   {
      return GenerateInitInstanceLocal((::BmnZdcBScanner*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnZdcBScanner*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnZdcBScanner_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnZdcBScanner*)nullptr)->GetClass();
      BmnZdcBScanner_TClassManip(theClass);
   return theClass;
   }

   static void BmnZdcBScanner_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnZdcDigitizer(void *p = nullptr);
   static void *newArray_BmnZdcDigitizer(Long_t size, void *p);
   static void delete_BmnZdcDigitizer(void *p);
   static void deleteArray_BmnZdcDigitizer(void *p);
   static void destruct_BmnZdcDigitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnZdcDigitizer*)
   {
      ::BmnZdcDigitizer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnZdcDigitizer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnZdcDigitizer", ::BmnZdcDigitizer::Class_Version(), "BmnZdcDigitizer.h", 19,
                  typeid(::BmnZdcDigitizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnZdcDigitizer::Dictionary, isa_proxy, 4,
                  sizeof(::BmnZdcDigitizer) );
      instance.SetNew(&new_BmnZdcDigitizer);
      instance.SetNewArray(&newArray_BmnZdcDigitizer);
      instance.SetDelete(&delete_BmnZdcDigitizer);
      instance.SetDeleteArray(&deleteArray_BmnZdcDigitizer);
      instance.SetDestructor(&destruct_BmnZdcDigitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnZdcDigitizer*)
   {
      return GenerateInitInstanceLocal((::BmnZdcDigitizer*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnZdcDigitizer*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnZdcPoint::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnZdcPoint::Class_Name()
{
   return "BmnZdcPoint";
}

//______________________________________________________________________________
const char *BmnZdcPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcPoint*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnZdcPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcPoint*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnZdcPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcPoint*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnZdcPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcPoint*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnZdc::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnZdc::Class_Name()
{
   return "BmnZdc";
}

//______________________________________________________________________________
const char *BmnZdc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZdc*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnZdc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZdc*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnZdc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZdc*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnZdc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZdc*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnZdcContFact::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnZdcContFact::Class_Name()
{
   return "BmnZdcContFact";
}

//______________________________________________________________________________
const char *BmnZdcContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcContFact*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnZdcContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcContFact*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnZdcContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcContFact*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnZdcContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcContFact*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnZdcGeo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnZdcGeo::Class_Name()
{
   return "BmnZdcGeo";
}

//______________________________________________________________________________
const char *BmnZdcGeo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcGeo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnZdcGeo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcGeo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnZdcGeo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcGeo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnZdcGeo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcGeo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnZdcGeoPar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnZdcGeoPar::Class_Name()
{
   return "BmnZdcGeoPar";
}

//______________________________________________________________________________
const char *BmnZdcGeoPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcGeoPar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnZdcGeoPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcGeoPar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnZdcGeoPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcGeoPar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnZdcGeoPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcGeoPar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnZdcDigi::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnZdcDigi::Class_Name()
{
   return "BmnZdcDigi";
}

//______________________________________________________________________________
const char *BmnZdcDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcDigi*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnZdcDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcDigi*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnZdcDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcDigi*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnZdcDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcDigi*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnZdcDigiPar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnZdcDigiPar::Class_Name()
{
   return "BmnZdcDigiPar";
}

//______________________________________________________________________________
const char *BmnZdcDigiPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcDigiPar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnZdcDigiPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcDigiPar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnZdcDigiPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcDigiPar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnZdcDigiPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcDigiPar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnZdcDigiScheme::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnZdcDigiScheme::Class_Name()
{
   return "BmnZdcDigiScheme";
}

//______________________________________________________________________________
const char *BmnZdcDigiScheme::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcDigiScheme*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnZdcDigiScheme::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcDigiScheme*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnZdcDigiScheme::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcDigiScheme*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnZdcDigiScheme::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcDigiScheme*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnZdcDigiProducer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnZdcDigiProducer::Class_Name()
{
   return "BmnZdcDigiProducer";
}

//______________________________________________________________________________
const char *BmnZdcDigiProducer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcDigiProducer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnZdcDigiProducer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcDigiProducer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnZdcDigiProducer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcDigiProducer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnZdcDigiProducer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcDigiProducer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnZDCDigit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnZDCDigit::Class_Name()
{
   return "BmnZDCDigit";
}

//______________________________________________________________________________
const char *BmnZDCDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZDCDigit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnZDCDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZDCDigit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnZDCDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZDCDigit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnZDCDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZDCDigit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnZdcDigitizer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnZdcDigitizer::Class_Name()
{
   return "BmnZdcDigitizer";
}

//______________________________________________________________________________
const char *BmnZdcDigitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcDigitizer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnZdcDigitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcDigitizer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnZdcDigitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcDigitizer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnZdcDigitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcDigitizer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnZdcPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnZdcPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnZdcPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnZdcPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnZdcPoint(void *p) {
      return  p ? new(p) ::BmnZdcPoint : new ::BmnZdcPoint;
   }
   static void *newArray_BmnZdcPoint(Long_t nElements, void *p) {
      return p ? new(p) ::BmnZdcPoint[nElements] : new ::BmnZdcPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnZdcPoint(void *p) {
      delete ((::BmnZdcPoint*)p);
   }
   static void deleteArray_BmnZdcPoint(void *p) {
      delete [] ((::BmnZdcPoint*)p);
   }
   static void destruct_BmnZdcPoint(void *p) {
      typedef ::BmnZdcPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnZdcPoint

//______________________________________________________________________________
void BmnZdc::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnZdc.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnZdc::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnZdc::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnZdc(void *p) {
      return  p ? new(p) ::BmnZdc : new ::BmnZdc;
   }
   static void *newArray_BmnZdc(Long_t nElements, void *p) {
      return p ? new(p) ::BmnZdc[nElements] : new ::BmnZdc[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnZdc(void *p) {
      delete ((::BmnZdc*)p);
   }
   static void deleteArray_BmnZdc(void *p) {
      delete [] ((::BmnZdc*)p);
   }
   static void destruct_BmnZdc(void *p) {
      typedef ::BmnZdc current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnZdc

//______________________________________________________________________________
void BmnZdcContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnZdcContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnZdcContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnZdcContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnZdcContFact(void *p) {
      return  p ? new(p) ::BmnZdcContFact : new ::BmnZdcContFact;
   }
   static void *newArray_BmnZdcContFact(Long_t nElements, void *p) {
      return p ? new(p) ::BmnZdcContFact[nElements] : new ::BmnZdcContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnZdcContFact(void *p) {
      delete ((::BmnZdcContFact*)p);
   }
   static void deleteArray_BmnZdcContFact(void *p) {
      delete [] ((::BmnZdcContFact*)p);
   }
   static void destruct_BmnZdcContFact(void *p) {
      typedef ::BmnZdcContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnZdcContFact

//______________________________________________________________________________
void BmnZdcGeo::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnZdcGeo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnZdcGeo::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnZdcGeo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnZdcGeo(void *p) {
      return  p ? new(p) ::BmnZdcGeo : new ::BmnZdcGeo;
   }
   static void *newArray_BmnZdcGeo(Long_t nElements, void *p) {
      return p ? new(p) ::BmnZdcGeo[nElements] : new ::BmnZdcGeo[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnZdcGeo(void *p) {
      delete ((::BmnZdcGeo*)p);
   }
   static void deleteArray_BmnZdcGeo(void *p) {
      delete [] ((::BmnZdcGeo*)p);
   }
   static void destruct_BmnZdcGeo(void *p) {
      typedef ::BmnZdcGeo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnZdcGeo

//______________________________________________________________________________
void BmnZdcGeoPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnZdcGeoPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnZdcGeoPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnZdcGeoPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnZdcGeoPar(void *p) {
      return  p ? new(p) ::BmnZdcGeoPar : new ::BmnZdcGeoPar;
   }
   static void *newArray_BmnZdcGeoPar(Long_t nElements, void *p) {
      return p ? new(p) ::BmnZdcGeoPar[nElements] : new ::BmnZdcGeoPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnZdcGeoPar(void *p) {
      delete ((::BmnZdcGeoPar*)p);
   }
   static void deleteArray_BmnZdcGeoPar(void *p) {
      delete [] ((::BmnZdcGeoPar*)p);
   }
   static void destruct_BmnZdcGeoPar(void *p) {
      typedef ::BmnZdcGeoPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnZdcGeoPar

//______________________________________________________________________________
void BmnZdcDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnZdcDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnZdcDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnZdcDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnZdcDigi(void *p) {
      return  p ? new(p) ::BmnZdcDigi : new ::BmnZdcDigi;
   }
   static void *newArray_BmnZdcDigi(Long_t nElements, void *p) {
      return p ? new(p) ::BmnZdcDigi[nElements] : new ::BmnZdcDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnZdcDigi(void *p) {
      delete ((::BmnZdcDigi*)p);
   }
   static void deleteArray_BmnZdcDigi(void *p) {
      delete [] ((::BmnZdcDigi*)p);
   }
   static void destruct_BmnZdcDigi(void *p) {
      typedef ::BmnZdcDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnZdcDigi

//______________________________________________________________________________
void BmnZdcDigiPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnZdcDigiPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnZdcDigiPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnZdcDigiPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnZdcDigiPar(void *p) {
      return  p ? new(p) ::BmnZdcDigiPar : new ::BmnZdcDigiPar;
   }
   static void *newArray_BmnZdcDigiPar(Long_t nElements, void *p) {
      return p ? new(p) ::BmnZdcDigiPar[nElements] : new ::BmnZdcDigiPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnZdcDigiPar(void *p) {
      delete ((::BmnZdcDigiPar*)p);
   }
   static void deleteArray_BmnZdcDigiPar(void *p) {
      delete [] ((::BmnZdcDigiPar*)p);
   }
   static void destruct_BmnZdcDigiPar(void *p) {
      typedef ::BmnZdcDigiPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnZdcDigiPar

//______________________________________________________________________________
void BmnZdcDigiScheme::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnZdcDigiScheme.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnZdcDigiScheme::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnZdcDigiScheme::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnZdcDigiScheme(void *p) {
      return  p ? new(p) ::BmnZdcDigiScheme : new ::BmnZdcDigiScheme;
   }
   static void *newArray_BmnZdcDigiScheme(Long_t nElements, void *p) {
      return p ? new(p) ::BmnZdcDigiScheme[nElements] : new ::BmnZdcDigiScheme[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnZdcDigiScheme(void *p) {
      delete ((::BmnZdcDigiScheme*)p);
   }
   static void deleteArray_BmnZdcDigiScheme(void *p) {
      delete [] ((::BmnZdcDigiScheme*)p);
   }
   static void destruct_BmnZdcDigiScheme(void *p) {
      typedef ::BmnZdcDigiScheme current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnZdcDigiScheme

//______________________________________________________________________________
void BmnZdcDigiProducer::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnZdcDigiProducer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnZdcDigiProducer::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnZdcDigiProducer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnZdcDigiProducer(void *p) {
      return  p ? new(p) ::BmnZdcDigiProducer : new ::BmnZdcDigiProducer;
   }
   static void *newArray_BmnZdcDigiProducer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnZdcDigiProducer[nElements] : new ::BmnZdcDigiProducer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnZdcDigiProducer(void *p) {
      delete ((::BmnZdcDigiProducer*)p);
   }
   static void deleteArray_BmnZdcDigiProducer(void *p) {
      delete [] ((::BmnZdcDigiProducer*)p);
   }
   static void destruct_BmnZdcDigiProducer(void *p) {
      typedef ::BmnZdcDigiProducer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnZdcDigiProducer

//______________________________________________________________________________
void BmnZDCDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnZDCDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnZDCDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnZDCDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnZDCDigit(void *p) {
      return  p ? new(p) ::BmnZDCDigit : new ::BmnZDCDigit;
   }
   static void *newArray_BmnZDCDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnZDCDigit[nElements] : new ::BmnZDCDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnZDCDigit(void *p) {
      delete ((::BmnZDCDigit*)p);
   }
   static void deleteArray_BmnZDCDigit(void *p) {
      delete [] ((::BmnZDCDigit*)p);
   }
   static void destruct_BmnZDCDigit(void *p) {
      typedef ::BmnZDCDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnZDCDigit

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnZdcBScanner(void *p) {
      return  p ? new(p) ::BmnZdcBScanner : new ::BmnZdcBScanner;
   }
   static void *newArray_BmnZdcBScanner(Long_t nElements, void *p) {
      return p ? new(p) ::BmnZdcBScanner[nElements] : new ::BmnZdcBScanner[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnZdcBScanner(void *p) {
      delete ((::BmnZdcBScanner*)p);
   }
   static void deleteArray_BmnZdcBScanner(void *p) {
      delete [] ((::BmnZdcBScanner*)p);
   }
   static void destruct_BmnZdcBScanner(void *p) {
      typedef ::BmnZdcBScanner current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnZdcBScanner

//______________________________________________________________________________
void BmnZdcDigitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnZdcDigitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnZdcDigitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnZdcDigitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnZdcDigitizer(void *p) {
      return  p ? new(p) ::BmnZdcDigitizer : new ::BmnZdcDigitizer;
   }
   static void *newArray_BmnZdcDigitizer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnZdcDigitizer[nElements] : new ::BmnZdcDigitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnZdcDigitizer(void *p) {
      delete ((::BmnZdcDigitizer*)p);
   }
   static void deleteArray_BmnZdcDigitizer(void *p) {
      delete [] ((::BmnZdcDigitizer*)p);
   }
   static void destruct_BmnZdcDigitizer(void *p) {
      typedef ::BmnZdcDigitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnZdcDigitizer

namespace {
  void TriggerDictionaryInitialization_G__ZdcDict_Impl() {
    static const char* headers[] = {
"BmnZdc.h",
"BmnZdcPoint.h",
"BmnZdcContFact.h",
"BmnZdcGeo.h",
"BmnZdcGeoPar.h",
"BmnZdcDigi.h",
"BmnZdcDigiPar.h",
"BmnZdcDigiScheme.h",
"BmnZdcDigiProducer.h",
"BmnZdcBScanner.h",
"BmnZDCDigit.h",
"BmnZdcDigitizer.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/base",
"/data/yaopeng/bmnroot_Yaopeng/base/data",
"/data/yaopeng/bmnroot_Yaopeng/base/raw",
"/data/yaopeng/bmnroot_Yaopeng/base/header",
"/data/yaopeng/bmnroot_Yaopeng/base/math",
"/data/yaopeng/bmnroot_Yaopeng/detectors/zdc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/detectors/zdc/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__ZdcDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$BmnZdcPoint.h")))  __attribute__((annotate("$clingAutoload$BmnZdc.h")))  BmnZdcPoint;
class __attribute__((annotate("$clingAutoload$BmnZdc.h")))  BmnZdc;
class __attribute__((annotate(R"ATTRDUMP(Factory for all HYP parameter containers)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$BmnZdcContFact.h")))  BmnZdcContFact;
class __attribute__((annotate(R"ATTRDUMP(Class for Hyp)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$BmnZdcGeo.h")))  BmnZdcGeo;
class __attribute__((annotate("$clingAutoload$BmnZdcGeoPar.h")))  BmnZdcGeoPar;
class __attribute__((annotate("$clingAutoload$BmnZdcDigi.h")))  BmnZdcDigi;
class __attribute__((annotate("$clingAutoload$BmnZdcDigiPar.h")))  BmnZdcDigiPar;
class __attribute__((annotate("$clingAutoload$BmnZdcDigiScheme.h")))  BmnZdcDigiScheme;
class __attribute__((annotate("$clingAutoload$BmnZdcDigiProducer.h")))  BmnZdcDigiProducer;
class __attribute__((annotate("$clingAutoload$BmnZDCDigit.h")))  __attribute__((annotate("$clingAutoload$BmnZdcBScanner.h")))  BmnZDCDigit;
class __attribute__((annotate("$clingAutoload$BmnZdcBScanner.h")))  BmnZdcBScanner;
class __attribute__((annotate("$clingAutoload$BmnZdcDigitizer.h")))  BmnZdcDigitizer;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__ZdcDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "BmnZdc.h"
#include "BmnZdcPoint.h"
#include "BmnZdcContFact.h"
#include "BmnZdcGeo.h"
#include "BmnZdcGeoPar.h"
#include "BmnZdcDigi.h"
#include "BmnZdcDigiPar.h"
#include "BmnZdcDigiScheme.h"
#include "BmnZdcDigiProducer.h"
#include "BmnZdcBScanner.h"
#include "BmnZDCDigit.h"
#include "BmnZdcDigitizer.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BmnZDCDigit", payloadCode, "@",
"BmnZdc", payloadCode, "@",
"BmnZdcBScanner", payloadCode, "@",
"BmnZdcContFact", payloadCode, "@",
"BmnZdcDigi", payloadCode, "@",
"BmnZdcDigiPar", payloadCode, "@",
"BmnZdcDigiProducer", payloadCode, "@",
"BmnZdcDigiScheme", payloadCode, "@",
"BmnZdcDigitizer", payloadCode, "@",
"BmnZdcGeo", payloadCode, "@",
"BmnZdcGeoPar", payloadCode, "@",
"BmnZdcPoint", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__ZdcDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__ZdcDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__ZdcDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__ZdcDict() {
  TriggerDictionaryInitialization_G__ZdcDict_Impl();
}
