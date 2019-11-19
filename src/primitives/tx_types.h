// Copyright (c) 2019 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_PRIMITIVES_TX_TYPES_H
#define BITCOIN_PRIMITIVES_TX_TYPES_H

#include <memory>

// Forward declarations and typedefs to be used as replacement for the full
// transaction.h or block.h header

class CTransaction;

struct CMutableTransaction;

using CTransactionRef = std::shared_ptr<const CTransaction>;

class CBlock;

#endif // BITCOIN_PRIMITIVES_TX_TYPES_H
