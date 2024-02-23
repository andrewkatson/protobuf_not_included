workspace(name = "protobuf_not_included")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")
# Boost
# Famous C++ library that has given rise to many new additions to the C++ Standard Library
# Makes @boost available for use: For example, add `@boost//:algorithm` to your deps.
# For more, see https://github.com/nelhage/rules_boost and https://www.boost.org
http_archive(
    name = "com_github_nelhage_rules_boost",

    # Replace the commit hash in both places (below) with the latest, rather than using the stale one here.
    # Even better, set up Renovate and let it do the work for you (see "Suggestion: Updates" in the README).
    url = "https://github.com/nelhage/rules_boost/archive/98bdaa9155c32a9b7aed15a2e6c33c90a2f6840c.tar.gz",
    strip_prefix = "rules_boost-98bdaa9155c32a9b7aed15a2e6c33c90a2f6840c",
    integrity = "sha256-MejlbKWZotRlbWnm3lLaWmMHlwjZBVHbnY8yGl9QT5M="
)

load("@com_github_nelhage_rules_boost//:boost/boost.bzl", "boost_deps")


boost_deps()