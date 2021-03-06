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


#ifndef H_LUCY_INDEX_SORTREADER
#define H_LUCY_INDEX_SORTREADER 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Lucy/Index/DataReader.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_SORTREADER
extern uint32_t lucy_SortReader_IVARS_OFFSET;
typedef struct lucy_SortReaderIVARS lucy_SortReaderIVARS;
static CFISH_INLINE lucy_SortReaderIVARS*
lucy_SortReader_IVARS(lucy_SortReader *self) {
   char *ptr = (char*)self + lucy_SortReader_IVARS_OFFSET;
   return (lucy_SortReaderIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define SortReaderIVARS lucy_SortReaderIVARS
  #define SortReader_IVARS lucy_SortReader_IVARS
#endif

struct lucy_SortReaderIVARS {
    lucy_Schema* schema;
    lucy_Folder* folder;
    lucy_Snapshot* snapshot;
    cfish_Vector* segments;
    lucy_Segment* segment;
    int32_t seg_tick;
};

#endif /* C_LUCY_SORTREADER */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_SortReader*
lucy_SortReader_init(lucy_SortReader* self, lucy_Schema* schema, lucy_Folder* folder, lucy_Snapshot* snapshot, cfish_Vector* segments, int32_t seg_tick);

lucy_SortCache*
LUCY_SortReader_Fetch_Sort_Cache_IMP(lucy_SortReader* self, cfish_String* field);

lucy_DataReader*
LUCY_SortReader_Aggregator_IMP(lucy_SortReader* self, cfish_Vector* readers, lucy_I32Array* offsets);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_SortReader_To_Host_t)(lucy_SortReader* self, void* vcache);

typedef cfish_Obj*
(*LUCY_SortReader_Clone_t)(lucy_SortReader* self);

typedef bool
(*LUCY_SortReader_Equals_t)(lucy_SortReader* self, cfish_Obj* other);

typedef int32_t
(*LUCY_SortReader_Compare_To_t)(lucy_SortReader* self, cfish_Obj* other);

typedef void
(*LUCY_SortReader_Destroy_t)(lucy_SortReader* self);

typedef cfish_String*
(*LUCY_SortReader_To_String_t)(lucy_SortReader* self);

typedef lucy_DataReader*
(*LUCY_SortReader_Aggregator_t)(lucy_SortReader* self, cfish_Vector* readers, lucy_I32Array* offsets);

typedef lucy_Schema*
(*LUCY_SortReader_Get_Schema_t)(lucy_SortReader* self);

typedef lucy_Folder*
(*LUCY_SortReader_Get_Folder_t)(lucy_SortReader* self);

typedef lucy_Snapshot*
(*LUCY_SortReader_Get_Snapshot_t)(lucy_SortReader* self);

typedef cfish_Vector*
(*LUCY_SortReader_Get_Segments_t)(lucy_SortReader* self);

typedef lucy_Segment*
(*LUCY_SortReader_Get_Segment_t)(lucy_SortReader* self);

typedef int32_t
(*LUCY_SortReader_Get_Seg_Tick_t)(lucy_SortReader* self);

typedef void
(*LUCY_SortReader_Close_t)(lucy_SortReader* self);

typedef lucy_SortCache*
(*LUCY_SortReader_Fetch_Sort_Cache_t)(lucy_SortReader* self, cfish_String* field);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_SortReader_get_class(lucy_SortReader *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_SortReader_get_class_name(lucy_SortReader *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_SortReader_is_a(lucy_SortReader *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_SortReader_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_SortReader_To_Host(lucy_SortReader* self, void* vcache) {
    const LUCY_SortReader_To_Host_t method = (LUCY_SortReader_To_Host_t)cfish_obj_method(self, LUCY_SortReader_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_SortReader_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_SortReader_Clone(lucy_SortReader* self) {
    const LUCY_SortReader_Clone_t method = (LUCY_SortReader_Clone_t)cfish_obj_method(self, LUCY_SortReader_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SortReader_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_SortReader_Equals(lucy_SortReader* self, cfish_Obj* other) {
    const LUCY_SortReader_Equals_t method = (LUCY_SortReader_Equals_t)cfish_obj_method(self, LUCY_SortReader_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_SortReader_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_SortReader_Compare_To(lucy_SortReader* self, cfish_Obj* other) {
    const LUCY_SortReader_Compare_To_t method = (LUCY_SortReader_Compare_To_t)cfish_obj_method(self, LUCY_SortReader_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_SortReader_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_SortReader_Destroy(lucy_SortReader* self) {
    const LUCY_SortReader_Destroy_t method = (LUCY_SortReader_Destroy_t)cfish_obj_method(self, LUCY_SortReader_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SortReader_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_SortReader_To_String(lucy_SortReader* self) {
    const LUCY_SortReader_To_String_t method = (LUCY_SortReader_To_String_t)cfish_obj_method(self, LUCY_SortReader_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SortReader_Aggregator_OFFSET;
static CFISH_INLINE lucy_DataReader*
LUCY_SortReader_Aggregator(lucy_SortReader* self, cfish_Vector* readers, lucy_I32Array* offsets) {
    const LUCY_SortReader_Aggregator_t method = (LUCY_SortReader_Aggregator_t)cfish_obj_method(self, LUCY_SortReader_Aggregator_OFFSET);
    return method(self, readers, offsets);
}

extern LUCY_VISIBLE uint32_t LUCY_SortReader_Get_Schema_OFFSET;
static CFISH_INLINE lucy_Schema*
LUCY_SortReader_Get_Schema(lucy_SortReader* self) {
    const LUCY_SortReader_Get_Schema_t method = (LUCY_SortReader_Get_Schema_t)cfish_obj_method(self, LUCY_SortReader_Get_Schema_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SortReader_Get_Folder_OFFSET;
static CFISH_INLINE lucy_Folder*
LUCY_SortReader_Get_Folder(lucy_SortReader* self) {
    const LUCY_SortReader_Get_Folder_t method = (LUCY_SortReader_Get_Folder_t)cfish_obj_method(self, LUCY_SortReader_Get_Folder_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SortReader_Get_Snapshot_OFFSET;
static CFISH_INLINE lucy_Snapshot*
LUCY_SortReader_Get_Snapshot(lucy_SortReader* self) {
    const LUCY_SortReader_Get_Snapshot_t method = (LUCY_SortReader_Get_Snapshot_t)cfish_obj_method(self, LUCY_SortReader_Get_Snapshot_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SortReader_Get_Segments_OFFSET;
static CFISH_INLINE cfish_Vector*
LUCY_SortReader_Get_Segments(lucy_SortReader* self) {
    const LUCY_SortReader_Get_Segments_t method = (LUCY_SortReader_Get_Segments_t)cfish_obj_method(self, LUCY_SortReader_Get_Segments_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SortReader_Get_Segment_OFFSET;
static CFISH_INLINE lucy_Segment*
LUCY_SortReader_Get_Segment(lucy_SortReader* self) {
    const LUCY_SortReader_Get_Segment_t method = (LUCY_SortReader_Get_Segment_t)cfish_obj_method(self, LUCY_SortReader_Get_Segment_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SortReader_Get_Seg_Tick_OFFSET;
static CFISH_INLINE int32_t
LUCY_SortReader_Get_Seg_Tick(lucy_SortReader* self) {
    const LUCY_SortReader_Get_Seg_Tick_t method = (LUCY_SortReader_Get_Seg_Tick_t)cfish_obj_method(self, LUCY_SortReader_Get_Seg_Tick_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SortReader_Close_OFFSET;
static CFISH_INLINE void
LUCY_SortReader_Close(lucy_SortReader* self) {
    const LUCY_SortReader_Close_t method = (LUCY_SortReader_Close_t)cfish_obj_method(self, LUCY_SortReader_Close_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SortReader_Fetch_Sort_Cache_OFFSET;
static CFISH_INLINE lucy_SortCache*
LUCY_SortReader_Fetch_Sort_Cache(lucy_SortReader* self, cfish_String* field) {
    const LUCY_SortReader_Fetch_Sort_Cache_t method = (LUCY_SortReader_Fetch_Sort_Cache_t)cfish_obj_method(self, LUCY_SortReader_Fetch_Sort_Cache_OFFSET);
    return method(self, field);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#define Lucy_SortReader_Fetch_Sort_Cache_OVERRIDE NULL
#else
lucy_SortCache*
Lucy_SortReader_Fetch_Sort_Cache_OVERRIDE(lucy_SortReader* self, cfish_String* field);
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define SortReader lucy_SortReader
  #define SORTREADER LUCY_SORTREADER
  #define SortReader_init lucy_SortReader_init
  #define SortReader_get_class lucy_SortReader_get_class
  #define SortReader_get_class_name lucy_SortReader_get_class_name
  #define SortReader_is_a lucy_SortReader_is_a
  #define SortReader_Fetch_Sort_Cache_IMP LUCY_SortReader_Fetch_Sort_Cache_IMP
  #define SortReader_Aggregator_IMP LUCY_SortReader_Aggregator_IMP
  #define SortReader_To_Host LUCY_SortReader_To_Host
  #define SortReader_To_Host_t LUCY_SortReader_To_Host_t
  #define SortReader_Clone LUCY_SortReader_Clone
  #define SortReader_Clone_t LUCY_SortReader_Clone_t
  #define SortReader_Equals LUCY_SortReader_Equals
  #define SortReader_Equals_t LUCY_SortReader_Equals_t
  #define SortReader_Compare_To LUCY_SortReader_Compare_To
  #define SortReader_Compare_To_t LUCY_SortReader_Compare_To_t
  #define SortReader_Destroy LUCY_SortReader_Destroy
  #define SortReader_Destroy_t LUCY_SortReader_Destroy_t
  #define SortReader_To_String LUCY_SortReader_To_String
  #define SortReader_To_String_t LUCY_SortReader_To_String_t
  #define SortReader_Aggregator LUCY_SortReader_Aggregator
  #define SortReader_Aggregator_t LUCY_SortReader_Aggregator_t
  #define SortReader_Get_Schema LUCY_SortReader_Get_Schema
  #define SortReader_Get_Schema_t LUCY_SortReader_Get_Schema_t
  #define SortReader_Get_Folder LUCY_SortReader_Get_Folder
  #define SortReader_Get_Folder_t LUCY_SortReader_Get_Folder_t
  #define SortReader_Get_Snapshot LUCY_SortReader_Get_Snapshot
  #define SortReader_Get_Snapshot_t LUCY_SortReader_Get_Snapshot_t
  #define SortReader_Get_Segments LUCY_SortReader_Get_Segments
  #define SortReader_Get_Segments_t LUCY_SortReader_Get_Segments_t
  #define SortReader_Get_Segment LUCY_SortReader_Get_Segment
  #define SortReader_Get_Segment_t LUCY_SortReader_Get_Segment_t
  #define SortReader_Get_Seg_Tick LUCY_SortReader_Get_Seg_Tick
  #define SortReader_Get_Seg_Tick_t LUCY_SortReader_Get_Seg_Tick_t
  #define SortReader_Close LUCY_SortReader_Close
  #define SortReader_Close_t LUCY_SortReader_Close_t
  #define SortReader_Fetch_Sort_Cache LUCY_SortReader_Fetch_Sort_Cache
  #define SortReader_Fetch_Sort_Cache_t LUCY_SortReader_Fetch_Sort_Cache_t
#endif /* LUCY_USE_SHORT_NAMES */



/* Include the header for this class's parent. 
 */

#include "Lucy/Index/SortReader.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_DEFAULTSORTREADER
extern uint32_t lucy_DefSortReader_IVARS_OFFSET;
typedef struct lucy_DefaultSortReaderIVARS lucy_DefaultSortReaderIVARS;
static CFISH_INLINE lucy_DefaultSortReaderIVARS*
lucy_DefSortReader_IVARS(lucy_DefaultSortReader *self) {
   char *ptr = (char*)self + lucy_DefSortReader_IVARS_OFFSET;
   return (lucy_DefaultSortReaderIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define DefaultSortReaderIVARS lucy_DefaultSortReaderIVARS
  #define DefSortReader_IVARS lucy_DefSortReader_IVARS
#endif

struct lucy_DefaultSortReaderIVARS {
    lucy_Schema* schema;
    lucy_Folder* folder;
    lucy_Snapshot* snapshot;
    cfish_Vector* segments;
    lucy_Segment* segment;
    int32_t seg_tick;
    cfish_Hash* caches;
    cfish_Hash* counts;
    cfish_Hash* null_ords;
    cfish_Hash* ord_widths;
    int32_t format;
};

#endif /* C_LUCY_DEFAULTSORTREADER */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_DefaultSortReader*
lucy_DefSortReader_new(lucy_Schema* schema, lucy_Folder* folder, lucy_Snapshot* snapshot, cfish_Vector* segments, int32_t seg_tick);

LUCY_VISIBLE lucy_DefaultSortReader*
lucy_DefSortReader_init(lucy_DefaultSortReader* self, lucy_Schema* schema, lucy_Folder* folder, lucy_Snapshot* snapshot, cfish_Vector* segments, int32_t seg_tick);

lucy_SortCache*
LUCY_DefSortReader_Fetch_Sort_Cache_IMP(lucy_DefaultSortReader* self, cfish_String* field);

void
LUCY_DefSortReader_Close_IMP(lucy_DefaultSortReader* self);

void
LUCY_DefSortReader_Destroy_IMP(lucy_DefaultSortReader* self);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_DefSortReader_To_Host_t)(lucy_DefaultSortReader* self, void* vcache);

typedef cfish_Obj*
(*LUCY_DefSortReader_Clone_t)(lucy_DefaultSortReader* self);

typedef bool
(*LUCY_DefSortReader_Equals_t)(lucy_DefaultSortReader* self, cfish_Obj* other);

typedef int32_t
(*LUCY_DefSortReader_Compare_To_t)(lucy_DefaultSortReader* self, cfish_Obj* other);

typedef void
(*LUCY_DefSortReader_Destroy_t)(lucy_DefaultSortReader* self);

typedef cfish_String*
(*LUCY_DefSortReader_To_String_t)(lucy_DefaultSortReader* self);

typedef lucy_DataReader*
(*LUCY_DefSortReader_Aggregator_t)(lucy_DefaultSortReader* self, cfish_Vector* readers, lucy_I32Array* offsets);

typedef lucy_Schema*
(*LUCY_DefSortReader_Get_Schema_t)(lucy_DefaultSortReader* self);

typedef lucy_Folder*
(*LUCY_DefSortReader_Get_Folder_t)(lucy_DefaultSortReader* self);

typedef lucy_Snapshot*
(*LUCY_DefSortReader_Get_Snapshot_t)(lucy_DefaultSortReader* self);

typedef cfish_Vector*
(*LUCY_DefSortReader_Get_Segments_t)(lucy_DefaultSortReader* self);

typedef lucy_Segment*
(*LUCY_DefSortReader_Get_Segment_t)(lucy_DefaultSortReader* self);

typedef int32_t
(*LUCY_DefSortReader_Get_Seg_Tick_t)(lucy_DefaultSortReader* self);

typedef void
(*LUCY_DefSortReader_Close_t)(lucy_DefaultSortReader* self);

typedef lucy_SortCache*
(*LUCY_DefSortReader_Fetch_Sort_Cache_t)(lucy_DefaultSortReader* self, cfish_String* field);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_DefSortReader_get_class(lucy_DefaultSortReader *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_DefSortReader_get_class_name(lucy_DefaultSortReader *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_DefSortReader_is_a(lucy_DefaultSortReader *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_DefSortReader_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_DefSortReader_To_Host(lucy_DefaultSortReader* self, void* vcache) {
    const LUCY_DefSortReader_To_Host_t method = (LUCY_DefSortReader_To_Host_t)cfish_obj_method(self, LUCY_DefSortReader_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_DefSortReader_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_DefSortReader_Clone(lucy_DefaultSortReader* self) {
    const LUCY_DefSortReader_Clone_t method = (LUCY_DefSortReader_Clone_t)cfish_obj_method(self, LUCY_DefSortReader_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DefSortReader_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_DefSortReader_Equals(lucy_DefaultSortReader* self, cfish_Obj* other) {
    const LUCY_DefSortReader_Equals_t method = (LUCY_DefSortReader_Equals_t)cfish_obj_method(self, LUCY_DefSortReader_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_DefSortReader_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_DefSortReader_Compare_To(lucy_DefaultSortReader* self, cfish_Obj* other) {
    const LUCY_DefSortReader_Compare_To_t method = (LUCY_DefSortReader_Compare_To_t)cfish_obj_method(self, LUCY_DefSortReader_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_DefSortReader_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_DefSortReader_Destroy(lucy_DefaultSortReader* self) {
    const LUCY_DefSortReader_Destroy_t method = (LUCY_DefSortReader_Destroy_t)cfish_obj_method(self, LUCY_DefSortReader_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DefSortReader_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_DefSortReader_To_String(lucy_DefaultSortReader* self) {
    const LUCY_DefSortReader_To_String_t method = (LUCY_DefSortReader_To_String_t)cfish_obj_method(self, LUCY_DefSortReader_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DefSortReader_Aggregator_OFFSET;
static CFISH_INLINE lucy_DataReader*
LUCY_DefSortReader_Aggregator(lucy_DefaultSortReader* self, cfish_Vector* readers, lucy_I32Array* offsets) {
    const LUCY_DefSortReader_Aggregator_t method = (LUCY_DefSortReader_Aggregator_t)cfish_obj_method(self, LUCY_DefSortReader_Aggregator_OFFSET);
    return method(self, readers, offsets);
}

extern LUCY_VISIBLE uint32_t LUCY_DefSortReader_Get_Schema_OFFSET;
static CFISH_INLINE lucy_Schema*
LUCY_DefSortReader_Get_Schema(lucy_DefaultSortReader* self) {
    const LUCY_DefSortReader_Get_Schema_t method = (LUCY_DefSortReader_Get_Schema_t)cfish_obj_method(self, LUCY_DefSortReader_Get_Schema_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DefSortReader_Get_Folder_OFFSET;
static CFISH_INLINE lucy_Folder*
LUCY_DefSortReader_Get_Folder(lucy_DefaultSortReader* self) {
    const LUCY_DefSortReader_Get_Folder_t method = (LUCY_DefSortReader_Get_Folder_t)cfish_obj_method(self, LUCY_DefSortReader_Get_Folder_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DefSortReader_Get_Snapshot_OFFSET;
static CFISH_INLINE lucy_Snapshot*
LUCY_DefSortReader_Get_Snapshot(lucy_DefaultSortReader* self) {
    const LUCY_DefSortReader_Get_Snapshot_t method = (LUCY_DefSortReader_Get_Snapshot_t)cfish_obj_method(self, LUCY_DefSortReader_Get_Snapshot_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DefSortReader_Get_Segments_OFFSET;
static CFISH_INLINE cfish_Vector*
LUCY_DefSortReader_Get_Segments(lucy_DefaultSortReader* self) {
    const LUCY_DefSortReader_Get_Segments_t method = (LUCY_DefSortReader_Get_Segments_t)cfish_obj_method(self, LUCY_DefSortReader_Get_Segments_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DefSortReader_Get_Segment_OFFSET;
static CFISH_INLINE lucy_Segment*
LUCY_DefSortReader_Get_Segment(lucy_DefaultSortReader* self) {
    const LUCY_DefSortReader_Get_Segment_t method = (LUCY_DefSortReader_Get_Segment_t)cfish_obj_method(self, LUCY_DefSortReader_Get_Segment_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DefSortReader_Get_Seg_Tick_OFFSET;
static CFISH_INLINE int32_t
LUCY_DefSortReader_Get_Seg_Tick(lucy_DefaultSortReader* self) {
    const LUCY_DefSortReader_Get_Seg_Tick_t method = (LUCY_DefSortReader_Get_Seg_Tick_t)cfish_obj_method(self, LUCY_DefSortReader_Get_Seg_Tick_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DefSortReader_Close_OFFSET;
static CFISH_INLINE void
LUCY_DefSortReader_Close(lucy_DefaultSortReader* self) {
    const LUCY_DefSortReader_Close_t method = (LUCY_DefSortReader_Close_t)cfish_obj_method(self, LUCY_DefSortReader_Close_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DefSortReader_Fetch_Sort_Cache_OFFSET;
static CFISH_INLINE lucy_SortCache*
LUCY_DefSortReader_Fetch_Sort_Cache(lucy_DefaultSortReader* self, cfish_String* field) {
    const LUCY_DefSortReader_Fetch_Sort_Cache_t method = (LUCY_DefSortReader_Fetch_Sort_Cache_t)cfish_obj_method(self, LUCY_DefSortReader_Fetch_Sort_Cache_OFFSET);
    return method(self, field);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#else
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define DefaultSortReader lucy_DefaultSortReader
  #define DEFAULTSORTREADER LUCY_DEFAULTSORTREADER
  #define DefSortReader_new lucy_DefSortReader_new
  #define DefSortReader_init lucy_DefSortReader_init
  #define DefSortReader_get_class lucy_DefSortReader_get_class
  #define DefSortReader_get_class_name lucy_DefSortReader_get_class_name
  #define DefSortReader_is_a lucy_DefSortReader_is_a
  #define DefSortReader_Fetch_Sort_Cache_IMP LUCY_DefSortReader_Fetch_Sort_Cache_IMP
  #define DefSortReader_Close_IMP LUCY_DefSortReader_Close_IMP
  #define DefSortReader_Destroy_IMP LUCY_DefSortReader_Destroy_IMP
  #define DefSortReader_To_Host LUCY_DefSortReader_To_Host
  #define DefSortReader_To_Host_t LUCY_DefSortReader_To_Host_t
  #define DefSortReader_Clone LUCY_DefSortReader_Clone
  #define DefSortReader_Clone_t LUCY_DefSortReader_Clone_t
  #define DefSortReader_Equals LUCY_DefSortReader_Equals
  #define DefSortReader_Equals_t LUCY_DefSortReader_Equals_t
  #define DefSortReader_Compare_To LUCY_DefSortReader_Compare_To
  #define DefSortReader_Compare_To_t LUCY_DefSortReader_Compare_To_t
  #define DefSortReader_Destroy LUCY_DefSortReader_Destroy
  #define DefSortReader_Destroy_t LUCY_DefSortReader_Destroy_t
  #define DefSortReader_To_String LUCY_DefSortReader_To_String
  #define DefSortReader_To_String_t LUCY_DefSortReader_To_String_t
  #define DefSortReader_Aggregator LUCY_DefSortReader_Aggregator
  #define DefSortReader_Aggregator_t LUCY_DefSortReader_Aggregator_t
  #define DefSortReader_Get_Schema LUCY_DefSortReader_Get_Schema
  #define DefSortReader_Get_Schema_t LUCY_DefSortReader_Get_Schema_t
  #define DefSortReader_Get_Folder LUCY_DefSortReader_Get_Folder
  #define DefSortReader_Get_Folder_t LUCY_DefSortReader_Get_Folder_t
  #define DefSortReader_Get_Snapshot LUCY_DefSortReader_Get_Snapshot
  #define DefSortReader_Get_Snapshot_t LUCY_DefSortReader_Get_Snapshot_t
  #define DefSortReader_Get_Segments LUCY_DefSortReader_Get_Segments
  #define DefSortReader_Get_Segments_t LUCY_DefSortReader_Get_Segments_t
  #define DefSortReader_Get_Segment LUCY_DefSortReader_Get_Segment
  #define DefSortReader_Get_Segment_t LUCY_DefSortReader_Get_Segment_t
  #define DefSortReader_Get_Seg_Tick LUCY_DefSortReader_Get_Seg_Tick
  #define DefSortReader_Get_Seg_Tick_t LUCY_DefSortReader_Get_Seg_Tick_t
  #define DefSortReader_Close LUCY_DefSortReader_Close
  #define DefSortReader_Close_t LUCY_DefSortReader_Close_t
  #define DefSortReader_Fetch_Sort_Cache LUCY_DefSortReader_Fetch_Sort_Cache
  #define DefSortReader_Fetch_Sort_Cache_t LUCY_DefSortReader_Fetch_Sort_Cache_t
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_INDEX_SORTREADER */




