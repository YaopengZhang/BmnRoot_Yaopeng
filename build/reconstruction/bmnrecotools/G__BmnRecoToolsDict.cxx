// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIreconstructiondIbmnrecotoolsdIG__BmnRecoToolsDict
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
#include "BmnFairRunSim.h"
#include "BmnRecoTools.h"
#include "BmnCheckMCTask.h"
#include "BmnPVGetter.h"
#include "MpdLAQGSMGeneratorExt.h"
#include "BmnEmbedding.h"
#include "BmnRescale.h"
#include "BmnTrackConv.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BmnFairRunSim(void *p = nullptr);
   static void *newArray_BmnFairRunSim(Long_t size, void *p);
   static void delete_BmnFairRunSim(void *p);
   static void deleteArray_BmnFairRunSim(void *p);
   static void destruct_BmnFairRunSim(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFairRunSim*)
   {
      ::BmnFairRunSim *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnFairRunSim >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnFairRunSim", ::BmnFairRunSim::Class_Version(), "BmnFairRunSim.h", 16,
                  typeid(::BmnFairRunSim), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnFairRunSim::Dictionary, isa_proxy, 4,
                  sizeof(::BmnFairRunSim) );
      instance.SetNew(&new_BmnFairRunSim);
      instance.SetNewArray(&newArray_BmnFairRunSim);
      instance.SetDelete(&delete_BmnFairRunSim);
      instance.SetDeleteArray(&deleteArray_BmnFairRunSim);
      instance.SetDestructor(&destruct_BmnFairRunSim);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFairRunSim*)
   {
      return GenerateInitInstanceLocal((::BmnFairRunSim*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFairRunSim*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnRecoTools_Dictionary();
   static void BmnRecoTools_TClassManip(TClass*);
   static void *new_BmnRecoTools(void *p = nullptr);
   static void *newArray_BmnRecoTools(Long_t size, void *p);
   static void delete_BmnRecoTools(void *p);
   static void deleteArray_BmnRecoTools(void *p);
   static void destruct_BmnRecoTools(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnRecoTools*)
   {
      ::BmnRecoTools *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnRecoTools));
      static ::ROOT::TGenericClassInfo 
         instance("BmnRecoTools", "BmnRecoTools.h", 50,
                  typeid(::BmnRecoTools), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnRecoTools_Dictionary, isa_proxy, 4,
                  sizeof(::BmnRecoTools) );
      instance.SetNew(&new_BmnRecoTools);
      instance.SetNewArray(&newArray_BmnRecoTools);
      instance.SetDelete(&delete_BmnRecoTools);
      instance.SetDeleteArray(&deleteArray_BmnRecoTools);
      instance.SetDestructor(&destruct_BmnRecoTools);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnRecoTools*)
   {
      return GenerateInitInstanceLocal((::BmnRecoTools*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnRecoTools*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnRecoTools_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnRecoTools*)nullptr)->GetClass();
      BmnRecoTools_TClassManip(theClass);
   return theClass;
   }

   static void BmnRecoTools_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnCheckMCTask(void *p);
   static void deleteArray_BmnCheckMCTask(void *p);
   static void destruct_BmnCheckMCTask(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnCheckMCTask*)
   {
      ::BmnCheckMCTask *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnCheckMCTask >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnCheckMCTask", ::BmnCheckMCTask::Class_Version(), "BmnCheckMCTask.h", 21,
                  typeid(::BmnCheckMCTask), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnCheckMCTask::Dictionary, isa_proxy, 4,
                  sizeof(::BmnCheckMCTask) );
      instance.SetDelete(&delete_BmnCheckMCTask);
      instance.SetDeleteArray(&deleteArray_BmnCheckMCTask);
      instance.SetDestructor(&destruct_BmnCheckMCTask);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnCheckMCTask*)
   {
      return GenerateInitInstanceLocal((::BmnCheckMCTask*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnCheckMCTask*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnPVGetter(void *p);
   static void deleteArray_BmnPVGetter(void *p);
   static void destruct_BmnPVGetter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnPVGetter*)
   {
      ::BmnPVGetter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnPVGetter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnPVGetter", ::BmnPVGetter::Class_Version(), "BmnPVGetter.h", 23,
                  typeid(::BmnPVGetter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnPVGetter::Dictionary, isa_proxy, 4,
                  sizeof(::BmnPVGetter) );
      instance.SetDelete(&delete_BmnPVGetter);
      instance.SetDeleteArray(&deleteArray_BmnPVGetter);
      instance.SetDestructor(&destruct_BmnPVGetter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnPVGetter*)
   {
      return GenerateInitInstanceLocal((::BmnPVGetter*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnPVGetter*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MpdLAQGSMGeneratorExt(void *p = nullptr);
   static void *newArray_MpdLAQGSMGeneratorExt(Long_t size, void *p);
   static void delete_MpdLAQGSMGeneratorExt(void *p);
   static void deleteArray_MpdLAQGSMGeneratorExt(void *p);
   static void destruct_MpdLAQGSMGeneratorExt(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdLAQGSMGeneratorExt*)
   {
      ::MpdLAQGSMGeneratorExt *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdLAQGSMGeneratorExt >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MpdLAQGSMGeneratorExt", ::MpdLAQGSMGeneratorExt::Class_Version(), "MpdLAQGSMGeneratorExt.h", 37,
                  typeid(::MpdLAQGSMGeneratorExt), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdLAQGSMGeneratorExt::Dictionary, isa_proxy, 4,
                  sizeof(::MpdLAQGSMGeneratorExt) );
      instance.SetNew(&new_MpdLAQGSMGeneratorExt);
      instance.SetNewArray(&newArray_MpdLAQGSMGeneratorExt);
      instance.SetDelete(&delete_MpdLAQGSMGeneratorExt);
      instance.SetDeleteArray(&deleteArray_MpdLAQGSMGeneratorExt);
      instance.SetDestructor(&destruct_MpdLAQGSMGeneratorExt);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdLAQGSMGeneratorExt*)
   {
      return GenerateInitInstanceLocal((::MpdLAQGSMGeneratorExt*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdLAQGSMGeneratorExt*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnEmbedding(void *p = nullptr);
   static void *newArray_BmnEmbedding(Long_t size, void *p);
   static void delete_BmnEmbedding(void *p);
   static void deleteArray_BmnEmbedding(void *p);
   static void destruct_BmnEmbedding(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnEmbedding*)
   {
      ::BmnEmbedding *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnEmbedding >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnEmbedding", ::BmnEmbedding::Class_Version(), "BmnEmbedding.h", 41,
                  typeid(::BmnEmbedding), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnEmbedding::Dictionary, isa_proxy, 4,
                  sizeof(::BmnEmbedding) );
      instance.SetNew(&new_BmnEmbedding);
      instance.SetNewArray(&newArray_BmnEmbedding);
      instance.SetDelete(&delete_BmnEmbedding);
      instance.SetDeleteArray(&deleteArray_BmnEmbedding);
      instance.SetDestructor(&destruct_BmnEmbedding);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnEmbedding*)
   {
      return GenerateInitInstanceLocal((::BmnEmbedding*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnEmbedding*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnRescale_Dictionary();
   static void BmnRescale_TClassManip(TClass*);
   static void delete_BmnRescale(void *p);
   static void deleteArray_BmnRescale(void *p);
   static void destruct_BmnRescale(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnRescale*)
   {
      ::BmnRescale *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnRescale));
      static ::ROOT::TGenericClassInfo 
         instance("BmnRescale", "BmnRescale.h", 87,
                  typeid(::BmnRescale), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnRescale_Dictionary, isa_proxy, 4,
                  sizeof(::BmnRescale) );
      instance.SetDelete(&delete_BmnRescale);
      instance.SetDeleteArray(&deleteArray_BmnRescale);
      instance.SetDestructor(&destruct_BmnRescale);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnRescale*)
   {
      return GenerateInitInstanceLocal((::BmnRescale*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnRescale*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnRescale_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnRescale*)nullptr)->GetClass();
      BmnRescale_TClassManip(theClass);
   return theClass;
   }

   static void BmnRescale_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnZDCEventDataExt(void *p = nullptr);
   static void *newArray_BmnZDCEventDataExt(Long_t size, void *p);
   static void delete_BmnZDCEventDataExt(void *p);
   static void deleteArray_BmnZDCEventDataExt(void *p);
   static void destruct_BmnZDCEventDataExt(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnZDCEventDataExt*)
   {
      ::BmnZDCEventDataExt *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnZDCEventDataExt >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnZDCEventDataExt", ::BmnZDCEventDataExt::Class_Version(), "BmnTrackConv.h", 41,
                  typeid(::BmnZDCEventDataExt), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnZDCEventDataExt::Dictionary, isa_proxy, 4,
                  sizeof(::BmnZDCEventDataExt) );
      instance.SetNew(&new_BmnZDCEventDataExt);
      instance.SetNewArray(&newArray_BmnZDCEventDataExt);
      instance.SetDelete(&delete_BmnZDCEventDataExt);
      instance.SetDeleteArray(&deleteArray_BmnZDCEventDataExt);
      instance.SetDestructor(&destruct_BmnZDCEventDataExt);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnZDCEventDataExt*)
   {
      return GenerateInitInstanceLocal((::BmnZDCEventDataExt*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnZDCEventDataExt*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnTrackConv(void *p);
   static void deleteArray_BmnTrackConv(void *p);
   static void destruct_BmnTrackConv(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTrackConv*)
   {
      ::BmnTrackConv *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTrackConv >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTrackConv", ::BmnTrackConv::Class_Version(), "BmnTrackConv.h", 103,
                  typeid(::BmnTrackConv), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTrackConv::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTrackConv) );
      instance.SetDelete(&delete_BmnTrackConv);
      instance.SetDeleteArray(&deleteArray_BmnTrackConv);
      instance.SetDestructor(&destruct_BmnTrackConv);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTrackConv*)
   {
      return GenerateInitInstanceLocal((::BmnTrackConv*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTrackConv*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnFairRunSim::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnFairRunSim::Class_Name()
{
   return "BmnFairRunSim";
}

//______________________________________________________________________________
const char *BmnFairRunSim::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFairRunSim*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnFairRunSim::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFairRunSim*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnFairRunSim::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFairRunSim*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnFairRunSim::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFairRunSim*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnCheckMCTask::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnCheckMCTask::Class_Name()
{
   return "BmnCheckMCTask";
}

//______________________________________________________________________________
const char *BmnCheckMCTask::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCheckMCTask*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnCheckMCTask::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCheckMCTask*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnCheckMCTask::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCheckMCTask*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnCheckMCTask::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCheckMCTask*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnPVGetter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnPVGetter::Class_Name()
{
   return "BmnPVGetter";
}

//______________________________________________________________________________
const char *BmnPVGetter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnPVGetter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnPVGetter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnPVGetter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnPVGetter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnPVGetter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnPVGetter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnPVGetter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdLAQGSMGeneratorExt::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdLAQGSMGeneratorExt::Class_Name()
{
   return "MpdLAQGSMGeneratorExt";
}

//______________________________________________________________________________
const char *MpdLAQGSMGeneratorExt::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdLAQGSMGeneratorExt*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MpdLAQGSMGeneratorExt::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdLAQGSMGeneratorExt*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdLAQGSMGeneratorExt::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdLAQGSMGeneratorExt*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdLAQGSMGeneratorExt::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdLAQGSMGeneratorExt*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnEmbedding::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnEmbedding::Class_Name()
{
   return "BmnEmbedding";
}

//______________________________________________________________________________
const char *BmnEmbedding::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnEmbedding*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnEmbedding::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnEmbedding*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnEmbedding::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnEmbedding*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnEmbedding::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnEmbedding*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnZDCEventDataExt::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnZDCEventDataExt::Class_Name()
{
   return "BmnZDCEventDataExt";
}

//______________________________________________________________________________
const char *BmnZDCEventDataExt::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZDCEventDataExt*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnZDCEventDataExt::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZDCEventDataExt*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnZDCEventDataExt::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZDCEventDataExt*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnZDCEventDataExt::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZDCEventDataExt*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTrackConv::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTrackConv::Class_Name()
{
   return "BmnTrackConv";
}

//______________________________________________________________________________
const char *BmnTrackConv::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackConv*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTrackConv::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackConv*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTrackConv::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackConv*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTrackConv::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackConv*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnFairRunSim::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnFairRunSim.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnFairRunSim::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnFairRunSim::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnFairRunSim(void *p) {
      return  p ? new(p) ::BmnFairRunSim : new ::BmnFairRunSim;
   }
   static void *newArray_BmnFairRunSim(Long_t nElements, void *p) {
      return p ? new(p) ::BmnFairRunSim[nElements] : new ::BmnFairRunSim[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnFairRunSim(void *p) {
      delete ((::BmnFairRunSim*)p);
   }
   static void deleteArray_BmnFairRunSim(void *p) {
      delete [] ((::BmnFairRunSim*)p);
   }
   static void destruct_BmnFairRunSim(void *p) {
      typedef ::BmnFairRunSim current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFairRunSim

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnRecoTools(void *p) {
      return  p ? new(p) ::BmnRecoTools : new ::BmnRecoTools;
   }
   static void *newArray_BmnRecoTools(Long_t nElements, void *p) {
      return p ? new(p) ::BmnRecoTools[nElements] : new ::BmnRecoTools[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnRecoTools(void *p) {
      delete ((::BmnRecoTools*)p);
   }
   static void deleteArray_BmnRecoTools(void *p) {
      delete [] ((::BmnRecoTools*)p);
   }
   static void destruct_BmnRecoTools(void *p) {
      typedef ::BmnRecoTools current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnRecoTools

//______________________________________________________________________________
void BmnCheckMCTask::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnCheckMCTask.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnCheckMCTask::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnCheckMCTask::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnCheckMCTask(void *p) {
      delete ((::BmnCheckMCTask*)p);
   }
   static void deleteArray_BmnCheckMCTask(void *p) {
      delete [] ((::BmnCheckMCTask*)p);
   }
   static void destruct_BmnCheckMCTask(void *p) {
      typedef ::BmnCheckMCTask current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnCheckMCTask

//______________________________________________________________________________
void BmnPVGetter::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnPVGetter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnPVGetter::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnPVGetter::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnPVGetter(void *p) {
      delete ((::BmnPVGetter*)p);
   }
   static void deleteArray_BmnPVGetter(void *p) {
      delete [] ((::BmnPVGetter*)p);
   }
   static void destruct_BmnPVGetter(void *p) {
      typedef ::BmnPVGetter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnPVGetter

//______________________________________________________________________________
void MpdLAQGSMGeneratorExt::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdLAQGSMGeneratorExt.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MpdLAQGSMGeneratorExt::Class(),this);
   } else {
      R__b.WriteClassBuffer(MpdLAQGSMGeneratorExt::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MpdLAQGSMGeneratorExt(void *p) {
      return  p ? new(p) ::MpdLAQGSMGeneratorExt : new ::MpdLAQGSMGeneratorExt;
   }
   static void *newArray_MpdLAQGSMGeneratorExt(Long_t nElements, void *p) {
      return p ? new(p) ::MpdLAQGSMGeneratorExt[nElements] : new ::MpdLAQGSMGeneratorExt[nElements];
   }
   // Wrapper around operator delete
   static void delete_MpdLAQGSMGeneratorExt(void *p) {
      delete ((::MpdLAQGSMGeneratorExt*)p);
   }
   static void deleteArray_MpdLAQGSMGeneratorExt(void *p) {
      delete [] ((::MpdLAQGSMGeneratorExt*)p);
   }
   static void destruct_MpdLAQGSMGeneratorExt(void *p) {
      typedef ::MpdLAQGSMGeneratorExt current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MpdLAQGSMGeneratorExt

//______________________________________________________________________________
void BmnEmbedding::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnEmbedding.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnEmbedding::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnEmbedding::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnEmbedding(void *p) {
      return  p ? new(p) ::BmnEmbedding : new ::BmnEmbedding;
   }
   static void *newArray_BmnEmbedding(Long_t nElements, void *p) {
      return p ? new(p) ::BmnEmbedding[nElements] : new ::BmnEmbedding[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnEmbedding(void *p) {
      delete ((::BmnEmbedding*)p);
   }
   static void deleteArray_BmnEmbedding(void *p) {
      delete [] ((::BmnEmbedding*)p);
   }
   static void destruct_BmnEmbedding(void *p) {
      typedef ::BmnEmbedding current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnEmbedding

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnRescale(void *p) {
      delete ((::BmnRescale*)p);
   }
   static void deleteArray_BmnRescale(void *p) {
      delete [] ((::BmnRescale*)p);
   }
   static void destruct_BmnRescale(void *p) {
      typedef ::BmnRescale current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnRescale

//______________________________________________________________________________
void BmnZDCEventDataExt::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnZDCEventDataExt.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnZDCEventDataExt::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnZDCEventDataExt::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnZDCEventDataExt(void *p) {
      return  p ? new(p) ::BmnZDCEventDataExt : new ::BmnZDCEventDataExt;
   }
   static void *newArray_BmnZDCEventDataExt(Long_t nElements, void *p) {
      return p ? new(p) ::BmnZDCEventDataExt[nElements] : new ::BmnZDCEventDataExt[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnZDCEventDataExt(void *p) {
      delete ((::BmnZDCEventDataExt*)p);
   }
   static void deleteArray_BmnZDCEventDataExt(void *p) {
      delete [] ((::BmnZDCEventDataExt*)p);
   }
   static void destruct_BmnZDCEventDataExt(void *p) {
      typedef ::BmnZDCEventDataExt current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnZDCEventDataExt

//______________________________________________________________________________
void BmnTrackConv::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTrackConv.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTrackConv::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTrackConv::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnTrackConv(void *p) {
      delete ((::BmnTrackConv*)p);
   }
   static void deleteArray_BmnTrackConv(void *p) {
      delete [] ((::BmnTrackConv*)p);
   }
   static void destruct_BmnTrackConv(void *p) {
      typedef ::BmnTrackConv current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTrackConv

namespace ROOT {
   static TClass *vectorlEvectorlEvectorlETF1mUgRsPgRsPgR_Dictionary();
   static void vectorlEvectorlEvectorlETF1mUgRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEvectorlETF1mUgRsPgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlEvectorlETF1mUgRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEvectorlETF1mUgRsPgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEvectorlETF1mUgRsPgRsPgR(void *p);
   static void destruct_vectorlEvectorlEvectorlETF1mUgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<vector<TF1*> > >*)
   {
      vector<vector<vector<TF1*> > > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<vector<TF1*> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<vector<TF1*> > >", -2, "vector", 386,
                  typeid(vector<vector<vector<TF1*> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEvectorlETF1mUgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<vector<TF1*> > >) );
      instance.SetNew(&new_vectorlEvectorlEvectorlETF1mUgRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEvectorlETF1mUgRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEvectorlETF1mUgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEvectorlETF1mUgRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEvectorlETF1mUgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<vector<TF1*> > > >()));

      ::ROOT::AddClassAlternate("vector<vector<vector<TF1*> > >","std::vector<std::vector<std::vector<TF1*, std::allocator<TF1*> >, std::allocator<std::vector<TF1*, std::allocator<TF1*> > > >, std::allocator<std::vector<std::vector<TF1*, std::allocator<TF1*> >, std::allocator<std::vector<TF1*, std::allocator<TF1*> > > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<vector<TF1*> > >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEvectorlETF1mUgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<vector<TF1*> > >*)nullptr)->GetClass();
      vectorlEvectorlEvectorlETF1mUgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEvectorlETF1mUgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEvectorlETF1mUgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<vector<TF1*> > > : new vector<vector<vector<TF1*> > >;
   }
   static void *newArray_vectorlEvectorlEvectorlETF1mUgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<vector<TF1*> > >[nElements] : new vector<vector<vector<TF1*> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEvectorlETF1mUgRsPgRsPgR(void *p) {
      delete ((vector<vector<vector<TF1*> > >*)p);
   }
   static void deleteArray_vectorlEvectorlEvectorlETF1mUgRsPgRsPgR(void *p) {
      delete [] ((vector<vector<vector<TF1*> > >*)p);
   }
   static void destruct_vectorlEvectorlEvectorlETF1mUgRsPgRsPgR(void *p) {
      typedef vector<vector<vector<TF1*> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<vector<TF1*> > >

namespace ROOT {
   static TClass *vectorlEvectorlEvectorlEBmnSigInfomUgRsPgRsPgR_Dictionary();
   static void vectorlEvectorlEvectorlEBmnSigInfomUgRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEvectorlEBmnSigInfomUgRsPgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlEvectorlEBmnSigInfomUgRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEvectorlEBmnSigInfomUgRsPgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEvectorlEBmnSigInfomUgRsPgRsPgR(void *p);
   static void destruct_vectorlEvectorlEvectorlEBmnSigInfomUgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<vector<BmnSigInfo*> > >*)
   {
      vector<vector<vector<BmnSigInfo*> > > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<vector<BmnSigInfo*> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<vector<BmnSigInfo*> > >", -2, "vector", 386,
                  typeid(vector<vector<vector<BmnSigInfo*> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEvectorlEBmnSigInfomUgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<vector<BmnSigInfo*> > >) );
      instance.SetNew(&new_vectorlEvectorlEvectorlEBmnSigInfomUgRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEvectorlEBmnSigInfomUgRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEvectorlEBmnSigInfomUgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEvectorlEBmnSigInfomUgRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEvectorlEBmnSigInfomUgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<vector<BmnSigInfo*> > > >()));

      ::ROOT::AddClassAlternate("vector<vector<vector<BmnSigInfo*> > >","std::vector<std::vector<std::vector<BmnSigInfo*, std::allocator<BmnSigInfo*> >, std::allocator<std::vector<BmnSigInfo*, std::allocator<BmnSigInfo*> > > >, std::allocator<std::vector<std::vector<BmnSigInfo*, std::allocator<BmnSigInfo*> >, std::allocator<std::vector<BmnSigInfo*, std::allocator<BmnSigInfo*> > > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<vector<BmnSigInfo*> > >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEvectorlEBmnSigInfomUgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<vector<BmnSigInfo*> > >*)nullptr)->GetClass();
      vectorlEvectorlEvectorlEBmnSigInfomUgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEvectorlEBmnSigInfomUgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEvectorlEBmnSigInfomUgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<vector<BmnSigInfo*> > > : new vector<vector<vector<BmnSigInfo*> > >;
   }
   static void *newArray_vectorlEvectorlEvectorlEBmnSigInfomUgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<vector<BmnSigInfo*> > >[nElements] : new vector<vector<vector<BmnSigInfo*> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEvectorlEBmnSigInfomUgRsPgRsPgR(void *p) {
      delete ((vector<vector<vector<BmnSigInfo*> > >*)p);
   }
   static void deleteArray_vectorlEvectorlEvectorlEBmnSigInfomUgRsPgRsPgR(void *p) {
      delete [] ((vector<vector<vector<BmnSigInfo*> > >*)p);
   }
   static void destruct_vectorlEvectorlEvectorlEBmnSigInfomUgRsPgRsPgR(void *p) {
      typedef vector<vector<vector<BmnSigInfo*> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<vector<BmnSigInfo*> > >

namespace ROOT {
   static TClass *vectorlEvectorlETF1mUgRsPgR_Dictionary();
   static void vectorlEvectorlETF1mUgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlETF1mUgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlETF1mUgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlETF1mUgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlETF1mUgRsPgR(void *p);
   static void destruct_vectorlEvectorlETF1mUgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<TF1*> >*)
   {
      vector<vector<TF1*> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<TF1*> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<TF1*> >", -2, "vector", 386,
                  typeid(vector<vector<TF1*> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlETF1mUgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<TF1*> >) );
      instance.SetNew(&new_vectorlEvectorlETF1mUgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlETF1mUgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlETF1mUgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlETF1mUgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlETF1mUgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<TF1*> > >()));

      ::ROOT::AddClassAlternate("vector<vector<TF1*> >","std::vector<std::vector<TF1*, std::allocator<TF1*> >, std::allocator<std::vector<TF1*, std::allocator<TF1*> > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<TF1*> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlETF1mUgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<TF1*> >*)nullptr)->GetClass();
      vectorlEvectorlETF1mUgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlETF1mUgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlETF1mUgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<TF1*> > : new vector<vector<TF1*> >;
   }
   static void *newArray_vectorlEvectorlETF1mUgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<TF1*> >[nElements] : new vector<vector<TF1*> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlETF1mUgRsPgR(void *p) {
      delete ((vector<vector<TF1*> >*)p);
   }
   static void deleteArray_vectorlEvectorlETF1mUgRsPgR(void *p) {
      delete [] ((vector<vector<TF1*> >*)p);
   }
   static void destruct_vectorlEvectorlETF1mUgRsPgR(void *p) {
      typedef vector<vector<TF1*> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<TF1*> >

namespace ROOT {
   static TClass *vectorlEvectorlEBmnSigInfomUgRsPgR_Dictionary();
   static void vectorlEvectorlEBmnSigInfomUgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEBmnSigInfomUgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlEBmnSigInfomUgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEBmnSigInfomUgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEBmnSigInfomUgRsPgR(void *p);
   static void destruct_vectorlEvectorlEBmnSigInfomUgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<BmnSigInfo*> >*)
   {
      vector<vector<BmnSigInfo*> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<BmnSigInfo*> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<BmnSigInfo*> >", -2, "vector", 386,
                  typeid(vector<vector<BmnSigInfo*> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEBmnSigInfomUgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<BmnSigInfo*> >) );
      instance.SetNew(&new_vectorlEvectorlEBmnSigInfomUgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEBmnSigInfomUgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEBmnSigInfomUgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEBmnSigInfomUgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEBmnSigInfomUgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<BmnSigInfo*> > >()));

      ::ROOT::AddClassAlternate("vector<vector<BmnSigInfo*> >","std::vector<std::vector<BmnSigInfo*, std::allocator<BmnSigInfo*> >, std::allocator<std::vector<BmnSigInfo*, std::allocator<BmnSigInfo*> > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<BmnSigInfo*> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEBmnSigInfomUgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<BmnSigInfo*> >*)nullptr)->GetClass();
      vectorlEvectorlEBmnSigInfomUgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEBmnSigInfomUgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEBmnSigInfomUgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<BmnSigInfo*> > : new vector<vector<BmnSigInfo*> >;
   }
   static void *newArray_vectorlEvectorlEBmnSigInfomUgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<BmnSigInfo*> >[nElements] : new vector<vector<BmnSigInfo*> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEBmnSigInfomUgRsPgR(void *p) {
      delete ((vector<vector<BmnSigInfo*> >*)p);
   }
   static void deleteArray_vectorlEvectorlEBmnSigInfomUgRsPgR(void *p) {
      delete [] ((vector<vector<BmnSigInfo*> >*)p);
   }
   static void destruct_vectorlEvectorlEBmnSigInfomUgRsPgR(void *p) {
      typedef vector<vector<BmnSigInfo*> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<BmnSigInfo*> >

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
   static TClass *vectorlETF1mUgR_Dictionary();
   static void vectorlETF1mUgR_TClassManip(TClass*);
   static void *new_vectorlETF1mUgR(void *p = nullptr);
   static void *newArray_vectorlETF1mUgR(Long_t size, void *p);
   static void delete_vectorlETF1mUgR(void *p);
   static void deleteArray_vectorlETF1mUgR(void *p);
   static void destruct_vectorlETF1mUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TF1*>*)
   {
      vector<TF1*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TF1*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TF1*>", -2, "vector", 386,
                  typeid(vector<TF1*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETF1mUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TF1*>) );
      instance.SetNew(&new_vectorlETF1mUgR);
      instance.SetNewArray(&newArray_vectorlETF1mUgR);
      instance.SetDelete(&delete_vectorlETF1mUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETF1mUgR);
      instance.SetDestructor(&destruct_vectorlETF1mUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TF1*> >()));

      ::ROOT::AddClassAlternate("vector<TF1*>","std::vector<TF1*, std::allocator<TF1*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TF1*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETF1mUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TF1*>*)nullptr)->GetClass();
      vectorlETF1mUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETF1mUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETF1mUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TF1*> : new vector<TF1*>;
   }
   static void *newArray_vectorlETF1mUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TF1*>[nElements] : new vector<TF1*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETF1mUgR(void *p) {
      delete ((vector<TF1*>*)p);
   }
   static void deleteArray_vectorlETF1mUgR(void *p) {
      delete [] ((vector<TF1*>*)p);
   }
   static void destruct_vectorlETF1mUgR(void *p) {
      typedef vector<TF1*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TF1*>

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
   static TClass *vectorlETBranchmUgR_Dictionary();
   static void vectorlETBranchmUgR_TClassManip(TClass*);
   static void *new_vectorlETBranchmUgR(void *p = nullptr);
   static void *newArray_vectorlETBranchmUgR(Long_t size, void *p);
   static void delete_vectorlETBranchmUgR(void *p);
   static void deleteArray_vectorlETBranchmUgR(void *p);
   static void destruct_vectorlETBranchmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TBranch*>*)
   {
      vector<TBranch*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TBranch*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TBranch*>", -2, "vector", 386,
                  typeid(vector<TBranch*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETBranchmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TBranch*>) );
      instance.SetNew(&new_vectorlETBranchmUgR);
      instance.SetNewArray(&newArray_vectorlETBranchmUgR);
      instance.SetDelete(&delete_vectorlETBranchmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETBranchmUgR);
      instance.SetDestructor(&destruct_vectorlETBranchmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TBranch*> >()));

      ::ROOT::AddClassAlternate("vector<TBranch*>","std::vector<TBranch*, std::allocator<TBranch*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TBranch*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETBranchmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TBranch*>*)nullptr)->GetClass();
      vectorlETBranchmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETBranchmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETBranchmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TBranch*> : new vector<TBranch*>;
   }
   static void *newArray_vectorlETBranchmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TBranch*>[nElements] : new vector<TBranch*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETBranchmUgR(void *p) {
      delete ((vector<TBranch*>*)p);
   }
   static void deleteArray_vectorlETBranchmUgR(void *p) {
      delete [] ((vector<TBranch*>*)p);
   }
   static void destruct_vectorlETBranchmUgR(void *p) {
      typedef vector<TBranch*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TBranch*>

namespace ROOT {
   static TClass *vectorlEBmnSigInfomUgR_Dictionary();
   static void vectorlEBmnSigInfomUgR_TClassManip(TClass*);
   static void *new_vectorlEBmnSigInfomUgR(void *p = nullptr);
   static void *newArray_vectorlEBmnSigInfomUgR(Long_t size, void *p);
   static void delete_vectorlEBmnSigInfomUgR(void *p);
   static void deleteArray_vectorlEBmnSigInfomUgR(void *p);
   static void destruct_vectorlEBmnSigInfomUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnSigInfo*>*)
   {
      vector<BmnSigInfo*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnSigInfo*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnSigInfo*>", -2, "vector", 386,
                  typeid(vector<BmnSigInfo*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnSigInfomUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnSigInfo*>) );
      instance.SetNew(&new_vectorlEBmnSigInfomUgR);
      instance.SetNewArray(&newArray_vectorlEBmnSigInfomUgR);
      instance.SetDelete(&delete_vectorlEBmnSigInfomUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnSigInfomUgR);
      instance.SetDestructor(&destruct_vectorlEBmnSigInfomUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnSigInfo*> >()));

      ::ROOT::AddClassAlternate("vector<BmnSigInfo*>","std::vector<BmnSigInfo*, std::allocator<BmnSigInfo*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnSigInfo*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnSigInfomUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnSigInfo*>*)nullptr)->GetClass();
      vectorlEBmnSigInfomUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnSigInfomUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnSigInfomUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnSigInfo*> : new vector<BmnSigInfo*>;
   }
   static void *newArray_vectorlEBmnSigInfomUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnSigInfo*>[nElements] : new vector<BmnSigInfo*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnSigInfomUgR(void *p) {
      delete ((vector<BmnSigInfo*>*)p);
   }
   static void deleteArray_vectorlEBmnSigInfomUgR(void *p) {
      delete [] ((vector<BmnSigInfo*>*)p);
   }
   static void destruct_vectorlEBmnSigInfomUgR(void *p) {
      typedef vector<BmnSigInfo*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnSigInfo*>

namespace {
  void TriggerDictionaryInitialization_G__BmnRecoToolsDict_Impl() {
    static const char* headers[] = {
"BmnFairRunSim.h",
"BmnRecoTools.h",
"BmnCheckMCTask.h",
"BmnPVGetter.h",
"MpdLAQGSMGeneratorExt.h",
"BmnEmbedding.h",
"BmnRescale.h",
"BmnTrackConv.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/field",
"/data/yaopeng/bmnroot_Yaopeng/base",
"/data/yaopeng/bmnroot_Yaopeng/base/data",
"/data/yaopeng/bmnroot_Yaopeng/base/raw",
"/data/yaopeng/bmnroot_Yaopeng/base/header",
"/data/yaopeng/bmnroot_Yaopeng/base/math",
"/data/yaopeng/bmnroot_Yaopeng/base/cbm",
"/data/yaopeng/bmnroot_Yaopeng/generators",
"/data/yaopeng/bmnroot_Yaopeng/detectors/bd",
"/data/yaopeng/bmnroot_Yaopeng/detectors/tof1",
"/data/yaopeng/bmnroot_Yaopeng/detectors/csc",
"/data/yaopeng/bmnroot_Yaopeng/detectors/silicon",
"/data/yaopeng/bmnroot_Yaopeng/detectors/sts",
"/data/yaopeng/bmnroot_Yaopeng/detectors/gem",
"/data/yaopeng/bmnroot_Yaopeng/detectors/dch",
"/data/yaopeng/bmnroot_Yaopeng/detectors/tof",
"/data/yaopeng/bmnroot_Yaopeng/detectors/zdc",
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/globaltracking",
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/zdc",
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/bmnrecotools",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/reconstruction/bmnrecotools/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__BmnRecoToolsDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$BmnFairRunSim.h")))  BmnFairRunSim;
class __attribute__((annotate("$clingAutoload$BmnRecoTools.h")))  BmnRecoTools;
class __attribute__((annotate("$clingAutoload$BmnCheckMCTask.h")))  BmnCheckMCTask;
class __attribute__((annotate("$clingAutoload$BmnPVGetter.h")))  BmnPVGetter;
class __attribute__((annotate("$clingAutoload$MpdLAQGSMGeneratorExt.h")))  MpdLAQGSMGeneratorExt;
class __attribute__((annotate("$clingAutoload$BmnEmbedding.h")))  BmnEmbedding;
class __attribute__((annotate("$clingAutoload$BmnRescale.h")))  BmnRescale;
class __attribute__((annotate("$clingAutoload$BmnTrackConv.h")))  BmnZDCEventDataExt;
class __attribute__((annotate("$clingAutoload$BmnTrackConv.h")))  BmnTrackConv;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__BmnRecoToolsDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "BmnFairRunSim.h"
#include "BmnRecoTools.h"
#include "BmnCheckMCTask.h"
#include "BmnPVGetter.h"
#include "MpdLAQGSMGeneratorExt.h"
#include "BmnEmbedding.h"
#include "BmnRescale.h"
#include "BmnTrackConv.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BmnCheckMCTask", payloadCode, "@",
"BmnEmbedding", payloadCode, "@",
"BmnFairRunSim", payloadCode, "@",
"BmnPVGetter", payloadCode, "@",
"BmnRecoTools", payloadCode, "@",
"BmnRescale", payloadCode, "@",
"BmnTrackConv", payloadCode, "@",
"BmnZDCEventDataExt", payloadCode, "@",
"MpdLAQGSMGeneratorExt", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__BmnRecoToolsDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__BmnRecoToolsDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__BmnRecoToolsDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__BmnRecoToolsDict() {
  TriggerDictionaryInitialization_G__BmnRecoToolsDict_Impl();
}
