/* lang/System header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___lang_System_fwd___
#define ___lang_System_fwd___

#include <stdlib.h>
#include <stdarg.h>

typedef va_list lang_System__VaList;
struct _lang_System__VaListClass;
typedef struct _lang_System__VaListClass lang_System__VaListClass;

#include <sdk/lang/String-fwd.h>
#include <sdk/lang/BufferIterator-fwd.h>
#include <sdk/lang/Character-fwd.h>
#include <sdk/lang/Exception-fwd.h>
#include <sdk/lang/Format-fwd.h>
#include <sdk/lang/Numbers-fwd.h>
#include <sdk/lang/VarArgs-fwd.h>
#include <sdk/lang/Abstractions-fwd.h>
#include <sdk/lang/Iterators-fwd.h>
#include <sdk/lang/Memory-fwd.h>
#include <sdk/lang/types-fwd.h>
#include <sdk/lang/IO-fwd.h>
#include <sdk/lang/Buffer-fwd.h>
lang_System__VaListClass *lang_System__VaList_class();
void lang_System__VaList___load__();
void lang_System_load();
#define lang_System__exit exit

#define lang_System__atexit atexit

#define lang_System__va_start va_start

#define lang_System__va_arg va_arg

#define lang_System__va_end va_end

#define lang_System__va_copy va_copy


#endif // ___lang_System_fwd___
