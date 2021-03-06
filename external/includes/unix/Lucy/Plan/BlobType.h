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


#ifndef H_LUCY_PLAN_BLOBTYPE
#define H_LUCY_PLAN_BLOBTYPE 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Lucy/Plan/FieldType.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_BLOBTYPE
extern uint32_t lucy_BlobType_IVARS_OFFSET;
typedef struct lucy_BlobTypeIVARS lucy_BlobTypeIVARS;
static CFISH_INLINE lucy_BlobTypeIVARS*
lucy_BlobType_IVARS(lucy_BlobType *self) {
   char *ptr = (char*)self + lucy_BlobType_IVARS_OFFSET;
   return (lucy_BlobTypeIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define BlobTypeIVARS lucy_BlobTypeIVARS
  #define BlobType_IVARS lucy_BlobType_IVARS
#endif

struct lucy_BlobTypeIVARS {
    float boost;
    bool indexed;
    bool stored;
    bool sortable;
};

#endif /* C_LUCY_BLOBTYPE */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_BlobType*
lucy_BlobType_new(bool stored);

LUCY_VISIBLE lucy_BlobType*
lucy_BlobType_init(lucy_BlobType* self, bool stored);

bool
LUCY_BlobType_Binary_IMP(lucy_BlobType* self);

void
LUCY_BlobType_Set_Sortable_IMP(lucy_BlobType* self, bool sortable);

int8_t
LUCY_BlobType_Primitive_ID_IMP(lucy_BlobType* self);

cfish_Hash*
LUCY_BlobType_Dump_For_Schema_IMP(lucy_BlobType* self);

cfish_Hash*
LUCY_BlobType_Dump_IMP(lucy_BlobType* self);

lucy_BlobType*
LUCY_BlobType_Load_IMP(lucy_BlobType* self, cfish_Obj* dump);

bool
LUCY_BlobType_Equals_IMP(lucy_BlobType* self, cfish_Obj* other);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_BlobType_To_Host_t)(lucy_BlobType* self, void* vcache);

typedef cfish_Obj*
(*LUCY_BlobType_Clone_t)(lucy_BlobType* self);

typedef bool
(*LUCY_BlobType_Equals_t)(lucy_BlobType* self, cfish_Obj* other);

typedef int32_t
(*LUCY_BlobType_Compare_To_t)(lucy_BlobType* self, cfish_Obj* other);

typedef void
(*LUCY_BlobType_Destroy_t)(lucy_BlobType* self);

typedef cfish_String*
(*LUCY_BlobType_To_String_t)(lucy_BlobType* self);

typedef void
(*LUCY_BlobType_Set_Boost_t)(lucy_BlobType* self, float boost);

typedef float
(*LUCY_BlobType_Get_Boost_t)(lucy_BlobType* self);

typedef void
(*LUCY_BlobType_Set_Indexed_t)(lucy_BlobType* self, bool indexed);

typedef bool
(*LUCY_BlobType_Indexed_t)(lucy_BlobType* self);

typedef void
(*LUCY_BlobType_Set_Stored_t)(lucy_BlobType* self, bool stored);

typedef bool
(*LUCY_BlobType_Stored_t)(lucy_BlobType* self);

typedef void
(*LUCY_BlobType_Set_Sortable_t)(lucy_BlobType* self, bool sortable);

typedef bool
(*LUCY_BlobType_Sortable_t)(lucy_BlobType* self);

typedef bool
(*LUCY_BlobType_Binary_t)(lucy_BlobType* self);

typedef int32_t
(*LUCY_BlobType_Compare_Values_t)(lucy_BlobType* self, cfish_Obj* a, cfish_Obj* b);

typedef lucy_TermStepper*
(*LUCY_BlobType_Make_Term_Stepper_t)(lucy_BlobType* self);

typedef int8_t
(*LUCY_BlobType_Primitive_ID_t)(lucy_BlobType* self);

typedef cfish_Hash*
(*LUCY_BlobType_Dump_For_Schema_t)(lucy_BlobType* self);

typedef cfish_Hash*
(*LUCY_BlobType_Dump_t)(lucy_BlobType* self);

typedef lucy_BlobType*
(*LUCY_BlobType_Load_t)(lucy_BlobType* self, cfish_Obj* dump);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_BlobType_get_class(lucy_BlobType *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_BlobType_get_class_name(lucy_BlobType *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_BlobType_is_a(lucy_BlobType *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_BlobType_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_BlobType_To_Host(lucy_BlobType* self, void* vcache) {
    const LUCY_BlobType_To_Host_t method = (LUCY_BlobType_To_Host_t)cfish_obj_method(self, LUCY_BlobType_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_BlobType_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_BlobType_Clone(lucy_BlobType* self) {
    const LUCY_BlobType_Clone_t method = (LUCY_BlobType_Clone_t)cfish_obj_method(self, LUCY_BlobType_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_BlobType_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_BlobType_Equals(lucy_BlobType* self, cfish_Obj* other) {
    const LUCY_BlobType_Equals_t method = (LUCY_BlobType_Equals_t)cfish_obj_method(self, LUCY_BlobType_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_BlobType_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_BlobType_Compare_To(lucy_BlobType* self, cfish_Obj* other) {
    const LUCY_BlobType_Compare_To_t method = (LUCY_BlobType_Compare_To_t)cfish_obj_method(self, LUCY_BlobType_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_BlobType_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_BlobType_Destroy(lucy_BlobType* self) {
    const LUCY_BlobType_Destroy_t method = (LUCY_BlobType_Destroy_t)cfish_obj_method(self, LUCY_BlobType_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_BlobType_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_BlobType_To_String(lucy_BlobType* self) {
    const LUCY_BlobType_To_String_t method = (LUCY_BlobType_To_String_t)cfish_obj_method(self, LUCY_BlobType_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_BlobType_Set_Boost_OFFSET;
static CFISH_INLINE void
LUCY_BlobType_Set_Boost(lucy_BlobType* self, float boost) {
    const LUCY_BlobType_Set_Boost_t method = (LUCY_BlobType_Set_Boost_t)cfish_obj_method(self, LUCY_BlobType_Set_Boost_OFFSET);
    method(self, boost);
}

extern LUCY_VISIBLE uint32_t LUCY_BlobType_Get_Boost_OFFSET;
static CFISH_INLINE float
LUCY_BlobType_Get_Boost(lucy_BlobType* self) {
    const LUCY_BlobType_Get_Boost_t method = (LUCY_BlobType_Get_Boost_t)cfish_obj_method(self, LUCY_BlobType_Get_Boost_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_BlobType_Set_Indexed_OFFSET;
static CFISH_INLINE void
LUCY_BlobType_Set_Indexed(lucy_BlobType* self, bool indexed) {
    const LUCY_BlobType_Set_Indexed_t method = (LUCY_BlobType_Set_Indexed_t)cfish_obj_method(self, LUCY_BlobType_Set_Indexed_OFFSET);
    method(self, indexed);
}

extern LUCY_VISIBLE uint32_t LUCY_BlobType_Indexed_OFFSET;
static CFISH_INLINE bool
LUCY_BlobType_Indexed(lucy_BlobType* self) {
    const LUCY_BlobType_Indexed_t method = (LUCY_BlobType_Indexed_t)cfish_obj_method(self, LUCY_BlobType_Indexed_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_BlobType_Set_Stored_OFFSET;
static CFISH_INLINE void
LUCY_BlobType_Set_Stored(lucy_BlobType* self, bool stored) {
    const LUCY_BlobType_Set_Stored_t method = (LUCY_BlobType_Set_Stored_t)cfish_obj_method(self, LUCY_BlobType_Set_Stored_OFFSET);
    method(self, stored);
}

extern LUCY_VISIBLE uint32_t LUCY_BlobType_Stored_OFFSET;
static CFISH_INLINE bool
LUCY_BlobType_Stored(lucy_BlobType* self) {
    const LUCY_BlobType_Stored_t method = (LUCY_BlobType_Stored_t)cfish_obj_method(self, LUCY_BlobType_Stored_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_BlobType_Set_Sortable_OFFSET;
static CFISH_INLINE void
LUCY_BlobType_Set_Sortable(lucy_BlobType* self, bool sortable) {
    const LUCY_BlobType_Set_Sortable_t method = (LUCY_BlobType_Set_Sortable_t)cfish_obj_method(self, LUCY_BlobType_Set_Sortable_OFFSET);
    method(self, sortable);
}

extern LUCY_VISIBLE uint32_t LUCY_BlobType_Sortable_OFFSET;
static CFISH_INLINE bool
LUCY_BlobType_Sortable(lucy_BlobType* self) {
    const LUCY_BlobType_Sortable_t method = (LUCY_BlobType_Sortable_t)cfish_obj_method(self, LUCY_BlobType_Sortable_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_BlobType_Binary_OFFSET;
static CFISH_INLINE bool
LUCY_BlobType_Binary(lucy_BlobType* self) {
    const LUCY_BlobType_Binary_t method = (LUCY_BlobType_Binary_t)cfish_obj_method(self, LUCY_BlobType_Binary_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_BlobType_Compare_Values_OFFSET;
static CFISH_INLINE int32_t
LUCY_BlobType_Compare_Values(lucy_BlobType* self, cfish_Obj* a, cfish_Obj* b) {
    const LUCY_BlobType_Compare_Values_t method = (LUCY_BlobType_Compare_Values_t)cfish_obj_method(self, LUCY_BlobType_Compare_Values_OFFSET);
    return method(self, a, b);
}

extern LUCY_VISIBLE uint32_t LUCY_BlobType_Make_Term_Stepper_OFFSET;
static CFISH_INLINE lucy_TermStepper*
LUCY_BlobType_Make_Term_Stepper(lucy_BlobType* self) {
    const LUCY_BlobType_Make_Term_Stepper_t method = (LUCY_BlobType_Make_Term_Stepper_t)cfish_obj_method(self, LUCY_BlobType_Make_Term_Stepper_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_BlobType_Primitive_ID_OFFSET;
static CFISH_INLINE int8_t
LUCY_BlobType_Primitive_ID(lucy_BlobType* self) {
    const LUCY_BlobType_Primitive_ID_t method = (LUCY_BlobType_Primitive_ID_t)cfish_obj_method(self, LUCY_BlobType_Primitive_ID_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_BlobType_Dump_For_Schema_OFFSET;
static CFISH_INLINE cfish_Hash*
LUCY_BlobType_Dump_For_Schema(lucy_BlobType* self) {
    const LUCY_BlobType_Dump_For_Schema_t method = (LUCY_BlobType_Dump_For_Schema_t)cfish_obj_method(self, LUCY_BlobType_Dump_For_Schema_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_BlobType_Dump_OFFSET;
static CFISH_INLINE cfish_Hash*
LUCY_BlobType_Dump(lucy_BlobType* self) {
    const LUCY_BlobType_Dump_t method = (LUCY_BlobType_Dump_t)cfish_obj_method(self, LUCY_BlobType_Dump_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_BlobType_Load_OFFSET;
static CFISH_INLINE lucy_BlobType*
LUCY_BlobType_Load(lucy_BlobType* self, cfish_Obj* dump) {
    const LUCY_BlobType_Load_t method = (LUCY_BlobType_Load_t)cfish_obj_method(self, LUCY_BlobType_Load_OFFSET);
    return method(self, dump);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#else
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define BlobType lucy_BlobType
  #define BLOBTYPE LUCY_BLOBTYPE
  #define BlobType_new lucy_BlobType_new
  #define BlobType_init lucy_BlobType_init
  #define BlobType_get_class lucy_BlobType_get_class
  #define BlobType_get_class_name lucy_BlobType_get_class_name
  #define BlobType_is_a lucy_BlobType_is_a
  #define BlobType_Binary_IMP LUCY_BlobType_Binary_IMP
  #define BlobType_Set_Sortable_IMP LUCY_BlobType_Set_Sortable_IMP
  #define BlobType_Primitive_ID_IMP LUCY_BlobType_Primitive_ID_IMP
  #define BlobType_Dump_For_Schema_IMP LUCY_BlobType_Dump_For_Schema_IMP
  #define BlobType_Dump_IMP LUCY_BlobType_Dump_IMP
  #define BlobType_Load_IMP LUCY_BlobType_Load_IMP
  #define BlobType_Equals_IMP LUCY_BlobType_Equals_IMP
  #define BlobType_To_Host LUCY_BlobType_To_Host
  #define BlobType_To_Host_t LUCY_BlobType_To_Host_t
  #define BlobType_Clone LUCY_BlobType_Clone
  #define BlobType_Clone_t LUCY_BlobType_Clone_t
  #define BlobType_Equals LUCY_BlobType_Equals
  #define BlobType_Equals_t LUCY_BlobType_Equals_t
  #define BlobType_Compare_To LUCY_BlobType_Compare_To
  #define BlobType_Compare_To_t LUCY_BlobType_Compare_To_t
  #define BlobType_Destroy LUCY_BlobType_Destroy
  #define BlobType_Destroy_t LUCY_BlobType_Destroy_t
  #define BlobType_To_String LUCY_BlobType_To_String
  #define BlobType_To_String_t LUCY_BlobType_To_String_t
  #define BlobType_Set_Boost LUCY_BlobType_Set_Boost
  #define BlobType_Set_Boost_t LUCY_BlobType_Set_Boost_t
  #define BlobType_Get_Boost LUCY_BlobType_Get_Boost
  #define BlobType_Get_Boost_t LUCY_BlobType_Get_Boost_t
  #define BlobType_Set_Indexed LUCY_BlobType_Set_Indexed
  #define BlobType_Set_Indexed_t LUCY_BlobType_Set_Indexed_t
  #define BlobType_Indexed LUCY_BlobType_Indexed
  #define BlobType_Indexed_t LUCY_BlobType_Indexed_t
  #define BlobType_Set_Stored LUCY_BlobType_Set_Stored
  #define BlobType_Set_Stored_t LUCY_BlobType_Set_Stored_t
  #define BlobType_Stored LUCY_BlobType_Stored
  #define BlobType_Stored_t LUCY_BlobType_Stored_t
  #define BlobType_Set_Sortable LUCY_BlobType_Set_Sortable
  #define BlobType_Set_Sortable_t LUCY_BlobType_Set_Sortable_t
  #define BlobType_Sortable LUCY_BlobType_Sortable
  #define BlobType_Sortable_t LUCY_BlobType_Sortable_t
  #define BlobType_Binary LUCY_BlobType_Binary
  #define BlobType_Binary_t LUCY_BlobType_Binary_t
  #define BlobType_Compare_Values LUCY_BlobType_Compare_Values
  #define BlobType_Compare_Values_t LUCY_BlobType_Compare_Values_t
  #define BlobType_Make_Term_Stepper LUCY_BlobType_Make_Term_Stepper
  #define BlobType_Make_Term_Stepper_t LUCY_BlobType_Make_Term_Stepper_t
  #define BlobType_Primitive_ID LUCY_BlobType_Primitive_ID
  #define BlobType_Primitive_ID_t LUCY_BlobType_Primitive_ID_t
  #define BlobType_Dump_For_Schema LUCY_BlobType_Dump_For_Schema
  #define BlobType_Dump_For_Schema_t LUCY_BlobType_Dump_For_Schema_t
  #define BlobType_Dump LUCY_BlobType_Dump
  #define BlobType_Dump_t LUCY_BlobType_Dump_t
  #define BlobType_Load LUCY_BlobType_Load
  #define BlobType_Load_t LUCY_BlobType_Load_t
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_PLAN_BLOBTYPE */




