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


#ifndef H_LUCY_ANALYSIS_ANALYZER
#define H_LUCY_ANALYSIS_ANALYZER 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Clownfish/Obj.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_ANALYZER
extern uint32_t lucy_Analyzer_IVARS_OFFSET;
typedef struct lucy_AnalyzerIVARS lucy_AnalyzerIVARS;
static CFISH_INLINE lucy_AnalyzerIVARS*
lucy_Analyzer_IVARS(lucy_Analyzer *self) {
   char *ptr = (char*)self + lucy_Analyzer_IVARS_OFFSET;
   return (lucy_AnalyzerIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define AnalyzerIVARS lucy_AnalyzerIVARS
  #define Analyzer_IVARS lucy_Analyzer_IVARS
#endif


#endif /* C_LUCY_ANALYZER */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_Analyzer*
lucy_Analyzer_init(lucy_Analyzer* self);

lucy_Inversion*
LUCY_Analyzer_Transform_IMP(lucy_Analyzer* self, lucy_Inversion* inversion);

lucy_Inversion*
LUCY_Analyzer_Transform_Text_IMP(lucy_Analyzer* self, cfish_String* text);

cfish_Vector*
LUCY_Analyzer_Split_IMP(lucy_Analyzer* self, cfish_String* text);

cfish_Obj*
LUCY_Analyzer_Dump_IMP(lucy_Analyzer* self);

cfish_Obj*
LUCY_Analyzer_Load_IMP(lucy_Analyzer* self, cfish_Obj* dump);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_Analyzer_To_Host_t)(lucy_Analyzer* self, void* vcache);

typedef cfish_Obj*
(*LUCY_Analyzer_Clone_t)(lucy_Analyzer* self);

typedef bool
(*LUCY_Analyzer_Equals_t)(lucy_Analyzer* self, cfish_Obj* other);

typedef int32_t
(*LUCY_Analyzer_Compare_To_t)(lucy_Analyzer* self, cfish_Obj* other);

typedef void
(*LUCY_Analyzer_Destroy_t)(lucy_Analyzer* self);

typedef cfish_String*
(*LUCY_Analyzer_To_String_t)(lucy_Analyzer* self);

typedef lucy_Inversion*
(*LUCY_Analyzer_Transform_t)(lucy_Analyzer* self, lucy_Inversion* inversion);

typedef lucy_Inversion*
(*LUCY_Analyzer_Transform_Text_t)(lucy_Analyzer* self, cfish_String* text);

typedef cfish_Vector*
(*LUCY_Analyzer_Split_t)(lucy_Analyzer* self, cfish_String* text);

typedef cfish_Obj*
(*LUCY_Analyzer_Dump_t)(lucy_Analyzer* self);

typedef cfish_Obj*
(*LUCY_Analyzer_Load_t)(lucy_Analyzer* self, cfish_Obj* dump);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_Analyzer_get_class(lucy_Analyzer *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_Analyzer_get_class_name(lucy_Analyzer *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_Analyzer_is_a(lucy_Analyzer *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_Analyzer_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_Analyzer_To_Host(lucy_Analyzer* self, void* vcache) {
    const LUCY_Analyzer_To_Host_t method = (LUCY_Analyzer_To_Host_t)cfish_obj_method(self, LUCY_Analyzer_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_Analyzer_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_Analyzer_Clone(lucy_Analyzer* self) {
    const LUCY_Analyzer_Clone_t method = (LUCY_Analyzer_Clone_t)cfish_obj_method(self, LUCY_Analyzer_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_Analyzer_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_Analyzer_Equals(lucy_Analyzer* self, cfish_Obj* other) {
    const LUCY_Analyzer_Equals_t method = (LUCY_Analyzer_Equals_t)cfish_obj_method(self, LUCY_Analyzer_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_Analyzer_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_Analyzer_Compare_To(lucy_Analyzer* self, cfish_Obj* other) {
    const LUCY_Analyzer_Compare_To_t method = (LUCY_Analyzer_Compare_To_t)cfish_obj_method(self, LUCY_Analyzer_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_Analyzer_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_Analyzer_Destroy(lucy_Analyzer* self) {
    const LUCY_Analyzer_Destroy_t method = (LUCY_Analyzer_Destroy_t)cfish_obj_method(self, LUCY_Analyzer_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_Analyzer_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_Analyzer_To_String(lucy_Analyzer* self) {
    const LUCY_Analyzer_To_String_t method = (LUCY_Analyzer_To_String_t)cfish_obj_method(self, LUCY_Analyzer_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_Analyzer_Transform_OFFSET;
static CFISH_INLINE lucy_Inversion*
LUCY_Analyzer_Transform(lucy_Analyzer* self, lucy_Inversion* inversion) {
    const LUCY_Analyzer_Transform_t method = (LUCY_Analyzer_Transform_t)cfish_obj_method(self, LUCY_Analyzer_Transform_OFFSET);
    return method(self, inversion);
}

extern LUCY_VISIBLE uint32_t LUCY_Analyzer_Transform_Text_OFFSET;
static CFISH_INLINE lucy_Inversion*
LUCY_Analyzer_Transform_Text(lucy_Analyzer* self, cfish_String* text) {
    const LUCY_Analyzer_Transform_Text_t method = (LUCY_Analyzer_Transform_Text_t)cfish_obj_method(self, LUCY_Analyzer_Transform_Text_OFFSET);
    return method(self, text);
}

extern LUCY_VISIBLE uint32_t LUCY_Analyzer_Split_OFFSET;
static CFISH_INLINE cfish_Vector*
LUCY_Analyzer_Split(lucy_Analyzer* self, cfish_String* text) {
    const LUCY_Analyzer_Split_t method = (LUCY_Analyzer_Split_t)cfish_obj_method(self, LUCY_Analyzer_Split_OFFSET);
    return method(self, text);
}

extern LUCY_VISIBLE uint32_t LUCY_Analyzer_Dump_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_Analyzer_Dump(lucy_Analyzer* self) {
    const LUCY_Analyzer_Dump_t method = (LUCY_Analyzer_Dump_t)cfish_obj_method(self, LUCY_Analyzer_Dump_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_Analyzer_Load_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_Analyzer_Load(lucy_Analyzer* self, cfish_Obj* dump) {
    const LUCY_Analyzer_Load_t method = (LUCY_Analyzer_Load_t)cfish_obj_method(self, LUCY_Analyzer_Load_OFFSET);
    return method(self, dump);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#define Lucy_Analyzer_Transform_OVERRIDE NULL
#define Lucy_Analyzer_Transform_Text_OVERRIDE NULL
#define Lucy_Analyzer_Split_OVERRIDE NULL
#define Lucy_Analyzer_Dump_OVERRIDE NULL
#define Lucy_Analyzer_Load_OVERRIDE NULL
#else
lucy_Inversion*
Lucy_Analyzer_Transform_OVERRIDE(lucy_Analyzer* self, lucy_Inversion* inversion);
lucy_Inversion*
Lucy_Analyzer_Transform_Text_OVERRIDE(lucy_Analyzer* self, cfish_String* text);
cfish_Vector*
Lucy_Analyzer_Split_OVERRIDE(lucy_Analyzer* self, cfish_String* text);
cfish_Obj*
Lucy_Analyzer_Dump_OVERRIDE(lucy_Analyzer* self);
cfish_Obj*
Lucy_Analyzer_Load_OVERRIDE(lucy_Analyzer* self, cfish_Obj* dump);
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define Analyzer lucy_Analyzer
  #define ANALYZER LUCY_ANALYZER
  #define Analyzer_init lucy_Analyzer_init
  #define Analyzer_get_class lucy_Analyzer_get_class
  #define Analyzer_get_class_name lucy_Analyzer_get_class_name
  #define Analyzer_is_a lucy_Analyzer_is_a
  #define Analyzer_Transform_IMP LUCY_Analyzer_Transform_IMP
  #define Analyzer_Transform_Text_IMP LUCY_Analyzer_Transform_Text_IMP
  #define Analyzer_Split_IMP LUCY_Analyzer_Split_IMP
  #define Analyzer_Dump_IMP LUCY_Analyzer_Dump_IMP
  #define Analyzer_Load_IMP LUCY_Analyzer_Load_IMP
  #define Analyzer_To_Host LUCY_Analyzer_To_Host
  #define Analyzer_To_Host_t LUCY_Analyzer_To_Host_t
  #define Analyzer_Clone LUCY_Analyzer_Clone
  #define Analyzer_Clone_t LUCY_Analyzer_Clone_t
  #define Analyzer_Equals LUCY_Analyzer_Equals
  #define Analyzer_Equals_t LUCY_Analyzer_Equals_t
  #define Analyzer_Compare_To LUCY_Analyzer_Compare_To
  #define Analyzer_Compare_To_t LUCY_Analyzer_Compare_To_t
  #define Analyzer_Destroy LUCY_Analyzer_Destroy
  #define Analyzer_Destroy_t LUCY_Analyzer_Destroy_t
  #define Analyzer_To_String LUCY_Analyzer_To_String
  #define Analyzer_To_String_t LUCY_Analyzer_To_String_t
  #define Analyzer_Transform LUCY_Analyzer_Transform
  #define Analyzer_Transform_t LUCY_Analyzer_Transform_t
  #define Analyzer_Transform_Text LUCY_Analyzer_Transform_Text
  #define Analyzer_Transform_Text_t LUCY_Analyzer_Transform_Text_t
  #define Analyzer_Split LUCY_Analyzer_Split
  #define Analyzer_Split_t LUCY_Analyzer_Split_t
  #define Analyzer_Dump LUCY_Analyzer_Dump
  #define Analyzer_Dump_t LUCY_Analyzer_Dump_t
  #define Analyzer_Load LUCY_Analyzer_Load
  #define Analyzer_Load_t LUCY_Analyzer_Load_t
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_ANALYSIS_ANALYZER */




