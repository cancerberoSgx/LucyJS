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


#ifndef H_LUCY_ANALYSIS_SNOWBALLSTOPFILTER
#define H_LUCY_ANALYSIS_SNOWBALLSTOPFILTER 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Lucy/Analysis/Analyzer.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_SNOWBALLSTOPFILTER
extern uint32_t lucy_SnowStop_IVARS_OFFSET;
typedef struct lucy_SnowballStopFilterIVARS lucy_SnowballStopFilterIVARS;
static CFISH_INLINE lucy_SnowballStopFilterIVARS*
lucy_SnowStop_IVARS(lucy_SnowballStopFilter *self) {
   char *ptr = (char*)self + lucy_SnowStop_IVARS_OFFSET;
   return (lucy_SnowballStopFilterIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define SnowballStopFilterIVARS lucy_SnowballStopFilterIVARS
  #define SnowStop_IVARS lucy_SnowStop_IVARS
#endif

struct lucy_SnowballStopFilterIVARS {
    cfish_Hash* stoplist;
};

#endif /* C_LUCY_SNOWBALLSTOPFILTER */

/* Declare this class's inert variables.
 */

extern LUCY_VISIBLE const uint8_t** lucy_SnowStop_snow_da;
extern LUCY_VISIBLE const uint8_t** lucy_SnowStop_snow_de;
extern LUCY_VISIBLE const uint8_t** lucy_SnowStop_snow_en;
extern LUCY_VISIBLE const uint8_t** lucy_SnowStop_snow_es;
extern LUCY_VISIBLE const uint8_t** lucy_SnowStop_snow_fi;
extern LUCY_VISIBLE const uint8_t** lucy_SnowStop_snow_fr;
extern LUCY_VISIBLE const uint8_t** lucy_SnowStop_snow_hu;
extern LUCY_VISIBLE const uint8_t** lucy_SnowStop_snow_it;
extern LUCY_VISIBLE const uint8_t** lucy_SnowStop_snow_nl;
extern LUCY_VISIBLE const uint8_t** lucy_SnowStop_snow_no;
extern LUCY_VISIBLE const uint8_t** lucy_SnowStop_snow_pt;
extern LUCY_VISIBLE const uint8_t** lucy_SnowStop_snow_ru;
extern LUCY_VISIBLE const uint8_t** lucy_SnowStop_snow_sv;


/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_SnowballStopFilter*
lucy_SnowStop_new(cfish_String* language, cfish_Hash* stoplist);

LUCY_VISIBLE lucy_SnowballStopFilter*
lucy_SnowStop_init(lucy_SnowballStopFilter* self, cfish_String* language, cfish_Hash* stoplist);

LUCY_VISIBLE cfish_Hash*
lucy_SnowStop_gen_stoplist(cfish_String* language);

lucy_Inversion*
LUCY_SnowStop_Transform_IMP(lucy_SnowballStopFilter* self, lucy_Inversion* inversion);

bool
LUCY_SnowStop_Equals_IMP(lucy_SnowballStopFilter* self, cfish_Obj* other);

cfish_Obj*
LUCY_SnowStop_Dump_IMP(lucy_SnowballStopFilter* self);

cfish_Obj*
LUCY_SnowStop_Load_IMP(lucy_SnowballStopFilter* self, cfish_Obj* dump);

void
LUCY_SnowStop_Destroy_IMP(lucy_SnowballStopFilter* self);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_SnowStop_To_Host_t)(lucy_SnowballStopFilter* self, void* vcache);

typedef cfish_Obj*
(*LUCY_SnowStop_Clone_t)(lucy_SnowballStopFilter* self);

typedef bool
(*LUCY_SnowStop_Equals_t)(lucy_SnowballStopFilter* self, cfish_Obj* other);

typedef int32_t
(*LUCY_SnowStop_Compare_To_t)(lucy_SnowballStopFilter* self, cfish_Obj* other);

typedef void
(*LUCY_SnowStop_Destroy_t)(lucy_SnowballStopFilter* self);

typedef cfish_String*
(*LUCY_SnowStop_To_String_t)(lucy_SnowballStopFilter* self);

typedef lucy_Inversion*
(*LUCY_SnowStop_Transform_t)(lucy_SnowballStopFilter* self, lucy_Inversion* inversion);

typedef lucy_Inversion*
(*LUCY_SnowStop_Transform_Text_t)(lucy_SnowballStopFilter* self, cfish_String* text);

typedef cfish_Vector*
(*LUCY_SnowStop_Split_t)(lucy_SnowballStopFilter* self, cfish_String* text);

typedef cfish_Obj*
(*LUCY_SnowStop_Dump_t)(lucy_SnowballStopFilter* self);

typedef cfish_Obj*
(*LUCY_SnowStop_Load_t)(lucy_SnowballStopFilter* self, cfish_Obj* dump);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_SnowStop_get_class(lucy_SnowballStopFilter *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_SnowStop_get_class_name(lucy_SnowballStopFilter *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_SnowStop_is_a(lucy_SnowballStopFilter *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_SnowStop_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_SnowStop_To_Host(lucy_SnowballStopFilter* self, void* vcache) {
    const LUCY_SnowStop_To_Host_t method = (LUCY_SnowStop_To_Host_t)cfish_obj_method(self, LUCY_SnowStop_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_SnowStop_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_SnowStop_Clone(lucy_SnowballStopFilter* self) {
    const LUCY_SnowStop_Clone_t method = (LUCY_SnowStop_Clone_t)cfish_obj_method(self, LUCY_SnowStop_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SnowStop_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_SnowStop_Equals(lucy_SnowballStopFilter* self, cfish_Obj* other) {
    const LUCY_SnowStop_Equals_t method = (LUCY_SnowStop_Equals_t)cfish_obj_method(self, LUCY_SnowStop_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_SnowStop_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_SnowStop_Compare_To(lucy_SnowballStopFilter* self, cfish_Obj* other) {
    const LUCY_SnowStop_Compare_To_t method = (LUCY_SnowStop_Compare_To_t)cfish_obj_method(self, LUCY_SnowStop_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_SnowStop_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_SnowStop_Destroy(lucy_SnowballStopFilter* self) {
    const LUCY_SnowStop_Destroy_t method = (LUCY_SnowStop_Destroy_t)cfish_obj_method(self, LUCY_SnowStop_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SnowStop_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_SnowStop_To_String(lucy_SnowballStopFilter* self) {
    const LUCY_SnowStop_To_String_t method = (LUCY_SnowStop_To_String_t)cfish_obj_method(self, LUCY_SnowStop_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SnowStop_Transform_OFFSET;
static CFISH_INLINE lucy_Inversion*
LUCY_SnowStop_Transform(lucy_SnowballStopFilter* self, lucy_Inversion* inversion) {
    const LUCY_SnowStop_Transform_t method = (LUCY_SnowStop_Transform_t)cfish_obj_method(self, LUCY_SnowStop_Transform_OFFSET);
    return method(self, inversion);
}

extern LUCY_VISIBLE uint32_t LUCY_SnowStop_Transform_Text_OFFSET;
static CFISH_INLINE lucy_Inversion*
LUCY_SnowStop_Transform_Text(lucy_SnowballStopFilter* self, cfish_String* text) {
    const LUCY_SnowStop_Transform_Text_t method = (LUCY_SnowStop_Transform_Text_t)cfish_obj_method(self, LUCY_SnowStop_Transform_Text_OFFSET);
    return method(self, text);
}

extern LUCY_VISIBLE uint32_t LUCY_SnowStop_Split_OFFSET;
static CFISH_INLINE cfish_Vector*
LUCY_SnowStop_Split(lucy_SnowballStopFilter* self, cfish_String* text) {
    const LUCY_SnowStop_Split_t method = (LUCY_SnowStop_Split_t)cfish_obj_method(self, LUCY_SnowStop_Split_OFFSET);
    return method(self, text);
}

extern LUCY_VISIBLE uint32_t LUCY_SnowStop_Dump_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_SnowStop_Dump(lucy_SnowballStopFilter* self) {
    const LUCY_SnowStop_Dump_t method = (LUCY_SnowStop_Dump_t)cfish_obj_method(self, LUCY_SnowStop_Dump_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SnowStop_Load_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_SnowStop_Load(lucy_SnowballStopFilter* self, cfish_Obj* dump) {
    const LUCY_SnowStop_Load_t method = (LUCY_SnowStop_Load_t)cfish_obj_method(self, LUCY_SnowStop_Load_OFFSET);
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
  #define SnowballStopFilter lucy_SnowballStopFilter
  #define SNOWBALLSTOPFILTER LUCY_SNOWBALLSTOPFILTER
  #define SnowStop_new lucy_SnowStop_new
  #define SnowStop_init lucy_SnowStop_init
  #define SnowStop_gen_stoplist lucy_SnowStop_gen_stoplist
  #define SnowStop_snow_da lucy_SnowStop_snow_da
  #define SnowStop_snow_de lucy_SnowStop_snow_de
  #define SnowStop_snow_en lucy_SnowStop_snow_en
  #define SnowStop_snow_es lucy_SnowStop_snow_es
  #define SnowStop_snow_fi lucy_SnowStop_snow_fi
  #define SnowStop_snow_fr lucy_SnowStop_snow_fr
  #define SnowStop_snow_hu lucy_SnowStop_snow_hu
  #define SnowStop_snow_it lucy_SnowStop_snow_it
  #define SnowStop_snow_nl lucy_SnowStop_snow_nl
  #define SnowStop_snow_no lucy_SnowStop_snow_no
  #define SnowStop_snow_pt lucy_SnowStop_snow_pt
  #define SnowStop_snow_ru lucy_SnowStop_snow_ru
  #define SnowStop_snow_sv lucy_SnowStop_snow_sv
  #define SnowStop_get_class lucy_SnowStop_get_class
  #define SnowStop_get_class_name lucy_SnowStop_get_class_name
  #define SnowStop_is_a lucy_SnowStop_is_a
  #define SnowStop_Transform_IMP LUCY_SnowStop_Transform_IMP
  #define SnowStop_Equals_IMP LUCY_SnowStop_Equals_IMP
  #define SnowStop_Dump_IMP LUCY_SnowStop_Dump_IMP
  #define SnowStop_Load_IMP LUCY_SnowStop_Load_IMP
  #define SnowStop_Destroy_IMP LUCY_SnowStop_Destroy_IMP
  #define SnowStop_To_Host LUCY_SnowStop_To_Host
  #define SnowStop_To_Host_t LUCY_SnowStop_To_Host_t
  #define SnowStop_Clone LUCY_SnowStop_Clone
  #define SnowStop_Clone_t LUCY_SnowStop_Clone_t
  #define SnowStop_Equals LUCY_SnowStop_Equals
  #define SnowStop_Equals_t LUCY_SnowStop_Equals_t
  #define SnowStop_Compare_To LUCY_SnowStop_Compare_To
  #define SnowStop_Compare_To_t LUCY_SnowStop_Compare_To_t
  #define SnowStop_Destroy LUCY_SnowStop_Destroy
  #define SnowStop_Destroy_t LUCY_SnowStop_Destroy_t
  #define SnowStop_To_String LUCY_SnowStop_To_String
  #define SnowStop_To_String_t LUCY_SnowStop_To_String_t
  #define SnowStop_Transform LUCY_SnowStop_Transform
  #define SnowStop_Transform_t LUCY_SnowStop_Transform_t
  #define SnowStop_Transform_Text LUCY_SnowStop_Transform_Text
  #define SnowStop_Transform_Text_t LUCY_SnowStop_Transform_Text_t
  #define SnowStop_Split LUCY_SnowStop_Split
  #define SnowStop_Split_t LUCY_SnowStop_Split_t
  #define SnowStop_Dump LUCY_SnowStop_Dump
  #define SnowStop_Dump_t LUCY_SnowStop_Dump_t
  #define SnowStop_Load LUCY_SnowStop_Load
  #define SnowStop_Load_t LUCY_SnowStop_Load_t
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_ANALYSIS_SNOWBALLSTOPFILTER */




