/*
 * This file is open source software, licensed to you under the terms
 * of the Apache License, Version 2.0 (the "License").  See the NOTICE file
 * distributed with this work for additional information regarding copyright
 * ownership.  You may not use this file except in compliance with the License.
 *
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */
/*
 * Copyright (C) 2021 ScyllaDB
 */

#pragma once

#include <seastar/core/future.hh>
#include <seastar/core/iostream.hh>
#include <seastar/core/temporary_buffer.hh>
#include <seastar/util/short_streams.hh>

namespace seastar {

namespace httpd {

/// Returns all bytes from the stream until eof, accessible in chunks
[[deprecated("seastar::httpd::read_entire_stream was moved to seastar::util, #include <seastar/util/short_streams.hh> instead")]]
inline
future<std::vector<temporary_buffer<char>>> read_entire_stream(input_stream<char>& inp) {
    return util::read_entire_stream(inp);
}

/// Returns all bytes from the stream until eof as a single buffer, use only on short streams
[[deprecated("seastar::httpd::read_entire_stream_contiguous was moved to seastar::util, #include <seastar/util/short_streams.hh> instead")]]
inline
future<sstring> read_entire_stream_contiguous(input_stream<char>& inp) {
    return util::read_entire_stream_contiguous(inp);
}

/// Ignores all bytes until eof
[[deprecated("seastar::httpd::skip_entire_stream was moved to seastar::util, #include <seastar/util/short_streams.hh> instead")]]
inline
future<> skip_entire_stream(input_stream<char>& inp) {
    return util::skip_entire_stream(inp);
}

}

}
