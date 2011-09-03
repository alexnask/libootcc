/* tcc header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___tcc___
#define ___tcc___

#include <source/tcc-fwd.h>
#include <sdk/lang/types.h>

struct _tcc__TccClass {
    struct _lang_types__ClassClass __super__;
};


struct _tcc__OutputTypeClass {
    struct _lang_types__ClassClass __super__;
};


#ifdef OOC_FROM_C
#define Tcc tcc__Tcc
#define Tcc_class() tcc__Tcc_class()
#define TccClass tcc__TccClass
#define TccClass_class() tcc__TccClass_class()
#define Tcc_new() tcc__Tcc_new()
#define Tcc_delete(_this_) tcc__Tcc_delete((void*) (_this_))
#define Tcc_enableDebug(_this_) tcc__Tcc_enableDebug((void*) (_this_))
#define Tcc_setErrorFunc(_this_, , ) tcc__Tcc_setErrorFunc((void*) (_this_), (void*) (), ())
#define Tcc_setWarning(_this_, , ) tcc__Tcc_setWarning((void*) (_this_), (), ())
#define Tcc_addIncludePath(_this_, ) tcc__Tcc_addIncludePath((void*) (_this_), ())
#define Tcc_addSysIncludePath(_this_, ) tcc__Tcc_addSysIncludePath((void*) (_this_), ())
#define Tcc_defineSymbol(_this_, , ) tcc__Tcc_defineSymbol((void*) (_this_), (), ())
#define Tcc_undefineSymbol(_this_, ) tcc__Tcc_undefineSymbol((void*) (_this_), ())
#define Tcc_addFile(_this_, ) tcc__Tcc_addFile((void*) (_this_), ())
#define Tcc_compileString(_this_, ) tcc__Tcc_compileString((void*) (_this_), ())
#define Tcc_setOutputType(_this_, ) tcc__Tcc_setOutputType((void*) (_this_), ())
#define Tcc_addLibraryPath(_this_, ) tcc__Tcc_addLibraryPath((void*) (_this_), ())
#define Tcc_addLibrary(_this_, ) tcc__Tcc_addLibrary((void*) (_this_), ())
#define Tcc_addSymbol(_this_, , ) tcc__Tcc_addSymbol((void*) (_this_), (), (void*) ())
#define Tcc_outputFile(_this_, ) tcc__Tcc_outputFile((void*) (_this_), ())
#define Tcc_run(_this_, , ) tcc__Tcc_run((void*) (_this_), (), ())
#define Tcc_relocate(_this_, ) tcc__Tcc_relocate((void*) (_this_), (void*) ())
#define Tcc_getSymbol(_this_, ) (void*) tcc__Tcc_getSymbol((void*) (_this_), ())
#define Tcc_setLibPath(_this_, ) tcc__Tcc_setLibPath((void*) (_this_), ())
#define Tcc___load__() tcc__Tcc___load__()
#define OutputType tcc__OutputType
#define OutputType_class() tcc__OutputType_class()
#define OutputTypeClass tcc__OutputTypeClass
#define OutputTypeClass_class() tcc__OutputTypeClass_class()
#endif

#endif // ___tcc___
