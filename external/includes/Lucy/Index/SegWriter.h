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


#ifndef H_LUCY_INDEX_SEGWRITER
#define H_LUCY_INDEX_SEGWRITER 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Lucy/Index/DataWriter.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_SEGWRITER
extern uint32_t lucy_SegWriter_IVARS_OFFSET;
typedef struct lucy_SegWriterIVARS lucy_SegWriterIVARS;
static CFISH_INLINE lucy_SegWriterIVARS*
lucy_SegWriter_IVARS(lucy_SegWriter *self) {
   char *ptr = (char*)self + lucy_SegWriter_IVARS_OFFSET;
   return (lucy_SegWriterIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define SegWriterIVARS lucy_SegWriterIVARS
  #define SegWriter_IVARS lucy_SegWriter_IVARS
#endif

struct lucy_SegWriterIVARS {
    lucy_Snapshot* snapshot;
    lucy_Segment* segment;
    lucy_PolyReader* polyreader;
    lucy_Schema* schema;
    lucy_Folder* folder;
    lucy_Inverter* inverter;
    cfish_Vector* writers;
    cfish_Hash* by_api;
    lucy_DeletionsWriter* del_writer;
};

#endif /* C_LUCY_SEGWRITER */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_SegWriter*
lucy_SegWriter_new(lucy_Schema* schema, lucy_Snapshot* snapshot, lucy_Segment* segment, lucy_PolyReader* polyreader);

LUCY_VISIBLE lucy_SegWriter*
lucy_SegWriter_init(lucy_SegWriter* self, lucy_Schema* schema, lucy_Snapshot* snapshot, lucy_Segment* segment, lucy_PolyReader* polyreader);

void
LUCY_SegWriter_Register_IMP(lucy_SegWriter* self, cfish_String* api, lucy_DataWriter* component);

cfish_Obj*
LUCY_SegWriter_Fetch_IMP(lucy_SegWriter* self, cfish_String* api);

void
LUCY_SegWriter_Add_Writer_IMP(lucy_SegWriter* self, lucy_DataWriter* writer);

void
LUCY_SegWriter_Prep_Seg_Dir_IMP(lucy_SegWriter* self);

void
LUCY_SegWriter_Add_Doc_IMP(lucy_SegWriter* self, lucy_Doc* doc, float boost);

void
LUCY_SegWriter_Set_Del_Writer_IMP(lucy_SegWriter* self, lucy_DeletionsWriter* del_writer);

lucy_DeletionsWriter*
LUCY_SegWriter_Get_Del_Writer_IMP(lucy_SegWriter* self);

void
LUCY_SegWriter_Add_Inverted_Doc_IMP(lucy_SegWriter* self, lucy_Inverter* inverter, int32_t doc_id);

void
LUCY_SegWriter_Add_Segment_IMP(lucy_SegWriter* self, lucy_SegReader* reader, lucy_I32Array* doc_map);

void
LUCY_SegWriter_Merge_Segment_IMP(lucy_SegWriter* self, lucy_SegReader* reader, lucy_I32Array* doc_map);

void
LUCY_SegWriter_Delete_Segment_IMP(lucy_SegWriter* self, lucy_SegReader* reader);

void
LUCY_SegWriter_Finish_IMP(lucy_SegWriter* self);

void
LUCY_SegWriter_Destroy_IMP(lucy_SegWriter* self);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_SegWriter_To_Host_t)(lucy_SegWriter* self, void* vcache);

typedef cfish_Obj*
(*LUCY_SegWriter_Clone_t)(lucy_SegWriter* self);

typedef bool
(*LUCY_SegWriter_Equals_t)(lucy_SegWriter* self, cfish_Obj* other);

typedef int32_t
(*LUCY_SegWriter_Compare_To_t)(lucy_SegWriter* self, cfish_Obj* other);

typedef void
(*LUCY_SegWriter_Destroy_t)(lucy_SegWriter* self);

typedef cfish_String*
(*LUCY_SegWriter_To_String_t)(lucy_SegWriter* self);

typedef void
(*LUCY_SegWriter_Add_Inverted_Doc_t)(lucy_SegWriter* self, lucy_Inverter* inverter, int32_t doc_id);

typedef void
(*LUCY_SegWriter_Add_Segment_t)(lucy_SegWriter* self, lucy_SegReader* reader, lucy_I32Array* doc_map);

typedef void
(*LUCY_SegWriter_Delete_Segment_t)(lucy_SegWriter* self, lucy_SegReader* reader);

typedef void
(*LUCY_SegWriter_Merge_Segment_t)(lucy_SegWriter* self, lucy_SegReader* reader, lucy_I32Array* doc_map);

typedef void
(*LUCY_SegWriter_Finish_t)(lucy_SegWriter* self);

typedef cfish_Hash*
(*LUCY_SegWriter_Metadata_t)(lucy_SegWriter* self);

typedef int32_t
(*LUCY_SegWriter_Format_t)(lucy_SegWriter* self);

typedef lucy_Snapshot*
(*LUCY_SegWriter_Get_Snapshot_t)(lucy_SegWriter* self);

typedef lucy_Segment*
(*LUCY_SegWriter_Get_Segment_t)(lucy_SegWriter* self);

typedef lucy_PolyReader*
(*LUCY_SegWriter_Get_PolyReader_t)(lucy_SegWriter* self);

typedef lucy_Schema*
(*LUCY_SegWriter_Get_Schema_t)(lucy_SegWriter* self);

typedef lucy_Folder*
(*LUCY_SegWriter_Get_Folder_t)(lucy_SegWriter* self);

typedef void
(*LUCY_SegWriter_Register_t)(lucy_SegWriter* self, cfish_String* api, lucy_DataWriter* component);

typedef cfish_Obj*
(*LUCY_SegWriter_Fetch_t)(lucy_SegWriter* self, cfish_String* api);

typedef void
(*LUCY_SegWriter_Add_Writer_t)(lucy_SegWriter* self, lucy_DataWriter* writer);

typedef void
(*LUCY_SegWriter_Prep_Seg_Dir_t)(lucy_SegWriter* self);

typedef void
(*LUCY_SegWriter_Add_Doc_t)(lucy_SegWriter* self, lucy_Doc* doc, float boost);

typedef void
(*LUCY_SegWriter_Set_Del_Writer_t)(lucy_SegWriter* self, lucy_DeletionsWriter* del_writer);

typedef lucy_DeletionsWriter*
(*LUCY_SegWriter_Get_Del_Writer_t)(lucy_SegWriter* self);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_SegWriter_get_class(lucy_SegWriter *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_SegWriter_get_class_name(lucy_SegWriter *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_SegWriter_is_a(lucy_SegWriter *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_SegWriter_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_SegWriter_To_Host(lucy_SegWriter* self, void* vcache) {
    const LUCY_SegWriter_To_Host_t method = (LUCY_SegWriter_To_Host_t)cfish_obj_method(self, LUCY_SegWriter_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_SegWriter_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_SegWriter_Clone(lucy_SegWriter* self) {
    const LUCY_SegWriter_Clone_t method = (LUCY_SegWriter_Clone_t)cfish_obj_method(self, LUCY_SegWriter_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SegWriter_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_SegWriter_Equals(lucy_SegWriter* self, cfish_Obj* other) {
    const LUCY_SegWriter_Equals_t method = (LUCY_SegWriter_Equals_t)cfish_obj_method(self, LUCY_SegWriter_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_SegWriter_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_SegWriter_Compare_To(lucy_SegWriter* self, cfish_Obj* other) {
    const LUCY_SegWriter_Compare_To_t method = (LUCY_SegWriter_Compare_To_t)cfish_obj_method(self, LUCY_SegWriter_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_SegWriter_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_SegWriter_Destroy(lucy_SegWriter* self) {
    const LUCY_SegWriter_Destroy_t method = (LUCY_SegWriter_Destroy_t)cfish_obj_method(self, LUCY_SegWriter_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SegWriter_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_SegWriter_To_String(lucy_SegWriter* self) {
    const LUCY_SegWriter_To_String_t method = (LUCY_SegWriter_To_String_t)cfish_obj_method(self, LUCY_SegWriter_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SegWriter_Add_Inverted_Doc_OFFSET;
static CFISH_INLINE void
LUCY_SegWriter_Add_Inverted_Doc(lucy_SegWriter* self, lucy_Inverter* inverter, int32_t doc_id) {
    const LUCY_SegWriter_Add_Inverted_Doc_t method = (LUCY_SegWriter_Add_Inverted_Doc_t)cfish_obj_method(self, LUCY_SegWriter_Add_Inverted_Doc_OFFSET);
    method(self, inverter, doc_id);
}

extern LUCY_VISIBLE uint32_t LUCY_SegWriter_Add_Segment_OFFSET;
static CFISH_INLINE void
LUCY_SegWriter_Add_Segment(lucy_SegWriter* self, lucy_SegReader* reader, lucy_I32Array* doc_map) {
    const LUCY_SegWriter_Add_Segment_t method = (LUCY_SegWriter_Add_Segment_t)cfish_obj_method(self, LUCY_SegWriter_Add_Segment_OFFSET);
    method(self, reader, doc_map);
}

extern LUCY_VISIBLE uint32_t LUCY_SegWriter_Delete_Segment_OFFSET;
static CFISH_INLINE void
LUCY_SegWriter_Delete_Segment(lucy_SegWriter* self, lucy_SegReader* reader) {
    const LUCY_SegWriter_Delete_Segment_t method = (LUCY_SegWriter_Delete_Segment_t)cfish_obj_method(self, LUCY_SegWriter_Delete_Segment_OFFSET);
    method(self, reader);
}

extern LUCY_VISIBLE uint32_t LUCY_SegWriter_Merge_Segment_OFFSET;
static CFISH_INLINE void
LUCY_SegWriter_Merge_Segment(lucy_SegWriter* self, lucy_SegReader* reader, lucy_I32Array* doc_map) {
    const LUCY_SegWriter_Merge_Segment_t method = (LUCY_SegWriter_Merge_Segment_t)cfish_obj_method(self, LUCY_SegWriter_Merge_Segment_OFFSET);
    method(self, reader, doc_map);
}

extern LUCY_VISIBLE uint32_t LUCY_SegWriter_Finish_OFFSET;
static CFISH_INLINE void
LUCY_SegWriter_Finish(lucy_SegWriter* self) {
    const LUCY_SegWriter_Finish_t method = (LUCY_SegWriter_Finish_t)cfish_obj_method(self, LUCY_SegWriter_Finish_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SegWriter_Metadata_OFFSET;
static CFISH_INLINE cfish_Hash*
LUCY_SegWriter_Metadata(lucy_SegWriter* self) {
    const LUCY_SegWriter_Metadata_t method = (LUCY_SegWriter_Metadata_t)cfish_obj_method(self, LUCY_SegWriter_Metadata_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SegWriter_Format_OFFSET;
static CFISH_INLINE int32_t
LUCY_SegWriter_Format(lucy_SegWriter* self) {
    const LUCY_SegWriter_Format_t method = (LUCY_SegWriter_Format_t)cfish_obj_method(self, LUCY_SegWriter_Format_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SegWriter_Get_Snapshot_OFFSET;
static CFISH_INLINE lucy_Snapshot*
LUCY_SegWriter_Get_Snapshot(lucy_SegWriter* self) {
    const LUCY_SegWriter_Get_Snapshot_t method = (LUCY_SegWriter_Get_Snapshot_t)cfish_obj_method(self, LUCY_SegWriter_Get_Snapshot_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SegWriter_Get_Segment_OFFSET;
static CFISH_INLINE lucy_Segment*
LUCY_SegWriter_Get_Segment(lucy_SegWriter* self) {
    const LUCY_SegWriter_Get_Segment_t method = (LUCY_SegWriter_Get_Segment_t)cfish_obj_method(self, LUCY_SegWriter_Get_Segment_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SegWriter_Get_PolyReader_OFFSET;
static CFISH_INLINE lucy_PolyReader*
LUCY_SegWriter_Get_PolyReader(lucy_SegWriter* self) {
    const LUCY_SegWriter_Get_PolyReader_t method = (LUCY_SegWriter_Get_PolyReader_t)cfish_obj_method(self, LUCY_SegWriter_Get_PolyReader_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SegWriter_Get_Schema_OFFSET;
static CFISH_INLINE lucy_Schema*
LUCY_SegWriter_Get_Schema(lucy_SegWriter* self) {
    const LUCY_SegWriter_Get_Schema_t method = (LUCY_SegWriter_Get_Schema_t)cfish_obj_method(self, LUCY_SegWriter_Get_Schema_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SegWriter_Get_Folder_OFFSET;
static CFISH_INLINE lucy_Folder*
LUCY_SegWriter_Get_Folder(lucy_SegWriter* self) {
    const LUCY_SegWriter_Get_Folder_t method = (LUCY_SegWriter_Get_Folder_t)cfish_obj_method(self, LUCY_SegWriter_Get_Folder_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SegWriter_Register_OFFSET;
static CFISH_INLINE void
LUCY_SegWriter_Register(lucy_SegWriter* self, cfish_String* api, lucy_DataWriter* component) {
    const LUCY_SegWriter_Register_t method = (LUCY_SegWriter_Register_t)cfish_obj_method(self, LUCY_SegWriter_Register_OFFSET);
    method(self, api, component);
}

extern LUCY_VISIBLE uint32_t LUCY_SegWriter_Fetch_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_SegWriter_Fetch(lucy_SegWriter* self, cfish_String* api) {
    const LUCY_SegWriter_Fetch_t method = (LUCY_SegWriter_Fetch_t)cfish_obj_method(self, LUCY_SegWriter_Fetch_OFFSET);
    return method(self, api);
}

extern LUCY_VISIBLE uint32_t LUCY_SegWriter_Add_Writer_OFFSET;
static CFISH_INLINE void
LUCY_SegWriter_Add_Writer(lucy_SegWriter* self, lucy_DataWriter* writer) {
    const LUCY_SegWriter_Add_Writer_t method = (LUCY_SegWriter_Add_Writer_t)cfish_obj_method(self, LUCY_SegWriter_Add_Writer_OFFSET);
    method(self, writer);
}

extern LUCY_VISIBLE uint32_t LUCY_SegWriter_Prep_Seg_Dir_OFFSET;
static CFISH_INLINE void
LUCY_SegWriter_Prep_Seg_Dir(lucy_SegWriter* self) {
    const LUCY_SegWriter_Prep_Seg_Dir_t method = (LUCY_SegWriter_Prep_Seg_Dir_t)cfish_obj_method(self, LUCY_SegWriter_Prep_Seg_Dir_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SegWriter_Add_Doc_OFFSET;
static CFISH_INLINE void
LUCY_SegWriter_Add_Doc(lucy_SegWriter* self, lucy_Doc* doc, float boost) {
    const LUCY_SegWriter_Add_Doc_t method = (LUCY_SegWriter_Add_Doc_t)cfish_obj_method(self, LUCY_SegWriter_Add_Doc_OFFSET);
    method(self, doc, boost);
}

extern LUCY_VISIBLE uint32_t LUCY_SegWriter_Set_Del_Writer_OFFSET;
static CFISH_INLINE void
LUCY_SegWriter_Set_Del_Writer(lucy_SegWriter* self, lucy_DeletionsWriter* del_writer) {
    const LUCY_SegWriter_Set_Del_Writer_t method = (LUCY_SegWriter_Set_Del_Writer_t)cfish_obj_method(self, LUCY_SegWriter_Set_Del_Writer_OFFSET);
    method(self, del_writer);
}

extern LUCY_VISIBLE uint32_t LUCY_SegWriter_Get_Del_Writer_OFFSET;
static CFISH_INLINE lucy_DeletionsWriter*
LUCY_SegWriter_Get_Del_Writer(lucy_SegWriter* self) {
    const LUCY_SegWriter_Get_Del_Writer_t method = (LUCY_SegWriter_Get_Del_Writer_t)cfish_obj_method(self, LUCY_SegWriter_Get_Del_Writer_OFFSET);
    return method(self);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#define Lucy_SegWriter_Register_OVERRIDE NULL
#define Lucy_SegWriter_Fetch_OVERRIDE NULL
#define Lucy_SegWriter_Add_Writer_OVERRIDE NULL
#define Lucy_SegWriter_Prep_Seg_Dir_OVERRIDE NULL
#define Lucy_SegWriter_Add_Doc_OVERRIDE NULL
#define Lucy_SegWriter_Set_Del_Writer_OVERRIDE NULL
#define Lucy_SegWriter_Get_Del_Writer_OVERRIDE NULL
#else
void
Lucy_SegWriter_Register_OVERRIDE(lucy_SegWriter* self, cfish_String* api, lucy_DataWriter* component);
cfish_Obj*
Lucy_SegWriter_Fetch_OVERRIDE(lucy_SegWriter* self, cfish_String* api);
void
Lucy_SegWriter_Add_Writer_OVERRIDE(lucy_SegWriter* self, lucy_DataWriter* writer);
void
Lucy_SegWriter_Prep_Seg_Dir_OVERRIDE(lucy_SegWriter* self);
void
Lucy_SegWriter_Add_Doc_OVERRIDE(lucy_SegWriter* self, lucy_Doc* doc, float boost);
void
Lucy_SegWriter_Set_Del_Writer_OVERRIDE(lucy_SegWriter* self, lucy_DeletionsWriter* del_writer);
lucy_DeletionsWriter*
Lucy_SegWriter_Get_Del_Writer_OVERRIDE(lucy_SegWriter* self);
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define SegWriter lucy_SegWriter
  #define SEGWRITER LUCY_SEGWRITER
  #define SegWriter_new lucy_SegWriter_new
  #define SegWriter_init lucy_SegWriter_init
  #define SegWriter_get_class lucy_SegWriter_get_class
  #define SegWriter_get_class_name lucy_SegWriter_get_class_name
  #define SegWriter_is_a lucy_SegWriter_is_a
  #define SegWriter_Register_IMP LUCY_SegWriter_Register_IMP
  #define SegWriter_Fetch_IMP LUCY_SegWriter_Fetch_IMP
  #define SegWriter_Add_Writer_IMP LUCY_SegWriter_Add_Writer_IMP
  #define SegWriter_Prep_Seg_Dir_IMP LUCY_SegWriter_Prep_Seg_Dir_IMP
  #define SegWriter_Add_Doc_IMP LUCY_SegWriter_Add_Doc_IMP
  #define SegWriter_Set_Del_Writer_IMP LUCY_SegWriter_Set_Del_Writer_IMP
  #define SegWriter_Get_Del_Writer_IMP LUCY_SegWriter_Get_Del_Writer_IMP
  #define SegWriter_Add_Inverted_Doc_IMP LUCY_SegWriter_Add_Inverted_Doc_IMP
  #define SegWriter_Add_Segment_IMP LUCY_SegWriter_Add_Segment_IMP
  #define SegWriter_Merge_Segment_IMP LUCY_SegWriter_Merge_Segment_IMP
  #define SegWriter_Delete_Segment_IMP LUCY_SegWriter_Delete_Segment_IMP
  #define SegWriter_Finish_IMP LUCY_SegWriter_Finish_IMP
  #define SegWriter_Destroy_IMP LUCY_SegWriter_Destroy_IMP
  #define SegWriter_To_Host LUCY_SegWriter_To_Host
  #define SegWriter_To_Host_t LUCY_SegWriter_To_Host_t
  #define SegWriter_Clone LUCY_SegWriter_Clone
  #define SegWriter_Clone_t LUCY_SegWriter_Clone_t
  #define SegWriter_Equals LUCY_SegWriter_Equals
  #define SegWriter_Equals_t LUCY_SegWriter_Equals_t
  #define SegWriter_Compare_To LUCY_SegWriter_Compare_To
  #define SegWriter_Compare_To_t LUCY_SegWriter_Compare_To_t
  #define SegWriter_Destroy LUCY_SegWriter_Destroy
  #define SegWriter_Destroy_t LUCY_SegWriter_Destroy_t
  #define SegWriter_To_String LUCY_SegWriter_To_String
  #define SegWriter_To_String_t LUCY_SegWriter_To_String_t
  #define SegWriter_Add_Inverted_Doc LUCY_SegWriter_Add_Inverted_Doc
  #define SegWriter_Add_Inverted_Doc_t LUCY_SegWriter_Add_Inverted_Doc_t
  #define SegWriter_Add_Segment LUCY_SegWriter_Add_Segment
  #define SegWriter_Add_Segment_t LUCY_SegWriter_Add_Segment_t
  #define SegWriter_Delete_Segment LUCY_SegWriter_Delete_Segment
  #define SegWriter_Delete_Segment_t LUCY_SegWriter_Delete_Segment_t
  #define SegWriter_Merge_Segment LUCY_SegWriter_Merge_Segment
  #define SegWriter_Merge_Segment_t LUCY_SegWriter_Merge_Segment_t
  #define SegWriter_Finish LUCY_SegWriter_Finish
  #define SegWriter_Finish_t LUCY_SegWriter_Finish_t
  #define SegWriter_Metadata LUCY_SegWriter_Metadata
  #define SegWriter_Metadata_t LUCY_SegWriter_Metadata_t
  #define SegWriter_Format LUCY_SegWriter_Format
  #define SegWriter_Format_t LUCY_SegWriter_Format_t
  #define SegWriter_Get_Snapshot LUCY_SegWriter_Get_Snapshot
  #define SegWriter_Get_Snapshot_t LUCY_SegWriter_Get_Snapshot_t
  #define SegWriter_Get_Segment LUCY_SegWriter_Get_Segment
  #define SegWriter_Get_Segment_t LUCY_SegWriter_Get_Segment_t
  #define SegWriter_Get_PolyReader LUCY_SegWriter_Get_PolyReader
  #define SegWriter_Get_PolyReader_t LUCY_SegWriter_Get_PolyReader_t
  #define SegWriter_Get_Schema LUCY_SegWriter_Get_Schema
  #define SegWriter_Get_Schema_t LUCY_SegWriter_Get_Schema_t
  #define SegWriter_Get_Folder LUCY_SegWriter_Get_Folder
  #define SegWriter_Get_Folder_t LUCY_SegWriter_Get_Folder_t
  #define SegWriter_Register LUCY_SegWriter_Register
  #define SegWriter_Register_t LUCY_SegWriter_Register_t
  #define SegWriter_Fetch LUCY_SegWriter_Fetch
  #define SegWriter_Fetch_t LUCY_SegWriter_Fetch_t
  #define SegWriter_Add_Writer LUCY_SegWriter_Add_Writer
  #define SegWriter_Add_Writer_t LUCY_SegWriter_Add_Writer_t
  #define SegWriter_Prep_Seg_Dir LUCY_SegWriter_Prep_Seg_Dir
  #define SegWriter_Prep_Seg_Dir_t LUCY_SegWriter_Prep_Seg_Dir_t
  #define SegWriter_Add_Doc LUCY_SegWriter_Add_Doc
  #define SegWriter_Add_Doc_t LUCY_SegWriter_Add_Doc_t
  #define SegWriter_Set_Del_Writer LUCY_SegWriter_Set_Del_Writer
  #define SegWriter_Set_Del_Writer_t LUCY_SegWriter_Set_Del_Writer_t
  #define SegWriter_Get_Del_Writer LUCY_SegWriter_Get_Del_Writer
  #define SegWriter_Get_Del_Writer_t LUCY_SegWriter_Get_Del_Writer_t
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_INDEX_SEGWRITER */




