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


#ifndef H_LUCY_SEARCH_RANGEQUERY
#define H_LUCY_SEARCH_RANGEQUERY 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Lucy/Search/Query.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_RANGEQUERY
extern uint32_t lucy_RangeQuery_IVARS_OFFSET;
typedef struct lucy_RangeQueryIVARS lucy_RangeQueryIVARS;
static CFISH_INLINE lucy_RangeQueryIVARS*
lucy_RangeQuery_IVARS(lucy_RangeQuery *self) {
   char *ptr = (char*)self + lucy_RangeQuery_IVARS_OFFSET;
   return (lucy_RangeQueryIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define RangeQueryIVARS lucy_RangeQueryIVARS
  #define RangeQuery_IVARS lucy_RangeQuery_IVARS
#endif

struct lucy_RangeQueryIVARS {
    float boost;
    cfish_String* field;
    cfish_Obj* lower_term;
    cfish_Obj* upper_term;
    bool include_lower;
    bool include_upper;
};

#endif /* C_LUCY_RANGEQUERY */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_RangeQuery*
lucy_RangeQuery_new(cfish_String* field, cfish_Obj* lower_term, cfish_Obj* upper_term, bool include_lower, bool include_upper);

LUCY_VISIBLE lucy_RangeQuery*
lucy_RangeQuery_init(lucy_RangeQuery* self, cfish_String* field, cfish_Obj* lower_term, cfish_Obj* upper_term, bool include_lower, bool include_upper);

bool
LUCY_RangeQuery_Equals_IMP(lucy_RangeQuery* self, cfish_Obj* other);

cfish_String*
LUCY_RangeQuery_To_String_IMP(lucy_RangeQuery* self);

lucy_Compiler*
LUCY_RangeQuery_Make_Compiler_IMP(lucy_RangeQuery* self, lucy_Searcher* searcher, float boost, bool subordinate);

void
LUCY_RangeQuery_Serialize_IMP(lucy_RangeQuery* self, lucy_OutStream* outstream);

lucy_RangeQuery*
LUCY_RangeQuery_Deserialize_IMP(lucy_RangeQuery* self, lucy_InStream* instream);

cfish_Obj*
LUCY_RangeQuery_Dump_IMP(lucy_RangeQuery* self);

cfish_Obj*
LUCY_RangeQuery_Load_IMP(lucy_RangeQuery* self, cfish_Obj* dump);

void
LUCY_RangeQuery_Destroy_IMP(lucy_RangeQuery* self);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_RangeQuery_To_Host_t)(lucy_RangeQuery* self, void* vcache);

typedef cfish_Obj*
(*LUCY_RangeQuery_Clone_t)(lucy_RangeQuery* self);

typedef bool
(*LUCY_RangeQuery_Equals_t)(lucy_RangeQuery* self, cfish_Obj* other);

typedef int32_t
(*LUCY_RangeQuery_Compare_To_t)(lucy_RangeQuery* self, cfish_Obj* other);

typedef void
(*LUCY_RangeQuery_Destroy_t)(lucy_RangeQuery* self);

typedef cfish_String*
(*LUCY_RangeQuery_To_String_t)(lucy_RangeQuery* self);

typedef lucy_Compiler*
(*LUCY_RangeQuery_Make_Compiler_t)(lucy_RangeQuery* self, lucy_Searcher* searcher, float boost, bool subordinate);

typedef void
(*LUCY_RangeQuery_Set_Boost_t)(lucy_RangeQuery* self, float boost);

typedef float
(*LUCY_RangeQuery_Get_Boost_t)(lucy_RangeQuery* self);

typedef void
(*LUCY_RangeQuery_Serialize_t)(lucy_RangeQuery* self, lucy_OutStream* outstream);

typedef lucy_RangeQuery*
(*LUCY_RangeQuery_Deserialize_t)(lucy_RangeQuery* self, lucy_InStream* instream);

typedef cfish_Obj*
(*LUCY_RangeQuery_Dump_t)(lucy_RangeQuery* self);

typedef cfish_Obj*
(*LUCY_RangeQuery_Load_t)(lucy_RangeQuery* self, cfish_Obj* dump);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_RangeQuery_get_class(lucy_RangeQuery *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_RangeQuery_get_class_name(lucy_RangeQuery *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_RangeQuery_is_a(lucy_RangeQuery *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_RangeQuery_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_RangeQuery_To_Host(lucy_RangeQuery* self, void* vcache) {
    const LUCY_RangeQuery_To_Host_t method = (LUCY_RangeQuery_To_Host_t)cfish_obj_method(self, LUCY_RangeQuery_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeQuery_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_RangeQuery_Clone(lucy_RangeQuery* self) {
    const LUCY_RangeQuery_Clone_t method = (LUCY_RangeQuery_Clone_t)cfish_obj_method(self, LUCY_RangeQuery_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeQuery_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_RangeQuery_Equals(lucy_RangeQuery* self, cfish_Obj* other) {
    const LUCY_RangeQuery_Equals_t method = (LUCY_RangeQuery_Equals_t)cfish_obj_method(self, LUCY_RangeQuery_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeQuery_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_RangeQuery_Compare_To(lucy_RangeQuery* self, cfish_Obj* other) {
    const LUCY_RangeQuery_Compare_To_t method = (LUCY_RangeQuery_Compare_To_t)cfish_obj_method(self, LUCY_RangeQuery_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeQuery_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_RangeQuery_Destroy(lucy_RangeQuery* self) {
    const LUCY_RangeQuery_Destroy_t method = (LUCY_RangeQuery_Destroy_t)cfish_obj_method(self, LUCY_RangeQuery_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeQuery_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_RangeQuery_To_String(lucy_RangeQuery* self) {
    const LUCY_RangeQuery_To_String_t method = (LUCY_RangeQuery_To_String_t)cfish_obj_method(self, LUCY_RangeQuery_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeQuery_Make_Compiler_OFFSET;
static CFISH_INLINE lucy_Compiler*
LUCY_RangeQuery_Make_Compiler(lucy_RangeQuery* self, lucy_Searcher* searcher, float boost, bool subordinate) {
    const LUCY_RangeQuery_Make_Compiler_t method = (LUCY_RangeQuery_Make_Compiler_t)cfish_obj_method(self, LUCY_RangeQuery_Make_Compiler_OFFSET);
    return method(self, searcher, boost, subordinate);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeQuery_Set_Boost_OFFSET;
static CFISH_INLINE void
LUCY_RangeQuery_Set_Boost(lucy_RangeQuery* self, float boost) {
    const LUCY_RangeQuery_Set_Boost_t method = (LUCY_RangeQuery_Set_Boost_t)cfish_obj_method(self, LUCY_RangeQuery_Set_Boost_OFFSET);
    method(self, boost);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeQuery_Get_Boost_OFFSET;
static CFISH_INLINE float
LUCY_RangeQuery_Get_Boost(lucy_RangeQuery* self) {
    const LUCY_RangeQuery_Get_Boost_t method = (LUCY_RangeQuery_Get_Boost_t)cfish_obj_method(self, LUCY_RangeQuery_Get_Boost_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeQuery_Serialize_OFFSET;
static CFISH_INLINE void
LUCY_RangeQuery_Serialize(lucy_RangeQuery* self, lucy_OutStream* outstream) {
    const LUCY_RangeQuery_Serialize_t method = (LUCY_RangeQuery_Serialize_t)cfish_obj_method(self, LUCY_RangeQuery_Serialize_OFFSET);
    method(self, outstream);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeQuery_Deserialize_OFFSET;
static CFISH_INLINE lucy_RangeQuery*
LUCY_RangeQuery_Deserialize(lucy_RangeQuery* self, lucy_InStream* instream) {
    const LUCY_RangeQuery_Deserialize_t method = (LUCY_RangeQuery_Deserialize_t)cfish_obj_method(self, LUCY_RangeQuery_Deserialize_OFFSET);
    return method(self, instream);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeQuery_Dump_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_RangeQuery_Dump(lucy_RangeQuery* self) {
    const LUCY_RangeQuery_Dump_t method = (LUCY_RangeQuery_Dump_t)cfish_obj_method(self, LUCY_RangeQuery_Dump_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeQuery_Load_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_RangeQuery_Load(lucy_RangeQuery* self, cfish_Obj* dump) {
    const LUCY_RangeQuery_Load_t method = (LUCY_RangeQuery_Load_t)cfish_obj_method(self, LUCY_RangeQuery_Load_OFFSET);
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
  #define RangeQuery lucy_RangeQuery
  #define RANGEQUERY LUCY_RANGEQUERY
  #define RangeQuery_new lucy_RangeQuery_new
  #define RangeQuery_init lucy_RangeQuery_init
  #define RangeQuery_get_class lucy_RangeQuery_get_class
  #define RangeQuery_get_class_name lucy_RangeQuery_get_class_name
  #define RangeQuery_is_a lucy_RangeQuery_is_a
  #define RangeQuery_Equals_IMP LUCY_RangeQuery_Equals_IMP
  #define RangeQuery_To_String_IMP LUCY_RangeQuery_To_String_IMP
  #define RangeQuery_Make_Compiler_IMP LUCY_RangeQuery_Make_Compiler_IMP
  #define RangeQuery_Serialize_IMP LUCY_RangeQuery_Serialize_IMP
  #define RangeQuery_Deserialize_IMP LUCY_RangeQuery_Deserialize_IMP
  #define RangeQuery_Dump_IMP LUCY_RangeQuery_Dump_IMP
  #define RangeQuery_Load_IMP LUCY_RangeQuery_Load_IMP
  #define RangeQuery_Destroy_IMP LUCY_RangeQuery_Destroy_IMP
  #define RangeQuery_To_Host LUCY_RangeQuery_To_Host
  #define RangeQuery_To_Host_t LUCY_RangeQuery_To_Host_t
  #define RangeQuery_Clone LUCY_RangeQuery_Clone
  #define RangeQuery_Clone_t LUCY_RangeQuery_Clone_t
  #define RangeQuery_Equals LUCY_RangeQuery_Equals
  #define RangeQuery_Equals_t LUCY_RangeQuery_Equals_t
  #define RangeQuery_Compare_To LUCY_RangeQuery_Compare_To
  #define RangeQuery_Compare_To_t LUCY_RangeQuery_Compare_To_t
  #define RangeQuery_Destroy LUCY_RangeQuery_Destroy
  #define RangeQuery_Destroy_t LUCY_RangeQuery_Destroy_t
  #define RangeQuery_To_String LUCY_RangeQuery_To_String
  #define RangeQuery_To_String_t LUCY_RangeQuery_To_String_t
  #define RangeQuery_Make_Compiler LUCY_RangeQuery_Make_Compiler
  #define RangeQuery_Make_Compiler_t LUCY_RangeQuery_Make_Compiler_t
  #define RangeQuery_Set_Boost LUCY_RangeQuery_Set_Boost
  #define RangeQuery_Set_Boost_t LUCY_RangeQuery_Set_Boost_t
  #define RangeQuery_Get_Boost LUCY_RangeQuery_Get_Boost
  #define RangeQuery_Get_Boost_t LUCY_RangeQuery_Get_Boost_t
  #define RangeQuery_Serialize LUCY_RangeQuery_Serialize
  #define RangeQuery_Serialize_t LUCY_RangeQuery_Serialize_t
  #define RangeQuery_Deserialize LUCY_RangeQuery_Deserialize
  #define RangeQuery_Deserialize_t LUCY_RangeQuery_Deserialize_t
  #define RangeQuery_Dump LUCY_RangeQuery_Dump
  #define RangeQuery_Dump_t LUCY_RangeQuery_Dump_t
  #define RangeQuery_Load LUCY_RangeQuery_Load
  #define RangeQuery_Load_t LUCY_RangeQuery_Load_t
#endif /* LUCY_USE_SHORT_NAMES */



/* Include the header for this class's parent. 
 */

#include "Lucy/Search/Compiler.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_RANGECOMPILER
extern uint32_t lucy_RangeCompiler_IVARS_OFFSET;
typedef struct lucy_RangeCompilerIVARS lucy_RangeCompilerIVARS;
static CFISH_INLINE lucy_RangeCompilerIVARS*
lucy_RangeCompiler_IVARS(lucy_RangeCompiler *self) {
   char *ptr = (char*)self + lucy_RangeCompiler_IVARS_OFFSET;
   return (lucy_RangeCompilerIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define RangeCompilerIVARS lucy_RangeCompilerIVARS
  #define RangeCompiler_IVARS lucy_RangeCompiler_IVARS
#endif

struct lucy_RangeCompilerIVARS {
    float boost;
    lucy_Query* parent;
    lucy_Similarity* sim;
};

#endif /* C_LUCY_RANGECOMPILER */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_RangeCompiler*
lucy_RangeCompiler_new(lucy_RangeQuery* parent, lucy_Searcher* searcher, float boost);

LUCY_VISIBLE lucy_RangeCompiler*
lucy_RangeCompiler_init(lucy_RangeCompiler* self, lucy_RangeQuery* parent, lucy_Searcher* searcher, float boost);

lucy_Matcher*
LUCY_RangeCompiler_Make_Matcher_IMP(lucy_RangeCompiler* self, lucy_SegReader* reader, bool need_score);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_RangeCompiler_To_Host_t)(lucy_RangeCompiler* self, void* vcache);

typedef cfish_Obj*
(*LUCY_RangeCompiler_Clone_t)(lucy_RangeCompiler* self);

typedef bool
(*LUCY_RangeCompiler_Equals_t)(lucy_RangeCompiler* self, cfish_Obj* other);

typedef int32_t
(*LUCY_RangeCompiler_Compare_To_t)(lucy_RangeCompiler* self, cfish_Obj* other);

typedef void
(*LUCY_RangeCompiler_Destroy_t)(lucy_RangeCompiler* self);

typedef cfish_String*
(*LUCY_RangeCompiler_To_String_t)(lucy_RangeCompiler* self);

typedef lucy_Compiler*
(*LUCY_RangeCompiler_Make_Compiler_t)(lucy_RangeCompiler* self, lucy_Searcher* searcher, float boost, bool subordinate);

typedef void
(*LUCY_RangeCompiler_Set_Boost_t)(lucy_RangeCompiler* self, float boost);

typedef float
(*LUCY_RangeCompiler_Get_Boost_t)(lucy_RangeCompiler* self);

typedef void
(*LUCY_RangeCompiler_Serialize_t)(lucy_RangeCompiler* self, lucy_OutStream* outstream);

typedef lucy_Compiler*
(*LUCY_RangeCompiler_Deserialize_t)(lucy_RangeCompiler* self, lucy_InStream* instream);

typedef cfish_Obj*
(*LUCY_RangeCompiler_Dump_t)(lucy_RangeCompiler* self);

typedef cfish_Obj*
(*LUCY_RangeCompiler_Load_t)(lucy_RangeCompiler* self, cfish_Obj* dump);

typedef lucy_Matcher*
(*LUCY_RangeCompiler_Make_Matcher_t)(lucy_RangeCompiler* self, lucy_SegReader* reader, bool need_score);

typedef float
(*LUCY_RangeCompiler_Get_Weight_t)(lucy_RangeCompiler* self);

typedef lucy_Similarity*
(*LUCY_RangeCompiler_Get_Similarity_t)(lucy_RangeCompiler* self);

typedef lucy_Query*
(*LUCY_RangeCompiler_Get_Parent_t)(lucy_RangeCompiler* self);

typedef float
(*LUCY_RangeCompiler_Sum_Of_Squared_Weights_t)(lucy_RangeCompiler* self);

typedef void
(*LUCY_RangeCompiler_Apply_Norm_Factor_t)(lucy_RangeCompiler* self, float factor);

typedef void
(*LUCY_RangeCompiler_Normalize_t)(lucy_RangeCompiler* self);

typedef cfish_Vector*
(*LUCY_RangeCompiler_Highlight_Spans_t)(lucy_RangeCompiler* self, lucy_Searcher* searcher, lucy_DocVector* doc_vec, cfish_String* field);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_RangeCompiler_get_class(lucy_RangeCompiler *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_RangeCompiler_get_class_name(lucy_RangeCompiler *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_RangeCompiler_is_a(lucy_RangeCompiler *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_RangeCompiler_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_RangeCompiler_To_Host(lucy_RangeCompiler* self, void* vcache) {
    const LUCY_RangeCompiler_To_Host_t method = (LUCY_RangeCompiler_To_Host_t)cfish_obj_method(self, LUCY_RangeCompiler_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeCompiler_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_RangeCompiler_Clone(lucy_RangeCompiler* self) {
    const LUCY_RangeCompiler_Clone_t method = (LUCY_RangeCompiler_Clone_t)cfish_obj_method(self, LUCY_RangeCompiler_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeCompiler_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_RangeCompiler_Equals(lucy_RangeCompiler* self, cfish_Obj* other) {
    const LUCY_RangeCompiler_Equals_t method = (LUCY_RangeCompiler_Equals_t)cfish_obj_method(self, LUCY_RangeCompiler_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeCompiler_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_RangeCompiler_Compare_To(lucy_RangeCompiler* self, cfish_Obj* other) {
    const LUCY_RangeCompiler_Compare_To_t method = (LUCY_RangeCompiler_Compare_To_t)cfish_obj_method(self, LUCY_RangeCompiler_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeCompiler_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_RangeCompiler_Destroy(lucy_RangeCompiler* self) {
    const LUCY_RangeCompiler_Destroy_t method = (LUCY_RangeCompiler_Destroy_t)cfish_obj_method(self, LUCY_RangeCompiler_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeCompiler_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_RangeCompiler_To_String(lucy_RangeCompiler* self) {
    const LUCY_RangeCompiler_To_String_t method = (LUCY_RangeCompiler_To_String_t)cfish_obj_method(self, LUCY_RangeCompiler_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeCompiler_Make_Compiler_OFFSET;
static CFISH_INLINE lucy_Compiler*
LUCY_RangeCompiler_Make_Compiler(lucy_RangeCompiler* self, lucy_Searcher* searcher, float boost, bool subordinate) {
    const LUCY_RangeCompiler_Make_Compiler_t method = (LUCY_RangeCompiler_Make_Compiler_t)cfish_obj_method(self, LUCY_RangeCompiler_Make_Compiler_OFFSET);
    return method(self, searcher, boost, subordinate);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeCompiler_Set_Boost_OFFSET;
static CFISH_INLINE void
LUCY_RangeCompiler_Set_Boost(lucy_RangeCompiler* self, float boost) {
    const LUCY_RangeCompiler_Set_Boost_t method = (LUCY_RangeCompiler_Set_Boost_t)cfish_obj_method(self, LUCY_RangeCompiler_Set_Boost_OFFSET);
    method(self, boost);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeCompiler_Get_Boost_OFFSET;
static CFISH_INLINE float
LUCY_RangeCompiler_Get_Boost(lucy_RangeCompiler* self) {
    const LUCY_RangeCompiler_Get_Boost_t method = (LUCY_RangeCompiler_Get_Boost_t)cfish_obj_method(self, LUCY_RangeCompiler_Get_Boost_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeCompiler_Serialize_OFFSET;
static CFISH_INLINE void
LUCY_RangeCompiler_Serialize(lucy_RangeCompiler* self, lucy_OutStream* outstream) {
    const LUCY_RangeCompiler_Serialize_t method = (LUCY_RangeCompiler_Serialize_t)cfish_obj_method(self, LUCY_RangeCompiler_Serialize_OFFSET);
    method(self, outstream);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeCompiler_Deserialize_OFFSET;
static CFISH_INLINE lucy_Compiler*
LUCY_RangeCompiler_Deserialize(lucy_RangeCompiler* self, lucy_InStream* instream) {
    const LUCY_RangeCompiler_Deserialize_t method = (LUCY_RangeCompiler_Deserialize_t)cfish_obj_method(self, LUCY_RangeCompiler_Deserialize_OFFSET);
    return method(self, instream);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeCompiler_Dump_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_RangeCompiler_Dump(lucy_RangeCompiler* self) {
    const LUCY_RangeCompiler_Dump_t method = (LUCY_RangeCompiler_Dump_t)cfish_obj_method(self, LUCY_RangeCompiler_Dump_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeCompiler_Load_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_RangeCompiler_Load(lucy_RangeCompiler* self, cfish_Obj* dump) {
    const LUCY_RangeCompiler_Load_t method = (LUCY_RangeCompiler_Load_t)cfish_obj_method(self, LUCY_RangeCompiler_Load_OFFSET);
    return method(self, dump);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeCompiler_Make_Matcher_OFFSET;
static CFISH_INLINE lucy_Matcher*
LUCY_RangeCompiler_Make_Matcher(lucy_RangeCompiler* self, lucy_SegReader* reader, bool need_score) {
    const LUCY_RangeCompiler_Make_Matcher_t method = (LUCY_RangeCompiler_Make_Matcher_t)cfish_obj_method(self, LUCY_RangeCompiler_Make_Matcher_OFFSET);
    return method(self, reader, need_score);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeCompiler_Get_Weight_OFFSET;
static CFISH_INLINE float
LUCY_RangeCompiler_Get_Weight(lucy_RangeCompiler* self) {
    const LUCY_RangeCompiler_Get_Weight_t method = (LUCY_RangeCompiler_Get_Weight_t)cfish_obj_method(self, LUCY_RangeCompiler_Get_Weight_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeCompiler_Get_Similarity_OFFSET;
static CFISH_INLINE lucy_Similarity*
LUCY_RangeCompiler_Get_Similarity(lucy_RangeCompiler* self) {
    const LUCY_RangeCompiler_Get_Similarity_t method = (LUCY_RangeCompiler_Get_Similarity_t)cfish_obj_method(self, LUCY_RangeCompiler_Get_Similarity_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeCompiler_Get_Parent_OFFSET;
static CFISH_INLINE lucy_Query*
LUCY_RangeCompiler_Get_Parent(lucy_RangeCompiler* self) {
    const LUCY_RangeCompiler_Get_Parent_t method = (LUCY_RangeCompiler_Get_Parent_t)cfish_obj_method(self, LUCY_RangeCompiler_Get_Parent_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeCompiler_Sum_Of_Squared_Weights_OFFSET;
static CFISH_INLINE float
LUCY_RangeCompiler_Sum_Of_Squared_Weights(lucy_RangeCompiler* self) {
    const LUCY_RangeCompiler_Sum_Of_Squared_Weights_t method = (LUCY_RangeCompiler_Sum_Of_Squared_Weights_t)cfish_obj_method(self, LUCY_RangeCompiler_Sum_Of_Squared_Weights_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeCompiler_Apply_Norm_Factor_OFFSET;
static CFISH_INLINE void
LUCY_RangeCompiler_Apply_Norm_Factor(lucy_RangeCompiler* self, float factor) {
    const LUCY_RangeCompiler_Apply_Norm_Factor_t method = (LUCY_RangeCompiler_Apply_Norm_Factor_t)cfish_obj_method(self, LUCY_RangeCompiler_Apply_Norm_Factor_OFFSET);
    method(self, factor);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeCompiler_Normalize_OFFSET;
static CFISH_INLINE void
LUCY_RangeCompiler_Normalize(lucy_RangeCompiler* self) {
    const LUCY_RangeCompiler_Normalize_t method = (LUCY_RangeCompiler_Normalize_t)cfish_obj_method(self, LUCY_RangeCompiler_Normalize_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_RangeCompiler_Highlight_Spans_OFFSET;
static CFISH_INLINE cfish_Vector*
LUCY_RangeCompiler_Highlight_Spans(lucy_RangeCompiler* self, lucy_Searcher* searcher, lucy_DocVector* doc_vec, cfish_String* field) {
    const LUCY_RangeCompiler_Highlight_Spans_t method = (LUCY_RangeCompiler_Highlight_Spans_t)cfish_obj_method(self, LUCY_RangeCompiler_Highlight_Spans_OFFSET);
    return method(self, searcher, doc_vec, field);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#else
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define RangeCompiler lucy_RangeCompiler
  #define RANGECOMPILER LUCY_RANGECOMPILER
  #define RangeCompiler_new lucy_RangeCompiler_new
  #define RangeCompiler_init lucy_RangeCompiler_init
  #define RangeCompiler_get_class lucy_RangeCompiler_get_class
  #define RangeCompiler_get_class_name lucy_RangeCompiler_get_class_name
  #define RangeCompiler_is_a lucy_RangeCompiler_is_a
  #define RangeCompiler_Make_Matcher_IMP LUCY_RangeCompiler_Make_Matcher_IMP
  #define RangeCompiler_To_Host LUCY_RangeCompiler_To_Host
  #define RangeCompiler_To_Host_t LUCY_RangeCompiler_To_Host_t
  #define RangeCompiler_Clone LUCY_RangeCompiler_Clone
  #define RangeCompiler_Clone_t LUCY_RangeCompiler_Clone_t
  #define RangeCompiler_Equals LUCY_RangeCompiler_Equals
  #define RangeCompiler_Equals_t LUCY_RangeCompiler_Equals_t
  #define RangeCompiler_Compare_To LUCY_RangeCompiler_Compare_To
  #define RangeCompiler_Compare_To_t LUCY_RangeCompiler_Compare_To_t
  #define RangeCompiler_Destroy LUCY_RangeCompiler_Destroy
  #define RangeCompiler_Destroy_t LUCY_RangeCompiler_Destroy_t
  #define RangeCompiler_To_String LUCY_RangeCompiler_To_String
  #define RangeCompiler_To_String_t LUCY_RangeCompiler_To_String_t
  #define RangeCompiler_Make_Compiler LUCY_RangeCompiler_Make_Compiler
  #define RangeCompiler_Make_Compiler_t LUCY_RangeCompiler_Make_Compiler_t
  #define RangeCompiler_Set_Boost LUCY_RangeCompiler_Set_Boost
  #define RangeCompiler_Set_Boost_t LUCY_RangeCompiler_Set_Boost_t
  #define RangeCompiler_Get_Boost LUCY_RangeCompiler_Get_Boost
  #define RangeCompiler_Get_Boost_t LUCY_RangeCompiler_Get_Boost_t
  #define RangeCompiler_Serialize LUCY_RangeCompiler_Serialize
  #define RangeCompiler_Serialize_t LUCY_RangeCompiler_Serialize_t
  #define RangeCompiler_Deserialize LUCY_RangeCompiler_Deserialize
  #define RangeCompiler_Deserialize_t LUCY_RangeCompiler_Deserialize_t
  #define RangeCompiler_Dump LUCY_RangeCompiler_Dump
  #define RangeCompiler_Dump_t LUCY_RangeCompiler_Dump_t
  #define RangeCompiler_Load LUCY_RangeCompiler_Load
  #define RangeCompiler_Load_t LUCY_RangeCompiler_Load_t
  #define RangeCompiler_Make_Matcher LUCY_RangeCompiler_Make_Matcher
  #define RangeCompiler_Make_Matcher_t LUCY_RangeCompiler_Make_Matcher_t
  #define RangeCompiler_Get_Weight LUCY_RangeCompiler_Get_Weight
  #define RangeCompiler_Get_Weight_t LUCY_RangeCompiler_Get_Weight_t
  #define RangeCompiler_Get_Similarity LUCY_RangeCompiler_Get_Similarity
  #define RangeCompiler_Get_Similarity_t LUCY_RangeCompiler_Get_Similarity_t
  #define RangeCompiler_Get_Parent LUCY_RangeCompiler_Get_Parent
  #define RangeCompiler_Get_Parent_t LUCY_RangeCompiler_Get_Parent_t
  #define RangeCompiler_Sum_Of_Squared_Weights LUCY_RangeCompiler_Sum_Of_Squared_Weights
  #define RangeCompiler_Sum_Of_Squared_Weights_t LUCY_RangeCompiler_Sum_Of_Squared_Weights_t
  #define RangeCompiler_Apply_Norm_Factor LUCY_RangeCompiler_Apply_Norm_Factor
  #define RangeCompiler_Apply_Norm_Factor_t LUCY_RangeCompiler_Apply_Norm_Factor_t
  #define RangeCompiler_Normalize LUCY_RangeCompiler_Normalize
  #define RangeCompiler_Normalize_t LUCY_RangeCompiler_Normalize_t
  #define RangeCompiler_Highlight_Spans LUCY_RangeCompiler_Highlight_Spans
  #define RangeCompiler_Highlight_Spans_t LUCY_RangeCompiler_Highlight_Spans_t
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_SEARCH_RANGEQUERY */




