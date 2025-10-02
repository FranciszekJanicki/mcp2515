#ifndef MCP2515_MCP2515_H
#define MCP2515_MCP2515_H

#include "mcp2515_commands.h"
#include "mcp2515_config.h"
#include "mcp2515_registers.h"
#include "mcp2515_utility.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    mcp2515_config_t config;
    mcp2515_interface_t interface;
} mcp2515_t;

mcp2515_err_t mcp2515_initialize(mcp2515_t* mcp2515,
                                 mcp2515_config_t const* config,
                                 mcp2515_interface_t const* interface);
mcp2515_err_t mcp2515_deinitialize(mcp2515_t* mcp2515);

mcp2515_err_t mcp2515_get_txbctrl_reg(mcp2515_t const* mcp2515,
                                      mcp2515_txb_num_t num,
                                      mcp2515_txbctrl_reg_t* reg);
mcp2515_err_t mcp2515_set_txbctrl_reg(mcp2515_t const* mcp2515,
                                      mcp2515_txb_num_t num,
                                      mcp2515_txbctrl_reg_t const* reg);

mcp2515_err_t mcp2515_get_txrtsctrl_reg(mcp2515_t const* mcp2515,
                                        mcp2515_txrtsctrl_reg_t* reg);
mcp2515_err_t mcp2515_set_txrtsctrl_reg(mcp2515_t const* mcp2515,
                                        mcp2515_txrtsctrl_reg_t const* reg);

mcp2515_err_t mcp2515_get_txbid_reg(mcp2515_t const* mcp2515,
                                    mcp2515_txb_num_t num,
                                    mcp2515_txbid_reg_t* reg);
mcp2515_err_t mcp2515_set_txbid_reg(mcp2515_t const* mcp2515,
                                    mcp2515_txb_num_t num,
                                    mcp2515_txbid_reg_t const* reg);

mcp2515_err_t mcp2515_get_txbdlc_reg(mcp2515_t const* mcp2515,
                                     mcp2515_txb_num_t num,
                                     mcp2515_txbdlc_reg_t* reg);
mcp2515_err_t mcp2515_set_txbdlc_reg(mcp2515_t const* mcp2515,
                                     mcp2515_txb_num_t num,
                                     mcp2515_txbdlc_reg_t const* reg);

mcp2515_err_t mcp2515_get_txbd_reg(mcp2515_t const* mcp2515,
                                   mcp2515_txb_num_t num,
                                   mcp2515_txbd_reg_t* reg);
mcp2515_err_t mcp2515_set_txbd_reg(mcp2515_t const* mcp2515,
                                   mcp2515_txb_num_t num,
                                   mcp2515_txbd_reg_t const* reg);

mcp2515_err_t mcp2515_get_rxb0ctrl_reg(mcp2515_t const* mcp2515,
                                       mcp2515_rxb0ctrl_reg_t* reg);
mcp2515_err_t mcp2515_set_rxb0ctrl_reg(mcp2515_t const* mcp2515,
                                       mcp2515_rxb0ctrl_reg_t const* reg);

mcp2515_err_t mcp2515_get_rxb1ctrl_reg(mcp2515_t const* mcp2515,
                                       mcp2515_rxb0ctrl_reg_t* reg);
mcp2515_err_t mcp2515_set_rxb1ctrl_reg(mcp2515_t const* mcp2515,
                                       mcp2515_rxb0ctrl_reg_t const* reg);

mcp2515_err_t mcp2515_get_bfpctrl_reg(mcp2515_t const* mcp2515,
                                      mcp2515_bfpctrl_reg_t* reg);
mcp2515_err_t mcp2515_set_bfpctrl_reg(mcp2515_t const* mcp2515,
                                      mcp2515_bfpctrl_reg_t const* reg);

mcp2515_err_t mcp2515_get_rxbid_reg(mcp2515_t const* mcp2515,
                                    mcp2515_rxb_num_t num,
                                    mcp2515_rxbid_reg_t* reg);
mcp2515_err_t mcp2515_set_rxbid_reg(mcp2515_t const* mcp2515,
                                    mcp2515_rxb_num_t num,
                                    mcp2515_rxbid_reg_t const* reg);

