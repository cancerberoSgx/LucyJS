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


#ifndef H_LUCY_SEARCH_RANGEMATCHER
#define H_LUCY_SEARCH_RANGEMATCHER 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Lucy/Search/Matcher.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_RANGEMATCHER
extern uint32_t lucy_RangeMatcher_IVARS_OFFSET;
typedef struct lucy_RangeMatcherIVARS lucy_RangeMatcherIVARS;
static CFISH_INLINE lucy_RangeMatcherIVARS*
lucy_RangeMatcher_IVARS(lucy_RangeMatcher *self) {
   char *ptr = (char*)self + lucy_RangeMatcher_IVARS_OFFSET;
   return (lucy_RangeMatcherIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define RangeMatcherIVARS lucy_RangeMatcherIVARS
  #define RangeMatcher_IVARS lucy_RangeMatcher_IVARS
#endif

struct lucy_RangeMatcherIVARS {
    int32_t doc_id;
    int32_t doc_max;
    int32_t lower_bound;
    int32_t upper_bound;
    lucy_SortCache* sort_cache;
};

#endif /* C_LUCY_RANGEMATCHER */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_RangeMatcher*
lucy_RangeMatcher_new(int32_t lower_bound, int32_t upper_bound, lucy_SortCache* sort_cache, int32_t doc_max);

LUCY_VISIBLE lucy_RangeMatcher*
lucy_RangeMatcher_init(lucy_RangeMatcher* self, int32_t lower_bound, int32_t upper_bound, lucy_SortCache* sort_cache, int32_t doc_max);

int32_t
LUCY_RangeMatcher_Next_IMP(lucy_RangeMatcher* self);

int32_t
LUCY_RangeMatcher_Advance_IMP(lucy_RangeMatcher* self, int32_t target);

float
LUCY_RangeMatcher_Score_IMP(lucy_RangeMatcher* self);

int32_t
LUCY_RangeMatcher_Get_Doc_ID_IMP(lucy_RangeMatcher* self);

void
LUCY_RangeMatcher_Destroy_IMP(lucy_RangeMatcher* self);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_RangeMatcher_To_Host_t)(lucy_RangeMatcher* self, void* vcache);

typedef cfish_Obj*
(*LUCY_RangeMatcher_Clone_t)(lucy_RangeMatcher* self);

typedef bool
(*LUCY_RangeMatcher_Equals_t)(lucy_RangeMatcher* self, cfish_Obj* other);

typedef int32_t
(*LUCY_RangeMatcher_Compare_To_t)(lucy_RangeMatcher* self, cfish_Obj* other);

typedef void
(*LUCY_RangeMatcher_Destroy_t)(lucy_RangeMatcher* self);

typedef cfish_String*
(*LUCY_RangeMatcher_To_String_t)(lucy_RangeMatcher* self);

typedef int32_t
(*LUCY_RangeMatcher_Next_t)(lucy_RangeMatcher* self);

typedef int32_t
(*LUCY_RangeMatcher_Advance_t)(lucy_RangeMatcher* self, int32_t target);

typedef int32_t
(*LUCY_RangeMatcher_Get_Doc_ID_t)(lucy_RangeMatcher* self);

typedef float
(*LUCY_RangeMatcher_Score_t)(lucy_RangeMatcher* self);

typedef void
(*LUCY_RangeMatcher_Collect_t)(lucy_RangeMatcher* self, lucy_Collector* collector, lucy_Matcher* deletions);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_RangeMatcher_get_class(lucy_RangeMatcher *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_RangeMatcher_get_class_name(lucy_RangeMatcher *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_RangeMatcher_is_a(lucy_RangeMatcher *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_RangeMatcher_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_RangeMatcher_To_Host(lucy_RangeMatcher* self, void* vcache) {
    const LUCY_RangeMatcher_To_Host_t method = (LUCY_RangeMatcher_To_Host_t)cfish_obj_method(self, LUCY_RangeMatcher_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeMatcher_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_RangeMatcher_Clone(lucy_RangeMatcher* self) {
    const LUCY_RangeMatcher_Clone_t method = (LUCY_RangeMatcher_Clone_t)cfish_obj_method(self, LUCY_RangeMatcher_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeMatcher_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_RangeMatcher_Equals(lucy_RangeMatcher* self, cfish_Obj* other) {
    const LUCY_RangeMatcher_Equals_t method = (LUCY_RangeMatcher_Equals_t)cfish_obj_method(self, LUCY_RangeMatcher_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeMatcher_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_RangeMatcher_Compare_To(lucy_RangeMatcher* self, cfish_Obj* other) {
    const LUCY_RangeMatcher_Compare_To_t method = (LUCY_RangeMatcher_Compare_To_t)cfish_obj_method(self, LUCY_RangeMatcher_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeMatcher_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_RangeMatcher_Destroy(lucy_RangeMatcher* self) {
    const LUCY_RangeMatcher_Destroy_t method = (LUCY_RangeMatcher_Destroy_t)cfish_obj_method(self, LUCY_RangeMatcher_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeMatcher_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_RangeMatcher_To_String(lucy_RangeMatcher* self) {
    const LUCY_RangeMatcher_To_String_t method = (LUCY_RangeMatcher_To_String_t)cfish_obj_method(self, LUCY_RangeMatcher_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeMatcher_Next_OFFSET;
static CFISH_INLINE int32_t
LUCY_RangeMatcher_Next(lucy_RangeMatcher* self) {
    const LUCY_RangeMatcher_Next_t method = (LUCY_RangeMatcher_Next_t)cfish_obj_method(self, LUCY_RangeMatcher_Next_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeMatcher_Advance_OFFSET;
static CFISH_INLINE int32_t
LUCY_RangeMatcher_Advance(lucy_RangeMatcher* self, int32_t target) {
    const LUCY_RangeMatcher_Advance_t method = (LUCY_RangeMatcher_Advance_t)cfish_obj_method(self, LUCY_RangeMatcher_Advance_OFFSET);
    return method(self, target);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeMatcher_Get_Doc_ID_OFFSET;
static CFISH_INLINE int32_t
LUCY_RangeMatcher_Get_Doc_ID(lucy_RangeMatcher* self) {
    const LUCY_RangeMatcher_Get_Doc_ID_t method = (LUCY_RangeMatcher_Get_Doc_ID_t)cfish_obj_method(self, LUCY_RangeMatcher_Get_Doc_ID_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeMatcher_Score_OFFSET;
static CFISH_INLINE float
LUCY_RangeMatcher_Score(lucy_RangeMatcher* self) {
    const LUCY_RangeMatcher_Score_t method = (LUCY_RangeMatcher_Score_t)cfish_obj_method(self, LUCY_RangeMatcher_Score_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeMatcher_Collect_OFFSET;
static CFISH_INLINE void
LUCY_RangeMatcher_Collect(lucy_RangeMatcher* self, lucy_Collector* collector, lucy_Matcher* deletions) {
    const LUCY_RangeMatcher_Collect_t method = (LUCY_RangeMatcher_Collect_t)cfish_obj_method(self, LUCY_RangeMatcher_Collect_OFFSET);
    method(self, collector, deletions);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#else
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define RangeMatcher lucy_RangeMatcher
  #define RANGEMATCHER LUCY_RANGEMATCHER
  #define RangeMatcher_new lucy_RangeMatcher_new
  #define RangeMatcher_init lucy_RangeMatcher_init
  #define RangeMatcher_get_class lucy_RangeMatcher_get_class
  #define RangeMatcher_get_class_name lucy_RangeMatcher_get_class_name
  #define RangeMatcher_is_a lucy_RangeMatcher_is_a
  #define RangeMatcher_Next_IMP LUCY_RangeMatcher_Next_IMP
  #define RangeMatcher_Advance_IMP LUCY_RangeMatcher_Advance_IMP
  #define RangeMatcher_Score_IMP LUCY_RangeMatcher_Score_IMP
  #define RangeMatcher_Get_Doc_ID_IMP LUCY_RangeMatcher_Get_Doc_ID_IMP
  #define RangeMatcher_Destroy_IMP LUCY_RangeMatcher_Destroy_IMP
  #define RangeMatcher_To_Host LUCY_RangeMatcher_To_Host
  #define RangeMatcher_To_Host_t LUCY_RangeMatcher_To_Host_t
  #define RangeMatcher_Clone LUCY_RangeMatcher_Clone
  #define RangeMatcher_Clone_t LUCY_RangeMatcher_Clone_t
  #define RangeMatcher_Equals LUCY_RangeMatcher_Equals
  #define RangeMatcher_Equals_t LUCY_RangeMatcher_Equals_t
  #define RangeMatcher_Compare_To LUCY_RangeMatcher_Compare_To
  #define RangeMatcher_Compare_To_t LUCY_RangeMatcher_Compare_To_t
  #define RangeMatcher_Destroy LUCY_RangeMatcher_Destroy
  #define RangeMatcher_Destroy_t LUCY_RangeMatcher_Destroy_t
  #define RangeMatcher_To_String LUCY_RangeMatcher_To_String
  #define RangeMatcher_To_String_t LUCY_RangeMatcher_To_String_t
  #define RangeMatcher_Next LUCY_RangeMatcher_Next
  #define RangeMatcher_Next_t LUCY_RangeMatcher_Next_t
  #define RangeMatcher_Advance LUCY_RangeMatcher_Advance
  #define RangeMatcher_Advance_t LUCY_RangeMatcher_Advance_t
  #define RangeMatcher_Get_Doc_ID LUCY_RangeMatcher_Get_Doc_ID
  #define RangeMatcher_Get_Doc_ID_t LUCY_RangeMatcher_Get_Doc_ID_t
  #define RangeMatcher_Score LUCY_RangeMatcher_Score
  #define RangeMatcher_Score_t LUCY_RangeMatcher_Score_t
  #define RangeMatcher_Collect LUCY_RangeMatcher_Collect
  #define RangeMatcher_Collect_t LUCY_RangeMatcher_Collect_t
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_SEARCH_RANGEMATCHER */




