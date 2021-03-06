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


#ifndef H_LUCY_INDEX_SORTWRITER
#define H_LUCY_INDEX_SORTWRITER 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Lucy/Index/DataWriter.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_SORTWRITER
extern uint32_t lucy_SortWriter_IVARS_OFFSET;
typedef struct lucy_SortWriterIVARS lucy_SortWriterIVARS;
static CFISH_INLINE lucy_SortWriterIVARS*
lucy_SortWriter_IVARS(lucy_SortWriter *self) {
   char *ptr = (char*)self + lucy_SortWriter_IVARS_OFFSET;
   return (lucy_SortWriterIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define SortWriterIVARS lucy_SortWriterIVARS
  #define SortWriter_IVARS lucy_SortWriter_IVARS
#endif

struct lucy_SortWriterIVARS {
    lucy_Snapshot* snapshot;
    lucy_Segment* segment;
    lucy_PolyReader* polyreader;
    lucy_Schema* schema;
    lucy_Folder* folder;
    cfish_Vector* field_writers;
    cfish_Hash* counts;
    cfish_Hash* null_ords;
    cfish_Hash* ord_widths;
    lucy_OutStream* temp_ord_out;
    lucy_OutStream* temp_ix_out;
    lucy_OutStream* temp_dat_out;
    lucy_Counter* counter;
    uint32_t mem_thresh;
    bool flush_at_finish;
};

#endif /* C_LUCY_SORTWRITER */

/* Declare this class's inert variables.
 */

extern LUCY_VISIBLE int32_t lucy_SortWriter_current_file_format;


/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_SortWriter*
lucy_SortWriter_new(lucy_Schema* schema, lucy_Snapshot* snapshot, lucy_Segment* segment, lucy_PolyReader* polyreader);

LUCY_VISIBLE lucy_SortWriter*
lucy_SortWriter_init(lucy_SortWriter* self, lucy_Schema* schema, lucy_Snapshot* snapshot, lucy_Segment* segment, lucy_PolyReader* polyreader);

LUCY_VISIBLE void
lucy_SortWriter_set_default_mem_thresh(uint32_t mem_thresh);

void
LUCY_SortWriter_Add_Inverted_Doc_IMP(lucy_SortWriter* self, lucy_Inverter* inverter, int32_t doc_id);

void
LUCY_SortWriter_Add_Segment_IMP(lucy_SortWriter* self, lucy_SegReader* reader, lucy_I32Array* doc_map);

cfish_Hash*
LUCY_SortWriter_Metadata_IMP(lucy_SortWriter* self);

int32_t
LUCY_SortWriter_Format_IMP(lucy_SortWriter* self);

void
LUCY_SortWriter_Finish_IMP(lucy_SortWriter* self);

void
LUCY_SortWriter_Destroy_IMP(lucy_SortWriter* self);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_SortWriter_To_Host_t)(lucy_SortWriter* self, void* vcache);

typedef cfish_Obj*
(*LUCY_SortWriter_Clone_t)(lucy_SortWriter* self);

typedef bool
(*LUCY_SortWriter_Equals_t)(lucy_SortWriter* self, cfish_Obj* other);

typedef int32_t
(*LUCY_SortWriter_Compare_To_t)(lucy_SortWriter* self, cfish_Obj* other);

typedef void
(*LUCY_SortWriter_Destroy_t)(lucy_SortWriter* self);

typedef cfish_String*
(*LUCY_SortWriter_To_String_t)(lucy_SortWriter* self);

typedef void
(*LUCY_SortWriter_Add_Inverted_Doc_t)(lucy_SortWriter* self, lucy_Inverter* inverter, int32_t doc_id);

typedef void
(*LUCY_SortWriter_Add_Segment_t)(lucy_SortWriter* self, lucy_SegReader* reader, lucy_I32Array* doc_map);

typedef void
(*LUCY_SortWriter_Delete_Segment_t)(lucy_SortWriter* self, lucy_SegReader* reader);

typedef void
(*LUCY_SortWriter_Merge_Segment_t)(lucy_SortWriter* self, lucy_SegReader* reader, lucy_I32Array* doc_map);

typedef void
(*LUCY_SortWriter_Finish_t)(lucy_SortWriter* self);

typedef cfish_Hash*
(*LUCY_SortWriter_Metadata_t)(lucy_SortWriter* self);

typedef int32_t
(*LUCY_SortWriter_Format_t)(lucy_SortWriter* self);

typedef lucy_Snapshot*
(*LUCY_SortWriter_Get_Snapshot_t)(lucy_SortWriter* self);

typedef lucy_Segment*
(*LUCY_SortWriter_Get_Segment_t)(lucy_SortWriter* self);

typedef lucy_PolyReader*
(*LUCY_SortWriter_Get_PolyReader_t)(lucy_SortWriter* self);

typedef lucy_Schema*
(*LUCY_SortWriter_Get_Schema_t)(lucy_SortWriter* self);

typedef lucy_Folder*
(*LUCY_SortWriter_Get_Folder_t)(lucy_SortWriter* self);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_SortWriter_get_class(lucy_SortWriter *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_SortWriter_get_class_name(lucy_SortWriter *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_SortWriter_is_a(lucy_SortWriter *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_SortWriter_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_SortWriter_To_Host(lucy_SortWriter* self, void* vcache) {
    const LUCY_SortWriter_To_Host_t method = (LUCY_SortWriter_To_Host_t)cfish_obj_method(self, LUCY_SortWriter_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_SortWriter_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_SortWriter_Clone(lucy_SortWriter* self) {
    const LUCY_SortWriter_Clone_t method = (LUCY_SortWriter_Clone_t)cfish_obj_method(self, LUCY_SortWriter_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SortWriter_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_SortWriter_Equals(lucy_SortWriter* self, cfish_Obj* other) {
    const LUCY_SortWriter_Equals_t method = (LUCY_SortWriter_Equals_t)cfish_obj_method(self, LUCY_SortWriter_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_SortWriter_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_SortWriter_Compare_To(lucy_SortWriter* self, cfish_Obj* other) {
    const LUCY_SortWriter_Compare_To_t method = (LUCY_SortWriter_Compare_To_t)cfish_obj_method(self, LUCY_SortWriter_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_SortWriter_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_SortWriter_Destroy(lucy_SortWriter* self) {
    const LUCY_SortWriter_Destroy_t method = (LUCY_SortWriter_Destroy_t)cfish_obj_method(self, LUCY_SortWriter_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SortWriter_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_SortWriter_To_String(lucy_SortWriter* self) {
    const LUCY_SortWriter_To_String_t method = (LUCY_SortWriter_To_String_t)cfish_obj_method(self, LUCY_SortWriter_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SortWriter_Add_Inverted_Doc_OFFSET;
static CFISH_INLINE void
LUCY_SortWriter_Add_Inverted_Doc(lucy_SortWriter* self, lucy_Inverter* inverter, int32_t doc_id) {
    const LUCY_SortWriter_Add_Inverted_Doc_t method = (LUCY_SortWriter_Add_Inverted_Doc_t)cfish_obj_method(self, LUCY_SortWriter_Add_Inverted_Doc_OFFSET);
    method(self, inverter, doc_id);
}

extern LUCY_VISIBLE uint32_t LUCY_SortWriter_Add_Segment_OFFSET;
static CFISH_INLINE void
LUCY_SortWriter_Add_Segment(lucy_SortWriter* self, lucy_SegReader* reader, lucy_I32Array* doc_map) {
    const LUCY_SortWriter_Add_Segment_t method = (LUCY_SortWriter_Add_Segment_t)cfish_obj_method(self, LUCY_SortWriter_Add_Segment_OFFSET);
    method(self, reader, doc_map);
}

extern LUCY_VISIBLE uint32_t LUCY_SortWriter_Delete_Segment_OFFSET;
static CFISH_INLINE void
LUCY_SortWriter_Delete_Segment(lucy_SortWriter* self, lucy_SegReader* reader) {
    const LUCY_SortWriter_Delete_Segment_t method = (LUCY_SortWriter_Delete_Segment_t)cfish_obj_method(self, LUCY_SortWriter_Delete_Segment_OFFSET);
    method(self, reader);
}

extern LUCY_VISIBLE uint32_t LUCY_SortWriter_Merge_Segment_OFFSET;
static CFISH_INLINE void
LUCY_SortWriter_Merge_Segment(lucy_SortWriter* self, lucy_SegReader* reader, lucy_I32Array* doc_map) {
    const LUCY_SortWriter_Merge_Segment_t method = (LUCY_SortWriter_Merge_Segment_t)cfish_obj_method(self, LUCY_SortWriter_Merge_Segment_OFFSET);
    method(self, reader, doc_map);
}

extern LUCY_VISIBLE uint32_t LUCY_SortWriter_Finish_OFFSET;
static CFISH_INLINE void
LUCY_SortWriter_Finish(lucy_SortWriter* self) {
    const LUCY_SortWriter_Finish_t method = (LUCY_SortWriter_Finish_t)cfish_obj_method(self, LUCY_SortWriter_Finish_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SortWriter_Metadata_OFFSET;
static CFISH_INLINE cfish_Hash*
LUCY_SortWriter_Metadata(lucy_SortWriter* self) {
    const LUCY_SortWriter_Metadata_t method = (LUCY_SortWriter_Metadata_t)cfish_obj_method(self, LUCY_SortWriter_Metadata_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SortWriter_Format_OFFSET;
static CFISH_INLINE int32_t
LUCY_SortWriter_Format(lucy_SortWriter* self) {
    const LUCY_SortWriter_Format_t method = (LUCY_SortWriter_Format_t)cfish_obj_method(self, LUCY_SortWriter_Format_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SortWriter_Get_Snapshot_OFFSET;
static CFISH_INLINE lucy_Snapshot*
LUCY_SortWriter_Get_Snapshot(lucy_SortWriter* self) {
    const LUCY_SortWriter_Get_Snapshot_t method = (LUCY_SortWriter_Get_Snapshot_t)cfish_obj_method(self, LUCY_SortWriter_Get_Snapshot_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SortWriter_Get_Segment_OFFSET;
static CFISH_INLINE lucy_Segment*
LUCY_SortWriter_Get_Segment(lucy_SortWriter* self) {
    const LUCY_SortWriter_Get_Segment_t method = (LUCY_SortWriter_Get_Segment_t)cfish_obj_method(self, LUCY_SortWriter_Get_Segment_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SortWriter_Get_PolyReader_OFFSET;
static CFISH_INLINE lucy_PolyReader*
LUCY_SortWriter_Get_PolyReader(lucy_SortWriter* self) {
    const LUCY_SortWriter_Get_PolyReader_t method = (LUCY_SortWriter_Get_PolyReader_t)cfish_obj_method(self, LUCY_SortWriter_Get_PolyReader_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SortWriter_Get_Schema_OFFSET;
static CFISH_INLINE lucy_Schema*
LUCY_SortWriter_Get_Schema(lucy_SortWriter* self) {
    const LUCY_SortWriter_Get_Schema_t method = (LUCY_SortWriter_Get_Schema_t)cfish_obj_method(self, LUCY_SortWriter_Get_Schema_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SortWriter_Get_Folder_OFFSET;
static CFISH_INLINE lucy_Folder*
LUCY_SortWriter_Get_Folder(lucy_SortWriter* self) {
    const LUCY_SortWriter_Get_Folder_t method = (LUCY_SortWriter_Get_Folder_t)cfish_obj_method(self, LUCY_SortWriter_Get_Folder_OFFSET);
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
  #define SortWriter lucy_SortWriter
  #define SORTWRITER LUCY_SORTWRITER
  #define SortWriter_new lucy_SortWriter_new
  #define SortWriter_init lucy_SortWriter_init
  #define SortWriter_set_default_mem_thresh lucy_SortWriter_set_default_mem_thresh
  #define SortWriter_current_file_format lucy_SortWriter_current_file_format
  #define SortWriter_get_class lucy_SortWriter_get_class
  #define SortWriter_get_class_name lucy_SortWriter_get_class_name
  #define SortWriter_is_a lucy_SortWriter_is_a
  #define SortWriter_Add_Inverted_Doc_IMP LUCY_SortWriter_Add_Inverted_Doc_IMP
  #define SortWriter_Add_Segment_IMP LUCY_SortWriter_Add_Segment_IMP
  #define SortWriter_Metadata_IMP LUCY_SortWriter_Metadata_IMP
  #define SortWriter_Format_IMP LUCY_SortWriter_Format_IMP
  #define SortWriter_Finish_IMP LUCY_SortWriter_Finish_IMP
  #define SortWriter_Destroy_IMP LUCY_SortWriter_Destroy_IMP
  #define SortWriter_To_Host LUCY_SortWriter_To_Host
  #define SortWriter_To_Host_t LUCY_SortWriter_To_Host_t
  #define SortWriter_Clone LUCY_SortWriter_Clone
  #define SortWriter_Clone_t LUCY_SortWriter_Clone_t
  #define SortWriter_Equals LUCY_SortWriter_Equals
  #define SortWriter_Equals_t LUCY_SortWriter_Equals_t
  #define SortWriter_Compare_To LUCY_SortWriter_Compare_To
  #define SortWriter_Compare_To_t LUCY_SortWriter_Compare_To_t
  #define SortWriter_Destroy LUCY_SortWriter_Destroy
  #define SortWriter_Destroy_t LUCY_SortWriter_Destroy_t
  #define SortWriter_To_String LUCY_SortWriter_To_String
  #define SortWriter_To_String_t LUCY_SortWriter_To_String_t
  #define SortWriter_Add_Inverted_Doc LUCY_SortWriter_Add_Inverted_Doc
  #define SortWriter_Add_Inverted_Doc_t LUCY_SortWriter_Add_Inverted_Doc_t
  #define SortWriter_Add_Segment LUCY_SortWriter_Add_Segment
  #define SortWriter_Add_Segment_t LUCY_SortWriter_Add_Segment_t
  #define SortWriter_Delete_Segment LUCY_SortWriter_Delete_Segment
  #define SortWriter_Delete_Segment_t LUCY_SortWriter_Delete_Segment_t
  #define SortWriter_Merge_Segment LUCY_SortWriter_Merge_Segment
  #define SortWriter_Merge_Segment_t LUCY_SortWriter_Merge_Segment_t
  #define SortWriter_Finish LUCY_SortWriter_Finish
  #define SortWriter_Finish_t LUCY_SortWriter_Finish_t
  #define SortWriter_Metadata LUCY_SortWriter_Metadata
  #define SortWriter_Metadata_t LUCY_SortWriter_Metadata_t
  #define SortWriter_Format LUCY_SortWriter_Format
  #define SortWriter_Format_t LUCY_SortWriter_Format_t
  #define SortWriter_Get_Snapshot LUCY_SortWriter_Get_Snapshot
  #define SortWriter_Get_Snapshot_t LUCY_SortWriter_Get_Snapshot_t
  #define SortWriter_Get_Segment LUCY_SortWriter_Get_Segment
  #define SortWriter_Get_Segment_t LUCY_SortWriter_Get_Segment_t
  #define SortWriter_Get_PolyReader LUCY_SortWriter_Get_PolyReader
  #define SortWriter_Get_PolyReader_t LUCY_SortWriter_Get_PolyReader_t
  #define SortWriter_Get_Schema LUCY_SortWriter_Get_Schema
  #define SortWriter_Get_Schema_t LUCY_SortWriter_Get_Schema_t
  #define SortWriter_Get_Folder LUCY_SortWriter_Get_Folder
  #define SortWriter_Get_Folder_t LUCY_SortWriter_Get_Folder_t
#endif /* LUCY_USE_SHORT_NAMES */



/* Include the header for this class's parent. 
 */

#include "Clownfish/Obj.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_COUNTER
extern uint32_t lucy_Counter_IVARS_OFFSET;
typedef struct lucy_CounterIVARS lucy_CounterIVARS;
static CFISH_INLINE lucy_CounterIVARS*
lucy_Counter_IVARS(lucy_Counter *self) {
   char *ptr = (char*)self + lucy_Counter_IVARS_OFFSET;
   return (lucy_CounterIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define CounterIVARS lucy_CounterIVARS
  #define Counter_IVARS lucy_Counter_IVARS
#endif

struct lucy_CounterIVARS {
    int64_t value;
};

#endif /* C_LUCY_COUNTER */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_Counter*
lucy_Counter_new(void);

LUCY_VISIBLE lucy_Counter*
lucy_Counter_init(lucy_Counter* self);

int64_t
LUCY_Counter_Add_IMP(lucy_Counter* self, int64_t amount);

int64_t
LUCY_Counter_Get_Value_IMP(lucy_Counter* self);

void
LUCY_Counter_Reset_IMP(lucy_Counter* self);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_Counter_To_Host_t)(lucy_Counter* self, void* vcache);

typedef cfish_Obj*
(*LUCY_Counter_Clone_t)(lucy_Counter* self);

typedef bool
(*LUCY_Counter_Equals_t)(lucy_Counter* self, cfish_Obj* other);

typedef int32_t
(*LUCY_Counter_Compare_To_t)(lucy_Counter* self, cfish_Obj* other);

typedef void
(*LUCY_Counter_Destroy_t)(lucy_Counter* self);

typedef cfish_String*
(*LUCY_Counter_To_String_t)(lucy_Counter* self);

typedef int64_t
(*LUCY_Counter_Add_t)(lucy_Counter* self, int64_t amount);

typedef int64_t
(*LUCY_Counter_Get_Value_t)(lucy_Counter* self);

typedef void
(*LUCY_Counter_Reset_t)(lucy_Counter* self);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_Counter_get_class(lucy_Counter *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_Counter_get_class_name(lucy_Counter *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_Counter_is_a(lucy_Counter *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_Counter_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_Counter_To_Host(lucy_Counter* self, void* vcache) {
    const LUCY_Counter_To_Host_t method = (LUCY_Counter_To_Host_t)cfish_obj_method(self, LUCY_Counter_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_Counter_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_Counter_Clone(lucy_Counter* self) {
    const LUCY_Counter_Clone_t method = (LUCY_Counter_Clone_t)cfish_obj_method(self, LUCY_Counter_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_Counter_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_Counter_Equals(lucy_Counter* self, cfish_Obj* other) {
    const LUCY_Counter_Equals_t method = (LUCY_Counter_Equals_t)cfish_obj_method(self, LUCY_Counter_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_Counter_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_Counter_Compare_To(lucy_Counter* self, cfish_Obj* other) {
    const LUCY_Counter_Compare_To_t method = (LUCY_Counter_Compare_To_t)cfish_obj_method(self, LUCY_Counter_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_Counter_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_Counter_Destroy(lucy_Counter* self) {
    const LUCY_Counter_Destroy_t method = (LUCY_Counter_Destroy_t)cfish_obj_method(self, LUCY_Counter_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_Counter_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_Counter_To_String(lucy_Counter* self) {
    const LUCY_Counter_To_String_t method = (LUCY_Counter_To_String_t)cfish_obj_method(self, LUCY_Counter_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_Counter_Add_OFFSET;
static CFISH_INLINE int64_t
LUCY_Counter_Add(lucy_Counter* self, int64_t amount) {
#ifdef CFP_LUCY
    return LUCY_Counter_Add_IMP(self, amount);
#else
    const LUCY_Counter_Add_t method = (LUCY_Counter_Add_t)cfish_obj_method(self, LUCY_Counter_Add_OFFSET);
    return method(self, amount);
#endif
}

extern LUCY_VISIBLE uint32_t LUCY_Counter_Get_Value_OFFSET;
static CFISH_INLINE int64_t
LUCY_Counter_Get_Value(lucy_Counter* self) {
#ifdef CFP_LUCY
    return LUCY_Counter_Get_Value_IMP(self);
#else
    const LUCY_Counter_Get_Value_t method = (LUCY_Counter_Get_Value_t)cfish_obj_method(self, LUCY_Counter_Get_Value_OFFSET);
    return method(self);
#endif
}

extern LUCY_VISIBLE uint32_t LUCY_Counter_Reset_OFFSET;
static CFISH_INLINE void
LUCY_Counter_Reset(lucy_Counter* self) {
#ifdef CFP_LUCY
    LUCY_Counter_Reset_IMP(self);
#else
    const LUCY_Counter_Reset_t method = (LUCY_Counter_Reset_t)cfish_obj_method(self, LUCY_Counter_Reset_OFFSET);
    method(self);
#endif
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#else
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define Counter lucy_Counter
  #define COUNTER LUCY_COUNTER
  #define Counter_new lucy_Counter_new
  #define Counter_init lucy_Counter_init
  #define Counter_get_class lucy_Counter_get_class
  #define Counter_get_class_name lucy_Counter_get_class_name
  #define Counter_is_a lucy_Counter_is_a
  #define Counter_Add_IMP LUCY_Counter_Add_IMP
  #define Counter_Get_Value_IMP LUCY_Counter_Get_Value_IMP
  #define Counter_Reset_IMP LUCY_Counter_Reset_IMP
  #define Counter_To_Host LUCY_Counter_To_Host
  #define Counter_To_Host_t LUCY_Counter_To_Host_t
  #define Counter_Clone LUCY_Counter_Clone
  #define Counter_Clone_t LUCY_Counter_Clone_t
  #define Counter_Equals LUCY_Counter_Equals
  #define Counter_Equals_t LUCY_Counter_Equals_t
  #define Counter_Compare_To LUCY_Counter_Compare_To
  #define Counter_Compare_To_t LUCY_Counter_Compare_To_t
  #define Counter_Destroy LUCY_Counter_Destroy
  #define Counter_Destroy_t LUCY_Counter_Destroy_t
  #define Counter_To_String LUCY_Counter_To_String
  #define Counter_To_String_t LUCY_Counter_To_String_t
  #define Counter_Add LUCY_Counter_Add
  #define Counter_Add_t LUCY_Counter_Add_t
  #define Counter_Get_Value LUCY_Counter_Get_Value
  #define Counter_Get_Value_t LUCY_Counter_Get_Value_t
  #define Counter_Reset LUCY_Counter_Reset
  #define Counter_Reset_t LUCY_Counter_Reset_t
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_INDEX_SORTWRITER */




