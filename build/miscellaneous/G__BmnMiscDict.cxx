// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddImiscellaneousdIG__BmnMiscDict
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
#include "BmnCounterTask.h"
#include "BmnDigiContainer.h"
#include "BmnDigiMergeTask.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BmnCounter(void *p = nullptr);
   static void *newArray_BmnCounter(Long_t size, void *p);
   static void delete_BmnCounter(void *p);
   static void deleteArray_BmnCounter(void *p);
   static void destruct_BmnCounter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnCounter*)
   {
      ::BmnCounter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnCounter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnCounter", ::BmnCounter::Class_Version(), "BmnCounterTask.h", 19,
                  typeid(::BmnCounter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnCounter::Dictionary, isa_proxy, 4,
                  sizeof(::BmnCounter) );
      instance.SetNew(&new_BmnCounter);
      instance.SetNewArray(&newArray_BmnCounter);
      instance.SetDelete(&delete_BmnCounter);
      instance.SetDeleteArray(&deleteArray_BmnCounter);
      instance.SetDestructor(&destruct_BmnCounter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnCounter*)
   {
      return GenerateInitInstanceLocal((::BmnCounter*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnCounter*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnDigiContainer(void *p = nullptr);
   static void *newArray_BmnDigiContainer(Long_t size, void *p);
   static void delete_BmnDigiContainer(void *p);
   static void deleteArray_BmnDigiContainer(void *p);
   static void destruct_BmnDigiContainer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnDigiContainer*)
   {
      ::BmnDigiContainer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnDigiContainer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnDigiContainer", ::BmnDigiContainer::Class_Version(), "BmnDigiContainer.h", 24,
                  typeid(::BmnDigiContainer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnDigiContainer::Dictionary, isa_proxy, 4,
                  sizeof(::BmnDigiContainer) );
      instance.SetNew(&new_BmnDigiContainer);
      instance.SetNewArray(&newArray_BmnDigiContainer);
      instance.SetDelete(&delete_BmnDigiContainer);
      instance.SetDeleteArray(&deleteArray_BmnDigiContainer);
      instance.SetDestructor(&destruct_BmnDigiContainer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnDigiContainer*)
   {
      return GenerateInitInstanceLocal((::BmnDigiContainer*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnDigiContainer*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnDigiMergeTask(void *p = nullptr);
   static void *newArray_BmnDigiMergeTask(Long_t size, void *p);
   static void delete_BmnDigiMergeTask(void *p);
   static void deleteArray_BmnDigiMergeTask(void *p);
   static void destruct_BmnDigiMergeTask(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnDigiMergeTask*)
   {
      ::BmnDigiMergeTask *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnDigiMergeTask >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnDigiMergeTask", ::BmnDigiMergeTask::Class_Version(), "BmnDigiMergeTask.h", 25,
                  typeid(::BmnDigiMergeTask), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnDigiMergeTask::Dictionary, isa_proxy, 4,
                  sizeof(::BmnDigiMergeTask) );
      instance.SetNew(&new_BmnDigiMergeTask);
      instance.SetNewArray(&newArray_BmnDigiMergeTask);
      instance.SetDelete(&delete_BmnDigiMergeTask);
      instance.SetDeleteArray(&deleteArray_BmnDigiMergeTask);
      instance.SetDestructor(&destruct_BmnDigiMergeTask);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnDigiMergeTask*)
   {
      return GenerateInitInstanceLocal((::BmnDigiMergeTask*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnDigiMergeTask*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnCounter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnCounter::Class_Name()
{
   return "BmnCounter";
}

//______________________________________________________________________________
const char *BmnCounter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCounter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnCounter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCounter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnCounter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCounter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnCounter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCounter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnDigiContainer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnDigiContainer::Class_Name()
{
   return "BmnDigiContainer";
}

//______________________________________________________________________________
const char *BmnDigiContainer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDigiContainer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnDigiContainer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDigiContainer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnDigiContainer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDigiContainer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnDigiContainer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDigiContainer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnDigiMergeTask::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnDigiMergeTask::Class_Name()
{
   return "BmnDigiMergeTask";
}

//______________________________________________________________________________
const char *BmnDigiMergeTask::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDigiMergeTask*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnDigiMergeTask::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDigiMergeTask*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnDigiMergeTask::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDigiMergeTask*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnDigiMergeTask::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDigiMergeTask*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnCounter::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnCounter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnCounter::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnCounter::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnCounter(void *p) {
      return  p ? new(p) ::BmnCounter : new ::BmnCounter;
   }
   static void *newArray_BmnCounter(Long_t nElements, void *p) {
      return p ? new(p) ::BmnCounter[nElements] : new ::BmnCounter[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnCounter(void *p) {
      delete ((::BmnCounter*)p);
   }
   static void deleteArray_BmnCounter(void *p) {
      delete [] ((::BmnCounter*)p);
   }
   static void destruct_BmnCounter(void *p) {
      typedef ::BmnCounter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnCounter

//______________________________________________________________________________
void BmnDigiContainer::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnDigiContainer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnDigiContainer::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnDigiContainer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnDigiContainer(void *p) {
      return  p ? new(p) ::BmnDigiContainer : new ::BmnDigiContainer;
   }
   static void *newArray_BmnDigiContainer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnDigiContainer[nElements] : new ::BmnDigiContainer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnDigiContainer(void *p) {
      delete ((::BmnDigiContainer*)p);
   }
   static void deleteArray_BmnDigiContainer(void *p) {
      delete [] ((::BmnDigiContainer*)p);
   }
   static void destruct_BmnDigiContainer(void *p) {
      typedef ::BmnDigiContainer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnDigiContainer

//______________________________________________________________________________
void BmnDigiMergeTask::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnDigiMergeTask.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnDigiMergeTask::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnDigiMergeTask::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnDigiMergeTask(void *p) {
      return  p ? new(p) ::BmnDigiMergeTask : new ::BmnDigiMergeTask;
   }
   static void *newArray_BmnDigiMergeTask(Long_t nElements, void *p) {
      return p ? new(p) ::BmnDigiMergeTask[nElements] : new ::BmnDigiMergeTask[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnDigiMergeTask(void *p) {
      delete ((::BmnDigiMergeTask*)p);
   }
   static void deleteArray_BmnDigiMergeTask(void *p) {
      delete [] ((::BmnDigiMergeTask*)p);
   }
   static void destruct_BmnDigiMergeTask(void *p) {
      typedef ::BmnDigiMergeTask current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnDigiMergeTask

namespace ROOT {
   static TClass *vectorlEBmnZDCDigitgR_Dictionary();
   static void vectorlEBmnZDCDigitgR_TClassManip(TClass*);
   static void *new_vectorlEBmnZDCDigitgR(void *p = nullptr);
   static void *newArray_vectorlEBmnZDCDigitgR(Long_t size, void *p);
   static void delete_vectorlEBmnZDCDigitgR(void *p);
   static void deleteArray_vectorlEBmnZDCDigitgR(void *p);
   static void destruct_vectorlEBmnZDCDigitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnZDCDigit>*)
   {
      vector<BmnZDCDigit> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnZDCDigit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnZDCDigit>", -2, "vector", 386,
                  typeid(vector<BmnZDCDigit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnZDCDigitgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnZDCDigit>) );
      instance.SetNew(&new_vectorlEBmnZDCDigitgR);
      instance.SetNewArray(&newArray_vectorlEBmnZDCDigitgR);
      instance.SetDelete(&delete_vectorlEBmnZDCDigitgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnZDCDigitgR);
      instance.SetDestructor(&destruct_vectorlEBmnZDCDigitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnZDCDigit> >()));

      ::ROOT::AddClassAlternate("vector<BmnZDCDigit>","std::vector<BmnZDCDigit, std::allocator<BmnZDCDigit> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnZDCDigit>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnZDCDigitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnZDCDigit>*)nullptr)->GetClass();
      vectorlEBmnZDCDigitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnZDCDigitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnZDCDigitgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnZDCDigit> : new vector<BmnZDCDigit>;
   }
   static void *newArray_vectorlEBmnZDCDigitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnZDCDigit>[nElements] : new vector<BmnZDCDigit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnZDCDigitgR(void *p) {
      delete ((vector<BmnZDCDigit>*)p);
   }
   static void deleteArray_vectorlEBmnZDCDigitgR(void *p) {
      delete [] ((vector<BmnZDCDigit>*)p);
   }
   static void destruct_vectorlEBmnZDCDigitgR(void *p) {
      typedef vector<BmnZDCDigit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnZDCDigit>

namespace ROOT {
   static TClass *vectorlEBmnTrigWaveDigitgR_Dictionary();
   static void vectorlEBmnTrigWaveDigitgR_TClassManip(TClass*);
   static void *new_vectorlEBmnTrigWaveDigitgR(void *p = nullptr);
   static void *newArray_vectorlEBmnTrigWaveDigitgR(Long_t size, void *p);
   static void delete_vectorlEBmnTrigWaveDigitgR(void *p);
   static void deleteArray_vectorlEBmnTrigWaveDigitgR(void *p);
   static void destruct_vectorlEBmnTrigWaveDigitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnTrigWaveDigit>*)
   {
      vector<BmnTrigWaveDigit> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnTrigWaveDigit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnTrigWaveDigit>", -2, "vector", 386,
                  typeid(vector<BmnTrigWaveDigit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnTrigWaveDigitgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnTrigWaveDigit>) );
      instance.SetNew(&new_vectorlEBmnTrigWaveDigitgR);
      instance.SetNewArray(&newArray_vectorlEBmnTrigWaveDigitgR);
      instance.SetDelete(&delete_vectorlEBmnTrigWaveDigitgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnTrigWaveDigitgR);
      instance.SetDestructor(&destruct_vectorlEBmnTrigWaveDigitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnTrigWaveDigit> >()));

      ::ROOT::AddClassAlternate("vector<BmnTrigWaveDigit>","std::vector<BmnTrigWaveDigit, std::allocator<BmnTrigWaveDigit> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnTrigWaveDigit>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnTrigWaveDigitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnTrigWaveDigit>*)nullptr)->GetClass();
      vectorlEBmnTrigWaveDigitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnTrigWaveDigitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnTrigWaveDigitgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnTrigWaveDigit> : new vector<BmnTrigWaveDigit>;
   }
   static void *newArray_vectorlEBmnTrigWaveDigitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnTrigWaveDigit>[nElements] : new vector<BmnTrigWaveDigit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnTrigWaveDigitgR(void *p) {
      delete ((vector<BmnTrigWaveDigit>*)p);
   }
   static void deleteArray_vectorlEBmnTrigWaveDigitgR(void *p) {
      delete [] ((vector<BmnTrigWaveDigit>*)p);
   }
   static void destruct_vectorlEBmnTrigWaveDigitgR(void *p) {
      typedef vector<BmnTrigWaveDigit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnTrigWaveDigit>

namespace ROOT {
   static TClass *vectorlEBmnTrigDigitgR_Dictionary();
   static void vectorlEBmnTrigDigitgR_TClassManip(TClass*);
   static void *new_vectorlEBmnTrigDigitgR(void *p = nullptr);
   static void *newArray_vectorlEBmnTrigDigitgR(Long_t size, void *p);
   static void delete_vectorlEBmnTrigDigitgR(void *p);
   static void deleteArray_vectorlEBmnTrigDigitgR(void *p);
   static void destruct_vectorlEBmnTrigDigitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnTrigDigit>*)
   {
      vector<BmnTrigDigit> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnTrigDigit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnTrigDigit>", -2, "vector", 386,
                  typeid(vector<BmnTrigDigit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnTrigDigitgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnTrigDigit>) );
      instance.SetNew(&new_vectorlEBmnTrigDigitgR);
      instance.SetNewArray(&newArray_vectorlEBmnTrigDigitgR);
      instance.SetDelete(&delete_vectorlEBmnTrigDigitgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnTrigDigitgR);
      instance.SetDestructor(&destruct_vectorlEBmnTrigDigitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnTrigDigit> >()));

      ::ROOT::AddClassAlternate("vector<BmnTrigDigit>","std::vector<BmnTrigDigit, std::allocator<BmnTrigDigit> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnTrigDigit>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnTrigDigitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnTrigDigit>*)nullptr)->GetClass();
      vectorlEBmnTrigDigitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnTrigDigitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnTrigDigitgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnTrigDigit> : new vector<BmnTrigDigit>;
   }
   static void *newArray_vectorlEBmnTrigDigitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnTrigDigit>[nElements] : new vector<BmnTrigDigit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnTrigDigitgR(void *p) {
      delete ((vector<BmnTrigDigit>*)p);
   }
   static void deleteArray_vectorlEBmnTrigDigitgR(void *p) {
      delete [] ((vector<BmnTrigDigit>*)p);
   }
   static void destruct_vectorlEBmnTrigDigitgR(void *p) {
      typedef vector<BmnTrigDigit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnTrigDigit>

namespace ROOT {
   static TClass *vectorlEBmnTof2DigitgR_Dictionary();
   static void vectorlEBmnTof2DigitgR_TClassManip(TClass*);
   static void *new_vectorlEBmnTof2DigitgR(void *p = nullptr);
   static void *newArray_vectorlEBmnTof2DigitgR(Long_t size, void *p);
   static void delete_vectorlEBmnTof2DigitgR(void *p);
   static void deleteArray_vectorlEBmnTof2DigitgR(void *p);
   static void destruct_vectorlEBmnTof2DigitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnTof2Digit>*)
   {
      vector<BmnTof2Digit> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnTof2Digit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnTof2Digit>", -2, "vector", 386,
                  typeid(vector<BmnTof2Digit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnTof2DigitgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnTof2Digit>) );
      instance.SetNew(&new_vectorlEBmnTof2DigitgR);
      instance.SetNewArray(&newArray_vectorlEBmnTof2DigitgR);
      instance.SetDelete(&delete_vectorlEBmnTof2DigitgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnTof2DigitgR);
      instance.SetDestructor(&destruct_vectorlEBmnTof2DigitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnTof2Digit> >()));

      ::ROOT::AddClassAlternate("vector<BmnTof2Digit>","std::vector<BmnTof2Digit, std::allocator<BmnTof2Digit> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnTof2Digit>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnTof2DigitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnTof2Digit>*)nullptr)->GetClass();
      vectorlEBmnTof2DigitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnTof2DigitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnTof2DigitgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnTof2Digit> : new vector<BmnTof2Digit>;
   }
   static void *newArray_vectorlEBmnTof2DigitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnTof2Digit>[nElements] : new vector<BmnTof2Digit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnTof2DigitgR(void *p) {
      delete ((vector<BmnTof2Digit>*)p);
   }
   static void deleteArray_vectorlEBmnTof2DigitgR(void *p) {
      delete [] ((vector<BmnTof2Digit>*)p);
   }
   static void destruct_vectorlEBmnTof2DigitgR(void *p) {
      typedef vector<BmnTof2Digit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnTof2Digit>

namespace ROOT {
   static TClass *vectorlEBmnTof1DigitgR_Dictionary();
   static void vectorlEBmnTof1DigitgR_TClassManip(TClass*);
   static void *new_vectorlEBmnTof1DigitgR(void *p = nullptr);
   static void *newArray_vectorlEBmnTof1DigitgR(Long_t size, void *p);
   static void delete_vectorlEBmnTof1DigitgR(void *p);
   static void deleteArray_vectorlEBmnTof1DigitgR(void *p);
   static void destruct_vectorlEBmnTof1DigitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnTof1Digit>*)
   {
      vector<BmnTof1Digit> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnTof1Digit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnTof1Digit>", -2, "vector", 386,
                  typeid(vector<BmnTof1Digit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnTof1DigitgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnTof1Digit>) );
      instance.SetNew(&new_vectorlEBmnTof1DigitgR);
      instance.SetNewArray(&newArray_vectorlEBmnTof1DigitgR);
      instance.SetDelete(&delete_vectorlEBmnTof1DigitgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnTof1DigitgR);
      instance.SetDestructor(&destruct_vectorlEBmnTof1DigitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnTof1Digit> >()));

      ::ROOT::AddClassAlternate("vector<BmnTof1Digit>","std::vector<BmnTof1Digit, std::allocator<BmnTof1Digit> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnTof1Digit>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnTof1DigitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnTof1Digit>*)nullptr)->GetClass();
      vectorlEBmnTof1DigitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnTof1DigitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnTof1DigitgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnTof1Digit> : new vector<BmnTof1Digit>;
   }
   static void *newArray_vectorlEBmnTof1DigitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnTof1Digit>[nElements] : new vector<BmnTof1Digit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnTof1DigitgR(void *p) {
      delete ((vector<BmnTof1Digit>*)p);
   }
   static void deleteArray_vectorlEBmnTof1DigitgR(void *p) {
      delete [] ((vector<BmnTof1Digit>*)p);
   }
   static void destruct_vectorlEBmnTof1DigitgR(void *p) {
      typedef vector<BmnTof1Digit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnTof1Digit>

namespace ROOT {
   static TClass *vectorlEBmnSiliconDigitgR_Dictionary();
   static void vectorlEBmnSiliconDigitgR_TClassManip(TClass*);
   static void *new_vectorlEBmnSiliconDigitgR(void *p = nullptr);
   static void *newArray_vectorlEBmnSiliconDigitgR(Long_t size, void *p);
   static void delete_vectorlEBmnSiliconDigitgR(void *p);
   static void deleteArray_vectorlEBmnSiliconDigitgR(void *p);
   static void destruct_vectorlEBmnSiliconDigitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnSiliconDigit>*)
   {
      vector<BmnSiliconDigit> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnSiliconDigit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnSiliconDigit>", -2, "vector", 386,
                  typeid(vector<BmnSiliconDigit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnSiliconDigitgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnSiliconDigit>) );
      instance.SetNew(&new_vectorlEBmnSiliconDigitgR);
      instance.SetNewArray(&newArray_vectorlEBmnSiliconDigitgR);
      instance.SetDelete(&delete_vectorlEBmnSiliconDigitgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnSiliconDigitgR);
      instance.SetDestructor(&destruct_vectorlEBmnSiliconDigitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnSiliconDigit> >()));

      ::ROOT::AddClassAlternate("vector<BmnSiliconDigit>","std::vector<BmnSiliconDigit, std::allocator<BmnSiliconDigit> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnSiliconDigit>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnSiliconDigitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnSiliconDigit>*)nullptr)->GetClass();
      vectorlEBmnSiliconDigitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnSiliconDigitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnSiliconDigitgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnSiliconDigit> : new vector<BmnSiliconDigit>;
   }
   static void *newArray_vectorlEBmnSiliconDigitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnSiliconDigit>[nElements] : new vector<BmnSiliconDigit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnSiliconDigitgR(void *p) {
      delete ((vector<BmnSiliconDigit>*)p);
   }
   static void deleteArray_vectorlEBmnSiliconDigitgR(void *p) {
      delete [] ((vector<BmnSiliconDigit>*)p);
   }
   static void destruct_vectorlEBmnSiliconDigitgR(void *p) {
      typedef vector<BmnSiliconDigit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnSiliconDigit>

namespace ROOT {
   static TClass *vectorlEBmnMwpcDigitgR_Dictionary();
   static void vectorlEBmnMwpcDigitgR_TClassManip(TClass*);
   static void *new_vectorlEBmnMwpcDigitgR(void *p = nullptr);
   static void *newArray_vectorlEBmnMwpcDigitgR(Long_t size, void *p);
   static void delete_vectorlEBmnMwpcDigitgR(void *p);
   static void deleteArray_vectorlEBmnMwpcDigitgR(void *p);
   static void destruct_vectorlEBmnMwpcDigitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnMwpcDigit>*)
   {
      vector<BmnMwpcDigit> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnMwpcDigit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnMwpcDigit>", -2, "vector", 386,
                  typeid(vector<BmnMwpcDigit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnMwpcDigitgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnMwpcDigit>) );
      instance.SetNew(&new_vectorlEBmnMwpcDigitgR);
      instance.SetNewArray(&newArray_vectorlEBmnMwpcDigitgR);
      instance.SetDelete(&delete_vectorlEBmnMwpcDigitgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnMwpcDigitgR);
      instance.SetDestructor(&destruct_vectorlEBmnMwpcDigitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnMwpcDigit> >()));

      ::ROOT::AddClassAlternate("vector<BmnMwpcDigit>","std::vector<BmnMwpcDigit, std::allocator<BmnMwpcDigit> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnMwpcDigit>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnMwpcDigitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnMwpcDigit>*)nullptr)->GetClass();
      vectorlEBmnMwpcDigitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnMwpcDigitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnMwpcDigitgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnMwpcDigit> : new vector<BmnMwpcDigit>;
   }
   static void *newArray_vectorlEBmnMwpcDigitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnMwpcDigit>[nElements] : new vector<BmnMwpcDigit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnMwpcDigitgR(void *p) {
      delete ((vector<BmnMwpcDigit>*)p);
   }
   static void deleteArray_vectorlEBmnMwpcDigitgR(void *p) {
      delete [] ((vector<BmnMwpcDigit>*)p);
   }
   static void destruct_vectorlEBmnMwpcDigitgR(void *p) {
      typedef vector<BmnMwpcDigit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnMwpcDigit>

namespace ROOT {
   static TClass *vectorlEBmnGemStripDigitgR_Dictionary();
   static void vectorlEBmnGemStripDigitgR_TClassManip(TClass*);
   static void *new_vectorlEBmnGemStripDigitgR(void *p = nullptr);
   static void *newArray_vectorlEBmnGemStripDigitgR(Long_t size, void *p);
   static void delete_vectorlEBmnGemStripDigitgR(void *p);
   static void deleteArray_vectorlEBmnGemStripDigitgR(void *p);
   static void destruct_vectorlEBmnGemStripDigitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnGemStripDigit>*)
   {
      vector<BmnGemStripDigit> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnGemStripDigit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnGemStripDigit>", -2, "vector", 386,
                  typeid(vector<BmnGemStripDigit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnGemStripDigitgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnGemStripDigit>) );
      instance.SetNew(&new_vectorlEBmnGemStripDigitgR);
      instance.SetNewArray(&newArray_vectorlEBmnGemStripDigitgR);
      instance.SetDelete(&delete_vectorlEBmnGemStripDigitgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnGemStripDigitgR);
      instance.SetDestructor(&destruct_vectorlEBmnGemStripDigitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnGemStripDigit> >()));

      ::ROOT::AddClassAlternate("vector<BmnGemStripDigit>","std::vector<BmnGemStripDigit, std::allocator<BmnGemStripDigit> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnGemStripDigit>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnGemStripDigitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnGemStripDigit>*)nullptr)->GetClass();
      vectorlEBmnGemStripDigitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnGemStripDigitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnGemStripDigitgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnGemStripDigit> : new vector<BmnGemStripDigit>;
   }
   static void *newArray_vectorlEBmnGemStripDigitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnGemStripDigit>[nElements] : new vector<BmnGemStripDigit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnGemStripDigitgR(void *p) {
      delete ((vector<BmnGemStripDigit>*)p);
   }
   static void deleteArray_vectorlEBmnGemStripDigitgR(void *p) {
      delete [] ((vector<BmnGemStripDigit>*)p);
   }
   static void destruct_vectorlEBmnGemStripDigitgR(void *p) {
      typedef vector<BmnGemStripDigit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnGemStripDigit>

namespace ROOT {
   static TClass *vectorlEBmnECALDigitgR_Dictionary();
   static void vectorlEBmnECALDigitgR_TClassManip(TClass*);
   static void *new_vectorlEBmnECALDigitgR(void *p = nullptr);
   static void *newArray_vectorlEBmnECALDigitgR(Long_t size, void *p);
   static void delete_vectorlEBmnECALDigitgR(void *p);
   static void deleteArray_vectorlEBmnECALDigitgR(void *p);
   static void destruct_vectorlEBmnECALDigitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnECALDigit>*)
   {
      vector<BmnECALDigit> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnECALDigit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnECALDigit>", -2, "vector", 386,
                  typeid(vector<BmnECALDigit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnECALDigitgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnECALDigit>) );
      instance.SetNew(&new_vectorlEBmnECALDigitgR);
      instance.SetNewArray(&newArray_vectorlEBmnECALDigitgR);
      instance.SetDelete(&delete_vectorlEBmnECALDigitgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnECALDigitgR);
      instance.SetDestructor(&destruct_vectorlEBmnECALDigitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnECALDigit> >()));

      ::ROOT::AddClassAlternate("vector<BmnECALDigit>","std::vector<BmnECALDigit, std::allocator<BmnECALDigit> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnECALDigit>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnECALDigitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnECALDigit>*)nullptr)->GetClass();
      vectorlEBmnECALDigitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnECALDigitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnECALDigitgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnECALDigit> : new vector<BmnECALDigit>;
   }
   static void *newArray_vectorlEBmnECALDigitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnECALDigit>[nElements] : new vector<BmnECALDigit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnECALDigitgR(void *p) {
      delete ((vector<BmnECALDigit>*)p);
   }
   static void deleteArray_vectorlEBmnECALDigitgR(void *p) {
      delete [] ((vector<BmnECALDigit>*)p);
   }
   static void destruct_vectorlEBmnECALDigitgR(void *p) {
      typedef vector<BmnECALDigit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnECALDigit>

namespace ROOT {
   static TClass *vectorlEBmnDchDigitgR_Dictionary();
   static void vectorlEBmnDchDigitgR_TClassManip(TClass*);
   static void *new_vectorlEBmnDchDigitgR(void *p = nullptr);
   static void *newArray_vectorlEBmnDchDigitgR(Long_t size, void *p);
   static void delete_vectorlEBmnDchDigitgR(void *p);
   static void deleteArray_vectorlEBmnDchDigitgR(void *p);
   static void destruct_vectorlEBmnDchDigitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnDchDigit>*)
   {
      vector<BmnDchDigit> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnDchDigit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnDchDigit>", -2, "vector", 386,
                  typeid(vector<BmnDchDigit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnDchDigitgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnDchDigit>) );
      instance.SetNew(&new_vectorlEBmnDchDigitgR);
      instance.SetNewArray(&newArray_vectorlEBmnDchDigitgR);
      instance.SetDelete(&delete_vectorlEBmnDchDigitgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnDchDigitgR);
      instance.SetDestructor(&destruct_vectorlEBmnDchDigitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnDchDigit> >()));

      ::ROOT::AddClassAlternate("vector<BmnDchDigit>","std::vector<BmnDchDigit, std::allocator<BmnDchDigit> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnDchDigit>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnDchDigitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnDchDigit>*)nullptr)->GetClass();
      vectorlEBmnDchDigitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnDchDigitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnDchDigitgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnDchDigit> : new vector<BmnDchDigit>;
   }
   static void *newArray_vectorlEBmnDchDigitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnDchDigit>[nElements] : new vector<BmnDchDigit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnDchDigitgR(void *p) {
      delete ((vector<BmnDchDigit>*)p);
   }
   static void deleteArray_vectorlEBmnDchDigitgR(void *p) {
      delete [] ((vector<BmnDchDigit>*)p);
   }
   static void destruct_vectorlEBmnDchDigitgR(void *p) {
      typedef vector<BmnDchDigit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnDchDigit>

namespace ROOT {
   static TClass *vectorlEBmnCSCDigitgR_Dictionary();
   static void vectorlEBmnCSCDigitgR_TClassManip(TClass*);
   static void *new_vectorlEBmnCSCDigitgR(void *p = nullptr);
   static void *newArray_vectorlEBmnCSCDigitgR(Long_t size, void *p);
   static void delete_vectorlEBmnCSCDigitgR(void *p);
   static void deleteArray_vectorlEBmnCSCDigitgR(void *p);
   static void destruct_vectorlEBmnCSCDigitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnCSCDigit>*)
   {
      vector<BmnCSCDigit> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnCSCDigit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnCSCDigit>", -2, "vector", 386,
                  typeid(vector<BmnCSCDigit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnCSCDigitgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnCSCDigit>) );
      instance.SetNew(&new_vectorlEBmnCSCDigitgR);
      instance.SetNewArray(&newArray_vectorlEBmnCSCDigitgR);
      instance.SetDelete(&delete_vectorlEBmnCSCDigitgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnCSCDigitgR);
      instance.SetDestructor(&destruct_vectorlEBmnCSCDigitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnCSCDigit> >()));

      ::ROOT::AddClassAlternate("vector<BmnCSCDigit>","std::vector<BmnCSCDigit, std::allocator<BmnCSCDigit> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnCSCDigit>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnCSCDigitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnCSCDigit>*)nullptr)->GetClass();
      vectorlEBmnCSCDigitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnCSCDigitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnCSCDigitgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnCSCDigit> : new vector<BmnCSCDigit>;
   }
   static void *newArray_vectorlEBmnCSCDigitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnCSCDigit>[nElements] : new vector<BmnCSCDigit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnCSCDigitgR(void *p) {
      delete ((vector<BmnCSCDigit>*)p);
   }
   static void deleteArray_vectorlEBmnCSCDigitgR(void *p) {
      delete [] ((vector<BmnCSCDigit>*)p);
   }
   static void destruct_vectorlEBmnCSCDigitgR(void *p) {
      typedef vector<BmnCSCDigit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnCSCDigit>

namespace ROOT {
   static TClass *maplEunsignedsPintcOvectorlEBmnZDCDigitgRsPgR_Dictionary();
   static void maplEunsignedsPintcOvectorlEBmnZDCDigitgRsPgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcOvectorlEBmnZDCDigitgRsPgR(void *p = nullptr);
   static void *newArray_maplEunsignedsPintcOvectorlEBmnZDCDigitgRsPgR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcOvectorlEBmnZDCDigitgRsPgR(void *p);
   static void deleteArray_maplEunsignedsPintcOvectorlEBmnZDCDigitgRsPgR(void *p);
   static void destruct_maplEunsignedsPintcOvectorlEBmnZDCDigitgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,vector<BmnZDCDigit> >*)
   {
      map<unsigned int,vector<BmnZDCDigit> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,vector<BmnZDCDigit> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,vector<BmnZDCDigit> >", -2, "map", 100,
                  typeid(map<unsigned int,vector<BmnZDCDigit> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcOvectorlEBmnZDCDigitgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned int,vector<BmnZDCDigit> >) );
      instance.SetNew(&new_maplEunsignedsPintcOvectorlEBmnZDCDigitgRsPgR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcOvectorlEBmnZDCDigitgRsPgR);
      instance.SetDelete(&delete_maplEunsignedsPintcOvectorlEBmnZDCDigitgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcOvectorlEBmnZDCDigitgRsPgR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcOvectorlEBmnZDCDigitgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,vector<BmnZDCDigit> > >()));

      ::ROOT::AddClassAlternate("map<unsigned int,vector<BmnZDCDigit> >","std::map<unsigned int, std::vector<BmnZDCDigit, std::allocator<BmnZDCDigit> >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, std::vector<BmnZDCDigit, std::allocator<BmnZDCDigit> > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<unsigned int,vector<BmnZDCDigit> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcOvectorlEBmnZDCDigitgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned int,vector<BmnZDCDigit> >*)nullptr)->GetClass();
      maplEunsignedsPintcOvectorlEBmnZDCDigitgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcOvectorlEBmnZDCDigitgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcOvectorlEBmnZDCDigitgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,vector<BmnZDCDigit> > : new map<unsigned int,vector<BmnZDCDigit> >;
   }
   static void *newArray_maplEunsignedsPintcOvectorlEBmnZDCDigitgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,vector<BmnZDCDigit> >[nElements] : new map<unsigned int,vector<BmnZDCDigit> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcOvectorlEBmnZDCDigitgRsPgR(void *p) {
      delete ((map<unsigned int,vector<BmnZDCDigit> >*)p);
   }
   static void deleteArray_maplEunsignedsPintcOvectorlEBmnZDCDigitgRsPgR(void *p) {
      delete [] ((map<unsigned int,vector<BmnZDCDigit> >*)p);
   }
   static void destruct_maplEunsignedsPintcOvectorlEBmnZDCDigitgRsPgR(void *p) {
      typedef map<unsigned int,vector<BmnZDCDigit> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,vector<BmnZDCDigit> >

namespace ROOT {
   static TClass *maplEunsignedsPintcOvectorlEBmnTrigWaveDigitgRsPgR_Dictionary();
   static void maplEunsignedsPintcOvectorlEBmnTrigWaveDigitgRsPgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcOvectorlEBmnTrigWaveDigitgRsPgR(void *p = nullptr);
   static void *newArray_maplEunsignedsPintcOvectorlEBmnTrigWaveDigitgRsPgR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcOvectorlEBmnTrigWaveDigitgRsPgR(void *p);
   static void deleteArray_maplEunsignedsPintcOvectorlEBmnTrigWaveDigitgRsPgR(void *p);
   static void destruct_maplEunsignedsPintcOvectorlEBmnTrigWaveDigitgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,vector<BmnTrigWaveDigit> >*)
   {
      map<unsigned int,vector<BmnTrigWaveDigit> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,vector<BmnTrigWaveDigit> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,vector<BmnTrigWaveDigit> >", -2, "map", 100,
                  typeid(map<unsigned int,vector<BmnTrigWaveDigit> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcOvectorlEBmnTrigWaveDigitgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned int,vector<BmnTrigWaveDigit> >) );
      instance.SetNew(&new_maplEunsignedsPintcOvectorlEBmnTrigWaveDigitgRsPgR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcOvectorlEBmnTrigWaveDigitgRsPgR);
      instance.SetDelete(&delete_maplEunsignedsPintcOvectorlEBmnTrigWaveDigitgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcOvectorlEBmnTrigWaveDigitgRsPgR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcOvectorlEBmnTrigWaveDigitgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,vector<BmnTrigWaveDigit> > >()));

      ::ROOT::AddClassAlternate("map<unsigned int,vector<BmnTrigWaveDigit> >","std::map<unsigned int, std::vector<BmnTrigWaveDigit, std::allocator<BmnTrigWaveDigit> >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, std::vector<BmnTrigWaveDigit, std::allocator<BmnTrigWaveDigit> > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<unsigned int,vector<BmnTrigWaveDigit> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcOvectorlEBmnTrigWaveDigitgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned int,vector<BmnTrigWaveDigit> >*)nullptr)->GetClass();
      maplEunsignedsPintcOvectorlEBmnTrigWaveDigitgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcOvectorlEBmnTrigWaveDigitgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcOvectorlEBmnTrigWaveDigitgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,vector<BmnTrigWaveDigit> > : new map<unsigned int,vector<BmnTrigWaveDigit> >;
   }
   static void *newArray_maplEunsignedsPintcOvectorlEBmnTrigWaveDigitgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,vector<BmnTrigWaveDigit> >[nElements] : new map<unsigned int,vector<BmnTrigWaveDigit> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcOvectorlEBmnTrigWaveDigitgRsPgR(void *p) {
      delete ((map<unsigned int,vector<BmnTrigWaveDigit> >*)p);
   }
   static void deleteArray_maplEunsignedsPintcOvectorlEBmnTrigWaveDigitgRsPgR(void *p) {
      delete [] ((map<unsigned int,vector<BmnTrigWaveDigit> >*)p);
   }
   static void destruct_maplEunsignedsPintcOvectorlEBmnTrigWaveDigitgRsPgR(void *p) {
      typedef map<unsigned int,vector<BmnTrigWaveDigit> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,vector<BmnTrigWaveDigit> >

namespace ROOT {
   static TClass *maplEunsignedsPintcOvectorlEBmnTrigDigitgRsPgR_Dictionary();
   static void maplEunsignedsPintcOvectorlEBmnTrigDigitgRsPgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcOvectorlEBmnTrigDigitgRsPgR(void *p = nullptr);
   static void *newArray_maplEunsignedsPintcOvectorlEBmnTrigDigitgRsPgR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcOvectorlEBmnTrigDigitgRsPgR(void *p);
   static void deleteArray_maplEunsignedsPintcOvectorlEBmnTrigDigitgRsPgR(void *p);
   static void destruct_maplEunsignedsPintcOvectorlEBmnTrigDigitgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,vector<BmnTrigDigit> >*)
   {
      map<unsigned int,vector<BmnTrigDigit> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,vector<BmnTrigDigit> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,vector<BmnTrigDigit> >", -2, "map", 100,
                  typeid(map<unsigned int,vector<BmnTrigDigit> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcOvectorlEBmnTrigDigitgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned int,vector<BmnTrigDigit> >) );
      instance.SetNew(&new_maplEunsignedsPintcOvectorlEBmnTrigDigitgRsPgR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcOvectorlEBmnTrigDigitgRsPgR);
      instance.SetDelete(&delete_maplEunsignedsPintcOvectorlEBmnTrigDigitgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcOvectorlEBmnTrigDigitgRsPgR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcOvectorlEBmnTrigDigitgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,vector<BmnTrigDigit> > >()));

      ::ROOT::AddClassAlternate("map<unsigned int,vector<BmnTrigDigit> >","std::map<unsigned int, std::vector<BmnTrigDigit, std::allocator<BmnTrigDigit> >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, std::vector<BmnTrigDigit, std::allocator<BmnTrigDigit> > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<unsigned int,vector<BmnTrigDigit> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcOvectorlEBmnTrigDigitgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned int,vector<BmnTrigDigit> >*)nullptr)->GetClass();
      maplEunsignedsPintcOvectorlEBmnTrigDigitgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcOvectorlEBmnTrigDigitgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcOvectorlEBmnTrigDigitgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,vector<BmnTrigDigit> > : new map<unsigned int,vector<BmnTrigDigit> >;
   }
   static void *newArray_maplEunsignedsPintcOvectorlEBmnTrigDigitgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,vector<BmnTrigDigit> >[nElements] : new map<unsigned int,vector<BmnTrigDigit> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcOvectorlEBmnTrigDigitgRsPgR(void *p) {
      delete ((map<unsigned int,vector<BmnTrigDigit> >*)p);
   }
   static void deleteArray_maplEunsignedsPintcOvectorlEBmnTrigDigitgRsPgR(void *p) {
      delete [] ((map<unsigned int,vector<BmnTrigDigit> >*)p);
   }
   static void destruct_maplEunsignedsPintcOvectorlEBmnTrigDigitgRsPgR(void *p) {
      typedef map<unsigned int,vector<BmnTrigDigit> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,vector<BmnTrigDigit> >

namespace ROOT {
   static TClass *maplEunsignedsPintcOvectorlEBmnTof2DigitgRsPgR_Dictionary();
   static void maplEunsignedsPintcOvectorlEBmnTof2DigitgRsPgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcOvectorlEBmnTof2DigitgRsPgR(void *p = nullptr);
   static void *newArray_maplEunsignedsPintcOvectorlEBmnTof2DigitgRsPgR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcOvectorlEBmnTof2DigitgRsPgR(void *p);
   static void deleteArray_maplEunsignedsPintcOvectorlEBmnTof2DigitgRsPgR(void *p);
   static void destruct_maplEunsignedsPintcOvectorlEBmnTof2DigitgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,vector<BmnTof2Digit> >*)
   {
      map<unsigned int,vector<BmnTof2Digit> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,vector<BmnTof2Digit> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,vector<BmnTof2Digit> >", -2, "map", 100,
                  typeid(map<unsigned int,vector<BmnTof2Digit> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcOvectorlEBmnTof2DigitgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned int,vector<BmnTof2Digit> >) );
      instance.SetNew(&new_maplEunsignedsPintcOvectorlEBmnTof2DigitgRsPgR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcOvectorlEBmnTof2DigitgRsPgR);
      instance.SetDelete(&delete_maplEunsignedsPintcOvectorlEBmnTof2DigitgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcOvectorlEBmnTof2DigitgRsPgR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcOvectorlEBmnTof2DigitgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,vector<BmnTof2Digit> > >()));

      ::ROOT::AddClassAlternate("map<unsigned int,vector<BmnTof2Digit> >","std::map<unsigned int, std::vector<BmnTof2Digit, std::allocator<BmnTof2Digit> >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, std::vector<BmnTof2Digit, std::allocator<BmnTof2Digit> > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<unsigned int,vector<BmnTof2Digit> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcOvectorlEBmnTof2DigitgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned int,vector<BmnTof2Digit> >*)nullptr)->GetClass();
      maplEunsignedsPintcOvectorlEBmnTof2DigitgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcOvectorlEBmnTof2DigitgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcOvectorlEBmnTof2DigitgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,vector<BmnTof2Digit> > : new map<unsigned int,vector<BmnTof2Digit> >;
   }
   static void *newArray_maplEunsignedsPintcOvectorlEBmnTof2DigitgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,vector<BmnTof2Digit> >[nElements] : new map<unsigned int,vector<BmnTof2Digit> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcOvectorlEBmnTof2DigitgRsPgR(void *p) {
      delete ((map<unsigned int,vector<BmnTof2Digit> >*)p);
   }
   static void deleteArray_maplEunsignedsPintcOvectorlEBmnTof2DigitgRsPgR(void *p) {
      delete [] ((map<unsigned int,vector<BmnTof2Digit> >*)p);
   }
   static void destruct_maplEunsignedsPintcOvectorlEBmnTof2DigitgRsPgR(void *p) {
      typedef map<unsigned int,vector<BmnTof2Digit> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,vector<BmnTof2Digit> >

namespace ROOT {
   static TClass *maplEunsignedsPintcOvectorlEBmnTof1DigitgRsPgR_Dictionary();
   static void maplEunsignedsPintcOvectorlEBmnTof1DigitgRsPgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcOvectorlEBmnTof1DigitgRsPgR(void *p = nullptr);
   static void *newArray_maplEunsignedsPintcOvectorlEBmnTof1DigitgRsPgR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcOvectorlEBmnTof1DigitgRsPgR(void *p);
   static void deleteArray_maplEunsignedsPintcOvectorlEBmnTof1DigitgRsPgR(void *p);
   static void destruct_maplEunsignedsPintcOvectorlEBmnTof1DigitgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,vector<BmnTof1Digit> >*)
   {
      map<unsigned int,vector<BmnTof1Digit> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,vector<BmnTof1Digit> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,vector<BmnTof1Digit> >", -2, "map", 100,
                  typeid(map<unsigned int,vector<BmnTof1Digit> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcOvectorlEBmnTof1DigitgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned int,vector<BmnTof1Digit> >) );
      instance.SetNew(&new_maplEunsignedsPintcOvectorlEBmnTof1DigitgRsPgR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcOvectorlEBmnTof1DigitgRsPgR);
      instance.SetDelete(&delete_maplEunsignedsPintcOvectorlEBmnTof1DigitgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcOvectorlEBmnTof1DigitgRsPgR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcOvectorlEBmnTof1DigitgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,vector<BmnTof1Digit> > >()));

      ::ROOT::AddClassAlternate("map<unsigned int,vector<BmnTof1Digit> >","std::map<unsigned int, std::vector<BmnTof1Digit, std::allocator<BmnTof1Digit> >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, std::vector<BmnTof1Digit, std::allocator<BmnTof1Digit> > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<unsigned int,vector<BmnTof1Digit> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcOvectorlEBmnTof1DigitgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned int,vector<BmnTof1Digit> >*)nullptr)->GetClass();
      maplEunsignedsPintcOvectorlEBmnTof1DigitgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcOvectorlEBmnTof1DigitgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcOvectorlEBmnTof1DigitgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,vector<BmnTof1Digit> > : new map<unsigned int,vector<BmnTof1Digit> >;
   }
   static void *newArray_maplEunsignedsPintcOvectorlEBmnTof1DigitgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,vector<BmnTof1Digit> >[nElements] : new map<unsigned int,vector<BmnTof1Digit> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcOvectorlEBmnTof1DigitgRsPgR(void *p) {
      delete ((map<unsigned int,vector<BmnTof1Digit> >*)p);
   }
   static void deleteArray_maplEunsignedsPintcOvectorlEBmnTof1DigitgRsPgR(void *p) {
      delete [] ((map<unsigned int,vector<BmnTof1Digit> >*)p);
   }
   static void destruct_maplEunsignedsPintcOvectorlEBmnTof1DigitgRsPgR(void *p) {
      typedef map<unsigned int,vector<BmnTof1Digit> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,vector<BmnTof1Digit> >

namespace ROOT {
   static TClass *maplEunsignedsPintcOvectorlEBmnSiliconDigitgRsPgR_Dictionary();
   static void maplEunsignedsPintcOvectorlEBmnSiliconDigitgRsPgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcOvectorlEBmnSiliconDigitgRsPgR(void *p = nullptr);
   static void *newArray_maplEunsignedsPintcOvectorlEBmnSiliconDigitgRsPgR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcOvectorlEBmnSiliconDigitgRsPgR(void *p);
   static void deleteArray_maplEunsignedsPintcOvectorlEBmnSiliconDigitgRsPgR(void *p);
   static void destruct_maplEunsignedsPintcOvectorlEBmnSiliconDigitgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,vector<BmnSiliconDigit> >*)
   {
      map<unsigned int,vector<BmnSiliconDigit> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,vector<BmnSiliconDigit> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,vector<BmnSiliconDigit> >", -2, "map", 100,
                  typeid(map<unsigned int,vector<BmnSiliconDigit> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcOvectorlEBmnSiliconDigitgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned int,vector<BmnSiliconDigit> >) );
      instance.SetNew(&new_maplEunsignedsPintcOvectorlEBmnSiliconDigitgRsPgR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcOvectorlEBmnSiliconDigitgRsPgR);
      instance.SetDelete(&delete_maplEunsignedsPintcOvectorlEBmnSiliconDigitgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcOvectorlEBmnSiliconDigitgRsPgR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcOvectorlEBmnSiliconDigitgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,vector<BmnSiliconDigit> > >()));

      ::ROOT::AddClassAlternate("map<unsigned int,vector<BmnSiliconDigit> >","std::map<unsigned int, std::vector<BmnSiliconDigit, std::allocator<BmnSiliconDigit> >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, std::vector<BmnSiliconDigit, std::allocator<BmnSiliconDigit> > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<unsigned int,vector<BmnSiliconDigit> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcOvectorlEBmnSiliconDigitgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned int,vector<BmnSiliconDigit> >*)nullptr)->GetClass();
      maplEunsignedsPintcOvectorlEBmnSiliconDigitgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcOvectorlEBmnSiliconDigitgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcOvectorlEBmnSiliconDigitgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,vector<BmnSiliconDigit> > : new map<unsigned int,vector<BmnSiliconDigit> >;
   }
   static void *newArray_maplEunsignedsPintcOvectorlEBmnSiliconDigitgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,vector<BmnSiliconDigit> >[nElements] : new map<unsigned int,vector<BmnSiliconDigit> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcOvectorlEBmnSiliconDigitgRsPgR(void *p) {
      delete ((map<unsigned int,vector<BmnSiliconDigit> >*)p);
   }
   static void deleteArray_maplEunsignedsPintcOvectorlEBmnSiliconDigitgRsPgR(void *p) {
      delete [] ((map<unsigned int,vector<BmnSiliconDigit> >*)p);
   }
   static void destruct_maplEunsignedsPintcOvectorlEBmnSiliconDigitgRsPgR(void *p) {
      typedef map<unsigned int,vector<BmnSiliconDigit> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,vector<BmnSiliconDigit> >

namespace ROOT {
   static TClass *maplEunsignedsPintcOvectorlEBmnMwpcDigitgRsPgR_Dictionary();
   static void maplEunsignedsPintcOvectorlEBmnMwpcDigitgRsPgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcOvectorlEBmnMwpcDigitgRsPgR(void *p = nullptr);
   static void *newArray_maplEunsignedsPintcOvectorlEBmnMwpcDigitgRsPgR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcOvectorlEBmnMwpcDigitgRsPgR(void *p);
   static void deleteArray_maplEunsignedsPintcOvectorlEBmnMwpcDigitgRsPgR(void *p);
   static void destruct_maplEunsignedsPintcOvectorlEBmnMwpcDigitgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,vector<BmnMwpcDigit> >*)
   {
      map<unsigned int,vector<BmnMwpcDigit> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,vector<BmnMwpcDigit> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,vector<BmnMwpcDigit> >", -2, "map", 100,
                  typeid(map<unsigned int,vector<BmnMwpcDigit> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcOvectorlEBmnMwpcDigitgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned int,vector<BmnMwpcDigit> >) );
      instance.SetNew(&new_maplEunsignedsPintcOvectorlEBmnMwpcDigitgRsPgR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcOvectorlEBmnMwpcDigitgRsPgR);
      instance.SetDelete(&delete_maplEunsignedsPintcOvectorlEBmnMwpcDigitgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcOvectorlEBmnMwpcDigitgRsPgR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcOvectorlEBmnMwpcDigitgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,vector<BmnMwpcDigit> > >()));

      ::ROOT::AddClassAlternate("map<unsigned int,vector<BmnMwpcDigit> >","std::map<unsigned int, std::vector<BmnMwpcDigit, std::allocator<BmnMwpcDigit> >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, std::vector<BmnMwpcDigit, std::allocator<BmnMwpcDigit> > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<unsigned int,vector<BmnMwpcDigit> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcOvectorlEBmnMwpcDigitgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned int,vector<BmnMwpcDigit> >*)nullptr)->GetClass();
      maplEunsignedsPintcOvectorlEBmnMwpcDigitgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcOvectorlEBmnMwpcDigitgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcOvectorlEBmnMwpcDigitgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,vector<BmnMwpcDigit> > : new map<unsigned int,vector<BmnMwpcDigit> >;
   }
   static void *newArray_maplEunsignedsPintcOvectorlEBmnMwpcDigitgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,vector<BmnMwpcDigit> >[nElements] : new map<unsigned int,vector<BmnMwpcDigit> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcOvectorlEBmnMwpcDigitgRsPgR(void *p) {
      delete ((map<unsigned int,vector<BmnMwpcDigit> >*)p);
   }
   static void deleteArray_maplEunsignedsPintcOvectorlEBmnMwpcDigitgRsPgR(void *p) {
      delete [] ((map<unsigned int,vector<BmnMwpcDigit> >*)p);
   }
   static void destruct_maplEunsignedsPintcOvectorlEBmnMwpcDigitgRsPgR(void *p) {
      typedef map<unsigned int,vector<BmnMwpcDigit> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,vector<BmnMwpcDigit> >

namespace ROOT {
   static TClass *maplEunsignedsPintcOvectorlEBmnGemStripDigitgRsPgR_Dictionary();
   static void maplEunsignedsPintcOvectorlEBmnGemStripDigitgRsPgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcOvectorlEBmnGemStripDigitgRsPgR(void *p = nullptr);
   static void *newArray_maplEunsignedsPintcOvectorlEBmnGemStripDigitgRsPgR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcOvectorlEBmnGemStripDigitgRsPgR(void *p);
   static void deleteArray_maplEunsignedsPintcOvectorlEBmnGemStripDigitgRsPgR(void *p);
   static void destruct_maplEunsignedsPintcOvectorlEBmnGemStripDigitgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,vector<BmnGemStripDigit> >*)
   {
      map<unsigned int,vector<BmnGemStripDigit> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,vector<BmnGemStripDigit> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,vector<BmnGemStripDigit> >", -2, "map", 100,
                  typeid(map<unsigned int,vector<BmnGemStripDigit> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcOvectorlEBmnGemStripDigitgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned int,vector<BmnGemStripDigit> >) );
      instance.SetNew(&new_maplEunsignedsPintcOvectorlEBmnGemStripDigitgRsPgR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcOvectorlEBmnGemStripDigitgRsPgR);
      instance.SetDelete(&delete_maplEunsignedsPintcOvectorlEBmnGemStripDigitgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcOvectorlEBmnGemStripDigitgRsPgR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcOvectorlEBmnGemStripDigitgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,vector<BmnGemStripDigit> > >()));

      ::ROOT::AddClassAlternate("map<unsigned int,vector<BmnGemStripDigit> >","std::map<unsigned int, std::vector<BmnGemStripDigit, std::allocator<BmnGemStripDigit> >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, std::vector<BmnGemStripDigit, std::allocator<BmnGemStripDigit> > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<unsigned int,vector<BmnGemStripDigit> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcOvectorlEBmnGemStripDigitgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned int,vector<BmnGemStripDigit> >*)nullptr)->GetClass();
      maplEunsignedsPintcOvectorlEBmnGemStripDigitgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcOvectorlEBmnGemStripDigitgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcOvectorlEBmnGemStripDigitgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,vector<BmnGemStripDigit> > : new map<unsigned int,vector<BmnGemStripDigit> >;
   }
   static void *newArray_maplEunsignedsPintcOvectorlEBmnGemStripDigitgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,vector<BmnGemStripDigit> >[nElements] : new map<unsigned int,vector<BmnGemStripDigit> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcOvectorlEBmnGemStripDigitgRsPgR(void *p) {
      delete ((map<unsigned int,vector<BmnGemStripDigit> >*)p);
   }
   static void deleteArray_maplEunsignedsPintcOvectorlEBmnGemStripDigitgRsPgR(void *p) {
      delete [] ((map<unsigned int,vector<BmnGemStripDigit> >*)p);
   }
   static void destruct_maplEunsignedsPintcOvectorlEBmnGemStripDigitgRsPgR(void *p) {
      typedef map<unsigned int,vector<BmnGemStripDigit> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,vector<BmnGemStripDigit> >

namespace ROOT {
   static TClass *maplEunsignedsPintcOvectorlEBmnECALDigitgRsPgR_Dictionary();
   static void maplEunsignedsPintcOvectorlEBmnECALDigitgRsPgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcOvectorlEBmnECALDigitgRsPgR(void *p = nullptr);
   static void *newArray_maplEunsignedsPintcOvectorlEBmnECALDigitgRsPgR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcOvectorlEBmnECALDigitgRsPgR(void *p);
   static void deleteArray_maplEunsignedsPintcOvectorlEBmnECALDigitgRsPgR(void *p);
   static void destruct_maplEunsignedsPintcOvectorlEBmnECALDigitgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,vector<BmnECALDigit> >*)
   {
      map<unsigned int,vector<BmnECALDigit> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,vector<BmnECALDigit> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,vector<BmnECALDigit> >", -2, "map", 100,
                  typeid(map<unsigned int,vector<BmnECALDigit> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcOvectorlEBmnECALDigitgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned int,vector<BmnECALDigit> >) );
      instance.SetNew(&new_maplEunsignedsPintcOvectorlEBmnECALDigitgRsPgR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcOvectorlEBmnECALDigitgRsPgR);
      instance.SetDelete(&delete_maplEunsignedsPintcOvectorlEBmnECALDigitgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcOvectorlEBmnECALDigitgRsPgR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcOvectorlEBmnECALDigitgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,vector<BmnECALDigit> > >()));

      ::ROOT::AddClassAlternate("map<unsigned int,vector<BmnECALDigit> >","std::map<unsigned int, std::vector<BmnECALDigit, std::allocator<BmnECALDigit> >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, std::vector<BmnECALDigit, std::allocator<BmnECALDigit> > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<unsigned int,vector<BmnECALDigit> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcOvectorlEBmnECALDigitgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned int,vector<BmnECALDigit> >*)nullptr)->GetClass();
      maplEunsignedsPintcOvectorlEBmnECALDigitgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcOvectorlEBmnECALDigitgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcOvectorlEBmnECALDigitgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,vector<BmnECALDigit> > : new map<unsigned int,vector<BmnECALDigit> >;
   }
   static void *newArray_maplEunsignedsPintcOvectorlEBmnECALDigitgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,vector<BmnECALDigit> >[nElements] : new map<unsigned int,vector<BmnECALDigit> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcOvectorlEBmnECALDigitgRsPgR(void *p) {
      delete ((map<unsigned int,vector<BmnECALDigit> >*)p);
   }
   static void deleteArray_maplEunsignedsPintcOvectorlEBmnECALDigitgRsPgR(void *p) {
      delete [] ((map<unsigned int,vector<BmnECALDigit> >*)p);
   }
   static void destruct_maplEunsignedsPintcOvectorlEBmnECALDigitgRsPgR(void *p) {
      typedef map<unsigned int,vector<BmnECALDigit> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,vector<BmnECALDigit> >

namespace ROOT {
   static TClass *maplEunsignedsPintcOvectorlEBmnDchDigitgRsPgR_Dictionary();
   static void maplEunsignedsPintcOvectorlEBmnDchDigitgRsPgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcOvectorlEBmnDchDigitgRsPgR(void *p = nullptr);
   static void *newArray_maplEunsignedsPintcOvectorlEBmnDchDigitgRsPgR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcOvectorlEBmnDchDigitgRsPgR(void *p);
   static void deleteArray_maplEunsignedsPintcOvectorlEBmnDchDigitgRsPgR(void *p);
   static void destruct_maplEunsignedsPintcOvectorlEBmnDchDigitgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,vector<BmnDchDigit> >*)
   {
      map<unsigned int,vector<BmnDchDigit> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,vector<BmnDchDigit> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,vector<BmnDchDigit> >", -2, "map", 100,
                  typeid(map<unsigned int,vector<BmnDchDigit> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcOvectorlEBmnDchDigitgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned int,vector<BmnDchDigit> >) );
      instance.SetNew(&new_maplEunsignedsPintcOvectorlEBmnDchDigitgRsPgR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcOvectorlEBmnDchDigitgRsPgR);
      instance.SetDelete(&delete_maplEunsignedsPintcOvectorlEBmnDchDigitgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcOvectorlEBmnDchDigitgRsPgR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcOvectorlEBmnDchDigitgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,vector<BmnDchDigit> > >()));

      ::ROOT::AddClassAlternate("map<unsigned int,vector<BmnDchDigit> >","std::map<unsigned int, std::vector<BmnDchDigit, std::allocator<BmnDchDigit> >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, std::vector<BmnDchDigit, std::allocator<BmnDchDigit> > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<unsigned int,vector<BmnDchDigit> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcOvectorlEBmnDchDigitgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned int,vector<BmnDchDigit> >*)nullptr)->GetClass();
      maplEunsignedsPintcOvectorlEBmnDchDigitgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcOvectorlEBmnDchDigitgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcOvectorlEBmnDchDigitgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,vector<BmnDchDigit> > : new map<unsigned int,vector<BmnDchDigit> >;
   }
   static void *newArray_maplEunsignedsPintcOvectorlEBmnDchDigitgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,vector<BmnDchDigit> >[nElements] : new map<unsigned int,vector<BmnDchDigit> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcOvectorlEBmnDchDigitgRsPgR(void *p) {
      delete ((map<unsigned int,vector<BmnDchDigit> >*)p);
   }
   static void deleteArray_maplEunsignedsPintcOvectorlEBmnDchDigitgRsPgR(void *p) {
      delete [] ((map<unsigned int,vector<BmnDchDigit> >*)p);
   }
   static void destruct_maplEunsignedsPintcOvectorlEBmnDchDigitgRsPgR(void *p) {
      typedef map<unsigned int,vector<BmnDchDigit> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,vector<BmnDchDigit> >

namespace ROOT {
   static TClass *maplEunsignedsPintcOvectorlEBmnCSCDigitgRsPgR_Dictionary();
   static void maplEunsignedsPintcOvectorlEBmnCSCDigitgRsPgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcOvectorlEBmnCSCDigitgRsPgR(void *p = nullptr);
   static void *newArray_maplEunsignedsPintcOvectorlEBmnCSCDigitgRsPgR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcOvectorlEBmnCSCDigitgRsPgR(void *p);
   static void deleteArray_maplEunsignedsPintcOvectorlEBmnCSCDigitgRsPgR(void *p);
   static void destruct_maplEunsignedsPintcOvectorlEBmnCSCDigitgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,vector<BmnCSCDigit> >*)
   {
      map<unsigned int,vector<BmnCSCDigit> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,vector<BmnCSCDigit> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,vector<BmnCSCDigit> >", -2, "map", 100,
                  typeid(map<unsigned int,vector<BmnCSCDigit> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcOvectorlEBmnCSCDigitgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned int,vector<BmnCSCDigit> >) );
      instance.SetNew(&new_maplEunsignedsPintcOvectorlEBmnCSCDigitgRsPgR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcOvectorlEBmnCSCDigitgRsPgR);
      instance.SetDelete(&delete_maplEunsignedsPintcOvectorlEBmnCSCDigitgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcOvectorlEBmnCSCDigitgRsPgR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcOvectorlEBmnCSCDigitgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,vector<BmnCSCDigit> > >()));

      ::ROOT::AddClassAlternate("map<unsigned int,vector<BmnCSCDigit> >","std::map<unsigned int, std::vector<BmnCSCDigit, std::allocator<BmnCSCDigit> >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, std::vector<BmnCSCDigit, std::allocator<BmnCSCDigit> > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<unsigned int,vector<BmnCSCDigit> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcOvectorlEBmnCSCDigitgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned int,vector<BmnCSCDigit> >*)nullptr)->GetClass();
      maplEunsignedsPintcOvectorlEBmnCSCDigitgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcOvectorlEBmnCSCDigitgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcOvectorlEBmnCSCDigitgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,vector<BmnCSCDigit> > : new map<unsigned int,vector<BmnCSCDigit> >;
   }
   static void *newArray_maplEunsignedsPintcOvectorlEBmnCSCDigitgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,vector<BmnCSCDigit> >[nElements] : new map<unsigned int,vector<BmnCSCDigit> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcOvectorlEBmnCSCDigitgRsPgR(void *p) {
      delete ((map<unsigned int,vector<BmnCSCDigit> >*)p);
   }
   static void deleteArray_maplEunsignedsPintcOvectorlEBmnCSCDigitgRsPgR(void *p) {
      delete [] ((map<unsigned int,vector<BmnCSCDigit> >*)p);
   }
   static void destruct_maplEunsignedsPintcOvectorlEBmnCSCDigitgRsPgR(void *p) {
      typedef map<unsigned int,vector<BmnCSCDigit> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,vector<BmnCSCDigit> >

namespace ROOT {
   static TClass *maplEpairlEunsignedsPintcOTStringgRcOBmnEventHeadergR_Dictionary();
   static void maplEpairlEunsignedsPintcOTStringgRcOBmnEventHeadergR_TClassManip(TClass*);
   static void *new_maplEpairlEunsignedsPintcOTStringgRcOBmnEventHeadergR(void *p = nullptr);
   static void *newArray_maplEpairlEunsignedsPintcOTStringgRcOBmnEventHeadergR(Long_t size, void *p);
   static void delete_maplEpairlEunsignedsPintcOTStringgRcOBmnEventHeadergR(void *p);
   static void deleteArray_maplEpairlEunsignedsPintcOTStringgRcOBmnEventHeadergR(void *p);
   static void destruct_maplEpairlEunsignedsPintcOTStringgRcOBmnEventHeadergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<pair<unsigned int,TString>,BmnEventHeader>*)
   {
      map<pair<unsigned int,TString>,BmnEventHeader> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<pair<unsigned int,TString>,BmnEventHeader>));
      static ::ROOT::TGenericClassInfo 
         instance("map<pair<unsigned int,TString>,BmnEventHeader>", -2, "map", 100,
                  typeid(map<pair<unsigned int,TString>,BmnEventHeader>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEpairlEunsignedsPintcOTStringgRcOBmnEventHeadergR_Dictionary, isa_proxy, 0,
                  sizeof(map<pair<unsigned int,TString>,BmnEventHeader>) );
      instance.SetNew(&new_maplEpairlEunsignedsPintcOTStringgRcOBmnEventHeadergR);
      instance.SetNewArray(&newArray_maplEpairlEunsignedsPintcOTStringgRcOBmnEventHeadergR);
      instance.SetDelete(&delete_maplEpairlEunsignedsPintcOTStringgRcOBmnEventHeadergR);
      instance.SetDeleteArray(&deleteArray_maplEpairlEunsignedsPintcOTStringgRcOBmnEventHeadergR);
      instance.SetDestructor(&destruct_maplEpairlEunsignedsPintcOTStringgRcOBmnEventHeadergR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<pair<unsigned int,TString>,BmnEventHeader> >()));

      ::ROOT::AddClassAlternate("map<pair<unsigned int,TString>,BmnEventHeader>","std::map<std::pair<unsigned int, TString>, BmnEventHeader, std::less<std::pair<unsigned int, TString> >, std::allocator<std::pair<std::pair<unsigned int, TString> const, BmnEventHeader> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<pair<unsigned int,TString>,BmnEventHeader>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEpairlEunsignedsPintcOTStringgRcOBmnEventHeadergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<pair<unsigned int,TString>,BmnEventHeader>*)nullptr)->GetClass();
      maplEpairlEunsignedsPintcOTStringgRcOBmnEventHeadergR_TClassManip(theClass);
   return theClass;
   }

   static void maplEpairlEunsignedsPintcOTStringgRcOBmnEventHeadergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEpairlEunsignedsPintcOTStringgRcOBmnEventHeadergR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<pair<unsigned int,TString>,BmnEventHeader> : new map<pair<unsigned int,TString>,BmnEventHeader>;
   }
   static void *newArray_maplEpairlEunsignedsPintcOTStringgRcOBmnEventHeadergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<pair<unsigned int,TString>,BmnEventHeader>[nElements] : new map<pair<unsigned int,TString>,BmnEventHeader>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEpairlEunsignedsPintcOTStringgRcOBmnEventHeadergR(void *p) {
      delete ((map<pair<unsigned int,TString>,BmnEventHeader>*)p);
   }
   static void deleteArray_maplEpairlEunsignedsPintcOTStringgRcOBmnEventHeadergR(void *p) {
      delete [] ((map<pair<unsigned int,TString>,BmnEventHeader>*)p);
   }
   static void destruct_maplEpairlEunsignedsPintcOTStringgRcOBmnEventHeadergR(void *p) {
      typedef map<pair<unsigned int,TString>,BmnEventHeader> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<pair<unsigned int,TString>,BmnEventHeader>

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

namespace {
  void TriggerDictionaryInitialization_G__BmnMiscDict_Impl() {
    static const char* headers[] = {
"BmnCounterTask.h",
"BmnDigiContainer.h",
"BmnDigiMergeTask.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/base",
"/data/yaopeng/bmnroot_Yaopeng/base/data",
"/data/yaopeng/bmnroot_Yaopeng/base/raw",
"/data/yaopeng/bmnroot_Yaopeng/base/header",
"/data/yaopeng/bmnroot_Yaopeng/detectors/mwpc",
"/data/yaopeng/bmnroot_Yaopeng/detectors/csc",
"/data/yaopeng/bmnroot_Yaopeng/detectors/silicon",
"/data/yaopeng/bmnroot_Yaopeng/detectors/gem",
"/data/yaopeng/bmnroot_Yaopeng/detectors/dch",
"/data/yaopeng/bmnroot_Yaopeng/detectors/tof1",
"/data/yaopeng/bmnroot_Yaopeng/detectors/tof",
"/data/yaopeng/bmnroot_Yaopeng/detectors/ecal",
"/data/yaopeng/bmnroot_Yaopeng/detectors/zdc",
"/data/yaopeng/bmnroot_Yaopeng/miscellaneous",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/miscellaneous/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__BmnMiscDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$BmnCounterTask.h")))  BmnCounter;
class __attribute__((annotate("$clingAutoload$BmnDigiContainer.h")))  BmnDigiContainer;
class __attribute__((annotate("$clingAutoload$BmnDigiMergeTask.h")))  BmnDigiMergeTask;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__BmnMiscDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "BmnCounterTask.h"
#include "BmnDigiContainer.h"
#include "BmnDigiMergeTask.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BmnCounter", payloadCode, "@",
"BmnDigiContainer", payloadCode, "@",
"BmnDigiMergeTask", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__BmnMiscDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__BmnMiscDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__BmnMiscDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__BmnMiscDict() {
  TriggerDictionaryInitialization_G__BmnMiscDict_Impl();
}
