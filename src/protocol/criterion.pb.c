/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.5-dev at Thu Dec 10 20:30:59 2015. */

#include "criterion.pb.h"

#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

const int32_t criterion_protocol_msg_version_default = 1;


const pb_field_t criterion_protocol_msg_fields[4] = {
    PB_FIELD(  1, INT32   , REQUIRED, STATIC  , FIRST, criterion_protocol_msg, version, version, &criterion_protocol_msg_version_default),
    PB_FIELD(  2, MESSAGE , REQUIRED, STATIC  , OTHER, criterion_protocol_msg, id, version, &criterion_protocol_msg_mid_fields),
    PB_FIELD(100, EXTENSION, OPTIONAL, CALLBACK, OTHER, criterion_protocol_msg, extensions, id, 0),
    PB_LAST_FIELD
};

const pb_field_t criterion_protocol_msg_mid_fields[2] = {
    PB_FIELD(  1, INT64   , OPTIONAL, STATIC  , FIRST, criterion_protocol_msg_mid, pid, pid, 0),
    PB_LAST_FIELD
};

const pb_field_t criterion_protocol_birth_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t criterion_protocol_pre_init_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t criterion_protocol_pre_test_fields[2] = {
    PB_FIELD(  1, INT64   , OPTIONAL, STATIC  , FIRST, criterion_protocol_pre_test, timestamp, timestamp, 0),
    PB_LAST_FIELD
};

const pb_field_t criterion_protocol_post_test_fields[2] = {
    PB_FIELD(  1, INT64   , OPTIONAL, STATIC  , FIRST, criterion_protocol_post_test, timestamp, timestamp, 0),
    PB_LAST_FIELD
};

const pb_field_t criterion_protocol_post_fini_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t criterion_protocol_death_fields[3] = {
    PB_FIELD(  1, UENUM   , OPTIONAL, STATIC  , FIRST, criterion_protocol_death, result, result, 0),
    PB_FIELD(  2, INT64   , OPTIONAL, STATIC  , OTHER, criterion_protocol_death, status, result, 0),
    PB_LAST_FIELD
};

const pb_field_t criterion_protocol_assert_fields[5] = {
    PB_FIELD(  1, STRING  , REQUIRED, CALLBACK, FIRST, criterion_protocol_assert, message, message, 0),
    PB_FIELD(  2, BOOL    , REQUIRED, STATIC  , OTHER, criterion_protocol_assert, passed, message, 0),
    PB_FIELD(  3, STRING  , OPTIONAL, CALLBACK, OTHER, criterion_protocol_assert, file, passed, 0),
    PB_FIELD(  4, INT64   , OPTIONAL, STATIC  , OTHER, criterion_protocol_assert, line, file, 0),
    PB_LAST_FIELD
};

typedef struct {
    criterion_protocol_birth data;
} criterion_protocol_birth_data_struct;

static const pb_field_t criterion_protocol_birth_data_field = 
      PB_FIELD(100, MESSAGE , OPTEXT, STATIC  , FIRST, criterion_protocol_birth_data_struct, data, data, &criterion_protocol_birth_fields);

const pb_extension_type_t criterion_protocol_birth_data = {
    NULL,
    NULL,
    &criterion_protocol_birth_data_field
};

typedef struct {
    criterion_protocol_pre_init data;
} criterion_protocol_pre_init_data_struct;

static const pb_field_t criterion_protocol_pre_init_data_field = 
      PB_FIELD(101, MESSAGE , OPTEXT, STATIC  , FIRST, criterion_protocol_pre_init_data_struct, data, data, &criterion_protocol_pre_init_fields);

const pb_extension_type_t criterion_protocol_pre_init_data = {
    NULL,
    NULL,
    &criterion_protocol_pre_init_data_field
};

typedef struct {
    criterion_protocol_pre_test data;
} criterion_protocol_pre_test_data_struct;

static const pb_field_t criterion_protocol_pre_test_data_field = 
      PB_FIELD(102, MESSAGE , OPTEXT, STATIC  , FIRST, criterion_protocol_pre_test_data_struct, data, data, &criterion_protocol_pre_test_fields);

const pb_extension_type_t criterion_protocol_pre_test_data = {
    NULL,
    NULL,
    &criterion_protocol_pre_test_data_field
};

typedef struct {
    criterion_protocol_post_test data;
} criterion_protocol_post_test_data_struct;

static const pb_field_t criterion_protocol_post_test_data_field = 
      PB_FIELD(103, MESSAGE , OPTEXT, STATIC  , FIRST, criterion_protocol_post_test_data_struct, data, data, &criterion_protocol_post_test_fields);

const pb_extension_type_t criterion_protocol_post_test_data = {
    NULL,
    NULL,
    &criterion_protocol_post_test_data_field
};

typedef struct {
    criterion_protocol_post_fini data;
} criterion_protocol_post_fini_data_struct;

static const pb_field_t criterion_protocol_post_fini_data_field = 
      PB_FIELD(104, MESSAGE , OPTEXT, STATIC  , FIRST, criterion_protocol_post_fini_data_struct, data, data, &criterion_protocol_post_fini_fields);

const pb_extension_type_t criterion_protocol_post_fini_data = {
    NULL,
    NULL,
    &criterion_protocol_post_fini_data_field
};

typedef struct {
    criterion_protocol_death data;
} criterion_protocol_death_data_struct;

static const pb_field_t criterion_protocol_death_data_field = 
      PB_FIELD(105, MESSAGE , OPTEXT, STATIC  , FIRST, criterion_protocol_death_data_struct, data, data, &criterion_protocol_death_fields);

const pb_extension_type_t criterion_protocol_death_data = {
    NULL,
    NULL,
    &criterion_protocol_death_data_field
};

typedef struct {
    criterion_protocol_assert data;
} criterion_protocol_assert_data_struct;

static const pb_field_t criterion_protocol_assert_data_field = 
      PB_FIELD(106, MESSAGE , OPTEXT, STATIC  , FIRST, criterion_protocol_assert_data_struct, data, data, &criterion_protocol_assert_fields);

const pb_extension_type_t criterion_protocol_assert_data = {
    NULL,
    NULL,
    &criterion_protocol_assert_data_field
};


/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(criterion_protocol_msg, id) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_criterion_protocol_msg_criterion_protocol_msg_mid_criterion_protocol_birth_criterion_protocol_pre_init_criterion_protocol_pre_test_criterion_protocol_post_test_criterion_protocol_post_fini_criterion_protocol_death_criterion_protocol_assert)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(criterion_protocol_msg, id) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_criterion_protocol_msg_criterion_protocol_msg_mid_criterion_protocol_birth_criterion_protocol_pre_init_criterion_protocol_pre_test_criterion_protocol_post_test_criterion_protocol_post_fini_criterion_protocol_death_criterion_protocol_assert)
#endif

