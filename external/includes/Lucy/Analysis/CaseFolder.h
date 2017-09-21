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


#ifndef H_LUCY_ANALYSIS_CASEFOLDER
#define H_LUCY_ANALYSIS_CASEFOLDER 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Lucy/Analysis/Analyzer.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_CASEFOLDER
extern uint32_t lucy_CaseFolder_IVARS_OFFSET;
typedef struct lucy_CaseFolderIVARS lucy_CaseFolderIVARS;
static CFISH_INLINE lucy_CaseFolderIVARS*
lucy_CaseFolder_IVARS(lucy_CaseFolder *self) {
   char *ptr = (char*)self + lucy_CaseFolder_IVARS_OFFSET;
   return (lucy_CaseFolderIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define CaseFolderIVARS lucy_CaseFolderIVARS
  #define CaseFolder_IVARS lucy_CaseFolder_IVARS
#endif

struct lucy_CaseFolderIVARS {
    lucy_Normalizer* normalizer;
};

#endif /* C_LUCY_CASEFOLDER */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_CaseFolder*
lucy_CaseFolder_new(void);

LUCY_VISIBLE lucy_CaseFolder*
lucy_CaseFolder_init(lucy_CaseFolder* self);

lucy_Inversion*
LUCY_CaseFolder_Transform_IMP(lucy_CaseFolder* self, lucy_Inversion* inversion);

lucy_Inversion*
LUCY_CaseFolder_Transform_Text_IMP(lucy_CaseFolder* self, cfish_String* text);

bool
LUCY_CaseFolder_Equals_IMP(lucy_CaseFolder* self, cfish_Obj* other);

cfish_Hash*
LUCY_CaseFolder_Dump_IMP(lucy_CaseFolder* self);

lucy_CaseFolder*
LUCY_CaseFolder_Load_IMP(lucy_CaseFolder* self, cfish_Obj* dump);

void
LUCY_CaseFolder_Destroy_IMP(lucy_CaseFolder* self);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_CaseFolder_To_Host_t)(lucy_CaseFolder* self, void* vcache);

typedef cfish_Obj*
(*LUCY_CaseFolder_Clone_t)(lucy_CaseFolder* self);

typedef bool
(*LUCY_CaseFolder_Equals_t)(lucy_CaseFolder* self, cfish_Obj* other);

typedef int32_t
(*LUCY_CaseFolder_Compare_To_t)(lucy_CaseFolder* self, cfish_Obj* other);

typedef void
(*LUCY_CaseFolder_Destroy_t)(lucy_CaseFolder* self);

typedef cfish_String*
(*LUCY_CaseFolder_To_String_t)(lucy_CaseFolder* self);

typedef lucy_Inversion*
(*LUCY_CaseFolder_Transform_t)(lucy_CaseFolder* self, lucy_Inversion* inversion);

typedef lucy_Inversion*
(*LUCY_CaseFolder_Transform_Text_t)(lucy_CaseFolder* self, cfish_String* text);

typedef cfish_Vector*
(*LUCY_CaseFolder_Split_t)(lucy_CaseFolder* self, cfish_String* text);

typedef cfish_Hash*
(*LUCY_CaseFolder_Dump_t)(lucy_CaseFolder* self);

typedef lucy_CaseFolder*
(*LUCY_CaseFolder_Load_t)(lucy_CaseFolder* self, cfish_Obj* dump);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_CaseFolder_get_class(lucy_CaseFolder *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_CaseFolder_get_class_name(lucy_CaseFolder *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_CaseFolder_is_a(lucy_CaseFolder *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_CaseFolder_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_CaseFolder_To_Host(lucy_CaseFolder* self, void* vcache) {
    const LUCY_CaseFolder_To_Host_t method = (LUCY_CaseFolder_To_Host_t)cfish_obj_method(self, LUCY_CaseFolder_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_CaseFolder_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_CaseFolder_Clone(lucy_CaseFolder* self) {
    const LUCY_CaseFolder_Clone_t method = (LUCY_CaseFolder_Clone_t)cfish_obj_method(self, LUCY_CaseFolder_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_CaseFolder_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_CaseFolder_Equals(lucy_CaseFolder* self, cfish_Obj* other) {
    const LUCY_CaseFolder_Equals_t method = (LUCY_CaseFolder_Equals_t)cfish_obj_method(self, LUCY_CaseFolder_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_CaseFolder_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_CaseFolder_Compare_To(lucy_CaseFolder* self, cfish_Obj* other) {
    const LUCY_CaseFolder_Compare_To_t method = (LUCY_CaseFolder_Compare_To_t)cfish_obj_method(self, LUCY_CaseFolder_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_CaseFolder_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_CaseFolder_Destroy(lucy_CaseFolder* self) {
    const LUCY_CaseFolder_Destroy_t method = (LUCY_CaseFolder_Destroy_t)cfish_obj_method(self, LUCY_CaseFolder_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_CaseFolder_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_CaseFolder_To_String(lucy_CaseFolder* self) {
    const LUCY_CaseFolder_To_String_t method = (LUCY_CaseFolder_To_String_t)cfish_obj_method(self, LUCY_CaseFolder_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_CaseFolder_Transform_OFFSET;
static CFISH_INLINE lucy_Inversion*
LUCY_CaseFolder_Transform(lucy_CaseFolder* self, lucy_Inversion* inversion) {
    const LUCY_CaseFolder_Transform_t method = (LUCY_CaseFolder_Transform_t)cfish_obj_method(self, LUCY_CaseFolder_Transform_OFFSET);
    return method(self, inversion);
}

extern LUCY_VISIBLE uint32_t LUCY_CaseFolder_Transform_Text_OFFSET;
static CFISH_INLINE lucy_Inversion*
LUCY_CaseFolder_Transform_Text(lucy_CaseFolder* self, cfish_String* text) {
    const LUCY_CaseFolder_Transform_Text_t method = (LUCY_CaseFolder_Transform_Text_t)cfish_obj_method(self, LUCY_CaseFolder_Transform_Text_OFFSET);
    return method(self, text);
}

extern LUCY_VISIBLE uint32_t LUCY_CaseFolder_Split_OFFSET;
static CFISH_INLINE cfish_Vector*
LUCY_CaseFolder_Split(lucy_CaseFolder* self, cfish_String* text) {
    const LUCY_CaseFolder_Split_t method = (LUCY_CaseFolder_Split_t)cfish_obj_method(self, LUCY_CaseFolder_Split_OFFSET);
    return method(self, text);
}

extern LUCY_VISIBLE uint32_t LUCY_CaseFolder_Dump_OFFSET;
static CFISH_INLINE cfish_Hash*
LUCY_CaseFolder_Dump(lucy_CaseFolder* self) {
    const LUCY_CaseFolder_Dump_t method = (LUCY_CaseFolder_Dump_t)cfish_obj_method(self, LUCY_CaseFolder_Dump_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_CaseFolder_Load_OFFSET;
static CFISH_INLINE lucy_CaseFolder*
LUCY_CaseFolder_Load(lucy_CaseFolder* self, cfish_Obj* dump) {
    const LUCY_CaseFolder_Load_t method = (LUCY_CaseFolder_Load_t)cfish_obj_method(self, LUCY_CaseFolder_Load_OFFSET);
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
  #define CaseFolder lucy_CaseFolder
  #define CASEFOLDER LUCY_CASEFOLDER
  #define CaseFolder_new lucy_CaseFolder_new
  #define CaseFolder_init lucy_CaseFolder_init
  #define CaseFolder_get_class lucy_CaseFolder_get_class
  #define CaseFolder_get_class_name lucy_CaseFolder_get_class_name
  #define CaseFolder_is_a lucy_CaseFolder_is_a
  #define CaseFolder_Transform_IMP LUCY_CaseFolder_Transform_IMP
  #define CaseFolder_Transform_Text_IMP LUCY_CaseFolder_Transform_Text_IMP
  #define CaseFolder_Equals_IMP LUCY_CaseFolder_Equals_IMP
  #define CaseFolder_Dump_IMP LUCY_CaseFolder_Dump_IMP
  #define CaseFolder_Load_IMP LUCY_CaseFolder_Load_IMP
  #define CaseFolder_Destroy_IMP LUCY_CaseFolder_Destroy_IMP
  #define CaseFolder_To_Host LUCY_CaseFolder_To_Host
  #define CaseFolder_To_Host_t LUCY_CaseFolder_To_Host_t
  #define CaseFolder_Clone LUCY_CaseFolder_Clone
  #define CaseFolder_Clone_t LUCY_CaseFolder_Clone_t
  #define CaseFolder_Equals LUCY_CaseFolder_Equals
  #define CaseFolder_Equals_t LUCY_CaseFolder_Equals_t
  #define CaseFolder_Compare_To LUCY_CaseFolder_Compare_To
  #define CaseFolder_Compare_To_t LUCY_CaseFolder_Compare_To_t
  #define CaseFolder_Destroy LUCY_CaseFolder_Destroy
  #define CaseFolder_Destroy_t LUCY_CaseFolder_Destroy_t
  #define CaseFolder_To_String LUCY_CaseFolder_To_String
  #define CaseFolder_To_String_t LUCY_CaseFolder_To_String_t
  #define CaseFolder_Transform LUCY_CaseFolder_Transform
  #define CaseFolder_Transform_t LUCY_CaseFolder_Transform_t
  #define CaseFolder_Transform_Text LUCY_CaseFolder_Transform_Text
  #define CaseFolder_Transform_Text_t LUCY_CaseFolder_Transform_Text_t
  #define CaseFolder_Split LUCY_CaseFolder_Split
  #define CaseFolder_Split_t LUCY_CaseFolder_Split_t
  #define CaseFolder_Dump LUCY_CaseFolder_Dump
  #define CaseFolder_Dump_t LUCY_CaseFolder_Dump_t
  #define CaseFolder_Load LUCY_CaseFolder_Load
  #define CaseFolder_Load_t LUCY_CaseFolder_Load_t
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_ANALYSIS_CASEFOLDER */




