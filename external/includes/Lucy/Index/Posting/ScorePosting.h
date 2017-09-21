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


#ifndef H_LUCY_INDEX_POSTING_SCOREPOSTING
#define H_LUCY_INDEX_POSTING_SCOREPOSTING 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Lucy/Index/Posting/MatchPosting.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_SCOREPOSTING
extern uint32_t lucy_ScorePost_IVARS_OFFSET;
typedef struct lucy_ScorePostingIVARS lucy_ScorePostingIVARS;
static CFISH_INLINE lucy_ScorePostingIVARS*
lucy_ScorePost_IVARS(lucy_ScorePosting *self) {
   char *ptr = (char*)self + lucy_ScorePost_IVARS_OFFSET;
   return (lucy_ScorePostingIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define ScorePostingIVARS lucy_ScorePostingIVARS
  #define ScorePost_IVARS lucy_ScorePost_IVARS
#endif

struct lucy_ScorePostingIVARS {
    int32_t doc_id;
    lucy_Similarity* sim;
    uint32_t freq;
    float weight;
    float* norm_decoder;
    uint32_t* prox;
    uint32_t prox_cap;
};

#endif /* C_LUCY_SCOREPOSTING */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_ScorePosting*
lucy_ScorePost_new(lucy_Similarity* similarity);

LUCY_VISIBLE lucy_ScorePosting*
lucy_ScorePost_init(lucy_ScorePosting* self, lucy_Similarity* similarity);

void
LUCY_ScorePost_Destroy_IMP(lucy_ScorePosting* self);

void
LUCY_ScorePost_Read_Record_IMP(lucy_ScorePosting* self, lucy_InStream* instream);

lucy_RawPosting*
LUCY_ScorePost_Read_Raw_IMP(lucy_ScorePosting* self, lucy_InStream* instream, int32_t last_doc_id, cfish_String* term_text, lucy_MemoryPool* mem_pool);

void
LUCY_ScorePost_Add_Inversion_To_Pool_IMP(lucy_ScorePosting* self, lucy_PostingPool* post_pool, lucy_Inversion* inversion, lucy_FieldType* type, int32_t doc_id, float doc_boost, float length_norm);

void
LUCY_ScorePost_Reset_IMP(lucy_ScorePosting* self);

lucy_ScorePostingMatcher*
LUCY_ScorePost_Make_Matcher_IMP(lucy_ScorePosting* self, lucy_Similarity* sim, lucy_PostingList* plist, lucy_Compiler* compiler, bool need_score);

uint32_t*
LUCY_ScorePost_Get_Prox_IMP(lucy_ScorePosting* self);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_ScorePost_To_Host_t)(lucy_ScorePosting* self, void* vcache);

typedef cfish_Obj*
(*LUCY_ScorePost_Clone_t)(lucy_ScorePosting* self);

typedef bool
(*LUCY_ScorePost_Equals_t)(lucy_ScorePosting* self, cfish_Obj* other);

typedef int32_t
(*LUCY_ScorePost_Compare_To_t)(lucy_ScorePosting* self, cfish_Obj* other);

typedef void
(*LUCY_ScorePost_Destroy_t)(lucy_ScorePosting* self);

typedef cfish_String*
(*LUCY_ScorePost_To_String_t)(lucy_ScorePosting* self);

typedef void
(*LUCY_ScorePost_Reset_t)(lucy_ScorePosting* self);

typedef void
(*LUCY_ScorePost_Write_Key_Frame_t)(lucy_ScorePosting* self, lucy_OutStream* outstream, cfish_Obj* value);

typedef void
(*LUCY_ScorePost_Write_Delta_t)(lucy_ScorePosting* self, lucy_OutStream* outstream, cfish_Obj* value);

typedef void
(*LUCY_ScorePost_Read_Key_Frame_t)(lucy_ScorePosting* self, lucy_InStream* instream);

typedef void
(*LUCY_ScorePost_Read_Delta_t)(lucy_ScorePosting* self, lucy_InStream* instream);

typedef void
(*LUCY_ScorePost_Read_Record_t)(lucy_ScorePosting* self, lucy_InStream* instream);

typedef lucy_RawPosting*
(*LUCY_ScorePost_Read_Raw_t)(lucy_ScorePosting* self, lucy_InStream* instream, int32_t last_doc_id, cfish_String* term_text, lucy_MemoryPool* mem_pool);

typedef void
(*LUCY_ScorePost_Add_Inversion_To_Pool_t)(lucy_ScorePosting* self, lucy_PostingPool* post_pool, lucy_Inversion* inversion, lucy_FieldType* type, int32_t doc_id, float doc_boost, float length_norm);

typedef void
(*LUCY_ScorePost_Set_Doc_ID_t)(lucy_ScorePosting* self, int32_t doc_id);

typedef int32_t
(*LUCY_ScorePost_Get_Doc_ID_t)(lucy_ScorePosting* self);

typedef lucy_ScorePostingMatcher*
(*LUCY_ScorePost_Make_Matcher_t)(lucy_ScorePosting* self, lucy_Similarity* sim, lucy_PostingList* plist, lucy_Compiler* compiler, bool need_score);

typedef int32_t
(*LUCY_ScorePost_Get_Freq_t)(lucy_ScorePosting* self);

typedef uint32_t*
(*LUCY_ScorePost_Get_Prox_t)(lucy_ScorePosting* self);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_ScorePost_get_class(lucy_ScorePosting *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_ScorePost_get_class_name(lucy_ScorePosting *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_ScorePost_is_a(lucy_ScorePosting *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_ScorePost_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_ScorePost_To_Host(lucy_ScorePosting* self, void* vcache) {
    const LUCY_ScorePost_To_Host_t method = (LUCY_ScorePost_To_Host_t)cfish_obj_method(self, LUCY_ScorePost_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_ScorePost_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_ScorePost_Clone(lucy_ScorePosting* self) {
    const LUCY_ScorePost_Clone_t method = (LUCY_ScorePost_Clone_t)cfish_obj_method(self, LUCY_ScorePost_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ScorePost_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_ScorePost_Equals(lucy_ScorePosting* self, cfish_Obj* other) {
    const LUCY_ScorePost_Equals_t method = (LUCY_ScorePost_Equals_t)cfish_obj_method(self, LUCY_ScorePost_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_ScorePost_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_ScorePost_Compare_To(lucy_ScorePosting* self, cfish_Obj* other) {
    const LUCY_ScorePost_Compare_To_t method = (LUCY_ScorePost_Compare_To_t)cfish_obj_method(self, LUCY_ScorePost_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_ScorePost_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_ScorePost_Destroy(lucy_ScorePosting* self) {
    const LUCY_ScorePost_Destroy_t method = (LUCY_ScorePost_Destroy_t)cfish_obj_method(self, LUCY_ScorePost_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ScorePost_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_ScorePost_To_String(lucy_ScorePosting* self) {
    const LUCY_ScorePost_To_String_t method = (LUCY_ScorePost_To_String_t)cfish_obj_method(self, LUCY_ScorePost_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ScorePost_Reset_OFFSET;
static CFISH_INLINE void
LUCY_ScorePost_Reset(lucy_ScorePosting* self) {
    const LUCY_ScorePost_Reset_t method = (LUCY_ScorePost_Reset_t)cfish_obj_method(self, LUCY_ScorePost_Reset_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ScorePost_Write_Key_Frame_OFFSET;
static CFISH_INLINE void
LUCY_ScorePost_Write_Key_Frame(lucy_ScorePosting* self, lucy_OutStream* outstream, cfish_Obj* value) {
    const LUCY_ScorePost_Write_Key_Frame_t method = (LUCY_ScorePost_Write_Key_Frame_t)cfish_obj_method(self, LUCY_ScorePost_Write_Key_Frame_OFFSET);
    method(self, outstream, value);
}

extern LUCY_VISIBLE uint32_t LUCY_ScorePost_Write_Delta_OFFSET;
static CFISH_INLINE void
LUCY_ScorePost_Write_Delta(lucy_ScorePosting* self, lucy_OutStream* outstream, cfish_Obj* value) {
    const LUCY_ScorePost_Write_Delta_t method = (LUCY_ScorePost_Write_Delta_t)cfish_obj_method(self, LUCY_ScorePost_Write_Delta_OFFSET);
    method(self, outstream, value);
}

extern LUCY_VISIBLE uint32_t LUCY_ScorePost_Read_Key_Frame_OFFSET;
static CFISH_INLINE void
LUCY_ScorePost_Read_Key_Frame(lucy_ScorePosting* self, lucy_InStream* instream) {
    const LUCY_ScorePost_Read_Key_Frame_t method = (LUCY_ScorePost_Read_Key_Frame_t)cfish_obj_method(self, LUCY_ScorePost_Read_Key_Frame_OFFSET);
    method(self, instream);
}

extern LUCY_VISIBLE uint32_t LUCY_ScorePost_Read_Delta_OFFSET;
static CFISH_INLINE void
LUCY_ScorePost_Read_Delta(lucy_ScorePosting* self, lucy_InStream* instream) {
    const LUCY_ScorePost_Read_Delta_t method = (LUCY_ScorePost_Read_Delta_t)cfish_obj_method(self, LUCY_ScorePost_Read_Delta_OFFSET);
    method(self, instream);
}

extern LUCY_VISIBLE uint32_t LUCY_ScorePost_Read_Record_OFFSET;
static CFISH_INLINE void
LUCY_ScorePost_Read_Record(lucy_ScorePosting* self, lucy_InStream* instream) {
    const LUCY_ScorePost_Read_Record_t method = (LUCY_ScorePost_Read_Record_t)cfish_obj_method(self, LUCY_ScorePost_Read_Record_OFFSET);
    method(self, instream);
}

extern LUCY_VISIBLE uint32_t LUCY_ScorePost_Read_Raw_OFFSET;
static CFISH_INLINE lucy_RawPosting*
LUCY_ScorePost_Read_Raw(lucy_ScorePosting* self, lucy_InStream* instream, int32_t last_doc_id, cfish_String* term_text, lucy_MemoryPool* mem_pool) {
    const LUCY_ScorePost_Read_Raw_t method = (LUCY_ScorePost_Read_Raw_t)cfish_obj_method(self, LUCY_ScorePost_Read_Raw_OFFSET);
    return method(self, instream, last_doc_id, term_text, mem_pool);
}

extern LUCY_VISIBLE uint32_t LUCY_ScorePost_Add_Inversion_To_Pool_OFFSET;
static CFISH_INLINE void
LUCY_ScorePost_Add_Inversion_To_Pool(lucy_ScorePosting* self, lucy_PostingPool* post_pool, lucy_Inversion* inversion, lucy_FieldType* type, int32_t doc_id, float doc_boost, float length_norm) {
    const LUCY_ScorePost_Add_Inversion_To_Pool_t method = (LUCY_ScorePost_Add_Inversion_To_Pool_t)cfish_obj_method(self, LUCY_ScorePost_Add_Inversion_To_Pool_OFFSET);
    method(self, post_pool, inversion, type, doc_id, doc_boost, length_norm);
}

extern LUCY_VISIBLE uint32_t LUCY_ScorePost_Set_Doc_ID_OFFSET;
static CFISH_INLINE void
LUCY_ScorePost_Set_Doc_ID(lucy_ScorePosting* self, int32_t doc_id) {
    const LUCY_ScorePost_Set_Doc_ID_t method = (LUCY_ScorePost_Set_Doc_ID_t)cfish_obj_method(self, LUCY_ScorePost_Set_Doc_ID_OFFSET);
    method(self, doc_id);
}

extern LUCY_VISIBLE uint32_t LUCY_ScorePost_Get_Doc_ID_OFFSET;
static CFISH_INLINE int32_t
LUCY_ScorePost_Get_Doc_ID(lucy_ScorePosting* self) {
    const LUCY_ScorePost_Get_Doc_ID_t method = (LUCY_ScorePost_Get_Doc_ID_t)cfish_obj_method(self, LUCY_ScorePost_Get_Doc_ID_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ScorePost_Make_Matcher_OFFSET;
static CFISH_INLINE lucy_ScorePostingMatcher*
LUCY_ScorePost_Make_Matcher(lucy_ScorePosting* self, lucy_Similarity* sim, lucy_PostingList* plist, lucy_Compiler* compiler, bool need_score) {
    const LUCY_ScorePost_Make_Matcher_t method = (LUCY_ScorePost_Make_Matcher_t)cfish_obj_method(self, LUCY_ScorePost_Make_Matcher_OFFSET);
    return method(self, sim, plist, compiler, need_score);
}

extern LUCY_VISIBLE uint32_t LUCY_ScorePost_Get_Freq_OFFSET;
static CFISH_INLINE int32_t
LUCY_ScorePost_Get_Freq(lucy_ScorePosting* self) {
    const LUCY_ScorePost_Get_Freq_t method = (LUCY_ScorePost_Get_Freq_t)cfish_obj_method(self, LUCY_ScorePost_Get_Freq_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ScorePost_Get_Prox_OFFSET;
static CFISH_INLINE uint32_t*
LUCY_ScorePost_Get_Prox(lucy_ScorePosting* self) {
    const LUCY_ScorePost_Get_Prox_t method = (LUCY_ScorePost_Get_Prox_t)cfish_obj_method(self, LUCY_ScorePost_Get_Prox_OFFSET);
    return method(self);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#define Lucy_ScorePost_Get_Prox_OVERRIDE NULL
#else
uint32_t*
Lucy_ScorePost_Get_Prox_OVERRIDE(lucy_ScorePosting* self);
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define ScorePosting lucy_ScorePosting
  #define SCOREPOSTING LUCY_SCOREPOSTING
  #define ScorePost_new lucy_ScorePost_new
  #define ScorePost_init lucy_ScorePost_init
  #define ScorePost_get_class lucy_ScorePost_get_class
  #define ScorePost_get_class_name lucy_ScorePost_get_class_name
  #define ScorePost_is_a lucy_ScorePost_is_a
  #define ScorePost_Destroy_IMP LUCY_ScorePost_Destroy_IMP
  #define ScorePost_Read_Record_IMP LUCY_ScorePost_Read_Record_IMP
  #define ScorePost_Read_Raw_IMP LUCY_ScorePost_Read_Raw_IMP
  #define ScorePost_Add_Inversion_To_Pool_IMP LUCY_ScorePost_Add_Inversion_To_Pool_IMP
  #define ScorePost_Reset_IMP LUCY_ScorePost_Reset_IMP
  #define ScorePost_Make_Matcher_IMP LUCY_ScorePost_Make_Matcher_IMP
  #define ScorePost_Get_Prox_IMP LUCY_ScorePost_Get_Prox_IMP
  #define ScorePost_To_Host LUCY_ScorePost_To_Host
  #define ScorePost_To_Host_t LUCY_ScorePost_To_Host_t
  #define ScorePost_Clone LUCY_ScorePost_Clone
  #define ScorePost_Clone_t LUCY_ScorePost_Clone_t
  #define ScorePost_Equals LUCY_ScorePost_Equals
  #define ScorePost_Equals_t LUCY_ScorePost_Equals_t
  #define ScorePost_Compare_To LUCY_ScorePost_Compare_To
  #define ScorePost_Compare_To_t LUCY_ScorePost_Compare_To_t
  #define ScorePost_Destroy LUCY_ScorePost_Destroy
  #define ScorePost_Destroy_t LUCY_ScorePost_Destroy_t
  #define ScorePost_To_String LUCY_ScorePost_To_String
  #define ScorePost_To_String_t LUCY_ScorePost_To_String_t
  #define ScorePost_Reset LUCY_ScorePost_Reset
  #define ScorePost_Reset_t LUCY_ScorePost_Reset_t
  #define ScorePost_Write_Key_Frame LUCY_ScorePost_Write_Key_Frame
  #define ScorePost_Write_Key_Frame_t LUCY_ScorePost_Write_Key_Frame_t
  #define ScorePost_Write_Delta LUCY_ScorePost_Write_Delta
  #define ScorePost_Write_Delta_t LUCY_ScorePost_Write_Delta_t
  #define ScorePost_Read_Key_Frame LUCY_ScorePost_Read_Key_Frame
  #define ScorePost_Read_Key_Frame_t LUCY_ScorePost_Read_Key_Frame_t
  #define ScorePost_Read_Delta LUCY_ScorePost_Read_Delta
  #define ScorePost_Read_Delta_t LUCY_ScorePost_Read_Delta_t
  #define ScorePost_Read_Record LUCY_ScorePost_Read_Record
  #define ScorePost_Read_Record_t LUCY_ScorePost_Read_Record_t
  #define ScorePost_Read_Raw LUCY_ScorePost_Read_Raw
  #define ScorePost_Read_Raw_t LUCY_ScorePost_Read_Raw_t
  #define ScorePost_Add_Inversion_To_Pool LUCY_ScorePost_Add_Inversion_To_Pool
  #define ScorePost_Add_Inversion_To_Pool_t LUCY_ScorePost_Add_Inversion_To_Pool_t
  #define ScorePost_Set_Doc_ID LUCY_ScorePost_Set_Doc_ID
  #define ScorePost_Set_Doc_ID_t LUCY_ScorePost_Set_Doc_ID_t
  #define ScorePost_Get_Doc_ID LUCY_ScorePost_Get_Doc_ID
  #define ScorePost_Get_Doc_ID_t LUCY_ScorePost_Get_Doc_ID_t
  #define ScorePost_Make_Matcher LUCY_ScorePost_Make_Matcher
  #define ScorePost_Make_Matcher_t LUCY_ScorePost_Make_Matcher_t
  #define ScorePost_Get_Freq LUCY_ScorePost_Get_Freq
  #define ScorePost_Get_Freq_t LUCY_ScorePost_Get_Freq_t
  #define ScorePost_Get_Prox LUCY_ScorePost_Get_Prox
  #define ScorePost_Get_Prox_t LUCY_ScorePost_Get_Prox_t
#endif /* LUCY_USE_SHORT_NAMES */



/* Include the header for this class's parent. 
 */

#include "Lucy/Search/TermMatcher.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_SCOREPOSTINGMATCHER
extern uint32_t lucy_ScorePostMatcher_IVARS_OFFSET;
typedef struct lucy_ScorePostingMatcherIVARS lucy_ScorePostingMatcherIVARS;
static CFISH_INLINE lucy_ScorePostingMatcherIVARS*
lucy_ScorePostMatcher_IVARS(lucy_ScorePostingMatcher *self) {
   char *ptr = (char*)self + lucy_ScorePostMatcher_IVARS_OFFSET;
   return (lucy_ScorePostingMatcherIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define ScorePostingMatcherIVARS lucy_ScorePostingMatcherIVARS
  #define ScorePostMatcher_IVARS lucy_ScorePostMatcher_IVARS
#endif

struct lucy_ScorePostingMatcherIVARS {
    float weight;
    lucy_Compiler* compiler;
    lucy_Similarity* sim;
    lucy_PostingList* plist;
    lucy_Posting* posting;
    float* score_cache;
};

#endif /* C_LUCY_SCOREPOSTINGMATCHER */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_ScorePostingMatcher*
lucy_ScorePostMatcher_init(lucy_ScorePostingMatcher* self, lucy_Similarity* sim, lucy_PostingList* plist, lucy_Compiler* compiler);

float
LUCY_ScorePostMatcher_Score_IMP(lucy_ScorePostingMatcher* self);

void
LUCY_ScorePostMatcher_Destroy_IMP(lucy_ScorePostingMatcher* self);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_ScorePostMatcher_To_Host_t)(lucy_ScorePostingMatcher* self, void* vcache);

typedef cfish_Obj*
(*LUCY_ScorePostMatcher_Clone_t)(lucy_ScorePostingMatcher* self);

typedef bool
(*LUCY_ScorePostMatcher_Equals_t)(lucy_ScorePostingMatcher* self, cfish_Obj* other);

typedef int32_t
(*LUCY_ScorePostMatcher_Compare_To_t)(lucy_ScorePostingMatcher* self, cfish_Obj* other);

typedef void
(*LUCY_ScorePostMatcher_Destroy_t)(lucy_ScorePostingMatcher* self);

typedef cfish_String*
(*LUCY_ScorePostMatcher_To_String_t)(lucy_ScorePostingMatcher* self);

typedef int32_t
(*LUCY_ScorePostMatcher_Next_t)(lucy_ScorePostingMatcher* self);

typedef int32_t
(*LUCY_ScorePostMatcher_Advance_t)(lucy_ScorePostingMatcher* self, int32_t target);

typedef int32_t
(*LUCY_ScorePostMatcher_Get_Doc_ID_t)(lucy_ScorePostingMatcher* self);

typedef float
(*LUCY_ScorePostMatcher_Score_t)(lucy_ScorePostingMatcher* self);

typedef void
(*LUCY_ScorePostMatcher_Collect_t)(lucy_ScorePostingMatcher* self, lucy_Collector* collector, lucy_Matcher* deletions);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_ScorePostMatcher_get_class(lucy_ScorePostingMatcher *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_ScorePostMatcher_get_class_name(lucy_ScorePostingMatcher *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_ScorePostMatcher_is_a(lucy_ScorePostingMatcher *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_ScorePostMatcher_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_ScorePostMatcher_To_Host(lucy_ScorePostingMatcher* self, void* vcache) {
    const LUCY_ScorePostMatcher_To_Host_t method = (LUCY_ScorePostMatcher_To_Host_t)cfish_obj_method(self, LUCY_ScorePostMatcher_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_ScorePostMatcher_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_ScorePostMatcher_Clone(lucy_ScorePostingMatcher* self) {
    const LUCY_ScorePostMatcher_Clone_t method = (LUCY_ScorePostMatcher_Clone_t)cfish_obj_method(self, LUCY_ScorePostMatcher_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ScorePostMatcher_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_ScorePostMatcher_Equals(lucy_ScorePostingMatcher* self, cfish_Obj* other) {
    const LUCY_ScorePostMatcher_Equals_t method = (LUCY_ScorePostMatcher_Equals_t)cfish_obj_method(self, LUCY_ScorePostMatcher_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_ScorePostMatcher_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_ScorePostMatcher_Compare_To(lucy_ScorePostingMatcher* self, cfish_Obj* other) {
    const LUCY_ScorePostMatcher_Compare_To_t method = (LUCY_ScorePostMatcher_Compare_To_t)cfish_obj_method(self, LUCY_ScorePostMatcher_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_ScorePostMatcher_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_ScorePostMatcher_Destroy(lucy_ScorePostingMatcher* self) {
    const LUCY_ScorePostMatcher_Destroy_t method = (LUCY_ScorePostMatcher_Destroy_t)cfish_obj_method(self, LUCY_ScorePostMatcher_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ScorePostMatcher_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_ScorePostMatcher_To_String(lucy_ScorePostingMatcher* self) {
    const LUCY_ScorePostMatcher_To_String_t method = (LUCY_ScorePostMatcher_To_String_t)cfish_obj_method(self, LUCY_ScorePostMatcher_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ScorePostMatcher_Next_OFFSET;
static CFISH_INLINE int32_t
LUCY_ScorePostMatcher_Next(lucy_ScorePostingMatcher* self) {
    const LUCY_ScorePostMatcher_Next_t method = (LUCY_ScorePostMatcher_Next_t)cfish_obj_method(self, LUCY_ScorePostMatcher_Next_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ScorePostMatcher_Advance_OFFSET;
static CFISH_INLINE int32_t
LUCY_ScorePostMatcher_Advance(lucy_ScorePostingMatcher* self, int32_t target) {
    const LUCY_ScorePostMatcher_Advance_t method = (LUCY_ScorePostMatcher_Advance_t)cfish_obj_method(self, LUCY_ScorePostMatcher_Advance_OFFSET);
    return method(self, target);
}

extern LUCY_VISIBLE uint32_t LUCY_ScorePostMatcher_Get_Doc_ID_OFFSET;
static CFISH_INLINE int32_t
LUCY_ScorePostMatcher_Get_Doc_ID(lucy_ScorePostingMatcher* self) {
    const LUCY_ScorePostMatcher_Get_Doc_ID_t method = (LUCY_ScorePostMatcher_Get_Doc_ID_t)cfish_obj_method(self, LUCY_ScorePostMatcher_Get_Doc_ID_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ScorePostMatcher_Score_OFFSET;
static CFISH_INLINE float
LUCY_ScorePostMatcher_Score(lucy_ScorePostingMatcher* self) {
    const LUCY_ScorePostMatcher_Score_t method = (LUCY_ScorePostMatcher_Score_t)cfish_obj_method(self, LUCY_ScorePostMatcher_Score_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ScorePostMatcher_Collect_OFFSET;
static CFISH_INLINE void
LUCY_ScorePostMatcher_Collect(lucy_ScorePostingMatcher* self, lucy_Collector* collector, lucy_Matcher* deletions) {
    const LUCY_ScorePostMatcher_Collect_t method = (LUCY_ScorePostMatcher_Collect_t)cfish_obj_method(self, LUCY_ScorePostMatcher_Collect_OFFSET);
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
  #define ScorePostingMatcher lucy_ScorePostingMatcher
  #define SCOREPOSTINGMATCHER LUCY_SCOREPOSTINGMATCHER
  #define ScorePostMatcher_init lucy_ScorePostMatcher_init
  #define ScorePostMatcher_get_class lucy_ScorePostMatcher_get_class
  #define ScorePostMatcher_get_class_name lucy_ScorePostMatcher_get_class_name
  #define ScorePostMatcher_is_a lucy_ScorePostMatcher_is_a
  #define ScorePostMatcher_Score_IMP LUCY_ScorePostMatcher_Score_IMP
  #define ScorePostMatcher_Destroy_IMP LUCY_ScorePostMatcher_Destroy_IMP
  #define ScorePostMatcher_To_Host LUCY_ScorePostMatcher_To_Host
  #define ScorePostMatcher_To_Host_t LUCY_ScorePostMatcher_To_Host_t
  #define ScorePostMatcher_Clone LUCY_ScorePostMatcher_Clone
  #define ScorePostMatcher_Clone_t LUCY_ScorePostMatcher_Clone_t
  #define ScorePostMatcher_Equals LUCY_ScorePostMatcher_Equals
  #define ScorePostMatcher_Equals_t LUCY_ScorePostMatcher_Equals_t
  #define ScorePostMatcher_Compare_To LUCY_ScorePostMatcher_Compare_To
  #define ScorePostMatcher_Compare_To_t LUCY_ScorePostMatcher_Compare_To_t
  #define ScorePostMatcher_Destroy LUCY_ScorePostMatcher_Destroy
  #define ScorePostMatcher_Destroy_t LUCY_ScorePostMatcher_Destroy_t
  #define ScorePostMatcher_To_String LUCY_ScorePostMatcher_To_String
  #define ScorePostMatcher_To_String_t LUCY_ScorePostMatcher_To_String_t
  #define ScorePostMatcher_Next LUCY_ScorePostMatcher_Next
  #define ScorePostMatcher_Next_t LUCY_ScorePostMatcher_Next_t
  #define ScorePostMatcher_Advance LUCY_ScorePostMatcher_Advance
  #define ScorePostMatcher_Advance_t LUCY_ScorePostMatcher_Advance_t
  #define ScorePostMatcher_Get_Doc_ID LUCY_ScorePostMatcher_Get_Doc_ID
  #define ScorePostMatcher_Get_Doc_ID_t LUCY_ScorePostMatcher_Get_Doc_ID_t
  #define ScorePostMatcher_Score LUCY_ScorePostMatcher_Score
  #define ScorePostMatcher_Score_t LUCY_ScorePostMatcher_Score_t
  #define ScorePostMatcher_Collect LUCY_ScorePostMatcher_Collect
  #define ScorePostMatcher_Collect_t LUCY_ScorePostMatcher_Collect_t
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_INDEX_POSTING_SCOREPOSTING */




