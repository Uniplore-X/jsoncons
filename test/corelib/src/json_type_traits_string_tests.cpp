// Copyright 2013-2024 Daniel Parker
// Distributed under Boost license

#if defined(_MSC_VER)
#include "windows.h" // test no inadvertant macro expansions
#endif
#include <catch/catch.hpp>
#include <jsoncons/json.hpp>
#include <vector>

using jsoncons::json_type_traits;
using jsoncons::json;
using jsoncons::decode_json;
using jsoncons::encode_json;

TEST_CASE("json_type_traits string tests")
{
    SECTION("test 1")
    {
        std::string s = "foo";

        std::string buf;
        encode_json(s,buf);

        auto s2 = decode_json<std::string>(buf);

        CHECK(s2 == s);
    }
    SECTION("test 2")
    {
        std::string s = "foo";

        std::string buf;
        encode_json(s,buf);

        auto s2 = decode_json<std::string>(buf);

        CHECK(s2 == s);
    }
}

TEST_CASE("json_type_traits vector of string tests")
{
    SECTION("test 1")
    {
        std::vector<std::string> v = {"foo","bar","baz"};

        std::string buf;
        encode_json(v,buf);

        auto v2 = decode_json<std::vector<std::string>>(buf);

        CHECK(v2 == v);
    }
    SECTION("test 2")
    {
        std::vector<std::string> v = {"foo","bar","baz"};

        std::string buf;
        encode_json(v,buf);

        auto v2 = decode_json<std::vector<std::string>>(buf);

        CHECK(v2 == v);
    }
}

