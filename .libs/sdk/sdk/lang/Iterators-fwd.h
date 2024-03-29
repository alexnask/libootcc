/* lang/Iterators header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___lang_Iterators_fwd___
#define ___lang_Iterators_fwd___

struct _lang_Iterators__Iterable;
typedef struct _lang_Iterators__Iterable lang_Iterators__Iterable;
struct _lang_Iterators__BackIterable;
typedef struct _lang_Iterators__BackIterable lang_Iterators__BackIterable;
struct _lang_Iterators__Iterator;
typedef struct _lang_Iterators__Iterator lang_Iterators__Iterator;
struct _lang_Iterators__BackIterator;
typedef struct _lang_Iterators__BackIterator lang_Iterators__BackIterator;
struct _lang_Iterators__ReverseIterator;
typedef struct _lang_Iterators__ReverseIterator lang_Iterators__ReverseIterator;
struct _lang_Iterators__IterableClass;
typedef struct _lang_Iterators__IterableClass lang_Iterators__IterableClass;
struct _lang_Iterators__BackIterableClass;
typedef struct _lang_Iterators__BackIterableClass lang_Iterators__BackIterableClass;
struct _lang_Iterators__IteratorClass;
typedef struct _lang_Iterators__IteratorClass lang_Iterators__IteratorClass;
struct _lang_Iterators__BackIteratorClass;
typedef struct _lang_Iterators__BackIteratorClass lang_Iterators__BackIteratorClass;
struct _lang_Iterators__ReverseIteratorClass;
typedef struct _lang_Iterators__ReverseIteratorClass lang_Iterators__ReverseIteratorClass;

#include <sdk/lang/String-fwd.h>
#include <sdk/lang/BufferIterator-fwd.h>
#include <sdk/lang/Character-fwd.h>
#include <sdk/lang/Exception-fwd.h>
#include <sdk/lang/System-fwd.h>
#include <sdk/lang/Format-fwd.h>
#include <sdk/lang/Numbers-fwd.h>
#include <sdk/lang/VarArgs-fwd.h>
#include <sdk/lang/Abstractions-fwd.h>
#include <sdk/lang/Memory-fwd.h>
#include <sdk/lang/types-fwd.h>
#include <sdk/lang/IO-fwd.h>
#include <sdk/lang/Buffer-fwd.h>
#include <sdk/structs/List-fwd.h>
#include <sdk/structs/ArrayList-fwd.h>

#ifndef __FUNC___T_T_T__DEFINE
#define __FUNC___T_T_T__DEFINE

typedef void (*__FUNC___T_T_T)(uint8_t*, uint8_t*, uint8_t*, void*);

#endif


#ifndef __FUNC___T__DEFINE
#define __FUNC___T__DEFINE

typedef void (*__FUNC___T)(uint8_t*, void*);

#endif


#ifndef __FUNC___T_Int__DEFINE
#define __FUNC___T_Int__DEFINE

typedef void (*__FUNC___T_Int)(uint8_t*, lang_Numbers__Int, void*);

#endif

lang_Iterators__IterableClass *lang_Iterators__Iterable_class();
void lang_Iterators__Iterable_init(lang_Iterators__Iterable* this);
lang_Iterators__Iterator* lang_Iterators__Iterable_iterator(lang_Iterators__Iterable* this);
structs_ArrayList__ArrayList* lang_Iterators__Iterable_toList(lang_Iterators__Iterable* this);
structs_ArrayList__ArrayList* lang_Iterators__Iterable_toList_impl(lang_Iterators__Iterable* this);
void lang_Iterators__Iterable_reduce(lang_Iterators__Iterable* this, uint8_t* __genericReturn38, lang_types__Closure f);
void lang_Iterators__Iterable_reduce_impl(lang_Iterators__Iterable* this, uint8_t* __genericReturn38, lang_types__Closure f);
void lang_Iterators__Iterable_each(lang_Iterators__Iterable* this, lang_types__Closure f);
void lang_Iterators__Iterable_each_impl(lang_Iterators__Iterable* this, lang_types__Closure f);
void lang_Iterators__Iterable_each_withIndex(lang_Iterators__Iterable* this, lang_types__Closure f);
void lang_Iterators__Iterable_each_withIndex_impl(lang_Iterators__Iterable* this, lang_types__Closure f);
void lang_Iterators__Iterable___defaults__(lang_Iterators__Iterable* this);
void lang_Iterators__Iterable___defaults___impl(lang_Iterators__Iterable* this);
void lang_Iterators__Iterable___load__();
lang_Iterators__BackIterableClass *lang_Iterators__BackIterable_class();
void lang_Iterators__BackIterable_init(lang_Iterators__BackIterable* this);
lang_Iterators__BackIterator* lang_Iterators__BackIterable_iterator(lang_Iterators__BackIterable* this);
lang_Iterators__BackIterator* lang_Iterators__BackIterable_backIterator(lang_Iterators__BackIterable* this);
lang_Iterators__BackIterator* lang_Iterators__BackIterable_backIterator_impl(lang_Iterators__BackIterable* this);
lang_Iterators__BackIterator* lang_Iterators__BackIterable_forward(lang_Iterators__BackIterable* this);
lang_Iterators__BackIterator* lang_Iterators__BackIterable_forward_impl(lang_Iterators__BackIterable* this);
lang_Iterators__BackIterator* lang_Iterators__BackIterable_backward(lang_Iterators__BackIterable* this);
lang_Iterators__BackIterator* lang_Iterators__BackIterable_backward_impl(lang_Iterators__BackIterable* this);
void lang_Iterators__BackIterable___defaults__(lang_Iterators__BackIterable* this);
void lang_Iterators__BackIterable___defaults___impl(lang_Iterators__BackIterable* this);
void lang_Iterators__BackIterable___load__();
lang_Iterators__IteratorClass *lang_Iterators__Iterator_class();
void lang_Iterators__Iterator_init(lang_Iterators__Iterator* this);
lang_types__Bool lang_Iterators__Iterator_hasNext__quest(lang_Iterators__Iterator* this);
void lang_Iterators__Iterator_next(lang_Iterators__Iterator* this, uint8_t* __genericReturn43);
lang_types__Bool lang_Iterators__Iterator_remove(lang_Iterators__Iterator* this);
lang_Iterators__Iterator* lang_Iterators__Iterator_iterator(lang_Iterators__Iterator* this);
lang_Iterators__Iterator* lang_Iterators__Iterator_iterator_impl(lang_Iterators__Iterator* this);
void lang_Iterators__Iterator___defaults__(lang_Iterators__Iterator* this);
void lang_Iterators__Iterator___defaults___impl(lang_Iterators__Iterator* this);
void lang_Iterators__Iterator___load__();
lang_Iterators__BackIteratorClass *lang_Iterators__BackIterator_class();
void lang_Iterators__BackIterator_init(lang_Iterators__BackIterator* this);
lang_types__Bool lang_Iterators__BackIterator_hasPrev__quest(lang_Iterators__BackIterator* this);
void lang_Iterators__BackIterator_prev(lang_Iterators__BackIterator* this, uint8_t* __genericReturn44);
lang_Iterators__BackIterator* lang_Iterators__BackIterator_iterator(lang_Iterators__BackIterator* this);
lang_Iterators__BackIterator* lang_Iterators__BackIterator_iterator_impl(lang_Iterators__BackIterator* this);
lang_Iterators__ReverseIterator* lang_Iterators__BackIterator_reversed(lang_Iterators__BackIterator* this);
lang_Iterators__ReverseIterator* lang_Iterators__BackIterator_reversed_impl(lang_Iterators__BackIterator* this);
void lang_Iterators__BackIterator___defaults__(lang_Iterators__BackIterator* this);
void lang_Iterators__BackIterator___defaults___impl(lang_Iterators__BackIterator* this);
void lang_Iterators__BackIterator___load__();
lang_Iterators__ReverseIteratorClass *lang_Iterators__ReverseIterator_class();
lang_Iterators__ReverseIterator* lang_Iterators__ReverseIterator_new(lang_types__Class* T);
void lang_Iterators__ReverseIterator_init(lang_Iterators__ReverseIterator* this);
lang_types__Bool lang_Iterators__ReverseIterator_hasNext__quest(lang_Iterators__ReverseIterator* this);
lang_types__Bool lang_Iterators__ReverseIterator_hasNext__quest_impl(lang_Iterators__ReverseIterator* this);
void lang_Iterators__ReverseIterator_next(lang_Iterators__ReverseIterator* this, uint8_t* __genericReturn45);
void lang_Iterators__ReverseIterator_next_impl(lang_Iterators__ReverseIterator* this, uint8_t* __genericReturn45);
lang_types__Bool lang_Iterators__ReverseIterator_hasPrev__quest(lang_Iterators__ReverseIterator* this);
lang_types__Bool lang_Iterators__ReverseIterator_hasPrev__quest_impl(lang_Iterators__ReverseIterator* this);
void lang_Iterators__ReverseIterator_prev(lang_Iterators__ReverseIterator* this, uint8_t* __genericReturn46);
void lang_Iterators__ReverseIterator_prev_impl(lang_Iterators__ReverseIterator* this, uint8_t* __genericReturn46);
lang_types__Bool lang_Iterators__ReverseIterator_remove(lang_Iterators__ReverseIterator* this);
lang_types__Bool lang_Iterators__ReverseIterator_remove_impl(lang_Iterators__ReverseIterator* this);
lang_Iterators__BackIterator* lang_Iterators__ReverseIterator_reversed(lang_Iterators__ReverseIterator* this);
lang_Iterators__BackIterator* lang_Iterators__ReverseIterator_reversed_impl(lang_Iterators__ReverseIterator* this);
lang_Iterators__ReverseIterator* lang_Iterators__ReverseIterator_iterator(lang_Iterators__ReverseIterator* this);
lang_Iterators__ReverseIterator* lang_Iterators__ReverseIterator_iterator_impl(lang_Iterators__ReverseIterator* this);
void lang_Iterators__ReverseIterator___defaults__(lang_Iterators__ReverseIterator* this);
void lang_Iterators__ReverseIterator___defaults___impl(lang_Iterators__ReverseIterator* this);
void lang_Iterators__ReverseIterator___load__();
void lang_Iterators_load();

#endif // ___lang_Iterators_fwd___
