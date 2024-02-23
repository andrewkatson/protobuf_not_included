
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
deps = [":test_proto_cc"],
)

proto_library(
 name = "test_proto",
 srcs = ["test.proto"]
)

cc_proto_library(
name = "test_proto_cc",
deps = [":test_proto"],
)
