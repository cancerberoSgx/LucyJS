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


#ifndef H_LUCY_HIGHLIGHT_HEATMAP
#define H_LUCY_HIGHLIGHT_HEATMAP 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Clownfish\Obj.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_HEATMAP
extern uint32_t lucy_HeatMap_IVARS_OFFSET;
typedef struct lucy_HeatMapIVARS lucy_HeatMapIVARS;
static CFISH_INLINE lucy_HeatMapIVARS*
lucy_HeatMap_IVARS(lucy_HeatMap *self) {
   char *ptr = (char*)self + lucy_HeatMap_IVARS_OFFSET;
   return (lucy_HeatMapIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define HeatMapIVARS lucy_HeatMapIVARS
  #define HeatMap_IVARS lucy_HeatMap_IVARS
#endif

struct lucy_HeatMapIVARS {
    cfish_Vector* spans;
    uint32_t window;
};

#endif /* C_LUCY_HEATMAP */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_HeatMap*
lucy_HeatMap_new(cfish_Vector* spans, uint32_t window);

LUCY_VISIBLE lucy_HeatMap*
lucy_HeatMap_init(lucy_HeatMap* self, cfish_Vector* spans, uint32_t window);

cfish_Vector*
LUCY_HeatMap_Flatten_Spans_IMP(lucy_HeatMap* self, cfish_Vector* spans);

float
LUCY_HeatMap_Calc_Proximity_Boost_IMP(lucy_HeatMap* self, lucy_Span* span1, lucy_Span* span2);

cfish_Vector*
LUCY_HeatMap_Generate_Proximity_Boosts_IMP(lucy_HeatMap* self, cfish_Vector* spans);

cfish_Vector*
LUCY_HeatMap_Get_Spans_IMP(lucy_HeatMap* self);

void
LUCY_HeatMap_Destroy_IMP(lucy_HeatMap* self);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_HeatMap_To_Host_t)(lucy_HeatMap* self, void* vcache);

typedef cfish_Obj*
(*LUCY_HeatMap_Clone_t)(lucy_HeatMap* self);

typedef bool
(*LUCY_HeatMap_Equals_t)(lucy_HeatMap* self, cfish_Obj* other);

typedef int32_t
(*LUCY_HeatMap_Compare_To_t)(lucy_HeatMap* self, cfish_Obj* other);

typedef void
(*LUCY_HeatMap_Destroy_t)(lucy_HeatMap* self);

typedef cfish_String*
(*LUCY_HeatMap_To_String_t)(lucy_HeatMap* self);

typedef cfish_Vector*
(*LUCY_HeatMap_Flatten_Spans_t)(lucy_HeatMap* self, cfish_Vector* spans);

typedef float
(*LUCY_HeatMap_Calc_Proximity_Boost_t)(lucy_HeatMap* self, lucy_Span* span1, lucy_Span* span2);

typedef cfish_Vector*
(*LUCY_HeatMap_Generate_Proximity_Boosts_t)(lucy_HeatMap* self, cfish_Vector* spans);

typedef cfish_Vector*
(*LUCY_HeatMap_Get_Spans_t)(lucy_HeatMap* self);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_HeatMap_get_class(lucy_HeatMap *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_HeatMap_get_class_name(lucy_HeatMap *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_HeatMap_is_a(lucy_HeatMap *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_HeatMap_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_HeatMap_To_Host(lucy_HeatMap* self, void* vcache) {
    const LUCY_HeatMap_To_Host_t method = (LUCY_HeatMap_To_Host_t)cfish_obj_method(self, LUCY_HeatMap_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_HeatMap_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_HeatMap_Clone(lucy_HeatMap* self) {
    const LUCY_HeatMap_Clone_t method = (LUCY_HeatMap_Clone_t)cfish_obj_method(self, LUCY_HeatMap_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_HeatMap_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_HeatMap_Equals(lucy_HeatMap* self, cfish_Obj* other) {
    const LUCY_HeatMap_Equals_t method = (LUCY_HeatMap_Equals_t)cfish_obj_method(self, LUCY_HeatMap_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_HeatMap_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_HeatMap_Compare_To(lucy_HeatMap* self, cfish_Obj* other) {
    const LUCY_HeatMap_Compare_To_t method = (LUCY_HeatMap_Compare_To_t)cfish_obj_method(self, LUCY_HeatMap_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_HeatMap_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_HeatMap_Destroy(lucy_HeatMap* self) {
    const LUCY_HeatMap_Destroy_t method = (LUCY_HeatMap_Destroy_t)cfish_obj_method(self, LUCY_HeatMap_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_HeatMap_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_HeatMap_To_String(lucy_HeatMap* self) {
    const LUCY_HeatMap_To_String_t method = (LUCY_HeatMap_To_String_t)cfish_obj_method(self, LUCY_HeatMap_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_HeatMap_Flatten_Spans_OFFSET;
static CFISH_INLINE cfish_Vector*
LUCY_HeatMap_Flatten_Spans(lucy_HeatMap* self, cfish_Vector* spans) {
    const LUCY_HeatMap_Flatten_Spans_t method = (LUCY_HeatMap_Flatten_Spans_t)cfish_obj_method(self, LUCY_HeatMap_Flatten_Spans_OFFSET);
    return method(self, spans);
}

extern LUCY_VISIBLE uint32_t LUCY_HeatMap_Calc_Proximity_Boost_OFFSET;
static CFISH_INLINE float
LUCY_HeatMap_Calc_Proximity_Boost(lucy_HeatMap* self, lucy_Span* span1, lucy_Span* span2) {
    const LUCY_HeatMap_Calc_Proximity_Boost_t method = (LUCY_HeatMap_Calc_Proximity_Boost_t)cfish_obj_method(self, LUCY_HeatMap_Calc_Proximity_Boost_OFFSET);
    return method(self, span1, span2);
}

extern LUCY_VISIBLE uint32_t LUCY_HeatMap_Generate_Proximity_Boosts_OFFSET;
static CFISH_INLINE cfish_Vector*
LUCY_HeatMap_Generate_Proximity_Boosts(lucy_HeatMap* self, cfish_Vector* spans) {
    const LUCY_HeatMap_Generate_Proximity_Boosts_t method = (LUCY_HeatMap_Generate_Proximity_Boosts_t)cfish_obj_method(self, LUCY_HeatMap_Generate_Proximity_Boosts_OFFSET);
    return method(self, spans);
}

extern LUCY_VISIBLE uint32_t LUCY_HeatMap_Get_Spans_OFFSET;
static CFISH_INLINE cfish_Vector*
LUCY_HeatMap_Get_Spans(lucy_HeatMap* self) {
    const LUCY_HeatMap_Get_Spans_t method = (LUCY_HeatMap_Get_Spans_t)cfish_obj_method(self, LUCY_HeatMap_Get_Spans_OFFSET);
    return method(self);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#define Lucy_HeatMap_Flatten_Spans_OVERRIDE NULL
#define Lucy_HeatMap_Calc_Proximity_Boost_OVERRIDE NULL
#define Lucy_HeatMap_Generate_Proximity_Boosts_OVERRIDE NULL
#define Lucy_HeatMap_Get_Spans_OVERRIDE NULL
#else
cfish_Vector*
Lucy_HeatMap_Flatten_Spans_OVERRIDE(lucy_HeatMap* self, cfish_Vector* spans);
float
Lucy_HeatMap_Calc_Proximity_Boost_OVERRIDE(lucy_HeatMap* self, lucy_Span* span1, lucy_Span* span2);
cfish_Vector*
Lucy_HeatMap_Generate_Proximity_Boosts_OVERRIDE(lucy_HeatMap* self, cfish_Vector* spans);
cfish_Vector*
Lucy_HeatMap_Get_Spans_OVERRIDE(lucy_HeatMap* self);
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define HeatMap lucy_HeatMap
  #define HEATMAP LUCY_HEATMAP
  #define HeatMap_new lucy_HeatMap_new
  #define HeatMap_init lucy_HeatMap_init
  #define HeatMap_get_class lucy_HeatMap_get_class
  #define HeatMap_get_class_name lucy_HeatMap_get_class_name
  #define HeatMap_is_a lucy_HeatMap_is_a
  #define HeatMap_Flatten_Spans_IMP LUCY_HeatMap_Flatten_Spans_IMP
  #define HeatMap_Calc_Proximity_Boost_IMP LUCY_HeatMap_Calc_Proximity_Boost_IMP
  #define HeatMap_Generate_Proximity_Boosts_IMP LUCY_HeatMap_Generate_Proximity_Boosts_IMP
  #define HeatMap_Get_Spans_IMP LUCY_HeatMap_Get_Spans_IMP
  #define HeatMap_Destroy_IMP LUCY_HeatMap_Destroy_IMP
  #define HeatMap_To_Host LUCY_HeatMap_To_Host
  #define HeatMap_To_Host_t LUCY_HeatMap_To_Host_t
  #define HeatMap_Clone LUCY_HeatMap_Clone
  #define HeatMap_Clone_t LUCY_HeatMap_Clone_t
  #define HeatMap_Equals LUCY_HeatMap_Equals
  #define HeatMap_Equals_t LUCY_HeatMap_Equals_t
  #define HeatMap_Compare_To LUCY_HeatMap_Compare_To
  #define HeatMap_Compare_To_t LUCY_HeatMap_Compare_To_t
  #define HeatMap_Destroy LUCY_HeatMap_Destroy
  #define HeatMap_Destroy_t LUCY_HeatMap_Destroy_t
  #define HeatMap_To_String LUCY_HeatMap_To_String
  #define HeatMap_To_String_t LUCY_HeatMap_To_String_t
  #define HeatMap_Flatten_Spans LUCY_HeatMap_Flatten_Spans
  #define HeatMap_Flatten_Spans_t LUCY_HeatMap_Flatten_Spans_t
  #define HeatMap_Calc_Proximity_Boost LUCY_HeatMap_Calc_Proximity_Boost
  #define HeatMap_Calc_Proximity_Boost_t LUCY_HeatMap_Calc_Proximity_Boost_t
  #define HeatMap_Generate_Proximity_Boosts LUCY_HeatMap_Generate_Proximity_Boosts
  #define HeatMap_Generate_Proximity_Boosts_t LUCY_HeatMap_Generate_Proximity_Boosts_t
  #define HeatMap_Get_Spans LUCY_HeatMap_Get_Spans
  #define HeatMap_Get_Spans_t LUCY_HeatMap_Get_Spans_t
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_HIGHLIGHT_HEATMAP */



