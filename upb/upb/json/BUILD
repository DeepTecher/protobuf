# TODO(haberman): describe this package.

load("//upb/bazel:build_defs.bzl", "UPB_DEFAULT_COPTS")
load(
    "//upb/bazel:upb_proto_library.bzl",
    "upb_proto_library",
    "upb_proto_reflection_library",
)

cc_library(
    name = "json",
    srcs = [
        "decode.c",
        "encode.c",
    ],
    hdrs = [
        "decode.h",
        "encode.h",
    ],
    copts = UPB_DEFAULT_COPTS,
    visibility = ["//visibility:public"],
    deps = [
        "//upb:collections",
        "//upb:lex",
        "//upb:port",
        "//upb:reflection",
        "//upb:wire",
    ],
)

cc_test(
    name = "decode_test",
    srcs = ["decode_test.cc"],
    deps = [
        ":json",
        ":struct_upb_proto",
        ":test_upb_proto",
        ":test_upb_proto_reflection",
        "//upb:mem",
        "//upb:reflection",
        "@com_google_googletest//:gtest_main",
    ],
)

cc_test(
    name = "encode_test",
    srcs = ["encode_test.cc"],
    deps = [
        ":json",
        ":struct_upb_proto",
        ":test_upb_proto",
        ":test_upb_proto_reflection",
        "//upb:base",
        "//upb:mem",
        "//upb:reflection",
        "@com_google_googletest//:gtest_main",
    ],
)

proto_library(
    name = "test_proto",
    testonly = 1,
    srcs = ["test.proto"],
    deps = ["//:struct_proto"],
)

upb_proto_library(
    name = "test_upb_proto",
    testonly = 1,
    deps = [":test_proto"],
)

upb_proto_reflection_library(
    name = "test_upb_proto_reflection",
    testonly = 1,
    deps = [":test_proto"],
)

# TODO: This target arguably belongs in //google/protobuf/BUILD
upb_proto_library(
    name = "struct_upb_proto",
    testonly = 1,
    deps = ["//:struct_proto"],
)
