/* tcc header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___tcc_fwd___
#define ___tcc_fwd___

#include <libtcc.h>

typedef TCCState* tcc__Tcc;
struct _tcc__TccClass;
typedef struct _tcc__TccClass tcc__TccClass;
struct _tcc__OutputTypeClass;
typedef struct _tcc__OutputTypeClass tcc__OutputTypeClass;

#include <sdk/lang/String-fwd.h>
#include <sdk/lang/BufferIterator-fwd.h>
#include <sdk/lang/Character-fwd.h>
#include <sdk/lang/Exception-fwd.h>
#include <sdk/lang/System-fwd.h>
#include <sdk/lang/Format-fwd.h>
#include <sdk/lang/Numbers-fwd.h>
#include <sdk/lang/VarArgs-fwd.h>
#include <sdk/lang/Abstractions-fwd.h>
#include <sdk/lang/Iterators-fwd.h>
#include <sdk/lang/Memory-fwd.h>
#include <sdk/lang/types-fwd.h>
#include <sdk/lang/IO-fwd.h>
#include <sdk/lang/Buffer-fwd.h>
#include <sdk/structs/ArrayList-fwd.h>

#ifndef __FUNC___Pointer_CString__DEFINE
#define __FUNC___Pointer_CString__DEFINE

typedef void (*__FUNC___Pointer_CString)(lang_types__Pointer, lang_Character__CString, void*);

#endif


#ifndef __FUNC___T_K__DEFINE
#define __FUNC___T_K__DEFINE

typedef void (*__FUNC___T_K)(uint8_t*, uint8_t*, void*);

#endif

typedef int tcc__OutputType;
tcc__TccClass *tcc__Tcc_class();
#define tcc__Tcc_new tcc_new

#define tcc__Tcc_delete tcc_delete

#define tcc__Tcc_enableDebug tcc_enable_debug

#define tcc__Tcc_setErrorFunc tcc_set_error_func

#define tcc__Tcc_setWarning tcc_set_warning

#define tcc__Tcc_addIncludePath tcc_add_include_path

#define tcc__Tcc_addSysIncludePath tcc_add_sys_include_path

#define tcc__Tcc_defineSymbol tcc_define_symbol

#define tcc__Tcc_undefineSymbol tcc_undefine_symbol

#define tcc__Tcc_addFile tcc_add_file

#define tcc__Tcc_compileString tcc_compile_string

#define tcc__Tcc_setOutputType tcc_set_output_type

#define tcc__Tcc_addLibraryPath tcc_add_library_pat

#define tcc__Tcc_addLibrary tcc_add_library

#define tcc__Tcc_addSymbol tcc_add_symbol

#define tcc__Tcc_outputFile tcc_output_file

#define tcc__Tcc_run tcc_run

void tcc__Tcc_run_alist(tcc__Tcc this, structs_ArrayList__ArrayList* a);
#define tcc__Tcc_relocate tcc_relocate

#define tcc__Tcc_getSymbol tcc_get_symbol

#define tcc__Tcc_setLibPath tcc_set_lib_path

void tcc__Tcc___load__();
#define tcc__Tcc_new tcc_new

tcc__OutputTypeClass *tcc__OutputType_class();
void tcc_load();
void tcc____tcc_closure216(uint8_t* __genericReturn117, uint8_t* elem_generic);

#endif // ___tcc_fwd___
