/**
 *  @file
 *  @copyright defined in agr/LICENSE
 */
#pragma once

#include <agrio/testing/tester.hpp>

using namespace agrio::chain;
using namespace agrio::testing;

private_key_type get_private_key( name keyname, string role );

public_key_type  get_public_key( name keyname, string role );

void push_blocks( tester& from, tester& to, uint32_t block_num_limit = std::numeric_limits<uint32_t>::max() );

bool produce_empty_blocks_until( tester& t,
                                 account_name last_producer,
                                 account_name next_producer,
                                 uint32_t max_num_blocks_to_produce = std::numeric_limits<uint32_t>::max() );
