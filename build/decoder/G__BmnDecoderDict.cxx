// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIdecoderdIG__BmnDecoderDict
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
#include "BmnAdcProcessor.h"
#include "BmnDchRaw2Digit.h"
#include "BmnMwpcRaw2Digit.h"
#include "BmnZDCRaw2Digit.h"
#include "BmnScWallRaw2Digit.h"
#include "BmnFHCalRaw2Digit.h"
#include "BmnHodoRaw2Digit.h"
#include "BmnNdetRaw2Digit.h"
#include "BmnECALRaw2Digit.h"
#include "BmnLANDRaw2Digit.h"
#include "BmnTofCalRaw2Digit.h"
#include "BmnGemRaw2Digit.h"
#include "BmnTof2Raw2DigitNew.h"
#include "BmnTof1Raw2Digit.h"
#include "BmnSiliconRaw2Digit.h"
#include "BmnRawDataDecoder.h"
#include "BmnSlewingTOF700.h"
#include "BmnTrigRaw2Digit.h"
#include "BmnCscRaw2Digit.h"
#include "BmnProfRaw2Digit.h"
#include "BmnProfAsic2Raw.h"
#include "BmnMscRaw2Digit.h"
#include "WfmProcessor.h"
#include "PronyFitter.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BmnAdcProcessor(void *p = nullptr);
   static void *newArray_BmnAdcProcessor(Long_t size, void *p);
   static void delete_BmnAdcProcessor(void *p);
   static void deleteArray_BmnAdcProcessor(void *p);
   static void destruct_BmnAdcProcessor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnAdcProcessor*)
   {
      ::BmnAdcProcessor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnAdcProcessor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnAdcProcessor", ::BmnAdcProcessor::Class_Version(), "BmnAdcProcessor.h", 42,
                  typeid(::BmnAdcProcessor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnAdcProcessor::Dictionary, isa_proxy, 4,
                  sizeof(::BmnAdcProcessor) );
      instance.SetNew(&new_BmnAdcProcessor);
      instance.SetNewArray(&newArray_BmnAdcProcessor);
      instance.SetDelete(&delete_BmnAdcProcessor);
      instance.SetDeleteArray(&deleteArray_BmnAdcProcessor);
      instance.SetDestructor(&destruct_BmnAdcProcessor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnAdcProcessor*)
   {
      return GenerateInitInstanceLocal((::BmnAdcProcessor*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnAdcProcessor*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnDchRaw2Digit(void *p = nullptr);
   static void *newArray_BmnDchRaw2Digit(Long_t size, void *p);
   static void delete_BmnDchRaw2Digit(void *p);
   static void deleteArray_BmnDchRaw2Digit(void *p);
   static void destruct_BmnDchRaw2Digit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnDchRaw2Digit*)
   {
      ::BmnDchRaw2Digit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnDchRaw2Digit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnDchRaw2Digit", ::BmnDchRaw2Digit::Class_Version(), "BmnDchRaw2Digit.h", 19,
                  typeid(::BmnDchRaw2Digit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnDchRaw2Digit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnDchRaw2Digit) );
      instance.SetNew(&new_BmnDchRaw2Digit);
      instance.SetNewArray(&newArray_BmnDchRaw2Digit);
      instance.SetDelete(&delete_BmnDchRaw2Digit);
      instance.SetDeleteArray(&deleteArray_BmnDchRaw2Digit);
      instance.SetDestructor(&destruct_BmnDchRaw2Digit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnDchRaw2Digit*)
   {
      return GenerateInitInstanceLocal((::BmnDchRaw2Digit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnDchRaw2Digit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMwpcRaw2Digit(void *p = nullptr);
   static void *newArray_BmnMwpcRaw2Digit(Long_t size, void *p);
   static void delete_BmnMwpcRaw2Digit(void *p);
   static void deleteArray_BmnMwpcRaw2Digit(void *p);
   static void destruct_BmnMwpcRaw2Digit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMwpcRaw2Digit*)
   {
      ::BmnMwpcRaw2Digit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMwpcRaw2Digit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMwpcRaw2Digit", ::BmnMwpcRaw2Digit::Class_Version(), "BmnMwpcRaw2Digit.h", 25,
                  typeid(::BmnMwpcRaw2Digit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMwpcRaw2Digit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMwpcRaw2Digit) );
      instance.SetNew(&new_BmnMwpcRaw2Digit);
      instance.SetNewArray(&newArray_BmnMwpcRaw2Digit);
      instance.SetDelete(&delete_BmnMwpcRaw2Digit);
      instance.SetDeleteArray(&deleteArray_BmnMwpcRaw2Digit);
      instance.SetDestructor(&destruct_BmnMwpcRaw2Digit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMwpcRaw2Digit*)
   {
      return GenerateInitInstanceLocal((::BmnMwpcRaw2Digit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMwpcRaw2Digit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnZDCRaw2Digit(void *p = nullptr);
   static void *newArray_BmnZDCRaw2Digit(Long_t size, void *p);
   static void delete_BmnZDCRaw2Digit(void *p);
   static void deleteArray_BmnZDCRaw2Digit(void *p);
   static void destruct_BmnZDCRaw2Digit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnZDCRaw2Digit*)
   {
      ::BmnZDCRaw2Digit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnZDCRaw2Digit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnZDCRaw2Digit", ::BmnZDCRaw2Digit::Class_Version(), "BmnZDCRaw2Digit.h", 46,
                  typeid(::BmnZDCRaw2Digit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnZDCRaw2Digit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnZDCRaw2Digit) );
      instance.SetNew(&new_BmnZDCRaw2Digit);
      instance.SetNewArray(&newArray_BmnZDCRaw2Digit);
      instance.SetDelete(&delete_BmnZDCRaw2Digit);
      instance.SetDeleteArray(&deleteArray_BmnZDCRaw2Digit);
      instance.SetDestructor(&destruct_BmnZDCRaw2Digit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnZDCRaw2Digit*)
   {
      return GenerateInitInstanceLocal((::BmnZDCRaw2Digit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnZDCRaw2Digit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *PsdSignalFittingcLcLPronyFitter_Dictionary();
   static void PsdSignalFittingcLcLPronyFitter_TClassManip(TClass*);
   static void *new_PsdSignalFittingcLcLPronyFitter(void *p = nullptr);
   static void *newArray_PsdSignalFittingcLcLPronyFitter(Long_t size, void *p);
   static void delete_PsdSignalFittingcLcLPronyFitter(void *p);
   static void deleteArray_PsdSignalFittingcLcLPronyFitter(void *p);
   static void destruct_PsdSignalFittingcLcLPronyFitter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PsdSignalFitting::PronyFitter*)
   {
      ::PsdSignalFitting::PronyFitter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::PsdSignalFitting::PronyFitter));
      static ::ROOT::TGenericClassInfo 
         instance("PsdSignalFitting::PronyFitter", "PronyFitter.h", 25,
                  typeid(::PsdSignalFitting::PronyFitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &PsdSignalFittingcLcLPronyFitter_Dictionary, isa_proxy, 0,
                  sizeof(::PsdSignalFitting::PronyFitter) );
      instance.SetNew(&new_PsdSignalFittingcLcLPronyFitter);
      instance.SetNewArray(&newArray_PsdSignalFittingcLcLPronyFitter);
      instance.SetDelete(&delete_PsdSignalFittingcLcLPronyFitter);
      instance.SetDeleteArray(&deleteArray_PsdSignalFittingcLcLPronyFitter);
      instance.SetDestructor(&destruct_PsdSignalFittingcLcLPronyFitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PsdSignalFitting::PronyFitter*)
   {
      return GenerateInitInstanceLocal((::PsdSignalFitting::PronyFitter*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::PsdSignalFitting::PronyFitter*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *PsdSignalFittingcLcLPronyFitter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::PsdSignalFitting::PronyFitter*)nullptr)->GetClass();
      PsdSignalFittingcLcLPronyFitter_TClassManip(theClass);
   return theClass;
   }

   static void PsdSignalFittingcLcLPronyFitter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_WfmProcessor(void *p = nullptr);
   static void *newArray_WfmProcessor(Long_t size, void *p);
   static void delete_WfmProcessor(void *p);
   static void deleteArray_WfmProcessor(void *p);
   static void destruct_WfmProcessor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::WfmProcessor*)
   {
      ::WfmProcessor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::WfmProcessor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("WfmProcessor", ::WfmProcessor::Class_Version(), "WfmProcessor.h", 11,
                  typeid(::WfmProcessor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::WfmProcessor::Dictionary, isa_proxy, 4,
                  sizeof(::WfmProcessor) );
      instance.SetNew(&new_WfmProcessor);
      instance.SetNewArray(&newArray_WfmProcessor);
      instance.SetDelete(&delete_WfmProcessor);
      instance.SetDeleteArray(&deleteArray_WfmProcessor);
      instance.SetDestructor(&destruct_WfmProcessor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::WfmProcessor*)
   {
      return GenerateInitInstanceLocal((::WfmProcessor*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::WfmProcessor*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnScWallRaw2Digit(void *p = nullptr);
   static void *newArray_BmnScWallRaw2Digit(Long_t size, void *p);
   static void delete_BmnScWallRaw2Digit(void *p);
   static void deleteArray_BmnScWallRaw2Digit(void *p);
   static void destruct_BmnScWallRaw2Digit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnScWallRaw2Digit*)
   {
      ::BmnScWallRaw2Digit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnScWallRaw2Digit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnScWallRaw2Digit", ::BmnScWallRaw2Digit::Class_Version(), "BmnScWallRaw2Digit.h", 21,
                  typeid(::BmnScWallRaw2Digit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnScWallRaw2Digit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnScWallRaw2Digit) );
      instance.SetNew(&new_BmnScWallRaw2Digit);
      instance.SetNewArray(&newArray_BmnScWallRaw2Digit);
      instance.SetDelete(&delete_BmnScWallRaw2Digit);
      instance.SetDeleteArray(&deleteArray_BmnScWallRaw2Digit);
      instance.SetDestructor(&destruct_BmnScWallRaw2Digit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnScWallRaw2Digit*)
   {
      return GenerateInitInstanceLocal((::BmnScWallRaw2Digit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnScWallRaw2Digit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnFHCalRaw2Digit(void *p = nullptr);
   static void *newArray_BmnFHCalRaw2Digit(Long_t size, void *p);
   static void delete_BmnFHCalRaw2Digit(void *p);
   static void deleteArray_BmnFHCalRaw2Digit(void *p);
   static void destruct_BmnFHCalRaw2Digit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFHCalRaw2Digit*)
   {
      ::BmnFHCalRaw2Digit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnFHCalRaw2Digit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnFHCalRaw2Digit", ::BmnFHCalRaw2Digit::Class_Version(), "BmnFHCalRaw2Digit.h", 21,
                  typeid(::BmnFHCalRaw2Digit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnFHCalRaw2Digit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnFHCalRaw2Digit) );
      instance.SetNew(&new_BmnFHCalRaw2Digit);
      instance.SetNewArray(&newArray_BmnFHCalRaw2Digit);
      instance.SetDelete(&delete_BmnFHCalRaw2Digit);
      instance.SetDeleteArray(&deleteArray_BmnFHCalRaw2Digit);
      instance.SetDestructor(&destruct_BmnFHCalRaw2Digit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFHCalRaw2Digit*)
   {
      return GenerateInitInstanceLocal((::BmnFHCalRaw2Digit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFHCalRaw2Digit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnHodoRaw2Digit(void *p = nullptr);
   static void *newArray_BmnHodoRaw2Digit(Long_t size, void *p);
   static void delete_BmnHodoRaw2Digit(void *p);
   static void deleteArray_BmnHodoRaw2Digit(void *p);
   static void destruct_BmnHodoRaw2Digit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHodoRaw2Digit*)
   {
      ::BmnHodoRaw2Digit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHodoRaw2Digit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHodoRaw2Digit", ::BmnHodoRaw2Digit::Class_Version(), "BmnHodoRaw2Digit.h", 22,
                  typeid(::BmnHodoRaw2Digit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHodoRaw2Digit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHodoRaw2Digit) );
      instance.SetNew(&new_BmnHodoRaw2Digit);
      instance.SetNewArray(&newArray_BmnHodoRaw2Digit);
      instance.SetDelete(&delete_BmnHodoRaw2Digit);
      instance.SetDeleteArray(&deleteArray_BmnHodoRaw2Digit);
      instance.SetDestructor(&destruct_BmnHodoRaw2Digit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHodoRaw2Digit*)
   {
      return GenerateInitInstanceLocal((::BmnHodoRaw2Digit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHodoRaw2Digit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnNdetRaw2Digit(void *p = nullptr);
   static void *newArray_BmnNdetRaw2Digit(Long_t size, void *p);
   static void delete_BmnNdetRaw2Digit(void *p);
   static void deleteArray_BmnNdetRaw2Digit(void *p);
   static void destruct_BmnNdetRaw2Digit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnNdetRaw2Digit*)
   {
      ::BmnNdetRaw2Digit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnNdetRaw2Digit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnNdetRaw2Digit", ::BmnNdetRaw2Digit::Class_Version(), "BmnNdetRaw2Digit.h", 24,
                  typeid(::BmnNdetRaw2Digit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnNdetRaw2Digit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnNdetRaw2Digit) );
      instance.SetNew(&new_BmnNdetRaw2Digit);
      instance.SetNewArray(&newArray_BmnNdetRaw2Digit);
      instance.SetDelete(&delete_BmnNdetRaw2Digit);
      instance.SetDeleteArray(&deleteArray_BmnNdetRaw2Digit);
      instance.SetDestructor(&destruct_BmnNdetRaw2Digit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnNdetRaw2Digit*)
   {
      return GenerateInitInstanceLocal((::BmnNdetRaw2Digit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnNdetRaw2Digit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnECALRaw2Digit(void *p = nullptr);
   static void *newArray_BmnECALRaw2Digit(Long_t size, void *p);
   static void delete_BmnECALRaw2Digit(void *p);
   static void deleteArray_BmnECALRaw2Digit(void *p);
   static void destruct_BmnECALRaw2Digit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnECALRaw2Digit*)
   {
      ::BmnECALRaw2Digit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnECALRaw2Digit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnECALRaw2Digit", ::BmnECALRaw2Digit::Class_Version(), "BmnECALRaw2Digit.h", 16,
                  typeid(::BmnECALRaw2Digit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnECALRaw2Digit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnECALRaw2Digit) );
      instance.SetNew(&new_BmnECALRaw2Digit);
      instance.SetNewArray(&newArray_BmnECALRaw2Digit);
      instance.SetDelete(&delete_BmnECALRaw2Digit);
      instance.SetDeleteArray(&deleteArray_BmnECALRaw2Digit);
      instance.SetDestructor(&destruct_BmnECALRaw2Digit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnECALRaw2Digit*)
   {
      return GenerateInitInstanceLocal((::BmnECALRaw2Digit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnECALRaw2Digit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnLANDRaw2Digit(void *p);
   static void deleteArray_BmnLANDRaw2Digit(void *p);
   static void destruct_BmnLANDRaw2Digit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnLANDRaw2Digit*)
   {
      ::BmnLANDRaw2Digit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnLANDRaw2Digit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnLANDRaw2Digit", ::BmnLANDRaw2Digit::Class_Version(), "BmnLANDRaw2Digit.h", 15,
                  typeid(::BmnLANDRaw2Digit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnLANDRaw2Digit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnLANDRaw2Digit) );
      instance.SetDelete(&delete_BmnLANDRaw2Digit);
      instance.SetDeleteArray(&deleteArray_BmnLANDRaw2Digit);
      instance.SetDestructor(&destruct_BmnLANDRaw2Digit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnLANDRaw2Digit*)
   {
      return GenerateInitInstanceLocal((::BmnLANDRaw2Digit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnLANDRaw2Digit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnTofCalRaw2Digit(void *p);
   static void deleteArray_BmnTofCalRaw2Digit(void *p);
   static void destruct_BmnTofCalRaw2Digit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTofCalRaw2Digit*)
   {
      ::BmnTofCalRaw2Digit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTofCalRaw2Digit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTofCalRaw2Digit", ::BmnTofCalRaw2Digit::Class_Version(), "BmnTofCalRaw2Digit.h", 16,
                  typeid(::BmnTofCalRaw2Digit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTofCalRaw2Digit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTofCalRaw2Digit) );
      instance.SetDelete(&delete_BmnTofCalRaw2Digit);
      instance.SetDeleteArray(&deleteArray_BmnTofCalRaw2Digit);
      instance.SetDestructor(&destruct_BmnTofCalRaw2Digit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTofCalRaw2Digit*)
   {
      return GenerateInitInstanceLocal((::BmnTofCalRaw2Digit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTofCalRaw2Digit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnGemRaw2Digit(void *p = nullptr);
   static void *newArray_BmnGemRaw2Digit(Long_t size, void *p);
   static void delete_BmnGemRaw2Digit(void *p);
   static void deleteArray_BmnGemRaw2Digit(void *p);
   static void destruct_BmnGemRaw2Digit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemRaw2Digit*)
   {
      ::BmnGemRaw2Digit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemRaw2Digit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemRaw2Digit", ::BmnGemRaw2Digit::Class_Version(), "BmnGemRaw2Digit.h", 77,
                  typeid(::BmnGemRaw2Digit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemRaw2Digit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemRaw2Digit) );
      instance.SetNew(&new_BmnGemRaw2Digit);
      instance.SetNewArray(&newArray_BmnGemRaw2Digit);
      instance.SetDelete(&delete_BmnGemRaw2Digit);
      instance.SetDeleteArray(&deleteArray_BmnGemRaw2Digit);
      instance.SetDestructor(&destruct_BmnGemRaw2Digit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemRaw2Digit*)
   {
      return GenerateInitInstanceLocal((::BmnGemRaw2Digit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemRaw2Digit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTof2Raw2DigitNew(void *p = nullptr);
   static void *newArray_BmnTof2Raw2DigitNew(Long_t size, void *p);
   static void delete_BmnTof2Raw2DigitNew(void *p);
   static void deleteArray_BmnTof2Raw2DigitNew(void *p);
   static void destruct_BmnTof2Raw2DigitNew(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTof2Raw2DigitNew*)
   {
      ::BmnTof2Raw2DigitNew *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTof2Raw2DigitNew >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTof2Raw2DigitNew", ::BmnTof2Raw2DigitNew::Class_Version(), "BmnTof2Raw2DigitNew.h", 50,
                  typeid(::BmnTof2Raw2DigitNew), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTof2Raw2DigitNew::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTof2Raw2DigitNew) );
      instance.SetNew(&new_BmnTof2Raw2DigitNew);
      instance.SetNewArray(&newArray_BmnTof2Raw2DigitNew);
      instance.SetDelete(&delete_BmnTof2Raw2DigitNew);
      instance.SetDeleteArray(&deleteArray_BmnTof2Raw2DigitNew);
      instance.SetDestructor(&destruct_BmnTof2Raw2DigitNew);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTof2Raw2DigitNew*)
   {
      return GenerateInitInstanceLocal((::BmnTof2Raw2DigitNew*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTof2Raw2DigitNew*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTof1Raw2Digit(void *p = nullptr);
   static void *newArray_BmnTof1Raw2Digit(Long_t size, void *p);
   static void delete_BmnTof1Raw2Digit(void *p);
   static void deleteArray_BmnTof1Raw2Digit(void *p);
   static void destruct_BmnTof1Raw2Digit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTof1Raw2Digit*)
   {
      ::BmnTof1Raw2Digit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTof1Raw2Digit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTof1Raw2Digit", ::BmnTof1Raw2Digit::Class_Version(), "BmnTof1Raw2Digit.h", 51,
                  typeid(::BmnTof1Raw2Digit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTof1Raw2Digit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTof1Raw2Digit) );
      instance.SetNew(&new_BmnTof1Raw2Digit);
      instance.SetNewArray(&newArray_BmnTof1Raw2Digit);
      instance.SetDelete(&delete_BmnTof1Raw2Digit);
      instance.SetDeleteArray(&deleteArray_BmnTof1Raw2Digit);
      instance.SetDestructor(&destruct_BmnTof1Raw2Digit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTof1Raw2Digit*)
   {
      return GenerateInitInstanceLocal((::BmnTof1Raw2Digit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTof1Raw2Digit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiliconRaw2Digit(void *p = nullptr);
   static void *newArray_BmnSiliconRaw2Digit(Long_t size, void *p);
   static void delete_BmnSiliconRaw2Digit(void *p);
   static void deleteArray_BmnSiliconRaw2Digit(void *p);
   static void destruct_BmnSiliconRaw2Digit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiliconRaw2Digit*)
   {
      ::BmnSiliconRaw2Digit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiliconRaw2Digit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiliconRaw2Digit", ::BmnSiliconRaw2Digit::Class_Version(), "BmnSiliconRaw2Digit.h", 36,
                  typeid(::BmnSiliconRaw2Digit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiliconRaw2Digit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiliconRaw2Digit) );
      instance.SetNew(&new_BmnSiliconRaw2Digit);
      instance.SetNewArray(&newArray_BmnSiliconRaw2Digit);
      instance.SetDelete(&delete_BmnSiliconRaw2Digit);
      instance.SetDeleteArray(&deleteArray_BmnSiliconRaw2Digit);
      instance.SetDestructor(&destruct_BmnSiliconRaw2Digit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiliconRaw2Digit*)
   {
      return GenerateInitInstanceLocal((::BmnSiliconRaw2Digit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiliconRaw2Digit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTrigRaw2Digit(void *p = nullptr);
   static void *newArray_BmnTrigRaw2Digit(Long_t size, void *p);
   static void delete_BmnTrigRaw2Digit(void *p);
   static void deleteArray_BmnTrigRaw2Digit(void *p);
   static void destruct_BmnTrigRaw2Digit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTrigRaw2Digit*)
   {
      ::BmnTrigRaw2Digit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTrigRaw2Digit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTrigRaw2Digit", ::BmnTrigRaw2Digit::Class_Version(), "BmnTrigRaw2Digit.h", 64,
                  typeid(::BmnTrigRaw2Digit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTrigRaw2Digit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTrigRaw2Digit) );
      instance.SetNew(&new_BmnTrigRaw2Digit);
      instance.SetNewArray(&newArray_BmnTrigRaw2Digit);
      instance.SetDelete(&delete_BmnTrigRaw2Digit);
      instance.SetDeleteArray(&deleteArray_BmnTrigRaw2Digit);
      instance.SetDestructor(&destruct_BmnTrigRaw2Digit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTrigRaw2Digit*)
   {
      return GenerateInitInstanceLocal((::BmnTrigRaw2Digit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTrigRaw2Digit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnCscRaw2Digit(void *p = nullptr);
   static void *newArray_BmnCscRaw2Digit(Long_t size, void *p);
   static void delete_BmnCscRaw2Digit(void *p);
   static void deleteArray_BmnCscRaw2Digit(void *p);
   static void destruct_BmnCscRaw2Digit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnCscRaw2Digit*)
   {
      ::BmnCscRaw2Digit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnCscRaw2Digit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnCscRaw2Digit", ::BmnCscRaw2Digit::Class_Version(), "BmnCscRaw2Digit.h", 33,
                  typeid(::BmnCscRaw2Digit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnCscRaw2Digit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnCscRaw2Digit) );
      instance.SetNew(&new_BmnCscRaw2Digit);
      instance.SetNewArray(&newArray_BmnCscRaw2Digit);
      instance.SetDelete(&delete_BmnCscRaw2Digit);
      instance.SetDeleteArray(&deleteArray_BmnCscRaw2Digit);
      instance.SetDestructor(&destruct_BmnCscRaw2Digit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnCscRaw2Digit*)
   {
      return GenerateInitInstanceLocal((::BmnCscRaw2Digit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnCscRaw2Digit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMscRaw2Digit(void *p = nullptr);
   static void *newArray_BmnMscRaw2Digit(Long_t size, void *p);
   static void delete_BmnMscRaw2Digit(void *p);
   static void deleteArray_BmnMscRaw2Digit(void *p);
   static void destruct_BmnMscRaw2Digit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMscRaw2Digit*)
   {
      ::BmnMscRaw2Digit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMscRaw2Digit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMscRaw2Digit", ::BmnMscRaw2Digit::Class_Version(), "BmnMscRaw2Digit.h", 51,
                  typeid(::BmnMscRaw2Digit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMscRaw2Digit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMscRaw2Digit) );
      instance.SetNew(&new_BmnMscRaw2Digit);
      instance.SetNewArray(&newArray_BmnMscRaw2Digit);
      instance.SetDelete(&delete_BmnMscRaw2Digit);
      instance.SetDeleteArray(&deleteArray_BmnMscRaw2Digit);
      instance.SetDestructor(&destruct_BmnMscRaw2Digit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMscRaw2Digit*)
   {
      return GenerateInitInstanceLocal((::BmnMscRaw2Digit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMscRaw2Digit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnRawDataDecoder_Dictionary();
   static void BmnRawDataDecoder_TClassManip(TClass*);
   static void *new_BmnRawDataDecoder(void *p = nullptr);
   static void *newArray_BmnRawDataDecoder(Long_t size, void *p);
   static void delete_BmnRawDataDecoder(void *p);
   static void deleteArray_BmnRawDataDecoder(void *p);
   static void destruct_BmnRawDataDecoder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnRawDataDecoder*)
   {
      ::BmnRawDataDecoder *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnRawDataDecoder));
      static ::ROOT::TGenericClassInfo 
         instance("BmnRawDataDecoder", "BmnRawDataDecoder.h", 45,
                  typeid(::BmnRawDataDecoder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnRawDataDecoder_Dictionary, isa_proxy, 4,
                  sizeof(::BmnRawDataDecoder) );
      instance.SetNew(&new_BmnRawDataDecoder);
      instance.SetNewArray(&newArray_BmnRawDataDecoder);
      instance.SetDelete(&delete_BmnRawDataDecoder);
      instance.SetDeleteArray(&deleteArray_BmnRawDataDecoder);
      instance.SetDestructor(&destruct_BmnRawDataDecoder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnRawDataDecoder*)
   {
      return GenerateInitInstanceLocal((::BmnRawDataDecoder*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnRawDataDecoder*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnRawDataDecoder_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnRawDataDecoder*)nullptr)->GetClass();
      BmnRawDataDecoder_TClassManip(theClass);
   return theClass;
   }

   static void BmnRawDataDecoder_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnSlewingTOF700_Dictionary();
   static void BmnSlewingTOF700_TClassManip(TClass*);
   static void *new_BmnSlewingTOF700(void *p = nullptr);
   static void *newArray_BmnSlewingTOF700(Long_t size, void *p);
   static void delete_BmnSlewingTOF700(void *p);
   static void deleteArray_BmnSlewingTOF700(void *p);
   static void destruct_BmnSlewingTOF700(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSlewingTOF700*)
   {
      ::BmnSlewingTOF700 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnSlewingTOF700));
      static ::ROOT::TGenericClassInfo 
         instance("BmnSlewingTOF700", "BmnSlewingTOF700.h", 55,
                  typeid(::BmnSlewingTOF700), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnSlewingTOF700_Dictionary, isa_proxy, 4,
                  sizeof(::BmnSlewingTOF700) );
      instance.SetNew(&new_BmnSlewingTOF700);
      instance.SetNewArray(&newArray_BmnSlewingTOF700);
      instance.SetDelete(&delete_BmnSlewingTOF700);
      instance.SetDeleteArray(&deleteArray_BmnSlewingTOF700);
      instance.SetDestructor(&destruct_BmnSlewingTOF700);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSlewingTOF700*)
   {
      return GenerateInitInstanceLocal((::BmnSlewingTOF700*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSlewingTOF700*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnSlewingTOF700_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnSlewingTOF700*)nullptr)->GetClass();
      BmnSlewingTOF700_TClassManip(theClass);
   return theClass;
   }

   static void BmnSlewingTOF700_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnProfRaw2Digit(void *p = nullptr);
   static void *newArray_BmnProfRaw2Digit(Long_t size, void *p);
   static void delete_BmnProfRaw2Digit(void *p);
   static void deleteArray_BmnProfRaw2Digit(void *p);
   static void destruct_BmnProfRaw2Digit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnProfRaw2Digit*)
   {
      ::BmnProfRaw2Digit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnProfRaw2Digit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnProfRaw2Digit", ::BmnProfRaw2Digit::Class_Version(), "BmnProfRaw2Digit.h", 41,
                  typeid(::BmnProfRaw2Digit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnProfRaw2Digit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnProfRaw2Digit) );
      instance.SetNew(&new_BmnProfRaw2Digit);
      instance.SetNewArray(&newArray_BmnProfRaw2Digit);
      instance.SetDelete(&delete_BmnProfRaw2Digit);
      instance.SetDeleteArray(&deleteArray_BmnProfRaw2Digit);
      instance.SetDestructor(&destruct_BmnProfRaw2Digit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnProfRaw2Digit*)
   {
      return GenerateInitInstanceLocal((::BmnProfRaw2Digit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnProfRaw2Digit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnProfAsic2Raw(void *p = nullptr);
   static void *newArray_BmnProfAsic2Raw(Long_t size, void *p);
   static void delete_BmnProfAsic2Raw(void *p);
   static void deleteArray_BmnProfAsic2Raw(void *p);
   static void destruct_BmnProfAsic2Raw(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnProfAsic2Raw*)
   {
      ::BmnProfAsic2Raw *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnProfAsic2Raw >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnProfAsic2Raw", ::BmnProfAsic2Raw::Class_Version(), "BmnProfAsic2Raw.h", 22,
                  typeid(::BmnProfAsic2Raw), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnProfAsic2Raw::Dictionary, isa_proxy, 4,
                  sizeof(::BmnProfAsic2Raw) );
      instance.SetNew(&new_BmnProfAsic2Raw);
      instance.SetNewArray(&newArray_BmnProfAsic2Raw);
      instance.SetDelete(&delete_BmnProfAsic2Raw);
      instance.SetDeleteArray(&deleteArray_BmnProfAsic2Raw);
      instance.SetDestructor(&destruct_BmnProfAsic2Raw);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnProfAsic2Raw*)
   {
      return GenerateInitInstanceLocal((::BmnProfAsic2Raw*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnProfAsic2Raw*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnAdcProcessor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnAdcProcessor::Class_Name()
{
   return "BmnAdcProcessor";
}

//______________________________________________________________________________
const char *BmnAdcProcessor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnAdcProcessor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnAdcProcessor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnAdcProcessor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnAdcProcessor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnAdcProcessor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnAdcProcessor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnAdcProcessor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnDchRaw2Digit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnDchRaw2Digit::Class_Name()
{
   return "BmnDchRaw2Digit";
}

//______________________________________________________________________________
const char *BmnDchRaw2Digit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchRaw2Digit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnDchRaw2Digit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchRaw2Digit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnDchRaw2Digit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchRaw2Digit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnDchRaw2Digit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchRaw2Digit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMwpcRaw2Digit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMwpcRaw2Digit::Class_Name()
{
   return "BmnMwpcRaw2Digit";
}

//______________________________________________________________________________
const char *BmnMwpcRaw2Digit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcRaw2Digit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMwpcRaw2Digit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcRaw2Digit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMwpcRaw2Digit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcRaw2Digit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMwpcRaw2Digit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcRaw2Digit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnZDCRaw2Digit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnZDCRaw2Digit::Class_Name()
{
   return "BmnZDCRaw2Digit";
}

//______________________________________________________________________________
const char *BmnZDCRaw2Digit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZDCRaw2Digit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnZDCRaw2Digit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZDCRaw2Digit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnZDCRaw2Digit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZDCRaw2Digit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnZDCRaw2Digit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZDCRaw2Digit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr WfmProcessor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *WfmProcessor::Class_Name()
{
   return "WfmProcessor";
}

//______________________________________________________________________________
const char *WfmProcessor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::WfmProcessor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int WfmProcessor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::WfmProcessor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *WfmProcessor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::WfmProcessor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *WfmProcessor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::WfmProcessor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnScWallRaw2Digit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnScWallRaw2Digit::Class_Name()
{
   return "BmnScWallRaw2Digit";
}

//______________________________________________________________________________
const char *BmnScWallRaw2Digit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnScWallRaw2Digit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnScWallRaw2Digit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnScWallRaw2Digit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnScWallRaw2Digit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnScWallRaw2Digit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnScWallRaw2Digit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnScWallRaw2Digit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnFHCalRaw2Digit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnFHCalRaw2Digit::Class_Name()
{
   return "BmnFHCalRaw2Digit";
}

//______________________________________________________________________________
const char *BmnFHCalRaw2Digit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalRaw2Digit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnFHCalRaw2Digit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalRaw2Digit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnFHCalRaw2Digit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalRaw2Digit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnFHCalRaw2Digit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalRaw2Digit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHodoRaw2Digit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHodoRaw2Digit::Class_Name()
{
   return "BmnHodoRaw2Digit";
}

//______________________________________________________________________________
const char *BmnHodoRaw2Digit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHodoRaw2Digit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHodoRaw2Digit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHodoRaw2Digit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHodoRaw2Digit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHodoRaw2Digit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHodoRaw2Digit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHodoRaw2Digit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnNdetRaw2Digit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnNdetRaw2Digit::Class_Name()
{
   return "BmnNdetRaw2Digit";
}

//______________________________________________________________________________
const char *BmnNdetRaw2Digit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnNdetRaw2Digit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnNdetRaw2Digit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnNdetRaw2Digit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnNdetRaw2Digit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnNdetRaw2Digit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnNdetRaw2Digit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnNdetRaw2Digit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnECALRaw2Digit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnECALRaw2Digit::Class_Name()
{
   return "BmnECALRaw2Digit";
}

//______________________________________________________________________________
const char *BmnECALRaw2Digit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnECALRaw2Digit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnECALRaw2Digit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnECALRaw2Digit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnECALRaw2Digit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnECALRaw2Digit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnECALRaw2Digit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnECALRaw2Digit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnLANDRaw2Digit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnLANDRaw2Digit::Class_Name()
{
   return "BmnLANDRaw2Digit";
}

//______________________________________________________________________________
const char *BmnLANDRaw2Digit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnLANDRaw2Digit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnLANDRaw2Digit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnLANDRaw2Digit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnLANDRaw2Digit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnLANDRaw2Digit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnLANDRaw2Digit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnLANDRaw2Digit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTofCalRaw2Digit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTofCalRaw2Digit::Class_Name()
{
   return "BmnTofCalRaw2Digit";
}

//______________________________________________________________________________
const char *BmnTofCalRaw2Digit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTofCalRaw2Digit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTofCalRaw2Digit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTofCalRaw2Digit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTofCalRaw2Digit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTofCalRaw2Digit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTofCalRaw2Digit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTofCalRaw2Digit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemRaw2Digit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemRaw2Digit::Class_Name()
{
   return "BmnGemRaw2Digit";
}

//______________________________________________________________________________
const char *BmnGemRaw2Digit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemRaw2Digit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemRaw2Digit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemRaw2Digit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemRaw2Digit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemRaw2Digit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemRaw2Digit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemRaw2Digit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTof2Raw2DigitNew::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTof2Raw2DigitNew::Class_Name()
{
   return "BmnTof2Raw2DigitNew";
}

//______________________________________________________________________________
const char *BmnTof2Raw2DigitNew::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTof2Raw2DigitNew*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTof2Raw2DigitNew::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTof2Raw2DigitNew*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTof2Raw2DigitNew::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTof2Raw2DigitNew*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTof2Raw2DigitNew::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTof2Raw2DigitNew*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTof1Raw2Digit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTof1Raw2Digit::Class_Name()
{
   return "BmnTof1Raw2Digit";
}

//______________________________________________________________________________
const char *BmnTof1Raw2Digit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTof1Raw2Digit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTof1Raw2Digit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTof1Raw2Digit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTof1Raw2Digit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTof1Raw2Digit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTof1Raw2Digit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTof1Raw2Digit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiliconRaw2Digit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiliconRaw2Digit::Class_Name()
{
   return "BmnSiliconRaw2Digit";
}

//______________________________________________________________________________
const char *BmnSiliconRaw2Digit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconRaw2Digit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiliconRaw2Digit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconRaw2Digit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiliconRaw2Digit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconRaw2Digit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiliconRaw2Digit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconRaw2Digit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTrigRaw2Digit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTrigRaw2Digit::Class_Name()
{
   return "BmnTrigRaw2Digit";
}

//______________________________________________________________________________
const char *BmnTrigRaw2Digit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrigRaw2Digit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTrigRaw2Digit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrigRaw2Digit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTrigRaw2Digit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrigRaw2Digit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTrigRaw2Digit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrigRaw2Digit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnCscRaw2Digit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnCscRaw2Digit::Class_Name()
{
   return "BmnCscRaw2Digit";
}

//______________________________________________________________________________
const char *BmnCscRaw2Digit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCscRaw2Digit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnCscRaw2Digit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCscRaw2Digit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnCscRaw2Digit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCscRaw2Digit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnCscRaw2Digit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCscRaw2Digit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMscRaw2Digit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMscRaw2Digit::Class_Name()
{
   return "BmnMscRaw2Digit";
}

//______________________________________________________________________________
const char *BmnMscRaw2Digit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMscRaw2Digit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMscRaw2Digit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMscRaw2Digit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMscRaw2Digit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMscRaw2Digit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMscRaw2Digit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMscRaw2Digit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnProfRaw2Digit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnProfRaw2Digit::Class_Name()
{
   return "BmnProfRaw2Digit";
}

//______________________________________________________________________________
const char *BmnProfRaw2Digit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnProfRaw2Digit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnProfRaw2Digit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnProfRaw2Digit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnProfRaw2Digit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnProfRaw2Digit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnProfRaw2Digit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnProfRaw2Digit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnProfAsic2Raw::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnProfAsic2Raw::Class_Name()
{
   return "BmnProfAsic2Raw";
}

//______________________________________________________________________________
const char *BmnProfAsic2Raw::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnProfAsic2Raw*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnProfAsic2Raw::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnProfAsic2Raw*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnProfAsic2Raw::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnProfAsic2Raw*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnProfAsic2Raw::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnProfAsic2Raw*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnAdcProcessor::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnAdcProcessor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnAdcProcessor::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnAdcProcessor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnAdcProcessor(void *p) {
      return  p ? new(p) ::BmnAdcProcessor : new ::BmnAdcProcessor;
   }
   static void *newArray_BmnAdcProcessor(Long_t nElements, void *p) {
      return p ? new(p) ::BmnAdcProcessor[nElements] : new ::BmnAdcProcessor[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnAdcProcessor(void *p) {
      delete ((::BmnAdcProcessor*)p);
   }
   static void deleteArray_BmnAdcProcessor(void *p) {
      delete [] ((::BmnAdcProcessor*)p);
   }
   static void destruct_BmnAdcProcessor(void *p) {
      typedef ::BmnAdcProcessor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnAdcProcessor

//______________________________________________________________________________
void BmnDchRaw2Digit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnDchRaw2Digit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnDchRaw2Digit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnDchRaw2Digit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnDchRaw2Digit(void *p) {
      return  p ? new(p) ::BmnDchRaw2Digit : new ::BmnDchRaw2Digit;
   }
   static void *newArray_BmnDchRaw2Digit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnDchRaw2Digit[nElements] : new ::BmnDchRaw2Digit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnDchRaw2Digit(void *p) {
      delete ((::BmnDchRaw2Digit*)p);
   }
   static void deleteArray_BmnDchRaw2Digit(void *p) {
      delete [] ((::BmnDchRaw2Digit*)p);
   }
   static void destruct_BmnDchRaw2Digit(void *p) {
      typedef ::BmnDchRaw2Digit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnDchRaw2Digit

//______________________________________________________________________________
void BmnMwpcRaw2Digit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMwpcRaw2Digit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMwpcRaw2Digit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMwpcRaw2Digit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMwpcRaw2Digit(void *p) {
      return  p ? new(p) ::BmnMwpcRaw2Digit : new ::BmnMwpcRaw2Digit;
   }
   static void *newArray_BmnMwpcRaw2Digit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMwpcRaw2Digit[nElements] : new ::BmnMwpcRaw2Digit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMwpcRaw2Digit(void *p) {
      delete ((::BmnMwpcRaw2Digit*)p);
   }
   static void deleteArray_BmnMwpcRaw2Digit(void *p) {
      delete [] ((::BmnMwpcRaw2Digit*)p);
   }
   static void destruct_BmnMwpcRaw2Digit(void *p) {
      typedef ::BmnMwpcRaw2Digit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMwpcRaw2Digit

//______________________________________________________________________________
void BmnZDCRaw2Digit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnZDCRaw2Digit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnZDCRaw2Digit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnZDCRaw2Digit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnZDCRaw2Digit(void *p) {
      return  p ? new(p) ::BmnZDCRaw2Digit : new ::BmnZDCRaw2Digit;
   }
   static void *newArray_BmnZDCRaw2Digit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnZDCRaw2Digit[nElements] : new ::BmnZDCRaw2Digit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnZDCRaw2Digit(void *p) {
      delete ((::BmnZDCRaw2Digit*)p);
   }
   static void deleteArray_BmnZDCRaw2Digit(void *p) {
      delete [] ((::BmnZDCRaw2Digit*)p);
   }
   static void destruct_BmnZDCRaw2Digit(void *p) {
      typedef ::BmnZDCRaw2Digit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnZDCRaw2Digit

namespace ROOT {
   // Wrappers around operator new
   static void *new_PsdSignalFittingcLcLPronyFitter(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::PsdSignalFitting::PronyFitter : new ::PsdSignalFitting::PronyFitter;
   }
   static void *newArray_PsdSignalFittingcLcLPronyFitter(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::PsdSignalFitting::PronyFitter[nElements] : new ::PsdSignalFitting::PronyFitter[nElements];
   }
   // Wrapper around operator delete
   static void delete_PsdSignalFittingcLcLPronyFitter(void *p) {
      delete ((::PsdSignalFitting::PronyFitter*)p);
   }
   static void deleteArray_PsdSignalFittingcLcLPronyFitter(void *p) {
      delete [] ((::PsdSignalFitting::PronyFitter*)p);
   }
   static void destruct_PsdSignalFittingcLcLPronyFitter(void *p) {
      typedef ::PsdSignalFitting::PronyFitter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::PsdSignalFitting::PronyFitter

//______________________________________________________________________________
void WfmProcessor::Streamer(TBuffer &R__b)
{
   // Stream an object of class WfmProcessor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(WfmProcessor::Class(),this);
   } else {
      R__b.WriteClassBuffer(WfmProcessor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_WfmProcessor(void *p) {
      return  p ? new(p) ::WfmProcessor : new ::WfmProcessor;
   }
   static void *newArray_WfmProcessor(Long_t nElements, void *p) {
      return p ? new(p) ::WfmProcessor[nElements] : new ::WfmProcessor[nElements];
   }
   // Wrapper around operator delete
   static void delete_WfmProcessor(void *p) {
      delete ((::WfmProcessor*)p);
   }
   static void deleteArray_WfmProcessor(void *p) {
      delete [] ((::WfmProcessor*)p);
   }
   static void destruct_WfmProcessor(void *p) {
      typedef ::WfmProcessor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::WfmProcessor

//______________________________________________________________________________
void BmnScWallRaw2Digit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnScWallRaw2Digit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnScWallRaw2Digit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnScWallRaw2Digit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnScWallRaw2Digit(void *p) {
      return  p ? new(p) ::BmnScWallRaw2Digit : new ::BmnScWallRaw2Digit;
   }
   static void *newArray_BmnScWallRaw2Digit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnScWallRaw2Digit[nElements] : new ::BmnScWallRaw2Digit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnScWallRaw2Digit(void *p) {
      delete ((::BmnScWallRaw2Digit*)p);
   }
   static void deleteArray_BmnScWallRaw2Digit(void *p) {
      delete [] ((::BmnScWallRaw2Digit*)p);
   }
   static void destruct_BmnScWallRaw2Digit(void *p) {
      typedef ::BmnScWallRaw2Digit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnScWallRaw2Digit

//______________________________________________________________________________
void BmnFHCalRaw2Digit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnFHCalRaw2Digit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnFHCalRaw2Digit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnFHCalRaw2Digit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnFHCalRaw2Digit(void *p) {
      return  p ? new(p) ::BmnFHCalRaw2Digit : new ::BmnFHCalRaw2Digit;
   }
   static void *newArray_BmnFHCalRaw2Digit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnFHCalRaw2Digit[nElements] : new ::BmnFHCalRaw2Digit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnFHCalRaw2Digit(void *p) {
      delete ((::BmnFHCalRaw2Digit*)p);
   }
   static void deleteArray_BmnFHCalRaw2Digit(void *p) {
      delete [] ((::BmnFHCalRaw2Digit*)p);
   }
   static void destruct_BmnFHCalRaw2Digit(void *p) {
      typedef ::BmnFHCalRaw2Digit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFHCalRaw2Digit

//______________________________________________________________________________
void BmnHodoRaw2Digit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHodoRaw2Digit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHodoRaw2Digit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHodoRaw2Digit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnHodoRaw2Digit(void *p) {
      return  p ? new(p) ::BmnHodoRaw2Digit : new ::BmnHodoRaw2Digit;
   }
   static void *newArray_BmnHodoRaw2Digit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnHodoRaw2Digit[nElements] : new ::BmnHodoRaw2Digit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnHodoRaw2Digit(void *p) {
      delete ((::BmnHodoRaw2Digit*)p);
   }
   static void deleteArray_BmnHodoRaw2Digit(void *p) {
      delete [] ((::BmnHodoRaw2Digit*)p);
   }
   static void destruct_BmnHodoRaw2Digit(void *p) {
      typedef ::BmnHodoRaw2Digit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHodoRaw2Digit

//______________________________________________________________________________
void BmnNdetRaw2Digit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnNdetRaw2Digit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnNdetRaw2Digit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnNdetRaw2Digit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnNdetRaw2Digit(void *p) {
      return  p ? new(p) ::BmnNdetRaw2Digit : new ::BmnNdetRaw2Digit;
   }
   static void *newArray_BmnNdetRaw2Digit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnNdetRaw2Digit[nElements] : new ::BmnNdetRaw2Digit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnNdetRaw2Digit(void *p) {
      delete ((::BmnNdetRaw2Digit*)p);
   }
   static void deleteArray_BmnNdetRaw2Digit(void *p) {
      delete [] ((::BmnNdetRaw2Digit*)p);
   }
   static void destruct_BmnNdetRaw2Digit(void *p) {
      typedef ::BmnNdetRaw2Digit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnNdetRaw2Digit

//______________________________________________________________________________
void BmnECALRaw2Digit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnECALRaw2Digit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnECALRaw2Digit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnECALRaw2Digit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnECALRaw2Digit(void *p) {
      return  p ? new(p) ::BmnECALRaw2Digit : new ::BmnECALRaw2Digit;
   }
   static void *newArray_BmnECALRaw2Digit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnECALRaw2Digit[nElements] : new ::BmnECALRaw2Digit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnECALRaw2Digit(void *p) {
      delete ((::BmnECALRaw2Digit*)p);
   }
   static void deleteArray_BmnECALRaw2Digit(void *p) {
      delete [] ((::BmnECALRaw2Digit*)p);
   }
   static void destruct_BmnECALRaw2Digit(void *p) {
      typedef ::BmnECALRaw2Digit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnECALRaw2Digit

//______________________________________________________________________________
void BmnLANDRaw2Digit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnLANDRaw2Digit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnLANDRaw2Digit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnLANDRaw2Digit::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnLANDRaw2Digit(void *p) {
      delete ((::BmnLANDRaw2Digit*)p);
   }
   static void deleteArray_BmnLANDRaw2Digit(void *p) {
      delete [] ((::BmnLANDRaw2Digit*)p);
   }
   static void destruct_BmnLANDRaw2Digit(void *p) {
      typedef ::BmnLANDRaw2Digit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnLANDRaw2Digit

//______________________________________________________________________________
void BmnTofCalRaw2Digit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTofCalRaw2Digit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTofCalRaw2Digit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTofCalRaw2Digit::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnTofCalRaw2Digit(void *p) {
      delete ((::BmnTofCalRaw2Digit*)p);
   }
   static void deleteArray_BmnTofCalRaw2Digit(void *p) {
      delete [] ((::BmnTofCalRaw2Digit*)p);
   }
   static void destruct_BmnTofCalRaw2Digit(void *p) {
      typedef ::BmnTofCalRaw2Digit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTofCalRaw2Digit

//______________________________________________________________________________
void BmnGemRaw2Digit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemRaw2Digit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemRaw2Digit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemRaw2Digit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGemRaw2Digit(void *p) {
      return  p ? new(p) ::BmnGemRaw2Digit : new ::BmnGemRaw2Digit;
   }
   static void *newArray_BmnGemRaw2Digit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGemRaw2Digit[nElements] : new ::BmnGemRaw2Digit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGemRaw2Digit(void *p) {
      delete ((::BmnGemRaw2Digit*)p);
   }
   static void deleteArray_BmnGemRaw2Digit(void *p) {
      delete [] ((::BmnGemRaw2Digit*)p);
   }
   static void destruct_BmnGemRaw2Digit(void *p) {
      typedef ::BmnGemRaw2Digit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemRaw2Digit

//______________________________________________________________________________
void BmnTof2Raw2DigitNew::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTof2Raw2DigitNew.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTof2Raw2DigitNew::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTof2Raw2DigitNew::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTof2Raw2DigitNew(void *p) {
      return  p ? new(p) ::BmnTof2Raw2DigitNew : new ::BmnTof2Raw2DigitNew;
   }
   static void *newArray_BmnTof2Raw2DigitNew(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTof2Raw2DigitNew[nElements] : new ::BmnTof2Raw2DigitNew[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTof2Raw2DigitNew(void *p) {
      delete ((::BmnTof2Raw2DigitNew*)p);
   }
   static void deleteArray_BmnTof2Raw2DigitNew(void *p) {
      delete [] ((::BmnTof2Raw2DigitNew*)p);
   }
   static void destruct_BmnTof2Raw2DigitNew(void *p) {
      typedef ::BmnTof2Raw2DigitNew current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTof2Raw2DigitNew

//______________________________________________________________________________
void BmnTof1Raw2Digit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTof1Raw2Digit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTof1Raw2Digit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTof1Raw2Digit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTof1Raw2Digit(void *p) {
      return  p ? new(p) ::BmnTof1Raw2Digit : new ::BmnTof1Raw2Digit;
   }
   static void *newArray_BmnTof1Raw2Digit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTof1Raw2Digit[nElements] : new ::BmnTof1Raw2Digit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTof1Raw2Digit(void *p) {
      delete ((::BmnTof1Raw2Digit*)p);
   }
   static void deleteArray_BmnTof1Raw2Digit(void *p) {
      delete [] ((::BmnTof1Raw2Digit*)p);
   }
   static void destruct_BmnTof1Raw2Digit(void *p) {
      typedef ::BmnTof1Raw2Digit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTof1Raw2Digit

//______________________________________________________________________________
void BmnSiliconRaw2Digit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiliconRaw2Digit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiliconRaw2Digit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiliconRaw2Digit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiliconRaw2Digit(void *p) {
      return  p ? new(p) ::BmnSiliconRaw2Digit : new ::BmnSiliconRaw2Digit;
   }
   static void *newArray_BmnSiliconRaw2Digit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiliconRaw2Digit[nElements] : new ::BmnSiliconRaw2Digit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiliconRaw2Digit(void *p) {
      delete ((::BmnSiliconRaw2Digit*)p);
   }
   static void deleteArray_BmnSiliconRaw2Digit(void *p) {
      delete [] ((::BmnSiliconRaw2Digit*)p);
   }
   static void destruct_BmnSiliconRaw2Digit(void *p) {
      typedef ::BmnSiliconRaw2Digit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiliconRaw2Digit

//______________________________________________________________________________
void BmnTrigRaw2Digit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTrigRaw2Digit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTrigRaw2Digit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTrigRaw2Digit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTrigRaw2Digit(void *p) {
      return  p ? new(p) ::BmnTrigRaw2Digit : new ::BmnTrigRaw2Digit;
   }
   static void *newArray_BmnTrigRaw2Digit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTrigRaw2Digit[nElements] : new ::BmnTrigRaw2Digit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTrigRaw2Digit(void *p) {
      delete ((::BmnTrigRaw2Digit*)p);
   }
   static void deleteArray_BmnTrigRaw2Digit(void *p) {
      delete [] ((::BmnTrigRaw2Digit*)p);
   }
   static void destruct_BmnTrigRaw2Digit(void *p) {
      typedef ::BmnTrigRaw2Digit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTrigRaw2Digit

//______________________________________________________________________________
void BmnCscRaw2Digit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnCscRaw2Digit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnCscRaw2Digit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnCscRaw2Digit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnCscRaw2Digit(void *p) {
      return  p ? new(p) ::BmnCscRaw2Digit : new ::BmnCscRaw2Digit;
   }
   static void *newArray_BmnCscRaw2Digit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnCscRaw2Digit[nElements] : new ::BmnCscRaw2Digit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnCscRaw2Digit(void *p) {
      delete ((::BmnCscRaw2Digit*)p);
   }
   static void deleteArray_BmnCscRaw2Digit(void *p) {
      delete [] ((::BmnCscRaw2Digit*)p);
   }
   static void destruct_BmnCscRaw2Digit(void *p) {
      typedef ::BmnCscRaw2Digit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnCscRaw2Digit

//______________________________________________________________________________
void BmnMscRaw2Digit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMscRaw2Digit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMscRaw2Digit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMscRaw2Digit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMscRaw2Digit(void *p) {
      return  p ? new(p) ::BmnMscRaw2Digit : new ::BmnMscRaw2Digit;
   }
   static void *newArray_BmnMscRaw2Digit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMscRaw2Digit[nElements] : new ::BmnMscRaw2Digit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMscRaw2Digit(void *p) {
      delete ((::BmnMscRaw2Digit*)p);
   }
   static void deleteArray_BmnMscRaw2Digit(void *p) {
      delete [] ((::BmnMscRaw2Digit*)p);
   }
   static void destruct_BmnMscRaw2Digit(void *p) {
      typedef ::BmnMscRaw2Digit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMscRaw2Digit

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnRawDataDecoder(void *p) {
      return  p ? new(p) ::BmnRawDataDecoder : new ::BmnRawDataDecoder;
   }
   static void *newArray_BmnRawDataDecoder(Long_t nElements, void *p) {
      return p ? new(p) ::BmnRawDataDecoder[nElements] : new ::BmnRawDataDecoder[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnRawDataDecoder(void *p) {
      delete ((::BmnRawDataDecoder*)p);
   }
   static void deleteArray_BmnRawDataDecoder(void *p) {
      delete [] ((::BmnRawDataDecoder*)p);
   }
   static void destruct_BmnRawDataDecoder(void *p) {
      typedef ::BmnRawDataDecoder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnRawDataDecoder

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSlewingTOF700(void *p) {
      return  p ? new(p) ::BmnSlewingTOF700 : new ::BmnSlewingTOF700;
   }
   static void *newArray_BmnSlewingTOF700(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSlewingTOF700[nElements] : new ::BmnSlewingTOF700[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSlewingTOF700(void *p) {
      delete ((::BmnSlewingTOF700*)p);
   }
   static void deleteArray_BmnSlewingTOF700(void *p) {
      delete [] ((::BmnSlewingTOF700*)p);
   }
   static void destruct_BmnSlewingTOF700(void *p) {
      typedef ::BmnSlewingTOF700 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSlewingTOF700

//______________________________________________________________________________
void BmnProfRaw2Digit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnProfRaw2Digit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnProfRaw2Digit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnProfRaw2Digit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnProfRaw2Digit(void *p) {
      return  p ? new(p) ::BmnProfRaw2Digit : new ::BmnProfRaw2Digit;
   }
   static void *newArray_BmnProfRaw2Digit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnProfRaw2Digit[nElements] : new ::BmnProfRaw2Digit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnProfRaw2Digit(void *p) {
      delete ((::BmnProfRaw2Digit*)p);
   }
   static void deleteArray_BmnProfRaw2Digit(void *p) {
      delete [] ((::BmnProfRaw2Digit*)p);
   }
   static void destruct_BmnProfRaw2Digit(void *p) {
      typedef ::BmnProfRaw2Digit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnProfRaw2Digit

//______________________________________________________________________________
void BmnProfAsic2Raw::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnProfAsic2Raw.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnProfAsic2Raw::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnProfAsic2Raw::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnProfAsic2Raw(void *p) {
      return  p ? new(p) ::BmnProfAsic2Raw : new ::BmnProfAsic2Raw;
   }
   static void *newArray_BmnProfAsic2Raw(Long_t nElements, void *p) {
      return p ? new(p) ::BmnProfAsic2Raw[nElements] : new ::BmnProfAsic2Raw[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnProfAsic2Raw(void *p) {
      delete ((::BmnProfAsic2Raw*)p);
   }
   static void deleteArray_BmnProfAsic2Raw(void *p) {
      delete [] ((::BmnProfAsic2Raw*)p);
   }
   static void destruct_BmnProfAsic2Raw(void *p) {
      typedef ::BmnProfAsic2Raw current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnProfAsic2Raw

namespace ROOT {
   static TClass *vectorlEvectorlETH1mUgRsPgR_Dictionary();
   static void vectorlEvectorlETH1mUgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlETH1mUgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlETH1mUgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlETH1mUgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlETH1mUgRsPgR(void *p);
   static void destruct_vectorlEvectorlETH1mUgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<TH1*> >*)
   {
      vector<vector<TH1*> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<TH1*> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<TH1*> >", -2, "vector", 386,
                  typeid(vector<vector<TH1*> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlETH1mUgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<TH1*> >) );
      instance.SetNew(&new_vectorlEvectorlETH1mUgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlETH1mUgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlETH1mUgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlETH1mUgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlETH1mUgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<TH1*> > >()));

      ::ROOT::AddClassAlternate("vector<vector<TH1*> >","std::vector<std::vector<TH1*, std::allocator<TH1*> >, std::allocator<std::vector<TH1*, std::allocator<TH1*> > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<TH1*> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlETH1mUgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<TH1*> >*)nullptr)->GetClass();
      vectorlEvectorlETH1mUgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlETH1mUgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlETH1mUgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<TH1*> > : new vector<vector<TH1*> >;
   }
   static void *newArray_vectorlEvectorlETH1mUgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<TH1*> >[nElements] : new vector<vector<TH1*> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlETH1mUgRsPgR(void *p) {
      delete ((vector<vector<TH1*> >*)p);
   }
   static void deleteArray_vectorlEvectorlETH1mUgRsPgR(void *p) {
      delete [] ((vector<vector<TH1*> >*)p);
   }
   static void destruct_vectorlEvectorlETH1mUgRsPgR(void *p) {
      typedef vector<vector<TH1*> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<TH1*> >

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
   static TClass *vectorlEunsignedsPintgR_Dictionary();
   static void vectorlEunsignedsPintgR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPintgR(void *p = nullptr);
   static void *newArray_vectorlEunsignedsPintgR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPintgR(void *p);
   static void deleteArray_vectorlEunsignedsPintgR(void *p);
   static void destruct_vectorlEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned int>*)
   {
      vector<unsigned int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned int>", -2, "vector", 386,
                  typeid(vector<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned int>) );
      instance.SetNew(&new_vectorlEunsignedsPintgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPintgR);
      instance.SetDelete(&delete_vectorlEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPintgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned int> >()));

      ::ROOT::AddClassAlternate("vector<unsigned int>","std::vector<unsigned int, std::allocator<unsigned int> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<unsigned int>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<unsigned int>*)nullptr)->GetClass();
      vectorlEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned int> : new vector<unsigned int>;
   }
   static void *newArray_vectorlEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned int>[nElements] : new vector<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPintgR(void *p) {
      delete ((vector<unsigned int>*)p);
   }
   static void deleteArray_vectorlEunsignedsPintgR(void *p) {
      delete [] ((vector<unsigned int>*)p);
   }
   static void destruct_vectorlEunsignedsPintgR(void *p) {
      typedef vector<unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned int>

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
   static TClass *vectorlEpairlEfloatcOfloatgRsPgR_Dictionary();
   static void vectorlEpairlEfloatcOfloatgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEpairlEfloatcOfloatgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEpairlEfloatcOfloatgRsPgR(Long_t size, void *p);
   static void delete_vectorlEpairlEfloatcOfloatgRsPgR(void *p);
   static void deleteArray_vectorlEpairlEfloatcOfloatgRsPgR(void *p);
   static void destruct_vectorlEpairlEfloatcOfloatgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pair<float,float> >*)
   {
      vector<pair<float,float> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pair<float,float> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pair<float,float> >", -2, "vector", 386,
                  typeid(vector<pair<float,float> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEpairlEfloatcOfloatgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<pair<float,float> >) );
      instance.SetNew(&new_vectorlEpairlEfloatcOfloatgRsPgR);
      instance.SetNewArray(&newArray_vectorlEpairlEfloatcOfloatgRsPgR);
      instance.SetDelete(&delete_vectorlEpairlEfloatcOfloatgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpairlEfloatcOfloatgRsPgR);
      instance.SetDestructor(&destruct_vectorlEpairlEfloatcOfloatgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pair<float,float> > >()));

      ::ROOT::AddClassAlternate("vector<pair<float,float> >","std::vector<std::pair<float, float>, std::allocator<std::pair<float, float> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<pair<float,float> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpairlEfloatcOfloatgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<pair<float,float> >*)nullptr)->GetClass();
      vectorlEpairlEfloatcOfloatgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpairlEfloatcOfloatgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpairlEfloatcOfloatgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pair<float,float> > : new vector<pair<float,float> >;
   }
   static void *newArray_vectorlEpairlEfloatcOfloatgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pair<float,float> >[nElements] : new vector<pair<float,float> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpairlEfloatcOfloatgRsPgR(void *p) {
      delete ((vector<pair<float,float> >*)p);
   }
   static void deleteArray_vectorlEpairlEfloatcOfloatgRsPgR(void *p) {
      delete [] ((vector<pair<float,float> >*)p);
   }
   static void destruct_vectorlEpairlEfloatcOfloatgRsPgR(void *p) {
      typedef vector<pair<float,float> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<pair<float,float> >

namespace ROOT {
   static TClass *vectorlEmaplEintcOBmnCscMappingmUgRsPgR_Dictionary();
   static void vectorlEmaplEintcOBmnCscMappingmUgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEmaplEintcOBmnCscMappingmUgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEmaplEintcOBmnCscMappingmUgRsPgR(Long_t size, void *p);
   static void delete_vectorlEmaplEintcOBmnCscMappingmUgRsPgR(void *p);
   static void deleteArray_vectorlEmaplEintcOBmnCscMappingmUgRsPgR(void *p);
   static void destruct_vectorlEmaplEintcOBmnCscMappingmUgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<map<int,BmnCscMapping*> >*)
   {
      vector<map<int,BmnCscMapping*> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<map<int,BmnCscMapping*> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<map<int,BmnCscMapping*> >", -2, "vector", 386,
                  typeid(vector<map<int,BmnCscMapping*> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEmaplEintcOBmnCscMappingmUgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<map<int,BmnCscMapping*> >) );
      instance.SetNew(&new_vectorlEmaplEintcOBmnCscMappingmUgRsPgR);
      instance.SetNewArray(&newArray_vectorlEmaplEintcOBmnCscMappingmUgRsPgR);
      instance.SetDelete(&delete_vectorlEmaplEintcOBmnCscMappingmUgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEmaplEintcOBmnCscMappingmUgRsPgR);
      instance.SetDestructor(&destruct_vectorlEmaplEintcOBmnCscMappingmUgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<map<int,BmnCscMapping*> > >()));

      ::ROOT::AddClassAlternate("vector<map<int,BmnCscMapping*> >","std::vector<std::map<int, BmnCscMapping*, std::less<int>, std::allocator<std::pair<int const, BmnCscMapping*> > >, std::allocator<std::map<int, BmnCscMapping*, std::less<int>, std::allocator<std::pair<int const, BmnCscMapping*> > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<map<int,BmnCscMapping*> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEmaplEintcOBmnCscMappingmUgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<map<int,BmnCscMapping*> >*)nullptr)->GetClass();
      vectorlEmaplEintcOBmnCscMappingmUgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEmaplEintcOBmnCscMappingmUgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEmaplEintcOBmnCscMappingmUgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<map<int,BmnCscMapping*> > : new vector<map<int,BmnCscMapping*> >;
   }
   static void *newArray_vectorlEmaplEintcOBmnCscMappingmUgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<map<int,BmnCscMapping*> >[nElements] : new vector<map<int,BmnCscMapping*> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEmaplEintcOBmnCscMappingmUgRsPgR(void *p) {
      delete ((vector<map<int,BmnCscMapping*> >*)p);
   }
   static void deleteArray_vectorlEmaplEintcOBmnCscMappingmUgRsPgR(void *p) {
      delete [] ((vector<map<int,BmnCscMapping*> >*)p);
   }
   static void destruct_vectorlEmaplEintcOBmnCscMappingmUgRsPgR(void *p) {
      typedef vector<map<int,BmnCscMapping*> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<map<int,BmnCscMapping*> >

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
   static TClass *vectorlEUniValuemUgR_Dictionary();
   static void vectorlEUniValuemUgR_TClassManip(TClass*);
   static void *new_vectorlEUniValuemUgR(void *p = nullptr);
   static void *newArray_vectorlEUniValuemUgR(Long_t size, void *p);
   static void delete_vectorlEUniValuemUgR(void *p);
   static void deleteArray_vectorlEUniValuemUgR(void *p);
   static void destruct_vectorlEUniValuemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<UniValue*>*)
   {
      vector<UniValue*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<UniValue*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<UniValue*>", -2, "vector", 386,
                  typeid(vector<UniValue*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEUniValuemUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<UniValue*>) );
      instance.SetNew(&new_vectorlEUniValuemUgR);
      instance.SetNewArray(&newArray_vectorlEUniValuemUgR);
      instance.SetDelete(&delete_vectorlEUniValuemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEUniValuemUgR);
      instance.SetDestructor(&destruct_vectorlEUniValuemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<UniValue*> >()));

      ::ROOT::AddClassAlternate("vector<UniValue*>","std::vector<UniValue*, std::allocator<UniValue*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<UniValue*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEUniValuemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<UniValue*>*)nullptr)->GetClass();
      vectorlEUniValuemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEUniValuemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEUniValuemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<UniValue*> : new vector<UniValue*>;
   }
   static void *newArray_vectorlEUniValuemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<UniValue*>[nElements] : new vector<UniValue*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEUniValuemUgR(void *p) {
      delete ((vector<UniValue*>*)p);
   }
   static void deleteArray_vectorlEUniValuemUgR(void *p) {
      delete [] ((vector<UniValue*>*)p);
   }
   static void destruct_vectorlEUniValuemUgR(void *p) {
      typedef vector<UniValue*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<UniValue*>

namespace ROOT {
   static TClass *vectorlETH1ImUgR_Dictionary();
   static void vectorlETH1ImUgR_TClassManip(TClass*);
   static void *new_vectorlETH1ImUgR(void *p = nullptr);
   static void *newArray_vectorlETH1ImUgR(Long_t size, void *p);
   static void delete_vectorlETH1ImUgR(void *p);
   static void deleteArray_vectorlETH1ImUgR(void *p);
   static void destruct_vectorlETH1ImUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TH1I*>*)
   {
      vector<TH1I*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TH1I*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TH1I*>", -2, "vector", 386,
                  typeid(vector<TH1I*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETH1ImUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TH1I*>) );
      instance.SetNew(&new_vectorlETH1ImUgR);
      instance.SetNewArray(&newArray_vectorlETH1ImUgR);
      instance.SetDelete(&delete_vectorlETH1ImUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETH1ImUgR);
      instance.SetDestructor(&destruct_vectorlETH1ImUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TH1I*> >()));

      ::ROOT::AddClassAlternate("vector<TH1I*>","std::vector<TH1I*, std::allocator<TH1I*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TH1I*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETH1ImUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TH1I*>*)nullptr)->GetClass();
      vectorlETH1ImUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETH1ImUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETH1ImUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH1I*> : new vector<TH1I*>;
   }
   static void *newArray_vectorlETH1ImUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH1I*>[nElements] : new vector<TH1I*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETH1ImUgR(void *p) {
      delete ((vector<TH1I*>*)p);
   }
   static void deleteArray_vectorlETH1ImUgR(void *p) {
      delete [] ((vector<TH1I*>*)p);
   }
   static void destruct_vectorlETH1ImUgR(void *p) {
      typedef vector<TH1I*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TH1I*>

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
   static TClass *vectorlEMscMapgR_Dictionary();
   static void vectorlEMscMapgR_TClassManip(TClass*);
   static void *new_vectorlEMscMapgR(void *p = nullptr);
   static void *newArray_vectorlEMscMapgR(Long_t size, void *p);
   static void delete_vectorlEMscMapgR(void *p);
   static void deleteArray_vectorlEMscMapgR(void *p);
   static void destruct_vectorlEMscMapgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<MscMap>*)
   {
      vector<MscMap> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<MscMap>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<MscMap>", -2, "vector", 386,
                  typeid(vector<MscMap>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEMscMapgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<MscMap>) );
      instance.SetNew(&new_vectorlEMscMapgR);
      instance.SetNewArray(&newArray_vectorlEMscMapgR);
      instance.SetDelete(&delete_vectorlEMscMapgR);
      instance.SetDeleteArray(&deleteArray_vectorlEMscMapgR);
      instance.SetDestructor(&destruct_vectorlEMscMapgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<MscMap> >()));

      ::ROOT::AddClassAlternate("vector<MscMap>","std::vector<MscMap, std::allocator<MscMap> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<MscMap>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEMscMapgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<MscMap>*)nullptr)->GetClass();
      vectorlEMscMapgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEMscMapgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEMscMapgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<MscMap> : new vector<MscMap>;
   }
   static void *newArray_vectorlEMscMapgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<MscMap>[nElements] : new vector<MscMap>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEMscMapgR(void *p) {
      delete ((vector<MscMap>*)p);
   }
   static void deleteArray_vectorlEMscMapgR(void *p) {
      delete [] ((vector<MscMap>*)p);
   }
   static void destruct_vectorlEMscMapgR(void *p) {
      typedef vector<MscMap> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<MscMap>

namespace ROOT {
   static TClass *vectorlEGemMapLinemUgR_Dictionary();
   static void vectorlEGemMapLinemUgR_TClassManip(TClass*);
   static void *new_vectorlEGemMapLinemUgR(void *p = nullptr);
   static void *newArray_vectorlEGemMapLinemUgR(Long_t size, void *p);
   static void delete_vectorlEGemMapLinemUgR(void *p);
   static void deleteArray_vectorlEGemMapLinemUgR(void *p);
   static void destruct_vectorlEGemMapLinemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<GemMapLine*>*)
   {
      vector<GemMapLine*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<GemMapLine*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<GemMapLine*>", -2, "vector", 386,
                  typeid(vector<GemMapLine*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEGemMapLinemUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<GemMapLine*>) );
      instance.SetNew(&new_vectorlEGemMapLinemUgR);
      instance.SetNewArray(&newArray_vectorlEGemMapLinemUgR);
      instance.SetDelete(&delete_vectorlEGemMapLinemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEGemMapLinemUgR);
      instance.SetDestructor(&destruct_vectorlEGemMapLinemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<GemMapLine*> >()));

      ::ROOT::AddClassAlternate("vector<GemMapLine*>","std::vector<GemMapLine*, std::allocator<GemMapLine*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<GemMapLine*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEGemMapLinemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<GemMapLine*>*)nullptr)->GetClass();
      vectorlEGemMapLinemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEGemMapLinemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEGemMapLinemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<GemMapLine*> : new vector<GemMapLine*>;
   }
   static void *newArray_vectorlEGemMapLinemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<GemMapLine*>[nElements] : new vector<GemMapLine*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEGemMapLinemUgR(void *p) {
      delete ((vector<GemMapLine*>*)p);
   }
   static void deleteArray_vectorlEGemMapLinemUgR(void *p) {
      delete [] ((vector<GemMapLine*>*)p);
   }
   static void destruct_vectorlEGemMapLinemUgR(void *p) {
      typedef vector<GemMapLine*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<GemMapLine*>

namespace ROOT {
   static TClass *vectorlEBmnTrigChannelDatagR_Dictionary();
   static void vectorlEBmnTrigChannelDatagR_TClassManip(TClass*);
   static void *new_vectorlEBmnTrigChannelDatagR(void *p = nullptr);
   static void *newArray_vectorlEBmnTrigChannelDatagR(Long_t size, void *p);
   static void delete_vectorlEBmnTrigChannelDatagR(void *p);
   static void deleteArray_vectorlEBmnTrigChannelDatagR(void *p);
   static void destruct_vectorlEBmnTrigChannelDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnTrigChannelData>*)
   {
      vector<BmnTrigChannelData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnTrigChannelData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnTrigChannelData>", -2, "vector", 386,
                  typeid(vector<BmnTrigChannelData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnTrigChannelDatagR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnTrigChannelData>) );
      instance.SetNew(&new_vectorlEBmnTrigChannelDatagR);
      instance.SetNewArray(&newArray_vectorlEBmnTrigChannelDatagR);
      instance.SetDelete(&delete_vectorlEBmnTrigChannelDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnTrigChannelDatagR);
      instance.SetDestructor(&destruct_vectorlEBmnTrigChannelDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnTrigChannelData> >()));

      ::ROOT::AddClassAlternate("vector<BmnTrigChannelData>","std::vector<BmnTrigChannelData, std::allocator<BmnTrigChannelData> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnTrigChannelData>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnTrigChannelDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnTrigChannelData>*)nullptr)->GetClass();
      vectorlEBmnTrigChannelDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnTrigChannelDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnTrigChannelDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnTrigChannelData> : new vector<BmnTrigChannelData>;
   }
   static void *newArray_vectorlEBmnTrigChannelDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnTrigChannelData>[nElements] : new vector<BmnTrigChannelData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnTrigChannelDatagR(void *p) {
      delete ((vector<BmnTrigChannelData>*)p);
   }
   static void deleteArray_vectorlEBmnTrigChannelDatagR(void *p) {
      delete [] ((vector<BmnTrigChannelData>*)p);
   }
   static void destruct_vectorlEBmnTrigChannelDatagR(void *p) {
      typedef vector<BmnTrigChannelData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnTrigChannelData>

namespace ROOT {
   static TClass *vectorlEBmnTofCalRaw2DigitcLcLTCalgR_Dictionary();
   static void vectorlEBmnTofCalRaw2DigitcLcLTCalgR_TClassManip(TClass*);
   static void *new_vectorlEBmnTofCalRaw2DigitcLcLTCalgR(void *p = nullptr);
   static void *newArray_vectorlEBmnTofCalRaw2DigitcLcLTCalgR(Long_t size, void *p);
   static void delete_vectorlEBmnTofCalRaw2DigitcLcLTCalgR(void *p);
   static void deleteArray_vectorlEBmnTofCalRaw2DigitcLcLTCalgR(void *p);
   static void destruct_vectorlEBmnTofCalRaw2DigitcLcLTCalgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnTofCalRaw2Digit::TCal>*)
   {
      vector<BmnTofCalRaw2Digit::TCal> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnTofCalRaw2Digit::TCal>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnTofCalRaw2Digit::TCal>", -2, "vector", 386,
                  typeid(vector<BmnTofCalRaw2Digit::TCal>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnTofCalRaw2DigitcLcLTCalgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnTofCalRaw2Digit::TCal>) );
      instance.SetNew(&new_vectorlEBmnTofCalRaw2DigitcLcLTCalgR);
      instance.SetNewArray(&newArray_vectorlEBmnTofCalRaw2DigitcLcLTCalgR);
      instance.SetDelete(&delete_vectorlEBmnTofCalRaw2DigitcLcLTCalgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnTofCalRaw2DigitcLcLTCalgR);
      instance.SetDestructor(&destruct_vectorlEBmnTofCalRaw2DigitcLcLTCalgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnTofCalRaw2Digit::TCal> >()));

      ::ROOT::AddClassAlternate("vector<BmnTofCalRaw2Digit::TCal>","std::vector<BmnTofCalRaw2Digit::TCal, std::allocator<BmnTofCalRaw2Digit::TCal> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnTofCalRaw2Digit::TCal>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnTofCalRaw2DigitcLcLTCalgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnTofCalRaw2Digit::TCal>*)nullptr)->GetClass();
      vectorlEBmnTofCalRaw2DigitcLcLTCalgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnTofCalRaw2DigitcLcLTCalgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnTofCalRaw2DigitcLcLTCalgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnTofCalRaw2Digit::TCal> : new vector<BmnTofCalRaw2Digit::TCal>;
   }
   static void *newArray_vectorlEBmnTofCalRaw2DigitcLcLTCalgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnTofCalRaw2Digit::TCal>[nElements] : new vector<BmnTofCalRaw2Digit::TCal>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnTofCalRaw2DigitcLcLTCalgR(void *p) {
      delete ((vector<BmnTofCalRaw2Digit::TCal>*)p);
   }
   static void deleteArray_vectorlEBmnTofCalRaw2DigitcLcLTCalgR(void *p) {
      delete [] ((vector<BmnTofCalRaw2Digit::TCal>*)p);
   }
   static void destruct_vectorlEBmnTofCalRaw2DigitcLcLTCalgR(void *p) {
      typedef vector<BmnTofCalRaw2Digit::TCal> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnTofCalRaw2Digit::TCal>

namespace ROOT {
   static TClass *vectorlEBmnSiliconMappingmUgR_Dictionary();
   static void vectorlEBmnSiliconMappingmUgR_TClassManip(TClass*);
   static void *new_vectorlEBmnSiliconMappingmUgR(void *p = nullptr);
   static void *newArray_vectorlEBmnSiliconMappingmUgR(Long_t size, void *p);
   static void delete_vectorlEBmnSiliconMappingmUgR(void *p);
   static void deleteArray_vectorlEBmnSiliconMappingmUgR(void *p);
   static void destruct_vectorlEBmnSiliconMappingmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnSiliconMapping*>*)
   {
      vector<BmnSiliconMapping*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnSiliconMapping*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnSiliconMapping*>", -2, "vector", 386,
                  typeid(vector<BmnSiliconMapping*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnSiliconMappingmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnSiliconMapping*>) );
      instance.SetNew(&new_vectorlEBmnSiliconMappingmUgR);
      instance.SetNewArray(&newArray_vectorlEBmnSiliconMappingmUgR);
      instance.SetDelete(&delete_vectorlEBmnSiliconMappingmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnSiliconMappingmUgR);
      instance.SetDestructor(&destruct_vectorlEBmnSiliconMappingmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnSiliconMapping*> >()));

      ::ROOT::AddClassAlternate("vector<BmnSiliconMapping*>","std::vector<BmnSiliconMapping*, std::allocator<BmnSiliconMapping*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnSiliconMapping*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnSiliconMappingmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnSiliconMapping*>*)nullptr)->GetClass();
      vectorlEBmnSiliconMappingmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnSiliconMappingmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnSiliconMappingmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnSiliconMapping*> : new vector<BmnSiliconMapping*>;
   }
   static void *newArray_vectorlEBmnSiliconMappingmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnSiliconMapping*>[nElements] : new vector<BmnSiliconMapping*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnSiliconMappingmUgR(void *p) {
      delete ((vector<BmnSiliconMapping*>*)p);
   }
   static void deleteArray_vectorlEBmnSiliconMappingmUgR(void *p) {
      delete [] ((vector<BmnSiliconMapping*>*)p);
   }
   static void destruct_vectorlEBmnSiliconMappingmUgR(void *p) {
      typedef vector<BmnSiliconMapping*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnSiliconMapping*>

namespace ROOT {
   static TClass *vectorlEBmnMwpcMappinggR_Dictionary();
   static void vectorlEBmnMwpcMappinggR_TClassManip(TClass*);
   static void *new_vectorlEBmnMwpcMappinggR(void *p = nullptr);
   static void *newArray_vectorlEBmnMwpcMappinggR(Long_t size, void *p);
   static void delete_vectorlEBmnMwpcMappinggR(void *p);
   static void deleteArray_vectorlEBmnMwpcMappinggR(void *p);
   static void destruct_vectorlEBmnMwpcMappinggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnMwpcMapping>*)
   {
      vector<BmnMwpcMapping> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnMwpcMapping>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnMwpcMapping>", -2, "vector", 386,
                  typeid(vector<BmnMwpcMapping>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnMwpcMappinggR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnMwpcMapping>) );
      instance.SetNew(&new_vectorlEBmnMwpcMappinggR);
      instance.SetNewArray(&newArray_vectorlEBmnMwpcMappinggR);
      instance.SetDelete(&delete_vectorlEBmnMwpcMappinggR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnMwpcMappinggR);
      instance.SetDestructor(&destruct_vectorlEBmnMwpcMappinggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnMwpcMapping> >()));

      ::ROOT::AddClassAlternate("vector<BmnMwpcMapping>","std::vector<BmnMwpcMapping, std::allocator<BmnMwpcMapping> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnMwpcMapping>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnMwpcMappinggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnMwpcMapping>*)nullptr)->GetClass();
      vectorlEBmnMwpcMappinggR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnMwpcMappinggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnMwpcMappinggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnMwpcMapping> : new vector<BmnMwpcMapping>;
   }
   static void *newArray_vectorlEBmnMwpcMappinggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnMwpcMapping>[nElements] : new vector<BmnMwpcMapping>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnMwpcMappinggR(void *p) {
      delete ((vector<BmnMwpcMapping>*)p);
   }
   static void deleteArray_vectorlEBmnMwpcMappinggR(void *p) {
      delete [] ((vector<BmnMwpcMapping>*)p);
   }
   static void destruct_vectorlEBmnMwpcMappinggR(void *p) {
      typedef vector<BmnMwpcMapping> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnMwpcMapping>

namespace ROOT {
   static TClass *vectorlEBmnLANDRaw2DigitcLcLTCalgR_Dictionary();
   static void vectorlEBmnLANDRaw2DigitcLcLTCalgR_TClassManip(TClass*);
   static void *new_vectorlEBmnLANDRaw2DigitcLcLTCalgR(void *p = nullptr);
   static void *newArray_vectorlEBmnLANDRaw2DigitcLcLTCalgR(Long_t size, void *p);
   static void delete_vectorlEBmnLANDRaw2DigitcLcLTCalgR(void *p);
   static void deleteArray_vectorlEBmnLANDRaw2DigitcLcLTCalgR(void *p);
   static void destruct_vectorlEBmnLANDRaw2DigitcLcLTCalgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnLANDRaw2Digit::TCal>*)
   {
      vector<BmnLANDRaw2Digit::TCal> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnLANDRaw2Digit::TCal>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnLANDRaw2Digit::TCal>", -2, "vector", 386,
                  typeid(vector<BmnLANDRaw2Digit::TCal>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnLANDRaw2DigitcLcLTCalgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnLANDRaw2Digit::TCal>) );
      instance.SetNew(&new_vectorlEBmnLANDRaw2DigitcLcLTCalgR);
      instance.SetNewArray(&newArray_vectorlEBmnLANDRaw2DigitcLcLTCalgR);
      instance.SetDelete(&delete_vectorlEBmnLANDRaw2DigitcLcLTCalgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnLANDRaw2DigitcLcLTCalgR);
      instance.SetDestructor(&destruct_vectorlEBmnLANDRaw2DigitcLcLTCalgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnLANDRaw2Digit::TCal> >()));

      ::ROOT::AddClassAlternate("vector<BmnLANDRaw2Digit::TCal>","std::vector<BmnLANDRaw2Digit::TCal, std::allocator<BmnLANDRaw2Digit::TCal> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnLANDRaw2Digit::TCal>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnLANDRaw2DigitcLcLTCalgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnLANDRaw2Digit::TCal>*)nullptr)->GetClass();
      vectorlEBmnLANDRaw2DigitcLcLTCalgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnLANDRaw2DigitcLcLTCalgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnLANDRaw2DigitcLcLTCalgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnLANDRaw2Digit::TCal> : new vector<BmnLANDRaw2Digit::TCal>;
   }
   static void *newArray_vectorlEBmnLANDRaw2DigitcLcLTCalgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnLANDRaw2Digit::TCal>[nElements] : new vector<BmnLANDRaw2Digit::TCal>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnLANDRaw2DigitcLcLTCalgR(void *p) {
      delete ((vector<BmnLANDRaw2Digit::TCal>*)p);
   }
   static void deleteArray_vectorlEBmnLANDRaw2DigitcLcLTCalgR(void *p) {
      delete [] ((vector<BmnLANDRaw2Digit::TCal>*)p);
   }
   static void destruct_vectorlEBmnLANDRaw2DigitcLcLTCalgR(void *p) {
      typedef vector<BmnLANDRaw2Digit::TCal> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnLANDRaw2Digit::TCal>

namespace ROOT {
   static TClass *vectorlEBmnGemMapmUgR_Dictionary();
   static void vectorlEBmnGemMapmUgR_TClassManip(TClass*);
   static void *new_vectorlEBmnGemMapmUgR(void *p = nullptr);
   static void *newArray_vectorlEBmnGemMapmUgR(Long_t size, void *p);
   static void delete_vectorlEBmnGemMapmUgR(void *p);
   static void deleteArray_vectorlEBmnGemMapmUgR(void *p);
   static void destruct_vectorlEBmnGemMapmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnGemMap*>*)
   {
      vector<BmnGemMap*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnGemMap*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnGemMap*>", -2, "vector", 386,
                  typeid(vector<BmnGemMap*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnGemMapmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnGemMap*>) );
      instance.SetNew(&new_vectorlEBmnGemMapmUgR);
      instance.SetNewArray(&newArray_vectorlEBmnGemMapmUgR);
      instance.SetDelete(&delete_vectorlEBmnGemMapmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnGemMapmUgR);
      instance.SetDestructor(&destruct_vectorlEBmnGemMapmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnGemMap*> >()));

      ::ROOT::AddClassAlternate("vector<BmnGemMap*>","std::vector<BmnGemMap*, std::allocator<BmnGemMap*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnGemMap*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnGemMapmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnGemMap*>*)nullptr)->GetClass();
      vectorlEBmnGemMapmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnGemMapmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnGemMapmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnGemMap*> : new vector<BmnGemMap*>;
   }
   static void *newArray_vectorlEBmnGemMapmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnGemMap*>[nElements] : new vector<BmnGemMap*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnGemMapmUgR(void *p) {
      delete ((vector<BmnGemMap*>*)p);
   }
   static void deleteArray_vectorlEBmnGemMapmUgR(void *p) {
      delete [] ((vector<BmnGemMap*>*)p);
   }
   static void destruct_vectorlEBmnGemMapmUgR(void *p) {
      typedef vector<BmnGemMap*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnGemMap*>

namespace ROOT {
   static TClass *unordered_maplEpairlEintcOintgRcOpairlEfloatcOfloatgRcOboostcLcLhashlEpairlEintcOintgRsPgRsPgR_Dictionary();
   static void unordered_maplEpairlEintcOintgRcOpairlEfloatcOfloatgRcOboostcLcLhashlEpairlEintcOintgRsPgRsPgR_TClassManip(TClass*);
   static void *new_unordered_maplEpairlEintcOintgRcOpairlEfloatcOfloatgRcOboostcLcLhashlEpairlEintcOintgRsPgRsPgR(void *p = nullptr);
   static void *newArray_unordered_maplEpairlEintcOintgRcOpairlEfloatcOfloatgRcOboostcLcLhashlEpairlEintcOintgRsPgRsPgR(Long_t size, void *p);
   static void delete_unordered_maplEpairlEintcOintgRcOpairlEfloatcOfloatgRcOboostcLcLhashlEpairlEintcOintgRsPgRsPgR(void *p);
   static void deleteArray_unordered_maplEpairlEintcOintgRcOpairlEfloatcOfloatgRcOboostcLcLhashlEpairlEintcOintgRsPgRsPgR(void *p);
   static void destruct_unordered_maplEpairlEintcOintgRcOpairlEfloatcOfloatgRcOboostcLcLhashlEpairlEintcOintgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<pair<int,int>,pair<float,float>,boost::hash<pair<int,int> > >*)
   {
      unordered_map<pair<int,int>,pair<float,float>,boost::hash<pair<int,int> > > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<pair<int,int>,pair<float,float>,boost::hash<pair<int,int> > >));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<pair<int,int>,pair<float,float>,boost::hash<pair<int,int> > >", -2, "unordered_map", 102,
                  typeid(unordered_map<pair<int,int>,pair<float,float>,boost::hash<pair<int,int> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplEpairlEintcOintgRcOpairlEfloatcOfloatgRcOboostcLcLhashlEpairlEintcOintgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(unordered_map<pair<int,int>,pair<float,float>,boost::hash<pair<int,int> > >) );
      instance.SetNew(&new_unordered_maplEpairlEintcOintgRcOpairlEfloatcOfloatgRcOboostcLcLhashlEpairlEintcOintgRsPgRsPgR);
      instance.SetNewArray(&newArray_unordered_maplEpairlEintcOintgRcOpairlEfloatcOfloatgRcOboostcLcLhashlEpairlEintcOintgRsPgRsPgR);
      instance.SetDelete(&delete_unordered_maplEpairlEintcOintgRcOpairlEfloatcOfloatgRcOboostcLcLhashlEpairlEintcOintgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_unordered_maplEpairlEintcOintgRcOpairlEfloatcOfloatgRcOboostcLcLhashlEpairlEintcOintgRsPgRsPgR);
      instance.SetDestructor(&destruct_unordered_maplEpairlEintcOintgRcOpairlEfloatcOfloatgRcOboostcLcLhashlEpairlEintcOintgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<pair<int,int>,pair<float,float>,boost::hash<pair<int,int> > > >()));

      ::ROOT::AddClassAlternate("unordered_map<pair<int,int>,pair<float,float>,boost::hash<pair<int,int> > >","std::unordered_map<std::pair<int, int>, std::pair<float, float>, boost::hash<std::pair<int, int> >, std::equal_to<std::pair<int, int> >, std::allocator<std::pair<std::pair<int, int> const, std::pair<float, float> > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const unordered_map<pair<int,int>,pair<float,float>,boost::hash<pair<int,int> > >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplEpairlEintcOintgRcOpairlEfloatcOfloatgRcOboostcLcLhashlEpairlEintcOintgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const unordered_map<pair<int,int>,pair<float,float>,boost::hash<pair<int,int> > >*)nullptr)->GetClass();
      unordered_maplEpairlEintcOintgRcOpairlEfloatcOfloatgRcOboostcLcLhashlEpairlEintcOintgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplEpairlEintcOintgRcOpairlEfloatcOfloatgRcOboostcLcLhashlEpairlEintcOintgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplEpairlEintcOintgRcOpairlEfloatcOfloatgRcOboostcLcLhashlEpairlEintcOintgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<pair<int,int>,pair<float,float>,boost::hash<pair<int,int> > > : new unordered_map<pair<int,int>,pair<float,float>,boost::hash<pair<int,int> > >;
   }
   static void *newArray_unordered_maplEpairlEintcOintgRcOpairlEfloatcOfloatgRcOboostcLcLhashlEpairlEintcOintgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_map<pair<int,int>,pair<float,float>,boost::hash<pair<int,int> > >[nElements] : new unordered_map<pair<int,int>,pair<float,float>,boost::hash<pair<int,int> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplEpairlEintcOintgRcOpairlEfloatcOfloatgRcOboostcLcLhashlEpairlEintcOintgRsPgRsPgR(void *p) {
      delete ((unordered_map<pair<int,int>,pair<float,float>,boost::hash<pair<int,int> > >*)p);
   }
   static void deleteArray_unordered_maplEpairlEintcOintgRcOpairlEfloatcOfloatgRcOboostcLcLhashlEpairlEintcOintgRsPgRsPgR(void *p) {
      delete [] ((unordered_map<pair<int,int>,pair<float,float>,boost::hash<pair<int,int> > >*)p);
   }
   static void destruct_unordered_maplEpairlEintcOintgRcOpairlEfloatcOfloatgRcOboostcLcLhashlEpairlEintcOintgRsPgRsPgR(void *p) {
      typedef unordered_map<pair<int,int>,pair<float,float>,boost::hash<pair<int,int> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class unordered_map<pair<int,int>,pair<float,float>,boost::hash<pair<int,int> > >

namespace ROOT {
   static TClass *maplEunsignedsPshortcOProfiMapgR_Dictionary();
   static void maplEunsignedsPshortcOProfiMapgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPshortcOProfiMapgR(void *p = nullptr);
   static void *newArray_maplEunsignedsPshortcOProfiMapgR(Long_t size, void *p);
   static void delete_maplEunsignedsPshortcOProfiMapgR(void *p);
   static void deleteArray_maplEunsignedsPshortcOProfiMapgR(void *p);
   static void destruct_maplEunsignedsPshortcOProfiMapgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned short,ProfiMap>*)
   {
      map<unsigned short,ProfiMap> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned short,ProfiMap>));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned short,ProfiMap>", -2, "map", 100,
                  typeid(map<unsigned short,ProfiMap>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPshortcOProfiMapgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned short,ProfiMap>) );
      instance.SetNew(&new_maplEunsignedsPshortcOProfiMapgR);
      instance.SetNewArray(&newArray_maplEunsignedsPshortcOProfiMapgR);
      instance.SetDelete(&delete_maplEunsignedsPshortcOProfiMapgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPshortcOProfiMapgR);
      instance.SetDestructor(&destruct_maplEunsignedsPshortcOProfiMapgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned short,ProfiMap> >()));

      ::ROOT::AddClassAlternate("map<unsigned short,ProfiMap>","std::map<unsigned short, ProfiMap, std::less<unsigned short>, std::allocator<std::pair<unsigned short const, ProfiMap> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<unsigned short,ProfiMap>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPshortcOProfiMapgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned short,ProfiMap>*)nullptr)->GetClass();
      maplEunsignedsPshortcOProfiMapgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPshortcOProfiMapgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPshortcOProfiMapgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned short,ProfiMap> : new map<unsigned short,ProfiMap>;
   }
   static void *newArray_maplEunsignedsPshortcOProfiMapgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned short,ProfiMap>[nElements] : new map<unsigned short,ProfiMap>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPshortcOProfiMapgR(void *p) {
      delete ((map<unsigned short,ProfiMap>*)p);
   }
   static void deleteArray_maplEunsignedsPshortcOProfiMapgR(void *p) {
      delete [] ((map<unsigned short,ProfiMap>*)p);
   }
   static void destruct_maplEunsignedsPshortcOProfiMapgR(void *p) {
      typedef map<unsigned short,ProfiMap> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned short,ProfiMap>

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
   static TClass *maplEunsignedsPintcOmaplEintcOBmnSiliconMappingmUgRsPgR_Dictionary();
   static void maplEunsignedsPintcOmaplEintcOBmnSiliconMappingmUgRsPgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcOmaplEintcOBmnSiliconMappingmUgRsPgR(void *p = nullptr);
   static void *newArray_maplEunsignedsPintcOmaplEintcOBmnSiliconMappingmUgRsPgR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcOmaplEintcOBmnSiliconMappingmUgRsPgR(void *p);
   static void deleteArray_maplEunsignedsPintcOmaplEintcOBmnSiliconMappingmUgRsPgR(void *p);
   static void destruct_maplEunsignedsPintcOmaplEintcOBmnSiliconMappingmUgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,map<int,BmnSiliconMapping*> >*)
   {
      map<unsigned int,map<int,BmnSiliconMapping*> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,map<int,BmnSiliconMapping*> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,map<int,BmnSiliconMapping*> >", -2, "map", 100,
                  typeid(map<unsigned int,map<int,BmnSiliconMapping*> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcOmaplEintcOBmnSiliconMappingmUgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned int,map<int,BmnSiliconMapping*> >) );
      instance.SetNew(&new_maplEunsignedsPintcOmaplEintcOBmnSiliconMappingmUgRsPgR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcOmaplEintcOBmnSiliconMappingmUgRsPgR);
      instance.SetDelete(&delete_maplEunsignedsPintcOmaplEintcOBmnSiliconMappingmUgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcOmaplEintcOBmnSiliconMappingmUgRsPgR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcOmaplEintcOBmnSiliconMappingmUgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,map<int,BmnSiliconMapping*> > >()));

      ::ROOT::AddClassAlternate("map<unsigned int,map<int,BmnSiliconMapping*> >","std::map<unsigned int, std::map<int, BmnSiliconMapping*, std::less<int>, std::allocator<std::pair<int const, BmnSiliconMapping*> > >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, std::map<int, BmnSiliconMapping*, std::less<int>, std::allocator<std::pair<int const, BmnSiliconMapping*> > > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<unsigned int,map<int,BmnSiliconMapping*> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcOmaplEintcOBmnSiliconMappingmUgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned int,map<int,BmnSiliconMapping*> >*)nullptr)->GetClass();
      maplEunsignedsPintcOmaplEintcOBmnSiliconMappingmUgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcOmaplEintcOBmnSiliconMappingmUgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcOmaplEintcOBmnSiliconMappingmUgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,map<int,BmnSiliconMapping*> > : new map<unsigned int,map<int,BmnSiliconMapping*> >;
   }
   static void *newArray_maplEunsignedsPintcOmaplEintcOBmnSiliconMappingmUgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,map<int,BmnSiliconMapping*> >[nElements] : new map<unsigned int,map<int,BmnSiliconMapping*> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcOmaplEintcOBmnSiliconMappingmUgRsPgR(void *p) {
      delete ((map<unsigned int,map<int,BmnSiliconMapping*> >*)p);
   }
   static void deleteArray_maplEunsignedsPintcOmaplEintcOBmnSiliconMappingmUgRsPgR(void *p) {
      delete [] ((map<unsigned int,map<int,BmnSiliconMapping*> >*)p);
   }
   static void destruct_maplEunsignedsPintcOmaplEintcOBmnSiliconMappingmUgRsPgR(void *p) {
      typedef map<unsigned int,map<int,BmnSiliconMapping*> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,map<int,BmnSiliconMapping*> >

namespace ROOT {
   static TClass *maplEunsignedsPintcOmaplEintcOBmnCscMappingmUgRsPgR_Dictionary();
   static void maplEunsignedsPintcOmaplEintcOBmnCscMappingmUgRsPgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcOmaplEintcOBmnCscMappingmUgRsPgR(void *p = nullptr);
   static void *newArray_maplEunsignedsPintcOmaplEintcOBmnCscMappingmUgRsPgR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcOmaplEintcOBmnCscMappingmUgRsPgR(void *p);
   static void deleteArray_maplEunsignedsPintcOmaplEintcOBmnCscMappingmUgRsPgR(void *p);
   static void destruct_maplEunsignedsPintcOmaplEintcOBmnCscMappingmUgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,map<int,BmnCscMapping*> >*)
   {
      map<unsigned int,map<int,BmnCscMapping*> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,map<int,BmnCscMapping*> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,map<int,BmnCscMapping*> >", -2, "map", 100,
                  typeid(map<unsigned int,map<int,BmnCscMapping*> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcOmaplEintcOBmnCscMappingmUgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned int,map<int,BmnCscMapping*> >) );
      instance.SetNew(&new_maplEunsignedsPintcOmaplEintcOBmnCscMappingmUgRsPgR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcOmaplEintcOBmnCscMappingmUgRsPgR);
      instance.SetDelete(&delete_maplEunsignedsPintcOmaplEintcOBmnCscMappingmUgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcOmaplEintcOBmnCscMappingmUgRsPgR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcOmaplEintcOBmnCscMappingmUgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,map<int,BmnCscMapping*> > >()));

      ::ROOT::AddClassAlternate("map<unsigned int,map<int,BmnCscMapping*> >","std::map<unsigned int, std::map<int, BmnCscMapping*, std::less<int>, std::allocator<std::pair<int const, BmnCscMapping*> > >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, std::map<int, BmnCscMapping*, std::less<int>, std::allocator<std::pair<int const, BmnCscMapping*> > > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<unsigned int,map<int,BmnCscMapping*> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcOmaplEintcOBmnCscMappingmUgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned int,map<int,BmnCscMapping*> >*)nullptr)->GetClass();
      maplEunsignedsPintcOmaplEintcOBmnCscMappingmUgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcOmaplEintcOBmnCscMappingmUgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcOmaplEintcOBmnCscMappingmUgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,map<int,BmnCscMapping*> > : new map<unsigned int,map<int,BmnCscMapping*> >;
   }
   static void *newArray_maplEunsignedsPintcOmaplEintcOBmnCscMappingmUgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,map<int,BmnCscMapping*> >[nElements] : new map<unsigned int,map<int,BmnCscMapping*> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcOmaplEintcOBmnCscMappingmUgRsPgR(void *p) {
      delete ((map<unsigned int,map<int,BmnCscMapping*> >*)p);
   }
   static void deleteArray_maplEunsignedsPintcOmaplEintcOBmnCscMappingmUgRsPgR(void *p) {
      delete [] ((map<unsigned int,map<int,BmnCscMapping*> >*)p);
   }
   static void destruct_maplEunsignedsPintcOmaplEintcOBmnCscMappingmUgRsPgR(void *p) {
      typedef map<unsigned int,map<int,BmnCscMapping*> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,map<int,BmnCscMapping*> >

namespace ROOT {
   static TClass *maplEunsignedsPintcOintgR_Dictionary();
   static void maplEunsignedsPintcOintgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcOintgR(void *p = nullptr);
   static void *newArray_maplEunsignedsPintcOintgR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcOintgR(void *p);
   static void deleteArray_maplEunsignedsPintcOintgR(void *p);
   static void destruct_maplEunsignedsPintcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,int>*)
   {
      map<unsigned int,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,int>", -2, "map", 100,
                  typeid(map<unsigned int,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned int,int>) );
      instance.SetNew(&new_maplEunsignedsPintcOintgR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcOintgR);
      instance.SetDelete(&delete_maplEunsignedsPintcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcOintgR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,int> >()));

      ::ROOT::AddClassAlternate("map<unsigned int,int>","std::map<unsigned int, int, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, int> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<unsigned int,int>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned int,int>*)nullptr)->GetClass();
      maplEunsignedsPintcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,int> : new map<unsigned int,int>;
   }
   static void *newArray_maplEunsignedsPintcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,int>[nElements] : new map<unsigned int,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcOintgR(void *p) {
      delete ((map<unsigned int,int>*)p);
   }
   static void deleteArray_maplEunsignedsPintcOintgR(void *p) {
      delete [] ((map<unsigned int,int>*)p);
   }
   static void destruct_maplEunsignedsPintcOintgR(void *p) {
      typedef map<unsigned int,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,int>

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
                  &maplEunsignedsPintcOLong64_tgR_Dictionary, isa_proxy, 0,
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
   static TClass *maplEunsignedsPintcOBmnTof1TDCParametersgR_Dictionary();
   static void maplEunsignedsPintcOBmnTof1TDCParametersgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcOBmnTof1TDCParametersgR(void *p = nullptr);
   static void *newArray_maplEunsignedsPintcOBmnTof1TDCParametersgR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcOBmnTof1TDCParametersgR(void *p);
   static void deleteArray_maplEunsignedsPintcOBmnTof1TDCParametersgR(void *p);
   static void destruct_maplEunsignedsPintcOBmnTof1TDCParametersgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,BmnTof1TDCParameters>*)
   {
      map<unsigned int,BmnTof1TDCParameters> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,BmnTof1TDCParameters>));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,BmnTof1TDCParameters>", -2, "map", 100,
                  typeid(map<unsigned int,BmnTof1TDCParameters>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcOBmnTof1TDCParametersgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned int,BmnTof1TDCParameters>) );
      instance.SetNew(&new_maplEunsignedsPintcOBmnTof1TDCParametersgR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcOBmnTof1TDCParametersgR);
      instance.SetDelete(&delete_maplEunsignedsPintcOBmnTof1TDCParametersgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcOBmnTof1TDCParametersgR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcOBmnTof1TDCParametersgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,BmnTof1TDCParameters> >()));

      ::ROOT::AddClassAlternate("map<unsigned int,BmnTof1TDCParameters>","std::map<unsigned int, BmnTof1TDCParameters, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, BmnTof1TDCParameters> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<unsigned int,BmnTof1TDCParameters>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcOBmnTof1TDCParametersgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned int,BmnTof1TDCParameters>*)nullptr)->GetClass();
      maplEunsignedsPintcOBmnTof1TDCParametersgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcOBmnTof1TDCParametersgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcOBmnTof1TDCParametersgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,BmnTof1TDCParameters> : new map<unsigned int,BmnTof1TDCParameters>;
   }
   static void *newArray_maplEunsignedsPintcOBmnTof1TDCParametersgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,BmnTof1TDCParameters>[nElements] : new map<unsigned int,BmnTof1TDCParameters>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcOBmnTof1TDCParametersgR(void *p) {
      delete ((map<unsigned int,BmnTof1TDCParameters>*)p);
   }
   static void deleteArray_maplEunsignedsPintcOBmnTof1TDCParametersgR(void *p) {
      delete [] ((map<unsigned int,BmnTof1TDCParameters>*)p);
   }
   static void destruct_maplEunsignedsPintcOBmnTof1TDCParametersgR(void *p) {
      typedef map<unsigned int,BmnTof1TDCParameters> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,BmnTof1TDCParameters>

namespace ROOT {
   static TClass *maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR_Dictionary();
   static void maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR_TClassManip(TClass*);
   static void *new_maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR(void *p = nullptr);
   static void *newArray_maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR(Long_t size, void *p);
   static void delete_maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR(void *p);
   static void deleteArray_maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR(void *p);
   static void destruct_maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<pair<unsigned int,unsigned char>,unsigned int>*)
   {
      map<pair<unsigned int,unsigned char>,unsigned int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<pair<unsigned int,unsigned char>,unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<pair<unsigned int,unsigned char>,unsigned int>", -2, "map", 100,
                  typeid(map<pair<unsigned int,unsigned char>,unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<pair<unsigned int,unsigned char>,unsigned int>) );
      instance.SetNew(&new_maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR);
      instance.SetNewArray(&newArray_maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR);
      instance.SetDelete(&delete_maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR);
      instance.SetDestructor(&destruct_maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<pair<unsigned int,unsigned char>,unsigned int> >()));

      ::ROOT::AddClassAlternate("map<pair<unsigned int,unsigned char>,unsigned int>","std::map<std::pair<unsigned int, unsigned char>, unsigned int, std::less<std::pair<unsigned int, unsigned char> >, std::allocator<std::pair<std::pair<unsigned int, unsigned char> const, unsigned int> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<pair<unsigned int,unsigned char>,unsigned int>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<pair<unsigned int,unsigned char>,unsigned int>*)nullptr)->GetClass();
      maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<pair<unsigned int,unsigned char>,unsigned int> : new map<pair<unsigned int,unsigned char>,unsigned int>;
   }
   static void *newArray_maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<pair<unsigned int,unsigned char>,unsigned int>[nElements] : new map<pair<unsigned int,unsigned char>,unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR(void *p) {
      delete ((map<pair<unsigned int,unsigned char>,unsigned int>*)p);
   }
   static void deleteArray_maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR(void *p) {
      delete [] ((map<pair<unsigned int,unsigned char>,unsigned int>*)p);
   }
   static void destruct_maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR(void *p) {
      typedef map<pair<unsigned int,unsigned char>,unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<pair<unsigned int,unsigned char>,unsigned int>

namespace ROOT {
   static TClass *maplEpairlEunsignedsPintcOunsignedsPchargRcOProfiMapgR_Dictionary();
   static void maplEpairlEunsignedsPintcOunsignedsPchargRcOProfiMapgR_TClassManip(TClass*);
   static void *new_maplEpairlEunsignedsPintcOunsignedsPchargRcOProfiMapgR(void *p = nullptr);
   static void *newArray_maplEpairlEunsignedsPintcOunsignedsPchargRcOProfiMapgR(Long_t size, void *p);
   static void delete_maplEpairlEunsignedsPintcOunsignedsPchargRcOProfiMapgR(void *p);
   static void deleteArray_maplEpairlEunsignedsPintcOunsignedsPchargRcOProfiMapgR(void *p);
   static void destruct_maplEpairlEunsignedsPintcOunsignedsPchargRcOProfiMapgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<pair<unsigned int,unsigned char>,ProfiMap>*)
   {
      map<pair<unsigned int,unsigned char>,ProfiMap> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<pair<unsigned int,unsigned char>,ProfiMap>));
      static ::ROOT::TGenericClassInfo 
         instance("map<pair<unsigned int,unsigned char>,ProfiMap>", -2, "map", 100,
                  typeid(map<pair<unsigned int,unsigned char>,ProfiMap>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEpairlEunsignedsPintcOunsignedsPchargRcOProfiMapgR_Dictionary, isa_proxy, 0,
                  sizeof(map<pair<unsigned int,unsigned char>,ProfiMap>) );
      instance.SetNew(&new_maplEpairlEunsignedsPintcOunsignedsPchargRcOProfiMapgR);
      instance.SetNewArray(&newArray_maplEpairlEunsignedsPintcOunsignedsPchargRcOProfiMapgR);
      instance.SetDelete(&delete_maplEpairlEunsignedsPintcOunsignedsPchargRcOProfiMapgR);
      instance.SetDeleteArray(&deleteArray_maplEpairlEunsignedsPintcOunsignedsPchargRcOProfiMapgR);
      instance.SetDestructor(&destruct_maplEpairlEunsignedsPintcOunsignedsPchargRcOProfiMapgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<pair<unsigned int,unsigned char>,ProfiMap> >()));

      ::ROOT::AddClassAlternate("map<pair<unsigned int,unsigned char>,ProfiMap>","std::map<std::pair<unsigned int, unsigned char>, ProfiMap, std::less<std::pair<unsigned int, unsigned char> >, std::allocator<std::pair<std::pair<unsigned int, unsigned char> const, ProfiMap> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<pair<unsigned int,unsigned char>,ProfiMap>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEpairlEunsignedsPintcOunsignedsPchargRcOProfiMapgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<pair<unsigned int,unsigned char>,ProfiMap>*)nullptr)->GetClass();
      maplEpairlEunsignedsPintcOunsignedsPchargRcOProfiMapgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEpairlEunsignedsPintcOunsignedsPchargRcOProfiMapgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEpairlEunsignedsPintcOunsignedsPchargRcOProfiMapgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<pair<unsigned int,unsigned char>,ProfiMap> : new map<pair<unsigned int,unsigned char>,ProfiMap>;
   }
   static void *newArray_maplEpairlEunsignedsPintcOunsignedsPchargRcOProfiMapgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<pair<unsigned int,unsigned char>,ProfiMap>[nElements] : new map<pair<unsigned int,unsigned char>,ProfiMap>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEpairlEunsignedsPintcOunsignedsPchargRcOProfiMapgR(void *p) {
      delete ((map<pair<unsigned int,unsigned char>,ProfiMap>*)p);
   }
   static void deleteArray_maplEpairlEunsignedsPintcOunsignedsPchargRcOProfiMapgR(void *p) {
      delete [] ((map<pair<unsigned int,unsigned char>,ProfiMap>*)p);
   }
   static void destruct_maplEpairlEunsignedsPintcOunsignedsPchargRcOProfiMapgR(void *p) {
      typedef map<pair<unsigned int,unsigned char>,ProfiMap> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<pair<unsigned int,unsigned char>,ProfiMap>

namespace ROOT {
   static TClass *maplEpairlEunsignedsPintcOunsignedsPchargRcOBmnTrigParametersmUgR_Dictionary();
   static void maplEpairlEunsignedsPintcOunsignedsPchargRcOBmnTrigParametersmUgR_TClassManip(TClass*);
   static void *new_maplEpairlEunsignedsPintcOunsignedsPchargRcOBmnTrigParametersmUgR(void *p = nullptr);
   static void *newArray_maplEpairlEunsignedsPintcOunsignedsPchargRcOBmnTrigParametersmUgR(Long_t size, void *p);
   static void delete_maplEpairlEunsignedsPintcOunsignedsPchargRcOBmnTrigParametersmUgR(void *p);
   static void deleteArray_maplEpairlEunsignedsPintcOunsignedsPchargRcOBmnTrigParametersmUgR(void *p);
   static void destruct_maplEpairlEunsignedsPintcOunsignedsPchargRcOBmnTrigParametersmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<pair<unsigned int,unsigned char>,BmnTrigParameters*>*)
   {
      map<pair<unsigned int,unsigned char>,BmnTrigParameters*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<pair<unsigned int,unsigned char>,BmnTrigParameters*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<pair<unsigned int,unsigned char>,BmnTrigParameters*>", -2, "map", 100,
                  typeid(map<pair<unsigned int,unsigned char>,BmnTrigParameters*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEpairlEunsignedsPintcOunsignedsPchargRcOBmnTrigParametersmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<pair<unsigned int,unsigned char>,BmnTrigParameters*>) );
      instance.SetNew(&new_maplEpairlEunsignedsPintcOunsignedsPchargRcOBmnTrigParametersmUgR);
      instance.SetNewArray(&newArray_maplEpairlEunsignedsPintcOunsignedsPchargRcOBmnTrigParametersmUgR);
      instance.SetDelete(&delete_maplEpairlEunsignedsPintcOunsignedsPchargRcOBmnTrigParametersmUgR);
      instance.SetDeleteArray(&deleteArray_maplEpairlEunsignedsPintcOunsignedsPchargRcOBmnTrigParametersmUgR);
      instance.SetDestructor(&destruct_maplEpairlEunsignedsPintcOunsignedsPchargRcOBmnTrigParametersmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<pair<unsigned int,unsigned char>,BmnTrigParameters*> >()));

      ::ROOT::AddClassAlternate("map<pair<unsigned int,unsigned char>,BmnTrigParameters*>","std::map<std::pair<unsigned int, unsigned char>, BmnTrigParameters*, std::less<std::pair<unsigned int, unsigned char> >, std::allocator<std::pair<std::pair<unsigned int, unsigned char> const, BmnTrigParameters*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<pair<unsigned int,unsigned char>,BmnTrigParameters*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEpairlEunsignedsPintcOunsignedsPchargRcOBmnTrigParametersmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<pair<unsigned int,unsigned char>,BmnTrigParameters*>*)nullptr)->GetClass();
      maplEpairlEunsignedsPintcOunsignedsPchargRcOBmnTrigParametersmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEpairlEunsignedsPintcOunsignedsPchargRcOBmnTrigParametersmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEpairlEunsignedsPintcOunsignedsPchargRcOBmnTrigParametersmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<pair<unsigned int,unsigned char>,BmnTrigParameters*> : new map<pair<unsigned int,unsigned char>,BmnTrigParameters*>;
   }
   static void *newArray_maplEpairlEunsignedsPintcOunsignedsPchargRcOBmnTrigParametersmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<pair<unsigned int,unsigned char>,BmnTrigParameters*>[nElements] : new map<pair<unsigned int,unsigned char>,BmnTrigParameters*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEpairlEunsignedsPintcOunsignedsPchargRcOBmnTrigParametersmUgR(void *p) {
      delete ((map<pair<unsigned int,unsigned char>,BmnTrigParameters*>*)p);
   }
   static void deleteArray_maplEpairlEunsignedsPintcOunsignedsPchargRcOBmnTrigParametersmUgR(void *p) {
      delete [] ((map<pair<unsigned int,unsigned char>,BmnTrigParameters*>*)p);
   }
   static void destruct_maplEpairlEunsignedsPintcOunsignedsPchargRcOBmnTrigParametersmUgR(void *p) {
      typedef map<pair<unsigned int,unsigned char>,BmnTrigParameters*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<pair<unsigned int,unsigned char>,BmnTrigParameters*>

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

namespace ROOT {
   static TClass *maplEintcOBmnSiliconMappingmUgR_Dictionary();
   static void maplEintcOBmnSiliconMappingmUgR_TClassManip(TClass*);
   static void *new_maplEintcOBmnSiliconMappingmUgR(void *p = nullptr);
   static void *newArray_maplEintcOBmnSiliconMappingmUgR(Long_t size, void *p);
   static void delete_maplEintcOBmnSiliconMappingmUgR(void *p);
   static void deleteArray_maplEintcOBmnSiliconMappingmUgR(void *p);
   static void destruct_maplEintcOBmnSiliconMappingmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,BmnSiliconMapping*>*)
   {
      map<int,BmnSiliconMapping*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,BmnSiliconMapping*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,BmnSiliconMapping*>", -2, "map", 100,
                  typeid(map<int,BmnSiliconMapping*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOBmnSiliconMappingmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,BmnSiliconMapping*>) );
      instance.SetNew(&new_maplEintcOBmnSiliconMappingmUgR);
      instance.SetNewArray(&newArray_maplEintcOBmnSiliconMappingmUgR);
      instance.SetDelete(&delete_maplEintcOBmnSiliconMappingmUgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOBmnSiliconMappingmUgR);
      instance.SetDestructor(&destruct_maplEintcOBmnSiliconMappingmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,BmnSiliconMapping*> >()));

      ::ROOT::AddClassAlternate("map<int,BmnSiliconMapping*>","std::map<int, BmnSiliconMapping*, std::less<int>, std::allocator<std::pair<int const, BmnSiliconMapping*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,BmnSiliconMapping*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOBmnSiliconMappingmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,BmnSiliconMapping*>*)nullptr)->GetClass();
      maplEintcOBmnSiliconMappingmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOBmnSiliconMappingmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOBmnSiliconMappingmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,BmnSiliconMapping*> : new map<int,BmnSiliconMapping*>;
   }
   static void *newArray_maplEintcOBmnSiliconMappingmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,BmnSiliconMapping*>[nElements] : new map<int,BmnSiliconMapping*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOBmnSiliconMappingmUgR(void *p) {
      delete ((map<int,BmnSiliconMapping*>*)p);
   }
   static void deleteArray_maplEintcOBmnSiliconMappingmUgR(void *p) {
      delete [] ((map<int,BmnSiliconMapping*>*)p);
   }
   static void destruct_maplEintcOBmnSiliconMappingmUgR(void *p) {
      typedef map<int,BmnSiliconMapping*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,BmnSiliconMapping*>

namespace ROOT {
   static TClass *maplEintcOBmnCscMappingmUgR_Dictionary();
   static void maplEintcOBmnCscMappingmUgR_TClassManip(TClass*);
   static void *new_maplEintcOBmnCscMappingmUgR(void *p = nullptr);
   static void *newArray_maplEintcOBmnCscMappingmUgR(Long_t size, void *p);
   static void delete_maplEintcOBmnCscMappingmUgR(void *p);
   static void deleteArray_maplEintcOBmnCscMappingmUgR(void *p);
   static void destruct_maplEintcOBmnCscMappingmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,BmnCscMapping*>*)
   {
      map<int,BmnCscMapping*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,BmnCscMapping*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,BmnCscMapping*>", -2, "map", 100,
                  typeid(map<int,BmnCscMapping*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOBmnCscMappingmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,BmnCscMapping*>) );
      instance.SetNew(&new_maplEintcOBmnCscMappingmUgR);
      instance.SetNewArray(&newArray_maplEintcOBmnCscMappingmUgR);
      instance.SetDelete(&delete_maplEintcOBmnCscMappingmUgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOBmnCscMappingmUgR);
      instance.SetDestructor(&destruct_maplEintcOBmnCscMappingmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,BmnCscMapping*> >()));

      ::ROOT::AddClassAlternate("map<int,BmnCscMapping*>","std::map<int, BmnCscMapping*, std::less<int>, std::allocator<std::pair<int const, BmnCscMapping*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,BmnCscMapping*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOBmnCscMappingmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,BmnCscMapping*>*)nullptr)->GetClass();
      maplEintcOBmnCscMappingmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOBmnCscMappingmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOBmnCscMappingmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,BmnCscMapping*> : new map<int,BmnCscMapping*>;
   }
   static void *newArray_maplEintcOBmnCscMappingmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,BmnCscMapping*>[nElements] : new map<int,BmnCscMapping*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOBmnCscMappingmUgR(void *p) {
      delete ((map<int,BmnCscMapping*>*)p);
   }
   static void deleteArray_maplEintcOBmnCscMappingmUgR(void *p) {
      delete [] ((map<int,BmnCscMapping*>*)p);
   }
   static void destruct_maplEintcOBmnCscMappingmUgR(void *p) {
      typedef map<int,BmnCscMapping*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,BmnCscMapping*>

namespace ROOT {
   static TClass *maplETTimeStampcOintgR_Dictionary();
   static void maplETTimeStampcOintgR_TClassManip(TClass*);
   static void *new_maplETTimeStampcOintgR(void *p = nullptr);
   static void *newArray_maplETTimeStampcOintgR(Long_t size, void *p);
   static void delete_maplETTimeStampcOintgR(void *p);
   static void deleteArray_maplETTimeStampcOintgR(void *p);
   static void destruct_maplETTimeStampcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TTimeStamp,int>*)
   {
      map<TTimeStamp,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TTimeStamp,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TTimeStamp,int>", -2, "map", 100,
                  typeid(map<TTimeStamp,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETTimeStampcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TTimeStamp,int>) );
      instance.SetNew(&new_maplETTimeStampcOintgR);
      instance.SetNewArray(&newArray_maplETTimeStampcOintgR);
      instance.SetDelete(&delete_maplETTimeStampcOintgR);
      instance.SetDeleteArray(&deleteArray_maplETTimeStampcOintgR);
      instance.SetDestructor(&destruct_maplETTimeStampcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TTimeStamp,int> >()));

      ::ROOT::AddClassAlternate("map<TTimeStamp,int>","std::map<TTimeStamp, int, std::less<TTimeStamp>, std::allocator<std::pair<TTimeStamp const, int> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TTimeStamp,int>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETTimeStampcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TTimeStamp,int>*)nullptr)->GetClass();
      maplETTimeStampcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETTimeStampcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETTimeStampcOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TTimeStamp,int> : new map<TTimeStamp,int>;
   }
   static void *newArray_maplETTimeStampcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TTimeStamp,int>[nElements] : new map<TTimeStamp,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETTimeStampcOintgR(void *p) {
      delete ((map<TTimeStamp,int>*)p);
   }
   static void deleteArray_maplETTimeStampcOintgR(void *p) {
      delete [] ((map<TTimeStamp,int>*)p);
   }
   static void destruct_maplETTimeStampcOintgR(void *p) {
      typedef map<TTimeStamp,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TTimeStamp,int>

namespace ROOT {
   static TClass *maplETDatimecOvectorlEintgRsPgR_Dictionary();
   static void maplETDatimecOvectorlEintgRsPgR_TClassManip(TClass*);
   static void *new_maplETDatimecOvectorlEintgRsPgR(void *p = nullptr);
   static void *newArray_maplETDatimecOvectorlEintgRsPgR(Long_t size, void *p);
   static void delete_maplETDatimecOvectorlEintgRsPgR(void *p);
   static void deleteArray_maplETDatimecOvectorlEintgRsPgR(void *p);
   static void destruct_maplETDatimecOvectorlEintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TDatime,vector<int> >*)
   {
      map<TDatime,vector<int> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TDatime,vector<int> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<TDatime,vector<int> >", -2, "map", 100,
                  typeid(map<TDatime,vector<int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETDatimecOvectorlEintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TDatime,vector<int> >) );
      instance.SetNew(&new_maplETDatimecOvectorlEintgRsPgR);
      instance.SetNewArray(&newArray_maplETDatimecOvectorlEintgRsPgR);
      instance.SetDelete(&delete_maplETDatimecOvectorlEintgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplETDatimecOvectorlEintgRsPgR);
      instance.SetDestructor(&destruct_maplETDatimecOvectorlEintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TDatime,vector<int> > >()));

      ::ROOT::AddClassAlternate("map<TDatime,vector<int> >","std::map<TDatime, std::vector<int, std::allocator<int> >, std::less<TDatime>, std::allocator<std::pair<TDatime const, std::vector<int, std::allocator<int> > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TDatime,vector<int> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETDatimecOvectorlEintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TDatime,vector<int> >*)nullptr)->GetClass();
      maplETDatimecOvectorlEintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETDatimecOvectorlEintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETDatimecOvectorlEintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TDatime,vector<int> > : new map<TDatime,vector<int> >;
   }
   static void *newArray_maplETDatimecOvectorlEintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TDatime,vector<int> >[nElements] : new map<TDatime,vector<int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETDatimecOvectorlEintgRsPgR(void *p) {
      delete ((map<TDatime,vector<int> >*)p);
   }
   static void deleteArray_maplETDatimecOvectorlEintgRsPgR(void *p) {
      delete [] ((map<TDatime,vector<int> >*)p);
   }
   static void destruct_maplETDatimecOvectorlEintgRsPgR(void *p) {
      typedef map<TDatime,vector<int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TDatime,vector<int> >

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

namespace ROOT {
   static TClass *dequelEunsignedsPintgR_Dictionary();
   static void dequelEunsignedsPintgR_TClassManip(TClass*);
   static void *new_dequelEunsignedsPintgR(void *p = nullptr);
   static void *newArray_dequelEunsignedsPintgR(Long_t size, void *p);
   static void delete_dequelEunsignedsPintgR(void *p);
   static void deleteArray_dequelEunsignedsPintgR(void *p);
   static void destruct_dequelEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const deque<unsigned int>*)
   {
      deque<unsigned int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(deque<unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("deque<unsigned int>", -2, "deque", 849,
                  typeid(deque<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &dequelEunsignedsPintgR_Dictionary, isa_proxy, 0,
                  sizeof(deque<unsigned int>) );
      instance.SetNew(&new_dequelEunsignedsPintgR);
      instance.SetNewArray(&newArray_dequelEunsignedsPintgR);
      instance.SetDelete(&delete_dequelEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_dequelEunsignedsPintgR);
      instance.SetDestructor(&destruct_dequelEunsignedsPintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< deque<unsigned int> >()));

      ::ROOT::AddClassAlternate("deque<unsigned int>","std::deque<unsigned int, std::allocator<unsigned int> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const deque<unsigned int>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *dequelEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const deque<unsigned int>*)nullptr)->GetClass();
      dequelEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void dequelEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_dequelEunsignedsPintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) deque<unsigned int> : new deque<unsigned int>;
   }
   static void *newArray_dequelEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) deque<unsigned int>[nElements] : new deque<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_dequelEunsignedsPintgR(void *p) {
      delete ((deque<unsigned int>*)p);
   }
   static void deleteArray_dequelEunsignedsPintgR(void *p) {
      delete [] ((deque<unsigned int>*)p);
   }
   static void destruct_dequelEunsignedsPintgR(void *p) {
      typedef deque<unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class deque<unsigned int>

namespace {
  void TriggerDictionaryInitialization_G__BmnDecoderDict_Impl() {
    static const char* headers[] = {
"BmnAdcProcessor.h",
"BmnDchRaw2Digit.h",
"BmnMwpcRaw2Digit.h",
"BmnZDCRaw2Digit.h",
"BmnScWallRaw2Digit.h",
"BmnFHCalRaw2Digit.h",
"BmnHodoRaw2Digit.h",
"BmnNdetRaw2Digit.h",
"BmnECALRaw2Digit.h",
"BmnLANDRaw2Digit.h",
"BmnTofCalRaw2Digit.h",
"BmnGemRaw2Digit.h",
"BmnTof2Raw2DigitNew.h",
"BmnTof1Raw2Digit.h",
"BmnSiliconRaw2Digit.h",
"BmnRawDataDecoder.h",
"BmnSlewingTOF700.h",
"BmnTrigRaw2Digit.h",
"BmnCscRaw2Digit.h",
"BmnProfRaw2Digit.h",
"BmnProfAsic2Raw.h",
"BmnMscRaw2Digit.h",
"WfmProcessor.h",
"PronyFitter.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/database/uni_db",
"/data/yaopeng/bmnroot_Yaopeng/database/elog_db",
"/data/yaopeng/bmnroot_Yaopeng/database/tango",
"/data/yaopeng/bmnroot_Yaopeng/database/tools",
"/data/yaopeng/bmnroot_Yaopeng/base",
"/data/yaopeng/bmnroot_Yaopeng/base/data",
"/data/yaopeng/bmnroot_Yaopeng/base/raw",
"/data/yaopeng/bmnroot_Yaopeng/base/header",
"/data/yaopeng/bmnroot_Yaopeng/base/math",
"/data/yaopeng/bmnroot_Yaopeng/detectors/mwpc",
"/data/yaopeng/bmnroot_Yaopeng/detectors/csc",
"/data/yaopeng/bmnroot_Yaopeng/detectors/silicon",
"/data/yaopeng/bmnroot_Yaopeng/detectors/SiBT",
"/data/yaopeng/bmnroot_Yaopeng/detectors/gem",
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
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/cat",
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/cat/vectors",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/decoder/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__BmnDecoderDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$BmnAdcProcessor.h")))  BmnAdcProcessor;
class __attribute__((annotate("$clingAutoload$BmnDchRaw2Digit.h")))  BmnDchRaw2Digit;
class __attribute__((annotate("$clingAutoload$BmnMwpcRaw2Digit.h")))  BmnMwpcRaw2Digit;
class __attribute__((annotate("$clingAutoload$BmnZDCRaw2Digit.h")))  BmnZDCRaw2Digit;
namespace PsdSignalFitting{class __attribute__((annotate("$clingAutoload$PronyFitter.h")))  __attribute__((annotate("$clingAutoload$BmnScWallRaw2Digit.h")))  PronyFitter;}
class __attribute__((annotate("$clingAutoload$WfmProcessor.h")))  __attribute__((annotate("$clingAutoload$BmnScWallRaw2Digit.h")))  WfmProcessor;
class __attribute__((annotate("$clingAutoload$BmnScWallRaw2Digit.h")))  BmnScWallRaw2Digit;
class __attribute__((annotate("$clingAutoload$BmnFHCalRaw2Digit.h")))  BmnFHCalRaw2Digit;
class __attribute__((annotate("$clingAutoload$BmnHodoRaw2Digit.h")))  BmnHodoRaw2Digit;
class __attribute__((annotate("$clingAutoload$BmnNdetRaw2Digit.h")))  BmnNdetRaw2Digit;
class __attribute__((annotate("$clingAutoload$BmnECALRaw2Digit.h")))  BmnECALRaw2Digit;
class __attribute__((annotate("$clingAutoload$BmnLANDRaw2Digit.h")))  BmnLANDRaw2Digit;
class __attribute__((annotate("$clingAutoload$BmnTofCalRaw2Digit.h")))  BmnTofCalRaw2Digit;
class __attribute__((annotate("$clingAutoload$BmnGemRaw2Digit.h")))  BmnGemRaw2Digit;
class __attribute__((annotate("$clingAutoload$BmnTof2Raw2DigitNew.h")))  BmnTof2Raw2DigitNew;
class __attribute__((annotate("$clingAutoload$BmnTof1Raw2Digit.h")))  BmnTof1Raw2Digit;
class __attribute__((annotate("$clingAutoload$BmnSiliconRaw2Digit.h")))  BmnSiliconRaw2Digit;
class __attribute__((annotate("$clingAutoload$BmnTrigRaw2Digit.h")))  __attribute__((annotate("$clingAutoload$BmnRawDataDecoder.h")))  BmnTrigRaw2Digit;
class __attribute__((annotate("$clingAutoload$BmnCscRaw2Digit.h")))  __attribute__((annotate("$clingAutoload$BmnRawDataDecoder.h")))  BmnCscRaw2Digit;
class __attribute__((annotate("$clingAutoload$BmnMscRaw2Digit.h")))  __attribute__((annotate("$clingAutoload$BmnRawDataDecoder.h")))  BmnMscRaw2Digit;
class __attribute__((annotate("$clingAutoload$BmnRawDataDecoder.h")))  BmnRawDataDecoder;
class __attribute__((annotate("$clingAutoload$BmnSlewingTOF700.h")))  BmnSlewingTOF700;
class __attribute__((annotate("$clingAutoload$BmnProfRaw2Digit.h")))  BmnProfRaw2Digit;
class __attribute__((annotate("$clingAutoload$BmnProfAsic2Raw.h")))  BmnProfAsic2Raw;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__BmnDecoderDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "BmnAdcProcessor.h"
#include "BmnDchRaw2Digit.h"
#include "BmnMwpcRaw2Digit.h"
#include "BmnZDCRaw2Digit.h"
#include "BmnScWallRaw2Digit.h"
#include "BmnFHCalRaw2Digit.h"
#include "BmnHodoRaw2Digit.h"
#include "BmnNdetRaw2Digit.h"
#include "BmnECALRaw2Digit.h"
#include "BmnLANDRaw2Digit.h"
#include "BmnTofCalRaw2Digit.h"
#include "BmnGemRaw2Digit.h"
#include "BmnTof2Raw2DigitNew.h"
#include "BmnTof1Raw2Digit.h"
#include "BmnSiliconRaw2Digit.h"
#include "BmnRawDataDecoder.h"
#include "BmnSlewingTOF700.h"
#include "BmnTrigRaw2Digit.h"
#include "BmnCscRaw2Digit.h"
#include "BmnProfRaw2Digit.h"
#include "BmnProfAsic2Raw.h"
#include "BmnMscRaw2Digit.h"
#include "WfmProcessor.h"
#include "PronyFitter.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BmnAdcProcessor", payloadCode, "@",
"BmnCscRaw2Digit", payloadCode, "@",
"BmnDchRaw2Digit", payloadCode, "@",
"BmnECALRaw2Digit", payloadCode, "@",
"BmnFHCalRaw2Digit", payloadCode, "@",
"BmnGemRaw2Digit", payloadCode, "@",
"BmnHodoRaw2Digit", payloadCode, "@",
"BmnLANDRaw2Digit", payloadCode, "@",
"BmnMscRaw2Digit", payloadCode, "@",
"BmnMwpcRaw2Digit", payloadCode, "@",
"BmnNdetRaw2Digit", payloadCode, "@",
"BmnProfAsic2Raw", payloadCode, "@",
"BmnProfRaw2Digit", payloadCode, "@",
"BmnRawDataDecoder", payloadCode, "@",
"BmnScWallRaw2Digit", payloadCode, "@",
"BmnSiliconRaw2Digit", payloadCode, "@",
"BmnSlewingTOF700", payloadCode, "@",
"BmnTof1Raw2Digit", payloadCode, "@",
"BmnTof2Raw2DigitNew", payloadCode, "@",
"BmnTofCalRaw2Digit", payloadCode, "@",
"BmnTrigRaw2Digit", payloadCode, "@",
"BmnZDCRaw2Digit", payloadCode, "@",
"PsdSignalFitting::PronyFitter", payloadCode, "@",
"WfmProcessor", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__BmnDecoderDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__BmnDecoderDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__BmnDecoderDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__BmnDecoderDict() {
  TriggerDictionaryInitialization_G__BmnDecoderDict_Impl();
}
