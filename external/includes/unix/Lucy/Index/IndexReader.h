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


#ifndef H_LUCY_INDEX_INDEXREADER
#define H_LUCY_INDEX_INDEXREADER 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Lucy/Index/DataReader.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_INDEXREADER
extern uint32_t lucy_IxReader_IVARS_OFFSET;
typedef struct lucy_IndexReaderIVARS lucy_IndexReaderIVARS;
static CFISH_INLINE lucy_IndexReaderIVARS*
lucy_IxReader_IVARS(lucy_IndexReader *self) {
   char *ptr = (char*)self + lucy_IxReader_IVARS_OFFSET;
   return (lucy_IndexReaderIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define IndexReaderIVARS lucy_IndexReaderIVARS
  #define IxReader_IVARS lucy_IxReader_IVARS
#endif

struct lucy_IndexReaderIVARS {
    lucy_Schema* schema;
    lucy_Folder* folder;
    lucy_Snapshot* snapshot;
    cfish_Vector* segments;
    lucy_Segment* segment;
    int32_t seg_tick;
    cfish_Hash* components;
    lucy_IndexManager* manager;
    lucy_Lock* read_lock;
    lucy_Lock* deletion_lock;
};

#endif /* C_LUCY_INDEXREADER */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_IndexReader*
lucy_IxReader_init(lucy_IndexReader* self, lucy_Schema* schema, lucy_Folder* folder, lucy_Snapshot* snapshot, cfish_Vector* segments, int32_t seg_tick, lucy_IndexManager* manager);

LUCY_VISIBLE lucy_IndexReader*
lucy_IxReader_open(cfish_Obj* index, lucy_Snapshot* snapshot, lucy_IndexManager* manager);

LUCY_VISIBLE lucy_IndexReader*
lucy_IxReader_do_open(lucy_IndexReader* self, cfish_Obj* index, lucy_Snapshot* snapshot, lucy_IndexManager* manager);

int32_t
LUCY_IxReader_Doc_Max_IMP(lucy_IndexReader* self);

int32_t
LUCY_IxReader_Doc_Count_IMP(lucy_IndexReader* self);

int32_t
LUCY_IxReader_Del_Count_IMP(lucy_IndexReader* self);

lucy_I32Array*
LUCY_IxReader_Offsets_IMP(lucy_IndexReader* self);

cfish_Vector*
LUCY_IxReader_Seg_Readers_IMP(lucy_IndexReader* self);

lucy_DataReader*
LUCY_IxReader_Obtain_IMP(lucy_IndexReader* self, cfish_String* api);

lucy_DataReader*
LUCY_IxReader_Fetch_IMP(lucy_IndexReader* self, cfish_String* api);

void
LUCY_IxReader_Close_IMP(lucy_IndexReader* self);

cfish_Hash*
LUCY_IxReader_Get_Components_IMP(lucy_IndexReader* self);

void
LUCY_IxReader_Destroy_IMP(lucy_IndexReader* self);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_IxReader_To_Host_t)(lucy_IndexReader* self, void* vcache);

typedef cfish_Obj*
(*LUCY_IxReader_Clone_t)(lucy_IndexReader* self);

typedef bool
(*LUCY_IxReader_Equals_t)(lucy_IndexReader* self, cfish_Obj* other);

typedef int32_t
(*LUCY_IxReader_Compare_To_t)(lucy_IndexReader* self, cfish_Obj* other);

typedef void
(*LUCY_IxReader_Destroy_t)(lucy_IndexReader* self);

typedef cfish_String*
(*LUCY_IxReader_To_String_t)(lucy_IndexReader* self);

typedef lucy_DataReader*
(*LUCY_IxReader_Aggregator_t)(lucy_IndexReader* self, cfish_Vector* readers, lucy_I32Array* offsets);

typedef lucy_Schema*
(*LUCY_IxReader_Get_Schema_t)(lucy_IndexReader* self);

typedef lucy_Folder*
(*LUCY_IxReader_Get_Folder_t)(lucy_IndexReader* self);

typedef lucy_Snapshot*
(*LUCY_IxReader_Get_Snapshot_t)(lucy_IndexReader* self);

typedef cfish_Vector*
(*LUCY_IxReader_Get_Segments_t)(lucy_IndexReader* self);

typedef lucy_Segment*
(*LUCY_IxReader_Get_Segment_t)(lucy_IndexReader* self);

typedef int32_t
(*LUCY_IxReader_Get_Seg_Tick_t)(lucy_IndexReader* self);

typedef void
(*LUCY_IxReader_Close_t)(lucy_IndexReader* self);

typedef int32_t
(*LUCY_IxReader_Doc_Max_t)(lucy_IndexReader* self);

typedef int32_t
(*LUCY_IxReader_Doc_Count_t)(lucy_IndexReader* self);

typedef int32_t
(*LUCY_IxReader_Del_Count_t)(lucy_IndexReader* self);

typedef lucy_I32Array*
(*LUCY_IxReader_Offsets_t)(lucy_IndexReader* self);

typedef cfish_Vector*
(*LUCY_IxReader_Seg_Readers_t)(lucy_IndexReader* self);

typedef lucy_DataReader*
(*LUCY_IxReader_Obtain_t)(lucy_IndexReader* self, cfish_String* api);

typedef lucy_DataReader*
(*LUCY_IxReader_Fetch_t)(lucy_IndexReader* self, cfish_String* api);

typedef cfish_Hash*
(*LUCY_IxReader_Get_Components_t)(lucy_IndexReader* self);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_IxReader_get_class(lucy_IndexReader *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_IxReader_get_class_name(lucy_IndexReader *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_IxReader_is_a(lucy_IndexReader *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_IxReader_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_IxReader_To_Host(lucy_IndexReader* self, void* vcache) {
    const LUCY_IxReader_To_Host_t method = (LUCY_IxReader_To_Host_t)cfish_obj_method(self, LUCY_IxReader_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_IxReader_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_IxReader_Clone(lucy_IndexReader* self) {
    const LUCY_IxReader_Clone_t method = (LUCY_IxReader_Clone_t)cfish_obj_method(self, LUCY_IxReader_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_IxReader_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_IxReader_Equals(lucy_IndexReader* self, cfish_Obj* other) {
    const LUCY_IxReader_Equals_t method = (LUCY_IxReader_Equals_t)cfish_obj_method(self, LUCY_IxReader_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_IxReader_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_IxReader_Compare_To(lucy_IndexReader* self, cfish_Obj* other) {
    const LUCY_IxReader_Compare_To_t method = (LUCY_IxReader_Compare_To_t)cfish_obj_method(self, LUCY_IxReader_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_IxReader_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_IxReader_Destroy(lucy_IndexReader* self) {
    const LUCY_IxReader_Destroy_t method = (LUCY_IxReader_Destroy_t)cfish_obj_method(self, LUCY_IxReader_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_IxReader_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_IxReader_To_String(lucy_IndexReader* self) {
    const LUCY_IxReader_To_String_t method = (LUCY_IxReader_To_String_t)cfish_obj_method(self, LUCY_IxReader_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_IxReader_Aggregator_OFFSET;
static CFISH_INLINE lucy_DataReader*
LUCY_IxReader_Aggregator(lucy_IndexReader* self, cfish_Vector* readers, lucy_I32Array* offsets) {
    const LUCY_IxReader_Aggregator_t method = (LUCY_IxReader_Aggregator_t)cfish_obj_method(self, LUCY_IxReader_Aggregator_OFFSET);
    return method(self, readers, offsets);
}

extern LUCY_VISIBLE uint32_t LUCY_IxReader_Get_Schema_OFFSET;
static CFISH_INLINE lucy_Schema*
LUCY_IxReader_Get_Schema(lucy_IndexReader* self) {
    const LUCY_IxReader_Get_Schema_t method = (LUCY_IxReader_Get_Schema_t)cfish_obj_method(self, LUCY_IxReader_Get_Schema_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_IxReader_Get_Folder_OFFSET;
static CFISH_INLINE lucy_Folder*
LUCY_IxReader_Get_Folder(lucy_IndexReader* self) {
    const LUCY_IxReader_Get_Folder_t method = (LUCY_IxReader_Get_Folder_t)cfish_obj_method(self, LUCY_IxReader_Get_Folder_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_IxReader_Get_Snapshot_OFFSET;
static CFISH_INLINE lucy_Snapshot*
LUCY_IxReader_Get_Snapshot(lucy_IndexReader* self) {
    const LUCY_IxReader_Get_Snapshot_t method = (LUCY_IxReader_Get_Snapshot_t)cfish_obj_method(self, LUCY_IxReader_Get_Snapshot_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_IxReader_Get_Segments_OFFSET;
static CFISH_INLINE cfish_Vector*
LUCY_IxReader_Get_Segments(lucy_IndexReader* self) {
    const LUCY_IxReader_Get_Segments_t method = (LUCY_IxReader_Get_Segments_t)cfish_obj_method(self, LUCY_IxReader_Get_Segments_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_IxReader_Get_Segment_OFFSET;
static CFISH_INLINE lucy_Segment*
LUCY_IxReader_Get_Segment(lucy_IndexReader* self) {
    const LUCY_IxReader_Get_Segment_t method = (LUCY_IxReader_Get_Segment_t)cfish_obj_method(self, LUCY_IxReader_Get_Segment_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_IxReader_Get_Seg_Tick_OFFSET;
static CFISH_INLINE int32_t
LUCY_IxReader_Get_Seg_Tick(lucy_IndexReader* self) {
    const LUCY_IxReader_Get_Seg_Tick_t method = (LUCY_IxReader_Get_Seg_Tick_t)cfish_obj_method(self, LUCY_IxReader_Get_Seg_Tick_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_IxReader_Close_OFFSET;
static CFISH_INLINE void
LUCY_IxReader_Close(lucy_IndexReader* self) {
    const LUCY_IxReader_Close_t method = (LUCY_IxReader_Close_t)cfish_obj_method(self, LUCY_IxReader_Close_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_IxReader_Doc_Max_OFFSET;
static CFISH_INLINE int32_t
LUCY_IxReader_Doc_Max(lucy_IndexReader* self) {
    const LUCY_IxReader_Doc_Max_t method = (LUCY_IxReader_Doc_Max_t)cfish_obj_method(self, LUCY_IxReader_Doc_Max_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_IxReader_Doc_Count_OFFSET;
static CFISH_INLINE int32_t
LUCY_IxReader_Doc_Count(lucy_IndexReader* self) {
    const LUCY_IxReader_Doc_Count_t method = (LUCY_IxReader_Doc_Count_t)cfish_obj_method(self, LUCY_IxReader_Doc_Count_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_IxReader_Del_Count_OFFSET;
static CFISH_INLINE int32_t
LUCY_IxReader_Del_Count(lucy_IndexReader* self) {
    const LUCY_IxReader_Del_Count_t method = (LUCY_IxReader_Del_Count_t)cfish_obj_method(self, LUCY_IxReader_Del_Count_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_IxReader_Offsets_OFFSET;
static CFISH_INLINE lucy_I32Array*
LUCY_IxReader_Offsets(lucy_IndexReader* self) {
    const LUCY_IxReader_Offsets_t method = (LUCY_IxReader_Offsets_t)cfish_obj_method(self, LUCY_IxReader_Offsets_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_IxReader_Seg_Readers_OFFSET;
static CFISH_INLINE cfish_Vector*
LUCY_IxReader_Seg_Readers(lucy_IndexReader* self) {
    const LUCY_IxReader_Seg_Readers_t method = (LUCY_IxReader_Seg_Readers_t)cfish_obj_method(self, LUCY_IxReader_Seg_Readers_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_IxReader_Obtain_OFFSET;
static CFISH_INLINE lucy_DataReader*
LUCY_IxReader_Obtain(lucy_IndexReader* self, cfish_String* api) {
    const LUCY_IxReader_Obtain_t method = (LUCY_IxReader_Obtain_t)cfish_obj_method(self, LUCY_IxReader_Obtain_OFFSET);
    return method(self, api);
}

extern LUCY_VISIBLE uint32_t LUCY_IxReader_Fetch_OFFSET;
static CFISH_INLINE lucy_DataReader*
LUCY_IxReader_Fetch(lucy_IndexReader* self, cfish_String* api) {
    const LUCY_IxReader_Fetch_t method = (LUCY_IxReader_Fetch_t)cfish_obj_method(self, LUCY_IxReader_Fetch_OFFSET);
    return method(self, api);
}

extern LUCY_VISIBLE uint32_t LUCY_IxReader_Get_Components_OFFSET;
static CFISH_INLINE cfish_Hash*
LUCY_IxReader_Get_Components(lucy_IndexReader* self) {
    const LUCY_IxReader_Get_Components_t method = (LUCY_IxReader_Get_Components_t)cfish_obj_method(self, LUCY_IxReader_Get_Components_OFFSET);
    return method(self);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#define Lucy_IxReader_Doc_Max_OVERRIDE NULL
#define Lucy_IxReader_Doc_Count_OVERRIDE NULL
#define Lucy_IxReader_Del_Count_OVERRIDE NULL
#define Lucy_IxReader_Offsets_OVERRIDE NULL
#define Lucy_IxReader_Seg_Readers_OVERRIDE NULL
#define Lucy_IxReader_Obtain_OVERRIDE NULL
#define Lucy_IxReader_Fetch_OVERRIDE NULL
#define Lucy_IxReader_Get_Components_OVERRIDE NULL
#else
int32_t
Lucy_IxReader_Doc_Max_OVERRIDE(lucy_IndexReader* self);
int32_t
Lucy_IxReader_Doc_Count_OVERRIDE(lucy_IndexReader* self);
int32_t
Lucy_IxReader_Del_Count_OVERRIDE(lucy_IndexReader* self);
lucy_I32Array*
Lucy_IxReader_Offsets_OVERRIDE(lucy_IndexReader* self);
cfish_Vector*
Lucy_IxReader_Seg_Readers_OVERRIDE(lucy_IndexReader* self);
lucy_DataReader*
Lucy_IxReader_Obtain_OVERRIDE(lucy_IndexReader* self, cfish_String* api);
lucy_DataReader*
Lucy_IxReader_Fetch_OVERRIDE(lucy_IndexReader* self, cfish_String* api);
cfish_Hash*
Lucy_IxReader_Get_Components_OVERRIDE(lucy_IndexReader* self);
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define IndexReader lucy_IndexReader
  #define INDEXREADER LUCY_INDEXREADER
  #define IxReader_init lucy_IxReader_init
  #define IxReader_open lucy_IxReader_open
  #define IxReader_do_open lucy_IxReader_do_open
  #define IxReader_get_class lucy_IxReader_get_class
  #define IxReader_get_class_name lucy_IxReader_get_class_name
  #define IxReader_is_a lucy_IxReader_is_a
  #define IxReader_Doc_Max_IMP LUCY_IxReader_Doc_Max_IMP
  #define IxReader_Doc_Count_IMP LUCY_IxReader_Doc_Count_IMP
  #define IxReader_Del_Count_IMP LUCY_IxReader_Del_Count_IMP
  #define IxReader_Offsets_IMP LUCY_IxReader_Offsets_IMP
  #define IxReader_Seg_Readers_IMP LUCY_IxReader_Seg_Readers_IMP
  #define IxReader_Obtain_IMP LUCY_IxReader_Obtain_IMP
  #define IxReader_Fetch_IMP LUCY_IxReader_Fetch_IMP
  #define IxReader_Close_IMP LUCY_IxReader_Close_IMP
  #define IxReader_Get_Components_IMP LUCY_IxReader_Get_Components_IMP
  #define IxReader_Destroy_IMP LUCY_IxReader_Destroy_IMP
  #define IxReader_To_Host LUCY_IxReader_To_Host
  #define IxReader_To_Host_t LUCY_IxReader_To_Host_t
  #define IxReader_Clone LUCY_IxReader_Clone
  #define IxReader_Clone_t LUCY_IxReader_Clone_t
  #define IxReader_Equals LUCY_IxReader_Equals
  #define IxReader_Equals_t LUCY_IxReader_Equals_t
  #define IxReader_Compare_To LUCY_IxReader_Compare_To
  #define IxReader_Compare_To_t LUCY_IxReader_Compare_To_t
  #define IxReader_Destroy LUCY_IxReader_Destroy
  #define IxReader_Destroy_t LUCY_IxReader_Destroy_t
  #define IxReader_To_String LUCY_IxReader_To_String
  #define IxReader_To_String_t LUCY_IxReader_To_String_t
  #define IxReader_Aggregator LUCY_IxReader_Aggregator
  #define IxReader_Aggregator_t LUCY_IxReader_Aggregator_t
  #define IxReader_Get_Schema LUCY_IxReader_Get_Schema
  #define IxReader_Get_Schema_t LUCY_IxReader_Get_Schema_t
  #define IxReader_Get_Folder LUCY_IxReader_Get_Folder
  #define IxReader_Get_Folder_t LUCY_IxReader_Get_Folder_t
  #define IxReader_Get_Snapshot LUCY_IxReader_Get_Snapshot
  #define IxReader_Get_Snapshot_t LUCY_IxReader_Get_Snapshot_t
  #define IxReader_Get_Segments LUCY_IxReader_Get_Segments
  #define IxReader_Get_Segments_t LUCY_IxReader_Get_Segments_t
  #define IxReader_Get_Segment LUCY_IxReader_Get_Segment
  #define IxReader_Get_Segment_t LUCY_IxReader_Get_Segment_t
  #define IxReader_Get_Seg_Tick LUCY_IxReader_Get_Seg_Tick
  #define IxReader_Get_Seg_Tick_t LUCY_IxReader_Get_Seg_Tick_t
  #define IxReader_Close LUCY_IxReader_Close
  #define IxReader_Close_t LUCY_IxReader_Close_t
  #define IxReader_Doc_Max LUCY_IxReader_Doc_Max
  #define IxReader_Doc_Max_t LUCY_IxReader_Doc_Max_t
  #define IxReader_Doc_Count LUCY_IxReader_Doc_Count
  #define IxReader_Doc_Count_t LUCY_IxReader_Doc_Count_t
  #define IxReader_Del_Count LUCY_IxReader_Del_Count
  #define IxReader_Del_Count_t LUCY_IxReader_Del_Count_t
  #define IxReader_Offsets LUCY_IxReader_Offsets
  #define IxReader_Offsets_t LUCY_IxReader_Offsets_t
  #define IxReader_Seg_Readers LUCY_IxReader_Seg_Readers
  #define IxReader_Seg_Readers_t LUCY_IxReader_Seg_Readers_t
  #define IxReader_Obtain LUCY_IxReader_Obtain
  #define IxReader_Obtain_t LUCY_IxReader_Obtain_t
  #define IxReader_Fetch LUCY_IxReader_Fetch
  #define IxReader_Fetch_t LUCY_IxReader_Fetch_t
  #define IxReader_Get_Components LUCY_IxReader_Get_Components
  #define IxReader_Get_Components_t LUCY_IxReader_Get_Components_t
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_INDEX_INDEXREADER */




