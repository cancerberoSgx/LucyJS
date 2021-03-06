/*
 * ***********************************************
 * 
 * !!!! DO NOT EDIT !!!!
 * 
 * This file was auto-generated by cfc.
 * 
 * ***********************************************
 * 
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#ifndef H_CLOWNFISH_HASHITERATOR
#define H_CLOWNFISH_HASHITERATOR 1


#ifdef __cplusplus
extern "C" {
#endif

#include "cfish_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Clownfish/Obj.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_CFISH_HASHITERATOR
extern uint32_t cfish_HashIter_IVARS_OFFSET;
typedef struct cfish_HashIteratorIVARS cfish_HashIteratorIVARS;
static CFISH_INLINE cfish_HashIteratorIVARS*
cfish_HashIter_IVARS(cfish_HashIterator *self) {
   char *ptr = (char*)self + cfish_HashIter_IVARS_OFFSET;
   return (cfish_HashIteratorIVARS*)ptr;
}
#ifdef CFISH_USE_SHORT_NAMES
  #define HashIteratorIVARS cfish_HashIteratorIVARS
  #define HashIter_IVARS cfish_HashIter_IVARS
#endif

struct cfish_HashIterator {
    CFISH_OBJ_HEAD
    cfish_Class* klass;
    cfish_Hash* hash;
    size_t tick;
    size_t capacity;
};

#endif /* C_CFISH_HASHITERATOR */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

CFISH_VISIBLE void
cfish_HashIter_init_class(void);

CFISH_VISIBLE cfish_HashIterator*
cfish_HashIter_new(cfish_Hash* hash);

CFISH_VISIBLE cfish_HashIterator*
cfish_HashIter_init(cfish_HashIterator* self, cfish_Hash* hash);

bool
CFISH_HashIter_Next_IMP(cfish_HashIterator* self);

cfish_String*
CFISH_HashIter_Get_Key_IMP(cfish_HashIterator* self);

cfish_Obj*
CFISH_HashIter_Get_Value_IMP(cfish_HashIterator* self);

void
CFISH_HashIter_Destroy_IMP(cfish_HashIterator* self);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*CFISH_HashIter_To_Host_t)(cfish_HashIterator* self, void* vcache);

typedef cfish_Obj*
(*CFISH_HashIter_Clone_t)(cfish_HashIterator* self);

typedef bool
(*CFISH_HashIter_Equals_t)(cfish_HashIterator* self, cfish_Obj* other);

typedef int32_t
(*CFISH_HashIter_Compare_To_t)(cfish_HashIterator* self, cfish_Obj* other);

typedef void
(*CFISH_HashIter_Destroy_t)(cfish_HashIterator* self);

typedef cfish_String*
(*CFISH_HashIter_To_String_t)(cfish_HashIterator* self);

typedef bool
(*CFISH_HashIter_Next_t)(cfish_HashIterator* self);

typedef cfish_String*
(*CFISH_HashIter_Get_Key_t)(cfish_HashIterator* self);

