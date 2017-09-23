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


#ifndef H_LUCY_SEARCH_SPAN
#define H_LUCY_SEARCH_SPAN 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Clownfish\Obj.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_SPAN
extern uint32_t lucy_Span_IVARS_OFFSET;
typedef struct lucy_SpanIVARS lucy_SpanIVARS;
static CFISH_INLINE lucy_SpanIVARS*
lucy_Span_IVARS(lucy_Span *self) {
   char *ptr = (char*)self + lucy_Span_IVARS_OFFSET;
   return (lucy_SpanIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define SpanIVARS lucy_SpanIVARS
  #define Span_IVARS lucy_Span_IVARS
#endif

struct lucy_SpanIVARS {
    int32_t offset;
    int32_t length;
    float weight;
};

#endif /* C_LUCY_SPAN */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_Span*
lucy_Span_new(int32_t offset, int32_t length, float weight);

LUCY_VISIBLE lucy_Span*
lucy_Span_init(lucy_Span* self, int32_t offset, int32_t length, float weight);

int32_t
LUCY_Span_Get_Offset_IMP(lucy_Span* self);

void
LUCY_Span_Set_Offset_IMP(lucy_Span* self, int32_t offset);

int32_t
LUCY_Span_Get_Length_IMP(lucy_Span* self);

void
LUCY_Span_Set_Length_IMP(lucy_Span* self, int32_t length);

float
LUCY_Span_Get_Weight_IMP(lucy_Span* self);

void
LUCY_Span_Set_Weight_IMP(lucy_Span* self, float weight);

bool
LUCY_Span_Equals_IMP(lucy_Span* self, cfish_Obj* other);

int32_t
LUCY_Span_Compare_To_IMP(lucy_Span* self, cfish_Obj* other);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_Span_To_Host_t)(lucy_Span* self, void* vcache);

typedef cfish_Obj*
(*LUCY_Span_Clone_t)(lucy_Span* self);

typedef bool
(*LUCY_Span_Equals_t)(lucy_Span* self, cfish_Obj* other);

typedef int32_t
(*LUCY_Span_Compare_To_t)(lucy_Span* self, cfish_Obj* other);

typedef void
(*LUCY_Span_Destroy_t)(lucy_Span* self);

typedef cfish_String*
(*LUCY_Span_To_String_t)(lucy_Span* self);

typedef int32_t
(*LUCY_Span_Get_Offset_t)(lucy_Span* self);

typedef void
(*LUCY_Span_Set_Offset_t)(lucy_Span* self, int32_t offset);

typedef int32_t
(*LUCY_Span_Get_Length_t)(lucy_Span* self);

typedef void
(*LUCY_Span_Set_Length_t)(lucy_Span* self, int32_t length);

typedef float
(*LUCY_Span_Get_Weight_t)(lucy_Span* self);

typedef void
(*LUCY_Span_Set_Weight_t)(lucy_Span* self, float weight);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_Span_get_class(lucy_Span *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_Span_get_class_name(lucy_Span *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_Span_is_a(lucy_Span *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_Span_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_Span_To_Host(lucy_Span* self, void* vcache) {
    const LUCY_Span_To_Host_t method = (LUCY_Span_To_Host_t)cfish_obj_method(self, LUCY_Span_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_Span_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_Span_Clone(lucy_Span* self) {
    const LUCY_Span_Clone_t method = (LUCY_Span_Clone_t)cfish_obj_method(self, LUCY_Span_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_Span_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_Span_Equals(lucy_Span* self, cfish_Obj* other) {
    const LUCY_Span_Equals_t method = (LUCY_Span_Equals_t)cfish_obj_method(self, LUCY_Span_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_Span_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_Span_Compare_To(lucy_Span* self, cfish_Obj* other) {
    const LUCY_Span_Compare_To_t method = (LUCY_Span_Compare_To_t)cfish_obj_method(self, LUCY_Span_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_Span_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_Span_Destroy(lucy_Span* self) {
    const LUCY_Span_Destroy_t method = (LUCY_Span_Destroy_t)cfish_obj_method(self, LUCY_Span_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_Span_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_Span_To_String(lucy_Span* self) {
    const LUCY_Span_To_String_t method = (LUCY_Span_To_String_t)cfish_obj_method(self, LUCY_Span_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_Span_Get_Offset_OFFSET;
static CFISH_INLINE int32_t
LUCY_Span_Get_Offset(lucy_Span* self) {
    const LUCY_Span_Get_Offset_t method = (LUCY_Span_Get_Offset_t)cfish_obj_method(self, LUCY_Span_Get_Offset_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_Span_Set_Offset_OFFSET;
static CFISH_INLINE void
LUCY_Span_Set_Offset(lucy_Span* self, int32_t offset) {
    const LUCY_Span_Set_Offset_t method = (LUCY_Span_Set_Offset_t)cfish_obj_method(self, LUCY_Span_Set_Offset_OFFSET);
    method(self, offset);
}

extern LUCY_VISIBLE uint32_t LUCY_Span_Get_Length_OFFSET;
static CFISH_INLINE int32_t
LUCY_Span_Get_Length(lucy_Span* self) {
    const LUCY_Span_Get_Length_t method = (LUCY_Span_Get_Length_t)cfish_obj_method(self, LUCY_Span_Get_Length_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_Span_Set_Length_OFFSET;
static CFISH_INLINE void
LUCY_Span_Set_Length(lucy_Span* self, int32_t length) {
    const LUCY_Span_Set_Length_t method = (LUCY_Span_Set_Length_t)cfish_obj_method(self, LUCY_Span_Set_Length_OFFSET);
    method(self, length);
}

extern LUCY_VISIBLE uint32_t LUCY_Span_Get_Weight_OFFSET;
static CFISH_INLINE float
LUCY_Span_Get_Weight(lucy_Span* self) {
    const LUCY_Span_Get_Weight_t method = (LUCY_Span_Get_Weight_t)cfish_obj_method(self, LUCY_Span_Get_Weight_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_Span_Set_Weight_OFFSET;
static CFISH_INLINE void
LUCY_Span_Set_Weight(lucy_Span* self, float weight) {
    const LUCY_Span_Set_Weight_t method = (LUCY_Span_Set_Weight_t)cfish_obj_method(self, LUCY_Span_Set_Weight_OFFSET);
    method(self, weight);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#define Lucy_Span_Get_Offset_OVERRIDE NULL
#define Lucy_Span_Set_Offset_OVERRIDE NULL
#define Lucy_Span_Get_Length_OVERRIDE NULL
#define Lucy_Span_Set_Length_OVERRIDE NULL
#define Lucy_Span_Get_Weight_OVERRIDE NULL
#define Lucy_Span_Set_Weight_OVERRIDE NULL
#else
int32_t
Lucy_Span_Get_Offset_OVERRIDE(lucy_Span* self);
void
Lucy_Span_Set_Offset_OVERRIDE(lucy_Span* self, int32_t offset);
int32_t
Lucy_Span_Get_Length_OVERRIDE(lucy_Span* self);
void
Lucy_Span_Set_Length_OVERRIDE(lucy_Span* self, int32_t length);
float
Lucy_Span_Get_Weight_OVERRIDE(lucy_Span* self);
void
Lucy_Span_Set_Weight_OVERRIDE(lucy_Span* self, float weight);
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define Span lucy_Span
  #define SPAN LUCY_SPAN
  #define Span_new lucy_Span_new
  #define Span_init lucy_Span_init
  #define Span_get_class lucy_Span_get_class
  #define Span_get_class_name lucy_Span_get_class_name
  #define Span_is_a lucy_Span_is_a
  #define Span_Get_Offset_IMP LUCY_Span_Get_Offset_IMP
  #define Span_Set_Offset_IMP LUCY_Span_Set_Offset_IMP
  #define Span_Get_Length_IMP LUCY_Span_Get_Length_IMP
  #define Span_Set_Length_IMP LUCY_Span_Set_Length_IMP
  #define Span_Get_Weight_IMP LUCY_Span_Get_Weight_IMP
  #define Span_Set_Weight_IMP LUCY_Span_Set_Weight_IMP
  #define Span_Equals_IMP LUCY_Span_Equals_IMP
  #define Span_Compare_To_IMP LUCY_Span_Compare_To_IMP
  #define Span_To_Host LUCY_Span_To_Host
  #define Span_To_Host_t LUCY_Span_To_Host_t
  #define Span_Clone LUCY_Span_Clone
  #define Span_Clone_t LUCY_Span_Clone_t
  #define Span_Equals LUCY_Span_Equals
  #define Span_Equals_t LUCY_Span_Equals_t
  #define Span_Compare_To LUCY_Span_Compare_To
  #define Span_Compare_To_t LUCY_Span_Compare_To_t
  #define Span_Destroy LUCY_Span_Destroy
  #define Span_Destroy_t LUCY_Span_Destroy_t
  #define Span_To_String LUCY_Span_To_String
  #define Span_To_String_t LUCY_Span_To_String_t
  #define Span_Get_Offset LUCY_Span_Get_Offset
  #define Span_Get_Offset_t LUCY_Span_Get_Offset_t
  #define Span_Set_Offset LUCY_Span_Set_Offset
  #define Span_Set_Offset_t LUCY_Span_Set_Offset_t
  #define Span_Get_Length LUCY_Span_Get_Length
  #define Span_Get_Length_t LUCY_Span_Get_Length_t
  #define Span_Set_Length LUCY_Span_Set_Length
  #define Span_Set_Length_t LUCY_Span_Set_Length_t
  #define Span_Get_Weight LUCY_Span_Get_Weight
  #define Span_Get_Weight_t LUCY_Span_Get_Weight_t
  #define Span_Set_Weight LUCY_Span_Set_Weight
  #define Span_Set_Weight_t LUCY_Span_Set_Weight_t
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_SEARCH_SPAN */



