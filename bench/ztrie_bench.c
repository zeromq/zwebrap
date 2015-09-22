/*  =========================================================================
    ztrie_bench - benchmarks for ztrie performance.

    Copyright (c) the Contributors as noted in the AUTHORS file.
    This file is part of CZMQ, the high-level C binding for 0MQ:
    http://czmq.zeromq.org.

    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.
    =========================================================================
*/

#include "../include/zwebrap.h"
#include "../src/zwebrap_classes.h"
#include "bench.h"

int main()
{
    printf ("Run benchmarks for ztrie:\n");

    ztrie_t *n = ztrie_new ('/');

    char *route_data = (char *) malloc (sizeof (char) * 20);
    sprintf (route_data, "%s", "Route Data");

    MEASURE(tree_compile)
    ztrie_insert_route (n, "/foo/bar/baz", NULL, NULL);
    ztrie_insert_route (n, "/foo/bar/qux", NULL, NULL);
    ztrie_insert_route (n, "/foo/bar/quux", NULL, NULL);
    ztrie_insert_route (n, "/foo/bar/corge", NULL, NULL);
    ztrie_insert_route (n, "/foo/bar/grault", NULL, NULL);
    ztrie_insert_route (n, "/foo/bar/garply", NULL, NULL);
    ztrie_insert_route (n, "/foo/baz/bar", NULL, NULL);
    ztrie_insert_route (n, "/foo/baz/qux", NULL, NULL);
    ztrie_insert_route (n, "/foo/baz/quux", NULL, NULL);
    ztrie_insert_route (n, "/foo/baz/corge", NULL, NULL);
    ztrie_insert_route (n, "/foo/baz/grault", NULL, NULL);
    ztrie_insert_route (n, "/foo/baz/garply", NULL, NULL);
    ztrie_insert_route (n, "/foo/qux/bar", NULL, NULL);
    ztrie_insert_route (n, "/foo/qux/baz", NULL, NULL);
    ztrie_insert_route (n, "/foo/qux/quux", NULL, NULL);
    ztrie_insert_route (n, "/foo/qux/corge", NULL, NULL);
    ztrie_insert_route (n, "/foo/qux/grault", NULL, NULL);
    ztrie_insert_route (n, "/foo/qux/garply", NULL, NULL);
    ztrie_insert_route (n, "/foo/quux/bar", NULL, NULL);
    ztrie_insert_route (n, "/foo/quux/baz", NULL, NULL);
    ztrie_insert_route (n, "/foo/quux/qux", NULL, NULL);
    ztrie_insert_route (n, "/foo/quux/corge", NULL, NULL);
    ztrie_insert_route (n, "/foo/quux/grault", NULL, NULL);
    ztrie_insert_route (n, "/foo/quux/garply", NULL, NULL);
    ztrie_insert_route (n, "/foo/corge/bar", NULL, NULL);
    ztrie_insert_route (n, "/foo/corge/baz", NULL, NULL);
    ztrie_insert_route (n, "/foo/corge/qux", NULL, NULL);
    ztrie_insert_route (n, "/foo/corge/quux", NULL, NULL);
    ztrie_insert_route (n, "/foo/corge/grault", NULL, NULL);
    ztrie_insert_route (n, "/foo/corge/garply", NULL, NULL);
    ztrie_insert_route (n, "/foo/grault/bar", NULL, NULL);
    ztrie_insert_route (n, "/foo/grault/baz", NULL, NULL);
    ztrie_insert_route (n, "/foo/grault/qux", NULL, NULL);
    ztrie_insert_route (n, "/foo/grault/quux", NULL, NULL);
    ztrie_insert_route (n, "/foo/grault/corge", NULL, NULL);
    ztrie_insert_route (n, "/foo/grault/garply", NULL, NULL);
    ztrie_insert_route (n, "/foo/garply/bar", NULL, NULL);
    ztrie_insert_route (n, "/foo/garply/baz", NULL, NULL);
    ztrie_insert_route (n, "/foo/garply/qux", NULL, NULL);
    ztrie_insert_route (n, "/foo/garply/quux", NULL, NULL);
    ztrie_insert_route (n, "/foo/garply/corge", NULL, NULL);
    ztrie_insert_route (n, "/foo/garply/grault", NULL, NULL);
    ztrie_insert_route (n, "/bar/foo/baz", NULL, NULL);
    ztrie_insert_route (n, "/bar/foo/qux", NULL, NULL);
    ztrie_insert_route (n, "/bar/foo/quux", NULL, NULL);
    ztrie_insert_route (n, "/bar/foo/corge", NULL, NULL);
    ztrie_insert_route (n, "/bar/foo/grault", NULL, NULL);
    ztrie_insert_route (n, "/bar/foo/garply", NULL, NULL);
    ztrie_insert_route (n, "/bar/baz/foo", NULL, NULL);
    ztrie_insert_route (n, "/bar/baz/qux", NULL, NULL);
    ztrie_insert_route (n, "/bar/baz/quux", NULL, NULL);
    ztrie_insert_route (n, "/bar/baz/corge", NULL, NULL);
    ztrie_insert_route (n, "/bar/baz/grault", NULL, NULL);
    ztrie_insert_route (n, "/bar/baz/garply", NULL, NULL);
    ztrie_insert_route (n, "/bar/qux/foo", NULL, NULL);
    ztrie_insert_route (n, "/bar/qux/baz", NULL, NULL);
    ztrie_insert_route (n, "/bar/qux/quux", NULL, NULL);
    ztrie_insert_route (n, "/bar/qux/corge", NULL, NULL);
    ztrie_insert_route (n, "/bar/qux/grault", NULL, NULL);
    ztrie_insert_route (n, "/bar/qux/garply", NULL, NULL);
    ztrie_insert_route (n, "/bar/quux/foo", NULL, NULL);
    ztrie_insert_route (n, "/bar/quux/baz", NULL, NULL);
    ztrie_insert_route (n, "/bar/quux/qux", NULL, NULL);
    ztrie_insert_route (n, "/bar/quux/corge", NULL, NULL);
    ztrie_insert_route (n, "/bar/quux/grault", NULL, NULL);
    ztrie_insert_route (n, "/bar/quux/garply", NULL, NULL);
    ztrie_insert_route (n, "/bar/corge/foo", NULL, NULL);
    ztrie_insert_route (n, "/bar/corge/baz", NULL, NULL);
    ztrie_insert_route (n, "/bar/corge/qux", NULL, NULL);
    ztrie_insert_route (n, "/bar/corge/quux", NULL, NULL);
    ztrie_insert_route (n, "/bar/corge/grault", NULL, NULL);
    ztrie_insert_route (n, "/bar/corge/garply", NULL, NULL);
    ztrie_insert_route (n, "/bar/grault/foo", NULL, NULL);
    ztrie_insert_route (n, "/bar/grault/baz", NULL, NULL);
    ztrie_insert_route (n, "/bar/grault/qux", NULL, NULL);
    ztrie_insert_route (n, "/bar/grault/quux", NULL, NULL);
    ztrie_insert_route (n, "/bar/grault/corge", NULL, NULL);
    ztrie_insert_route (n, "/bar/grault/garply", NULL, NULL);
    ztrie_insert_route (n, "/bar/garply/foo", NULL, NULL);
    ztrie_insert_route (n, "/bar/garply/baz", NULL, NULL);
    ztrie_insert_route (n, "/bar/garply/qux", NULL, NULL);
    ztrie_insert_route (n, "/bar/garply/quux", NULL, NULL);
    ztrie_insert_route (n, "/bar/garply/corge", NULL, NULL);
    ztrie_insert_route (n, "/bar/garply/grault", NULL, NULL);
    ztrie_insert_route (n, "/baz/foo/bar", NULL, NULL);
    ztrie_insert_route (n, "/baz/foo/qux", NULL, NULL);
    ztrie_insert_route (n, "/baz/foo/quux", NULL, NULL);
    ztrie_insert_route (n, "/baz/foo/corge", NULL, NULL);
    ztrie_insert_route (n, "/baz/foo/grault", NULL, NULL);
    ztrie_insert_route (n, "/baz/foo/garply", NULL, NULL);
    ztrie_insert_route (n, "/baz/bar/foo", NULL, NULL);
    ztrie_insert_route (n, "/baz/bar/qux", NULL, NULL);
    ztrie_insert_route (n, "/baz/bar/quux", NULL, NULL);
    ztrie_insert_route (n, "/baz/bar/corge", NULL, NULL);
    ztrie_insert_route (n, "/baz/bar/grault", NULL, NULL);
    ztrie_insert_route (n, "/baz/bar/garply", NULL, NULL);
    ztrie_insert_route (n, "/baz/qux/foo", NULL, NULL);
    ztrie_insert_route (n, "/baz/qux/bar", NULL, NULL);
    ztrie_insert_route (n, "/baz/qux/quux", NULL, NULL);
    ztrie_insert_route (n, "/baz/qux/corge", NULL, NULL);
    ztrie_insert_route (n, "/baz/qux/grault", NULL, NULL);
    ztrie_insert_route (n, "/baz/qux/garply", NULL, NULL);
    ztrie_insert_route (n, "/baz/quux/foo", NULL, NULL);
    ztrie_insert_route (n, "/baz/quux/bar", NULL, NULL);
    ztrie_insert_route (n, "/baz/quux/qux", NULL, NULL);
    ztrie_insert_route (n, "/baz/quux/corge", NULL, NULL);
    ztrie_insert_route (n, "/baz/quux/grault", NULL, NULL);
    ztrie_insert_route (n, "/baz/quux/garply", NULL, NULL);
    ztrie_insert_route (n, "/baz/corge/foo", NULL, NULL);
    ztrie_insert_route (n, "/baz/corge/bar", NULL, NULL);
    ztrie_insert_route (n, "/baz/corge/qux", NULL, NULL);
    ztrie_insert_route (n, "/baz/corge/quux", NULL, NULL);
    ztrie_insert_route (n, "/baz/corge/grault", NULL, NULL);
    ztrie_insert_route (n, "/baz/corge/garply", NULL, NULL);
    ztrie_insert_route (n, "/baz/grault/foo", NULL, NULL);
    ztrie_insert_route (n, "/baz/grault/bar", NULL, NULL);
    ztrie_insert_route (n, "/baz/grault/qux", NULL, NULL);
    ztrie_insert_route (n, "/baz/grault/quux", NULL, NULL);
    ztrie_insert_route (n, "/baz/grault/corge", NULL, NULL);
    ztrie_insert_route (n, "/baz/grault/garply", NULL, NULL);
    ztrie_insert_route (n, "/baz/garply/foo", NULL, NULL);
    ztrie_insert_route (n, "/baz/garply/bar", NULL, NULL);
    ztrie_insert_route (n, "/baz/garply/qux", NULL, NULL);
    ztrie_insert_route (n, "/baz/garply/quux", NULL, NULL);
    ztrie_insert_route (n, "/baz/garply/corge", NULL, NULL);
    ztrie_insert_route (n, "/baz/garply/grault", NULL, NULL);
    ztrie_insert_route (n, "/qux/foo/bar", NULL, NULL);
    ztrie_insert_route (n, "/qux/foo/baz", NULL, NULL);
    ztrie_insert_route (n, "/qux/foo/quux", NULL, NULL);
    ztrie_insert_route (n, "/qux/foo/corge", NULL, NULL);
    ztrie_insert_route (n, "/qux/foo/grault", NULL, NULL);
    ztrie_insert_route (n, "/qux/foo/garply", NULL, NULL);
    ztrie_insert_route (n, "/qux/bar/foo", NULL, NULL);
    ztrie_insert_route (n, "/qux/bar/baz", NULL, NULL);
    ztrie_insert_route (n, "/qux/bar/quux", NULL, NULL);
    ztrie_insert_route (n, "/qux/bar/corge", route_data, NULL);
    ztrie_insert_route (n, "/qux/bar/grault", NULL, NULL);
    ztrie_insert_route (n, "/qux/bar/garply", NULL, NULL);
    ztrie_insert_route (n, "/qux/baz/foo", NULL, NULL);
    ztrie_insert_route (n, "/qux/baz/bar", NULL, NULL);
    ztrie_insert_route (n, "/qux/baz/quux", NULL, NULL);
    ztrie_insert_route (n, "/qux/baz/corge", NULL, NULL);
    ztrie_insert_route (n, "/qux/baz/grault", NULL, NULL);
    ztrie_insert_route (n, "/qux/baz/garply", NULL, NULL);
    ztrie_insert_route (n, "/qux/quux/foo", NULL, NULL);
    ztrie_insert_route (n, "/qux/quux/bar", NULL, NULL);
    ztrie_insert_route (n, "/qux/quux/baz", NULL, NULL);
    ztrie_insert_route (n, "/qux/quux/corge", NULL, NULL);
    ztrie_insert_route (n, "/qux/quux/grault", NULL, NULL);
    ztrie_insert_route (n, "/qux/quux/garply", NULL, NULL);
    ztrie_insert_route (n, "/qux/corge/foo", NULL, NULL);
    ztrie_insert_route (n, "/qux/corge/bar", NULL, NULL);
    ztrie_insert_route (n, "/qux/corge/baz", NULL, NULL);
    ztrie_insert_route (n, "/qux/corge/quux", NULL, NULL);
    ztrie_insert_route (n, "/qux/corge/grault", NULL, NULL);
    ztrie_insert_route (n, "/qux/corge/garply", NULL, NULL);
    ztrie_insert_route (n, "/qux/grault/foo", NULL, NULL);
    ztrie_insert_route (n, "/qux/grault/bar", NULL, NULL);
    ztrie_insert_route (n, "/qux/grault/baz", NULL, NULL);
    ztrie_insert_route (n, "/qux/grault/quux", NULL, NULL);
    ztrie_insert_route (n, "/qux/grault/corge", NULL, NULL);
    ztrie_insert_route (n, "/qux/grault/garply", NULL, NULL);
    ztrie_insert_route (n, "/qux/garply/foo", NULL, NULL);
    ztrie_insert_route (n, "/qux/garply/bar", NULL, NULL);
    ztrie_insert_route (n, "/qux/garply/baz", NULL, NULL);
    ztrie_insert_route (n, "/qux/garply/quux", NULL, NULL);
    ztrie_insert_route (n, "/qux/garply/corge", NULL, NULL);
    ztrie_insert_route (n, "/qux/garply/grault", NULL, NULL);
    ztrie_insert_route (n, "/quux/foo/bar", NULL, NULL);
    ztrie_insert_route (n, "/quux/foo/baz", NULL, NULL);
    ztrie_insert_route (n, "/quux/foo/qux", NULL, NULL);
    ztrie_insert_route (n, "/quux/foo/corge", NULL, NULL);
    ztrie_insert_route (n, "/quux/foo/grault", NULL, NULL);
    ztrie_insert_route (n, "/quux/foo/garply", NULL, NULL);
    ztrie_insert_route (n, "/quux/bar/foo", NULL, NULL);
    ztrie_insert_route (n, "/quux/bar/baz", NULL, NULL);
    ztrie_insert_route (n, "/quux/bar/qux", NULL, NULL);
    ztrie_insert_route (n, "/quux/bar/corge", NULL, NULL);
    ztrie_insert_route (n, "/quux/bar/grault", NULL, NULL);
    ztrie_insert_route (n, "/quux/bar/garply", NULL, NULL);
    ztrie_insert_route (n, "/quux/baz/foo", NULL, NULL);
    ztrie_insert_route (n, "/quux/baz/bar", NULL, NULL);
    ztrie_insert_route (n, "/quux/baz/qux", NULL, NULL);
    ztrie_insert_route (n, "/quux/baz/corge", NULL, NULL);
    ztrie_insert_route (n, "/quux/baz/grault", NULL, NULL);
    ztrie_insert_route (n, "/quux/baz/garply", NULL, NULL);
    ztrie_insert_route (n, "/quux/qux/foo", NULL, NULL);
    ztrie_insert_route (n, "/quux/qux/bar", NULL, NULL);
    ztrie_insert_route (n, "/quux/qux/baz", NULL, NULL);
    ztrie_insert_route (n, "/quux/qux/corge", NULL, NULL);
    ztrie_insert_route (n, "/quux/qux/grault", NULL, NULL);
    ztrie_insert_route (n, "/quux/qux/garply", NULL, NULL);
    ztrie_insert_route (n, "/quux/corge/foo", NULL, NULL);
    ztrie_insert_route (n, "/quux/corge/bar", NULL, NULL);
    ztrie_insert_route (n, "/quux/corge/baz", NULL, NULL);
    ztrie_insert_route (n, "/quux/corge/qux", NULL, NULL);
    ztrie_insert_route (n, "/quux/corge/grault", NULL, NULL);
    ztrie_insert_route (n, "/quux/corge/garply", NULL, NULL);
    ztrie_insert_route (n, "/quux/grault/foo", NULL, NULL);
    ztrie_insert_route (n, "/quux/grault/bar", NULL, NULL);
    ztrie_insert_route (n, "/quux/grault/baz", NULL, NULL);
    ztrie_insert_route (n, "/quux/grault/qux", NULL, NULL);
    ztrie_insert_route (n, "/quux/grault/corge", NULL, NULL);
    ztrie_insert_route (n, "/quux/grault/garply", NULL, NULL);
    ztrie_insert_route (n, "/quux/garply/foo", NULL, NULL);
    ztrie_insert_route (n, "/quux/garply/bar", NULL, NULL);
    ztrie_insert_route (n, "/quux/garply/baz", NULL, NULL);
    ztrie_insert_route (n, "/quux/garply/qux", NULL, NULL);
    ztrie_insert_route (n, "/quux/garply/corge", NULL, NULL);
    ztrie_insert_route (n, "/quux/garply/grault", NULL, NULL);
    ztrie_insert_route (n, "/corge/foo/bar", NULL, NULL);
    ztrie_insert_route (n, "/corge/foo/baz", NULL, NULL);
    ztrie_insert_route (n, "/corge/foo/qux", NULL, NULL);
    ztrie_insert_route (n, "/corge/foo/quux", NULL, NULL);
    ztrie_insert_route (n, "/corge/foo/grault", NULL, NULL);
    ztrie_insert_route (n, "/corge/foo/garply", NULL, NULL);
    ztrie_insert_route (n, "/corge/bar/foo", NULL, NULL);
    ztrie_insert_route (n, "/corge/bar/baz", NULL, NULL);
    ztrie_insert_route (n, "/corge/bar/qux", NULL, NULL);
    ztrie_insert_route (n, "/corge/bar/quux", NULL, NULL);
    ztrie_insert_route (n, "/corge/bar/grault", NULL, NULL);
    ztrie_insert_route (n, "/corge/bar/garply", NULL, NULL);
    ztrie_insert_route (n, "/corge/baz/foo", NULL, NULL);
    ztrie_insert_route (n, "/corge/baz/bar", NULL, NULL);
    ztrie_insert_route (n, "/corge/baz/qux", NULL, NULL);
    ztrie_insert_route (n, "/corge/baz/quux", NULL, NULL);
    ztrie_insert_route (n, "/corge/baz/grault", NULL, NULL);
    ztrie_insert_route (n, "/corge/baz/garply", NULL, NULL);
    ztrie_insert_route (n, "/corge/qux/foo", NULL, NULL);
    ztrie_insert_route (n, "/corge/qux/bar", NULL, NULL);
    ztrie_insert_route (n, "/corge/qux/baz", NULL, NULL);
    ztrie_insert_route (n, "/corge/qux/quux", NULL, NULL);
    ztrie_insert_route (n, "/corge/qux/grault", NULL, NULL);
    ztrie_insert_route (n, "/corge/qux/garply", NULL, NULL);
    ztrie_insert_route (n, "/corge/quux/foo", NULL, NULL);
    ztrie_insert_route (n, "/corge/quux/bar", NULL, NULL);
    ztrie_insert_route (n, "/corge/quux/baz", NULL, NULL);
    ztrie_insert_route (n, "/corge/quux/qux", NULL, NULL);
    ztrie_insert_route (n, "/corge/quux/grault", NULL, NULL);
    ztrie_insert_route (n, "/corge/quux/garply", NULL, NULL);
    ztrie_insert_route (n, "/corge/grault/foo", NULL, NULL);
    ztrie_insert_route (n, "/corge/grault/bar", NULL, NULL);
    ztrie_insert_route (n, "/corge/grault/baz", NULL, NULL);
    ztrie_insert_route (n, "/corge/grault/qux", NULL, NULL);
    ztrie_insert_route (n, "/corge/grault/quux", NULL, NULL);
    ztrie_insert_route (n, "/corge/grault/garply", NULL, NULL);
    ztrie_insert_route (n, "/corge/garply/foo", NULL, NULL);
    ztrie_insert_route (n, "/corge/garply/bar", NULL, NULL);
    ztrie_insert_route (n, "/corge/garply/baz", NULL, NULL);
    ztrie_insert_route (n, "/corge/garply/qux", NULL, NULL);
    ztrie_insert_route (n, "/corge/garply/quux", NULL, NULL);
    ztrie_insert_route (n, "/corge/garply/grault", NULL, NULL);
    ztrie_insert_route (n, "/grault/foo/bar", NULL, NULL);
    ztrie_insert_route (n, "/grault/foo/baz", NULL, NULL);
    ztrie_insert_route (n, "/grault/foo/qux", NULL, NULL);
    ztrie_insert_route (n, "/grault/foo/quux", NULL, NULL);
    ztrie_insert_route (n, "/grault/foo/corge", NULL, NULL);
    ztrie_insert_route (n, "/grault/foo/garply", NULL, NULL);
    ztrie_insert_route (n, "/grault/bar/foo", NULL, NULL);
    ztrie_insert_route (n, "/grault/bar/baz", NULL, NULL);
    ztrie_insert_route (n, "/grault/bar/qux", NULL, NULL);
    ztrie_insert_route (n, "/grault/bar/quux", NULL, NULL);
    ztrie_insert_route (n, "/grault/bar/corge", NULL, NULL);
    ztrie_insert_route (n, "/grault/bar/garply", NULL, NULL);
    ztrie_insert_route (n, "/grault/baz/foo", NULL, NULL);
    ztrie_insert_route (n, "/grault/baz/bar", NULL, NULL);
    ztrie_insert_route (n, "/grault/baz/qux", NULL, NULL);
    ztrie_insert_route (n, "/grault/baz/quux", NULL, NULL);
    ztrie_insert_route (n, "/grault/baz/corge", NULL, NULL);
    ztrie_insert_route (n, "/grault/baz/garply", NULL, NULL);
    ztrie_insert_route (n, "/grault/qux/foo", NULL, NULL);
    ztrie_insert_route (n, "/grault/qux/bar", NULL, NULL);
    ztrie_insert_route (n, "/grault/qux/baz", NULL, NULL);
    ztrie_insert_route (n, "/grault/qux/quux", NULL, NULL);
    ztrie_insert_route (n, "/grault/qux/corge", NULL, NULL);
    ztrie_insert_route (n, "/grault/qux/garply", NULL, NULL);
    ztrie_insert_route (n, "/grault/quux/foo", NULL, NULL);
    ztrie_insert_route (n, "/grault/quux/bar", NULL, NULL);
    ztrie_insert_route (n, "/grault/quux/baz", NULL, NULL);
    ztrie_insert_route (n, "/grault/quux/qux", NULL, NULL);
    ztrie_insert_route (n, "/grault/quux/corge", NULL, NULL);
    ztrie_insert_route (n, "/grault/quux/garply", NULL, NULL);
    ztrie_insert_route (n, "/grault/corge/foo", NULL, NULL);
    ztrie_insert_route (n, "/grault/corge/bar", NULL, NULL);
    ztrie_insert_route (n, "/grault/corge/baz", NULL, NULL);
    ztrie_insert_route (n, "/grault/corge/qux", NULL, NULL);
    ztrie_insert_route (n, "/grault/corge/quux", NULL, NULL);
    ztrie_insert_route (n, "/grault/corge/garply", NULL, NULL);
    ztrie_insert_route (n, "/grault/garply/foo", NULL, NULL);
    ztrie_insert_route (n, "/grault/garply/bar", NULL, NULL);
    ztrie_insert_route (n, "/grault/garply/baz", NULL, NULL);
    ztrie_insert_route (n, "/grault/garply/qux", NULL, NULL);
    ztrie_insert_route (n, "/grault/garply/quux", NULL, NULL);
    ztrie_insert_route (n, "/grault/garply/corge", NULL, NULL);
    ztrie_insert_route (n, "/garply/foo/bar", NULL, NULL);
    ztrie_insert_route (n, "/garply/foo/baz", NULL, NULL);
    ztrie_insert_route (n, "/garply/foo/qux", NULL, NULL);
    ztrie_insert_route (n, "/garply/foo/quux", NULL, NULL);
    ztrie_insert_route (n, "/garply/foo/corge", NULL, NULL);
    ztrie_insert_route (n, "/garply/foo/grault", NULL, NULL);
    ztrie_insert_route (n, "/garply/bar/foo", NULL, NULL);
    ztrie_insert_route (n, "/garply/bar/baz", NULL, NULL);
    ztrie_insert_route (n, "/garply/bar/qux", NULL, NULL);
    ztrie_insert_route (n, "/garply/bar/quux", NULL, NULL);
    ztrie_insert_route (n, "/garply/bar/corge", NULL, NULL);
    ztrie_insert_route (n, "/garply/bar/grault", NULL, NULL);
    ztrie_insert_route (n, "/garply/baz/foo", NULL, NULL);
    ztrie_insert_route (n, "/garply/baz/bar", NULL, NULL);
    ztrie_insert_route (n, "/garply/baz/qux", NULL, NULL);
    ztrie_insert_route (n, "/garply/baz/quux", NULL, NULL);
    ztrie_insert_route (n, "/garply/baz/corge", NULL, NULL);
    ztrie_insert_route (n, "/garply/baz/grault", NULL, NULL);
    ztrie_insert_route (n, "/garply/qux/foo", NULL, NULL);
    ztrie_insert_route (n, "/garply/qux/bar", NULL, NULL);
    ztrie_insert_route (n, "/garply/qux/baz", NULL, NULL);
    ztrie_insert_route (n, "/garply/qux/quux", NULL, NULL);
    ztrie_insert_route (n, "/garply/qux/corge", NULL, NULL);
    ztrie_insert_route (n, "/garply/qux/grault", NULL, NULL);
    ztrie_insert_route (n, "/garply/quux/foo", NULL, NULL);
    ztrie_insert_route (n, "/garply/quux/bar", NULL, NULL);
    ztrie_insert_route (n, "/garply/quux/baz", NULL, NULL);
    ztrie_insert_route (n, "/garply/quux/qux", NULL, NULL);
    ztrie_insert_route (n, "/garply/quux/corge", NULL, NULL);
    ztrie_insert_route (n, "/garply/quux/grault", NULL, NULL);
    ztrie_insert_route (n, "/garply/corge/foo", NULL, NULL);
    ztrie_insert_route (n, "/garply/corge/bar", NULL, NULL);
    ztrie_insert_route (n, "/garply/corge/baz", NULL, NULL);
    ztrie_insert_route (n, "/garply/corge/qux", NULL, NULL);
    ztrie_insert_route (n, "/garply/corge/quux", NULL, NULL);
    ztrie_insert_route (n, "/garply/corge/grault", NULL, NULL);
    ztrie_insert_route (n, "/garply/grault/foo", NULL, NULL);
    ztrie_insert_route (n, "/garply/grault/bar", NULL, NULL);
    ztrie_insert_route (n, "/garply/grault/baz", NULL, NULL);
    ztrie_insert_route (n, "/garply/grault/qux", NULL, NULL);
    ztrie_insert_route (n, "/garply/{id:[^/]+}/quux", NULL, NULL);
    ztrie_insert_route (n, "/garply/{[^/]+}/corge", NULL, NULL);
    END_MEASURE(tree_compile)
    BENCHMARK_SUMMARY(tree_compile);

    bool match = false;
    match = ztrie_matches (n , "/qux/bar/corge");
    assert(match);
    assert(streq (ztrie_hit_data (n), "Route Data"));

    BENCHMARK(match_str)
    match = ztrie_matches (n , "/qux/bar/corge");
    END_BENCHMARK(match_str)
    BENCHMARK_SUMMARY(match_str);
    assert (match);

    BENCHMARK(match_regex)
    match = ztrie_matches (n, "/garply/something/corge");
    END_BENCHMARK(match_regex)
    BENCHMARK_SUMMARY(match_regex);
    assert (match);

    BENCHMARK(match_param)
    match = ztrie_matches (n, "/garply/2014/quux");
    END_BENCHMARK(match_param)
    BENCHMARK_SUMMARY(match_param);
    assert (match);

    BENCHMARK(match_param_create_hash)
    match = ztrie_matches (n, "/garply/2014/quux");
    zhashx_t *parameters = ztrie_hit_parameters (n);
    zhashx_destroy (&parameters);
    END_BENCHMARK(match_param_create_hash)
    BENCHMARK_SUMMARY(match_param_create_hash);
    assert (match);

    ztrie_destroy (&n);
    return 0;
}
