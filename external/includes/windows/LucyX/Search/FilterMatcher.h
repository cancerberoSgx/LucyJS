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


#ifndef H_LUCYX_SEARCH_FILTERMATCHER
#define H_LUCYX_SEARCH_FILTERMATCHER 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Lucy\Search\Matcher.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_FILTERMATCHER
extern uint32_t lucy_FilterMatcher_IVARS_OFFSET;
typedef struct lucy_FilterMatcherIVARS lucy_FilterMatcherIVARS;
static CFISH_INLINE lucy_FilterMatcherIVARS*
lucy_FilterMatcher_IVARS(lucy_FilterMatcher *self) {
   char *ptr = (char*)self + lucy_FilterMatcher_IVARS_OFFSET;
   return (lucy_FilterMatcherIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define FilterMatcherIVARS lucy_FilterMatcherIVARS
  #define FilterMatcher_IVARS lucy_FilterMatcher_IVARS
#endif

struct lucy_FilterMatcherIVARS {
    lucy_BitVector* bits;
    int32_t doc_max;
    int32_t doc_id;
};

#endif /* C_LUCY_FILTERMATCHER */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_FilterMatcher*
lucy_FilterMatcher_new(lucy_BitVector* bits, int32_t doc_max);

LUCY_VISIBLE lucy_FilterMatcher*
lucy_FilterMatcher_init(lucy_FilterMatcher* self, lucy_BitVector* bits, int32_t doc_max);

void
LUCY_FilterMatcher_Destroy_IMP(lucy_FilterMatcher* self);

int32_t
LUCY_FilterMatcher_Next_IMP(lucy_FilterMatcher* self);

int32_t
LUCY_FilterMatcher_Skip_To_IMP(lucy_FilterMatcher* self, int32_t target);

float
LUCY_FilterMatcher_Score_IMP(lucy_FilterMatcher* self);

int32_t
LUCY_FilterMatcher_Get_Doc_ID_IMP(lucy_FilterMatcher* self);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_FilterMatcher_To_Host_t)(lucy_FilterMatcher* self, void* vcache);

typedef cfish_Obj*
(*LUCY_FilterMatcher_Clone_t)(lucy_FilterMatcher* self);

typedef bool
(*LUCY_FilterMatcher_Equals_t)(lucy_FilterMatcher* self, cfish_Obj* other);

typedef int32_t
(*LUCY_FilterMatcher_Compare_To_t)(lucy_FilterMatcher* self, cfish_Obj* other);

typedef void
(*LUCY_FilterMatcher_Destroy_t)(lucy_FilterMatcher* self);

typedef cfish_String*
(*LUCY_FilterMatcher_To_String_t)(lucy_FilterMatcher* self);

typedef int32_t
(*LUCY_FilterMatcher_Next_t)(lucy_FilterMatcher* self);

typedef int32_t
(*LUCY_FilterMatcher_Advance_t)(lucy_FilterMatcher* self, int32_t target);

typedef int32_t
(*LUCY_FilterMatcher_Get_Doc_ID_t)(lucy_FilterMatcher* self);

typedef float
(*LUCY_FilterMatcher_Score_t)(lucy_FilterMatcher* self);

typedef void
(*LUCY_FilterMatcher_Collect_t)(lucy_FilterMatcher* self, lucy_Collector* collector, lucy_Matcher* deletions);

typedef int32_t
(*LUCY_FilterMatcher_Skip_To_t)(lucy_FilterMatcher* self, int32_t target);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_FilterMatcher_get_class(lucy_FilterMatcher *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_FilterMatcher_get_class_name(lucy_FilterMatcher *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_FilterMatcher_is_a(lucy_FilterMatcher *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_FilterMatcher_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_FilterMatcher_To_Host(lucy_FilterMatcher* self, void* vcache) {
    const LUCY_FilterMatcher_To_Host_t method = (LUCY_FilterMatcher_To_Host_t)cfish_obj_method(self, LUCY_FilterMatcher_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_FilterMatcher_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_FilterMatcher_Clone(lucy_FilterMatcher* self) {
    const LUCY_FilterMatcher_Clone_t method = (LUCY_FilterMatcher_Clone_t)cfish_obj_method(self, LUCY_FilterMatcher_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_FilterMatcher_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_FilterMatcher_Equals(lucy_FilterMatcher* self, cfish_Obj* other) {
    const LUCY_FilterMatcher_Equals_t method = (LUCY_FilterMatcher_Equals_t)cfish_obj_method(self, LUCY_FilterMatcher_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_FilterMatcher_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_FilterMatcher_Compare_To(lucy_FilterMatcher* self, cfish_Obj* other) {
    const LUCY_FilterMatcher_Compare_To_t method = (LUCY_FilterMatcher_Compare_To_t)cfish_obj_method(self, LUCY_FilterMatcher_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_FilterMatcher_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_FilterMatcher_Destroy(lucy_FilterMatcher* self) {
    const LUCY_FilterMatcher_Destroy_t method = (LUCY_FilterMatcher_Destroy_t)cfish_obj_method(self, LUCY_FilterMatcher_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_FilterMatcher_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_FilterMatcher_To_String(lucy_FilterMatcher* self) {
    const LUCY_FilterMatcher_To_String_t method = (LUCY_FilterMatcher_To_String_t)cfish_obj_method(self, LUCY_FilterMatcher_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_FilterMatcher_Next_OFFSET;
static CFISH_INLINE int32_t
LUCY_FilterMatcher_Next(lucy_FilterMatcher* self) {
    const LUCY_FilterMatcher_Next_t method = (LUCY_FilterMatcher_Next_t)cfish_obj_method(self, LUCY_FilterMatcher_Next_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_FilterMatcher_Advance_OFFSET;
static CFISH_INLINE int32_t
LUCY_FilterMatcher_Advance(lucy_FilterMatcher* self, int32_t target) {
    const LUCY_FilterMatcher_Advance_t method = (LUCY_FilterMatcher_Advance_t)cfish_obj_method(self, LUCY_FilterMatcher_Advance_OFFSET);
    return method(self, target);
}

extern LUCY_VISIBLE uint32_t LUCY_FilterMatcher_Get_Doc_ID_OFFSET;
static CFISH_INLINE int32_t
LUCY_FilterMatcher_Get_Doc_ID(lucy_FilterMatcher* self) {
    const LUCY_FilterMatcher_Get_Doc_ID_t method = (LUCY_FilterMatcher_Get_Doc_ID_t)cfish_obj_method(self, LUCY_FilterMatcher_Get_Doc_ID_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_FilterMatcher_Score_OFFSET;
static CFISH_INLINE float
LUCY_FilterMatcher_Score(lucy_FilterMatcher* self) {
    const LUCY_FilterMatcher_Score_t method = (LUCY_FilterMatcher_Score_t)cfish_obj_method(self, LUCY_FilterMatcher_Score_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_FilterMatcher_Collect_OFFSET;
static CFISH_INLINE void
LUCY_FilterMatcher_Collect(lucy_FilterMatcher* self, lucy_Collector* collector, lucy_Matcher* deletions) {
    const LUCY_FilterMatcher_Collect_t method = (LUCY_FilterMatcher_Collect_t)cfish_obj_method(self, LUCY_FilterMatcher_Collect_OFFSET);
    method(self, collector, deletions);
}

extern LUCY_VISIBLE uint32_t LUCY_FilterMatcher_Skip_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_FilterMatcher_Skip_To(lucy_FilterMatcher* self, int32_t target) {
    const LUCY_FilterMatcher_Skip_To_t method = (LUCY_FilterMatcher_Skip_To_t)cfish_obj_method(self, LUCY_FilterMatcher_Skip_To_OFFSET);
    return method(self, target);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#define Lucy_FilterMatcher_Skip_To_OVERRIDE NULL
#else
int32_t
Lucy_FilterMatcher_Skip_To_OVERRIDE(lucy_FilterMatcher* self, int32_t target);
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define FilterMatcher lucy_FilterMatcher
  #define FILTERMATCHER LUCY_FILTERMATCHER
  #define FilterMatcher_new lucy_FilterMatcher_new
  #define FilterMatcher_init lucy_FilterMatcher_init
  #define FilterMatcher_get_class lucy_FilterMatcher_get_class
  #define FilterMatcher_get_class_name lucy_FilterMatcher_get_class_name
  #define FilterMatcher_is_a lucy_FilterMatcher_is_a
  #define FilterMatcher_Destroy_IMP LUCY_FilterMatcher_Destroy_IMP
  #define FilterMatcher_Next_IMP LUCY_FilterMatcher_Next_IMP
  #define FilterMatcher_Skip_To_IMP LUCY_FilterMatcher_Skip_To_IMP
  #define FilterMatcher_Score_IMP LUCY_FilterMatcher_Score_IMP
  #define FilterMatcher_Get_Doc_ID_IMP LUCY_FilterMatcher_Get_Doc_ID_IMP
  #define FilterMatcher_To_Host LUCY_FilterMatcher_To_Host
  #define FilterMatcher_To_Host_t LUCY_FilterMatcher_To_Host_t
  #define FilterMatcher_Clone LUCY_FilterMatcher_Clone
  #define FilterMatcher_Clone_t LUCY_FilterMatcher_Clone_t
  #define FilterMatcher_Equals LUCY_FilterMatcher_Equals
  #define FilterMatcher_Equals_t LUCY_FilterMatcher_Equals_t
  #define FilterMatcher_Compare_To LUCY_FilterMatcher_Compare_To
  #define FilterMatcher_Compare_To_t LUCY_FilterMatcher_Compare_To_t
  #define FilterMatcher_Destroy LUCY_FilterMatcher_Destroy
  #define FilterMatcher_Destroy_t LUCY_FilterMatcher_Destroy_t
  #define FilterMatcher_To_String LUCY_FilterMatcher_To_String
  #define FilterMatcher_To_String_t LUCY_FilterMatcher_To_String_t
  #define FilterMatcher_Next LUCY_FilterMatcher_Next
  #define FilterMatcher_Next_t LUCY_FilterMatcher_Next_t
  #define FilterMatcher_Advance LUCY_FilterMatcher_Advance
  #define FilterMatcher_Advance_t LUCY_FilterMatcher_Advance_t
  #define FilterMatcher_Get_Doc_ID LUCY_FilterMatcher_Get_Doc_ID
  #define FilterMatcher_Get_Doc_ID_t LUCY_FilterMatcher_Get_Doc_ID_t
  #define FilterMatcher_Score LUCY_FilterMatcher_Score
  #define FilterMatcher_Score_t LUCY_FilterMatcher_Score_t
  #define FilterMatcher_Collect LUCY_FilterMatcher_Collect
  #define FilterMatcher_Collect_t LUCY_FilterMatcher_Collect_t
  #define FilterMatcher_Skip_To LUCY_FilterMatcher_Skip_To
  #define FilterMatcher_Skip_To_t LUCY_FilterMatcher_Skip_To_t
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCYX_SEARCH_FILTERMATCHER */



