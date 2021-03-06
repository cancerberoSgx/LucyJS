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


#ifndef H_LUCY_SEARCH_QUERYPARSER
#define H_LUCY_SEARCH_QUERYPARSER 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Clownfish/Obj.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_QUERYPARSER
extern uint32_t lucy_QParser_IVARS_OFFSET;
typedef struct lucy_QueryParserIVARS lucy_QueryParserIVARS;
static CFISH_INLINE lucy_QueryParserIVARS*
lucy_QParser_IVARS(lucy_QueryParser *self) {
   char *ptr = (char*)self + lucy_QParser_IVARS_OFFSET;
   return (lucy_QueryParserIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define QueryParserIVARS lucy_QueryParserIVARS
  #define QParser_IVARS lucy_QParser_IVARS
#endif

struct lucy_QueryParserIVARS {
    lucy_Schema* schema;
    lucy_Analyzer* analyzer;
    cfish_String* default_boolop;
    cfish_Vector* fields;
    lucy_QueryLexer* lexer;
    bool heed_colons;
    int32_t default_occur;
};

#endif /* C_LUCY_QUERYPARSER */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_QueryParser*
lucy_QParser_new(lucy_Schema* schema, lucy_Analyzer* analyzer, cfish_String* default_boolop, cfish_Vector* fields);

LUCY_VISIBLE lucy_QueryParser*
lucy_QParser_init(lucy_QueryParser* self, lucy_Schema* schema, lucy_Analyzer* analyzer, cfish_String* default_boolop, cfish_Vector* fields);

lucy_Query*
LUCY_QParser_Parse_IMP(lucy_QueryParser* self, cfish_String* query_string);

lucy_Query*
LUCY_QParser_Tree_IMP(lucy_QueryParser* self, cfish_String* query_string);

lucy_Query*
LUCY_QParser_Expand_IMP(lucy_QueryParser* self, lucy_Query* query);

lucy_Query*
LUCY_QParser_Expand_Leaf_IMP(lucy_QueryParser* self, lucy_Query* query);

lucy_Query*
LUCY_QParser_Prune_IMP(lucy_QueryParser* self, lucy_Query* query);

lucy_Query*
LUCY_QParser_Make_Term_Query_IMP(lucy_QueryParser* self, cfish_String* field, cfish_Obj* term);

lucy_Query*
LUCY_QParser_Make_Phrase_Query_IMP(lucy_QueryParser* self, cfish_String* field, cfish_Vector* terms);

lucy_Query*
LUCY_QParser_Make_OR_Query_IMP(lucy_QueryParser* self, cfish_Vector* children);

lucy_Query*
LUCY_QParser_Make_AND_Query_IMP(lucy_QueryParser* self, cfish_Vector* children);

lucy_Query*
LUCY_QParser_Make_NOT_Query_IMP(lucy_QueryParser* self, lucy_Query* negated_query);

lucy_Query*
LUCY_QParser_Make_Req_Opt_Query_IMP(lucy_QueryParser* self, lucy_Query* required_query, lucy_Query* optional_query);

lucy_Analyzer*
LUCY_QParser_Get_Analyzer_IMP(lucy_QueryParser* self);

lucy_Schema*
LUCY_QParser_Get_Schema_IMP(lucy_QueryParser* self);

cfish_String*
LUCY_QParser_Get_Default_BoolOp_IMP(lucy_QueryParser* self);

cfish_Vector*
LUCY_QParser_Get_Fields_IMP(lucy_QueryParser* self);

bool
LUCY_QParser_Heed_Colons_IMP(lucy_QueryParser* self);

void
LUCY_QParser_Set_Heed_Colons_IMP(lucy_QueryParser* self, bool heed_colons);

void
LUCY_QParser_Destroy_IMP(lucy_QueryParser* self);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_QParser_To_Host_t)(lucy_QueryParser* self, void* vcache);

typedef cfish_Obj*
(*LUCY_QParser_Clone_t)(lucy_QueryParser* self);

typedef bool
(*LUCY_QParser_Equals_t)(lucy_QueryParser* self, cfish_Obj* other);

typedef int32_t
(*LUCY_QParser_Compare_To_t)(lucy_QueryParser* self, cfish_Obj* other);

typedef void
(*LUCY_QParser_Destroy_t)(lucy_QueryParser* self);

typedef cfish_String*
(*LUCY_QParser_To_String_t)(lucy_QueryParser* self);

typedef lucy_Query*
(*LUCY_QParser_Parse_t)(lucy_QueryParser* self, cfish_String* query_string);

typedef lucy_Query*
(*LUCY_QParser_Tree_t)(lucy_QueryParser* self, cfish_String* query_string);

typedef lucy_Query*
(*LUCY_QParser_Expand_t)(lucy_QueryParser* self, lucy_Query* query);

typedef lucy_Query*
(*LUCY_QParser_Expand_Leaf_t)(lucy_QueryParser* self, lucy_Query* query);

typedef lucy_Query*
(*LUCY_QParser_Prune_t)(lucy_QueryParser* self, lucy_Query* query);

typedef lucy_Query*
(*LUCY_QParser_Make_Term_Query_t)(lucy_QueryParser* self, cfish_String* field, cfish_Obj* term);

typedef lucy_Query*
(*LUCY_QParser_Make_Phrase_Query_t)(lucy_QueryParser* self, cfish_String* field, cfish_Vector* terms);

typedef lucy_Query*
(*LUCY_QParser_Make_OR_Query_t)(lucy_QueryParser* self, cfish_Vector* children);

typedef lucy_Query*
(*LUCY_QParser_Make_AND_Query_t)(lucy_QueryParser* self, cfish_Vector* children);

typedef lucy_Query*
(*LUCY_QParser_Make_NOT_Query_t)(lucy_QueryParser* self, lucy_Query* negated_query);

typedef lucy_Query*
(*LUCY_QParser_Make_Req_Opt_Query_t)(lucy_QueryParser* self, lucy_Query* required_query, lucy_Query* optional_query);

typedef lucy_Analyzer*
(*LUCY_QParser_Get_Analyzer_t)(lucy_QueryParser* self);

typedef lucy_Schema*
(*LUCY_QParser_Get_Schema_t)(lucy_QueryParser* self);

typedef cfish_String*
(*LUCY_QParser_Get_Default_BoolOp_t)(lucy_QueryParser* self);

typedef cfish_Vector*
(*LUCY_QParser_Get_Fields_t)(lucy_QueryParser* self);

typedef bool
(*LUCY_QParser_Heed_Colons_t)(lucy_QueryParser* self);

typedef void
(*LUCY_QParser_Set_Heed_Colons_t)(lucy_QueryParser* self, bool heed_colons);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_QParser_get_class(lucy_QueryParser *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_QParser_get_class_name(lucy_QueryParser *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_QParser_is_a(lucy_QueryParser *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_QParser_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_QParser_To_Host(lucy_QueryParser* self, void* vcache) {
    const LUCY_QParser_To_Host_t method = (LUCY_QParser_To_Host_t)cfish_obj_method(self, LUCY_QParser_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_QParser_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_QParser_Clone(lucy_QueryParser* self) {
    const LUCY_QParser_Clone_t method = (LUCY_QParser_Clone_t)cfish_obj_method(self, LUCY_QParser_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_QParser_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_QParser_Equals(lucy_QueryParser* self, cfish_Obj* other) {
    const LUCY_QParser_Equals_t method = (LUCY_QParser_Equals_t)cfish_obj_method(self, LUCY_QParser_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_QParser_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_QParser_Compare_To(lucy_QueryParser* self, cfish_Obj* other) {
    const LUCY_QParser_Compare_To_t method = (LUCY_QParser_Compare_To_t)cfish_obj_method(self, LUCY_QParser_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_QParser_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_QParser_Destroy(lucy_QueryParser* self) {
    const LUCY_QParser_Destroy_t method = (LUCY_QParser_Destroy_t)cfish_obj_method(self, LUCY_QParser_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_QParser_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_QParser_To_String(lucy_QueryParser* self) {
    const LUCY_QParser_To_String_t method = (LUCY_QParser_To_String_t)cfish_obj_method(self, LUCY_QParser_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_QParser_Parse_OFFSET;
static CFISH_INLINE lucy_Query*
LUCY_QParser_Parse(lucy_QueryParser* self, cfish_String* query_string) {
    const LUCY_QParser_Parse_t method = (LUCY_QParser_Parse_t)cfish_obj_method(self, LUCY_QParser_Parse_OFFSET);
    return method(self, query_string);
}

extern LUCY_VISIBLE uint32_t LUCY_QParser_Tree_OFFSET;
static CFISH_INLINE lucy_Query*
LUCY_QParser_Tree(lucy_QueryParser* self, cfish_String* query_string) {
    const LUCY_QParser_Tree_t method = (LUCY_QParser_Tree_t)cfish_obj_method(self, LUCY_QParser_Tree_OFFSET);
    return method(self, query_string);
}

extern LUCY_VISIBLE uint32_t LUCY_QParser_Expand_OFFSET;
static CFISH_INLINE lucy_Query*
LUCY_QParser_Expand(lucy_QueryParser* self, lucy_Query* query) {
    const LUCY_QParser_Expand_t method = (LUCY_QParser_Expand_t)cfish_obj_method(self, LUCY_QParser_Expand_OFFSET);
    return method(self, query);
}

extern LUCY_VISIBLE uint32_t LUCY_QParser_Expand_Leaf_OFFSET;
static CFISH_INLINE lucy_Query*
LUCY_QParser_Expand_Leaf(lucy_QueryParser* self, lucy_Query* query) {
    const LUCY_QParser_Expand_Leaf_t method = (LUCY_QParser_Expand_Leaf_t)cfish_obj_method(self, LUCY_QParser_Expand_Leaf_OFFSET);
    return method(self, query);
}

extern LUCY_VISIBLE uint32_t LUCY_QParser_Prune_OFFSET;
static CFISH_INLINE lucy_Query*
LUCY_QParser_Prune(lucy_QueryParser* self, lucy_Query* query) {
    const LUCY_QParser_Prune_t method = (LUCY_QParser_Prune_t)cfish_obj_method(self, LUCY_QParser_Prune_OFFSET);
    return method(self, query);
}

extern LUCY_VISIBLE uint32_t LUCY_QParser_Make_Term_Query_OFFSET;
static CFISH_INLINE lucy_Query*
LUCY_QParser_Make_Term_Query(lucy_QueryParser* self, cfish_String* field, cfish_Obj* term) {
    const LUCY_QParser_Make_Term_Query_t method = (LUCY_QParser_Make_Term_Query_t)cfish_obj_method(self, LUCY_QParser_Make_Term_Query_OFFSET);
    return method(self, field, term);
}

extern LUCY_VISIBLE uint32_t LUCY_QParser_Make_Phrase_Query_OFFSET;
static CFISH_INLINE lucy_Query*
LUCY_QParser_Make_Phrase_Query(lucy_QueryParser* self, cfish_String* field, cfish_Vector* terms) {
    const LUCY_QParser_Make_Phrase_Query_t method = (LUCY_QParser_Make_Phrase_Query_t)cfish_obj_method(self, LUCY_QParser_Make_Phrase_Query_OFFSET);
    return method(self, field, terms);
}

extern LUCY_VISIBLE uint32_t LUCY_QParser_Make_OR_Query_OFFSET;
static CFISH_INLINE lucy_Query*
LUCY_QParser_Make_OR_Query(lucy_QueryParser* self, cfish_Vector* children) {
    const LUCY_QParser_Make_OR_Query_t method = (LUCY_QParser_Make_OR_Query_t)cfish_obj_method(self, LUCY_QParser_Make_OR_Query_OFFSET);
    return method(self, children);
}

extern LUCY_VISIBLE uint32_t LUCY_QParser_Make_AND_Query_OFFSET;
static CFISH_INLINE lucy_Query*
LUCY_QParser_Make_AND_Query(lucy_QueryParser* self, cfish_Vector* children) {
    const LUCY_QParser_Make_AND_Query_t method = (LUCY_QParser_Make_AND_Query_t)cfish_obj_method(self, LUCY_QParser_Make_AND_Query_OFFSET);
    return method(self, children);
}

extern LUCY_VISIBLE uint32_t LUCY_QParser_Make_NOT_Query_OFFSET;
static CFISH_INLINE lucy_Query*
LUCY_QParser_Make_NOT_Query(lucy_QueryParser* self, lucy_Query* negated_query) {
    const LUCY_QParser_Make_NOT_Query_t method = (LUCY_QParser_Make_NOT_Query_t)cfish_obj_method(self, LUCY_QParser_Make_NOT_Query_OFFSET);
    return method(self, negated_query);
}

extern LUCY_VISIBLE uint32_t LUCY_QParser_Make_Req_Opt_Query_OFFSET;
static CFISH_INLINE lucy_Query*
LUCY_QParser_Make_Req_Opt_Query(lucy_QueryParser* self, lucy_Query* required_query, lucy_Query* optional_query) {
    const LUCY_QParser_Make_Req_Opt_Query_t method = (LUCY_QParser_Make_Req_Opt_Query_t)cfish_obj_method(self, LUCY_QParser_Make_Req_Opt_Query_OFFSET);
    return method(self, required_query, optional_query);
}

extern LUCY_VISIBLE uint32_t LUCY_QParser_Get_Analyzer_OFFSET;
static CFISH_INLINE lucy_Analyzer*
LUCY_QParser_Get_Analyzer(lucy_QueryParser* self) {
    const LUCY_QParser_Get_Analyzer_t method = (LUCY_QParser_Get_Analyzer_t)cfish_obj_method(self, LUCY_QParser_Get_Analyzer_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_QParser_Get_Schema_OFFSET;
static CFISH_INLINE lucy_Schema*
LUCY_QParser_Get_Schema(lucy_QueryParser* self) {
    const LUCY_QParser_Get_Schema_t method = (LUCY_QParser_Get_Schema_t)cfish_obj_method(self, LUCY_QParser_Get_Schema_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_QParser_Get_Default_BoolOp_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_QParser_Get_Default_BoolOp(lucy_QueryParser* self) {
    const LUCY_QParser_Get_Default_BoolOp_t method = (LUCY_QParser_Get_Default_BoolOp_t)cfish_obj_method(self, LUCY_QParser_Get_Default_BoolOp_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_QParser_Get_Fields_OFFSET;
static CFISH_INLINE cfish_Vector*
LUCY_QParser_Get_Fields(lucy_QueryParser* self) {
    const LUCY_QParser_Get_Fields_t method = (LUCY_QParser_Get_Fields_t)cfish_obj_method(self, LUCY_QParser_Get_Fields_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_QParser_Heed_Colons_OFFSET;
static CFISH_INLINE bool
LUCY_QParser_Heed_Colons(lucy_QueryParser* self) {
    const LUCY_QParser_Heed_Colons_t method = (LUCY_QParser_Heed_Colons_t)cfish_obj_method(self, LUCY_QParser_Heed_Colons_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_QParser_Set_Heed_Colons_OFFSET;
static CFISH_INLINE void
LUCY_QParser_Set_Heed_Colons(lucy_QueryParser* self, bool heed_colons) {
    const LUCY_QParser_Set_Heed_Colons_t method = (LUCY_QParser_Set_Heed_Colons_t)cfish_obj_method(self, LUCY_QParser_Set_Heed_Colons_OFFSET);
    method(self, heed_colons);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#define Lucy_QParser_Parse_OVERRIDE NULL
#define Lucy_QParser_Tree_OVERRIDE NULL
#define Lucy_QParser_Expand_OVERRIDE NULL
#define Lucy_QParser_Expand_Leaf_OVERRIDE NULL
#define Lucy_QParser_Prune_OVERRIDE NULL
#define Lucy_QParser_Make_Term_Query_OVERRIDE NULL
#define Lucy_QParser_Make_Phrase_Query_OVERRIDE NULL
#define Lucy_QParser_Make_OR_Query_OVERRIDE NULL
#define Lucy_QParser_Make_AND_Query_OVERRIDE NULL
#define Lucy_QParser_Make_NOT_Query_OVERRIDE NULL
#define Lucy_QParser_Make_Req_Opt_Query_OVERRIDE NULL
#define Lucy_QParser_Get_Analyzer_OVERRIDE NULL
#define Lucy_QParser_Get_Schema_OVERRIDE NULL
#define Lucy_QParser_Get_Default_BoolOp_OVERRIDE NULL
#define Lucy_QParser_Get_Fields_OVERRIDE NULL
#define Lucy_QParser_Heed_Colons_OVERRIDE NULL
#define Lucy_QParser_Set_Heed_Colons_OVERRIDE NULL
#else
lucy_Query*
Lucy_QParser_Parse_OVERRIDE(lucy_QueryParser* self, cfish_String* query_string);
lucy_Query*
Lucy_QParser_Tree_OVERRIDE(lucy_QueryParser* self, cfish_String* query_string);
lucy_Query*
Lucy_QParser_Expand_OVERRIDE(lucy_QueryParser* self, lucy_Query* query);
lucy_Query*
Lucy_QParser_Expand_Leaf_OVERRIDE(lucy_QueryParser* self, lucy_Query* query);
lucy_Query*
Lucy_QParser_Prune_OVERRIDE(lucy_QueryParser* self, lucy_Query* query);
lucy_Query*
Lucy_QParser_Make_Term_Query_OVERRIDE(lucy_QueryParser* self, cfish_String* field, cfish_Obj* term);
lucy_Query*
Lucy_QParser_Make_Phrase_Query_OVERRIDE(lucy_QueryParser* self, cfish_String* field, cfish_Vector* terms);
lucy_Query*
Lucy_QParser_Make_OR_Query_OVERRIDE(lucy_QueryParser* self, cfish_Vector* children);
lucy_Query*
Lucy_QParser_Make_AND_Query_OVERRIDE(lucy_QueryParser* self, cfish_Vector* children);
lucy_Query*
Lucy_QParser_Make_NOT_Query_OVERRIDE(lucy_QueryParser* self, lucy_Query* negated_query);
lucy_Query*
Lucy_QParser_Make_Req_Opt_Query_OVERRIDE(lucy_QueryParser* self, lucy_Query* required_query, lucy_Query* optional_query);
lucy_Analyzer*
Lucy_QParser_Get_Analyzer_OVERRIDE(lucy_QueryParser* self);
lucy_Schema*
Lucy_QParser_Get_Schema_OVERRIDE(lucy_QueryParser* self);
cfish_String*
Lucy_QParser_Get_Default_BoolOp_OVERRIDE(lucy_QueryParser* self);
cfish_Vector*
Lucy_QParser_Get_Fields_OVERRIDE(lucy_QueryParser* self);
bool
Lucy_QParser_Heed_Colons_OVERRIDE(lucy_QueryParser* self);
void
Lucy_QParser_Set_Heed_Colons_OVERRIDE(lucy_QueryParser* self, bool heed_colons);
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define QueryParser lucy_QueryParser
  #define QUERYPARSER LUCY_QUERYPARSER
  #define QParser_new lucy_QParser_new
  #define QParser_init lucy_QParser_init
  #define QParser_get_class lucy_QParser_get_class
  #define QParser_get_class_name lucy_QParser_get_class_name
  #define QParser_is_a lucy_QParser_is_a
  #define QParser_Parse_IMP LUCY_QParser_Parse_IMP
  #define QParser_Tree_IMP LUCY_QParser_Tree_IMP
  #define QParser_Expand_IMP LUCY_QParser_Expand_IMP
  #define QParser_Expand_Leaf_IMP LUCY_QParser_Expand_Leaf_IMP
  #define QParser_Prune_IMP LUCY_QParser_Prune_IMP
  #define QParser_Make_Term_Query_IMP LUCY_QParser_Make_Term_Query_IMP
  #define QParser_Make_Phrase_Query_IMP LUCY_QParser_Make_Phrase_Query_IMP
  #define QParser_Make_OR_Query_IMP LUCY_QParser_Make_OR_Query_IMP
  #define QParser_Make_AND_Query_IMP LUCY_QParser_Make_AND_Query_IMP
  #define QParser_Make_NOT_Query_IMP LUCY_QParser_Make_NOT_Query_IMP
  #define QParser_Make_Req_Opt_Query_IMP LUCY_QParser_Make_Req_Opt_Query_IMP
  #define QParser_Get_Analyzer_IMP LUCY_QParser_Get_Analyzer_IMP
  #define QParser_Get_Schema_IMP LUCY_QParser_Get_Schema_IMP
  #define QParser_Get_Default_BoolOp_IMP LUCY_QParser_Get_Default_BoolOp_IMP
  #define QParser_Get_Fields_IMP LUCY_QParser_Get_Fields_IMP
  #define QParser_Heed_Colons_IMP LUCY_QParser_Heed_Colons_IMP
  #define QParser_Set_Heed_Colons_IMP LUCY_QParser_Set_Heed_Colons_IMP
  #define QParser_Destroy_IMP LUCY_QParser_Destroy_IMP
  #define QParser_To_Host LUCY_QParser_To_Host
  #define QParser_To_Host_t LUCY_QParser_To_Host_t
  #define QParser_Clone LUCY_QParser_Clone
  #define QParser_Clone_t LUCY_QParser_Clone_t
  #define QParser_Equals LUCY_QParser_Equals
  #define QParser_Equals_t LUCY_QParser_Equals_t
  #define QParser_Compare_To LUCY_QParser_Compare_To
  #define QParser_Compare_To_t LUCY_QParser_Compare_To_t
  #define QParser_Destroy LUCY_QParser_Destroy
  #define QParser_Destroy_t LUCY_QParser_Destroy_t
  #define QParser_To_String LUCY_QParser_To_String
  #define QParser_To_String_t LUCY_QParser_To_String_t
  #define QParser_Parse LUCY_QParser_Parse
  #define QParser_Parse_t LUCY_QParser_Parse_t
  #define QParser_Tree LUCY_QParser_Tree
  #define QParser_Tree_t LUCY_QParser_Tree_t
  #define QParser_Expand LUCY_QParser_Expand
  #define QParser_Expand_t LUCY_QParser_Expand_t
  #define QParser_Expand_Leaf LUCY_QParser_Expand_Leaf
  #define QParser_Expand_Leaf_t LUCY_QParser_Expand_Leaf_t
  #define QParser_Prune LUCY_QParser_Prune
  #define QParser_Prune_t LUCY_QParser_Prune_t
  #define QParser_Make_Term_Query LUCY_QParser_Make_Term_Query
  #define QParser_Make_Term_Query_t LUCY_QParser_Make_Term_Query_t
  #define QParser_Make_Phrase_Query LUCY_QParser_Make_Phrase_Query
  #define QParser_Make_Phrase_Query_t LUCY_QParser_Make_Phrase_Query_t
  #define QParser_Make_OR_Query LUCY_QParser_Make_OR_Query
  #define QParser_Make_OR_Query_t LUCY_QParser_Make_OR_Query_t
  #define QParser_Make_AND_Query LUCY_QParser_Make_AND_Query
  #define QParser_Make_AND_Query_t LUCY_QParser_Make_AND_Query_t
  #define QParser_Make_NOT_Query LUCY_QParser_Make_NOT_Query
  #define QParser_Make_NOT_Query_t LUCY_QParser_Make_NOT_Query_t
  #define QParser_Make_Req_Opt_Query LUCY_QParser_Make_Req_Opt_Query
  #define QParser_Make_Req_Opt_Query_t LUCY_QParser_Make_Req_Opt_Query_t
  #define QParser_Get_Analyzer LUCY_QParser_Get_Analyzer
  #define QParser_Get_Analyzer_t LUCY_QParser_Get_Analyzer_t
  #define QParser_Get_Schema LUCY_QParser_Get_Schema
  #define QParser_Get_Schema_t LUCY_QParser_Get_Schema_t
  #define QParser_Get_Default_BoolOp LUCY_QParser_Get_Default_BoolOp
  #define QParser_Get_Default_BoolOp_t LUCY_QParser_Get_Default_BoolOp_t
  #define QParser_Get_Fields LUCY_QParser_Get_Fields
  #define QParser_Get_Fields_t LUCY_QParser_Get_Fields_t
  #define QParser_Heed_Colons LUCY_QParser_Heed_Colons
  #define QParser_Heed_Colons_t LUCY_QParser_Heed_Colons_t
  #define QParser_Set_Heed_Colons LUCY_QParser_Set_Heed_Colons
  #define QParser_Set_Heed_Colons_t LUCY_QParser_Set_Heed_Colons_t
#endif /* LUCY_USE_SHORT_NAMES */



#define LUCY_QPARSER_SHOULD            0x00000001
#define LUCY_QPARSER_MUST              0x00000002
#define LUCY_QPARSER_MUST_NOT          0x00000004
#define LUCY_QPARSER_TOKEN_OPEN_PAREN  0x00000008
#define LUCY_QPARSER_TOKEN_CLOSE_PAREN 0x00000010
#define LUCY_QPARSER_TOKEN_MINUS       0x00000020
#define LUCY_QPARSER_TOKEN_PLUS        0x00000040
#define LUCY_QPARSER_TOKEN_NOT         0x00000080
#define LUCY_QPARSER_TOKEN_OR          0x00000100
#define LUCY_QPARSER_TOKEN_AND         0x00000200
#define LUCY_QPARSER_TOKEN_FIELD       0x00000400
#define LUCY_QPARSER_TOKEN_STRING      0x00000800
#define LUCY_QPARSER_TOKEN_QUERY       0x00001000




#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_SEARCH_QUERYPARSER */




