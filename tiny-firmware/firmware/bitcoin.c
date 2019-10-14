// This file is automatically generated from coin_info.c.mako
// DO NOT EDIT

#include "coins.h"
#include "bitcoin.h"
#include "curves.h"
#include "secp256k1.h"

const CoinInfo coins[COINS_COUNT] = {
    {
        .coin_name = "Bitcoin",
	    .coin_shortcut = " BTC",
	    .maxfee_kb = 2000000,
	    .signed_message_header = "\x18" "Bitcoin Signed Message:\n",
	    .has_address_type = true,
	    .has_address_type_p2sh = true,
	    .has_segwit = true,
	    .has_fork_id = false,
	    .force_bip143 = false,
	    .decred = false,
	    .address_type = 0,
    	.address_type_p2sh = 5,
    	.xpub_magic = 0x0488b21e,
	    .xpub_magic_segwit_p2sh = 0x049d7cb2,
	    .xpub_magic_segwit_native = 0x04b24746,
	    .fork_id = 0,
    	.bech32_prefix = "bc",
	    .cashaddr_prefix = NULL,
	    .coin_type = (0 | 0x80000000),
	    .negative_fee = false,
    	.curve_name = SECP256K1_NAME,
    	.curve = &secp256k1_info,
    },
};
