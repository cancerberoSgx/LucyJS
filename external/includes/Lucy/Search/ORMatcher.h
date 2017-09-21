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


#ifndef H_LUCY_SEARCH_ORMATCHER
#define H_LUCY_SEARCH_ORMATCHER 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

#include "Lucy/Search/Matcher.h"

/* A wrapper for a Matcher which caches the result of [](cfish:.Matcher_Get_Doc_ID).
 */
typedef struct lucy_HeapedMatcherDoc {
    lucy_Matcher *matcher;
    int32_t   doc;
} lucy_HeapedMatcherDoc;

#ifdef LUCY_USE_SHORT_NAMES
  #define HeapedMatcherDoc              lucy_HeapedMatcherDoc
#endif


/* Include the header for this class's parent. 
 */

#include "Lucy/Search/PolyMatcher.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_ORMATCHER
extern uint32_t lucy_ORMatcher_IVARS_OFFSET;
typedef struct lucy_ORMatcherIVARS lucy_ORMatcherIVARS;
static CFISH_INLINE lucy_ORMatcherIVARS*
lucy_ORMatcher_IVARS(lucy_ORMatcher *self) {
   char *ptr = (char*)self + lucy_ORMatcher_IVARS_OFFSET;
   return (lucy_ORMatcherIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define ORMatcherIVARS lucy_ORMatcherIVARS
  #define ORMatcher_IVARS lucy_ORMatcher_IVARS
#endif

struct lucy_ORMatcherIVARS {
    cfish_Vector* children;
    lucy_Similarity* sim;
    uint32_t num_kids;
    uint32_t matching_kids;
    float* coord_factors;
    lucy_HeapedMatcherDoc** heap;
    lucy_HeapedMatcherDoc** pool;
    char* blob;
    lucy_HeapedMatcherDoc* top_hmd;
    uint32_t size;
    uint32_t max_size;
};

#endif /* C_LUCY_ORMATCHER */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_ORMatcher*
lucy_ORMatcher_new(cfish_Vector* children);

LUCY_VISIBLE lucy_ORMatcher*
lucy_ORMatcher_init(lucy_ORMatcher* self, cfish_Vector* children);

void
LUCY_ORMatcher_Destroy_IMP(lucy_ORMatcher* self);

int32_t
LUCY_ORMatcher_Next_IMP(lucy_ORMatcher* self);

int32_t
LUCY_ORMatcher_Advance_IMP(lucy_ORMatcher* self, int32_t target);

int32_t
LUCY_ORMatcher_Get_Doc_ID_IMP(lucy_ORMatcher* self);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_ORMatcher_To_Host_t)(lucy_ORMatcher* self, void* vcache);

typedef cfish_Obj*
(*LUCY_ORMatcher_Clone_t)(lucy_ORMatcher* self);

typedef bool
(*LUCY_ORMatcher_Equals_t)(lucy_ORMatcher* self, cfish_Obj* other);

typedef int32_t
(*LUCY_ORMatcher_Compare_To_t)(lucy_ORMatcher* self, cfish_Obj* other);

typedef void
(*LUCY_ORMatcher_Destroy_t)(lucy_ORMatcher* self);

typedef cfish_String*
(*LUCY_ORMatcher_To_String_t)(lucy_ORMatcher* self);

typedef int32_t
(*LUCY_ORMatcher_Next_t)(lucy_ORMatcher* self);

typedef int32_t
(*LUCY_ORMatcher_Advance_t)(lucy_ORMatcher* self, int32_t target);

typedef int32_t
(*LUCY_ORMatcher_Get_Doc_ID_t)(lucy_ORMatcher* self);

typedef float
(*LUCY_ORMatcher_Score_t)(lucy_ORMatcher* self);

typedef void
(*LUCY_ORMatcher_Collect_t)(lucy_ORMatcher* self, lucy_Collector* collector, lucy_Matcher* deletions);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_ORMatcher_get_class(lucy_ORMatcher *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_ORMatcher_get_class_name(lucy_ORMatcher *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_ORMatcher_is_a(lucy_ORMatcher *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_ORMatcher_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_ORMatcher_To_Host(lucy_ORMatcher* self, void* vcache) {
    const LUCY_ORMatcher_To_Host_t method = (LUCY_ORMatcher_To_Host_t)cfish_obj_method(self, LUCY_ORMatcher_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_ORMatcher_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_ORMatcher_Clone(lucy_ORMatcher* self) {
    const LUCY_ORMatcher_Clone_t method = (LUCY_ORMatcher_Clone_t)cfish_obj_method(self, LUCY_ORMatcher_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ORMatcher_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_ORMatcher_Equals(lucy_ORMatcher* self, cfish_Obj* other) {
    const LUCY_ORMatcher_Equals_t method = (LUCY_ORMatcher_Equals_t)cfish_obj_method(self, LUCY_ORMatcher_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_ORMatcher_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_ORMatcher_Compare_To(lucy_ORMatcher* self, cfish_Obj* other) {
    const LUCY_ORMatcher_Compare_To_t method = (LUCY_ORMatcher_Compare_To_t)cfish_obj_method(self, LUCY_ORMatcher_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_ORMatcher_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_ORMatcher_Destroy(lucy_ORMatcher* self) {
    const LUCY_ORMatcher_Destroy_t method = (LUCY_ORMatcher_Destroy_t)cfish_obj_method(self, LUCY_ORMatcher_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ORMatcher_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_ORMatcher_To_String(lucy_ORMatcher* self) {
    const LUCY_ORMatcher_To_String_t method = (LUCY_ORMatcher_To_String_t)cfish_obj_method(self, LUCY_ORMatcher_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ORMatcher_Next_OFFSET;
static CFISH_INLINE int32_t
LUCY_ORMatcher_Next(lucy_ORMatcher* self) {
    const LUCY_ORMatcher_Next_t method = (LUCY_ORMatcher_Next_t)cfish_obj_method(self, LUCY_ORMatcher_Next_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ORMatcher_Advance_OFFSET;
static CFISH_INLINE int32_t
LUCY_ORMatcher_Advance(lucy_ORMatcher* self, int32_t target) {
    const LUCY_ORMatcher_Advance_t method = (LUCY_ORMatcher_Advance_t)cfish_obj_method(self, LUCY_ORMatcher_Advance_OFFSET);
    return method(self, target);
}

extern LUCY_VISIBLE uint32_t LUCY_ORMatcher_Get_Doc_ID_OFFSET;
static CFISH_INLINE int32_t
LUCY_ORMatcher_Get_Doc_ID(lucy_ORMatcher* self) {
    const LUCY_ORMatcher_Get_Doc_ID_t method = (LUCY_ORMatcher_Get_Doc_ID_t)cfish_obj_method(self, LUCY_ORMatcher_Get_Doc_ID_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ORMatcher_Score_OFFSET;
static CFISH_INLINE float
LUCY_ORMatcher_Score(lucy_ORMatcher* self) {
    const LUCY_ORMatcher_Score_t method = (LUCY_ORMatcher_Score_t)cfish_obj_method(self, LUCY_ORMatcher_Score_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ORMatcher_Collect_OFFSET;
static CFISH_INLINE void
LUCY_ORMatcher_Collect(lucy_ORMatcher* self, lucy_Collector* collector, lucy_Matcher* deletions) {
    const LUCY_ORMatcher_Collect_t method = (LUCY_ORMatcher_Collect_t)cfish_obj_method(self, LUCY_ORMatcher_Collect_OFFSET);
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
  #define ORMatcher lucy_ORMatcher
  #define ORMATCHER LUCY_ORMATCHER
  #define ORMatcher_new lucy_ORMatcher_new
  #define ORMatcher_init lucy_ORMatcher_init
  #define ORMatcher_get_class lucy_ORMatcher_get_class
  #define ORMatcher_get_class_name lucy_ORMatcher_get_class_name
  #define ORMatcher_is_a lucy_ORMatcher_is_a
  #define ORMatcher_Destroy_IMP LUCY_ORMatcher_Destroy_IMP
  #define ORMatcher_Next_IMP LUCY_ORMatcher_Next_IMP
  #define ORMatcher_Advance_IMP LUCY_ORMatcher_Advance_IMP
  #define ORMatcher_Get_Doc_ID_IMP LUCY_ORMatcher_Get_Doc_ID_IMP
  #define ORMatcher_To_Host LUCY_ORMatcher_To_Host
  #define ORMatcher_To_Host_t LUCY_ORMatcher_To_Host_t
  #define ORMatcher_Clone LUCY_ORMatcher_Clone
  #define ORMatcher_Clone_t LUCY_ORMatcher_Clone_t
  #define ORMatcher_Equals LUCY_ORMatcher_Equals
  #define ORMatcher_Equals_t LUCY_ORMatcher_Equals_t
  #define ORMatcher_Compare_To LUCY_ORMatcher_Compare_To
  #define ORMatcher_Compare_To_t LUCY_ORMatcher_Compare_To_t
  #define ORMatcher_Destroy LUCY_ORMatcher_Destroy
  #define ORMatcher_Destroy_t LUCY_ORMatcher_Destroy_t
  #define ORMatcher_To_String LUCY_ORMatcher_To_String
  #define ORMatcher_To_String_t LUCY_ORMatcher_To_String_t
  #define ORMatcher_Next LUCY_ORMatcher_Next
  #define ORMatcher_Next_t LUCY_ORMatcher_Next_t
  #define ORMatcher_Advance LUCY_ORMatcher_Advance
  #define ORMatcher_Advance_t LUCY_ORMatcher_Advance_t
  #define ORMatcher_Get_Doc_ID LUCY_ORMatcher_Get_Doc_ID
  #define ORMatcher_Get_Doc_ID_t LUCY_ORMatcher_Get_Doc_ID_t
  #define ORMatcher_Score LUCY_ORMatcher_Score
  #define ORMatcher_Score_t LUCY_ORMatcher_Score_t
  #define ORMatcher_Collect LUCY_ORMatcher_Collect
  #define ORMatcher_Collect_t LUCY_ORMatcher_Collect_t
#endif /* LUCY_USE_SHORT_NAMES */



/* Include the header for this class's parent. 
 */

#include "Lucy/Search/ORMatcher.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_ORSCORER
extern uint32_t lucy_ORScorer_IVARS_OFFSET;
typedef struct lucy_ORScorerIVARS lucy_ORScorerIVARS;
static CFISH_INLINE lucy_ORScorerIVARS*
lucy_ORScorer_IVARS(lucy_ORScorer *self) {
   char *ptr = (char*)self + lucy_ORScorer_IVARS_OFFSET;
   return (lucy_ORScorerIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define ORScorerIVARS lucy_ORScorerIVARS
  #define ORScorer_IVARS lucy_ORScorer_IVARS
#endif

struct lucy_ORScorerIVARS {
    cfish_Vector* children;
    lucy_Similarity* sim;
    uint32_t num_kids;
    uint32_t matching_kids;
    float* coord_factors;
    lucy_HeapedMatcherDoc** heap;
    lucy_HeapedMatcherDoc** pool;
    char* blob;
    lucy_HeapedMatcherDoc* top_hmd;
    uint32_t size;
    uint32_t max_size;
    float* scores;
    int32_t doc_id;
};

#endif /* C_LUCY_ORSCORER */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_ORScorer*
lucy_ORScorer_new(cfish_Vector* children, lucy_Similarity* similarity);

LUCY_VISIBLE lucy_ORScorer*
lucy_ORScorer_init(lucy_ORScorer* self, cfish_Vector* children, lucy_Similarity* similarity);

void
LUCY_ORScorer_Destroy_IMP(lucy_ORScorer* self);

int32_t
LUCY_ORScorer_Next_IMP(lucy_ORScorer* self);

int32_t
LUCY_ORScorer_Advance_IMP(lucy_ORScorer* self, int32_t target);

float
LUCY_ORScorer_Score_IMP(lucy_ORScorer* self);

int32_t
LUCY_ORScorer_Get_Doc_ID_IMP(lucy_ORScorer* self);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_ORScorer_To_Host_t)(lucy_ORScorer* self, void* vcache);

typedef cfish_Obj*
(*LUCY_ORScorer_Clone_t)(lucy_ORScorer* self);

typedef bool
(*LUCY_ORScorer_Equals_t)(lucy_ORScorer* self, cfish_Obj* other);

typedef int32_t
(*LUCY_ORScorer_Compare_To_t)(lucy_ORScorer* self, cfish_Obj* other);

typedef void
(*LUCY_ORScorer_Destroy_t)(lucy_ORScorer* self);

typedef cfish_String*
(*LUCY_ORScorer_To_String_t)(lucy_ORScorer* self);

typedef int32_t
(*LUCY_ORScorer_Next_t)(lucy_ORScorer* self);

typedef int32_t
(*LUCY_ORScorer_Advance_t)(lucy_ORScorer* self, int32_t target);

typedef int32_t
(*LUCY_ORScorer_Get_Doc_ID_t)(lucy_ORScorer* self);

typedef float
(*LUCY_ORScorer_Score_t)(lucy_ORScorer* self);

typedef void
(*LUCY_ORScorer_Collect_t)(lucy_ORScorer* self, lucy_Collector* collector, lucy_Matcher* deletions);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_ORScorer_get_class(lucy_ORScorer *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_ORScorer_get_class_name(lucy_ORScorer *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_ORScorer_is_a(lucy_ORScorer *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_ORScorer_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_ORScorer_To_Host(lucy_ORScorer* self, void* vcache) {
    const LUCY_ORScorer_To_Host_t method = (LUCY_ORScorer_To_Host_t)cfish_obj_method(self, LUCY_ORScorer_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_ORScorer_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_ORScorer_Clone(lucy_ORScorer* self) {
    const LUCY_ORScorer_Clone_t method = (LUCY_ORScorer_Clone_t)cfish_obj_method(self, LUCY_ORScorer_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ORScorer_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_ORScorer_Equals(lucy_ORScorer* self, cfish_Obj* other) {
    const LUCY_ORScorer_Equals_t method = (LUCY_ORScorer_Equals_t)cfish_obj_method(self, LUCY_ORScorer_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_ORScorer_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_ORScorer_Compare_To(lucy_ORScorer* self, cfish_Obj* other) {
    const LUCY_ORScorer_Compare_To_t method = (LUCY_ORScorer_Compare_To_t)cfish_obj_method(self, LUCY_ORScorer_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_ORScorer_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_ORScorer_Destroy(lucy_ORScorer* self) {
    const LUCY_ORScorer_Destroy_t method = (LUCY_ORScorer_Destroy_t)cfish_obj_method(self, LUCY_ORScorer_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ORScorer_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_ORScorer_To_String(lucy_ORScorer* self) {
    const LUCY_ORScorer_To_String_t method = (LUCY_ORScorer_To_String_t)cfish_obj_method(self, LUCY_ORScorer_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ORScorer_Next_OFFSET;
static CFISH_INLINE int32_t
LUCY_ORScorer_Next(lucy_ORScorer* self) {
    const LUCY_ORScorer_Next_t method = (LUCY_ORScorer_Next_t)cfish_obj_method(self, LUCY_ORScorer_Next_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ORScorer_Advance_OFFSET;
static CFISH_INLINE int32_t
LUCY_ORScorer_Advance(lucy_ORScorer* self, int32_t target) {
    const LUCY_ORScorer_Advance_t method = (LUCY_ORScorer_Advance_t)cfish_obj_method(self, LUCY_ORScorer_Advance_OFFSET);
    return method(self, target);
}

extern LUCY_VISIBLE uint32_t LUCY_ORScorer_Get_Doc_ID_OFFSET;
static CFISH_INLINE int32_t
LUCY_ORScorer_Get_Doc_ID(lucy_ORScorer* self) {
    const LUCY_ORScorer_Get_Doc_ID_t method = (LUCY_ORScorer_Get_Doc_ID_t)cfish_obj_method(self, LUCY_ORScorer_Get_Doc_ID_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ORScorer_Score_OFFSET;
static CFISH_INLINE float
LUCY_ORScorer_Score(lucy_ORScorer* self) {
    const LUCY_ORScorer_Score_t method = (LUCY_ORScorer_Score_t)cfish_obj_method(self, LUCY_ORScorer_Score_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ORScorer_Collect_OFFSET;
static CFISH_INLINE void
LUCY_ORScorer_Collect(lucy_ORScorer* self, lucy_Collector* collector, lucy_Matcher* deletions) {
    const LUCY_ORScorer_Collect_t method = (LUCY_ORScorer_Collect_t)cfish_obj_method(self, LUCY_ORScorer_Collect_OFFSET);
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
  #define ORScorer lucy_ORScorer
  #define ORSCORER LUCY_ORSCORER
  #define ORScorer_new lucy_ORScorer_new
  #define ORScorer_init lucy_ORScorer_init
  #define ORScorer_get_class lucy_ORScorer_get_class
  #define ORScorer_get_class_name lucy_ORScorer_get_class_name
  #define ORScorer_is_a lucy_ORScorer_is_a
  #define ORScorer_Destroy_IMP LUCY_ORScorer_Destroy_IMP
  #define ORScorer_Next_IMP LUCY_ORScorer_Next_IMP
  #define ORScorer_Advance_IMP LUCY_ORScorer_Advance_IMP
  #define ORScorer_Score_IMP LUCY_ORScorer_Score_IMP
  #define ORScorer_Get_Doc_ID_IMP LUCY_ORScorer_Get_Doc_ID_IMP
  #define ORScorer_To_Host LUCY_ORScorer_To_Host
  #define ORScorer_To_Host_t LUCY_ORScorer_To_Host_t
  #define ORScorer_Clone LUCY_ORScorer_Clone
  #define ORScorer_Clone_t LUCY_ORScorer_Clone_t
  #define ORScorer_Equals LUCY_ORScorer_Equals
  #define ORScorer_Equals_t LUCY_ORScorer_Equals_t
  #define ORScorer_Compare_To LUCY_ORScorer_Compare_To
  #define ORScorer_Compare_To_t LUCY_ORScorer_Compare_To_t
  #define ORScorer_Destroy LUCY_ORScorer_Destroy
  #define ORScorer_Destroy_t LUCY_ORScorer_Destroy_t
  #define ORScorer_To_String LUCY_ORScorer_To_String
  #define ORScorer_To_String_t LUCY_ORScorer_To_String_t
  #define ORScorer_Next LUCY_ORScorer_Next
  #define ORScorer_Next_t LUCY_ORScorer_Next_t
  #define ORScorer_Advance LUCY_ORScorer_Advance
  #define ORScorer_Advance_t LUCY_ORScorer_Advance_t
  #define ORScorer_Get_Doc_ID LUCY_ORScorer_Get_Doc_ID
  #define ORScorer_Get_Doc_ID_t LUCY_ORScorer_Get_Doc_ID_t
  #define ORScorer_Score LUCY_ORScorer_Score
  #define ORScorer_Score_t LUCY_ORScorer_Score_t
  #define ORScorer_Collect LUCY_ORScorer_Collect
  #define ORScorer_Collect_t LUCY_ORScorer_Collect_t
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_SEARCH_ORMATCHER */