typedef cfish_Obj*
(*CFISH_HashIter_Get_Value_t)(cfish_HashIterator* self);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
cfish_HashIter_get_class(cfish_HashIterator *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
cfish_HashIter_get_class_name(cfish_HashIterator *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
cfish_HashIter_is_a(cfish_HashIterator *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern CFISH_VISIBLE uint32_t CFISH_HashIter_To_Host_OFFSET;
static CFISH_INLINE void*
CFISH_HashIter_To_Host(cfish_HashIterator* self, void* vcache) {
#ifdef CFP_CFISH
    return CFISH_Obj_To_Host_IMP((cfish_Obj*)self, vcache);
#else
    const CFISH_HashIter_To_Host_t method = (CFISH_HashIter_To_Host_t)cfish_obj_method(self, CFISH_HashIter_To_Host_OFFSET);
    return method(self, vcache);
#endif
}

extern CFISH_VISIBLE uint32_t CFISH_HashIter_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
CFISH_HashIter_Clone(cfish_HashIterator* self) {
#ifdef CFP_CFISH
    return CFISH_Obj_Clone_IMP((cfish_Obj*)self);
#else
    const CFISH_HashIter_Clone_t method = (CFISH_HashIter_Clone_t)cfish_obj_method(self, CFISH_HashIter_Clone_OFFSET);
    return method(self);
#endif
}

extern CFISH_VISIBLE uint32_t CFISH_HashIter_Equals_OFFSET;
static CFISH_INLINE bool
CFISH_HashIter_Equals(cfish_HashIterator* self, cfish_Obj* other) {
#ifdef CFP_CFISH
    return CFISH_Obj_Equals_IMP((cfish_Obj*)self, other);
#else
    const CFISH_HashIter_Equals_t method = (CFISH_HashIter_Equals_t)cfish_obj_method(self, CFISH_HashIter_Equals_OFFSET);
    return method(self, other);
#endif
}

extern CFISH_VISIBLE uint32_t CFISH_HashIter_Compare_To_OFFSET;
static CFISH_INLINE int32_t
CFISH_HashIter_Compare_To(cfish_HashIterator* self, cfish_Obj* other) {
#ifdef CFP_CFISH
    return CFISH_Obj_Compare_To_IMP((cfish_Obj*)self, other);
#else
    const CFISH_HashIter_Compare_To_t method = (CFISH_HashIter_Compare_To_t)cfish_obj_method(self, CFISH_HashIter_Compare_To_OFFSET);
    return method(self, other);
#endif
}

extern CFISH_VISIBLE uint32_t CFISH_HashIter_Destroy_OFFSET;
static CFISH_INLINE void
CFISH_HashIter_Destroy(cfish_HashIterator* self) {
#ifdef CFP_CFISH
    CFISH_HashIter_Destroy_IMP(self);
#else
    const CFISH_HashIter_Destroy_t method = (CFISH_HashIter_Destroy_t)cfish_obj_method(self, CFISH_HashIter_Destroy_OFFSET);
    method(self);
#endif
}

extern CFISH_VISIBLE uint32_t CFISH_HashIter_To_String_OFFSET;
static CFISH_INLINE cfish_String*
CFISH_HashIter_To_String(cfish_HashIterator* self) {
#ifdef CFP_CFISH
    return CFISH_Obj_To_String_IMP((cfish_Obj*)self);
#else
    const CFISH_HashIter_To_String_t method = (CFISH_HashIter_To_String_t)cfish_obj_method(self, CFISH_HashIter_To_String_OFFSET);
    return method(self);
#endif
}

extern CFISH_VISIBLE uint32_t CFISH_HashIter_Next_OFFSET;
static CFISH_INLINE bool
CFISH_HashIter_Next(cfish_HashIterator* self) {
#ifdef CFP_CFISH
    return CFISH_HashIter_Next_IMP(self);
#else
    const CFISH_HashIter_Next_t method = (CFISH_HashIter_Next_t)cfish_obj_method(self, CFISH_HashIter_Next_OFFSET);
    return method(self);
#endif
}

extern CFISH_VISIBLE uint32_t CFISH_HashIter_Get_Key_OFFSET;
static CFISH_INLINE cfish_String*
CFISH_HashIter_Get_Key(cfish_HashIterator* self) {
#ifdef CFP_CFISH
    return CFISH_HashIter_Get_Key_IMP(self);
#else
    const CFISH_HashIter_Get_Key_t method = (CFISH_HashIter_Get_Key_t)cfish_obj_method(self, CFISH_HashIter_Get_Key_OFFSET);
    return method(self);
#endif
}

extern CFISH_VISIBLE uint32_t CFISH_HashIter_Get_Value_OFFSET;
static CFISH_INLINE cfish_Obj*
CFISH_HashIter_Get_Value(cfish_HashIterator* self) {
#ifdef CFP_CFISH
    return CFISH_HashIter_Get_Value_IMP(self);
#else
    const CFISH_HashIter_Get_Value_t method = (CFISH_HashIter_Get_Value_t)cfish_obj_method(self, CFISH_HashIter_Get_Value_OFFSET);
    return method(self);
#endif
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#else
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef CFISH_USE_SHORT_NAMES
  #define HashIterator cfish_HashIterator
  #define HASHITERATOR CFISH_HASHITERATOR
  #define HashIter_init_class cfish_HashIter_init_class
  #define HashIter_new cfish_HashIter_new
  #define HashIter_init cfish_HashIter_init
  #define HashIter_get_class cfish_HashIter_get_class
  #define HashIter_get_class_name cfish_HashIter_get_class_name
  #define HashIter_is_a cfish_HashIter_is_a
  #define HashIter_Next_IMP CFISH_HashIter_Next_IMP
  #define HashIter_Get_Key_IMP CFISH_HashIter_Get_Key_IMP
  #define HashIter_Get_Value_IMP CFISH_HashIter_Get_Value_IMP
  #define HashIter_Destroy_IMP CFISH_HashIter_Destroy_IMP
  #define HashIter_To_Host CFISH_HashIter_To_Host
  #define HashIter_To_Host_t CFISH_HashIter_To_Host_t
  #define HashIter_Clone CFISH_HashIter_Clone
  #define HashIter_Clone_t CFISH_HashIter_Clone_t
  #define HashIter_Equals CFISH_HashIter_Equals
  #define HashIter_Equals_t CFISH_HashIter_Equals_t
  #define HashIter_Compare_To CFISH_HashIter_Compare_To
  #define HashIter_Compare_To_t CFISH_HashIter_Compare_To_t
  #define HashIter_Destroy CFISH_HashIter_Destroy
  #define HashIter_Destroy_t CFISH_HashIter_Destroy_t
  #define HashIter_To_String CFISH_HashIter_To_String
  #define HashIter_To_String_t CFISH_HashIter_To_String_t
  #define HashIter_Next CFISH_HashIter_Next
  #define HashIter_Next_t CFISH_HashIter_Next_t
  #define HashIter_Get_Key CFISH_HashIter_Get_Key
  #define HashIter_Get_Key_t CFISH_HashIter_Get_Key_t
  #define HashIter_Get_Value CFISH_HashIter_Get_Value
  #define HashIter_Get_Value_t CFISH_HashIter_Get_Value_t
#endif /* CFISH_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_CLOWNFISH_HASHITERATOR */




