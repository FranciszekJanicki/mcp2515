#ifndef MCP2515_MCP2515_UTILITY_H
#define MCP2515_MCP2515_UTILITY_H

#include "mcp2515_config.h"
#include "mcp2515_registers.h"

#ifdef __cplusplus
extern "C" {
#endif

mcp2515_reg_address_t mcp2515_txb_num_to_offset(mcp2515_txb_num_t num);

mcp2515_reg_address_t mcp2515_rxb_num_to_offset(mcp2515_rxb_num_t num);

mcp2515_reg_address_t mcp2515_rxf_num_to_offset(mcp2515_rxf_num_t num);

mcp2515_reg_address_t mcp2515_rxm_num_to_offset(mcp2515_rxm_num_t num);

#ifdef __cplusplus
}
#endif

#endif // MCP2515_MCP2515_UTILITY_H