mcp2515_err_t mcp2515_get_rxbdlc_reg(mcp2515_t const* mcp2515,
                                     mcp2515_rxb_num_t num,
                                     mcp2515_rxbdlc_reg_t* reg);
mcp2515_err_t mcp2515_set_rxbdlc_reg(mcp2515_t const* mcp2515,
                                     mcp2515_rxb_num_t num,
                                     mcp2515_rxbdlc_reg_t const* reg);

mcp2515_err_t mcp2515_get_rxbd_reg(mcp2515_t const* mcp2515,
                                   mcp2515_rxb_num_t num,
                                   mcp2515_rxbd_reg_t* reg);

mcp2515_err_t mcp2515_get_rxfid_reg(mcp2515_t const* mcp2515,
                                    mcp2515_rxf_num_t num,
                                    mcp2515_rxfid_reg_t* reg);
mcp2515_err_t mcp2515_set_rxfid_reg(mcp2515_t const* mcp2515,
                                    mcp2515_rxf_num_t num,
                                    mcp2515_rxfid_reg_t const* reg);

mcp2515_err_t mcp2515_get_rxmid_reg(mcp2515_t const* mcp2515,
                                    mcp2515_rxm_num_t num,
                                    mcp2515_rxmid_reg_t* reg);
mcp2515_err_t mcp2515_set_rxmid_reg(mcp2515_t const* mcp2515,
                                    mcp2515_rxm_num_t num,
                                    mcp2515_rxmid_reg_t const* reg);

mcp2515_err_t mcp2515_get_cnf1_reg(mcp2515_t const* mcp2515,
                                   mcp2515_cnf1_reg_t* reg);
mcp2515_err_t mcp2515_set_cnf1_reg(mcp2515_t const* mcp2515,
                                   mcp2515_cnf1_reg_t const* reg);

mcp2515_err_t mcp2515_get_cnf2_reg(mcp2515_t const* mcp2515,
                                   mcp2515_cnf2_reg_t* reg);
mcp2515_err_t mcp2515_set_cnf2_reg(mcp2515_t const* mcp2515,
                                   mcp2515_cnf2_reg_t const* reg);

mcp2515_err_t mcp2515_get_cnf3_reg(mcp2515_t const* mcp2515,
                                   mcp2515_cnf3_reg_t* reg);
mcp2515_err_t mcp2515_set_cnf3_reg(mcp2515_t const* mcp2515,
                                   mcp2515_cnf3_reg_t const* reg);

mcp2515_err_t mcp2515_get_tec_reg(mcp2515_t const* mcp2515,
                                  mcp2515_tec_reg_t* reg);

mcp2515_err_t mcp2515_get_rec_reg(mcp2515_t const* mcp2515,
                                  mcp2515_rec_reg_t* reg);

mcp2515_err_t mcp2515_get_eflg_reg(mcp2515_t const* mcp2515,
                                   mcp2515_eflg_reg_t* reg);
mcp2515_err_t mcp2515_set_eflg_reg(mcp2515_t const* mcp2515,
                                   mcp2515_eflg_reg_t const* reg);

mcp2515_err_t mcp2515_get_caninte_reg(mcp2515_t const* mcp2515,
                                      mcp2515_caninte_reg_t* reg);
mcp2515_err_t mcp2515_set_caninte_reg(mcp2515_t const* mcp2515,
                                      mcp2515_caninte_reg_t const* reg);

mcp2515_err_t mcp2515_get_canintf_reg(mcp2515_t const* mcp2515,
                                      mcp2515_canintf_reg_t* reg);
mcp2515_err_t mcp2515_set_canintf_reg(mcp2515_t const* mcp2515,
                                      mcp2515_canintf_reg_t const* reg);

mcp2515_err_t mcp2515_get_canctrl_reg(mcp2515_t const* mcp2515,
                                      mcp2515_canctrl_reg_t* reg);
mcp2515_err_t mcp2515_set_canctrl_reg(mcp2515_t const* mcp2515,
                                      mcp2515_canctrl_reg_t const* reg);

mcp2515_err_t mcp2515_get_canstat_reg(mcp2515_t const* mcp2515,
                                      mcp2515_canstat_reg_t* reg);

#ifdef __cplusplus
}
#endif

#endif // MCP2515_MCP2515_H