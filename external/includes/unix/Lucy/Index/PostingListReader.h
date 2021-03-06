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


#ifndef H_LUCY_INDEX_POSTINGLISTREADER
#define H_LUCY_INDEX_POSTINGLISTREADER 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Lucy/Index/DataReader.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_POSTINGLISTREADER
extern uint32_t lucy_PListReader_IVARS_OFFSET;
typedef struct lucy_PostingListReaderIVARS lucy_PostingListReaderIVARS;
static CFISH_INLINE lucy_PostingListReaderIVARS*
lucy_PListReader_IVARS(lucy_PostingListReader *self) {
   char *ptr = (char*)self + lucy_PListReader_IVARS_OFFSET;
   return (lucy_PostingListReaderIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define PostingListReaderIVARS lucy_PostingListReaderIVARS
  #define PListReader_IVARS lucy_PListReader_IVARS
#endif

struct lucy_PostingListReaderIVARS {
    lucy_Schema* schema;
    lucy_Folder* folder;
    lucy_Snapshot* snapshot;
    cfish_Vector* segments;
    lucy_Segment* segment;
    int32_t seg_tick;
};

#endif /* C_LUCY_POSTINGLISTREADER */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_PostingListReader*
lucy_PListReader_init(lucy_PostingListReader* self, lucy_Schema* schema, lucy_Folder* folder, lucy_Snapshot* snapshot, cfish_Vector* segments, int32_t seg_tick);

lucy_PostingList*
LUCY_PListReader_Posting_List_IMP(lucy_PostingListReader* self, cfish_String* field, cfish_Obj* term);

lucy_LexiconReader*
LUCY_PListReader_Get_Lex_Reader_IMP(lucy_PostingListReader* self);

lucy_PostingListReader*
LUCY_PListReader_Aggregator_IMP(lucy_PostingListReader* self, cfish_Vector* readers, lucy_I32Array* offsets);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_PListReader_To_Host_t)(lucy_PostingListReader* self, void* vcache);

typedef cfish_Obj*
(*LUCY_PListReader_Clone_t)(lucy_PostingListReader* self);

typedef bool
(*LUCY_PListReader_Equals_t)(lucy_PostingListReader* self, cfish_Obj* other);

typedef int32_t
(*LUCY_PListReader_Compare_To_t)(lucy_PostingListReader* self, cfish_Obj* other);

typedef void
(*LUCY_PListReader_Destroy_t)(lucy_PostingListReader* self);

typedef cfish_String*
(*LUCY_PListReader_To_String_t)(lucy_PostingListReader* self);

typedef lucy_PostingListReader*
(*LUCY_PListReader_Aggregator_t)(lucy_PostingListReader* self, cfish_Vector* readers, lucy_I32Array* offsets);

typedef lucy_Schema*
(*LUCY_PListReader_Get_Schema_t)(lucy_PostingListReader* self);

typedef lucy_Folder*
(*LUCY_PListReader_Get_Folder_t)(lucy_PostingListReader* self);

typedef lucy_Snapshot*
(*LUCY_PListReader_Get_Snapshot_t)(lucy_PostingListReader* self);

typedef cfish_Vector*
(*LUCY_PListReader_Get_Segments_t)(lucy_PostingListReader* self);

typedef lucy_Segment*
(*LUCY_PListReader_Get_Segment_t)(lucy_PostingListReader* self);

typedef int32_t
(*LUCY_PListReader_Get_Seg_Tick_t)(lucy_PostingListReader* self);

typedef void
(*LUCY_PListReader_Close_t)(lucy_PostingListReader* self);

typedef lucy_PostingList*
(*LUCY_PListReader_Posting_List_t)(lucy_PostingListReader* self, cfish_String* field, cfish_Obj* term);

typedef lucy_LexiconReader*
(*LUCY_PListReader_Get_Lex_Reader_t)(lucy_PostingListReader* self);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_PListReader_get_class(lucy_PostingListReader *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_PListReader_get_class_name(lucy_PostingListReader *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_PListReader_is_a(lucy_PostingListReader *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_PListReader_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_PListReader_To_Host(lucy_PostingListReader* self, void* vcache) {
    const LUCY_PListReader_To_Host_t method = (LUCY_PListReader_To_Host_t)cfish_obj_method(self, LUCY_PListReader_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_PListReader_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_PListReader_Clone(lucy_PostingListReader* self) {
    const LUCY_PListReader_Clone_t method = (LUCY_PListReader_Clone_t)cfish_obj_method(self, LUCY_PListReader_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_PListReader_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_PListReader_Equals(lucy_PostingListReader* self, cfish_Obj* other) {
    const LUCY_PListReader_Equals_t method = (LUCY_PListReader_Equals_t)cfish_obj_method(self, LUCY_PListReader_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_PListReader_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_PListReader_Compare_To(lucy_PostingListReader* self, cfish_Obj* other) {
    const LUCY_PListReader_Compare_To_t method = (LUCY_PListReader_Compare_To_t)cfish_obj_method(self, LUCY_PListReader_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_PListReader_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_PListReader_Destroy(lucy_PostingListReader* self) {
    const LUCY_PListReader_Destroy_t method = (LUCY_PListReader_Destroy_t)cfish_obj_method(self, LUCY_PListReader_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_PListReader_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_PListReader_To_String(lucy_PostingListReader* self) {
    const LUCY_PListReader_To_String_t method = (LUCY_PListReader_To_String_t)cfish_obj_method(self, LUCY_PListReader_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_PListReader_Aggregator_OFFSET;
static CFISH_INLINE lucy_PostingListReader*
LUCY_PListReader_Aggregator(lucy_PostingListReader* self, cfish_Vector* readers, lucy_I32Array* offsets) {
    const LUCY_PListReader_Aggregator_t method = (LUCY_PListReader_Aggregator_t)cfish_obj_method(self, LUCY_PListReader_Aggregator_OFFSET);
    return method(self, readers, offsets);
}

extern LUCY_VISIBLE uint32_t LUCY_PListReader_Get_Schema_OFFSET;
static CFISH_INLINE lucy_Schema*
LUCY_PListReader_Get_Schema(lucy_PostingListReader* self) {
    const LUCY_PListReader_Get_Schema_t method = (LUCY_PListReader_Get_Schema_t)cfish_obj_method(self, LUCY_PListReader_Get_Schema_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_PListReader_Get_Folder_OFFSET;
static CFISH_INLINE lucy_Folder*
LUCY_PListReader_Get_Folder(lucy_PostingListReader* self) {
    const LUCY_PListReader_Get_Folder_t method = (LUCY_PListReader_Get_Folder_t)cfish_obj_method(self, LUCY_PListReader_Get_Folder_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_PListReader_Get_Snapshot_OFFSET;
static CFISH_INLINE lucy_Snapshot*
LUCY_PListReader_Get_Snapshot(lucy_PostingListReader* self) {
    const LUCY_PListReader_Get_Snapshot_t method = (LUCY_PListReader_Get_Snapshot_t)cfish_obj_method(self, LUCY_PListReader_Get_Snapshot_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_PListReader_Get_Segments_OFFSET;
static CFISH_INLINE cfish_Vector*
LUCY_PListReader_Get_Segments(lucy_PostingListReader* self) {
    const LUCY_PListReader_Get_Segments_t method = (LUCY_PListReader_Get_Segments_t)cfish_obj_method(self, LUCY_PListReader_Get_Segments_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_PListReader_Get_Segment_OFFSET;
static CFISH_INLINE lucy_Segment*
LUCY_PListReader_Get_Segment(lucy_PostingListReader* self) {
    const LUCY_PListReader_Get_Segment_t method = (LUCY_PListReader_Get_Segment_t)cfish_obj_method(self, LUCY_PListReader_Get_Segment_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_PListReader_Get_Seg_Tick_OFFSET;
static CFISH_INLINE int32_t
LUCY_PListReader_Get_Seg_Tick(lucy_PostingListReader* self) {
    const LUCY_PListReader_Get_Seg_Tick_t method = (LUCY_PListReader_Get_Seg_Tick_t)cfish_obj_method(self, LUCY_PListReader_Get_Seg_Tick_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_PListReader_Close_OFFSET;
static CFISH_INLINE void
LUCY_PListReader_Close(lucy_PostingListReader* self) {
    const LUCY_PListReader_Close_t method = (LUCY_PListReader_Close_t)cfish_obj_method(self, LUCY_PListReader_Close_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_PListReader_Posting_List_OFFSET;
static CFISH_INLINE lucy_PostingList*
LUCY_PListReader_Posting_List(lucy_PostingListReader* self, cfish_String* field, cfish_Obj* term) {
    const LUCY_PListReader_Posting_List_t method = (LUCY_PListReader_Posting_List_t)cfish_obj_method(self, LUCY_PListReader_Posting_List_OFFSET);
    return method(self, field, term);
}

extern LUCY_VISIBLE uint32_t LUCY_PListReader_Get_Lex_Reader_OFFSET;
static CFISH_INLINE lucy_LexiconReader*
LUCY_PListReader_Get_Lex_Reader(lucy_PostingListReader* self) {
    const LUCY_PListReader_Get_Lex_Reader_t method = (LUCY_PListReader_Get_Lex_Reader_t)cfish_obj_method(self, LUCY_PListReader_Get_Lex_Reader_OFFSET);
    return method(self);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#define Lucy_PListReader_Posting_List_OVERRIDE NULL
#define Lucy_PListReader_Get_Lex_Reader_OVERRIDE NULL
#else
lucy_PostingList*
Lucy_PListReader_Posting_List_OVERRIDE(lucy_PostingListReader* self, cfish_String* field, cfish_Obj* term);
lucy_LexiconReader*
Lucy_PListReader_Get_Lex_Reader_OVERRIDE(lucy_PostingListReader* self);
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define PostingListReader lucy_PostingListReader
  #define POSTINGLISTREADER LUCY_POSTINGLISTREADER
  #define PListReader_init lucy_PListReader_init
  #define PListReader_get_class lucy_PListReader_get_class
  #define PListReader_get_class_name lucy_PListReader_get_class_name
  #define PListReader_is_a lucy_PListReader_is_a
  #define PListReader_Posting_List_IMP LUCY_PListReader_Posting_List_IMP
  #define PListReader_Get_Lex_Reader_IMP LUCY_PListReader_Get_Lex_Reader_IMP
  #define PListReader_Aggregator_IMP LUCY_PListReader_Aggregator_IMP
  #define PListReader_To_Host LUCY_PListReader_To_Host
  #define PListReader_To_Host_t LUCY_PListReader_To_Host_t
  #define PListReader_Clone LUCY_PListReader_Clone
  #define PListReader_Clone_t LUCY_PListReader_Clone_t
  #define PListReader_Equals LUCY_PListReader_Equals
  #define PListReader_Equals_t LUCY_PListReader_Equals_t
  #define PListReader_Compare_To LUCY_PListReader_Compare_To
  #define PListReader_Compare_To_t LUCY_PListReader_Compare_To_t
  #define PListReader_Destroy LUCY_PListReader_Destroy
  #define PListReader_Destroy_t LUCY_PListReader_Destroy_t
  #define PListReader_To_String LUCY_PListReader_To_String
  #define PListReader_To_String_t LUCY_PListReader_To_String_t
  #define PListReader_Aggregator LUCY_PListReader_Aggregator
  #define PListReader_Aggregator_t LUCY_PListReader_Aggregator_t
  #define PListReader_Get_Schema LUCY_PListReader_Get_Schema
  #define PListReader_Get_Schema_t LUCY_PListReader_Get_Schema_t
  #define PListReader_Get_Folder LUCY_PListReader_Get_Folder
  #define PListReader_Get_Folder_t LUCY_PListReader_Get_Folder_t
  #define PListReader_Get_Snapshot LUCY_PListReader_Get_Snapshot
  #define PListReader_Get_Snapshot_t LUCY_PListReader_Get_Snapshot_t
  #define PListReader_Get_Segments LUCY_PListReader_Get_Segments
  #define PListReader_Get_Segments_t LUCY_PListReader_Get_Segments_t
  #define PListReader_Get_Segment LUCY_PListReader_Get_Segment
  #define PListReader_Get_Segment_t LUCY_PListReader_Get_Segment_t
  #define PListReader_Get_Seg_Tick LUCY_PListReader_Get_Seg_Tick
  #define PListReader_Get_Seg_Tick_t LUCY_PListReader_Get_Seg_Tick_t
  #define PListReader_Close LUCY_PListReader_Close
  #define PListReader_Close_t LUCY_PListReader_Close_t
  #define PListReader_Posting_List LUCY_PListReader_Posting_List
  #define PListReader_Posting_List_t LUCY_PListReader_Posting_List_t
  #define PListReader_Get_Lex_Reader LUCY_PListReader_Get_Lex_Reader
  #define PListReader_Get_Lex_Reader_t LUCY_PListReader_Get_Lex_Reader_t
#endif /* LUCY_USE_SHORT_NAMES */



/* Include the header for this class's parent. 
 */

#include "Lucy/Index/PostingListReader.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_DEFAULTPOSTINGLISTREADER
extern uint32_t lucy_DefPListReader_IVARS_OFFSET;
typedef struct lucy_DefaultPostingListReaderIVARS lucy_DefaultPostingListReaderIVARS;
static CFISH_INLINE lucy_DefaultPostingListReaderIVARS*
lucy_DefPListReader_IVARS(lucy_DefaultPostingListReader *self) {
   char *ptr = (char*)self + lucy_DefPListReader_IVARS_OFFSET;
   return (lucy_DefaultPostingListReaderIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define DefaultPostingListReaderIVARS lucy_DefaultPostingListReaderIVARS
  #define DefPListReader_IVARS lucy_DefPListReader_IVARS
#endif

struct lucy_DefaultPostingListReaderIVARS {
    lucy_Schema* schema;
    lucy_Folder* folder;
    lucy_Snapshot* snapshot;
    cfish_Vector* segments;
    lucy_Segment* segment;
    int32_t seg_tick;
    lucy_LexiconReader* lex_reader;
};

#endif /* C_LUCY_DEFAULTPOSTINGLISTREADER */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_DefaultPostingListReader*
lucy_DefPListReader_new(lucy_Schema* schema, lucy_Folder* folder, lucy_Snapshot* snapshot, cfish_Vector* segments, int32_t seg_tick, lucy_LexiconReader* lex_reader);

LUCY_VISIBLE lucy_DefaultPostingListReader*
lucy_DefPListReader_init(lucy_DefaultPostingListReader* self, lucy_Schema* schema, lucy_Folder* folder, lucy_Snapshot* snapshot, cfish_Vector* segments, int32_t seg_tick, lucy_LexiconReader* lex_reader);

lucy_SegPostingList*
LUCY_DefPListReader_Posting_List_IMP(lucy_DefaultPostingListReader* self, cfish_String* field, cfish_Obj* term);

lucy_LexiconReader*
LUCY_DefPListReader_Get_Lex_Reader_IMP(lucy_DefaultPostingListReader* self);

void
LUCY_DefPListReader_Close_IMP(lucy_DefaultPostingListReader* self);

void
LUCY_DefPListReader_Destroy_IMP(lucy_DefaultPostingListReader* self);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_DefPListReader_To_Host_t)(lucy_DefaultPostingListReader* self, void* vcache);

typedef cfish_Obj*
(*LUCY_DefPListReader_Clone_t)(lucy_DefaultPostingListReader* self);

typedef bool
(*LUCY_DefPListReader_Equals_t)(lucy_DefaultPostingListReader* self, cfish_Obj* other);

typedef int32_t
(*LUCY_DefPListReader_Compare_To_t)(lucy_DefaultPostingListReader* self, cfish_Obj* other);

typedef void
(*LUCY_DefPListReader_Destroy_t)(lucy_DefaultPostingListReader* self);

typedef cfish_String*
(*LUCY_DefPListReader_To_String_t)(lucy_DefaultPostingListReader* self);

typedef lucy_PostingListReader*
(*LUCY_DefPListReader_Aggregator_t)(lucy_DefaultPostingListReader* self, cfish_Vector* readers, lucy_I32Array* offsets);

typedef lucy_Schema*
(*LUCY_DefPListReader_Get_Schema_t)(lucy_DefaultPostingListReader* self);

typedef lucy_Folder*
(*LUCY_DefPListReader_Get_Folder_t)(lucy_DefaultPostingListReader* self);

typedef lucy_Snapshot*
(*LUCY_DefPListReader_Get_Snapshot_t)(lucy_DefaultPostingListReader* self);

typedef cfish_Vector*
(*LUCY_DefPListReader_Get_Segments_t)(lucy_DefaultPostingListReader* self);

typedef lucy_Segment*
(*LUCY_DefPListReader_Get_Segment_t)(lucy_DefaultPostingListReader* self);

typedef int32_t
(*LUCY_DefPListReader_Get_Seg_Tick_t)(lucy_DefaultPostingListReader* self);

typedef void
(*LUCY_DefPListReader_Close_t)(lucy_DefaultPostingListReader* self);

typedef lucy_SegPostingList*
(*LUCY_DefPListReader_Posting_List_t)(lucy_DefaultPostingListReader* self, cfish_String* field, cfish_Obj* term);

typedef lucy_LexiconReader*
(*LUCY_DefPListReader_Get_Lex_Reader_t)(lucy_DefaultPostingListReader* self);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_DefPListReader_get_class(lucy_DefaultPostingListReader *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_DefPListReader_get_class_name(lucy_DefaultPostingListReader *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_DefPListReader_is_a(lucy_DefaultPostingListReader *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_DefPListReader_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_DefPListReader_To_Host(lucy_DefaultPostingListReader* self, void* vcache) {
    const LUCY_DefPListReader_To_Host_t method = (LUCY_DefPListReader_To_Host_t)cfish_obj_method(self, LUCY_DefPListReader_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_DefPListReader_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_DefPListReader_Clone(lucy_DefaultPostingListReader* self) {
    const LUCY_DefPListReader_Clone_t method = (LUCY_DefPListReader_Clone_t)cfish_obj_method(self, LUCY_DefPListReader_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DefPListReader_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_DefPListReader_Equals(lucy_DefaultPostingListReader* self, cfish_Obj* other) {
    const LUCY_DefPListReader_Equals_t method = (LUCY_DefPListReader_Equals_t)cfish_obj_method(self, LUCY_DefPListReader_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_DefPListReader_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_DefPListReader_Compare_To(lucy_DefaultPostingListReader* self, cfish_Obj* other) {
    const LUCY_DefPListReader_Compare_To_t method = (LUCY_DefPListReader_Compare_To_t)cfish_obj_method(self, LUCY_DefPListReader_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_DefPListReader_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_DefPListReader_Destroy(lucy_DefaultPostingListReader* self) {
    const LUCY_DefPListReader_Destroy_t method = (LUCY_DefPListReader_Destroy_t)cfish_obj_method(self, LUCY_DefPListReader_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DefPListReader_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_DefPListReader_To_String(lucy_DefaultPostingListReader* self) {
    const LUCY_DefPListReader_To_String_t method = (LUCY_DefPListReader_To_String_t)cfish_obj_method(self, LUCY_DefPListReader_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DefPListReader_Aggregator_OFFSET;
static CFISH_INLINE lucy_PostingListReader*
LUCY_DefPListReader_Aggregator(lucy_DefaultPostingListReader* self, cfish_Vector* readers, lucy_I32Array* offsets) {
    const LUCY_DefPListReader_Aggregator_t method = (LUCY_DefPListReader_Aggregator_t)cfish_obj_method(self, LUCY_DefPListReader_Aggregator_OFFSET);
    return method(self, readers, offsets);
}

extern LUCY_VISIBLE uint32_t LUCY_DefPListReader_Get_Schema_OFFSET;
static CFISH_INLINE lucy_Schema*
LUCY_DefPListReader_Get_Schema(lucy_DefaultPostingListReader* self) {
    const LUCY_DefPListReader_Get_Schema_t method = (LUCY_DefPListReader_Get_Schema_t)cfish_obj_method(self, LUCY_DefPListReader_Get_Schema_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DefPListReader_Get_Folder_OFFSET;
static CFISH_INLINE lucy_Folder*
LUCY_DefPListReader_Get_Folder(lucy_DefaultPostingListReader* self) {
    const LUCY_DefPListReader_Get_Folder_t method = (LUCY_DefPListReader_Get_Folder_t)cfish_obj_method(self, LUCY_DefPListReader_Get_Folder_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DefPListReader_Get_Snapshot_OFFSET;
static CFISH_INLINE lucy_Snapshot*
LUCY_DefPListReader_Get_Snapshot(lucy_DefaultPostingListReader* self) {
    const LUCY_DefPListReader_Get_Snapshot_t method = (LUCY_DefPListReader_Get_Snapshot_t)cfish_obj_method(self, LUCY_DefPListReader_Get_Snapshot_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DefPListReader_Get_Segments_OFFSET;
static CFISH_INLINE cfish_Vector*
LUCY_DefPListReader_Get_Segments(lucy_DefaultPostingListReader* self) {
    const LUCY_DefPListReader_Get_Segments_t method = (LUCY_DefPListReader_Get_Segments_t)cfish_obj_method(self, LUCY_DefPListReader_Get_Segments_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DefPListReader_Get_Segment_OFFSET;
static CFISH_INLINE lucy_Segment*
LUCY_DefPListReader_Get_Segment(lucy_DefaultPostingListReader* self) {
    const LUCY_DefPListReader_Get_Segment_t method = (LUCY_DefPListReader_Get_Segment_t)cfish_obj_method(self, LUCY_DefPListReader_Get_Segment_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DefPListReader_Get_Seg_Tick_OFFSET;
static CFISH_INLINE int32_t
LUCY_DefPListReader_Get_Seg_Tick(lucy_DefaultPostingListReader* self) {
    const LUCY_DefPListReader_Get_Seg_Tick_t method = (LUCY_DefPListReader_Get_Seg_Tick_t)cfish_obj_method(self, LUCY_DefPListReader_Get_Seg_Tick_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DefPListReader_Close_OFFSET;
static CFISH_INLINE void
LUCY_DefPListReader_Close(lucy_DefaultPostingListReader* self) {
    const LUCY_DefPListReader_Close_t method = (LUCY_DefPListReader_Close_t)cfish_obj_method(self, LUCY_DefPListReader_Close_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DefPListReader_Posting_List_OFFSET;
static CFISH_INLINE lucy_SegPostingList*
LUCY_DefPListReader_Posting_List(lucy_DefaultPostingListReader* self, cfish_String* field, cfish_Obj* term) {
    const LUCY_DefPListReader_Posting_List_t method = (LUCY_DefPListReader_Posting_List_t)cfish_obj_method(self, LUCY_DefPListReader_Posting_List_OFFSET);
    return method(self, field, term);
}

extern LUCY_VISIBLE uint32_t LUCY_DefPListReader_Get_Lex_Reader_OFFSET;
static CFISH_INLINE lucy_LexiconReader*
LUCY_DefPListReader_Get_Lex_Reader(lucy_DefaultPostingListReader* self) {
    const LUCY_DefPListReader_Get_Lex_Reader_t method = (LUCY_DefPListReader_Get_Lex_Reader_t)cfish_obj_method(self, LUCY_DefPListReader_Get_Lex_Reader_OFFSET);
    return method(self);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#else
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define DefaultPostingListReader lucy_DefaultPostingListReader
  #define DEFAULTPOSTINGLISTREADER LUCY_DEFAULTPOSTINGLISTREADER
  #define DefPListReader_new lucy_DefPListReader_new
  #define DefPListReader_init lucy_DefPListReader_init
  #define DefPListReader_get_class lucy_DefPListReader_get_class
  #define DefPListReader_get_class_name lucy_DefPListReader_get_class_name
  #define DefPListReader_is_a lucy_DefPListReader_is_a
  #define DefPListReader_Posting_List_IMP LUCY_DefPListReader_Posting_List_IMP
  #define DefPListReader_Get_Lex_Reader_IMP LUCY_DefPListReader_Get_Lex_Reader_IMP
  #define DefPListReader_Close_IMP LUCY_DefPListReader_Close_IMP
  #define DefPListReader_Destroy_IMP LUCY_DefPListReader_Destroy_IMP
  #define DefPListReader_To_Host LUCY_DefPListReader_To_Host
  #define DefPListReader_To_Host_t LUCY_DefPListReader_To_Host_t
  #define DefPListReader_Clone LUCY_DefPListReader_Clone
  #define DefPListReader_Clone_t LUCY_DefPListReader_Clone_t
  #define DefPListReader_Equals LUCY_DefPListReader_Equals
  #define DefPListReader_Equals_t LUCY_DefPListReader_Equals_t
  #define DefPListReader_Compare_To LUCY_DefPListReader_Compare_To
  #define DefPListReader_Compare_To_t LUCY_DefPListReader_Compare_To_t
  #define DefPListReader_Destroy LUCY_DefPListReader_Destroy
  #define DefPListReader_Destroy_t LUCY_DefPListReader_Destroy_t
  #define DefPListReader_To_String LUCY_DefPListReader_To_String
  #define DefPListReader_To_String_t LUCY_DefPListReader_To_String_t
  #define DefPListReader_Aggregator LUCY_DefPListReader_Aggregator
  #define DefPListReader_Aggregator_t LUCY_DefPListReader_Aggregator_t
  #define DefPListReader_Get_Schema LUCY_DefPListReader_Get_Schema
  #define DefPListReader_Get_Schema_t LUCY_DefPListReader_Get_Schema_t
  #define DefPListReader_Get_Folder LUCY_DefPListReader_Get_Folder
  #define DefPListReader_Get_Folder_t LUCY_DefPListReader_Get_Folder_t
  #define DefPListReader_Get_Snapshot LUCY_DefPListReader_Get_Snapshot
  #define DefPListReader_Get_Snapshot_t LUCY_DefPListReader_Get_Snapshot_t
  #define DefPListReader_Get_Segments LUCY_DefPListReader_Get_Segments
  #define DefPListReader_Get_Segments_t LUCY_DefPListReader_Get_Segments_t
  #define DefPListReader_Get_Segment LUCY_DefPListReader_Get_Segment
  #define DefPListReader_Get_Segment_t LUCY_DefPListReader_Get_Segment_t
  #define DefPListReader_Get_Seg_Tick LUCY_DefPListReader_Get_Seg_Tick
  #define DefPListReader_Get_Seg_Tick_t LUCY_DefPListReader_Get_Seg_Tick_t
  #define DefPListReader_Close LUCY_DefPListReader_Close
  #define DefPListReader_Close_t LUCY_DefPListReader_Close_t
  #define DefPListReader_Posting_List LUCY_DefPListReader_Posting_List
  #define DefPListReader_Posting_List_t LUCY_DefPListReader_Posting_List_t
  #define DefPListReader_Get_Lex_Reader LUCY_DefPListReader_Get_Lex_Reader
  #define DefPListReader_Get_Lex_Reader_t LUCY_DefPListReader_Get_Lex_Reader_t
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_INDEX_POSTINGLISTREADER */




