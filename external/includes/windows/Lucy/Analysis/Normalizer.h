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


#ifndef H_LUCY_ANALYSIS_NORMALIZER
#define H_LUCY_ANALYSIS_NORMALIZER 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Lucy\Analysis\Analyzer.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_NORMALIZER
extern uint32_t lucy_Normalizer_IVARS_OFFSET;
typedef struct lucy_NormalizerIVARS lucy_NormalizerIVARS;
static CFISH_INLINE lucy_NormalizerIVARS*
lucy_Normalizer_IVARS(lucy_Normalizer *self) {
   char *ptr = (char*)self + lucy_Normalizer_IVARS_OFFSET;
   return (lucy_NormalizerIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define NormalizerIVARS lucy_NormalizerIVARS
  #define Normalizer_IVARS lucy_Normalizer_IVARS
#endif

struct lucy_NormalizerIVARS {
    int options;
};

#endif /* C_LUCY_NORMALIZER */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_Normalizer*
lucy_Normalizer_new(cfish_String* normalization_form, bool case_fold, bool strip_accents);

LUCY_VISIBLE lucy_Normalizer*
lucy_Normalizer_init(lucy_Normalizer* self, cfish_String* normalization_form, bool case_fold, bool strip_accents);

lucy_Inversion*
LUCY_Normalizer_Transform_IMP(lucy_Normalizer* self, lucy_Inversion* inversion);

cfish_Hash*
LUCY_Normalizer_Dump_IMP(lucy_Normalizer* self);

lucy_Normalizer*
LUCY_Normalizer_Load_IMP(lucy_Normalizer* self, cfish_Obj* dump);

bool
LUCY_Normalizer_Equals_IMP(lucy_Normalizer* self, cfish_Obj* other);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_Normalizer_To_Host_t)(lucy_Normalizer* self, void* vcache);

typedef cfish_Obj*
(*LUCY_Normalizer_Clone_t)(lucy_Normalizer* self);

typedef bool
(*LUCY_Normalizer_Equals_t)(lucy_Normalizer* self, cfish_Obj* other);

typedef int32_t
(*LUCY_Normalizer_Compare_To_t)(lucy_Normalizer* self, cfish_Obj* other);

typedef void
(*LUCY_Normalizer_Destroy_t)(lucy_Normalizer* self);

typedef cfish_String*
(*LUCY_Normalizer_To_String_t)(lucy_Normalizer* self);

typedef lucy_Inversion*
(*LUCY_Normalizer_Transform_t)(lucy_Normalizer* self, lucy_Inversion* inversion);

typedef lucy_Inversion*
(*LUCY_Normalizer_Transform_Text_t)(lucy_Normalizer* self, cfish_String* text);

typedef cfish_Vector*
(*LUCY_Normalizer_Split_t)(lucy_Normalizer* self, cfish_String* text);

typedef cfish_Hash*
(*LUCY_Normalizer_Dump_t)(lucy_Normalizer* self);

typedef lucy_Normalizer*
(*LUCY_Normalizer_Load_t)(lucy_Normalizer* self, cfish_Obj* dump);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_Normalizer_get_class(lucy_Normalizer *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_Normalizer_get_class_name(lucy_Normalizer *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_Normalizer_is_a(lucy_Normalizer *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_Normalizer_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_Normalizer_To_Host(lucy_Normalizer* self, void* vcache) {
    const LUCY_Normalizer_To_Host_t method = (LUCY_Normalizer_To_Host_t)cfish_obj_method(self, LUCY_Normalizer_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_Normalizer_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_Normalizer_Clone(lucy_Normalizer* self) {
    const LUCY_Normalizer_Clone_t method = (LUCY_Normalizer_Clone_t)cfish_obj_method(self, LUCY_Normalizer_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_Normalizer_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_Normalizer_Equals(lucy_Normalizer* self, cfish_Obj* other) {
    const LUCY_Normalizer_Equals_t method = (LUCY_Normalizer_Equals_t)cfish_obj_method(self, LUCY_Normalizer_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_Normalizer_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_Normalizer_Compare_To(lucy_Normalizer* self, cfish_Obj* other) {
    const LUCY_Normalizer_Compare_To_t method = (LUCY_Normalizer_Compare_To_t)cfish_obj_method(self, LUCY_Normalizer_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_Normalizer_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_Normalizer_Destroy(lucy_Normalizer* self) {
    const LUCY_Normalizer_Destroy_t method = (LUCY_Normalizer_Destroy_t)cfish_obj_method(self, LUCY_Normalizer_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_Normalizer_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_Normalizer_To_String(lucy_Normalizer* self) {
    const LUCY_Normalizer_To_String_t method = (LUCY_Normalizer_To_String_t)cfish_obj_method(self, LUCY_Normalizer_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_Normalizer_Transform_OFFSET;
static CFISH_INLINE lucy_Inversion*
LUCY_Normalizer_Transform(lucy_Normalizer* self, lucy_Inversion* inversion) {
    const LUCY_Normalizer_Transform_t method = (LUCY_Normalizer_Transform_t)cfish_obj_method(self, LUCY_Normalizer_Transform_OFFSET);
    return method(self, inversion);
}

extern LUCY_VISIBLE uint32_t LUCY_Normalizer_Transform_Text_OFFSET;
static CFISH_INLINE lucy_Inversion*
LUCY_Normalizer_Transform_Text(lucy_Normalizer* self, cfish_String* text) {
    const LUCY_Normalizer_Transform_Text_t method = (LUCY_Normalizer_Transform_Text_t)cfish_obj_method(self, LUCY_Normalizer_Transform_Text_OFFSET);
    return method(self, text);
}

extern LUCY_VISIBLE uint32_t LUCY_Normalizer_Split_OFFSET;
static CFISH_INLINE cfish_Vector*
LUCY_Normalizer_Split(lucy_Normalizer* self, cfish_String* text) {
    const LUCY_Normalizer_Split_t method = (LUCY_Normalizer_Split_t)cfish_obj_method(self, LUCY_Normalizer_Split_OFFSET);
    return method(self, text);
}

extern LUCY_VISIBLE uint32_t LUCY_Normalizer_Dump_OFFSET;
static CFISH_INLINE cfish_Hash*
LUCY_Normalizer_Dump(lucy_Normalizer* self) {
    const LUCY_Normalizer_Dump_t method = (LUCY_Normalizer_Dump_t)cfish_obj_method(self, LUCY_Normalizer_Dump_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_Normalizer_Load_OFFSET;
static CFISH_INLINE lucy_Normalizer*
LUCY_Normalizer_Load(lucy_Normalizer* self, cfish_Obj* dump) {
    const LUCY_Normalizer_Load_t method = (LUCY_Normalizer_Load_t)cfish_obj_method(self, LUCY_Normalizer_Load_OFFSET);
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
  #define Normalizer lucy_Normalizer
  #define NORMALIZER LUCY_NORMALIZER
  #define Normalizer_new lucy_Normalizer_new
  #define Normalizer_init lucy_Normalizer_init
  #define Normalizer_get_class lucy_Normalizer_get_class
  #define Normalizer_get_class_name lucy_Normalizer_get_class_name
  #define Normalizer_is_a lucy_Normalizer_is_a
  #define Normalizer_Transform_IMP LUCY_Normalizer_Transform_IMP
  #define Normalizer_Dump_IMP LUCY_Normalizer_Dump_IMP
  #define Normalizer_Load_IMP LUCY_Normalizer_Load_IMP
  #define Normalizer_Equals_IMP LUCY_Normalizer_Equals_IMP
  #define Normalizer_To_Host LUCY_Normalizer_To_Host
  #define Normalizer_To_Host_t LUCY_Normalizer_To_Host_t
  #define Normalizer_Clone LUCY_Normalizer_Clone
  #define Normalizer_Clone_t LUCY_Normalizer_Clone_t
  #define Normalizer_Equals LUCY_Normalizer_Equals
  #define Normalizer_Equals_t LUCY_Normalizer_Equals_t
  #define Normalizer_Compare_To LUCY_Normalizer_Compare_To
  #define Normalizer_Compare_To_t LUCY_Normalizer_Compare_To_t
  #define Normalizer_Destroy LUCY_Normalizer_Destroy
  #define Normalizer_Destroy_t LUCY_Normalizer_Destroy_t
  #define Normalizer_To_String LUCY_Normalizer_To_String
  #define Normalizer_To_String_t LUCY_Normalizer_To_String_t
  #define Normalizer_Transform LUCY_Normalizer_Transform
  #define Normalizer_Transform_t LUCY_Normalizer_Transform_t
  #define Normalizer_Transform_Text LUCY_Normalizer_Transform_Text
  #define Normalizer_Transform_Text_t LUCY_Normalizer_Transform_Text_t
  #define Normalizer_Split LUCY_Normalizer_Split
  #define Normalizer_Split_t LUCY_Normalizer_Split_t
  #define Normalizer_Dump LUCY_Normalizer_Dump
  #define Normalizer_Dump_t LUCY_Normalizer_Dump_t
  #define Normalizer_Load LUCY_Normalizer_Load
  #define Normalizer_Load_t LUCY_Normalizer_Load_t
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_ANALYSIS_NORMALIZER */




