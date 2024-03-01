package(default_visibility = ["//visibility:public"])

platform(
    name = "windows-mingw-gcc",
    constraint_values = [
        "@platforms//os:windows",
         "@platforms//cpu:x86_64",
        "@bazel_tools//tools/cpp:mingw",
    ],
)


cc_binary(
name = "test",
srcs = ["test.cpp"],
deps = [":test_proto_cc",
        "@com_google_protobuf//:protobuf",
        "@com_google_protobuf//:protobuf_headers",
        "@boost.chrono"],
)

proto_library(
 name = "test_proto",
 srcs = ["test.proto"]
)

cc_proto_library(
name = "test_proto_cc",
deps = [":test_proto"],
)
