#ifndef MCP2515_MCP2515_REGISTERS_H
#define MCP2515_MCP2515_REGISTERS_H

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    uint8_t abtf : 1;
    uint8_t mloa : 1;
    uint8_t txerr : 1;
    uint8_t txreq : 1;
    uint8_t txp1 : 1;
    uint8_t txp0 : 1;
} mcp2515_txbctrl_reg_t;

typedef struct {
    uint8_t b2rts : 1;
    uint8_t b1rts : 1;
    uint8_t b0rts : 1;
    uint8_t b2rtsm : 1;
    uint8_t b1rtsm : 1;
    uint8_t b0rtsm : 1;
} mcp2515_txrtsctrl_reg_t;

typedef struct {
    uint16_t sid : 11;
    uint8_t exide : 1;
    uint32_t eid : 18;
} mcp2515_txbid_reg_t;

typedef struct {
    uint8_t rtr : 1;
    uint8_t dlc : 4;
} mcp2515_txbdlc_reg_t;

typedef struct {
    uint8_t txbd[8];
} mcp2515_txbd_reg_t;

typedef struct {
    uint8_t rxm : 2;
    uint8_t rxrtr : 1;
    uint8_t bukt : 1;
    uint8_t bukt1 : 1;
    uint8_t filhit : 1;
} mcp2515_rxb0ctrl_reg_t;

typedef struct {
    uint8_t rxm : 2;
    uint8_t rxrtr : 1;
    uint8_t filhit : 3;
} mcp2515_rxb1ctrl_reg_t;

typedef struct {
    uint8_t b1bfs : 1;
    uint8_t b0bfs : 1;
    uint8_t b1bfe : 1;
    uint8_t b0bfe : 1;
    uint8_t b1bfm : 1;
    uint8_t b0bfm : 1;
} mcp2515_bfpctrl_reg_t;

typedef struct {
    uint16_t sid : 11;
    uint8_t srr : 1;
    uint8_t ide : 1;
    uint32_t eid : 18;
} mcp2515_rxbid_reg_t;

typedef struct {
    uint8_t rtr : 1;
    uint8_t rb : 2;
    uint8_t dlc : 4;
} mcp2515_rxbdlc_reg_t;

typedef struct {
    uint8_t rxbd[8];
} mcp2515_rxbd_reg_t;

typedef struct {
    uint16_t sid : 11;
    uint8_t exide : 1;
    uint32_t eid : 18;
} mcp2515_rxfid_reg_t;

typedef struct {
    uint16_t sid : 11;
    uint32_t eid : 18;
} mcp2515_rxmid_reg_t;

typedef struct {
    uint8_t sjw : 2;
    uint8_t brp : 6;
} mcp2515_cnf1_reg_t;

typedef struct {
    uint8_t btlmode : 1;
    uint8_t sam : 1;
    uint8_t phseg : 3;
    uint8_t prseg : 3;
} mcp2515_cnf2_reg_t;

typedef struct {
    uint8_t sof : 1;
    uint8_t wakfil : 1;
    uint8_t phseg2 : 3;
} mcp2515_cnf3_reg_t;

typedef struct {
    uint8_t tec : 8;
} mcp2515_tec_reg_t;

typedef struct {
    uint8_t rec : 8;
} mcp2515_rec_reg_t;

typedef struct {
    uint8_t rx1ovr : 1;
    uint8_t rx0ovr : 1;
    uint8_t txbo : 1;
    uint8_t txep : 1;
    uint8_t rxep : 1;
    uint8_t txwar : 1;
    uint8_t rxwar : 1;
    uint8_t ewarn : 1;
} mcp2515_eflg_reg_t;

typedef struct {
    uint8_t merre : 1;
    uint8_t wakie : 1;
    uint8_t errie : 1;
    uint8_t tx2ie : 1;
    uint8_t tx1ie : 1;
    uint8_t tx0ie : 1;
    uint8_t rx1ie : 1;
    uint8_t rx0ie : 1;
} mcp2515_caninte_reg_t;

typedef struct {
    uint8_t merrf : 1;
    uint8_t wakif : 1;
    uint8_t errif : 1;
    uint8_t tx2if : 1;
    uint8_t tx1if : 1;
    uint8_t tx0if : 1;
    uint8_t rx1if : 1;
    uint8_t rx0if : 1;
} mcp2515_canintf_reg_t;

typedef struct {
    uint8_t reqop : 3;
    uint8_t abat : 1;
    uint8_t osm : 1;
    uint8_t clken : 1;
    uint8_t clkpre : 2;
} mcp2515_canctrl_reg_t;

typedef struct {
    uint8_t opmod : 3;
    uint8_t icod : 3;
} mcp2515_canstat_reg_t;

#ifdef __cplusplus
}
#endif

#endif // MCP2515_MCP2515_REGISTERS_H