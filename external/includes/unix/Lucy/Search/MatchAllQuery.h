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


#ifndef H_LUCY_SEARCH_MATCHALLQUERY
#define H_LUCY_SEARCH_MATCHALLQUERY 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Lucy/Search/Query.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_MATCHALLQUERY
extern uint32_t lucy_MatchAllQuery_IVARS_OFFSET;
typedef struct lucy_MatchAllQueryIVARS lucy_MatchAllQueryIVARS;
static CFISH_INLINE lucy_MatchAllQueryIVARS*
lucy_MatchAllQuery_IVARS(lucy_MatchAllQuery *self) {
   char *ptr = (char*)self + lucy_MatchAllQuery_IVARS_OFFSET;
   return (lucy_MatchAllQueryIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define MatchAllQueryIVARS lucy_MatchAllQueryIVARS
  #define MatchAllQuery_IVARS lucy_MatchAllQuery_IVARS
#endif

struct lucy_MatchAllQueryIVARS {
    float boost;
};

#endif /* C_LUCY_MATCHALLQUERY */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_MatchAllQuery*
lucy_MatchAllQuery_new(void);

LUCY_VISIBLE lucy_MatchAllQuery*
lucy_MatchAllQuery_init(lucy_MatchAllQuery* self);

bool
LUCY_MatchAllQuery_Equals_IMP(lucy_MatchAllQuery* self, cfish_Obj* other);

cfish_String*
LUCY_MatchAllQuery_To_String_IMP(lucy_MatchAllQuery* self);

lucy_Compiler*
LUCY_MatchAllQuery_Make_Compiler_IMP(lucy_MatchAllQuery* self, lucy_Searcher* searcher, float boost, bool subordinate);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_MatchAllQuery_To_Host_t)(lucy_MatchAllQuery* self, void* vcache);

typedef cfish_Obj*
(*LUCY_MatchAllQuery_Clone_t)(lucy_MatchAllQuery* self);

typedef bool
(*LUCY_MatchAllQuery_Equals_t)(lucy_MatchAllQuery* self, cfish_Obj* other);

typedef int32_t
(*LUCY_MatchAllQuery_Compare_To_t)(lucy_MatchAllQuery* self, cfish_Obj* other);

typedef void
(*LUCY_MatchAllQuery_Destroy_t)(lucy_MatchAllQuery* self);

typedef cfish_String*
(*LUCY_MatchAllQuery_To_String_t)(lucy_MatchAllQuery* self);

typedef lucy_Compiler*
(*LUCY_MatchAllQuery_Make_Compiler_t)(lucy_MatchAllQuery* self, lucy_Searcher* searcher, float boost, bool subordinate);

typedef void
(*LUCY_MatchAllQuery_Set_Boost_t)(lucy_MatchAllQuery* self, float boost);

typedef float
(*LUCY_MatchAllQuery_Get_Boost_t)(lucy_MatchAllQuery* self);

typedef void
(*LUCY_MatchAllQuery_Serialize_t)(lucy_MatchAllQuery* self, lucy_OutStream* outstream);

typedef lucy_Query*
(*LUCY_MatchAllQuery_Deserialize_t)(lucy_MatchAllQuery* self, lucy_InStream* instream);

typedef cfish_Obj*
(*LUCY_MatchAllQuery_Dump_t)(lucy_MatchAllQuery* self);

typedef cfish_Obj*
(*LUCY_MatchAllQuery_Load_t)(lucy_MatchAllQuery* self, cfish_Obj* dump);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_MatchAllQuery_get_class(lucy_MatchAllQuery *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_MatchAllQuery_get_class_name(lucy_MatchAllQuery *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_MatchAllQuery_is_a(lucy_MatchAllQuery *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_MatchAllQuery_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_MatchAllQuery_To_Host(lucy_MatchAllQuery* self, void* vcache) {
    const LUCY_MatchAllQuery_To_Host_t method = (LUCY_MatchAllQuery_To_Host_t)cfish_obj_method(self, LUCY_MatchAllQuery_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_MatchAllQuery_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_MatchAllQuery_Clone(lucy_MatchAllQuery* self) {
    const LUCY_MatchAllQuery_Clone_t method = (LUCY_MatchAllQuery_Clone_t)cfish_obj_method(self, LUCY_MatchAllQuery_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_MatchAllQuery_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_MatchAllQuery_Equals(lucy_MatchAllQuery* self, cfish_Obj* other) {
    const LUCY_MatchAllQuery_Equals_t method = (LUCY_MatchAllQuery_Equals_t)cfish_obj_method(self, LUCY_MatchAllQuery_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_MatchAllQuery_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_MatchAllQuery_Compare_To(lucy_MatchAllQuery* self, cfish_Obj* other) {
    const LUCY_MatchAllQuery_Compare_To_t method = (LUCY_MatchAllQuery_Compare_To_t)cfish_obj_method(self, LUCY_MatchAllQuery_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_MatchAllQuery_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_MatchAllQuery_Destroy(lucy_MatchAllQuery* self) {
    const LUCY_MatchAllQuery_Destroy_t method = (LUCY_MatchAllQuery_Destroy_t)cfish_obj_method(self, LUCY_MatchAllQuery_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_MatchAllQuery_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_MatchAllQuery_To_String(lucy_MatchAllQuery* self) {
    const LUCY_MatchAllQuery_To_String_t method = (LUCY_MatchAllQuery_To_String_t)cfish_obj_method(self, LUCY_MatchAllQuery_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_MatchAllQuery_Make_Compiler_OFFSET;
static CFISH_INLINE lucy_Compiler*
LUCY_MatchAllQuery_Make_Compiler(lucy_MatchAllQuery* self, lucy_Searcher* searcher, float boost, bool subordinate) {
    const LUCY_MatchAllQuery_Make_Compiler_t method = (LUCY_MatchAllQuery_Make_Compiler_t)cfish_obj_method(self, LUCY_MatchAllQuery_Make_Compiler_OFFSET);
    return method(self, searcher, boost, subordinate);
}

extern LUCY_VISIBLE uint32_t LUCY_MatchAllQuery_Set_Boost_OFFSET;
static CFISH_INLINE void
LUCY_MatchAllQuery_Set_Boost(lucy_MatchAllQuery* self, float boost) {
    const LUCY_MatchAllQuery_Set_Boost_t method = (LUCY_MatchAllQuery_Set_Boost_t)cfish_obj_method(self, LUCY_MatchAllQuery_Set_Boost_OFFSET);
    method(self, boost);
}

extern LUCY_VISIBLE uint32_t LUCY_MatchAllQuery_Get_Boost_OFFSET;
static CFISH_INLINE float
LUCY_MatchAllQuery_Get_Boost(lucy_MatchAllQuery* self) {
    const LUCY_MatchAllQuery_Get_Boost_t method = (LUCY_MatchAllQuery_Get_Boost_t)cfish_obj_method(self, LUCY_MatchAllQuery_Get_Boost_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_MatchAllQuery_Serialize_OFFSET;
static CFISH_INLINE void
LUCY_MatchAllQuery_Serialize(lucy_MatchAllQuery* self, lucy_OutStream* outstream) {
    const LUCY_MatchAllQuery_Serialize_t method = (LUCY_MatchAllQuery_Serialize_t)cfish_obj_method(self, LUCY_MatchAllQuery_Serialize_OFFSET);
    method(self, outstream);
}

extern LUCY_VISIBLE uint32_t LUCY_MatchAllQuery_Deserialize_OFFSET;
static CFISH_INLINE lucy_Query*
LUCY_MatchAllQuery_Deserialize(lucy_MatchAllQuery* self, lucy_InStream* instream) {
    const LUCY_MatchAllQuery_Deserialize_t method = (LUCY_MatchAllQuery_Deserialize_t)cfish_obj_method(self, LUCY_MatchAllQuery_Deserialize_OFFSET);
    return method(self, instream);
}

extern LUCY_VISIBLE uint32_t LUCY_MatchAllQuery_Dump_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_MatchAllQuery_Dump(lucy_MatchAllQuery* self) {
    const LUCY_MatchAllQuery_Dump_t method = (LUCY_MatchAllQuery_Dump_t)cfish_obj_method(self, LUCY_MatchAllQuery_Dump_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_MatchAllQuery_Load_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_MatchAllQuery_Load(lucy_MatchAllQuery* self, cfish_Obj* dump) {
    const LUCY_MatchAllQuery_Load_t method = (LUCY_MatchAllQuery_Load_t)cfish_obj_method(self, LUCY_MatchAllQuery_Load_OFFSET);
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
  #define MatchAllQuery lucy_MatchAllQuery
  #define MATCHALLQUERY LUCY_MATCHALLQUERY
  #define MatchAllQuery_new lucy_MatchAllQuery_new
  #define MatchAllQuery_init lucy_MatchAllQuery_init
  #define MatchAllQuery_get_class lucy_MatchAllQuery_get_class
  #define MatchAllQuery_get_class_name lucy_MatchAllQuery_get_class_name
  #define MatchAllQuery_is_a lucy_MatchAllQuery_is_a
  #define MatchAllQuery_Equals_IMP LUCY_MatchAllQuery_Equals_IMP
  #define MatchAllQuery_To_String_IMP LUCY_MatchAllQuery_To_String_IMP
  #define MatchAllQuery_Make_Compiler_IMP LUCY_MatchAllQuery_Make_Compiler_IMP
  #define MatchAllQuery_To_Host LUCY_MatchAllQuery_To_Host
  #define MatchAllQuery_To_Host_t LUCY_MatchAllQuery_To_Host_t
  #define MatchAllQuery_Clone LUCY_MatchAllQuery_Clone
  #define MatchAllQuery_Clone_t LUCY_MatchAllQuery_Clone_t
  #define MatchAllQuery_Equals LUCY_MatchAllQuery_Equals
  #define MatchAllQuery_Equals_t LUCY_MatchAllQuery_Equals_t
  #define MatchAllQuery_Compare_To LUCY_MatchAllQuery_Compare_To
  #define MatchAllQuery_Compare_To_t LUCY_MatchAllQuery_Compare_To_t
  #define MatchAllQuery_Destroy LUCY_MatchAllQuery_Destroy
  #define MatchAllQuery_Destroy_t LUCY_MatchAllQuery_Destroy_t
  #define MatchAllQuery_To_String LUCY_MatchAllQuery_To_String
  #define MatchAllQuery_To_String_t LUCY_MatchAllQuery_To_String_t
  #define MatchAllQuery_Make_Compiler LUCY_MatchAllQuery_Make_Compiler
  #define MatchAllQuery_Make_Compiler_t LUCY_MatchAllQuery_Make_Compiler_t
  #define MatchAllQuery_Set_Boost LUCY_MatchAllQuery_Set_Boost
  #define MatchAllQuery_Set_Boost_t LUCY_MatchAllQuery_Set_Boost_t
  #define MatchAllQuery_Get_Boost LUCY_MatchAllQuery_Get_Boost
  #define MatchAllQuery_Get_Boost_t LUCY_MatchAllQuery_Get_Boost_t
  #define MatchAllQuery_Serialize LUCY_MatchAllQuery_Serialize
  #define MatchAllQuery_Serialize_t LUCY_MatchAllQuery_Serialize_t
  #define MatchAllQuery_Deserialize LUCY_MatchAllQuery_Deserialize
  #define MatchAllQuery_Deserialize_t LUCY_MatchAllQuery_Deserialize_t
  #define MatchAllQuery_Dump LUCY_MatchAllQuery_Dump
  #define MatchAllQuery_Dump_t LUCY_MatchAllQuery_Dump_t
  #define MatchAllQuery_Load LUCY_MatchAllQuery_Load
  #define MatchAllQuery_Load_t LUCY_MatchAllQuery_Load_t
#endif /* LUCY_USE_SHORT_NAMES */



/* Include the header for this class's parent. 
 */

#include "Lucy/Search/Compiler.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_MATCHALLCOMPILER
extern uint32_t lucy_MatchAllCompiler_IVARS_OFFSET;
typedef struct lucy_MatchAllCompilerIVARS lucy_MatchAllCompilerIVARS;
static CFISH_INLINE lucy_MatchAllCompilerIVARS*
lucy_MatchAllCompiler_IVARS(lucy_MatchAllCompiler *self) {
   char *ptr = (char*)self + lucy_MatchAllCompiler_IVARS_OFFSET;
   return (lucy_MatchAllCompilerIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define MatchAllCompilerIVARS lucy_MatchAllCompilerIVARS
  #define MatchAllCompiler_IVARS lucy_MatchAllCompiler_IVARS
#endif

struct lucy_MatchAllCompilerIVARS {
    float boost;
    lucy_Query* parent;
    lucy_Similarity* sim;
};

#endif /* C_LUCY_MATCHALLCOMPILER */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_MatchAllCompiler*
lucy_MatchAllCompiler_new(lucy_MatchAllQuery* parent, lucy_Searcher* searcher, float boost);

LUCY_VISIBLE lucy_MatchAllCompiler*
lucy_MatchAllCompiler_init(lucy_MatchAllCompiler* self, lucy_MatchAllQuery* parent, lucy_Searcher* searcher, float boost);

lucy_Matcher*
LUCY_MatchAllCompiler_Make_Matcher_IMP(lucy_MatchAllCompiler* self, lucy_SegReader* reader, bool need_score);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_MatchAllCompiler_To_Host_t)(lucy_MatchAllCompiler* self, void* vcache);

typedef cfish_Obj*
(*LUCY_MatchAllCompiler_Clone_t)(lucy_MatchAllCompiler* self);

typedef bool
(*LUCY_MatchAllCompiler_Equals_t)(lucy_MatchAllCompiler* self, cfish_Obj* other);

typedef int32_t
(*LUCY_MatchAllCompiler_Compare_To_t)(lucy_MatchAllCompiler* self, cfish_Obj* other);

typedef void
(*LUCY_MatchAllCompiler_Destroy_t)(lucy_MatchAllCompiler* self);

typedef cfish_String*
(*LUCY_MatchAllCompiler_To_String_t)(lucy_MatchAllCompiler* self);

typedef lucy_Compiler*
(*LUCY_MatchAllCompiler_Make_Compiler_t)(lucy_MatchAllCompiler* self, lucy_Searcher* searcher, float boost, bool subordinate);

typedef void
(*LUCY_MatchAllCompiler_Set_Boost_t)(lucy_MatchAllCompiler* self, float boost);

typedef float
(*LUCY_MatchAllCompiler_Get_Boost_t)(lucy_MatchAllCompiler* self);

typedef void
(*LUCY_MatchAllCompiler_Serialize_t)(lucy_MatchAllCompiler* self, lucy_OutStream* outstream);

typedef lucy_Compiler*
(*LUCY_MatchAllCompiler_Deserialize_t)(lucy_MatchAllCompiler* self, lucy_InStream* instream);

typedef cfish_Obj*
(*LUCY_MatchAllCompiler_Dump_t)(lucy_MatchAllCompiler* self);

typedef cfish_Obj*
(*LUCY_MatchAllCompiler_Load_t)(lucy_MatchAllCompiler* self, cfish_Obj* dump);

typedef lucy_Matcher*
(*LUCY_MatchAllCompiler_Make_Matcher_t)(lucy_MatchAllCompiler* self, lucy_SegReader* reader, bool need_score);

typedef float
(*LUCY_MatchAllCompiler_Get_Weight_t)(lucy_MatchAllCompiler* self);

typedef lucy_Similarity*
(*LUCY_MatchAllCompiler_Get_Similarity_t)(lucy_MatchAllCompiler* self);

typedef lucy_Query*
(*LUCY_MatchAllCompiler_Get_Parent_t)(lucy_MatchAllCompiler* self);

typedef float
(*LUCY_MatchAllCompiler_Sum_Of_Squared_Weights_t)(lucy_MatchAllCompiler* self);

typedef void
(*LUCY_MatchAllCompiler_Apply_Norm_Factor_t)(lucy_MatchAllCompiler* self, float factor);

typedef void
(*LUCY_MatchAllCompiler_Normalize_t)(lucy_MatchAllCompiler* self);

typedef cfish_Vector*
(*LUCY_MatchAllCompiler_Highlight_Spans_t)(lucy_MatchAllCompiler* self, lucy_Searcher* searcher, lucy_DocVector* doc_vec, cfish_String* field);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_MatchAllCompiler_get_class(lucy_MatchAllCompiler *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_MatchAllCompiler_get_class_name(lucy_MatchAllCompiler *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_MatchAllCompiler_is_a(lucy_MatchAllCompiler *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_MatchAllCompiler_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_MatchAllCompiler_To_Host(lucy_MatchAllCompiler* self, void* vcache) {
    const LUCY_MatchAllCompiler_To_Host_t method = (LUCY_MatchAllCompiler_To_Host_t)cfish_obj_method(self, LUCY_MatchAllCompiler_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_MatchAllCompiler_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_MatchAllCompiler_Clone(lucy_MatchAllCompiler* self) {
    const LUCY_MatchAllCompiler_Clone_t method = (LUCY_MatchAllCompiler_Clone_t)cfish_obj_method(self, LUCY_MatchAllCompiler_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_MatchAllCompiler_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_MatchAllCompiler_Equals(lucy_MatchAllCompiler* self, cfish_Obj* other) {
    const LUCY_MatchAllCompiler_Equals_t method = (LUCY_MatchAllCompiler_Equals_t)cfish_obj_method(self, LUCY_MatchAllCompiler_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_MatchAllCompiler_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_MatchAllCompiler_Compare_To(lucy_MatchAllCompiler* self, cfish_Obj* other) {
    const LUCY_MatchAllCompiler_Compare_To_t method = (LUCY_MatchAllCompiler_Compare_To_t)cfish_obj_method(self, LUCY_MatchAllCompiler_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_MatchAllCompiler_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_MatchAllCompiler_Destroy(lucy_MatchAllCompiler* self) {
    const LUCY_MatchAllCompiler_Destroy_t method = (LUCY_MatchAllCompiler_Destroy_t)cfish_obj_method(self, LUCY_MatchAllCompiler_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_MatchAllCompiler_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_MatchAllCompiler_To_String(lucy_MatchAllCompiler* self) {
    const LUCY_MatchAllCompiler_To_String_t method = (LUCY_MatchAllCompiler_To_String_t)cfish_obj_method(self, LUCY_MatchAllCompiler_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_MatchAllCompiler_Make_Compiler_OFFSET;
static CFISH_INLINE lucy_Compiler*
LUCY_MatchAllCompiler_Make_Compiler(lucy_MatchAllCompiler* self, lucy_Searcher* searcher, float boost, bool subordinate) {
    const LUCY_MatchAllCompiler_Make_Compiler_t method = (LUCY_MatchAllCompiler_Make_Compiler_t)cfish_obj_method(self, LUCY_MatchAllCompiler_Make_Compiler_OFFSET);
    return method(self, searcher, boost, subordinate);
}

extern LUCY_VISIBLE uint32_t LUCY_MatchAllCompiler_Set_Boost_OFFSET;
static CFISH_INLINE void
LUCY_MatchAllCompiler_Set_Boost(lucy_MatchAllCompiler* self, float boost) {
    const LUCY_MatchAllCompiler_Set_Boost_t method = (LUCY_MatchAllCompiler_Set_Boost_t)cfish_obj_method(self, LUCY_MatchAllCompiler_Set_Boost_OFFSET);
    method(self, boost);
}

extern LUCY_VISIBLE uint32_t LUCY_MatchAllCompiler_Get_Boost_OFFSET;
static CFISH_INLINE float
LUCY_MatchAllCompiler_Get_Boost(lucy_MatchAllCompiler* self) {
    const LUCY_MatchAllCompiler_Get_Boost_t method = (LUCY_MatchAllCompiler_Get_Boost_t)cfish_obj_method(self, LUCY_MatchAllCompiler_Get_Boost_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_MatchAllCompiler_Serialize_OFFSET;
static CFISH_INLINE void
LUCY_MatchAllCompiler_Serialize(lucy_MatchAllCompiler* self, lucy_OutStream* outstream) {
    const LUCY_MatchAllCompiler_Serialize_t method = (LUCY_MatchAllCompiler_Serialize_t)cfish_obj_method(self, LUCY_MatchAllCompiler_Serialize_OFFSET);
    method(self, outstream);
}

extern LUCY_VISIBLE uint32_t LUCY_MatchAllCompiler_Deserialize_OFFSET;
static CFISH_INLINE lucy_Compiler*
LUCY_MatchAllCompiler_Deserialize(lucy_MatchAllCompiler* self, lucy_InStream* instream) {
    const LUCY_MatchAllCompiler_Deserialize_t method = (LUCY_MatchAllCompiler_Deserialize_t)cfish_obj_method(self, LUCY_MatchAllCompiler_Deserialize_OFFSET);
    return method(self, instream);
}

extern LUCY_VISIBLE uint32_t LUCY_MatchAllCompiler_Dump_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_MatchAllCompiler_Dump(lucy_MatchAllCompiler* self) {
    const LUCY_MatchAllCompiler_Dump_t method = (LUCY_MatchAllCompiler_Dump_t)cfish_obj_method(self, LUCY_MatchAllCompiler_Dump_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_MatchAllCompiler_Load_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_MatchAllCompiler_Load(lucy_MatchAllCompiler* self, cfish_Obj* dump) {
    const LUCY_MatchAllCompiler_Load_t method = (LUCY_MatchAllCompiler_Load_t)cfish_obj_method(self, LUCY_MatchAllCompiler_Load_OFFSET);
    return method(self, dump);
}

extern LUCY_VISIBLE uint32_t LUCY_MatchAllCompiler_Make_Matcher_OFFSET;
static CFISH_INLINE lucy_Matcher*
LUCY_MatchAllCompiler_Make_Matcher(lucy_MatchAllCompiler* self, lucy_SegReader* reader, bool need_score) {
    const LUCY_MatchAllCompiler_Make_Matcher_t method = (LUCY_MatchAllCompiler_Make_Matcher_t)cfish_obj_method(self, LUCY_MatchAllCompiler_Make_Matcher_OFFSET);
    return method(self, reader, need_score);
}

extern LUCY_VISIBLE uint32_t LUCY_MatchAllCompiler_Get_Weight_OFFSET;
static CFISH_INLINE float
LUCY_MatchAllCompiler_Get_Weight(lucy_MatchAllCompiler* self) {
    const LUCY_MatchAllCompiler_Get_Weight_t method = (LUCY_MatchAllCompiler_Get_Weight_t)cfish_obj_method(self, LUCY_MatchAllCompiler_Get_Weight_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_MatchAllCompiler_Get_Similarity_OFFSET;
static CFISH_INLINE lucy_Similarity*
LUCY_MatchAllCompiler_Get_Similarity(lucy_MatchAllCompiler* self) {
    const LUCY_MatchAllCompiler_Get_Similarity_t method = (LUCY_MatchAllCompiler_Get_Similarity_t)cfish_obj_method(self, LUCY_MatchAllCompiler_Get_Similarity_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_MatchAllCompiler_Get_Parent_OFFSET;
static CFISH_INLINE lucy_Query*
LUCY_MatchAllCompiler_Get_Parent(lucy_MatchAllCompiler* self) {
    const LUCY_MatchAllCompiler_Get_Parent_t method = (LUCY_MatchAllCompiler_Get_Parent_t)cfish_obj_method(self, LUCY_MatchAllCompiler_Get_Parent_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_MatchAllCompiler_Sum_Of_Squared_Weights_OFFSET;
static CFISH_INLINE float
LUCY_MatchAllCompiler_Sum_Of_Squared_Weights(lucy_MatchAllCompiler* self) {
    const LUCY_MatchAllCompiler_Sum_Of_Squared_Weights_t method = (LUCY_MatchAllCompiler_Sum_Of_Squared_Weights_t)cfish_obj_method(self, LUCY_MatchAllCompiler_Sum_Of_Squared_Weights_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_MatchAllCompiler_Apply_Norm_Factor_OFFSET;
static CFISH_INLINE void
LUCY_MatchAllCompiler_Apply_Norm_Factor(lucy_MatchAllCompiler* self, float factor) {
    const LUCY_MatchAllCompiler_Apply_Norm_Factor_t method = (LUCY_MatchAllCompiler_Apply_Norm_Factor_t)cfish_obj_method(self, LUCY_MatchAllCompiler_Apply_Norm_Factor_OFFSET);
    method(self, factor);
}

extern LUCY_VISIBLE uint32_t LUCY_MatchAllCompiler_Normalize_OFFSET;
static CFISH_INLINE void
LUCY_MatchAllCompiler_Normalize(lucy_MatchAllCompiler* self) {
    const LUCY_MatchAllCompiler_Normalize_t method = (LUCY_MatchAllCompiler_Normalize_t)cfish_obj_method(self, LUCY_MatchAllCompiler_Normalize_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_MatchAllCompiler_Highlight_Spans_OFFSET;
static CFISH_INLINE cfish_Vector*
LUCY_MatchAllCompiler_Highlight_Spans(lucy_MatchAllCompiler* self, lucy_Searcher* searcher, lucy_DocVector* doc_vec, cfish_String* field) {
    const LUCY_MatchAllCompiler_Highlight_Spans_t method = (LUCY_MatchAllCompiler_Highlight_Spans_t)cfish_obj_method(self, LUCY_MatchAllCompiler_Highlight_Spans_OFFSET);
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
  #define MatchAllCompiler lucy_MatchAllCompiler
  #define MATCHALLCOMPILER LUCY_MATCHALLCOMPILER
  #define MatchAllCompiler_new lucy_MatchAllCompiler_new
  #define MatchAllCompiler_init lucy_MatchAllCompiler_init
  #define MatchAllCompiler_get_class lucy_MatchAllCompiler_get_class
  #define MatchAllCompiler_get_class_name lucy_MatchAllCompiler_get_class_name
  #define MatchAllCompiler_is_a lucy_MatchAllCompiler_is_a
  #define MatchAllCompiler_Make_Matcher_IMP LUCY_MatchAllCompiler_Make_Matcher_IMP
  #define MatchAllCompiler_To_Host LUCY_MatchAllCompiler_To_Host
  #define MatchAllCompiler_To_Host_t LUCY_MatchAllCompiler_To_Host_t
  #define MatchAllCompiler_Clone LUCY_MatchAllCompiler_Clone
  #define MatchAllCompiler_Clone_t LUCY_MatchAllCompiler_Clone_t
  #define MatchAllCompiler_Equals LUCY_MatchAllCompiler_Equals
  #define MatchAllCompiler_Equals_t LUCY_MatchAllCompiler_Equals_t
  #define MatchAllCompiler_Compare_To LUCY_MatchAllCompiler_Compare_To
  #define MatchAllCompiler_Compare_To_t LUCY_MatchAllCompiler_Compare_To_t
  #define MatchAllCompiler_Destroy LUCY_MatchAllCompiler_Destroy
  #define MatchAllCompiler_Destroy_t LUCY_MatchAllCompiler_Destroy_t
  #define MatchAllCompiler_To_String LUCY_MatchAllCompiler_To_String
  #define MatchAllCompiler_To_String_t LUCY_MatchAllCompiler_To_String_t
  #define MatchAllCompiler_Make_Compiler LUCY_MatchAllCompiler_Make_Compiler
  #define MatchAllCompiler_Make_Compiler_t LUCY_MatchAllCompiler_Make_Compiler_t
  #define MatchAllCompiler_Set_Boost LUCY_MatchAllCompiler_Set_Boost
  #define MatchAllCompiler_Set_Boost_t LUCY_MatchAllCompiler_Set_Boost_t
  #define MatchAllCompiler_Get_Boost LUCY_MatchAllCompiler_Get_Boost
  #define MatchAllCompiler_Get_Boost_t LUCY_MatchAllCompiler_Get_Boost_t
  #define MatchAllCompiler_Serialize LUCY_MatchAllCompiler_Serialize
  #define MatchAllCompiler_Serialize_t LUCY_MatchAllCompiler_Serialize_t
  #define MatchAllCompiler_Deserialize LUCY_MatchAllCompiler_Deserialize
  #define MatchAllCompiler_Deserialize_t LUCY_MatchAllCompiler_Deserialize_t
  #define MatchAllCompiler_Dump LUCY_MatchAllCompiler_Dump
  #define MatchAllCompiler_Dump_t LUCY_MatchAllCompiler_Dump_t
  #define MatchAllCompiler_Load LUCY_MatchAllCompiler_Load
  #define MatchAllCompiler_Load_t LUCY_MatchAllCompiler_Load_t
  #define MatchAllCompiler_Make_Matcher LUCY_MatchAllCompiler_Make_Matcher
  #define MatchAllCompiler_Make_Matcher_t LUCY_MatchAllCompiler_Make_Matcher_t
  #define MatchAllCompiler_Get_Weight LUCY_MatchAllCompiler_Get_Weight
  #define MatchAllCompiler_Get_Weight_t LUCY_MatchAllCompiler_Get_Weight_t
  #define MatchAllCompiler_Get_Similarity LUCY_MatchAllCompiler_Get_Similarity
  #define MatchAllCompiler_Get_Similarity_t LUCY_MatchAllCompiler_Get_Similarity_t
  #define MatchAllCompiler_Get_Parent LUCY_MatchAllCompiler_Get_Parent
  #define MatchAllCompiler_Get_Parent_t LUCY_MatchAllCompiler_Get_Parent_t
  #define MatchAllCompiler_Sum_Of_Squared_Weights LUCY_MatchAllCompiler_Sum_Of_Squared_Weights
  #define MatchAllCompiler_Sum_Of_Squared_Weights_t LUCY_MatchAllCompiler_Sum_Of_Squared_Weights_t
  #define MatchAllCompiler_Apply_Norm_Factor LUCY_MatchAllCompiler_Apply_Norm_Factor
  #define MatchAllCompiler_Apply_Norm_Factor_t LUCY_MatchAllCompiler_Apply_Norm_Factor_t
  #define MatchAllCompiler_Normalize LUCY_MatchAllCompiler_Normalize
  #define MatchAllCompiler_Normalize_t LUCY_MatchAllCompiler_Normalize_t
  #define MatchAllCompiler_Highlight_Spans LUCY_MatchAllCompiler_Highlight_Spans
  #define MatchAllCompiler_Highlight_Spans_t LUCY_MatchAllCompiler_Highlight_Spans_t
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_SEARCH_MATCHALLQUERY */



