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


#ifndef H_LUCY_OBJECT_BITVECTOR
#define H_LUCY_OBJECT_BITVECTOR 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Clownfish/Obj.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_BITVECTOR
extern uint32_t lucy_BitVec_IVARS_OFFSET;
typedef struct lucy_BitVectorIVARS lucy_BitVectorIVARS;
static CFISH_INLINE lucy_BitVectorIVARS*
lucy_BitVec_IVARS(lucy_BitVector *self) {
   char *ptr = (char*)self + lucy_BitVec_IVARS_OFFSET;
   return (lucy_BitVectorIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define BitVectorIVARS lucy_BitVectorIVARS
  #define BitVec_IVARS lucy_BitVec_IVARS
#endif

struct lucy_BitVectorIVARS {
    size_t cap;
    uint8_t* bits;
};

#endif /* C_LUCY_BITVECTOR */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_BitVector*
lucy_BitVec_new(size_t capacity);

LUCY_VISIBLE lucy_BitVector*
lucy_BitVec_init(lucy_BitVector* self, size_t capacity);

bool
LUCY_BitVec_Get_IMP(lucy_BitVector* self, size_t tick);

void
LUCY_BitVec_Set_IMP(lucy_BitVector* self, size_t tick);

uint8_t*
LUCY_BitVec_Get_Raw_Bits_IMP(lucy_BitVector* self);

size_t
LUCY_BitVec_Get_Capacity_IMP(lucy_BitVector* self);

int32_t
LUCY_BitVec_Next_Hit_IMP(lucy_BitVector* self, size_t tick);

void
LUCY_BitVec_Clear_IMP(lucy_BitVector* self, size_t tick);

void
LUCY_BitVec_Clear_All_IMP(lucy_BitVector* self);

void
LUCY_BitVec_Grow_IMP(lucy_BitVector* self, size_t capacity);

void
LUCY_BitVec_Mimic_IMP(lucy_BitVector* self, cfish_Obj* other);

void
LUCY_BitVec_And_IMP(lucy_BitVector* self, const lucy_BitVector* other);

void
LUCY_BitVec_Or_IMP(lucy_BitVector* self, const lucy_BitVector* other);

void
LUCY_BitVec_Xor_IMP(lucy_BitVector* self, const lucy_BitVector* other);

void
LUCY_BitVec_And_Not_IMP(lucy_BitVector* self, const lucy_BitVector* other);

void
LUCY_BitVec_Flip_IMP(lucy_BitVector* self, size_t tick);

void
LUCY_BitVec_Flip_Block_IMP(lucy_BitVector* self, size_t offset, size_t length);

size_t
LUCY_BitVec_Count_IMP(lucy_BitVector* self);

lucy_I32Array*
LUCY_BitVec_To_Array_IMP(lucy_BitVector* self);

void
LUCY_BitVec_Destroy_IMP(lucy_BitVector* self);

lucy_BitVector*
LUCY_BitVec_Clone_IMP(lucy_BitVector* self);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_BitVec_To_Host_t)(lucy_BitVector* self, void* vcache);

typedef lucy_BitVector*
(*LUCY_BitVec_Clone_t)(lucy_BitVector* self);

typedef bool
(*LUCY_BitVec_Equals_t)(lucy_BitVector* self, cfish_Obj* other);

typedef int32_t
(*LUCY_BitVec_Compare_To_t)(lucy_BitVector* self, cfish_Obj* other);

typedef void
(*LUCY_BitVec_Destroy_t)(lucy_BitVector* self);

typedef cfish_String*
(*LUCY_BitVec_To_String_t)(lucy_BitVector* self);

typedef bool
(*LUCY_BitVec_Get_t)(lucy_BitVector* self, size_t tick);

typedef void
(*LUCY_BitVec_Set_t)(lucy_BitVector* self, size_t tick);

typedef uint8_t*
(*LUCY_BitVec_Get_Raw_Bits_t)(lucy_BitVector* self);

typedef size_t
(*LUCY_BitVec_Get_Capacity_t)(lucy_BitVector* self);

typedef int32_t
(*LUCY_BitVec_Next_Hit_t)(lucy_BitVector* self, size_t tick);

typedef void
(*LUCY_BitVec_Clear_t)(lucy_BitVector* self, size_t tick);

typedef void
(*LUCY_BitVec_Clear_All_t)(lucy_BitVector* self);

typedef void
(*LUCY_BitVec_Grow_t)(lucy_BitVector* self, size_t capacity);

typedef void
(*LUCY_BitVec_Mimic_t)(lucy_BitVector* self, cfish_Obj* other);

typedef void
(*LUCY_BitVec_And_t)(lucy_BitVector* self, const lucy_BitVector* other);

typedef void
(*LUCY_BitVec_Or_t)(lucy_BitVector* self, const lucy_BitVector* other);

typedef void
(*LUCY_BitVec_Xor_t)(lucy_BitVector* self, const lucy_BitVector* other);

typedef void
(*LUCY_BitVec_And_Not_t)(lucy_BitVector* self, const lucy_BitVector* other);

typedef void
(*LUCY_BitVec_Flip_t)(lucy_BitVector* self, size_t tick);

typedef void
(*LUCY_BitVec_Flip_Block_t)(lucy_BitVector* self, size_t offset, size_t length);

typedef size_t
(*LUCY_BitVec_Count_t)(lucy_BitVector* self);

typedef lucy_I32Array*
(*LUCY_BitVec_To_Array_t)(lucy_BitVector* self);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_BitVec_get_class(lucy_BitVector *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_BitVec_get_class_name(lucy_BitVector *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_BitVec_is_a(lucy_BitVector *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_BitVec_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_BitVec_To_Host(lucy_BitVector* self, void* vcache) {
    const LUCY_BitVec_To_Host_t method = (LUCY_BitVec_To_Host_t)cfish_obj_method(self, LUCY_BitVec_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_BitVec_Clone_OFFSET;
static CFISH_INLINE lucy_BitVector*
LUCY_BitVec_Clone(lucy_BitVector* self) {
    const LUCY_BitVec_Clone_t method = (LUCY_BitVec_Clone_t)cfish_obj_method(self, LUCY_BitVec_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_BitVec_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_BitVec_Equals(lucy_BitVector* self, cfish_Obj* other) {
    const LUCY_BitVec_Equals_t method = (LUCY_BitVec_Equals_t)cfish_obj_method(self, LUCY_BitVec_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_BitVec_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_BitVec_Compare_To(lucy_BitVector* self, cfish_Obj* other) {
    const LUCY_BitVec_Compare_To_t method = (LUCY_BitVec_Compare_To_t)cfish_obj_method(self, LUCY_BitVec_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_BitVec_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_BitVec_Destroy(lucy_BitVector* self) {
    const LUCY_BitVec_Destroy_t method = (LUCY_BitVec_Destroy_t)cfish_obj_method(self, LUCY_BitVec_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_BitVec_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_BitVec_To_String(lucy_BitVector* self) {
    const LUCY_BitVec_To_String_t method = (LUCY_BitVec_To_String_t)cfish_obj_method(self, LUCY_BitVec_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_BitVec_Get_OFFSET;
static CFISH_INLINE bool
LUCY_BitVec_Get(lucy_BitVector* self, size_t tick) {
    const LUCY_BitVec_Get_t method = (LUCY_BitVec_Get_t)cfish_obj_method(self, LUCY_BitVec_Get_OFFSET);
    return method(self, tick);
}

extern LUCY_VISIBLE uint32_t LUCY_BitVec_Set_OFFSET;
static CFISH_INLINE void
LUCY_BitVec_Set(lucy_BitVector* self, size_t tick) {
    const LUCY_BitVec_Set_t method = (LUCY_BitVec_Set_t)cfish_obj_method(self, LUCY_BitVec_Set_OFFSET);
    method(self, tick);
}

extern LUCY_VISIBLE uint32_t LUCY_BitVec_Get_Raw_Bits_OFFSET;
static CFISH_INLINE uint8_t*
LUCY_BitVec_Get_Raw_Bits(lucy_BitVector* self) {
    const LUCY_BitVec_Get_Raw_Bits_t method = (LUCY_BitVec_Get_Raw_Bits_t)cfish_obj_method(self, LUCY_BitVec_Get_Raw_Bits_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_BitVec_Get_Capacity_OFFSET;
static CFISH_INLINE size_t
LUCY_BitVec_Get_Capacity(lucy_BitVector* self) {
    const LUCY_BitVec_Get_Capacity_t method = (LUCY_BitVec_Get_Capacity_t)cfish_obj_method(self, LUCY_BitVec_Get_Capacity_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_BitVec_Next_Hit_OFFSET;
static CFISH_INLINE int32_t
LUCY_BitVec_Next_Hit(lucy_BitVector* self, size_t tick) {
    const LUCY_BitVec_Next_Hit_t method = (LUCY_BitVec_Next_Hit_t)cfish_obj_method(self, LUCY_BitVec_Next_Hit_OFFSET);
    return method(self, tick);
}

extern LUCY_VISIBLE uint32_t LUCY_BitVec_Clear_OFFSET;
static CFISH_INLINE void
LUCY_BitVec_Clear(lucy_BitVector* self, size_t tick) {
    const LUCY_BitVec_Clear_t method = (LUCY_BitVec_Clear_t)cfish_obj_method(self, LUCY_BitVec_Clear_OFFSET);
    method(self, tick);
}

extern LUCY_VISIBLE uint32_t LUCY_BitVec_Clear_All_OFFSET;
static CFISH_INLINE void
LUCY_BitVec_Clear_All(lucy_BitVector* self) {
    const LUCY_BitVec_Clear_All_t method = (LUCY_BitVec_Clear_All_t)cfish_obj_method(self, LUCY_BitVec_Clear_All_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_BitVec_Grow_OFFSET;
static CFISH_INLINE void
LUCY_BitVec_Grow(lucy_BitVector* self, size_t capacity) {
    const LUCY_BitVec_Grow_t method = (LUCY_BitVec_Grow_t)cfish_obj_method(self, LUCY_BitVec_Grow_OFFSET);
    method(self, capacity);
}

extern LUCY_VISIBLE uint32_t LUCY_BitVec_Mimic_OFFSET;
static CFISH_INLINE void
LUCY_BitVec_Mimic(lucy_BitVector* self, cfish_Obj* other) {
    const LUCY_BitVec_Mimic_t method = (LUCY_BitVec_Mimic_t)cfish_obj_method(self, LUCY_BitVec_Mimic_OFFSET);
    method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_BitVec_And_OFFSET;
static CFISH_INLINE void
LUCY_BitVec_And(lucy_BitVector* self, const lucy_BitVector* other) {
    const LUCY_BitVec_And_t method = (LUCY_BitVec_And_t)cfish_obj_method(self, LUCY_BitVec_And_OFFSET);
    method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_BitVec_Or_OFFSET;
static CFISH_INLINE void
LUCY_BitVec_Or(lucy_BitVector* self, const lucy_BitVector* other) {
    const LUCY_BitVec_Or_t method = (LUCY_BitVec_Or_t)cfish_obj_method(self, LUCY_BitVec_Or_OFFSET);
    method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_BitVec_Xor_OFFSET;
static CFISH_INLINE void
LUCY_BitVec_Xor(lucy_BitVector* self, const lucy_BitVector* other) {
    const LUCY_BitVec_Xor_t method = (LUCY_BitVec_Xor_t)cfish_obj_method(self, LUCY_BitVec_Xor_OFFSET);
    method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_BitVec_And_Not_OFFSET;
static CFISH_INLINE void
LUCY_BitVec_And_Not(lucy_BitVector* self, const lucy_BitVector* other) {
    const LUCY_BitVec_And_Not_t method = (LUCY_BitVec_And_Not_t)cfish_obj_method(self, LUCY_BitVec_And_Not_OFFSET);
    method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_BitVec_Flip_OFFSET;
static CFISH_INLINE void
LUCY_BitVec_Flip(lucy_BitVector* self, size_t tick) {
    const LUCY_BitVec_Flip_t method = (LUCY_BitVec_Flip_t)cfish_obj_method(self, LUCY_BitVec_Flip_OFFSET);
    method(self, tick);
}

extern LUCY_VISIBLE uint32_t LUCY_BitVec_Flip_Block_OFFSET;
static CFISH_INLINE void
LUCY_BitVec_Flip_Block(lucy_BitVector* self, size_t offset, size_t length) {
    const LUCY_BitVec_Flip_Block_t method = (LUCY_BitVec_Flip_Block_t)cfish_obj_method(self, LUCY_BitVec_Flip_Block_OFFSET);
    method(self, offset, length);
}

extern LUCY_VISIBLE uint32_t LUCY_BitVec_Count_OFFSET;
static CFISH_INLINE size_t
LUCY_BitVec_Count(lucy_BitVector* self) {
    const LUCY_BitVec_Count_t method = (LUCY_BitVec_Count_t)cfish_obj_method(self, LUCY_BitVec_Count_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_BitVec_To_Array_OFFSET;
static CFISH_INLINE lucy_I32Array*
LUCY_BitVec_To_Array(lucy_BitVector* self) {
    const LUCY_BitVec_To_Array_t method = (LUCY_BitVec_To_Array_t)cfish_obj_method(self, LUCY_BitVec_To_Array_OFFSET);
    return method(self);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#define Lucy_BitVec_Get_OVERRIDE NULL
#define Lucy_BitVec_Set_OVERRIDE NULL
#define Lucy_BitVec_Get_Raw_Bits_OVERRIDE NULL
#define Lucy_BitVec_Get_Capacity_OVERRIDE NULL
#define Lucy_BitVec_Next_Hit_OVERRIDE NULL
#define Lucy_BitVec_Clear_OVERRIDE NULL
#define Lucy_BitVec_Clear_All_OVERRIDE NULL
#define Lucy_BitVec_Grow_OVERRIDE NULL
#define Lucy_BitVec_Mimic_OVERRIDE NULL
#define Lucy_BitVec_And_OVERRIDE NULL
#define Lucy_BitVec_Or_OVERRIDE NULL
#define Lucy_BitVec_Xor_OVERRIDE NULL
#define Lucy_BitVec_And_Not_OVERRIDE NULL
#define Lucy_BitVec_Flip_OVERRIDE NULL
#define Lucy_BitVec_Flip_Block_OVERRIDE NULL
#define Lucy_BitVec_Count_OVERRIDE NULL
#define Lucy_BitVec_To_Array_OVERRIDE NULL
#else
bool
Lucy_BitVec_Get_OVERRIDE(lucy_BitVector* self, size_t tick);
void
Lucy_BitVec_Set_OVERRIDE(lucy_BitVector* self, size_t tick);
uint8_t*
Lucy_BitVec_Get_Raw_Bits_OVERRIDE(lucy_BitVector* self);
size_t
Lucy_BitVec_Get_Capacity_OVERRIDE(lucy_BitVector* self);
int32_t
Lucy_BitVec_Next_Hit_OVERRIDE(lucy_BitVector* self, size_t tick);
void
Lucy_BitVec_Clear_OVERRIDE(lucy_BitVector* self, size_t tick);
void
Lucy_BitVec_Clear_All_OVERRIDE(lucy_BitVector* self);
void
Lucy_BitVec_Grow_OVERRIDE(lucy_BitVector* self, size_t capacity);
void
Lucy_BitVec_Mimic_OVERRIDE(lucy_BitVector* self, cfish_Obj* other);
void
Lucy_BitVec_And_OVERRIDE(lucy_BitVector* self, const lucy_BitVector* other);
void
Lucy_BitVec_Or_OVERRIDE(lucy_BitVector* self, const lucy_BitVector* other);
void
Lucy_BitVec_Xor_OVERRIDE(lucy_BitVector* self, const lucy_BitVector* other);
void
Lucy_BitVec_And_Not_OVERRIDE(lucy_BitVector* self, const lucy_BitVector* other);
void
Lucy_BitVec_Flip_OVERRIDE(lucy_BitVector* self, size_t tick);
void
Lucy_BitVec_Flip_Block_OVERRIDE(lucy_BitVector* self, size_t offset, size_t length);
size_t
Lucy_BitVec_Count_OVERRIDE(lucy_BitVector* self);
lucy_I32Array*
Lucy_BitVec_To_Array_OVERRIDE(lucy_BitVector* self);
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define BitVector lucy_BitVector
  #define BITVECTOR LUCY_BITVECTOR
  #define BitVec_new lucy_BitVec_new
  #define BitVec_init lucy_BitVec_init
  #define BitVec_get_class lucy_BitVec_get_class
  #define BitVec_get_class_name lucy_BitVec_get_class_name
  #define BitVec_is_a lucy_BitVec_is_a
  #define BitVec_Get_IMP LUCY_BitVec_Get_IMP
  #define BitVec_Set_IMP LUCY_BitVec_Set_IMP
  #define BitVec_Get_Raw_Bits_IMP LUCY_BitVec_Get_Raw_Bits_IMP
  #define BitVec_Get_Capacity_IMP LUCY_BitVec_Get_Capacity_IMP
  #define BitVec_Next_Hit_IMP LUCY_BitVec_Next_Hit_IMP
  #define BitVec_Clear_IMP LUCY_BitVec_Clear_IMP
  #define BitVec_Clear_All_IMP LUCY_BitVec_Clear_All_IMP
  #define BitVec_Grow_IMP LUCY_BitVec_Grow_IMP
  #define BitVec_Mimic_IMP LUCY_BitVec_Mimic_IMP
  #define BitVec_And_IMP LUCY_BitVec_And_IMP
  #define BitVec_Or_IMP LUCY_BitVec_Or_IMP
  #define BitVec_Xor_IMP LUCY_BitVec_Xor_IMP
  #define BitVec_And_Not_IMP LUCY_BitVec_And_Not_IMP
  #define BitVec_Flip_IMP LUCY_BitVec_Flip_IMP
  #define BitVec_Flip_Block_IMP LUCY_BitVec_Flip_Block_IMP
  #define BitVec_Count_IMP LUCY_BitVec_Count_IMP
  #define BitVec_To_Array_IMP LUCY_BitVec_To_Array_IMP
  #define BitVec_Destroy_IMP LUCY_BitVec_Destroy_IMP
  #define BitVec_Clone_IMP LUCY_BitVec_Clone_IMP
  #define BitVec_To_Host LUCY_BitVec_To_Host
  #define BitVec_To_Host_t LUCY_BitVec_To_Host_t
  #define BitVec_Clone LUCY_BitVec_Clone
  #define BitVec_Clone_t LUCY_BitVec_Clone_t
  #define BitVec_Equals LUCY_BitVec_Equals
  #define BitVec_Equals_t LUCY_BitVec_Equals_t
  #define BitVec_Compare_To LUCY_BitVec_Compare_To
  #define BitVec_Compare_To_t LUCY_BitVec_Compare_To_t
  #define BitVec_Destroy LUCY_BitVec_Destroy
  #define BitVec_Destroy_t LUCY_BitVec_Destroy_t
  #define BitVec_To_String LUCY_BitVec_To_String
  #define BitVec_To_String_t LUCY_BitVec_To_String_t
  #define BitVec_Get LUCY_BitVec_Get
  #define BitVec_Get_t LUCY_BitVec_Get_t
  #define BitVec_Set LUCY_BitVec_Set
  #define BitVec_Set_t LUCY_BitVec_Set_t
  #define BitVec_Get_Raw_Bits LUCY_BitVec_Get_Raw_Bits
  #define BitVec_Get_Raw_Bits_t LUCY_BitVec_Get_Raw_Bits_t
  #define BitVec_Get_Capacity LUCY_BitVec_Get_Capacity
  #define BitVec_Get_Capacity_t LUCY_BitVec_Get_Capacity_t
  #define BitVec_Next_Hit LUCY_BitVec_Next_Hit
  #define BitVec_Next_Hit_t LUCY_BitVec_Next_Hit_t
  #define BitVec_Clear LUCY_BitVec_Clear
  #define BitVec_Clear_t LUCY_BitVec_Clear_t
  #define BitVec_Clear_All LUCY_BitVec_Clear_All
  #define BitVec_Clear_All_t LUCY_BitVec_Clear_All_t
  #define BitVec_Grow LUCY_BitVec_Grow
  #define BitVec_Grow_t LUCY_BitVec_Grow_t
  #define BitVec_Mimic LUCY_BitVec_Mimic
  #define BitVec_Mimic_t LUCY_BitVec_Mimic_t
  #define BitVec_And LUCY_BitVec_And
  #define BitVec_And_t LUCY_BitVec_And_t
  #define BitVec_Or LUCY_BitVec_Or
  #define BitVec_Or_t LUCY_BitVec_Or_t
  #define BitVec_Xor LUCY_BitVec_Xor
  #define BitVec_Xor_t LUCY_BitVec_Xor_t
  #define BitVec_And_Not LUCY_BitVec_And_Not
  #define BitVec_And_Not_t LUCY_BitVec_And_Not_t
  #define BitVec_Flip LUCY_BitVec_Flip
  #define BitVec_Flip_t LUCY_BitVec_Flip_t
  #define BitVec_Flip_Block LUCY_BitVec_Flip_Block
  #define BitVec_Flip_Block_t LUCY_BitVec_Flip_Block_t
  #define BitVec_Count LUCY_BitVec_Count
  #define BitVec_Count_t LUCY_BitVec_Count_t
  #define BitVec_To_Array LUCY_BitVec_To_Array
  #define BitVec_To_Array_t LUCY_BitVec_To_Array_t
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_OBJECT_BITVECTOR */



