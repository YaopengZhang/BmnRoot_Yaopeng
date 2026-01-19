// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddImonitordIG__BmnMonitorDict
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
#include "BmnMonitor.h"
#include "BmnDataReceiver.h"
#include "BmnOnlineDecoder.h"
#include "BmnOnlineReco.h"
#include "BmnHistGem.h"
#include "BmnHistCsc.h"
#include "BmnHistSilicon.h"
#include "BmnHistDch.h"
#include "BmnHistMwpc.h"
#include "BmnHistZDC.h"
#include "BmnHistScWall.h"
#include "BmnHistECAL.h"
#include "BmnHistTrigger.h"
#include "BmnHistToF.h"
#include "BmnHistToF700.h"
#include "BmnHistSrc.h"
#include "BmnHistLAND.h"
#include "BmnHistTofCal.h"
#include "BmnMQSource.h"
#include "BmnMQSink.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BmnDataReceiver(void *p = nullptr);
   static void *newArray_BmnDataReceiver(Long_t size, void *p);
   static void delete_BmnDataReceiver(void *p);
   static void deleteArray_BmnDataReceiver(void *p);
   static void destruct_BmnDataReceiver(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnDataReceiver*)
   {
      ::BmnDataReceiver *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnDataReceiver >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnDataReceiver", ::BmnDataReceiver::Class_Version(), "BmnDataReceiver.h", 33,
                  typeid(::BmnDataReceiver), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnDataReceiver::Dictionary, isa_proxy, 4,
                  sizeof(::BmnDataReceiver) );
      instance.SetNew(&new_BmnDataReceiver);
      instance.SetNewArray(&newArray_BmnDataReceiver);
      instance.SetDelete(&delete_BmnDataReceiver);
      instance.SetDeleteArray(&deleteArray_BmnDataReceiver);
      instance.SetDestructor(&destruct_BmnDataReceiver);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnDataReceiver*)
   {
      return GenerateInitInstanceLocal((::BmnDataReceiver*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnDataReceiver*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnHistToF(void *p);
   static void deleteArray_BmnHistToF(void *p);
   static void destruct_BmnHistToF(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHistToF*)
   {
      ::BmnHistToF *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHistToF >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHistToF", ::BmnHistToF::Class_Version(), "BmnHistToF.h", 40,
                  typeid(::BmnHistToF), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHistToF::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHistToF) );
      instance.SetDelete(&delete_BmnHistToF);
      instance.SetDeleteArray(&deleteArray_BmnHistToF);
      instance.SetDestructor(&destruct_BmnHistToF);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHistToF*)
   {
      return GenerateInitInstanceLocal((::BmnHistToF*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHistToF*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnHistToF700(void *p = nullptr);
   static void *newArray_BmnHistToF700(Long_t size, void *p);
   static void delete_BmnHistToF700(void *p);
   static void deleteArray_BmnHistToF700(void *p);
   static void destruct_BmnHistToF700(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHistToF700*)
   {
      ::BmnHistToF700 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHistToF700 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHistToF700", ::BmnHistToF700::Class_Version(), "BmnHistToF700.h", 33,
                  typeid(::BmnHistToF700), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHistToF700::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHistToF700) );
      instance.SetNew(&new_BmnHistToF700);
      instance.SetNewArray(&newArray_BmnHistToF700);
      instance.SetDelete(&delete_BmnHistToF700);
      instance.SetDeleteArray(&deleteArray_BmnHistToF700);
      instance.SetDestructor(&destruct_BmnHistToF700);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHistToF700*)
   {
      return GenerateInitInstanceLocal((::BmnHistToF700*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHistToF700*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnHistTrigger(void *p = nullptr);
   static void *newArray_BmnHistTrigger(Long_t size, void *p);
   static void delete_BmnHistTrigger(void *p);
   static void deleteArray_BmnHistTrigger(void *p);
   static void destruct_BmnHistTrigger(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHistTrigger*)
   {
      ::BmnHistTrigger *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHistTrigger >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHistTrigger", ::BmnHistTrigger::Class_Version(), "BmnHistTrigger.h", 37,
                  typeid(::BmnHistTrigger), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHistTrigger::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHistTrigger) );
      instance.SetNew(&new_BmnHistTrigger);
      instance.SetNewArray(&newArray_BmnHistTrigger);
      instance.SetDelete(&delete_BmnHistTrigger);
      instance.SetDeleteArray(&deleteArray_BmnHistTrigger);
      instance.SetDestructor(&destruct_BmnHistTrigger);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHistTrigger*)
   {
      return GenerateInitInstanceLocal((::BmnHistTrigger*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHistTrigger*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnHistDch(void *p);
   static void deleteArray_BmnHistDch(void *p);
   static void destruct_BmnHistDch(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHistDch*)
   {
      ::BmnHistDch *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHistDch >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHistDch", ::BmnHistDch::Class_Version(), "BmnHistDch.h", 48,
                  typeid(::BmnHistDch), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHistDch::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHistDch) );
      instance.SetDelete(&delete_BmnHistDch);
      instance.SetDeleteArray(&deleteArray_BmnHistDch);
      instance.SetDestructor(&destruct_BmnHistDch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHistDch*)
   {
      return GenerateInitInstanceLocal((::BmnHistDch*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHistDch*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnHistMwpc(void *p);
   static void deleteArray_BmnHistMwpc(void *p);
   static void destruct_BmnHistMwpc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHistMwpc*)
   {
      ::BmnHistMwpc *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHistMwpc >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHistMwpc", ::BmnHistMwpc::Class_Version(), "BmnHistMwpc.h", 41,
                  typeid(::BmnHistMwpc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHistMwpc::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHistMwpc) );
      instance.SetDelete(&delete_BmnHistMwpc);
      instance.SetDeleteArray(&deleteArray_BmnHistMwpc);
      instance.SetDestructor(&destruct_BmnHistMwpc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHistMwpc*)
   {
      return GenerateInitInstanceLocal((::BmnHistMwpc*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHistMwpc*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnHistGem(void *p);
   static void deleteArray_BmnHistGem(void *p);
   static void destruct_BmnHistGem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHistGem*)
   {
      ::BmnHistGem *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHistGem >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHistGem", ::BmnHistGem::Class_Version(), "BmnHistGem.h", 45,
                  typeid(::BmnHistGem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHistGem::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHistGem) );
      instance.SetDelete(&delete_BmnHistGem);
      instance.SetDeleteArray(&deleteArray_BmnHistGem);
      instance.SetDestructor(&destruct_BmnHistGem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHistGem*)
   {
      return GenerateInitInstanceLocal((::BmnHistGem*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHistGem*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnOnlineDecoder(void *p = nullptr);
   static void *newArray_BmnOnlineDecoder(Long_t size, void *p);
   static void delete_BmnOnlineDecoder(void *p);
   static void deleteArray_BmnOnlineDecoder(void *p);
   static void destruct_BmnOnlineDecoder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnOnlineDecoder*)
   {
      ::BmnOnlineDecoder *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnOnlineDecoder >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnOnlineDecoder", ::BmnOnlineDecoder::Class_Version(), "BmnOnlineDecoder.h", 60,
                  typeid(::BmnOnlineDecoder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnOnlineDecoder::Dictionary, isa_proxy, 4,
                  sizeof(::BmnOnlineDecoder) );
      instance.SetNew(&new_BmnOnlineDecoder);
      instance.SetNewArray(&newArray_BmnOnlineDecoder);
      instance.SetDelete(&delete_BmnOnlineDecoder);
      instance.SetDeleteArray(&deleteArray_BmnOnlineDecoder);
      instance.SetDestructor(&destruct_BmnOnlineDecoder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnOnlineDecoder*)
   {
      return GenerateInitInstanceLocal((::BmnOnlineDecoder*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnOnlineDecoder*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnHistZDC(void *p = nullptr);
   static void *newArray_BmnHistZDC(Long_t size, void *p);
   static void delete_BmnHistZDC(void *p);
   static void deleteArray_BmnHistZDC(void *p);
   static void destruct_BmnHistZDC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHistZDC*)
   {
      ::BmnHistZDC *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHistZDC >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHistZDC", ::BmnHistZDC::Class_Version(), "BmnHistZDC.h", 23,
                  typeid(::BmnHistZDC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHistZDC::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHistZDC) );
      instance.SetNew(&new_BmnHistZDC);
      instance.SetNewArray(&newArray_BmnHistZDC);
      instance.SetDelete(&delete_BmnHistZDC);
      instance.SetDeleteArray(&deleteArray_BmnHistZDC);
      instance.SetDestructor(&destruct_BmnHistZDC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHistZDC*)
   {
      return GenerateInitInstanceLocal((::BmnHistZDC*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHistZDC*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnHistScWall(void *p = nullptr);
   static void *newArray_BmnHistScWall(Long_t size, void *p);
   static void delete_BmnHistScWall(void *p);
   static void deleteArray_BmnHistScWall(void *p);
   static void destruct_BmnHistScWall(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHistScWall*)
   {
      ::BmnHistScWall *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHistScWall >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHistScWall", ::BmnHistScWall::Class_Version(), "BmnHistScWall.h", 24,
                  typeid(::BmnHistScWall), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHistScWall::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHistScWall) );
      instance.SetNew(&new_BmnHistScWall);
      instance.SetNewArray(&newArray_BmnHistScWall);
      instance.SetDelete(&delete_BmnHistScWall);
      instance.SetDeleteArray(&deleteArray_BmnHistScWall);
      instance.SetDestructor(&destruct_BmnHistScWall);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHistScWall*)
   {
      return GenerateInitInstanceLocal((::BmnHistScWall*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHistScWall*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnHistECAL(void *p);
   static void deleteArray_BmnHistECAL(void *p);
   static void destruct_BmnHistECAL(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHistECAL*)
   {
      ::BmnHistECAL *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHistECAL >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHistECAL", ::BmnHistECAL::Class_Version(), "BmnHistECAL.h", 23,
                  typeid(::BmnHistECAL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHistECAL::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHistECAL) );
      instance.SetDelete(&delete_BmnHistECAL);
      instance.SetDeleteArray(&deleteArray_BmnHistECAL);
      instance.SetDestructor(&destruct_BmnHistECAL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHistECAL*)
   {
      return GenerateInitInstanceLocal((::BmnHistECAL*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHistECAL*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnHistLAND(void *p);
   static void deleteArray_BmnHistLAND(void *p);
   static void destruct_BmnHistLAND(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHistLAND*)
   {
      ::BmnHistLAND *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHistLAND >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHistLAND", ::BmnHistLAND::Class_Version(), "BmnHistLAND.h", 39,
                  typeid(::BmnHistLAND), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHistLAND::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHistLAND) );
      instance.SetDelete(&delete_BmnHistLAND);
      instance.SetDeleteArray(&deleteArray_BmnHistLAND);
      instance.SetDestructor(&destruct_BmnHistLAND);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHistLAND*)
   {
      return GenerateInitInstanceLocal((::BmnHistLAND*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHistLAND*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnHistTofCal(void *p);
   static void deleteArray_BmnHistTofCal(void *p);
   static void destruct_BmnHistTofCal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHistTofCal*)
   {
      ::BmnHistTofCal *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHistTofCal >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHistTofCal", ::BmnHistTofCal::Class_Version(), "BmnHistTofCal.h", 26,
                  typeid(::BmnHistTofCal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHistTofCal::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHistTofCal) );
      instance.SetDelete(&delete_BmnHistTofCal);
      instance.SetDeleteArray(&deleteArray_BmnHistTofCal);
      instance.SetDestructor(&destruct_BmnHistTofCal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHistTofCal*)
   {
      return GenerateInitInstanceLocal((::BmnHistTofCal*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHistTofCal*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnHistSilicon(void *p);
   static void deleteArray_BmnHistSilicon(void *p);
   static void destruct_BmnHistSilicon(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHistSilicon*)
   {
      ::BmnHistSilicon *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHistSilicon >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHistSilicon", ::BmnHistSilicon::Class_Version(), "BmnHistSilicon.h", 38,
                  typeid(::BmnHistSilicon), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHistSilicon::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHistSilicon) );
      instance.SetDelete(&delete_BmnHistSilicon);
      instance.SetDeleteArray(&deleteArray_BmnHistSilicon);
      instance.SetDestructor(&destruct_BmnHistSilicon);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHistSilicon*)
   {
      return GenerateInitInstanceLocal((::BmnHistSilicon*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHistSilicon*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnHistCsc(void *p);
   static void deleteArray_BmnHistCsc(void *p);
   static void destruct_BmnHistCsc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHistCsc*)
   {
      ::BmnHistCsc *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHistCsc >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHistCsc", ::BmnHistCsc::Class_Version(), "BmnHistCsc.h", 36,
                  typeid(::BmnHistCsc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHistCsc::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHistCsc) );
      instance.SetDelete(&delete_BmnHistCsc);
      instance.SetDeleteArray(&deleteArray_BmnHistCsc);
      instance.SetDestructor(&destruct_BmnHistCsc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHistCsc*)
   {
      return GenerateInitInstanceLocal((::BmnHistCsc*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHistCsc*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnHistSrc(void *p);
   static void deleteArray_BmnHistSrc(void *p);
   static void destruct_BmnHistSrc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHistSrc*)
   {
      ::BmnHistSrc *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHistSrc >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHistSrc", ::BmnHistSrc::Class_Version(), "BmnHistSrc.h", 29,
                  typeid(::BmnHistSrc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHistSrc::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHistSrc) );
      instance.SetDelete(&delete_BmnHistSrc);
      instance.SetDeleteArray(&deleteArray_BmnHistSrc);
      instance.SetDestructor(&destruct_BmnHistSrc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHistSrc*)
   {
      return GenerateInitInstanceLocal((::BmnHistSrc*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHistSrc*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMonitor(void *p = nullptr);
   static void *newArray_BmnMonitor(Long_t size, void *p);
   static void delete_BmnMonitor(void *p);
   static void deleteArray_BmnMonitor(void *p);
   static void destruct_BmnMonitor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMonitor*)
   {
      ::BmnMonitor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMonitor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMonitor", ::BmnMonitor::Class_Version(), "BmnMonitor.h", 58,
                  typeid(::BmnMonitor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMonitor::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMonitor) );
      instance.SetNew(&new_BmnMonitor);
      instance.SetNewArray(&newArray_BmnMonitor);
      instance.SetDelete(&delete_BmnMonitor);
      instance.SetDeleteArray(&deleteArray_BmnMonitor);
      instance.SetDestructor(&destruct_BmnMonitor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMonitor*)
   {
      return GenerateInitInstanceLocal((::BmnMonitor*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMonitor*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnParts(void *p = nullptr);
   static void *newArray_BmnParts(Long_t size, void *p);
   static void delete_BmnParts(void *p);
   static void deleteArray_BmnParts(void *p);
   static void destruct_BmnParts(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnParts*)
   {
      ::BmnParts *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnParts >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnParts", ::BmnParts::Class_Version(), "BmnParts.h", 11,
                  typeid(::BmnParts), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnParts::Dictionary, isa_proxy, 4,
                  sizeof(::BmnParts) );
      instance.SetNew(&new_BmnParts);
      instance.SetNewArray(&newArray_BmnParts);
      instance.SetDelete(&delete_BmnParts);
      instance.SetDeleteArray(&deleteArray_BmnParts);
      instance.SetDestructor(&destruct_BmnParts);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnParts*)
   {
      return GenerateInitInstanceLocal((::BmnParts*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnParts*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMQSink(void *p = nullptr);
   static void *newArray_BmnMQSink(Long_t size, void *p);
   static void delete_BmnMQSink(void *p);
   static void deleteArray_BmnMQSink(void *p);
   static void destruct_BmnMQSink(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMQSink*)
   {
      ::BmnMQSink *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMQSink >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMQSink", ::BmnMQSink::Class_Version(), "BmnMQSink.h", 36,
                  typeid(::BmnMQSink), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMQSink::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMQSink) );
      instance.SetNew(&new_BmnMQSink);
      instance.SetNewArray(&newArray_BmnMQSink);
      instance.SetDelete(&delete_BmnMQSink);
      instance.SetDeleteArray(&deleteArray_BmnMQSink);
      instance.SetDestructor(&destruct_BmnMQSink);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMQSink*)
   {
      return GenerateInitInstanceLocal((::BmnMQSink*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMQSink*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnOnlineReco(void *p = nullptr);
   static void *newArray_BmnOnlineReco(Long_t size, void *p);
   static void delete_BmnOnlineReco(void *p);
   static void deleteArray_BmnOnlineReco(void *p);
   static void destruct_BmnOnlineReco(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnOnlineReco*)
   {
      ::BmnOnlineReco *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnOnlineReco >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnOnlineReco", ::BmnOnlineReco::Class_Version(), "BmnOnlineReco.h", 63,
                  typeid(::BmnOnlineReco), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnOnlineReco::Dictionary, isa_proxy, 4,
                  sizeof(::BmnOnlineReco) );
      instance.SetNew(&new_BmnOnlineReco);
      instance.SetNewArray(&newArray_BmnOnlineReco);
      instance.SetDelete(&delete_BmnOnlineReco);
      instance.SetDeleteArray(&deleteArray_BmnOnlineReco);
      instance.SetDestructor(&destruct_BmnOnlineReco);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnOnlineReco*)
   {
      return GenerateInitInstanceLocal((::BmnOnlineReco*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnOnlineReco*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMQSource(void *p = nullptr);
   static void *newArray_BmnMQSource(Long_t size, void *p);
   static void delete_BmnMQSource(void *p);
   static void deleteArray_BmnMQSource(void *p);
   static void destruct_BmnMQSource(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMQSource*)
   {
      ::BmnMQSource *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMQSource >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMQSource", ::BmnMQSource::Class_Version(), "BmnMQSource.h", 30,
                  typeid(::BmnMQSource), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMQSource::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMQSource) );
      instance.SetNew(&new_BmnMQSource);
      instance.SetNewArray(&newArray_BmnMQSource);
      instance.SetDelete(&delete_BmnMQSource);
      instance.SetDeleteArray(&deleteArray_BmnMQSource);
      instance.SetDestructor(&destruct_BmnMQSource);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMQSource*)
   {
      return GenerateInitInstanceLocal((::BmnMQSource*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMQSource*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnDataReceiver::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnDataReceiver::Class_Name()
{
   return "BmnDataReceiver";
}

//______________________________________________________________________________
const char *BmnDataReceiver::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDataReceiver*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnDataReceiver::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDataReceiver*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnDataReceiver::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDataReceiver*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnDataReceiver::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDataReceiver*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHistToF::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHistToF::Class_Name()
{
   return "BmnHistToF";
}

//______________________________________________________________________________
const char *BmnHistToF::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistToF*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHistToF::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistToF*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHistToF::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistToF*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHistToF::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistToF*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHistToF700::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHistToF700::Class_Name()
{
   return "BmnHistToF700";
}

//______________________________________________________________________________
const char *BmnHistToF700::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistToF700*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHistToF700::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistToF700*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHistToF700::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistToF700*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHistToF700::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistToF700*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHistTrigger::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHistTrigger::Class_Name()
{
   return "BmnHistTrigger";
}

//______________________________________________________________________________
const char *BmnHistTrigger::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistTrigger*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHistTrigger::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistTrigger*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHistTrigger::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistTrigger*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHistTrigger::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistTrigger*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHistDch::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHistDch::Class_Name()
{
   return "BmnHistDch";
}

//______________________________________________________________________________
const char *BmnHistDch::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistDch*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHistDch::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistDch*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHistDch::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistDch*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHistDch::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistDch*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHistMwpc::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHistMwpc::Class_Name()
{
   return "BmnHistMwpc";
}

//______________________________________________________________________________
const char *BmnHistMwpc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistMwpc*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHistMwpc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistMwpc*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHistMwpc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistMwpc*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHistMwpc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistMwpc*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHistGem::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHistGem::Class_Name()
{
   return "BmnHistGem";
}

//______________________________________________________________________________
const char *BmnHistGem::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistGem*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHistGem::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistGem*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHistGem::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistGem*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHistGem::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistGem*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnOnlineDecoder::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnOnlineDecoder::Class_Name()
{
   return "BmnOnlineDecoder";
}

//______________________________________________________________________________
const char *BmnOnlineDecoder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnOnlineDecoder*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnOnlineDecoder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnOnlineDecoder*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnOnlineDecoder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnOnlineDecoder*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnOnlineDecoder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnOnlineDecoder*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHistZDC::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHistZDC::Class_Name()
{
   return "BmnHistZDC";
}

//______________________________________________________________________________
const char *BmnHistZDC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistZDC*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHistZDC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistZDC*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHistZDC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistZDC*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHistZDC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistZDC*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHistScWall::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHistScWall::Class_Name()
{
   return "BmnHistScWall";
}

//______________________________________________________________________________
const char *BmnHistScWall::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistScWall*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHistScWall::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistScWall*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHistScWall::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistScWall*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHistScWall::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistScWall*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHistECAL::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHistECAL::Class_Name()
{
   return "BmnHistECAL";
}

//______________________________________________________________________________
const char *BmnHistECAL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistECAL*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHistECAL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistECAL*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHistECAL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistECAL*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHistECAL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistECAL*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHistLAND::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHistLAND::Class_Name()
{
   return "BmnHistLAND";
}

//______________________________________________________________________________
const char *BmnHistLAND::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistLAND*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHistLAND::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistLAND*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHistLAND::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistLAND*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHistLAND::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistLAND*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHistTofCal::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHistTofCal::Class_Name()
{
   return "BmnHistTofCal";
}

//______________________________________________________________________________
const char *BmnHistTofCal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistTofCal*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHistTofCal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistTofCal*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHistTofCal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistTofCal*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHistTofCal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistTofCal*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHistSilicon::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHistSilicon::Class_Name()
{
   return "BmnHistSilicon";
}

//______________________________________________________________________________
const char *BmnHistSilicon::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistSilicon*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHistSilicon::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistSilicon*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHistSilicon::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistSilicon*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHistSilicon::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistSilicon*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHistCsc::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHistCsc::Class_Name()
{
   return "BmnHistCsc";
}

//______________________________________________________________________________
const char *BmnHistCsc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistCsc*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHistCsc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistCsc*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHistCsc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistCsc*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHistCsc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistCsc*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHistSrc::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHistSrc::Class_Name()
{
   return "BmnHistSrc";
}

//______________________________________________________________________________
const char *BmnHistSrc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistSrc*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHistSrc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistSrc*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHistSrc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistSrc*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHistSrc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistSrc*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMonitor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMonitor::Class_Name()
{
   return "BmnMonitor";
}

//______________________________________________________________________________
const char *BmnMonitor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMonitor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMonitor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMonitor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMonitor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMonitor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMonitor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMonitor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnParts::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnParts::Class_Name()
{
   return "BmnParts";
}

//______________________________________________________________________________
const char *BmnParts::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnParts*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnParts::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnParts*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnParts::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnParts*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnParts::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnParts*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMQSink::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMQSink::Class_Name()
{
   return "BmnMQSink";
}

//______________________________________________________________________________
const char *BmnMQSink::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMQSink*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMQSink::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMQSink*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMQSink::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMQSink*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMQSink::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMQSink*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnOnlineReco::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnOnlineReco::Class_Name()
{
   return "BmnOnlineReco";
}

//______________________________________________________________________________
const char *BmnOnlineReco::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnOnlineReco*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnOnlineReco::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnOnlineReco*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnOnlineReco::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnOnlineReco*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnOnlineReco::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnOnlineReco*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMQSource::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMQSource::Class_Name()
{
   return "BmnMQSource";
}

//______________________________________________________________________________
const char *BmnMQSource::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMQSource*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMQSource::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMQSource*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMQSource::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMQSource*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMQSource::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMQSource*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnDataReceiver::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnDataReceiver.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnDataReceiver::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnDataReceiver::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnDataReceiver(void *p) {
      return  p ? new(p) ::BmnDataReceiver : new ::BmnDataReceiver;
   }
   static void *newArray_BmnDataReceiver(Long_t nElements, void *p) {
      return p ? new(p) ::BmnDataReceiver[nElements] : new ::BmnDataReceiver[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnDataReceiver(void *p) {
      delete ((::BmnDataReceiver*)p);
   }
   static void deleteArray_BmnDataReceiver(void *p) {
      delete [] ((::BmnDataReceiver*)p);
   }
   static void destruct_BmnDataReceiver(void *p) {
      typedef ::BmnDataReceiver current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnDataReceiver

//______________________________________________________________________________
void BmnHistToF::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHistToF.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHistToF::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHistToF::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnHistToF(void *p) {
      delete ((::BmnHistToF*)p);
   }
   static void deleteArray_BmnHistToF(void *p) {
      delete [] ((::BmnHistToF*)p);
   }
   static void destruct_BmnHistToF(void *p) {
      typedef ::BmnHistToF current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHistToF

//______________________________________________________________________________
void BmnHistToF700::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHistToF700.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHistToF700::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHistToF700::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnHistToF700(void *p) {
      return  p ? new(p) ::BmnHistToF700 : new ::BmnHistToF700;
   }
   static void *newArray_BmnHistToF700(Long_t nElements, void *p) {
      return p ? new(p) ::BmnHistToF700[nElements] : new ::BmnHistToF700[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnHistToF700(void *p) {
      delete ((::BmnHistToF700*)p);
   }
   static void deleteArray_BmnHistToF700(void *p) {
      delete [] ((::BmnHistToF700*)p);
   }
   static void destruct_BmnHistToF700(void *p) {
      typedef ::BmnHistToF700 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHistToF700

//______________________________________________________________________________
void BmnHistTrigger::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHistTrigger.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHistTrigger::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHistTrigger::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnHistTrigger(void *p) {
      return  p ? new(p) ::BmnHistTrigger : new ::BmnHistTrigger;
   }
   static void *newArray_BmnHistTrigger(Long_t nElements, void *p) {
      return p ? new(p) ::BmnHistTrigger[nElements] : new ::BmnHistTrigger[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnHistTrigger(void *p) {
      delete ((::BmnHistTrigger*)p);
   }
   static void deleteArray_BmnHistTrigger(void *p) {
      delete [] ((::BmnHistTrigger*)p);
   }
   static void destruct_BmnHistTrigger(void *p) {
      typedef ::BmnHistTrigger current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHistTrigger

//______________________________________________________________________________
void BmnHistDch::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHistDch.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHistDch::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHistDch::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnHistDch(void *p) {
      delete ((::BmnHistDch*)p);
   }
   static void deleteArray_BmnHistDch(void *p) {
      delete [] ((::BmnHistDch*)p);
   }
   static void destruct_BmnHistDch(void *p) {
      typedef ::BmnHistDch current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHistDch

//______________________________________________________________________________
void BmnHistMwpc::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHistMwpc.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHistMwpc::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHistMwpc::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnHistMwpc(void *p) {
      delete ((::BmnHistMwpc*)p);
   }
   static void deleteArray_BmnHistMwpc(void *p) {
      delete [] ((::BmnHistMwpc*)p);
   }
   static void destruct_BmnHistMwpc(void *p) {
      typedef ::BmnHistMwpc current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHistMwpc

//______________________________________________________________________________
void BmnHistGem::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHistGem.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHistGem::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHistGem::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnHistGem(void *p) {
      delete ((::BmnHistGem*)p);
   }
   static void deleteArray_BmnHistGem(void *p) {
      delete [] ((::BmnHistGem*)p);
   }
   static void destruct_BmnHistGem(void *p) {
      typedef ::BmnHistGem current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHistGem

//______________________________________________________________________________
void BmnOnlineDecoder::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnOnlineDecoder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnOnlineDecoder::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnOnlineDecoder::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnOnlineDecoder(void *p) {
      return  p ? new(p) ::BmnOnlineDecoder : new ::BmnOnlineDecoder;
   }
   static void *newArray_BmnOnlineDecoder(Long_t nElements, void *p) {
      return p ? new(p) ::BmnOnlineDecoder[nElements] : new ::BmnOnlineDecoder[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnOnlineDecoder(void *p) {
      delete ((::BmnOnlineDecoder*)p);
   }
   static void deleteArray_BmnOnlineDecoder(void *p) {
      delete [] ((::BmnOnlineDecoder*)p);
   }
   static void destruct_BmnOnlineDecoder(void *p) {
      typedef ::BmnOnlineDecoder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnOnlineDecoder

//______________________________________________________________________________
void BmnHistZDC::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHistZDC.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHistZDC::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHistZDC::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnHistZDC(void *p) {
      return  p ? new(p) ::BmnHistZDC : new ::BmnHistZDC;
   }
   static void *newArray_BmnHistZDC(Long_t nElements, void *p) {
      return p ? new(p) ::BmnHistZDC[nElements] : new ::BmnHistZDC[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnHistZDC(void *p) {
      delete ((::BmnHistZDC*)p);
   }
   static void deleteArray_BmnHistZDC(void *p) {
      delete [] ((::BmnHistZDC*)p);
   }
   static void destruct_BmnHistZDC(void *p) {
      typedef ::BmnHistZDC current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHistZDC

//______________________________________________________________________________
void BmnHistScWall::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHistScWall.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHistScWall::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHistScWall::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnHistScWall(void *p) {
      return  p ? new(p) ::BmnHistScWall : new ::BmnHistScWall;
   }
   static void *newArray_BmnHistScWall(Long_t nElements, void *p) {
      return p ? new(p) ::BmnHistScWall[nElements] : new ::BmnHistScWall[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnHistScWall(void *p) {
      delete ((::BmnHistScWall*)p);
   }
   static void deleteArray_BmnHistScWall(void *p) {
      delete [] ((::BmnHistScWall*)p);
   }
   static void destruct_BmnHistScWall(void *p) {
      typedef ::BmnHistScWall current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHistScWall

//______________________________________________________________________________
void BmnHistECAL::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHistECAL.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHistECAL::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHistECAL::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnHistECAL(void *p) {
      delete ((::BmnHistECAL*)p);
   }
   static void deleteArray_BmnHistECAL(void *p) {
      delete [] ((::BmnHistECAL*)p);
   }
   static void destruct_BmnHistECAL(void *p) {
      typedef ::BmnHistECAL current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHistECAL

//______________________________________________________________________________
void BmnHistLAND::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHistLAND.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHistLAND::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHistLAND::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnHistLAND(void *p) {
      delete ((::BmnHistLAND*)p);
   }
   static void deleteArray_BmnHistLAND(void *p) {
      delete [] ((::BmnHistLAND*)p);
   }
   static void destruct_BmnHistLAND(void *p) {
      typedef ::BmnHistLAND current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHistLAND

//______________________________________________________________________________
void BmnHistTofCal::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHistTofCal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHistTofCal::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHistTofCal::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnHistTofCal(void *p) {
      delete ((::BmnHistTofCal*)p);
   }
   static void deleteArray_BmnHistTofCal(void *p) {
      delete [] ((::BmnHistTofCal*)p);
   }
   static void destruct_BmnHistTofCal(void *p) {
      typedef ::BmnHistTofCal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHistTofCal

//______________________________________________________________________________
void BmnHistSilicon::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHistSilicon.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHistSilicon::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHistSilicon::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnHistSilicon(void *p) {
      delete ((::BmnHistSilicon*)p);
   }
   static void deleteArray_BmnHistSilicon(void *p) {
      delete [] ((::BmnHistSilicon*)p);
   }
   static void destruct_BmnHistSilicon(void *p) {
      typedef ::BmnHistSilicon current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHistSilicon

//______________________________________________________________________________
void BmnHistCsc::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHistCsc.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHistCsc::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHistCsc::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnHistCsc(void *p) {
      delete ((::BmnHistCsc*)p);
   }
   static void deleteArray_BmnHistCsc(void *p) {
      delete [] ((::BmnHistCsc*)p);
   }
   static void destruct_BmnHistCsc(void *p) {
      typedef ::BmnHistCsc current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHistCsc

//______________________________________________________________________________
void BmnHistSrc::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHistSrc.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHistSrc::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHistSrc::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnHistSrc(void *p) {
      delete ((::BmnHistSrc*)p);
   }
   static void deleteArray_BmnHistSrc(void *p) {
      delete [] ((::BmnHistSrc*)p);
   }
   static void destruct_BmnHistSrc(void *p) {
      typedef ::BmnHistSrc current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHistSrc

//______________________________________________________________________________
void BmnMonitor::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMonitor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMonitor::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMonitor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMonitor(void *p) {
      return  p ? new(p) ::BmnMonitor : new ::BmnMonitor;
   }
   static void *newArray_BmnMonitor(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMonitor[nElements] : new ::BmnMonitor[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMonitor(void *p) {
      delete ((::BmnMonitor*)p);
   }
   static void deleteArray_BmnMonitor(void *p) {
      delete [] ((::BmnMonitor*)p);
   }
   static void destruct_BmnMonitor(void *p) {
      typedef ::BmnMonitor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMonitor

//______________________________________________________________________________
void BmnParts::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnParts.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnParts::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnParts::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnParts(void *p) {
      return  p ? new(p) ::BmnParts : new ::BmnParts;
   }
   static void *newArray_BmnParts(Long_t nElements, void *p) {
      return p ? new(p) ::BmnParts[nElements] : new ::BmnParts[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnParts(void *p) {
      delete ((::BmnParts*)p);
   }
   static void deleteArray_BmnParts(void *p) {
      delete [] ((::BmnParts*)p);
   }
   static void destruct_BmnParts(void *p) {
      typedef ::BmnParts current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnParts

//______________________________________________________________________________
void BmnMQSink::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMQSink.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMQSink::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMQSink::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMQSink(void *p) {
      return  p ? new(p) ::BmnMQSink : new ::BmnMQSink;
   }
   static void *newArray_BmnMQSink(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMQSink[nElements] : new ::BmnMQSink[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMQSink(void *p) {
      delete ((::BmnMQSink*)p);
   }
   static void deleteArray_BmnMQSink(void *p) {
      delete [] ((::BmnMQSink*)p);
   }
   static void destruct_BmnMQSink(void *p) {
      typedef ::BmnMQSink current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMQSink

//______________________________________________________________________________
void BmnOnlineReco::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnOnlineReco.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnOnlineReco::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnOnlineReco::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnOnlineReco(void *p) {
      return  p ? new(p) ::BmnOnlineReco : new ::BmnOnlineReco;
   }
   static void *newArray_BmnOnlineReco(Long_t nElements, void *p) {
      return p ? new(p) ::BmnOnlineReco[nElements] : new ::BmnOnlineReco[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnOnlineReco(void *p) {
      delete ((::BmnOnlineReco*)p);
   }
   static void deleteArray_BmnOnlineReco(void *p) {
      delete [] ((::BmnOnlineReco*)p);
   }
   static void destruct_BmnOnlineReco(void *p) {
      typedef ::BmnOnlineReco current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnOnlineReco

//______________________________________________________________________________
void BmnMQSource::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMQSource.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMQSource::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMQSource::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMQSource(void *p) {
      return  p ? new(p) ::BmnMQSource : new ::BmnMQSource;
   }
   static void *newArray_BmnMQSource(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMQSource[nElements] : new ::BmnMQSource[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMQSource(void *p) {
      delete ((::BmnMQSource*)p);
   }
   static void deleteArray_BmnMQSource(void *p) {
      delete [] ((::BmnMQSource*)p);
   }
   static void destruct_BmnMQSource(void *p) {
      typedef ::BmnMQSource current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMQSource

namespace ROOT {
   static TClass *vectorlEvectorlEvectorlEintmUgRsPgRsPgR_Dictionary();
   static void vectorlEvectorlEvectorlEintmUgRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEvectorlEintmUgRsPgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlEvectorlEintmUgRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEvectorlEintmUgRsPgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEvectorlEintmUgRsPgRsPgR(void *p);
   static void destruct_vectorlEvectorlEvectorlEintmUgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<vector<int*> > >*)
   {
      vector<vector<vector<int*> > > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<vector<int*> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<vector<int*> > >", -2, "vector", 386,
                  typeid(vector<vector<vector<int*> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEvectorlEintmUgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vector<vector<int*> > >) );
      instance.SetNew(&new_vectorlEvectorlEvectorlEintmUgRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEvectorlEintmUgRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEvectorlEintmUgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEvectorlEintmUgRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEvectorlEintmUgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<vector<int*> > > >()));

      ::ROOT::AddClassAlternate("vector<vector<vector<int*> > >","std::vector<std::vector<std::vector<int*, std::allocator<int*> >, std::allocator<std::vector<int*, std::allocator<int*> > > >, std::allocator<std::vector<std::vector<int*, std::allocator<int*> >, std::allocator<std::vector<int*, std::allocator<int*> > > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<vector<int*> > >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEvectorlEintmUgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<vector<int*> > >*)nullptr)->GetClass();
      vectorlEvectorlEvectorlEintmUgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEvectorlEintmUgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEvectorlEintmUgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<vector<int*> > > : new vector<vector<vector<int*> > >;
   }
   static void *newArray_vectorlEvectorlEvectorlEintmUgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<vector<int*> > >[nElements] : new vector<vector<vector<int*> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEvectorlEintmUgRsPgRsPgR(void *p) {
      delete ((vector<vector<vector<int*> > >*)p);
   }
   static void deleteArray_vectorlEvectorlEvectorlEintmUgRsPgRsPgR(void *p) {
      delete [] ((vector<vector<vector<int*> > >*)p);
   }
   static void destruct_vectorlEvectorlEvectorlEintmUgRsPgRsPgR(void *p) {
      typedef vector<vector<vector<int*> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<vector<int*> > >

namespace ROOT {
   static TClass *vectorlEvectorlEvectorlETH1FgRsPgRsPgR_Dictionary();
   static void vectorlEvectorlEvectorlETH1FgRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEvectorlETH1FgRsPgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlEvectorlETH1FgRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEvectorlETH1FgRsPgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEvectorlETH1FgRsPgRsPgR(void *p);
   static void destruct_vectorlEvectorlEvectorlETH1FgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<vector<TH1F> > >*)
   {
      vector<vector<vector<TH1F> > > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<vector<TH1F> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<vector<TH1F> > >", -2, "vector", 386,
                  typeid(vector<vector<vector<TH1F> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEvectorlETH1FgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vector<vector<TH1F> > >) );
      instance.SetNew(&new_vectorlEvectorlEvectorlETH1FgRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEvectorlETH1FgRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEvectorlETH1FgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEvectorlETH1FgRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEvectorlETH1FgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<vector<TH1F> > > >()));

      ::ROOT::AddClassAlternate("vector<vector<vector<TH1F> > >","std::vector<std::vector<std::vector<TH1F, std::allocator<TH1F> >, std::allocator<std::vector<TH1F, std::allocator<TH1F> > > >, std::allocator<std::vector<std::vector<TH1F, std::allocator<TH1F> >, std::allocator<std::vector<TH1F, std::allocator<TH1F> > > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<vector<TH1F> > >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEvectorlETH1FgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<vector<TH1F> > >*)nullptr)->GetClass();
      vectorlEvectorlEvectorlETH1FgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEvectorlETH1FgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEvectorlETH1FgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<vector<TH1F> > > : new vector<vector<vector<TH1F> > >;
   }
   static void *newArray_vectorlEvectorlEvectorlETH1FgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<vector<TH1F> > >[nElements] : new vector<vector<vector<TH1F> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEvectorlETH1FgRsPgRsPgR(void *p) {
      delete ((vector<vector<vector<TH1F> > >*)p);
   }
   static void deleteArray_vectorlEvectorlEvectorlETH1FgRsPgRsPgR(void *p) {
      delete [] ((vector<vector<vector<TH1F> > >*)p);
   }
   static void destruct_vectorlEvectorlEvectorlETH1FgRsPgRsPgR(void *p) {
      typedef vector<vector<vector<TH1F> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<vector<TH1F> > >

namespace ROOT {
   static TClass *vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR_Dictionary();
   static void vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR(void *p);
   static void destruct_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<vector<TH1F*> > >*)
   {
      vector<vector<vector<TH1F*> > > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<vector<TH1F*> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<vector<TH1F*> > >", -2, "vector", 386,
                  typeid(vector<vector<vector<TH1F*> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vector<vector<TH1F*> > >) );
      instance.SetNew(&new_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<vector<TH1F*> > > >()));

      ::ROOT::AddClassAlternate("vector<vector<vector<TH1F*> > >","std::vector<std::vector<std::vector<TH1F*, std::allocator<TH1F*> >, std::allocator<std::vector<TH1F*, std::allocator<TH1F*> > > >, std::allocator<std::vector<std::vector<TH1F*, std::allocator<TH1F*> >, std::allocator<std::vector<TH1F*, std::allocator<TH1F*> > > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<vector<TH1F*> > >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<vector<TH1F*> > >*)nullptr)->GetClass();
      vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<vector<TH1F*> > > : new vector<vector<vector<TH1F*> > >;
   }
   static void *newArray_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<vector<TH1F*> > >[nElements] : new vector<vector<vector<TH1F*> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR(void *p) {
      delete ((vector<vector<vector<TH1F*> > >*)p);
   }
   static void deleteArray_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR(void *p) {
      delete [] ((vector<vector<vector<TH1F*> > >*)p);
   }
   static void destruct_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR(void *p) {
      typedef vector<vector<vector<TH1F*> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<vector<TH1F*> > >

namespace ROOT {
   static TClass *vectorlEvectorlEintmUgRsPgR_Dictionary();
   static void vectorlEvectorlEintmUgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEintmUgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlEintmUgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEintmUgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEintmUgRsPgR(void *p);
   static void destruct_vectorlEvectorlEintmUgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<int*> >*)
   {
      vector<vector<int*> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<int*> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<int*> >", -2, "vector", 386,
                  typeid(vector<vector<int*> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEintmUgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vector<int*> >) );
      instance.SetNew(&new_vectorlEvectorlEintmUgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEintmUgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEintmUgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEintmUgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEintmUgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<int*> > >()));

      ::ROOT::AddClassAlternate("vector<vector<int*> >","std::vector<std::vector<int*, std::allocator<int*> >, std::allocator<std::vector<int*, std::allocator<int*> > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<int*> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEintmUgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<int*> >*)nullptr)->GetClass();
      vectorlEvectorlEintmUgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEintmUgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEintmUgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<int*> > : new vector<vector<int*> >;
   }
   static void *newArray_vectorlEvectorlEintmUgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<int*> >[nElements] : new vector<vector<int*> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEintmUgRsPgR(void *p) {
      delete ((vector<vector<int*> >*)p);
   }
   static void deleteArray_vectorlEvectorlEintmUgRsPgR(void *p) {
      delete [] ((vector<vector<int*> >*)p);
   }
   static void destruct_vectorlEvectorlEintmUgRsPgR(void *p) {
      typedef vector<vector<int*> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<int*> >

namespace ROOT {
   static TClass *vectorlEvectorlETH1FgRsPgR_Dictionary();
   static void vectorlEvectorlETH1FgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlETH1FgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlETH1FgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlETH1FgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlETH1FgRsPgR(void *p);
   static void destruct_vectorlEvectorlETH1FgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<TH1F> >*)
   {
      vector<vector<TH1F> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<TH1F> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<TH1F> >", -2, "vector", 386,
                  typeid(vector<vector<TH1F> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlETH1FgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vector<TH1F> >) );
      instance.SetNew(&new_vectorlEvectorlETH1FgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlETH1FgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlETH1FgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlETH1FgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlETH1FgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<TH1F> > >()));

      ::ROOT::AddClassAlternate("vector<vector<TH1F> >","std::vector<std::vector<TH1F, std::allocator<TH1F> >, std::allocator<std::vector<TH1F, std::allocator<TH1F> > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<TH1F> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlETH1FgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<TH1F> >*)nullptr)->GetClass();
      vectorlEvectorlETH1FgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlETH1FgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlETH1FgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<TH1F> > : new vector<vector<TH1F> >;
   }
   static void *newArray_vectorlEvectorlETH1FgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<TH1F> >[nElements] : new vector<vector<TH1F> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlETH1FgRsPgR(void *p) {
      delete ((vector<vector<TH1F> >*)p);
   }
   static void deleteArray_vectorlEvectorlETH1FgRsPgR(void *p) {
      delete [] ((vector<vector<TH1F> >*)p);
   }
   static void destruct_vectorlEvectorlETH1FgRsPgR(void *p) {
      typedef vector<vector<TH1F> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<TH1F> >

namespace ROOT {
   static TClass *vectorlEvectorlETH1FmUgRsPgR_Dictionary();
   static void vectorlEvectorlETH1FmUgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlETH1FmUgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlETH1FmUgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlETH1FmUgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlETH1FmUgRsPgR(void *p);
   static void destruct_vectorlEvectorlETH1FmUgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<TH1F*> >*)
   {
      vector<vector<TH1F*> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<TH1F*> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<TH1F*> >", -2, "vector", 386,
                  typeid(vector<vector<TH1F*> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlETH1FmUgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vector<TH1F*> >) );
      instance.SetNew(&new_vectorlEvectorlETH1FmUgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlETH1FmUgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlETH1FmUgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlETH1FmUgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlETH1FmUgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<TH1F*> > >()));

      ::ROOT::AddClassAlternate("vector<vector<TH1F*> >","std::vector<std::vector<TH1F*, std::allocator<TH1F*> >, std::allocator<std::vector<TH1F*, std::allocator<TH1F*> > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<TH1F*> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlETH1FmUgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<TH1F*> >*)nullptr)->GetClass();
      vectorlEvectorlETH1FmUgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlETH1FmUgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlETH1FmUgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<TH1F*> > : new vector<vector<TH1F*> >;
   }
   static void *newArray_vectorlEvectorlETH1FmUgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<TH1F*> >[nElements] : new vector<vector<TH1F*> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlETH1FmUgRsPgR(void *p) {
      delete ((vector<vector<TH1F*> >*)p);
   }
   static void deleteArray_vectorlEvectorlETH1FmUgRsPgR(void *p) {
      delete [] ((vector<vector<TH1F*> >*)p);
   }
   static void destruct_vectorlEvectorlETH1FmUgRsPgR(void *p) {
      typedef vector<vector<TH1F*> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<TH1F*> >

namespace ROOT {
   static TClass *vectorlEintmUgR_Dictionary();
   static void vectorlEintmUgR_TClassManip(TClass*);
   static void *new_vectorlEintmUgR(void *p = nullptr);
   static void *newArray_vectorlEintmUgR(Long_t size, void *p);
   static void delete_vectorlEintmUgR(void *p);
   static void deleteArray_vectorlEintmUgR(void *p);
   static void destruct_vectorlEintmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int*>*)
   {
      vector<int*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int*>", -2, "vector", 386,
                  typeid(vector<int*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<int*>) );
      instance.SetNew(&new_vectorlEintmUgR);
      instance.SetNewArray(&newArray_vectorlEintmUgR);
      instance.SetDelete(&delete_vectorlEintmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintmUgR);
      instance.SetDestructor(&destruct_vectorlEintmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int*> >()));

      ::ROOT::AddClassAlternate("vector<int*>","std::vector<int*, std::allocator<int*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<int*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<int*>*)nullptr)->GetClass();
      vectorlEintmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int*> : new vector<int*>;
   }
   static void *newArray_vectorlEintmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int*>[nElements] : new vector<int*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintmUgR(void *p) {
      delete ((vector<int*>*)p);
   }
   static void deleteArray_vectorlEintmUgR(void *p) {
      delete [] ((vector<int*>*)p);
   }
   static void destruct_vectorlEintmUgR(void *p) {
      typedef vector<int*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<int*>

namespace ROOT {
   static TClass *vectorlEfloatgR_Dictionary();
   static void vectorlEfloatgR_TClassManip(TClass*);
   static void *new_vectorlEfloatgR(void *p = nullptr);
   static void *newArray_vectorlEfloatgR(Long_t size, void *p);
   static void delete_vectorlEfloatgR(void *p);
   static void deleteArray_vectorlEfloatgR(void *p);
   static void destruct_vectorlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<float>*)
   {
      vector<float> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<float>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<float>", -2, "vector", 386,
                  typeid(vector<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEfloatgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<float>) );
      instance.SetNew(&new_vectorlEfloatgR);
      instance.SetNewArray(&newArray_vectorlEfloatgR);
      instance.SetDelete(&delete_vectorlEfloatgR);
      instance.SetDeleteArray(&deleteArray_vectorlEfloatgR);
      instance.SetDestructor(&destruct_vectorlEfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<float> >()));

      ::ROOT::AddClassAlternate("vector<float>","std::vector<float, std::allocator<float> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<float>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<float>*)nullptr)->GetClass();
      vectorlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<float> : new vector<float>;
   }
   static void *newArray_vectorlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<float>[nElements] : new vector<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEfloatgR(void *p) {
      delete ((vector<float>*)p);
   }
   static void deleteArray_vectorlEfloatgR(void *p) {
      delete [] ((vector<float>*)p);
   }
   static void destruct_vectorlEfloatgR(void *p) {
      typedef vector<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<float>

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
   static TClass *vectorlETNamedmUgR_Dictionary();
   static void vectorlETNamedmUgR_TClassManip(TClass*);
   static void *new_vectorlETNamedmUgR(void *p = nullptr);
   static void *newArray_vectorlETNamedmUgR(Long_t size, void *p);
   static void delete_vectorlETNamedmUgR(void *p);
   static void deleteArray_vectorlETNamedmUgR(void *p);
   static void destruct_vectorlETNamedmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TNamed*>*)
   {
      vector<TNamed*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TNamed*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TNamed*>", -2, "vector", 386,
                  typeid(vector<TNamed*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETNamedmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TNamed*>) );
      instance.SetNew(&new_vectorlETNamedmUgR);
      instance.SetNewArray(&newArray_vectorlETNamedmUgR);
      instance.SetDelete(&delete_vectorlETNamedmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETNamedmUgR);
      instance.SetDestructor(&destruct_vectorlETNamedmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TNamed*> >()));

      ::ROOT::AddClassAlternate("vector<TNamed*>","std::vector<TNamed*, std::allocator<TNamed*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TNamed*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETNamedmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TNamed*>*)nullptr)->GetClass();
      vectorlETNamedmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETNamedmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETNamedmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TNamed*> : new vector<TNamed*>;
   }
   static void *newArray_vectorlETNamedmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TNamed*>[nElements] : new vector<TNamed*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETNamedmUgR(void *p) {
      delete ((vector<TNamed*>*)p);
   }
   static void deleteArray_vectorlETNamedmUgR(void *p) {
      delete [] ((vector<TNamed*>*)p);
   }
   static void destruct_vectorlETNamedmUgR(void *p) {
      typedef vector<TNamed*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TNamed*>

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
   static TClass *vectorlETH1FgR_Dictionary();
   static void vectorlETH1FgR_TClassManip(TClass*);
   static void *new_vectorlETH1FgR(void *p = nullptr);
   static void *newArray_vectorlETH1FgR(Long_t size, void *p);
   static void delete_vectorlETH1FgR(void *p);
   static void deleteArray_vectorlETH1FgR(void *p);
   static void destruct_vectorlETH1FgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TH1F>*)
   {
      vector<TH1F> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TH1F>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TH1F>", -2, "vector", 386,
                  typeid(vector<TH1F>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETH1FgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<TH1F>) );
      instance.SetNew(&new_vectorlETH1FgR);
      instance.SetNewArray(&newArray_vectorlETH1FgR);
      instance.SetDelete(&delete_vectorlETH1FgR);
      instance.SetDeleteArray(&deleteArray_vectorlETH1FgR);
      instance.SetDestructor(&destruct_vectorlETH1FgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TH1F> >()));

      ::ROOT::AddClassAlternate("vector<TH1F>","std::vector<TH1F, std::allocator<TH1F> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TH1F>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETH1FgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TH1F>*)nullptr)->GetClass();
      vectorlETH1FgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETH1FgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETH1FgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH1F> : new vector<TH1F>;
   }
   static void *newArray_vectorlETH1FgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH1F>[nElements] : new vector<TH1F>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETH1FgR(void *p) {
      delete ((vector<TH1F>*)p);
   }
   static void deleteArray_vectorlETH1FgR(void *p) {
      delete [] ((vector<TH1F>*)p);
   }
   static void destruct_vectorlETH1FgR(void *p) {
      typedef vector<TH1F> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TH1F>

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
                  &vectorlETH1FmUgR_Dictionary, isa_proxy, 4,
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
   static TClass *vectorlEPadInfomUgR_Dictionary();
   static void vectorlEPadInfomUgR_TClassManip(TClass*);
   static void *new_vectorlEPadInfomUgR(void *p = nullptr);
   static void *newArray_vectorlEPadInfomUgR(Long_t size, void *p);
   static void delete_vectorlEPadInfomUgR(void *p);
   static void deleteArray_vectorlEPadInfomUgR(void *p);
   static void destruct_vectorlEPadInfomUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<PadInfo*>*)
   {
      vector<PadInfo*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<PadInfo*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<PadInfo*>", -2, "vector", 386,
                  typeid(vector<PadInfo*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEPadInfomUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<PadInfo*>) );
      instance.SetNew(&new_vectorlEPadInfomUgR);
      instance.SetNewArray(&newArray_vectorlEPadInfomUgR);
      instance.SetDelete(&delete_vectorlEPadInfomUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEPadInfomUgR);
      instance.SetDestructor(&destruct_vectorlEPadInfomUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<PadInfo*> >()));

      ::ROOT::AddClassAlternate("vector<PadInfo*>","std::vector<PadInfo*, std::allocator<PadInfo*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<PadInfo*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEPadInfomUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<PadInfo*>*)nullptr)->GetClass();
      vectorlEPadInfomUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEPadInfomUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEPadInfomUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<PadInfo*> : new vector<PadInfo*>;
   }
   static void *newArray_vectorlEPadInfomUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<PadInfo*>[nElements] : new vector<PadInfo*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEPadInfomUgR(void *p) {
      delete ((vector<PadInfo*>*)p);
   }
   static void deleteArray_vectorlEPadInfomUgR(void *p) {
      delete [] ((vector<PadInfo*>*)p);
   }
   static void destruct_vectorlEPadInfomUgR(void *p) {
      typedef vector<PadInfo*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<PadInfo*>

namespace ROOT {
   static TClass *vectorlEBmnTrigWaveDigitmUgR_Dictionary();
   static void vectorlEBmnTrigWaveDigitmUgR_TClassManip(TClass*);
   static void *new_vectorlEBmnTrigWaveDigitmUgR(void *p = nullptr);
   static void *newArray_vectorlEBmnTrigWaveDigitmUgR(Long_t size, void *p);
   static void delete_vectorlEBmnTrigWaveDigitmUgR(void *p);
   static void deleteArray_vectorlEBmnTrigWaveDigitmUgR(void *p);
   static void destruct_vectorlEBmnTrigWaveDigitmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnTrigWaveDigit*>*)
   {
      vector<BmnTrigWaveDigit*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnTrigWaveDigit*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnTrigWaveDigit*>", -2, "vector", 386,
                  typeid(vector<BmnTrigWaveDigit*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnTrigWaveDigitmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<BmnTrigWaveDigit*>) );
      instance.SetNew(&new_vectorlEBmnTrigWaveDigitmUgR);
      instance.SetNewArray(&newArray_vectorlEBmnTrigWaveDigitmUgR);
      instance.SetDelete(&delete_vectorlEBmnTrigWaveDigitmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnTrigWaveDigitmUgR);
      instance.SetDestructor(&destruct_vectorlEBmnTrigWaveDigitmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnTrigWaveDigit*> >()));

      ::ROOT::AddClassAlternate("vector<BmnTrigWaveDigit*>","std::vector<BmnTrigWaveDigit*, std::allocator<BmnTrigWaveDigit*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnTrigWaveDigit*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnTrigWaveDigitmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnTrigWaveDigit*>*)nullptr)->GetClass();
      vectorlEBmnTrigWaveDigitmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnTrigWaveDigitmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnTrigWaveDigitmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnTrigWaveDigit*> : new vector<BmnTrigWaveDigit*>;
   }
   static void *newArray_vectorlEBmnTrigWaveDigitmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnTrigWaveDigit*>[nElements] : new vector<BmnTrigWaveDigit*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnTrigWaveDigitmUgR(void *p) {
      delete ((vector<BmnTrigWaveDigit*>*)p);
   }
   static void deleteArray_vectorlEBmnTrigWaveDigitmUgR(void *p) {
      delete [] ((vector<BmnTrigWaveDigit*>*)p);
   }
   static void destruct_vectorlEBmnTrigWaveDigitmUgR(void *p) {
      typedef vector<BmnTrigWaveDigit*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnTrigWaveDigit*>

namespace ROOT {
   static TClass *vectorlEBmnHistmUgR_Dictionary();
   static void vectorlEBmnHistmUgR_TClassManip(TClass*);
   static void *new_vectorlEBmnHistmUgR(void *p = nullptr);
   static void *newArray_vectorlEBmnHistmUgR(Long_t size, void *p);
   static void delete_vectorlEBmnHistmUgR(void *p);
   static void deleteArray_vectorlEBmnHistmUgR(void *p);
   static void destruct_vectorlEBmnHistmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnHist*>*)
   {
      vector<BmnHist*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnHist*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnHist*>", -2, "vector", 386,
                  typeid(vector<BmnHist*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnHistmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<BmnHist*>) );
      instance.SetNew(&new_vectorlEBmnHistmUgR);
      instance.SetNewArray(&newArray_vectorlEBmnHistmUgR);
      instance.SetDelete(&delete_vectorlEBmnHistmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnHistmUgR);
      instance.SetDestructor(&destruct_vectorlEBmnHistmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnHist*> >()));

      ::ROOT::AddClassAlternate("vector<BmnHist*>","std::vector<BmnHist*, std::allocator<BmnHist*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnHist*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnHistmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnHist*>*)nullptr)->GetClass();
      vectorlEBmnHistmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnHistmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnHistmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnHist*> : new vector<BmnHist*>;
   }
   static void *newArray_vectorlEBmnHistmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnHist*>[nElements] : new vector<BmnHist*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnHistmUgR(void *p) {
      delete ((vector<BmnHist*>*)p);
   }
   static void deleteArray_vectorlEBmnHistmUgR(void *p) {
      delete [] ((vector<BmnHist*>*)p);
   }
   static void destruct_vectorlEBmnHistmUgR(void *p) {
      typedef vector<BmnHist*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnHist*>

namespace ROOT {
   static TClass *maplEconstsPcharmUcOTObjectmUgR_Dictionary();
   static void maplEconstsPcharmUcOTObjectmUgR_TClassManip(TClass*);
   static void *new_maplEconstsPcharmUcOTObjectmUgR(void *p = nullptr);
   static void *newArray_maplEconstsPcharmUcOTObjectmUgR(Long_t size, void *p);
   static void delete_maplEconstsPcharmUcOTObjectmUgR(void *p);
   static void deleteArray_maplEconstsPcharmUcOTObjectmUgR(void *p);
   static void destruct_maplEconstsPcharmUcOTObjectmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<const char*,TObject*>*)
   {
      map<const char*,TObject*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<const char*,TObject*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<const char*,TObject*>", -2, "map", 100,
                  typeid(map<const char*,TObject*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEconstsPcharmUcOTObjectmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<const char*,TObject*>) );
      instance.SetNew(&new_maplEconstsPcharmUcOTObjectmUgR);
      instance.SetNewArray(&newArray_maplEconstsPcharmUcOTObjectmUgR);
      instance.SetDelete(&delete_maplEconstsPcharmUcOTObjectmUgR);
      instance.SetDeleteArray(&deleteArray_maplEconstsPcharmUcOTObjectmUgR);
      instance.SetDestructor(&destruct_maplEconstsPcharmUcOTObjectmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<const char*,TObject*> >()));

      ::ROOT::AddClassAlternate("map<const char*,TObject*>","std::map<char const*, TObject*, std::less<char const*>, std::allocator<std::pair<char const* const, TObject*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<const char*,TObject*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEconstsPcharmUcOTObjectmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<const char*,TObject*>*)nullptr)->GetClass();
      maplEconstsPcharmUcOTObjectmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEconstsPcharmUcOTObjectmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEconstsPcharmUcOTObjectmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<const char*,TObject*> : new map<const char*,TObject*>;
   }
   static void *newArray_maplEconstsPcharmUcOTObjectmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<const char*,TObject*>[nElements] : new map<const char*,TObject*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEconstsPcharmUcOTObjectmUgR(void *p) {
      delete ((map<const char*,TObject*>*)p);
   }
   static void deleteArray_maplEconstsPcharmUcOTObjectmUgR(void *p) {
      delete [] ((map<const char*,TObject*>*)p);
   }
   static void destruct_maplEconstsPcharmUcOTObjectmUgR(void *p) {
      typedef map<const char*,TObject*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<const char*,TObject*>

namespace ROOT {
   static TClass *maplEconstsPcharmUcOTClonesArraymUgR_Dictionary();
   static void maplEconstsPcharmUcOTClonesArraymUgR_TClassManip(TClass*);
   static void *new_maplEconstsPcharmUcOTClonesArraymUgR(void *p = nullptr);
   static void *newArray_maplEconstsPcharmUcOTClonesArraymUgR(Long_t size, void *p);
   static void delete_maplEconstsPcharmUcOTClonesArraymUgR(void *p);
   static void deleteArray_maplEconstsPcharmUcOTClonesArraymUgR(void *p);
   static void destruct_maplEconstsPcharmUcOTClonesArraymUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<const char*,TClonesArray*>*)
   {
      map<const char*,TClonesArray*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<const char*,TClonesArray*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<const char*,TClonesArray*>", -2, "map", 100,
                  typeid(map<const char*,TClonesArray*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEconstsPcharmUcOTClonesArraymUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<const char*,TClonesArray*>) );
      instance.SetNew(&new_maplEconstsPcharmUcOTClonesArraymUgR);
      instance.SetNewArray(&newArray_maplEconstsPcharmUcOTClonesArraymUgR);
      instance.SetDelete(&delete_maplEconstsPcharmUcOTClonesArraymUgR);
      instance.SetDeleteArray(&deleteArray_maplEconstsPcharmUcOTClonesArraymUgR);
      instance.SetDestructor(&destruct_maplEconstsPcharmUcOTClonesArraymUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<const char*,TClonesArray*> >()));

      ::ROOT::AddClassAlternate("map<const char*,TClonesArray*>","std::map<char const*, TClonesArray*, std::less<char const*>, std::allocator<std::pair<char const* const, TClonesArray*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<const char*,TClonesArray*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEconstsPcharmUcOTClonesArraymUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<const char*,TClonesArray*>*)nullptr)->GetClass();
      maplEconstsPcharmUcOTClonesArraymUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEconstsPcharmUcOTClonesArraymUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEconstsPcharmUcOTClonesArraymUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<const char*,TClonesArray*> : new map<const char*,TClonesArray*>;
   }
   static void *newArray_maplEconstsPcharmUcOTClonesArraymUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<const char*,TClonesArray*>[nElements] : new map<const char*,TClonesArray*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEconstsPcharmUcOTClonesArraymUgR(void *p) {
      delete ((map<const char*,TClonesArray*>*)p);
   }
   static void deleteArray_maplEconstsPcharmUcOTClonesArraymUgR(void *p) {
      delete [] ((map<const char*,TClonesArray*>*)p);
   }
   static void destruct_maplEconstsPcharmUcOTClonesArraymUgR(void *p) {
      typedef map<const char*,TClonesArray*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<const char*,TClonesArray*>

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
  void TriggerDictionaryInitialization_G__BmnMonitorDict_Impl() {
    static const char* headers[] = {
"BmnMonitor.h",
"BmnDataReceiver.h",
"BmnOnlineDecoder.h",
"BmnOnlineReco.h",
"BmnHistGem.h",
"BmnHistCsc.h",
"BmnHistSilicon.h",
"BmnHistDch.h",
"BmnHistMwpc.h",
"BmnHistZDC.h",
"BmnHistScWall.h",
"BmnHistECAL.h",
"BmnHistTrigger.h",
"BmnHistToF.h",
"BmnHistToF700.h",
"BmnHistSrc.h",
"BmnHistLAND.h",
"BmnHistTofCal.h",
"BmnMQSource.h",
"BmnMQSink.h",
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
"/data/yaopeng/bmnroot_Yaopeng/base/source",
"/data/yaopeng/bmnroot_Yaopeng/QA",
"/data/yaopeng/bmnroot_Yaopeng/QA/report",
"/data/yaopeng/bmnroot_Yaopeng/detectors/mwpc",
"/data/yaopeng/bmnroot_Yaopeng/detectors/csc",
"/data/yaopeng/bmnroot_Yaopeng/detectors/dch",
"/data/yaopeng/bmnroot_Yaopeng/detectors/silicon",
"/data/yaopeng/bmnroot_Yaopeng/detectors/gem",
"/data/yaopeng/bmnroot_Yaopeng/detectors/sts",
"/data/yaopeng/bmnroot_Yaopeng/detectors/tof1",
"/data/yaopeng/bmnroot_Yaopeng/detectors/tof",
"/data/yaopeng/bmnroot_Yaopeng/detectors/tofcal",
"/data/yaopeng/bmnroot_Yaopeng/detectors/ecal",
"/data/yaopeng/bmnroot_Yaopeng/detectors/zdc",
"/data/yaopeng/bmnroot_Yaopeng/detectors/hodo",
"/data/yaopeng/bmnroot_Yaopeng/detectors/scwall",
"/data/yaopeng/bmnroot_Yaopeng/detectors/fhcal",
"/data/yaopeng/bmnroot_Yaopeng/detectors/ndet",
"/data/yaopeng/bmnroot_Yaopeng/detectors/land",
"/data/yaopeng/bmnroot_Yaopeng/alignment",
"/data/yaopeng/bmnroot_Yaopeng/decoder",
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/dst",
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/tof2",
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/KF",
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/KF/Interface",
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/tracking",
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/globaltracking",
"/data/yaopeng/bmnroot_Yaopeng/monitor",
"/data/yaopeng/bmnroot_Yaopeng/steering",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/usr/include/libxml2",
"/home/tools/FairSoft/fairsoft/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/home/tools/FairSoft/fairsoft/install/include/fairmq",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/monitor/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__BmnMonitorDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$TH1.h")))  __attribute__((annotate("$clingAutoload$BmnMonitor.h")))  TH1F;
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
class __attribute__((annotate("$clingAutoload$BmnHist.h")))  __attribute__((annotate("$clingAutoload$BmnMonitor.h")))  BmnHist;
class __attribute__((annotate("$clingAutoload$BmnTrigWaveDigit.h")))  __attribute__((annotate("$clingAutoload$BmnMonitor.h")))  BmnTrigWaveDigit;
class __attribute__((annotate("$clingAutoload$BmnDataReceiver.h")))  __attribute__((annotate("$clingAutoload$BmnMonitor.h")))  BmnDataReceiver;
class __attribute__((annotate("$clingAutoload$BmnHistToF.h")))  __attribute__((annotate("$clingAutoload$BmnMonitor.h")))  BmnHistToF;
class __attribute__((annotate("$clingAutoload$BmnHistToF700.h")))  __attribute__((annotate("$clingAutoload$BmnMonitor.h")))  BmnHistToF700;
class __attribute__((annotate("$clingAutoload$BmnHistTrigger.h")))  __attribute__((annotate("$clingAutoload$BmnMonitor.h")))  BmnHistTrigger;
class __attribute__((annotate("$clingAutoload$BmnHistDch.h")))  __attribute__((annotate("$clingAutoload$BmnMonitor.h")))  BmnHistDch;
class __attribute__((annotate("$clingAutoload$BmnHistMwpc.h")))  __attribute__((annotate("$clingAutoload$BmnMonitor.h")))  BmnHistMwpc;
class __attribute__((annotate("$clingAutoload$BmnHistGem.h")))  __attribute__((annotate("$clingAutoload$BmnMonitor.h")))  BmnHistGem;
class __attribute__((annotate("$clingAutoload$BmnOnlineDecoder.h")))  __attribute__((annotate("$clingAutoload$BmnMonitor.h")))  BmnOnlineDecoder;
class __attribute__((annotate("$clingAutoload$BmnHistZDC.h")))  __attribute__((annotate("$clingAutoload$BmnMonitor.h")))  BmnHistZDC;
class __attribute__((annotate("$clingAutoload$BmnHistScWall.h")))  __attribute__((annotate("$clingAutoload$BmnMonitor.h")))  BmnHistScWall;
class __attribute__((annotate("$clingAutoload$BmnHistECAL.h")))  __attribute__((annotate("$clingAutoload$BmnMonitor.h")))  BmnHistECAL;
class __attribute__((annotate("$clingAutoload$BmnHistLAND.h")))  __attribute__((annotate("$clingAutoload$BmnMonitor.h")))  BmnHistLAND;
class __attribute__((annotate("$clingAutoload$BmnHistTofCal.h")))  __attribute__((annotate("$clingAutoload$BmnMonitor.h")))  BmnHistTofCal;
class __attribute__((annotate("$clingAutoload$BmnHistSilicon.h")))  __attribute__((annotate("$clingAutoload$BmnMonitor.h")))  BmnHistSilicon;
class __attribute__((annotate("$clingAutoload$BmnHistCsc.h")))  __attribute__((annotate("$clingAutoload$BmnMonitor.h")))  BmnHistCsc;
class __attribute__((annotate("$clingAutoload$BmnHistSrc.h")))  __attribute__((annotate("$clingAutoload$BmnMonitor.h")))  BmnHistSrc;
class __attribute__((annotate("$clingAutoload$BmnMonitor.h")))  BmnMonitor;
class __attribute__((annotate("$clingAutoload$BmnParts.h")))  __attribute__((annotate("$clingAutoload$BmnOnlineReco.h")))  BmnParts;
class __attribute__((annotate("$clingAutoload$BmnMQSink.h")))  __attribute__((annotate("$clingAutoload$BmnOnlineReco.h")))  BmnMQSink;
class __attribute__((annotate("$clingAutoload$BmnOnlineReco.h")))  BmnOnlineReco;
class __attribute__((annotate("$clingAutoload$BmnMQSource.h")))  BmnMQSource;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__BmnMonitorDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "BmnMonitor.h"
#include "BmnDataReceiver.h"
#include "BmnOnlineDecoder.h"
#include "BmnOnlineReco.h"
#include "BmnHistGem.h"
#include "BmnHistCsc.h"
#include "BmnHistSilicon.h"
#include "BmnHistDch.h"
#include "BmnHistMwpc.h"
#include "BmnHistZDC.h"
#include "BmnHistScWall.h"
#include "BmnHistECAL.h"
#include "BmnHistTrigger.h"
#include "BmnHistToF.h"
#include "BmnHistToF700.h"
#include "BmnHistSrc.h"
#include "BmnHistLAND.h"
#include "BmnHistTofCal.h"
#include "BmnMQSource.h"
#include "BmnMQSink.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BmnDataReceiver", payloadCode, "@",
"BmnHistCsc", payloadCode, "@",
"BmnHistDch", payloadCode, "@",
"BmnHistECAL", payloadCode, "@",
"BmnHistGem", payloadCode, "@",
"BmnHistLAND", payloadCode, "@",
"BmnHistMwpc", payloadCode, "@",
"BmnHistScWall", payloadCode, "@",
"BmnHistSilicon", payloadCode, "@",
"BmnHistSrc", payloadCode, "@",
"BmnHistToF", payloadCode, "@",
"BmnHistToF700", payloadCode, "@",
"BmnHistTofCal", payloadCode, "@",
"BmnHistTrigger", payloadCode, "@",
"BmnHistZDC", payloadCode, "@",
"BmnMQSink", payloadCode, "@",
"BmnMQSource", payloadCode, "@",
"BmnMonitor", payloadCode, "@",
"BmnOnlineDecoder", payloadCode, "@",
"BmnOnlineReco", payloadCode, "@",
"BmnParts", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__BmnMonitorDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__BmnMonitorDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__BmnMonitorDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__BmnMonitorDict() {
  TriggerDictionaryInitialization_G__BmnMonitorDict_Impl();
}
