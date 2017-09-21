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


#ifndef H_LUCY_SEARCH_REQUIREDOPTIONALQUERY
#define H_LUCY_SEARCH_REQUIREDOPTIONALQUERY 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Lucy/Search/PolyQuery.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_REQUIREDOPTIONALQUERY
extern uint32_t lucy_ReqOptQuery_IVARS_OFFSET;
typedef struct lucy_RequiredOptionalQueryIVARS lucy_RequiredOptionalQueryIVARS;
static CFISH_INLINE lucy_RequiredOptionalQueryIVARS*
lucy_ReqOptQuery_IVARS(lucy_RequiredOptionalQuery *self) {
   char *ptr = (char*)self + lucy_ReqOptQuery_IVARS_OFFSET;
   return (lucy_RequiredOptionalQueryIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define RequiredOptionalQueryIVARS lucy_RequiredOptionalQueryIVARS
  #define ReqOptQuery_IVARS lucy_ReqOptQuery_IVARS
#endif

struct lucy_RequiredOptionalQueryIVARS {
    float boost;
    cfish_Vector* children;
};

#endif /* C_LUCY_REQUIREDOPTIONALQUERY */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_RequiredOptionalQuery*
lucy_ReqOptQuery_new(lucy_Query* required_query, lucy_Query* optional_query);

LUCY_VISIBLE lucy_RequiredOptionalQuery*
lucy_ReqOptQuery_init(lucy_RequiredOptionalQuery* self, lucy_Query* required_query, lucy_Query* optional_query);

lucy_Query*
LUCY_ReqOptQuery_Get_Required_Query_IMP(lucy_RequiredOptionalQuery* self);

void
LUCY_ReqOptQuery_Set_Required_Query_IMP(lucy_RequiredOptionalQuery* self, lucy_Query* required_query);

lucy_Query*
LUCY_ReqOptQuery_Get_Optional_Query_IMP(lucy_RequiredOptionalQuery* self);

void
LUCY_ReqOptQuery_Set_Optional_Query_IMP(lucy_RequiredOptionalQuery* self, lucy_Query* optional_query);

lucy_Compiler*
LUCY_ReqOptQuery_Make_Compiler_IMP(lucy_RequiredOptionalQuery* self, lucy_Searcher* searcher, float boost, bool subordinate);

cfish_String*
LUCY_ReqOptQuery_To_String_IMP(lucy_RequiredOptionalQuery* self);

bool
LUCY_ReqOptQuery_Equals_IMP(lucy_RequiredOptionalQuery* self, cfish_Obj* other);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_ReqOptQuery_To_Host_t)(lucy_RequiredOptionalQuery* self, void* vcache);

typedef cfish_Obj*
(*LUCY_ReqOptQuery_Clone_t)(lucy_RequiredOptionalQuery* self);

typedef bool
(*LUCY_ReqOptQuery_Equals_t)(lucy_RequiredOptionalQuery* self, cfish_Obj* other);

typedef int32_t
(*LUCY_ReqOptQuery_Compare_To_t)(lucy_RequiredOptionalQuery* self, cfish_Obj* other);

typedef void
(*LUCY_ReqOptQuery_Destroy_t)(lucy_RequiredOptionalQuery* self);

typedef cfish_String*
(*LUCY_ReqOptQuery_To_String_t)(lucy_RequiredOptionalQuery* self);

typedef lucy_Compiler*
(*LUCY_ReqOptQuery_Make_Compiler_t)(lucy_RequiredOptionalQuery* self, lucy_Searcher* searcher, float boost, bool subordinate);

typedef void
(*LUCY_ReqOptQuery_Set_Boost_t)(lucy_RequiredOptionalQuery* self, float boost);

typedef float
(*LUCY_ReqOptQuery_Get_Boost_t)(lucy_RequiredOptionalQuery* self);

typedef void
(*LUCY_ReqOptQuery_Serialize_t)(lucy_RequiredOptionalQuery* self, lucy_OutStream* outstream);

typedef lucy_PolyQuery*
(*LUCY_ReqOptQuery_Deserialize_t)(lucy_RequiredOptionalQuery* self, lucy_InStream* instream);

typedef cfish_Obj*
(*LUCY_ReqOptQuery_Dump_t)(lucy_RequiredOptionalQuery* self);

typedef cfish_Obj*
(*LUCY_ReqOptQuery_Load_t)(lucy_RequiredOptionalQuery* self, cfish_Obj* dump);

typedef void
(*LUCY_ReqOptQuery_Add_Child_t)(lucy_RequiredOptionalQuery* self, lucy_Query* query);

typedef void
(*LUCY_ReqOptQuery_Set_Children_t)(lucy_RequiredOptionalQuery* self, cfish_Vector* children);

typedef cfish_Vector*
(*LUCY_ReqOptQuery_Get_Children_t)(lucy_RequiredOptionalQuery* self);

typedef lucy_Query*
(*LUCY_ReqOptQuery_Get_Required_Query_t)(lucy_RequiredOptionalQuery* self);

typedef void
(*LUCY_ReqOptQuery_Set_Required_Query_t)(lucy_RequiredOptionalQuery* self, lucy_Query* required_query);

typedef lucy_Query*
(*LUCY_ReqOptQuery_Get_Optional_Query_t)(lucy_RequiredOptionalQuery* self);

typedef void
(*LUCY_ReqOptQuery_Set_Optional_Query_t)(lucy_RequiredOptionalQuery* self, lucy_Query* optional_query);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_ReqOptQuery_get_class(lucy_RequiredOptionalQuery *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_ReqOptQuery_get_class_name(lucy_RequiredOptionalQuery *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_ReqOptQuery_is_a(lucy_RequiredOptionalQuery *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_ReqOptQuery_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_ReqOptQuery_To_Host(lucy_RequiredOptionalQuery* self, void* vcache) {
    const LUCY_ReqOptQuery_To_Host_t method = (LUCY_ReqOptQuery_To_Host_t)cfish_obj_method(self, LUCY_ReqOptQuery_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_ReqOptQuery_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_ReqOptQuery_Clone(lucy_RequiredOptionalQuery* self) {
    const LUCY_ReqOptQuery_Clone_t method = (LUCY_ReqOptQuery_Clone_t)cfish_obj_method(self, LUCY_ReqOptQuery_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ReqOptQuery_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_ReqOptQuery_Equals(lucy_RequiredOptionalQuery* self, cfish_Obj* other) {
    const LUCY_ReqOptQuery_Equals_t method = (LUCY_ReqOptQuery_Equals_t)cfish_obj_method(self, LUCY_ReqOptQuery_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_ReqOptQuery_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_ReqOptQuery_Compare_To(lucy_RequiredOptionalQuery* self, cfish_Obj* other) {
    const LUCY_ReqOptQuery_Compare_To_t method = (LUCY_ReqOptQuery_Compare_To_t)cfish_obj_method(self, LUCY_ReqOptQuery_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_ReqOptQuery_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_ReqOptQuery_Destroy(lucy_RequiredOptionalQuery* self) {
    const LUCY_ReqOptQuery_Destroy_t method = (LUCY_ReqOptQuery_Destroy_t)cfish_obj_method(self, LUCY_ReqOptQuery_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ReqOptQuery_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_ReqOptQuery_To_String(lucy_RequiredOptionalQuery* self) {
    const LUCY_ReqOptQuery_To_String_t method = (LUCY_ReqOptQuery_To_String_t)cfish_obj_method(self, LUCY_ReqOptQuery_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ReqOptQuery_Make_Compiler_OFFSET;
static CFISH_INLINE lucy_Compiler*
LUCY_ReqOptQuery_Make_Compiler(lucy_RequiredOptionalQuery* self, lucy_Searcher* searcher, float boost, bool subordinate) {
    const LUCY_ReqOptQuery_Make_Compiler_t method = (LUCY_ReqOptQuery_Make_Compiler_t)cfish_obj_method(self, LUCY_ReqOptQuery_Make_Compiler_OFFSET);
    return method(self, searcher, boost, subordinate);
}

extern LUCY_VISIBLE uint32_t LUCY_ReqOptQuery_Set_Boost_OFFSET;
static CFISH_INLINE void
LUCY_ReqOptQuery_Set_Boost(lucy_RequiredOptionalQuery* self, float boost) {
    const LUCY_ReqOptQuery_Set_Boost_t method = (LUCY_ReqOptQuery_Set_Boost_t)cfish_obj_method(self, LUCY_ReqOptQuery_Set_Boost_OFFSET);
    method(self, boost);
}

extern LUCY_VISIBLE uint32_t LUCY_ReqOptQuery_Get_Boost_OFFSET;
static CFISH_INLINE float
LUCY_ReqOptQuery_Get_Boost(lucy_RequiredOptionalQuery* self) {
    const LUCY_ReqOptQuery_Get_Boost_t method = (LUCY_ReqOptQuery_Get_Boost_t)cfish_obj_method(self, LUCY_ReqOptQuery_Get_Boost_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ReqOptQuery_Serialize_OFFSET;
static CFISH_INLINE void
LUCY_ReqOptQuery_Serialize(lucy_RequiredOptionalQuery* self, lucy_OutStream* outstream) {
    const LUCY_ReqOptQuery_Serialize_t method = (LUCY_ReqOptQuery_Serialize_t)cfish_obj_method(self, LUCY_ReqOptQuery_Serialize_OFFSET);
    method(self, outstream);
}

extern LUCY_VISIBLE uint32_t LUCY_ReqOptQuery_Deserialize_OFFSET;
static CFISH_INLINE lucy_PolyQuery*
LUCY_ReqOptQuery_Deserialize(lucy_RequiredOptionalQuery* self, lucy_InStream* instream) {
    const LUCY_ReqOptQuery_Deserialize_t method = (LUCY_ReqOptQuery_Deserialize_t)cfish_obj_method(self, LUCY_ReqOptQuery_Deserialize_OFFSET);
    return method(self, instream);
}

extern LUCY_VISIBLE uint32_t LUCY_ReqOptQuery_Dump_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_ReqOptQuery_Dump(lucy_RequiredOptionalQuery* self) {
    const LUCY_ReqOptQuery_Dump_t method = (LUCY_ReqOptQuery_Dump_t)cfish_obj_method(self, LUCY_ReqOptQuery_Dump_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ReqOptQuery_Load_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_ReqOptQuery_Load(lucy_RequiredOptionalQuery* self, cfish_Obj* dump) {
    const LUCY_ReqOptQuery_Load_t method = (LUCY_ReqOptQuery_Load_t)cfish_obj_method(self, LUCY_ReqOptQuery_Load_OFFSET);
    return method(self, dump);
}

extern LUCY_VISIBLE uint32_t LUCY_ReqOptQuery_Add_Child_OFFSET;
static CFISH_INLINE void
LUCY_ReqOptQuery_Add_Child(lucy_RequiredOptionalQuery* self, lucy_Query* query) {
    const LUCY_ReqOptQuery_Add_Child_t method = (LUCY_ReqOptQuery_Add_Child_t)cfish_obj_method(self, LUCY_ReqOptQuery_Add_Child_OFFSET);
    method(self, query);
}

extern LUCY_VISIBLE uint32_t LUCY_ReqOptQuery_Set_Children_OFFSET;
static CFISH_INLINE void
LUCY_ReqOptQuery_Set_Children(lucy_RequiredOptionalQuery* self, cfish_Vector* children) {
    const LUCY_ReqOptQuery_Set_Children_t method = (LUCY_ReqOptQuery_Set_Children_t)cfish_obj_method(self, LUCY_ReqOptQuery_Set_Children_OFFSET);
    method(self, children);
}

extern LUCY_VISIBLE uint32_t LUCY_ReqOptQuery_Get_Children_OFFSET;
static CFISH_INLINE cfish_Vector*
LUCY_ReqOptQuery_Get_Children(lucy_RequiredOptionalQuery* self) {
    const LUCY_ReqOptQuery_Get_Children_t method = (LUCY_ReqOptQuery_Get_Children_t)cfish_obj_method(self, LUCY_ReqOptQuery_Get_Children_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ReqOptQuery_Get_Required_Query_OFFSET;
static CFISH_INLINE lucy_Query*
LUCY_ReqOptQuery_Get_Required_Query(lucy_RequiredOptionalQuery* self) {
    const LUCY_ReqOptQuery_Get_Required_Query_t method = (LUCY_ReqOptQuery_Get_Required_Query_t)cfish_obj_method(self, LUCY_ReqOptQuery_Get_Required_Query_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ReqOptQuery_Set_Required_Query_OFFSET;
static CFISH_INLINE void
LUCY_ReqOptQuery_Set_Required_Query(lucy_RequiredOptionalQuery* self, lucy_Query* required_query) {
    const LUCY_ReqOptQuery_Set_Required_Query_t method = (LUCY_ReqOptQuery_Set_Required_Query_t)cfish_obj_method(self, LUCY_ReqOptQuery_Set_Required_Query_OFFSET);
    method(self, required_query);
}

extern LUCY_VISIBLE uint32_t LUCY_ReqOptQuery_Get_Optional_Query_OFFSET;
static CFISH_INLINE lucy_Query*
LUCY_ReqOptQuery_Get_Optional_Query(lucy_RequiredOptionalQuery* self) {
    const LUCY_ReqOptQuery_Get_Optional_Query_t method = (LUCY_ReqOptQuery_Get_Optional_Query_t)cfish_obj_method(self, LUCY_ReqOptQuery_Get_Optional_Query_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ReqOptQuery_Set_Optional_Query_OFFSET;
static CFISH_INLINE void
LUCY_ReqOptQuery_Set_Optional_Query(lucy_RequiredOptionalQuery* self, lucy_Query* optional_query) {
    const LUCY_ReqOptQuery_Set_Optional_Query_t method = (LUCY_ReqOptQuery_Set_Optional_Query_t)cfish_obj_method(self, LUCY_ReqOptQuery_Set_Optional_Query_OFFSET);
    method(self, optional_query);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#define Lucy_ReqOptQuery_Get_Required_Query_OVERRIDE NULL
#define Lucy_ReqOptQuery_Set_Required_Query_OVERRIDE NULL
#define Lucy_ReqOptQuery_Get_Optional_Query_OVERRIDE NULL
#define Lucy_ReqOptQuery_Set_Optional_Query_OVERRIDE NULL
#else
lucy_Query*
Lucy_ReqOptQuery_Get_Required_Query_OVERRIDE(lucy_RequiredOptionalQuery* self);
void
Lucy_ReqOptQuery_Set_Required_Query_OVERRIDE(lucy_RequiredOptionalQuery* self, lucy_Query* required_query);
lucy_Query*
Lucy_ReqOptQuery_Get_Optional_Query_OVERRIDE(lucy_RequiredOptionalQuery* self);
void
Lucy_ReqOptQuery_Set_Optional_Query_OVERRIDE(lucy_RequiredOptionalQuery* self, lucy_Query* optional_query);
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define RequiredOptionalQuery lucy_RequiredOptionalQuery
  #define REQUIREDOPTIONALQUERY LUCY_REQUIREDOPTIONALQUERY
  #define ReqOptQuery_new lucy_ReqOptQuery_new
  #define ReqOptQuery_init lucy_ReqOptQuery_init
  #define ReqOptQuery_get_class lucy_ReqOptQuery_get_class
  #define ReqOptQuery_get_class_name lucy_ReqOptQuery_get_class_name
  #define ReqOptQuery_is_a lucy_ReqOptQuery_is_a
  #define ReqOptQuery_Get_Required_Query_IMP LUCY_ReqOptQuery_Get_Required_Query_IMP
  #define ReqOptQuery_Set_Required_Query_IMP LUCY_ReqOptQuery_Set_Required_Query_IMP
  #define ReqOptQuery_Get_Optional_Query_IMP LUCY_ReqOptQuery_Get_Optional_Query_IMP
  #define ReqOptQuery_Set_Optional_Query_IMP LUCY_ReqOptQuery_Set_Optional_Query_IMP
  #define ReqOptQuery_Make_Compiler_IMP LUCY_ReqOptQuery_Make_Compiler_IMP
  #define ReqOptQuery_To_String_IMP LUCY_ReqOptQuery_To_String_IMP
  #define ReqOptQuery_Equals_IMP LUCY_ReqOptQuery_Equals_IMP
  #define ReqOptQuery_To_Host LUCY_ReqOptQuery_To_Host
  #define ReqOptQuery_To_Host_t LUCY_ReqOptQuery_To_Host_t
  #define ReqOptQuery_Clone LUCY_ReqOptQuery_Clone
  #define ReqOptQuery_Clone_t LUCY_ReqOptQuery_Clone_t
  #define ReqOptQuery_Equals LUCY_ReqOptQuery_Equals
  #define ReqOptQuery_Equals_t LUCY_ReqOptQuery_Equals_t
  #define ReqOptQuery_Compare_To LUCY_ReqOptQuery_Compare_To
  #define ReqOptQuery_Compare_To_t LUCY_ReqOptQuery_Compare_To_t
  #define ReqOptQuery_Destroy LUCY_ReqOptQuery_Destroy
  #define ReqOptQuery_Destroy_t LUCY_ReqOptQuery_Destroy_t
  #define ReqOptQuery_To_String LUCY_ReqOptQuery_To_String
  #define ReqOptQuery_To_String_t LUCY_ReqOptQuery_To_String_t
  #define ReqOptQuery_Make_Compiler LUCY_ReqOptQuery_Make_Compiler
  #define ReqOptQuery_Make_Compiler_t LUCY_ReqOptQuery_Make_Compiler_t
  #define ReqOptQuery_Set_Boost LUCY_ReqOptQuery_Set_Boost
  #define ReqOptQuery_Set_Boost_t LUCY_ReqOptQuery_Set_Boost_t
  #define ReqOptQuery_Get_Boost LUCY_ReqOptQuery_Get_Boost
  #define ReqOptQuery_Get_Boost_t LUCY_ReqOptQuery_Get_Boost_t
  #define ReqOptQuery_Serialize LUCY_ReqOptQuery_Serialize
  #define ReqOptQuery_Serialize_t LUCY_ReqOptQuery_Serialize_t
  #define ReqOptQuery_Deserialize LUCY_ReqOptQuery_Deserialize
  #define ReqOptQuery_Deserialize_t LUCY_ReqOptQuery_Deserialize_t
  #define ReqOptQuery_Dump LUCY_ReqOptQuery_Dump
  #define ReqOptQuery_Dump_t LUCY_ReqOptQuery_Dump_t
  #define ReqOptQuery_Load LUCY_ReqOptQuery_Load
  #define ReqOptQuery_Load_t LUCY_ReqOptQuery_Load_t
  #define ReqOptQuery_Add_Child LUCY_ReqOptQuery_Add_Child
  #define ReqOptQuery_Add_Child_t LUCY_ReqOptQuery_Add_Child_t
  #define ReqOptQuery_Set_Children LUCY_ReqOptQuery_Set_Children
  #define ReqOptQuery_Set_Children_t LUCY_ReqOptQuery_Set_Children_t
  #define ReqOptQuery_Get_Children LUCY_ReqOptQuery_Get_Children
  #define ReqOptQuery_Get_Children_t LUCY_ReqOptQuery_Get_Children_t
  #define ReqOptQuery_Get_Required_Query LUCY_ReqOptQuery_Get_Required_Query
  #define ReqOptQuery_Get_Required_Query_t LUCY_ReqOptQuery_Get_Required_Query_t
  #define ReqOptQuery_Set_Required_Query LUCY_ReqOptQuery_Set_Required_Query
  #define ReqOptQuery_Set_Required_Query_t LUCY_ReqOptQuery_Set_Required_Query_t
  #define ReqOptQuery_Get_Optional_Query LUCY_ReqOptQuery_Get_Optional_Query
  #define ReqOptQuery_Get_Optional_Query_t LUCY_ReqOptQuery_Get_Optional_Query_t
  #define ReqOptQuery_Set_Optional_Query LUCY_ReqOptQuery_Set_Optional_Query
  #define ReqOptQuery_Set_Optional_Query_t LUCY_ReqOptQuery_Set_Optional_Query_t
#endif /* LUCY_USE_SHORT_NAMES */



/* Include the header for this class's parent. 
 */

#include "Lucy/Search/PolyQuery.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_REQUIREDOPTIONALCOMPILER
extern uint32_t lucy_ReqOptCompiler_IVARS_OFFSET;
typedef struct lucy_RequiredOptionalCompilerIVARS lucy_RequiredOptionalCompilerIVARS;
static CFISH_INLINE lucy_RequiredOptionalCompilerIVARS*
lucy_ReqOptCompiler_IVARS(lucy_RequiredOptionalCompiler *self) {
   char *ptr = (char*)self + lucy_ReqOptCompiler_IVARS_OFFSET;
   return (lucy_RequiredOptionalCompilerIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define RequiredOptionalCompilerIVARS lucy_RequiredOptionalCompilerIVARS
  #define ReqOptCompiler_IVARS lucy_ReqOptCompiler_IVARS
#endif

struct lucy_RequiredOptionalCompilerIVARS {
    float boost;
    lucy_Query* parent;
    lucy_Similarity* sim;
    cfish_Vector* children;
};

#endif /* C_LUCY_REQUIREDOPTIONALCOMPILER */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_RequiredOptionalCompiler*
lucy_ReqOptCompiler_new(lucy_RequiredOptionalQuery* parent, lucy_Searcher* searcher, float boost);

LUCY_VISIBLE lucy_RequiredOptionalCompiler*
lucy_ReqOptCompiler_init(lucy_RequiredOptionalCompiler* self, lucy_RequiredOptionalQuery* parent, lucy_Searcher* searcher, float boost);

lucy_Matcher*
LUCY_ReqOptCompiler_Make_Matcher_IMP(lucy_RequiredOptionalCompiler* self, lucy_SegReader* reader, bool need_score);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_ReqOptCompiler_To_Host_t)(lucy_RequiredOptionalCompiler* self, void* vcache);

typedef cfish_Obj*
(*LUCY_ReqOptCompiler_Clone_t)(lucy_RequiredOptionalCompiler* self);

typedef bool
(*LUCY_ReqOptCompiler_Equals_t)(lucy_RequiredOptionalCompiler* self, cfish_Obj* other);

typedef int32_t
(*LUCY_ReqOptCompiler_Compare_To_t)(lucy_RequiredOptionalCompiler* self, cfish_Obj* other);

typedef void
(*LUCY_ReqOptCompiler_Destroy_t)(lucy_RequiredOptionalCompiler* self);

typedef cfish_String*
(*LUCY_ReqOptCompiler_To_String_t)(lucy_RequiredOptionalCompiler* self);

typedef lucy_Compiler*
(*LUCY_ReqOptCompiler_Make_Compiler_t)(lucy_RequiredOptionalCompiler* self, lucy_Searcher* searcher, float boost, bool subordinate);

typedef void
(*LUCY_ReqOptCompiler_Set_Boost_t)(lucy_RequiredOptionalCompiler* self, float boost);

typedef float
(*LUCY_ReqOptCompiler_Get_Boost_t)(lucy_RequiredOptionalCompiler* self);

typedef void
(*LUCY_ReqOptCompiler_Serialize_t)(lucy_RequiredOptionalCompiler* self, lucy_OutStream* outstream);

typedef lucy_PolyCompiler*
(*LUCY_ReqOptCompiler_Deserialize_t)(lucy_RequiredOptionalCompiler* self, lucy_InStream* instream);

typedef cfish_Obj*
(*LUCY_ReqOptCompiler_Dump_t)(lucy_RequiredOptionalCompiler* self);

typedef cfish_Obj*
(*LUCY_ReqOptCompiler_Load_t)(lucy_RequiredOptionalCompiler* self, cfish_Obj* dump);

typedef lucy_Matcher*
(*LUCY_ReqOptCompiler_Make_Matcher_t)(lucy_RequiredOptionalCompiler* self, lucy_SegReader* reader, bool need_score);

typedef float
(*LUCY_ReqOptCompiler_Get_Weight_t)(lucy_RequiredOptionalCompiler* self);

typedef lucy_Similarity*
(*LUCY_ReqOptCompiler_Get_Similarity_t)(lucy_RequiredOptionalCompiler* self);

typedef lucy_Query*
(*LUCY_ReqOptCompiler_Get_Parent_t)(lucy_RequiredOptionalCompiler* self);

typedef float
(*LUCY_ReqOptCompiler_Sum_Of_Squared_Weights_t)(lucy_RequiredOptionalCompiler* self);

typedef void
(*LUCY_ReqOptCompiler_Apply_Norm_Factor_t)(lucy_RequiredOptionalCompiler* self, float factor);

typedef void
(*LUCY_ReqOptCompiler_Normalize_t)(lucy_RequiredOptionalCompiler* self);

typedef cfish_Vector*
(*LUCY_ReqOptCompiler_Highlight_Spans_t)(lucy_RequiredOptionalCompiler* self, lucy_Searcher* searcher, lucy_DocVector* doc_vec, cfish_String* field);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_ReqOptCompiler_get_class(lucy_RequiredOptionalCompiler *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_ReqOptCompiler_get_class_name(lucy_RequiredOptionalCompiler *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_ReqOptCompiler_is_a(lucy_RequiredOptionalCompiler *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_ReqOptCompiler_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_ReqOptCompiler_To_Host(lucy_RequiredOptionalCompiler* self, void* vcache) {
    const LUCY_ReqOptCompiler_To_Host_t method = (LUCY_ReqOptCompiler_To_Host_t)cfish_obj_method(self, LUCY_ReqOptCompiler_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_ReqOptCompiler_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_ReqOptCompiler_Clone(lucy_RequiredOptionalCompiler* self) {
    const LUCY_ReqOptCompiler_Clone_t method = (LUCY_ReqOptCompiler_Clone_t)cfish_obj_method(self, LUCY_ReqOptCompiler_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ReqOptCompiler_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_ReqOptCompiler_Equals(lucy_RequiredOptionalCompiler* self, cfish_Obj* other) {
    const LUCY_ReqOptCompiler_Equals_t method = (LUCY_ReqOptCompiler_Equals_t)cfish_obj_method(self, LUCY_ReqOptCompiler_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_ReqOptCompiler_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_ReqOptCompiler_Compare_To(lucy_RequiredOptionalCompiler* self, cfish_Obj* other) {
    const LUCY_ReqOptCompiler_Compare_To_t method = (LUCY_ReqOptCompiler_Compare_To_t)cfish_obj_method(self, LUCY_ReqOptCompiler_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_ReqOptCompiler_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_ReqOptCompiler_Destroy(lucy_RequiredOptionalCompiler* self) {
    const LUCY_ReqOptCompiler_Destroy_t method = (LUCY_ReqOptCompiler_Destroy_t)cfish_obj_method(self, LUCY_ReqOptCompiler_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ReqOptCompiler_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_ReqOptCompiler_To_String(lucy_RequiredOptionalCompiler* self) {
    const LUCY_ReqOptCompiler_To_String_t method = (LUCY_ReqOptCompiler_To_String_t)cfish_obj_method(self, LUCY_ReqOptCompiler_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ReqOptCompiler_Make_Compiler_OFFSET;
static CFISH_INLINE lucy_Compiler*
LUCY_ReqOptCompiler_Make_Compiler(lucy_RequiredOptionalCompiler* self, lucy_Searcher* searcher, float boost, bool subordinate) {
    const LUCY_ReqOptCompiler_Make_Compiler_t method = (LUCY_ReqOptCompiler_Make_Compiler_t)cfish_obj_method(self, LUCY_ReqOptCompiler_Make_Compiler_OFFSET);
    return method(self, searcher, boost, subordinate);
}

extern LUCY_VISIBLE uint32_t LUCY_ReqOptCompiler_Set_Boost_OFFSET;
static CFISH_INLINE void
LUCY_ReqOptCompiler_Set_Boost(lucy_RequiredOptionalCompiler* self, float boost) {
    const LUCY_ReqOptCompiler_Set_Boost_t method = (LUCY_ReqOptCompiler_Set_Boost_t)cfish_obj_method(self, LUCY_ReqOptCompiler_Set_Boost_OFFSET);
    method(self, boost);
}

extern LUCY_VISIBLE uint32_t LUCY_ReqOptCompiler_Get_Boost_OFFSET;
static CFISH_INLINE float
LUCY_ReqOptCompiler_Get_Boost(lucy_RequiredOptionalCompiler* self) {
    const LUCY_ReqOptCompiler_Get_Boost_t method = (LUCY_ReqOptCompiler_Get_Boost_t)cfish_obj_method(self, LUCY_ReqOptCompiler_Get_Boost_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ReqOptCompiler_Serialize_OFFSET;
static CFISH_INLINE void
LUCY_ReqOptCompiler_Serialize(lucy_RequiredOptionalCompiler* self, lucy_OutStream* outstream) {
    const LUCY_ReqOptCompiler_Serialize_t method = (LUCY_ReqOptCompiler_Serialize_t)cfish_obj_method(self, LUCY_ReqOptCompiler_Serialize_OFFSET);
    method(self, outstream);
}

extern LUCY_VISIBLE uint32_t LUCY_ReqOptCompiler_Deserialize_OFFSET;
static CFISH_INLINE lucy_PolyCompiler*
LUCY_ReqOptCompiler_Deserialize(lucy_RequiredOptionalCompiler* self, lucy_InStream* instream) {
    const LUCY_ReqOptCompiler_Deserialize_t method = (LUCY_ReqOptCompiler_Deserialize_t)cfish_obj_method(self, LUCY_ReqOptCompiler_Deserialize_OFFSET);
    return method(self, instream);
}

extern LUCY_VISIBLE uint32_t LUCY_ReqOptCompiler_Dump_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_ReqOptCompiler_Dump(lucy_RequiredOptionalCompiler* self) {
    const LUCY_ReqOptCompiler_Dump_t method = (LUCY_ReqOptCompiler_Dump_t)cfish_obj_method(self, LUCY_ReqOptCompiler_Dump_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ReqOptCompiler_Load_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_ReqOptCompiler_Load(lucy_RequiredOptionalCompiler* self, cfish_Obj* dump) {
    const LUCY_ReqOptCompiler_Load_t method = (LUCY_ReqOptCompiler_Load_t)cfish_obj_method(self, LUCY_ReqOptCompiler_Load_OFFSET);
    return method(self, dump);
}

extern LUCY_VISIBLE uint32_t LUCY_ReqOptCompiler_Make_Matcher_OFFSET;
static CFISH_INLINE lucy_Matcher*
LUCY_ReqOptCompiler_Make_Matcher(lucy_RequiredOptionalCompiler* self, lucy_SegReader* reader, bool need_score) {
    const LUCY_ReqOptCompiler_Make_Matcher_t method = (LUCY_ReqOptCompiler_Make_Matcher_t)cfish_obj_method(self, LUCY_ReqOptCompiler_Make_Matcher_OFFSET);
    return method(self, reader, need_score);
}

extern LUCY_VISIBLE uint32_t LUCY_ReqOptCompiler_Get_Weight_OFFSET;
static CFISH_INLINE float
LUCY_ReqOptCompiler_Get_Weight(lucy_RequiredOptionalCompiler* self) {
    const LUCY_ReqOptCompiler_Get_Weight_t method = (LUCY_ReqOptCompiler_Get_Weight_t)cfish_obj_method(self, LUCY_ReqOptCompiler_Get_Weight_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ReqOptCompiler_Get_Similarity_OFFSET;
static CFISH_INLINE lucy_Similarity*
LUCY_ReqOptCompiler_Get_Similarity(lucy_RequiredOptionalCompiler* self) {
    const LUCY_ReqOptCompiler_Get_Similarity_t method = (LUCY_ReqOptCompiler_Get_Similarity_t)cfish_obj_method(self, LUCY_ReqOptCompiler_Get_Similarity_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ReqOptCompiler_Get_Parent_OFFSET;
static CFISH_INLINE lucy_Query*
LUCY_ReqOptCompiler_Get_Parent(lucy_RequiredOptionalCompiler* self) {
    const LUCY_ReqOptCompiler_Get_Parent_t method = (LUCY_ReqOptCompiler_Get_Parent_t)cfish_obj_method(self, LUCY_ReqOptCompiler_Get_Parent_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ReqOptCompiler_Sum_Of_Squared_Weights_OFFSET;
static CFISH_INLINE float
LUCY_ReqOptCompiler_Sum_Of_Squared_Weights(lucy_RequiredOptionalCompiler* self) {
    const LUCY_ReqOptCompiler_Sum_Of_Squared_Weights_t method = (LUCY_ReqOptCompiler_Sum_Of_Squared_Weights_t)cfish_obj_method(self, LUCY_ReqOptCompiler_Sum_Of_Squared_Weights_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ReqOptCompiler_Apply_Norm_Factor_OFFSET;
static CFISH_INLINE void
LUCY_ReqOptCompiler_Apply_Norm_Factor(lucy_RequiredOptionalCompiler* self, float factor) {
    const LUCY_ReqOptCompiler_Apply_Norm_Factor_t method = (LUCY_ReqOptCompiler_Apply_Norm_Factor_t)cfish_obj_method(self, LUCY_ReqOptCompiler_Apply_Norm_Factor_OFFSET);
    method(self, factor);
}

extern LUCY_VISIBLE uint32_t LUCY_ReqOptCompiler_Normalize_OFFSET;
static CFISH_INLINE void
LUCY_ReqOptCompiler_Normalize(lucy_RequiredOptionalCompiler* self) {
    const LUCY_ReqOptCompiler_Normalize_t method = (LUCY_ReqOptCompiler_Normalize_t)cfish_obj_method(self, LUCY_ReqOptCompiler_Normalize_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ReqOptCompiler_Highlight_Spans_OFFSET;
static CFISH_INLINE cfish_Vector*
LUCY_ReqOptCompiler_Highlight_Spans(lucy_RequiredOptionalCompiler* self, lucy_Searcher* searcher, lucy_DocVector* doc_vec, cfish_String* field) {
    const LUCY_ReqOptCompiler_Highlight_Spans_t method = (LUCY_ReqOptCompiler_Highlight_Spans_t)cfish_obj_method(self, LUCY_ReqOptCompiler_Highlight_Spans_OFFSET);
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
  #define RequiredOptionalCompiler lucy_RequiredOptionalCompiler
  #define REQUIREDOPTIONALCOMPILER LUCY_REQUIREDOPTIONALCOMPILER
  #define ReqOptCompiler_new lucy_ReqOptCompiler_new
  #define ReqOptCompiler_init lucy_ReqOptCompiler_init
  #define ReqOptCompiler_get_class lucy_ReqOptCompiler_get_class
  #define ReqOptCompiler_get_class_name lucy_ReqOptCompiler_get_class_name
  #define ReqOptCompiler_is_a lucy_ReqOptCompiler_is_a
  #define ReqOptCompiler_Make_Matcher_IMP LUCY_ReqOptCompiler_Make_Matcher_IMP
  #define ReqOptCompiler_To_Host LUCY_ReqOptCompiler_To_Host
  #define ReqOptCompiler_To_Host_t LUCY_ReqOptCompiler_To_Host_t
  #define ReqOptCompiler_Clone LUCY_ReqOptCompiler_Clone
  #define ReqOptCompiler_Clone_t LUCY_ReqOptCompiler_Clone_t
  #define ReqOptCompiler_Equals LUCY_ReqOptCompiler_Equals
  #define ReqOptCompiler_Equals_t LUCY_ReqOptCompiler_Equals_t
  #define ReqOptCompiler_Compare_To LUCY_ReqOptCompiler_Compare_To
  #define ReqOptCompiler_Compare_To_t LUCY_ReqOptCompiler_Compare_To_t
  #define ReqOptCompiler_Destroy LUCY_ReqOptCompiler_Destroy
  #define ReqOptCompiler_Destroy_t LUCY_ReqOptCompiler_Destroy_t
  #define ReqOptCompiler_To_String LUCY_ReqOptCompiler_To_String
  #define ReqOptCompiler_To_String_t LUCY_ReqOptCompiler_To_String_t
  #define ReqOptCompiler_Make_Compiler LUCY_ReqOptCompiler_Make_Compiler
  #define ReqOptCompiler_Make_Compiler_t LUCY_ReqOptCompiler_Make_Compiler_t
  #define ReqOptCompiler_Set_Boost LUCY_ReqOptCompiler_Set_Boost
  #define ReqOptCompiler_Set_Boost_t LUCY_ReqOptCompiler_Set_Boost_t
  #define ReqOptCompiler_Get_Boost LUCY_ReqOptCompiler_Get_Boost
  #define ReqOptCompiler_Get_Boost_t LUCY_ReqOptCompiler_Get_Boost_t
  #define ReqOptCompiler_Serialize LUCY_ReqOptCompiler_Serialize
  #define ReqOptCompiler_Serialize_t LUCY_ReqOptCompiler_Serialize_t
  #define ReqOptCompiler_Deserialize LUCY_ReqOptCompiler_Deserialize
  #define ReqOptCompiler_Deserialize_t LUCY_ReqOptCompiler_Deserialize_t
  #define ReqOptCompiler_Dump LUCY_ReqOptCompiler_Dump
  #define ReqOptCompiler_Dump_t LUCY_ReqOptCompiler_Dump_t
  #define ReqOptCompiler_Load LUCY_ReqOptCompiler_Load
  #define ReqOptCompiler_Load_t LUCY_ReqOptCompiler_Load_t
  #define ReqOptCompiler_Make_Matcher LUCY_ReqOptCompiler_Make_Matcher
  #define ReqOptCompiler_Make_Matcher_t LUCY_ReqOptCompiler_Make_Matcher_t
  #define ReqOptCompiler_Get_Weight LUCY_ReqOptCompiler_Get_Weight
  #define ReqOptCompiler_Get_Weight_t LUCY_ReqOptCompiler_Get_Weight_t
  #define ReqOptCompiler_Get_Similarity LUCY_ReqOptCompiler_Get_Similarity
  #define ReqOptCompiler_Get_Similarity_t LUCY_ReqOptCompiler_Get_Similarity_t
  #define ReqOptCompiler_Get_Parent LUCY_ReqOptCompiler_Get_Parent
  #define ReqOptCompiler_Get_Parent_t LUCY_ReqOptCompiler_Get_Parent_t
  #define ReqOptCompiler_Sum_Of_Squared_Weights LUCY_ReqOptCompiler_Sum_Of_Squared_Weights
  #define ReqOptCompiler_Sum_Of_Squared_Weights_t LUCY_ReqOptCompiler_Sum_Of_Squared_Weights_t
  #define ReqOptCompiler_Apply_Norm_Factor LUCY_ReqOptCompiler_Apply_Norm_Factor
  #define ReqOptCompiler_Apply_Norm_Factor_t LUCY_ReqOptCompiler_Apply_Norm_Factor_t
  #define ReqOptCompiler_Normalize LUCY_ReqOptCompiler_Normalize
  #define ReqOptCompiler_Normalize_t LUCY_ReqOptCompiler_Normalize_t
  #define ReqOptCompiler_Highlight_Spans LUCY_ReqOptCompiler_Highlight_Spans
  #define ReqOptCompiler_Highlight_Spans_t LUCY_ReqOptCompiler_Highlight_Spans_t
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_SEARCH_REQUIREDOPTIONALQUERY */




