// GERADO AUTOMATICAMENTE por gen_builtins.py - nao edite a mao.
// Controles embutidos a partir do banco Flipper-IRDB.
#pragma once
#include "ir_core.h"

struct BBtn { const char* name; IrProto proto; uint8_t a0, a1, cmd;
              uint16_t freq; const uint16_t* raw; uint16_t rn; };
struct BRemote { const char* name; const BBtn* btn; uint16_t n; };
struct BBrand { const char* name; const BRemote* rem; uint8_t n; };
struct BCat { const char* name; const BBrand* brand; uint8_t n; };

static const BBtn b_0[] = {
  {"Power", PR_SAMSUNG32, 0x07, 0x00, 0x02, 0, nullptr, 0},
  {"Power", PR_SAMSUNG32, 0x07, 0x00, 0xE6, 0, nullptr, 0},
  {"Power_off_only", PR_SAMSUNG32, 0x07, 0x00, 0x98, 0, nullptr, 0},
  {"Smart_hub", PR_SAMSUNG32, 0x07, 0x00, 0x46, 0, nullptr, 0},
  {"Smart_hub", PR_SAMSUNG32, 0x07, 0x00, 0x76, 0, nullptr, 0},
  {"Smart_hub", PR_SAMSUNG32, 0x07, 0x00, 0x79, 0, nullptr, 0},
  {"Up", PR_SAMSUNG32, 0x07, 0x00, 0x60, 0, nullptr, 0},
  {"Down", PR_SAMSUNG32, 0x07, 0x00, 0x61, 0, nullptr, 0},
  {"Right", PR_SAMSUNG32, 0x07, 0x00, 0x62, 0, nullptr, 0},
  {"Left", PR_SAMSUNG32, 0x07, 0x00, 0x65, 0, nullptr, 0},
  {"Select", PR_SAMSUNG32, 0x07, 0x00, 0x68, 0, nullptr, 0},
  {"Play", PR_SAMSUNG32, 0x07, 0x00, 0x47, 0, nullptr, 0},
  {"Pause", PR_SAMSUNG32, 0x07, 0x00, 0x4A, 0, nullptr, 0},
  {"Play/pause", PR_SAMSUNG32, 0x07, 0x00, 0xB9, 0, nullptr, 0},
  {"Rewind", PR_SAMSUNG32, 0x07, 0x00, 0x45, 0, nullptr, 0},
  {"Fast_forward", PR_SAMSUNG32, 0x07, 0x00, 0x48, 0, nullptr, 0},
  {"Return", PR_SAMSUNG32, 0x07, 0x00, 0x58, 0, nullptr, 0},
  {"Ambient_mode", PR_SAMSUNG32, 0x07, 0x00, 0xF6, 0, nullptr, 0},
  {"Vol_up", PR_SAMSUNG32, 0x07, 0x00, 0x07, 0, nullptr, 0},
  {"Vol_dn", PR_SAMSUNG32, 0x07, 0x00, 0x0B, 0, nullptr, 0},
  {"Mute", PR_SAMSUNG32, 0x07, 0x00, 0x0F, 0, nullptr, 0},
  {"Ch_next", PR_SAMSUNG32, 0x07, 0x00, 0x12, 0, nullptr, 0},
  {"Ch_prev", PR_SAMSUNG32, 0x07, 0x00, 0x10, 0, nullptr, 0},
  {"Netflix", PR_SAMSUNG32, 0x07, 0x00, 0xF3, 0, nullptr, 0},
  {"Amazon", PR_SAMSUNG32, 0x07, 0x00, 0xF4, 0, nullptr, 0},
  {"Hulu", PR_SAMSUNG32, 0x07, 0x00, 0xBB, 0, nullptr, 0},
  {"Sound", PR_SAMSUNG32, 0x07, 0x00, 0x2B, 0, nullptr, 0},
  {"Pair_bluetooth", PR_SAMSUNG32, 0x07, 0x00, 0xD1, 0, nullptr, 0},
  {"Source", PR_SAMSUNG32, 0x07, 0x00, 0x01, 0, nullptr, 0},
  {"Source", PR_SAMSUNG32, 0x07, 0x00, 0x8B, 0, nullptr, 0},
  {"Accessibility_shor", PR_SAMSUNG32, 0x07, 0x00, 0x25, 0, nullptr, 0},
  {"Accessibility_shor", PR_SAMSUNG32, 0x07, 0x00, 0x27, 0, nullptr, 0},
  {"Accessibility_shor", PR_SAMSUNG32, 0x07, 0x00, 0x59, 0, nullptr, 0},
  {"Virtual_numarical_", PR_SAMSUNG32, 0x07, 0x00, 0x9C, 0, nullptr, 0},
  {"Virtual_numarical_", PR_SAMSUNG32, 0x07, 0x00, 0xD2, 0, nullptr, 0},
  {"Colored_buttons", PR_SAMSUNG32, 0x07, 0x00, 0xCE, 0, nullptr, 0},
  {"Bixby", PR_SAMSUNG32, 0x07, 0x00, 0x73, 0, nullptr, 0},
  {"Bixby", PR_SAMSUNG32, 0x07, 0x00, 0xA0, 0, nullptr, 0},
  {"Hdmi_1", PR_SAMSUNG32, 0x07, 0x00, 0xE9, 0, nullptr, 0},
  {"Hdmi_2", PR_SAMSUNG32, 0x07, 0x00, 0xBE, 0, nullptr, 0},
  {"Hdmi_3", PR_SAMSUNG32, 0x07, 0x00, 0xC2, 0, nullptr, 0},
  {"Hdmi_4", PR_SAMSUNG32, 0x07, 0x00, 0xC5, 0, nullptr, 0},
  {"Sleep", PR_SAMSUNG32, 0x07, 0x00, 0x03, 0, nullptr, 0},
  {"Picture", PR_SAMSUNG32, 0x07, 0x00, 0x1A, 0, nullptr, 0},
  {"Picture_mode", PR_SAMSUNG32, 0x07, 0x00, 0x28, 0, nullptr, 0},
  {"Fps_(rate/quality)", PR_SAMSUNG32, 0x07, 0x00, 0x1F, 0, nullptr, 0},
  {"Not_availible", PR_SAMSUNG32, 0x07, 0x00, 0x20, 0, nullptr, 0},
  {"Not_availible", PR_SAMSUNG32, 0x07, 0x00, 0x3B, 0, nullptr, 0},
  {"Not_availible", PR_SAMSUNG32, 0x07, 0x00, 0x3E, 0, nullptr, 0},
  {"Guide", PR_SAMSUNG32, 0x07, 0x00, 0x4F, 0, nullptr, 0},
  {"Internet_browser", PR_SAMSUNG32, 0x07, 0x00, 0x37, 0, nullptr, 0},
  {"Exit_application", PR_SAMSUNG32, 0x07, 0x00, 0x2D, 0, nullptr, 0},
  {"E-manual", PR_SAMSUNG32, 0x07, 0x00, 0x3F, 0, nullptr, 0},
  {"Unknown_applicatio", PR_SAMSUNG32, 0x07, 0x00, 0xBC, 0, nullptr, 0},
};
static const BBtn b_1[] = {
  {"TV_PWR", PR_SAMSUNG32, 0x07, 0x00, 0x02, 0, nullptr, 0},
  {"Enter", PR_SAMSUNG32, 0x07, 0x00, 0x68, 0, nullptr, 0},
  {"Smart_Menu", PR_SAMSUNG32, 0x07, 0x00, 0x79, 0, nullptr, 0},
  {"Right", PR_SAMSUNG32, 0x07, 0x00, 0x62, 0, nullptr, 0},
  {"Left", PR_SAMSUNG32, 0x07, 0x00, 0x65, 0, nullptr, 0},
  {"Up", PR_SAMSUNG32, 0x07, 0x00, 0x60, 0, nullptr, 0},
  {"Down", PR_SAMSUNG32, 0x07, 0x00, 0x61, 0, nullptr, 0},
  {"Source", PR_SAMSUNG32, 0x07, 0x00, 0x01, 0, nullptr, 0},
  {"STB_PWR", PR_SAMSUNG32, 0x07, 0x00, 0xE0, 0, nullptr, 0},
  {"STB_Guide", PR_SAMSUNG32, 0x07, 0x00, 0xB7, 0, nullptr, 0},
  {"STB_Menu", PR_SAMSUNG32, 0x07, 0x00, 0xF0, 0, nullptr, 0},
  {"1", PR_SAMSUNG32, 0x07, 0x00, 0x04, 0, nullptr, 0},
  {"2", PR_SAMSUNG32, 0x07, 0x00, 0x05, 0, nullptr, 0},
  {"3", PR_SAMSUNG32, 0x07, 0x00, 0x06, 0, nullptr, 0},
  {"4", PR_SAMSUNG32, 0x07, 0x00, 0x08, 0, nullptr, 0},
  {"5", PR_SAMSUNG32, 0x07, 0x00, 0x09, 0, nullptr, 0},
  {"6", PR_SAMSUNG32, 0x07, 0x00, 0x0A, 0, nullptr, 0},
  {"7", PR_SAMSUNG32, 0x07, 0x00, 0x0C, 0, nullptr, 0},
  {"8", PR_SAMSUNG32, 0x07, 0x00, 0x0D, 0, nullptr, 0},
  {"9", PR_SAMSUNG32, 0x07, 0x00, 0x0E, 0, nullptr, 0},
  {"0", PR_SAMSUNG32, 0x07, 0x00, 0x11, 0, nullptr, 0},
  {"Dash", PR_SAMSUNG32, 0x07, 0x00, 0x23, 0, nullptr, 0},
  {"Pre_CH", PR_SAMSUNG32, 0x07, 0x00, 0x13, 0, nullptr, 0},
  {"Mute", PR_SAMSUNG32, 0x07, 0x00, 0x0F, 0, nullptr, 0},
  {"CH_List", PR_SAMSUNG32, 0x07, 0x00, 0x6B, 0, nullptr, 0},
  {"VOL_UP", PR_SAMSUNG32, 0x07, 0x00, 0x07, 0, nullptr, 0},
  {"VOL_DWN", PR_SAMSUNG32, 0x07, 0x00, 0x0B, 0, nullptr, 0},
  {"CH_UP", PR_SAMSUNG32, 0x07, 0x00, 0x12, 0, nullptr, 0},
  {"CH_DWN", PR_SAMSUNG32, 0x07, 0x00, 0x10, 0, nullptr, 0},
  {"Menu", PR_SAMSUNG32, 0x07, 0x00, 0x1A, 0, nullptr, 0},
  {"Guide", PR_SAMSUNG32, 0x07, 0x00, 0x4F, 0, nullptr, 0},
  {"Tools", PR_SAMSUNG32, 0x07, 0x00, 0x4B, 0, nullptr, 0},
  {"Info", PR_SAMSUNG32, 0x07, 0x00, 0x1F, 0, nullptr, 0},
  {"Return", PR_SAMSUNG32, 0x07, 0x00, 0x58, 0, nullptr, 0},
  {"Exit", PR_SAMSUNG32, 0x07, 0x00, 0x2D, 0, nullptr, 0},
  {"A", PR_SAMSUNG32, 0x07, 0x00, 0x6C, 0, nullptr, 0},
  {"B", PR_SAMSUNG32, 0x07, 0x00, 0x14, 0, nullptr, 0},
  {"C", PR_SAMSUNG32, 0x07, 0x00, 0x15, 0, nullptr, 0},
  {"D", PR_SAMSUNG32, 0x07, 0x00, 0x16, 0, nullptr, 0},
  {"E_Manual", PR_SAMSUNG32, 0x07, 0x00, 0x3F, 0, nullptr, 0},
  {"Search", PR_SAMSUNG32, 0x07, 0x00, 0x73, 0, nullptr, 0},
  {"Keypad", PR_SAMSUNG32, 0x07, 0x00, 0xD2, 0, nullptr, 0},
  {"P_Size", PR_SAMSUNG32, 0x07, 0x00, 0x3E, 0, nullptr, 0},
  {"MTS", PR_SAMSUNG32, 0x07, 0x00, 0x00, 0, nullptr, 0},
  {"CC", PR_SAMSUNG32, 0x07, 0x00, 0x25, 0, nullptr, 0},
  {"Rewind", PR_SAMSUNG32, 0x07, 0x00, 0x45, 0, nullptr, 0},
  {"Pause", PR_SAMSUNG32, 0x07, 0x00, 0x4A, 0, nullptr, 0},
  {"Fast_Forward", PR_SAMSUNG32, 0x07, 0x00, 0x48, 0, nullptr, 0},
  {"REC", PR_SAMSUNG32, 0x07, 0x00, 0x49, 0, nullptr, 0},
  {"Play", PR_SAMSUNG32, 0x07, 0x00, 0x47, 0, nullptr, 0},
  {"Stop", PR_SAMSUNG32, 0x07, 0x00, 0x46, 0, nullptr, 0},
};
static const BBtn b_2[] = {
  {"Power", PR_SAMSUNG32, 0x07, 0x00, 0x02, 0, nullptr, 0},
  {"Source", PR_SAMSUNG32, 0x07, 0x00, 0x01, 0, nullptr, 0},
  {"Sports", PR_SAMSUNG32, 0x07, 0x00, 0xB8, 0, nullptr, 0},
  {"1", PR_SAMSUNG32, 0x07, 0x00, 0x04, 0, nullptr, 0},
  {"2", PR_SAMSUNG32, 0x07, 0x00, 0x05, 0, nullptr, 0},
  {"3", PR_SAMSUNG32, 0x07, 0x00, 0x06, 0, nullptr, 0},
  {"4", PR_SAMSUNG32, 0x07, 0x00, 0x08, 0, nullptr, 0},
  {"5", PR_SAMSUNG32, 0x07, 0x00, 0x09, 0, nullptr, 0},
  {"6", PR_SAMSUNG32, 0x07, 0x00, 0x0A, 0, nullptr, 0},
  {"7", PR_SAMSUNG32, 0x07, 0x00, 0x0C, 0, nullptr, 0},
  {"8", PR_SAMSUNG32, 0x07, 0x00, 0x0D, 0, nullptr, 0},
  {"9", PR_SAMSUNG32, 0x07, 0x00, 0x0E, 0, nullptr, 0},
  {"-", PR_SAMSUNG32, 0x07, 0x00, 0x23, 0, nullptr, 0},
  {"0", PR_SAMSUNG32, 0x07, 0x00, 0x11, 0, nullptr, 0},
  {"Pre-Ch", PR_SAMSUNG32, 0x07, 0x00, 0x13, 0, nullptr, 0},
  {"Vol_up", PR_SAMSUNG32, 0x07, 0x00, 0x07, 0, nullptr, 0},
  {"Mute", PR_SAMSUNG32, 0x07, 0x00, 0x0F, 0, nullptr, 0},
  {"Ch_next", PR_SAMSUNG32, 0x07, 0x00, 0x12, 0, nullptr, 0},
  {"Vol_dn", PR_SAMSUNG32, 0x07, 0x00, 0x0B, 0, nullptr, 0},
  {"Channel List", PR_SAMSUNG32, 0x07, 0x00, 0x6B, 0, nullptr, 0},
  {"Ch_prev", PR_SAMSUNG32, 0x07, 0x00, 0x10, 0, nullptr, 0},
  {"Menu", PR_SAMSUNG32, 0x07, 0x00, 0x1A, 0, nullptr, 0},
  {"Smart Hub", PR_SAMSUNG32, 0x07, 0x00, 0x79, 0, nullptr, 0},
  {"Guide", PR_SAMSUNG32, 0x07, 0x00, 0x4F, 0, nullptr, 0},
  {"Tools", PR_SAMSUNG32, 0x07, 0x00, 0x4B, 0, nullptr, 0},
  {"Up", PR_SAMSUNG32, 0x07, 0x00, 0x60, 0, nullptr, 0},
  {"Info", PR_SAMSUNG32, 0x07, 0x00, 0x1F, 0, nullptr, 0},
  {"Left", PR_SAMSUNG32, 0x07, 0x00, 0x65, 0, nullptr, 0},
  {"Ok", PR_SAMSUNG32, 0x07, 0x00, 0x68, 0, nullptr, 0},
  {"Right", PR_SAMSUNG32, 0x07, 0x00, 0x62, 0, nullptr, 0},
  {"Return", PR_SAMSUNG32, 0x07, 0x00, 0x58, 0, nullptr, 0},
  {"Down", PR_SAMSUNG32, 0x07, 0x00, 0x61, 0, nullptr, 0},
  {"Exit", PR_SAMSUNG32, 0x07, 0x00, 0x2D, 0, nullptr, 0},
  {"A", PR_SAMSUNG32, 0x07, 0x00, 0x6C, 0, nullptr, 0},
  {"B", PR_SAMSUNG32, 0x07, 0x00, 0x14, 0, nullptr, 0},
  {"C", PR_SAMSUNG32, 0x07, 0x00, 0x15, 0, nullptr, 0},
  {"D", PR_SAMSUNG32, 0x07, 0x00, 0x16, 0, nullptr, 0},
  {"E-Manual", PR_SAMSUNG32, 0x07, 0x00, 0x3F, 0, nullptr, 0},
  {"Extra", PR_SAMSUNG32, 0x07, 0x00, 0xAF, 0, nullptr, 0},
  {"Search", PR_SAMSUNG32, 0x07, 0x00, 0x73, 0, nullptr, 0},
  {"Pic Size", PR_SAMSUNG32, 0x07, 0x00, 0x3E, 0, nullptr, 0},
  {"MTS", PR_SAMSUNG32, 0x07, 0x00, 0x00, 0, nullptr, 0},
  {"CC", PR_SAMSUNG32, 0x07, 0x00, 0x25, 0, nullptr, 0},
  {"Rewind", PR_SAMSUNG32, 0x07, 0x00, 0x45, 0, nullptr, 0},
  {"Pause", PR_SAMSUNG32, 0x07, 0x00, 0x4A, 0, nullptr, 0},
  {"Fast Forward", PR_SAMSUNG32, 0x07, 0x00, 0x48, 0, nullptr, 0},
  {"Record", PR_SAMSUNG32, 0x07, 0x00, 0x49, 0, nullptr, 0},
  {"Play", PR_SAMSUNG32, 0x07, 0x00, 0x47, 0, nullptr, 0},
  {"Stop", PR_SAMSUNG32, 0x07, 0x00, 0x46, 0, nullptr, 0},
};
static const BBtn b_3[] = {
  {"Power", PR_SAMSUNG32, 0x07, 0x00, 0x02, 0, nullptr, 0},
  {"Ch_next", PR_SAMSUNG32, 0x07, 0x00, 0x12, 0, nullptr, 0},
  {"Ch_prev", PR_SAMSUNG32, 0x07, 0x00, 0x10, 0, nullptr, 0},
  {"Vol_up", PR_SAMSUNG32, 0x07, 0x00, 0x07, 0, nullptr, 0},
  {"Vol_dn", PR_SAMSUNG32, 0x07, 0x00, 0x0B, 0, nullptr, 0},
  {"Source", PR_SAMSUNG32, 0x07, 0x00, 0x01, 0, nullptr, 0},
  {"Sports", PR_SAMSUNG32, 0x07, 0x00, 0xB8, 0, nullptr, 0},
  {"0", PR_SAMSUNG32, 0x07, 0x00, 0x11, 0, nullptr, 0},
  {"1", PR_SAMSUNG32, 0x07, 0x00, 0x04, 0, nullptr, 0},
  {"2", PR_SAMSUNG32, 0x07, 0x00, 0x05, 0, nullptr, 0},
  {"3", PR_SAMSUNG32, 0x07, 0x00, 0x06, 0, nullptr, 0},
  {"4", PR_SAMSUNG32, 0x07, 0x00, 0x08, 0, nullptr, 0},
  {"5", PR_SAMSUNG32, 0x07, 0x00, 0x09, 0, nullptr, 0},
  {"6", PR_SAMSUNG32, 0x07, 0x00, 0x0A, 0, nullptr, 0},
  {"7", PR_SAMSUNG32, 0x07, 0x00, 0x0C, 0, nullptr, 0},
  {"8", PR_SAMSUNG32, 0x07, 0x00, 0x0D, 0, nullptr, 0},
  {"9", PR_SAMSUNG32, 0x07, 0x00, 0x0E, 0, nullptr, 0},
  {"Ttx_mix", PR_SAMSUNG32, 0x07, 0x00, 0x2C, 0, nullptr, 0},
  {"Pre_ch", PR_SAMSUNG32, 0x07, 0x00, 0x13, 0, nullptr, 0},
  {"Mute", PR_SAMSUNG32, 0x07, 0x00, 0x0F, 0, nullptr, 0},
  {"Ch_list", PR_SAMSUNG32, 0x07, 0x00, 0x6B, 0, nullptr, 0},
  {"Menu", PR_SAMSUNG32, 0x07, 0x00, 0x1A, 0, nullptr, 0},
  {"Smart_hub", PR_SAMSUNG32, 0x07, 0x00, 0x79, 0, nullptr, 0},
  {"Guide", PR_SAMSUNG32, 0x07, 0x00, 0x4F, 0, nullptr, 0},
  {"Tools", PR_SAMSUNG32, 0x07, 0x00, 0x4B, 0, nullptr, 0},
  {"Info", PR_SAMSUNG32, 0x07, 0x00, 0x1F, 0, nullptr, 0},
  {"Return", PR_SAMSUNG32, 0x07, 0x00, 0x58, 0, nullptr, 0},
  {"Exit", PR_SAMSUNG32, 0x07, 0x00, 0x2D, 0, nullptr, 0},
  {"Up", PR_SAMSUNG32, 0x07, 0x00, 0x60, 0, nullptr, 0},
  {"Down", PR_SAMSUNG32, 0x07, 0x00, 0x61, 0, nullptr, 0},
  {"Left", PR_SAMSUNG32, 0x07, 0x00, 0x65, 0, nullptr, 0},
  {"Right", PR_SAMSUNG32, 0x07, 0x00, 0x62, 0, nullptr, 0},
  {"Ok", PR_SAMSUNG32, 0x07, 0x00, 0x68, 0, nullptr, 0},
  {"A", PR_SAMSUNG32, 0x07, 0x00, 0x6C, 0, nullptr, 0},
  {"B", PR_SAMSUNG32, 0x07, 0x00, 0x14, 0, nullptr, 0},
  {"C", PR_SAMSUNG32, 0x07, 0x00, 0x15, 0, nullptr, 0},
  {"D", PR_SAMSUNG32, 0x07, 0x00, 0x16, 0, nullptr, 0},
  {"E_manual", PR_SAMSUNG32, 0x07, 0x00, 0x3F, 0, nullptr, 0},
  {"Extra", PR_SAMSUNG32, 0x07, 0x00, 0xAF, 0, nullptr, 0},
  {"Ad_subt", PR_SAMSUNG32, 0x07, 0x00, 0x25, 0, nullptr, 0},
  {"P_mode", PR_SAMSUNG32, 0x07, 0x00, 0x28, 0, nullptr, 0},
  {"P_size", PR_SAMSUNG32, 0x07, 0x00, 0x3E, 0, nullptr, 0},
  {"Search", PR_SAMSUNG32, 0x07, 0x00, 0x73, 0, nullptr, 0},
  {"Bw", PR_SAMSUNG32, 0x07, 0x00, 0x45, 0, nullptr, 0},
  {"Fw", PR_SAMSUNG32, 0x07, 0x00, 0x48, 0, nullptr, 0},
  {"Pause", PR_SAMSUNG32, 0x07, 0x00, 0x4A, 0, nullptr, 0},
  {"Play", PR_SAMSUNG32, 0x07, 0x00, 0x47, 0, nullptr, 0},
  {"Stop", PR_SAMSUNG32, 0x07, 0x00, 0x46, 0, nullptr, 0},
  {"Rec", PR_SAMSUNG32, 0x07, 0x00, 0x49, 0, nullptr, 0},
};
static const BBtn b_4[] = {
  {"Power", PR_SAMSUNG32, 0x07, 0x00, 0x02, 0, nullptr, 0},
  {"Source", PR_SAMSUNG32, 0x07, 0x00, 0x01, 0, nullptr, 0},
  {"Vol_dn", PR_SAMSUNG32, 0x07, 0x00, 0x0B, 0, nullptr, 0},
  {"Vol_up", PR_SAMSUNG32, 0x07, 0x00, 0x07, 0, nullptr, 0},
  {"P_min", PR_SAMSUNG32, 0x07, 0x00, 0x10, 0, nullptr, 0},
  {"P_max", PR_SAMSUNG32, 0x07, 0x00, 0x12, 0, nullptr, 0},
  {"Num_1", PR_SAMSUNG32, 0x07, 0x00, 0x04, 0, nullptr, 0},
  {"Num_2", PR_SAMSUNG32, 0x07, 0x00, 0x05, 0, nullptr, 0},
  {"Num_3", PR_SAMSUNG32, 0x07, 0x00, 0x06, 0, nullptr, 0},
  {"Num_4", PR_SAMSUNG32, 0x07, 0x00, 0x08, 0, nullptr, 0},
  {"Num_5", PR_SAMSUNG32, 0x07, 0x00, 0x09, 0, nullptr, 0},
  {"Num_6", PR_SAMSUNG32, 0x07, 0x00, 0x0A, 0, nullptr, 0},
  {"Num_7", PR_SAMSUNG32, 0x07, 0x00, 0x0C, 0, nullptr, 0},
  {"Num_8", PR_SAMSUNG32, 0x07, 0x00, 0x0D, 0, nullptr, 0},
  {"Num_9", PR_SAMSUNG32, 0x07, 0x00, 0x0E, 0, nullptr, 0},
  {"Num_0", PR_SAMSUNG32, 0x07, 0x00, 0x11, 0, nullptr, 0},
  {"Num_input", PR_SAMSUNG32, 0x07, 0x00, 0x23, 0, nullptr, 0},
  {"Pre_ch", PR_SAMSUNG32, 0x07, 0x00, 0x13, 0, nullptr, 0},
  {"Mute", PR_SAMSUNG32, 0x07, 0x00, 0x0F, 0, nullptr, 0},
  {"Menu", PR_SAMSUNG32, 0x07, 0x00, 0x1A, 0, nullptr, 0},
  {"Exit", PR_SAMSUNG32, 0x07, 0x00, 0x2D, 0, nullptr, 0},
  {"Enter_ok", PR_SAMSUNG32, 0x07, 0x00, 0x68, 0, nullptr, 0},
  {"Up", PR_SAMSUNG32, 0x07, 0x00, 0x60, 0, nullptr, 0},
  {"Down", PR_SAMSUNG32, 0x07, 0x00, 0x61, 0, nullptr, 0},
  {"Left", PR_SAMSUNG32, 0x07, 0x00, 0x65, 0, nullptr, 0},
  {"Right", PR_SAMSUNG32, 0x07, 0x00, 0x62, 0, nullptr, 0},
  {"Return", PR_SAMSUNG32, 0x07, 0x00, 0x58, 0, nullptr, 0},
  {"Info", PR_SAMSUNG32, 0x07, 0x00, 0x1F, 0, nullptr, 0},
  {"Anynet", PR_SAMSUNG32, 0x07, 0x00, 0x97, 0, nullptr, 0},
  {"Tv", PR_SAMSUNG32, 0x07, 0x00, 0x7D, 0, nullptr, 0},
  {"Dvd", PR_SAMSUNG32, 0x07, 0x00, 0x7E, 0, nullptr, 0},
  {"Cable", PR_SAMSUNG32, 0x07, 0x00, 0x7B, 0, nullptr, 0},
  {"Stb", PR_SAMSUNG32, 0x07, 0x00, 0x7F, 0, nullptr, 0},
  {"Vcr", PR_SAMSUNG32, 0x07, 0x00, 0x7A, 0, nullptr, 0},
  {"Tv_dtv", PR_SAMSUNG32, 0x07, 0x00, 0x43, 0, nullptr, 0},
  {"Ch_list", PR_SAMSUNG32, 0x07, 0x00, 0x6B, 0, nullptr, 0},
  {"D_menu", PR_SAMSUNG32, 0x07, 0x00, 0x8E, 0, nullptr, 0},
  {"Rec", PR_SAMSUNG32, 0x07, 0x00, 0x49, 0, nullptr, 0},
  {"Rew", PR_SAMSUNG32, 0x07, 0x00, 0x45, 0, nullptr, 0},
  {"Stop", PR_SAMSUNG32, 0x07, 0x00, 0x46, 0, nullptr, 0},
  {"Play_pause", PR_SAMSUNG32, 0x07, 0x00, 0x47, 0, nullptr, 0},
  {"Ff", PR_SAMSUNG32, 0x07, 0x00, 0x48, 0, nullptr, 0},
  {"Color_red", PR_SAMSUNG32, 0x07, 0x00, 0x6C, 0, nullptr, 0},
  {"Color_green", PR_SAMSUNG32, 0x07, 0x00, 0x14, 0, nullptr, 0},
  {"Color_yellow", PR_SAMSUNG32, 0x07, 0x00, 0x15, 0, nullptr, 0},
  {"Color_blue", PR_SAMSUNG32, 0x07, 0x00, 0x16, 0, nullptr, 0},
  {"Text_mix", PR_SAMSUNG32, 0x07, 0x00, 0x2C, 0, nullptr, 0},
  {"P_size", PR_SAMSUNG32, 0x07, 0x00, 0x3E, 0, nullptr, 0},
  {"P_mode", PR_SAMSUNG32, 0x07, 0x00, 0x28, 0, nullptr, 0},
  {"Pip", PR_SAMSUNG32, 0x07, 0x00, 0x20, 0, nullptr, 0},
  {"Guide", PR_SAMSUNG32, 0x07, 0x00, 0x4F, 0, nullptr, 0},
  {"Dual_i_ii", PR_SAMSUNG32, 0x07, 0x00, 0x00, 0, nullptr, 0},
  {"Still", PR_SAMSUNG32, 0x07, 0x00, 0x42, 0, nullptr, 0},
  {"Subtitle", PR_SAMSUNG32, 0x07, 0x00, 0x25, 0, nullptr, 0},
};
static const BRemote rem_5[] = {
  {"Samsung (universal)", b_0, 54},
  {"BN59-01179A", b_1, 51},
  {"UN60JU6500", b_2, 49},
  {"UE48JU6490U", b_3, 49},
  {"LE40R87BD", b_4, 54},
};
static const BBtn b_6[] = {
  {"Power", PR_NEC, 0x04, 0x00, 0x08, 0, nullptr, 0},
  {"Energy_saving", PR_NEC, 0x04, 0x00, 0x95, 0, nullptr, 0},
  {"Av_mode", PR_NEC, 0x04, 0x00, 0x30, 0, nullptr, 0},
  {"Input", PR_NEC, 0x04, 0x00, 0x0B, 0, nullptr, 0},
  {"Tv/rad", PR_NEC, 0x04, 0x00, 0xF0, 0, nullptr, 0},
  {"1", PR_NEC, 0x04, 0x00, 0x11, 0, nullptr, 0},
  {"2", PR_NEC, 0x04, 0x00, 0x12, 0, nullptr, 0},
  {"3", PR_NEC, 0x04, 0x00, 0x13, 0, nullptr, 0},
  {"4", PR_NEC, 0x04, 0x00, 0x14, 0, nullptr, 0},
  {"5", PR_NEC, 0x04, 0x00, 0x15, 0, nullptr, 0},
  {"6", PR_NEC, 0x04, 0x00, 0x16, 0, nullptr, 0},
  {"7", PR_NEC, 0x04, 0x00, 0x17, 0, nullptr, 0},
  {"8", PR_NEC, 0x04, 0x00, 0x18, 0, nullptr, 0},
  {"9", PR_NEC, 0x04, 0x00, 0x19, 0, nullptr, 0},
  {"0", PR_NEC, 0x04, 0x00, 0x10, 0, nullptr, 0},
  {"List", PR_NEC, 0x04, 0x00, 0x53, 0, nullptr, 0},
  {"Q.view", PR_NEC, 0x04, 0x00, 0x1A, 0, nullptr, 0},
  {"Vol_up", PR_NEC, 0x04, 0x00, 0x02, 0, nullptr, 0},
  {"Vol_dn", PR_NEC, 0x04, 0x00, 0x03, 0, nullptr, 0},
  {"Ch_next", PR_NEC, 0x04, 0x00, 0x00, 0, nullptr, 0},
  {"Ch_prev", PR_NEC, 0x04, 0x00, 0x01, 0, nullptr, 0},
  {"Fav", PR_NEC, 0x04, 0x00, 0x1E, 0, nullptr, 0},
  {"3d", PR_NEC, 0x04, 0x00, 0xDC, 0, nullptr, 0},
  {"Mute", PR_NEC, 0x04, 0x00, 0x09, 0, nullptr, 0},
  {"Guide", PR_NEC, 0x04, 0x00, 0xAB, 0, nullptr, 0},
  {"Home", PR_NEC, 0x04, 0x00, 0x43, 0, nullptr, 0},
  {"Q.menu", PR_NEC, 0x04, 0x00, 0x45, 0, nullptr, 0},
  {"Up", PR_NEC, 0x04, 0x00, 0x40, 0, nullptr, 0},
  {"Down", PR_NEC, 0x04, 0x00, 0x41, 0, nullptr, 0},
  {"Left", PR_NEC, 0x04, 0x00, 0x07, 0, nullptr, 0},
  {"Right", PR_NEC, 0x04, 0x00, 0x06, 0, nullptr, 0},
  {"Back", PR_NEC, 0x04, 0x00, 0x28, 0, nullptr, 0},
  {"Info", PR_NEC, 0x04, 0x00, 0xAA, 0, nullptr, 0},
  {"Exit", PR_NEC, 0x04, 0x00, 0x5B, 0, nullptr, 0},
  {"Red", PR_NEC, 0x04, 0x00, 0x72, 0, nullptr, 0},
  {"Green", PR_NEC, 0x04, 0x00, 0x71, 0, nullptr, 0},
  {"Yellow", PR_NEC, 0x04, 0x00, 0x63, 0, nullptr, 0},
  {"Blue", PR_NEC, 0x04, 0x00, 0x61, 0, nullptr, 0},
  {"Text", PR_NEC, 0x04, 0x00, 0x20, 0, nullptr, 0},
  {"T.opt", PR_NEC, 0x04, 0x00, 0x21, 0, nullptr, 0},
  {"Subtitle", PR_NEC, 0x04, 0x00, 0x39, 0, nullptr, 0},
  {"Stop", PR_NEC, 0x04, 0x00, 0xB1, 0, nullptr, 0},
  {"Play", PR_NEC, 0x04, 0x00, 0xB0, 0, nullptr, 0},
  {"Pause", PR_NEC, 0x04, 0x00, 0xBA, 0, nullptr, 0},
  {"Backward", PR_NEC, 0x04, 0x00, 0x8F, 0, nullptr, 0},
  {"Forward", PR_NEC, 0x04, 0x00, 0x8E, 0, nullptr, 0},
  {"Simplink", PR_NEC, 0x04, 0x00, 0x7E, 0, nullptr, 0},
  {"Ratio", PR_NEC, 0x04, 0x00, 0x79, 0, nullptr, 0},
  {"Ad", PR_NEC, 0x04, 0x00, 0x91, 0, nullptr, 0},
};
static const BBtn b_7[] = {
  {"Power", PR_NEC, 0x04, 0x00, 0x08, 0, nullptr, 0},
  {"Tv", PR_NEC, 0x04, 0x00, 0x0F, 0, nullptr, 0},
  {"Cc", PR_NEC, 0x04, 0x00, 0x39, 0, nullptr, 0},
  {"Settings", PR_NEC, 0x04, 0x00, 0x43, 0, nullptr, 0},
  {"Search", PR_NEC, 0x04, 0x00, 0x43, 0, nullptr, 0},
  {"Input", PR_NEC, 0x04, 0x00, 0x0B, 0, nullptr, 0},
  {"1", PR_NEC, 0x04, 0x00, 0x11, 0, nullptr, 0},
  {"2", PR_NEC, 0x04, 0x00, 0x12, 0, nullptr, 0},
  {"3", PR_NEC, 0x04, 0x00, 0x13, 0, nullptr, 0},
  {"4", PR_NEC, 0x04, 0x00, 0x14, 0, nullptr, 0},
  {"5", PR_NEC, 0x04, 0x00, 0x15, 0, nullptr, 0},
  {"6", PR_NEC, 0x04, 0x00, 0x16, 0, nullptr, 0},
  {"7", PR_NEC, 0x04, 0x00, 0x17, 0, nullptr, 0},
  {"8", PR_NEC, 0x04, 0x00, 0x18, 0, nullptr, 0},
  {"9", PR_NEC, 0x04, 0x00, 0x19, 0, nullptr, 0},
  {"List", PR_NEC, 0x04, 0x00, 0x4C, 0, nullptr, 0},
  {"0", PR_NEC, 0x04, 0x00, 0x10, 0, nullptr, 0},
  {"Q.view", PR_NEC, 0x04, 0x00, 0x1A, 0, nullptr, 0},
  {"Vol_up", PR_NEC, 0x04, 0x00, 0x02, 0, nullptr, 0},
  {"Vol_dn", PR_NEC, 0x04, 0x00, 0x03, 0, nullptr, 0},
  {"Ch_next", PR_NEC, 0x04, 0x00, 0x00, 0, nullptr, 0},
  {"Ch_prev", PR_NEC, 0x04, 0x00, 0x01, 0, nullptr, 0},
  {"Fav", PR_NEC, 0x04, 0x00, 0x1E, 0, nullptr, 0},
  {"Info", PR_NEC, 0x04, 0x00, 0xAA, 0, nullptr, 0},
  {"Mute", PR_NEC, 0x04, 0x00, 0x09, 0, nullptr, 0},
  {"Netflix", PR_NEC, 0x04, 0x00, 0x56, 0, nullptr, 0},
  {"Home", PR_NEC, 0x04, 0x00, 0x7C, 0, nullptr, 0},
  {"Amazon", PR_NEC, 0x04, 0x00, 0x5C, 0, nullptr, 0},
  {"Guide", PR_NEC, 0x04, 0x00, 0xAB, 0, nullptr, 0},
  {"Live_zoom", PR_NEC, 0x04, 0x00, 0xAF, 0, nullptr, 0},
  {"Up", PR_NEC, 0x04, 0x00, 0x40, 0, nullptr, 0},
  {"Left", PR_NEC, 0x04, 0x00, 0x07, 0, nullptr, 0},
  {"Ok", PR_NEC, 0x04, 0x00, 0x44, 0, nullptr, 0},
  {"Right", PR_NEC, 0x04, 0x00, 0x06, 0, nullptr, 0},
  {"Down", PR_NEC, 0x04, 0x00, 0x41, 0, nullptr, 0},
  {"Back", PR_NEC, 0x04, 0x00, 0x28, 0, nullptr, 0},
  {"Exit", PR_NEC, 0x04, 0x00, 0x5B, 0, nullptr, 0},
  {"Sap/*", PR_NEC, 0x04, 0x00, 0x91, 0, nullptr, 0},
  {"Rec/*", PR_NEC, 0x04, 0x00, 0xBD, 0, nullptr, 0},
  {"Stop", PR_NEC, 0x04, 0x00, 0xB1, 0, nullptr, 0},
  {"<<_rwd", PR_NEC, 0x04, 0x00, 0x8F, 0, nullptr, 0},
  {"Play", PR_NEC, 0x04, 0x00, 0xB0, 0, nullptr, 0},
  {"Pause", PR_NEC, 0x04, 0x00, 0xBA, 0, nullptr, 0},
  {">>_ff", PR_NEC, 0x04, 0x00, 0x8E, 0, nullptr, 0},
  {"Red", PR_NEC, 0x04, 0x00, 0x72, 0, nullptr, 0},
  {"Green", PR_NEC, 0x04, 0x00, 0x71, 0, nullptr, 0},
  {"Yellow", PR_NEC, 0x04, 0x00, 0x63, 0, nullptr, 0},
  {"Blue", PR_NEC, 0x04, 0x00, 0x61, 0, nullptr, 0},
};
static const BBtn b_8[] = {
  {"Power", PR_NEC, 0x04, 0x00, 0x08, 0, nullptr, 0},
  {"Search", PR_NEC, 0x04, 0x00, 0x78, 0, nullptr, 0},
  {"Subtitle", PR_NEC, 0x04, 0x00, 0x39, 0, nullptr, 0},
  {"Settings", PR_NEC, 0x04, 0x00, 0x43, 0, nullptr, 0},
  {"Source", PR_NEC, 0x04, 0x00, 0x0B, 0, nullptr, 0},
  {"1", PR_NEC, 0x04, 0x00, 0x11, 0, nullptr, 0},
  {"2", PR_NEC, 0x04, 0x00, 0x12, 0, nullptr, 0},
  {"3", PR_NEC, 0x04, 0x00, 0x13, 0, nullptr, 0},
  {"4", PR_NEC, 0x04, 0x00, 0x14, 0, nullptr, 0},
  {"5", PR_NEC, 0x04, 0x00, 0x15, 0, nullptr, 0},
  {"6", PR_NEC, 0x04, 0x00, 0x16, 0, nullptr, 0},
  {"7", PR_NEC, 0x04, 0x00, 0x17, 0, nullptr, 0},
  {"8", PR_NEC, 0x04, 0x00, 0x18, 0, nullptr, 0},
  {"9", PR_NEC, 0x04, 0x00, 0x19, 0, nullptr, 0},
  {"0", PR_NEC, 0x04, 0x00, 0x10, 0, nullptr, 0},
  {"List", PR_NEC, 0x04, 0x00, 0x53, 0, nullptr, 0},
  {"3points", PR_NEC, 0x04, 0x00, 0x96, 0, nullptr, 0},
  {"Vol_up", PR_NEC, 0x04, 0x00, 0x02, 0, nullptr, 0},
  {"Vol_dn", PR_NEC, 0x04, 0x00, 0x03, 0, nullptr, 0},
  {"Ch_next", PR_NEC, 0x04, 0x00, 0x00, 0, nullptr, 0},
  {"Ch_prev", PR_NEC, 0x04, 0x00, 0x01, 0, nullptr, 0},
  {"Ad", PR_NEC, 0x04, 0x00, 0x91, 0, nullptr, 0},
  {"Guide", PR_NEC, 0x04, 0x00, 0xAB, 0, nullptr, 0},
  {"Mute", PR_NEC, 0x04, 0x00, 0x09, 0, nullptr, 0},
  {"Home", PR_NEC, 0x04, 0x00, 0x7C, 0, nullptr, 0},
  {"Netflix", PR_NEC, 0x04, 0x00, 0x56, 0, nullptr, 0},
  {"Prime", PR_NEC, 0x04, 0x00, 0x5C, 0, nullptr, 0},
  {"Back", PR_NEC, 0x04, 0x00, 0x28, 0, nullptr, 0},
  {"Exit", PR_NEC, 0x04, 0x00, 0x5B, 0, nullptr, 0},
  {"Teletext", PR_NEC, 0x04, 0x00, 0x20, 0, nullptr, 0},
  {"T_opt", PR_NEC, 0x04, 0x00, 0x21, 0, nullptr, 0},
  {"Up", PR_NEC, 0x04, 0x00, 0x40, 0, nullptr, 0},
  {"Dn", PR_NEC, 0x04, 0x00, 0x41, 0, nullptr, 0},
  {"Left", PR_NEC, 0x04, 0x00, 0x07, 0, nullptr, 0},
  {"Right", PR_NEC, 0x04, 0x00, 0x06, 0, nullptr, 0},
  {"Ok", PR_NEC, 0x04, 0x00, 0x44, 0, nullptr, 0},
  {"Movies", PR_NEC, 0x04, 0x00, 0x81, 0, nullptr, 0},
  {"Rec", PR_NEC, 0x04, 0x00, 0xBD, 0, nullptr, 0},
  {"Stop", PR_NEC, 0x04, 0x00, 0xB1, 0, nullptr, 0},
  {"Rwd", PR_NEC, 0x04, 0x00, 0x8F, 0, nullptr, 0},
  {"Play", PR_NEC, 0x04, 0x00, 0xB0, 0, nullptr, 0},
  {"Pause", PR_NEC, 0x04, 0x00, 0xBA, 0, nullptr, 0},
  {"Ffd", PR_NEC, 0x04, 0x00, 0x8E, 0, nullptr, 0},
  {"Red_1", PR_NEC, 0x04, 0x00, 0x72, 0, nullptr, 0},
  {"Green_2", PR_NEC, 0x04, 0x00, 0x71, 0, nullptr, 0},
  {"Yellow_3", PR_NEC, 0x04, 0x00, 0x63, 0, nullptr, 0},
  {"Blue_4", PR_NEC, 0x04, 0x00, 0x61, 0, nullptr, 0},
  {"Tv_radio", PR_NEC, 0x04, 0x00, 0xF0, 0, nullptr, 0},
};
static const BBtn b_9[] = {
  {"Power", PR_NEC, 0x04, 0x00, 0x08, 0, nullptr, 0},
  {"Input", PR_NEC, 0x04, 0x00, 0x0B, 0, nullptr, 0},
  {"Q.menu", PR_NEC, 0x04, 0x00, 0x43, 0, nullptr, 0},
  {"Info", PR_NEC, 0x04, 0x00, 0xAA, 0, nullptr, 0},
  {"Help", PR_NEC, 0x04, 0x00, 0x7A, 0, nullptr, 0},
  {"1", PR_NEC, 0x04, 0x00, 0x11, 0, nullptr, 0},
  {"2", PR_NEC, 0x04, 0x00, 0x12, 0, nullptr, 0},
  {"3", PR_NEC, 0x04, 0x00, 0x13, 0, nullptr, 0},
  {"4", PR_NEC, 0x04, 0x00, 0x14, 0, nullptr, 0},
  {"5", PR_NEC, 0x04, 0x00, 0x15, 0, nullptr, 0},
  {"6", PR_NEC, 0x04, 0x00, 0x16, 0, nullptr, 0},
  {"7", PR_NEC, 0x04, 0x00, 0x17, 0, nullptr, 0},
  {"8", PR_NEC, 0x04, 0x00, 0x18, 0, nullptr, 0},
  {"9", PR_NEC, 0x04, 0x00, 0x19, 0, nullptr, 0},
  {"0", PR_NEC, 0x04, 0x00, 0x10, 0, nullptr, 0},
  {"Guide", PR_NEC, 0x04, 0x00, 0xAB, 0, nullptr, 0},
  {"Q.view", PR_NEC, 0x04, 0x00, 0x1A, 0, nullptr, 0},
  {"Fav", PR_NEC, 0x04, 0x00, 0x1E, 0, nullptr, 0},
  {"3d", PR_NEC, 0x04, 0x00, 0xDC, 0, nullptr, 0},
  {"Mute", PR_NEC, 0x04, 0x00, 0x09, 0, nullptr, 0},
  {"Vol_up", PR_NEC, 0x04, 0x00, 0x02, 0, nullptr, 0},
  {"Vol_dn", PR_NEC, 0x04, 0x00, 0x03, 0, nullptr, 0},
  {"Ch_next", PR_NEC, 0x04, 0x00, 0x00, 0, nullptr, 0},
  {"Ch_prev", PR_NEC, 0x04, 0x00, 0x01, 0, nullptr, 0},
  {"Recent", PR_NEC, 0x04, 0x00, 0xB5, 0, nullptr, 0},
  {"Home", PR_NEC, 0x04, 0x00, 0x7C, 0, nullptr, 0},
  {"My_apps", PR_NEC, 0x04, 0x00, 0x42, 0, nullptr, 0},
  {"Up", PR_NEC, 0x04, 0x00, 0x40, 0, nullptr, 0},
  {"Down", PR_NEC, 0x04, 0x00, 0x41, 0, nullptr, 0},
  {"Left", PR_NEC, 0x04, 0x00, 0x07, 0, nullptr, 0},
  {"Right", PR_NEC, 0x04, 0x00, 0x06, 0, nullptr, 0},
  {"Ok", PR_NEC, 0x04, 0x00, 0x44, 0, nullptr, 0},
  {"Back", PR_NEC, 0x04, 0x00, 0x28, 0, nullptr, 0},
  {"Live_menu", PR_NEC, 0x04, 0x00, 0x9E, 0, nullptr, 0},
  {"Exit", PR_NEC, 0x04, 0x00, 0x5B, 0, nullptr, 0},
  {"Red", PR_NEC, 0x04, 0x00, 0x72, 0, nullptr, 0},
  {"Green", PR_NEC, 0x04, 0x00, 0x71, 0, nullptr, 0},
  {"Yellow", PR_NEC, 0x04, 0x00, 0x63, 0, nullptr, 0},
  {"Blue", PR_NEC, 0x04, 0x00, 0x61, 0, nullptr, 0},
  {"Text", PR_NEC, 0x04, 0x00, 0x20, 0, nullptr, 0},
  {"T.opt", PR_NEC, 0x04, 0x00, 0x21, 0, nullptr, 0},
  {"App/*", PR_NEC, 0x04, 0x00, 0x9F, 0, nullptr, 0},
  {"Stop", PR_NEC, 0x04, 0x00, 0xB1, 0, nullptr, 0},
  {"Play", PR_NEC, 0x04, 0x00, 0xB0, 0, nullptr, 0},
  {"Pause", PR_NEC, 0x04, 0x00, 0xBA, 0, nullptr, 0},
  {"Rewind", PR_NEC, 0x04, 0x00, 0x8F, 0, nullptr, 0},
  {"Forward", PR_NEC, 0x04, 0x00, 0x8E, 0, nullptr, 0},
  {"Rec/*", PR_NEC, 0x04, 0x00, 0xBD, 0, nullptr, 0},
  {"Subtitle", PR_NEC, 0x04, 0x00, 0x39, 0, nullptr, 0},
  {"Ad", PR_NEC, 0x04, 0x00, 0x91, 0, nullptr, 0},
  {"Tv/rad", PR_NEC, 0x04, 0x00, 0xF0, 0, nullptr, 0},
};
static const BBtn b_10[] = {
  {"Power", PR_NEC, 0x04, 0x00, 0x08, 0, nullptr, 0},
  {"Energy_saving", PR_NEC, 0x04, 0x00, 0x95, 0, nullptr, 0},
  {"Av_mode", PR_NEC, 0x04, 0x00, 0x30, 0, nullptr, 0},
  {"Input", PR_NEC, 0x04, 0x00, 0x0B, 0, nullptr, 0},
  {"Tv", PR_NEC, 0x04, 0x00, 0xF0, 0, nullptr, 0},
  {"1", PR_NEC, 0x04, 0x00, 0x11, 0, nullptr, 0},
  {"2", PR_NEC, 0x04, 0x00, 0x12, 0, nullptr, 0},
  {"3", PR_NEC, 0x04, 0x00, 0x13, 0, nullptr, 0},
  {"4", PR_NEC, 0x04, 0x00, 0x14, 0, nullptr, 0},
  {"5", PR_NEC, 0x04, 0x00, 0x15, 0, nullptr, 0},
  {"6", PR_NEC, 0x04, 0x00, 0x16, 0, nullptr, 0},
  {"7", PR_NEC, 0x04, 0x00, 0x17, 0, nullptr, 0},
  {"8", PR_NEC, 0x04, 0x00, 0x18, 0, nullptr, 0},
  {"9", PR_NEC, 0x04, 0x00, 0x19, 0, nullptr, 0},
  {"List", PR_NEC, 0x04, 0x00, 0x53, 0, nullptr, 0},
  {"0", PR_NEC, 0x04, 0x00, 0x10, 0, nullptr, 0},
  {"Q_view", PR_NEC, 0x04, 0x00, 0x1A, 0, nullptr, 0},
  {"Vol_up", PR_NEC, 0x04, 0x00, 0x02, 0, nullptr, 0},
  {"Vol_dn", PR_NEC, 0x04, 0x00, 0x03, 0, nullptr, 0},
  {"Fav", PR_NEC, 0x04, 0x00, 0x1E, 0, nullptr, 0},
  {"3D", PR_NEC, 0x04, 0x00, 0x1E, 0, nullptr, 0},
  {"Mute", PR_NEC, 0x04, 0x00, 0x09, 0, nullptr, 0},
  {"Ch_next", PR_NEC, 0x04, 0x00, 0x00, 0, nullptr, 0},
  {"Ch_prev", PR_NEC, 0x04, 0x00, 0x01, 0, nullptr, 0},
  {"Guide", PR_NEC, 0x04, 0x00, 0xAB, 0, nullptr, 0},
  {"Home", PR_NEC, 0x04, 0x00, 0x43, 0, nullptr, 0},
  {"Q_menu", PR_NEC, 0x04, 0x00, 0x45, 0, nullptr, 0},
  {"Up", PR_NEC, 0x04, 0x00, 0x40, 0, nullptr, 0},
  {"Ok", PR_NEC, 0x04, 0x00, 0x44, 0, nullptr, 0},
  {"Down", PR_NEC, 0x04, 0x00, 0x41, 0, nullptr, 0},
  {"Left", PR_NEC, 0x04, 0x00, 0x07, 0, nullptr, 0},
  {"Right", PR_NEC, 0x04, 0x00, 0x06, 0, nullptr, 0},
  {"Back", PR_NEC, 0x04, 0x00, 0x28, 0, nullptr, 0},
  {"Info", PR_NEC, 0x04, 0x00, 0xAA, 0, nullptr, 0},
  {"Exit", PR_NEC, 0x04, 0x00, 0x5B, 0, nullptr, 0},
  {"Red_button", PR_NEC, 0x04, 0x00, 0x72, 0, nullptr, 0},
  {"Green_button", PR_NEC, 0x04, 0x00, 0x71, 0, nullptr, 0},
  {"Yellow_button", PR_NEC, 0x04, 0x00, 0x63, 0, nullptr, 0},
  {"Blue_button", PR_NEC, 0x04, 0x00, 0x61, 0, nullptr, 0},
  {"Text", PR_NEC, 0x04, 0x00, 0x20, 0, nullptr, 0},
  {"T_opt", PR_NEC, 0x04, 0x00, 0x21, 0, nullptr, 0},
  {"Subtitle", PR_NEC, 0x04, 0x00, 0x39, 0, nullptr, 0},
  {"Stop", PR_NEC, 0x04, 0x00, 0xB1, 0, nullptr, 0},
  {"Play", PR_NEC, 0x04, 0x00, 0xB0, 0, nullptr, 0},
  {"Pause", PR_NEC, 0x04, 0x00, 0xBA, 0, nullptr, 0},
  {"Fast_ba", PR_NEC, 0x04, 0x00, 0x8F, 0, nullptr, 0},
  {"Fast_fo", PR_NEC, 0x04, 0x00, 0x8E, 0, nullptr, 0},
  {"Simplink", PR_NEC, 0x04, 0x00, 0x7E, 0, nullptr, 0},
  {"Ratio", PR_NEC, 0x04, 0x00, 0x79, 0, nullptr, 0},
  {"Ad", PR_NEC, 0x04, 0x00, 0x91, 0, nullptr, 0},
};
static const BRemote rem_11[] = {
  {"AKB72914048", b_6, 49},
  {"AKB75375604", b_7, 48},
  {"AKB75675311", b_8, 48},
  {"32LF650V", b_9, 51},
  {"32LW4500", b_10, 50},
};
static const BBtn b_12[] = {
  {"Power", PR_RC6, 0x00, 0x00, 0x0C, 0, nullptr, 0},
  {"Ambilight", PR_RC6, 0x00, 0x00, 0x8F, 0, nullptr, 0},
  {"Prime_video", PR_RC6, 0x00, 0x00, 0xBA, 0, nullptr, 0},
  {"Youtube", PR_RC6, 0x00, 0x00, 0x79, 0, nullptr, 0},
  {"Netflix", PR_RC6, 0x00, 0x00, 0x76, 0, nullptr, 0},
  {"Rakuter_tv", PR_RC6, 0x00, 0x00, 0x22, 0, nullptr, 0},
  {"Info", PR_RC6, 0x00, 0x00, 0x0F, 0, nullptr, 0},
  {"Search", PR_RC6, 0x00, 0x00, 0xB4, 0, nullptr, 0},
  {"Sources", PR_RC6, 0x00, 0x00, 0x38, 0, nullptr, 0},
  {"Ok", PR_RC6, 0x00, 0x00, 0x5C, 0, nullptr, 0},
  {"Up", PR_RC6, 0x00, 0x00, 0x58, 0, nullptr, 0},
  {"Down", PR_RC6, 0x00, 0x00, 0x59, 0, nullptr, 0},
  {"Left", PR_RC6, 0x00, 0x00, 0x5A, 0, nullptr, 0},
  {"Right", PR_RC6, 0x00, 0x00, 0x5B, 0, nullptr, 0},
  {"Back", PR_RC6, 0x00, 0x00, 0x0A, 0, nullptr, 0},
  {"Home", PR_RC6, 0x00, 0x00, 0x54, 0, nullptr, 0},
  {"Tv_guide", PR_RC6, 0x00, 0x00, 0xCC, 0, nullptr, 0},
  {"Rewind", PR_RC6, 0x00, 0x00, 0x2B, 0, nullptr, 0},
  {"Play", PR_RC6, 0x00, 0x00, 0x2C, 0, nullptr, 0},
  {"Fast_forward", PR_RC6, 0x00, 0x00, 0x28, 0, nullptr, 0},
  {"Stop", PR_RC6, 0x00, 0x00, 0x31, 0, nullptr, 0},
  {"Pause", PR_RC6, 0x00, 0x00, 0x30, 0, nullptr, 0},
  {"Record", PR_RC6, 0x00, 0x00, 0x37, 0, nullptr, 0},
  {"Red", PR_RC6, 0x00, 0x00, 0x6D, 0, nullptr, 0},
  {"Green", PR_RC6, 0x00, 0x00, 0x6E, 0, nullptr, 0},
  {"Yellow", PR_RC6, 0x00, 0x00, 0x6F, 0, nullptr, 0},
  {"Blue", PR_RC6, 0x00, 0x00, 0x70, 0, nullptr, 0},
  {"Exit", PR_RC6, 0x00, 0x00, 0x9F, 0, nullptr, 0},
  {"Vol_up", PR_RC6, 0x00, 0x00, 0x10, 0, nullptr, 0},
  {"Vol_dn", PR_RC6, 0x00, 0x00, 0x11, 0, nullptr, 0},
  {"Mute", PR_RC6, 0x00, 0x00, 0x0D, 0, nullptr, 0},
  {"Ch_next", PR_RC6, 0x00, 0x00, 0x20, 0, nullptr, 0},
  {"Ch_prev", PR_RC6, 0x00, 0x00, 0x21, 0, nullptr, 0},
  {"1", PR_RC6, 0x00, 0x00, 0x01, 0, nullptr, 0},
  {"2", PR_RC6, 0x00, 0x00, 0x02, 0, nullptr, 0},
  {"3", PR_RC6, 0x00, 0x00, 0x03, 0, nullptr, 0},
  {"4", PR_RC6, 0x00, 0x00, 0x04, 0, nullptr, 0},
  {"5", PR_RC6, 0x00, 0x00, 0x05, 0, nullptr, 0},
  {"6", PR_RC6, 0x00, 0x00, 0x06, 0, nullptr, 0},
  {"7", PR_RC6, 0x00, 0x00, 0x07, 0, nullptr, 0},
  {"8", PR_RC6, 0x00, 0x00, 0x08, 0, nullptr, 0},
  {"9", PR_RC6, 0x00, 0x00, 0x09, 0, nullptr, 0},
  {"0", PR_RC6, 0x00, 0x00, 0x00, 0, nullptr, 0},
  {"Menu", PR_RC6, 0x00, 0x00, 0xBF, 0, nullptr, 0},
  {"Text", PR_RC6, 0x00, 0x00, 0x3C, 0, nullptr, 0},
};
static const BBtn b_13[] = {
  {"Power", PR_RC6, 0x00, 0x00, 0x0C, 0, nullptr, 0},
  {"Mute", PR_RC6, 0x00, 0x00, 0x0D, 0, nullptr, 0},
  {"Vol_up", PR_RC6, 0x00, 0x00, 0x10, 0, nullptr, 0},
  {"Vol_dn", PR_RC6, 0x00, 0x00, 0x11, 0, nullptr, 0},
  {"Home", PR_RC6, 0x00, 0x00, 0x54, 0, nullptr, 0},
  {"Back", PR_RC6, 0x00, 0x00, 0x0A, 0, nullptr, 0},
  {"Settings", PR_RC6, 0x00, 0x00, 0xBF, 0, nullptr, 0},
  {"OK", PR_RC6, 0x00, 0x00, 0x5C, 0, nullptr, 0},
  {"Up", PR_RC6, 0x00, 0x00, 0x58, 0, nullptr, 0},
  {"Down", PR_RC6, 0x00, 0x00, 0x59, 0, nullptr, 0},
  {"Left", PR_RC6, 0x00, 0x00, 0x5A, 0, nullptr, 0},
  {"Right", PR_RC6, 0x00, 0x00, 0x5B, 0, nullptr, 0},
  {"Info", PR_RC6, 0x00, 0x00, 0x0F, 0, nullptr, 0},
  {"Options", PR_RC6, 0x00, 0x00, 0x40, 0, nullptr, 0},
  {"Format", PR_RC6, 0x00, 0x00, 0xF5, 0, nullptr, 0},
  {"Ch_next", PR_RC6, 0x00, 0x00, 0x20, 0, nullptr, 0},
  {"Ch_prev", PR_RC6, 0x00, 0x00, 0x21, 0, nullptr, 0},
  {"Netflix", PR_RC6, 0x00, 0x00, 0x76, 0, nullptr, 0},
  {"Subtitle", PR_RC6, 0x00, 0x00, 0x4B, 0, nullptr, 0},
  {"Text", PR_RC6, 0x00, 0x00, 0x3C, 0, nullptr, 0},
  {"TV(Exit)", PR_RC6, 0x00, 0x00, 0x9F, 0, nullptr, 0},
  {"Smart_TV", PR_RC6, 0x00, 0x00, 0xBE, 0, nullptr, 0},
  {"Stop", PR_RC6, 0x00, 0x00, 0x31, 0, nullptr, 0},
  {"Pause", PR_RC6, 0x00, 0x00, 0x30, 0, nullptr, 0},
  {"Record", PR_RC6, 0x00, 0x00, 0x37, 0, nullptr, 0},
  {"RW", PR_RC6, 0x00, 0x00, 0x2B, 0, nullptr, 0},
  {"Play", PR_RC6, 0x00, 0x00, 0x2C, 0, nullptr, 0},
  {"FF", PR_RC6, 0x00, 0x00, 0x28, 0, nullptr, 0},
  {"TV_guide", PR_RC6, 0x00, 0x00, 0xCC, 0, nullptr, 0},
  {"List", PR_RC6, 0x00, 0x00, 0xD2, 0, nullptr, 0},
  {"Source", PR_RC6, 0x00, 0x00, 0x38, 0, nullptr, 0},
  {"Red", PR_RC6, 0x00, 0x00, 0x6D, 0, nullptr, 0},
  {"Green", PR_RC6, 0x00, 0x00, 0x6E, 0, nullptr, 0},
  {"Yellow", PR_RC6, 0x00, 0x00, 0x6F, 0, nullptr, 0},
  {"Blue", PR_RC6, 0x00, 0x00, 0x70, 0, nullptr, 0},
  {"1", PR_RC6, 0x00, 0x00, 0x01, 0, nullptr, 0},
  {"2", PR_RC6, 0x00, 0x00, 0x02, 0, nullptr, 0},
  {"3", PR_RC6, 0x00, 0x00, 0x03, 0, nullptr, 0},
  {"4", PR_RC6, 0x00, 0x00, 0x04, 0, nullptr, 0},
  {"5", PR_RC6, 0x00, 0x00, 0x05, 0, nullptr, 0},
  {"6", PR_RC6, 0x00, 0x00, 0x06, 0, nullptr, 0},
  {"7", PR_RC6, 0x00, 0x00, 0x07, 0, nullptr, 0},
  {"8", PR_RC6, 0x00, 0x00, 0x08, 0, nullptr, 0},
  {"9", PR_RC6, 0x00, 0x00, 0x09, 0, nullptr, 0},
  {"0", PR_RC6, 0x00, 0x00, 0x00, 0, nullptr, 0},
};
static const BBtn b_14[] = {
  {"On_off", PR_RC6, 0x00, 0x00, 0x0C, 0, nullptr, 0},
  {"Ambilight", PR_RC6, 0x00, 0x00, 0x8F, 0, nullptr, 0},
  {"Prime_video", PR_RC6, 0x00, 0x00, 0xBA, 0, nullptr, 0},
  {"Philips_collection", PR_RC6, 0x00, 0x00, 0xBE, 0, nullptr, 0},
  {"Netflix", PR_RC6, 0x00, 0x00, 0x76, 0, nullptr, 0},
  {"Rakuten_tv", PR_RC6, 0x00, 0x00, 0x22, 0, nullptr, 0},
  {"Menu", PR_RC6, 0x00, 0x00, 0x57, 0, nullptr, 0},
  {"Sources", PR_RC6, 0x00, 0x00, 0x38, 0, nullptr, 0},
  {"Left", PR_RC6, 0x00, 0x00, 0x5A, 0, nullptr, 0},
  {"Right", PR_RC6, 0x00, 0x00, 0x5B, 0, nullptr, 0},
  {"Up", PR_RC6, 0x00, 0x00, 0x58, 0, nullptr, 0},
  {"Down", PR_RC6, 0x00, 0x00, 0x59, 0, nullptr, 0},
  {"Enter", PR_RC6, 0x00, 0x00, 0x5C, 0, nullptr, 0},
  {"Back", PR_RC6, 0x00, 0x00, 0x0A, 0, nullptr, 0},
  {"Home", PR_RC6, 0x00, 0x00, 0x54, 0, nullptr, 0},
  {"Tv_guide", PR_RC6, 0x00, 0x00, 0xCC, 0, nullptr, 0},
  {"Rewind", PR_RC6, 0x00, 0x00, 0x2B, 0, nullptr, 0},
  {"Play", PR_RC6, 0x00, 0x00, 0x2C, 0, nullptr, 0},
  {"Fast_forward", PR_RC6, 0x00, 0x00, 0x28, 0, nullptr, 0},
  {"Stop", PR_RC6, 0x00, 0x00, 0x31, 0, nullptr, 0},
  {"Pause", PR_RC6, 0x00, 0x00, 0x30, 0, nullptr, 0},
  {"Record", PR_RC6, 0x00, 0x00, 0x37, 0, nullptr, 0},
  {"Red", PR_RC6, 0x00, 0x00, 0x6D, 0, nullptr, 0},
  {"Green", PR_RC6, 0x00, 0x00, 0x6E, 0, nullptr, 0},
  {"Yellow", PR_RC6, 0x00, 0x00, 0x6F, 0, nullptr, 0},
  {"Blue", PR_RC6, 0x00, 0x00, 0x70, 0, nullptr, 0},
  {"Vol_up", PR_RC6, 0x00, 0x00, 0x10, 0, nullptr, 0},
  {"Vol_dn", PR_RC6, 0x00, 0x00, 0x11, 0, nullptr, 0},
  {"Tv", PR_RC6, 0x00, 0x00, 0x9F, 0, nullptr, 0},
  {"Mute", PR_RC6, 0x00, 0x00, 0x0D, 0, nullptr, 0},
  {"Ch_next", PR_RC6, 0x00, 0x00, 0x20, 0, nullptr, 0},
  {"Ch_prev", PR_RC6, 0x00, 0x00, 0x21, 0, nullptr, 0},
  {"1", PR_RC6, 0x00, 0x00, 0x01, 0, nullptr, 0},
  {"2", PR_RC6, 0x00, 0x00, 0x02, 0, nullptr, 0},
  {"3", PR_RC6, 0x00, 0x00, 0x03, 0, nullptr, 0},
  {"4", PR_RC6, 0x00, 0x00, 0x04, 0, nullptr, 0},
  {"5", PR_RC6, 0x00, 0x00, 0x05, 0, nullptr, 0},
  {"6", PR_RC6, 0x00, 0x00, 0x06, 0, nullptr, 0},
  {"7", PR_RC6, 0x00, 0x00, 0x07, 0, nullptr, 0},
  {"8", PR_RC6, 0x00, 0x00, 0x08, 0, nullptr, 0},
  {"9", PR_RC6, 0x00, 0x00, 0x09, 0, nullptr, 0},
  {"0", PR_RC6, 0x00, 0x00, 0x00, 0, nullptr, 0},
  {"Text", PR_RC6, 0x00, 0x00, 0x3C, 0, nullptr, 0},
  {"Options", PR_RC6, 0x00, 0x00, 0x40, 0, nullptr, 0},
};
static const BBtn b_15[] = {
  {"Power", PR_RC6, 0x00, 0x00, 0x0C, 0, nullptr, 0},
  {"Home", PR_RC6, 0x00, 0x00, 0x54, 0, nullptr, 0},
  {"1", PR_RC6, 0x00, 0x00, 0x01, 0, nullptr, 0},
  {"2", PR_RC6, 0x00, 0x00, 0x02, 0, nullptr, 0},
  {"3", PR_RC6, 0x00, 0x00, 0x03, 0, nullptr, 0},
  {"4", PR_RC6, 0x00, 0x00, 0x04, 0, nullptr, 0},
  {"5", PR_RC6, 0x00, 0x00, 0x05, 0, nullptr, 0},
  {"6", PR_RC6, 0x00, 0x00, 0x06, 0, nullptr, 0},
  {"7", PR_RC6, 0x00, 0x00, 0x07, 0, nullptr, 0},
  {"8", PR_RC6, 0x00, 0x00, 0x08, 0, nullptr, 0},
  {"9", PR_RC6, 0x00, 0x00, 0x09, 0, nullptr, 0},
  {"0", PR_RC6, 0x00, 0x00, 0x00, 0, nullptr, 0},
  {"Teletext", PR_RC6, 0x00, 0x00, 0x3C, 0, nullptr, 0},
  {"Format", PR_RC6, 0x00, 0x00, 0xF5, 0, nullptr, 0},
  {"Subtitle", PR_RC6, 0x00, 0x00, 0x4B, 0, nullptr, 0},
  {"Options", PR_RC6, 0x00, 0x00, 0x40, 0, nullptr, 0},
  {"Smarttv", PR_RC6, 0x00, 0x00, 0xBE, 0, nullptr, 0},
  {"Source", PR_RC6, 0x00, 0x00, 0x38, 0, nullptr, 0},
  {"Rewind", PR_RC6, 0x00, 0x00, 0x2B, 0, nullptr, 0},
  {"Play", PR_RC6, 0x00, 0x00, 0x2C, 0, nullptr, 0},
  {"Pause", PR_RC6, 0x00, 0x00, 0x30, 0, nullptr, 0},
  {"Fastforward", PR_RC6, 0x00, 0x00, 0x28, 0, nullptr, 0},
  {"Record", PR_RC6, 0x00, 0x00, 0x37, 0, nullptr, 0},
  {"Stop", PR_RC6, 0x00, 0x00, 0x31, 0, nullptr, 0},
  {"Menu", PR_RC6, 0x00, 0x00, 0x54, 0, nullptr, 0},
  {"Exit", PR_RC6, 0x00, 0x00, 0x41, 0, nullptr, 0},
  {"Vol_up", PR_RC6, 0x00, 0x00, 0x10, 0, nullptr, 0},
  {"Vol_dn", PR_RC6, 0x00, 0x00, 0x11, 0, nullptr, 0},
  {"Ch_next", PR_RC6, 0x00, 0x00, 0x4C, 0, nullptr, 0},
  {"Ch_prev", PR_RC6, 0x00, 0x00, 0x4D, 0, nullptr, 0},
  {"Up", PR_RC6, 0x00, 0x00, 0x58, 0, nullptr, 0},
  {"Down", PR_RC6, 0x00, 0x00, 0x59, 0, nullptr, 0},
  {"Left", PR_RC6, 0x00, 0x00, 0x5A, 0, nullptr, 0},
  {"Right", PR_RC6, 0x00, 0x00, 0x5B, 0, nullptr, 0},
  {"Mute", PR_RC6, 0x00, 0x00, 0x0D, 0, nullptr, 0},
  {"Back", PR_RC6, 0x00, 0x00, 0x0A, 0, nullptr, 0},
  {"Dvr", PR_RC6, 0x00, 0x00, 0xD2, 0, nullptr, 0},
  {"Guide", PR_RC6, 0x00, 0x00, 0xCC, 0, nullptr, 0},
  {"Info", PR_RC6, 0x00, 0x00, 0x0F, 0, nullptr, 0},
  {"Red", PR_RC6, 0x00, 0x00, 0x6D, 0, nullptr, 0},
  {"Green", PR_RC6, 0x00, 0x00, 0x6E, 0, nullptr, 0},
  {"Yellow", PR_RC6, 0x00, 0x00, 0x6F, 0, nullptr, 0},
  {"Blue", PR_RC6, 0x00, 0x00, 0x70, 0, nullptr, 0},
};
static const uint16_t b_16_r1[] = {2721,828,450,875,455,428,448,435,1472,1256,455,427,449,434,452,431,455,428,448,434,452,431,455,427,449,434,452,431,889,438,449,877,453,430,446,437,893,60000,2687,862,447,879,451,432,454,428,1469,1260,451,431,455,427,449,434,452,431,455,427,449,434,452,431,445,437,449,434,896,431,456,870,450,434,452,430,890};
static const uint16_t b_16_r3[] = {2718,831,478,846,484,399,477,406,1471,1258,484,398,478,405,481,401,475,408,478,405,481,401,475,408,478,405,481,401,888,440,477,848,894,432,475,410,476,60000,2710,839,480,845,474,408,478,404,1472,1256,476,407,480,404,482,400,476,407,479,403,483,400,476,407,479,403,483,400,889,438,479,846,896,431,476,409,477};
static const uint16_t b_16_r5[] = {2711,837,482,843,476,406,480,403,1473,1255,477,406,480,403,473,410,476,407,479,403,473,410,476,407,479,403,473,410,889,879,894,433,474,852,478,405,481,60000,2710,837,482,843,476,407,479,404,1472,1256,476,407,479,404,482,400,476,408,478,404,482,401,475,408,478,405,481,401,888,881,892,435,482,843,476,407,479};
static const uint16_t b_16_r24[] = {2715,835,484,841,479,405,481,401,475,839,1027,389,477,406,480,403,483,400,476,406,480,403,483,400,476,407,479,403,483,400,476,407,479,404,915,412,474,410,476,409,477,60000,2712,838,482,844,475,408,478,404,482,832,1034,382,484,400,476,407,448,434,452,431,455,428,448,435,451,432,454,429,447,436,450,432,454,429,942,386,449,435,451,434,452};
static const BBtn b_16[] = {
  {"Power", PR_RC6, 0x00, 0x00, 0x0C, 0, nullptr, 0},
  {"Stop", PR_RAW, 0, 0, 0, 38000, b_16_r1, 75},
  {"Pause", PR_RC6, 0x00, 0x00, 0x30, 0, nullptr, 0},
  {"Record", PR_RAW, 0, 0, 0, 38000, b_16_r3, 75},
  {"Vid_back", PR_RC6, 0x00, 0x00, 0x2B, 0, nullptr, 0},
  {"Play", PR_RAW, 0, 0, 0, 38000, b_16_r5, 75},
  {"Vid_forward", PR_RC6, 0x00, 0x00, 0x28, 0, nullptr, 0},
  {"Ambilight", PR_RC6, 0x00, 0x00, 0x8F, 0, nullptr, 0},
  {"List", PR_RC6, 0x00, 0x00, 0xD2, 0, nullptr, 0},
  {"Settings", PR_RC6, 0x00, 0x00, 0xBF, 0, nullptr, 0},
  {"Tv_guide", PR_RC6, 0x00, 0x00, 0xCC, 0, nullptr, 0},
  {"Search", PR_RC6, 0x00, 0x00, 0xB4, 0, nullptr, 0},
  {"Top_picks", PR_RC6, 0x00, 0x00, 0x74, 0, nullptr, 0},
  {"Sources", PR_RC6, 0x00, 0x00, 0x38, 0, nullptr, 0},
  {"Menu", PR_RC6, 0x00, 0x00, 0x57, 0, nullptr, 0},
  {"Tv_exit", PR_RC6, 0x00, 0x00, 0x9F, 0, nullptr, 0},
  {"Red", PR_RC6, 0x00, 0x00, 0x6D, 0, nullptr, 0},
  {"Green", PR_RC6, 0x00, 0x00, 0x6E, 0, nullptr, 0},
  {"Yellow", PR_RC6, 0x00, 0x00, 0x6F, 0, nullptr, 0},
  {"Blue", PR_RC6, 0x00, 0x00, 0x70, 0, nullptr, 0},
  {"Up", PR_RC6, 0x00, 0x00, 0x58, 0, nullptr, 0},
  {"Down", PR_RC6, 0x00, 0x00, 0x59, 0, nullptr, 0},
  {"Left", PR_RC6, 0x00, 0x00, 0x5A, 0, nullptr, 0},
  {"Right", PR_RC6, 0x00, 0x00, 0x5B, 0, nullptr, 0},
  {"Info", PR_RAW, 0, 0, 0, 38000, b_16_r24, 83},
  {"Options", PR_RC6, 0x00, 0x00, 0x40, 0, nullptr, 0},
  {"Back", PR_RC6, 0x00, 0x00, 0x0A, 0, nullptr, 0},
  {"Home", PR_RC6, 0x00, 0x00, 0x54, 0, nullptr, 0},
  {"Netflix", PR_RC6, 0x00, 0x00, 0x76, 0, nullptr, 0},
  {"Mute", PR_RC6, 0x00, 0x00, 0x0D, 0, nullptr, 0},
  {"Vol_up", PR_RC6, 0x00, 0x00, 0x10, 0, nullptr, 0},
  {"Vol_dn", PR_RC6, 0x00, 0x00, 0x11, 0, nullptr, 0},
  {"Ch_next", PR_RC6, 0x00, 0x00, 0x20, 0, nullptr, 0},
  {"Ch_prev", PR_RC6, 0x00, 0x00, 0x21, 0, nullptr, 0},
  {"1", PR_RC6, 0x00, 0x00, 0x01, 0, nullptr, 0},
  {"2", PR_RC6, 0x00, 0x00, 0x02, 0, nullptr, 0},
  {"3", PR_RC6, 0x00, 0x00, 0x03, 0, nullptr, 0},
  {"4", PR_RC6, 0x00, 0x00, 0x04, 0, nullptr, 0},
  {"5", PR_RC6, 0x00, 0x00, 0x05, 0, nullptr, 0},
  {"6", PR_RC6, 0x00, 0x00, 0x06, 0, nullptr, 0},
  {"7", PR_RC6, 0x00, 0x00, 0x07, 0, nullptr, 0},
  {"8", PR_RC6, 0x00, 0x00, 0x08, 0, nullptr, 0},
  {"9", PR_RC6, 0x00, 0x00, 0x09, 0, nullptr, 0},
  {"0", PR_RC6, 0x00, 0x00, 0x00, 0, nullptr, 0},
  {"Subs", PR_RC6, 0x00, 0x00, 0x4B, 0, nullptr, 0},
  {"Text", PR_RC6, 0x00, 0x00, 0x3C, 0, nullptr, 0},
};
static const BRemote rem_17[] = {
  {"Ambilight 7956", b_12, 45},
  {"50PUT6103", b_13, 45},
  {"48OLED806", b_14, 44},
  {"32PFL4208T", b_15, 43},
  {"Universal", b_16, 46},
};
static const BBtn b_18[] = {
  {"Power", PR_RCA, 0x0F, 0x00, 0x54, 0, nullptr, 0},
  {"Mute", PR_RCA, 0x0F, 0x00, 0xFC, 0, nullptr, 0},
  {"Vol_up", PR_RCA, 0x0F, 0x00, 0xF4, 0, nullptr, 0},
  {"Vol_dn", PR_RCA, 0x0F, 0x00, 0x74, 0, nullptr, 0},
  {"Home", PR_RCA, 0x0F, 0x00, 0x10, 0, nullptr, 0},
  {"Ok", PR_RCA, 0x0F, 0x00, 0x2F, 0, nullptr, 0},
  {"Back", PR_RCA, 0x0F, 0x00, 0xE4, 0, nullptr, 0},
  {"Up", PR_RCA, 0x0F, 0x00, 0x9A, 0, nullptr, 0},
  {"Down", PR_RCA, 0x0F, 0x00, 0x1A, 0, nullptr, 0},
  {"Left", PR_RCA, 0x0F, 0x00, 0x6A, 0, nullptr, 0},
  {"Right", PR_RCA, 0x0F, 0x00, 0xEA, 0, nullptr, 0},
  {"Menu", PR_RCA, 0x0F, 0x00, 0x37, 0, nullptr, 0},
  {"Source", PR_RCA, 0x0F, 0x00, 0xC5, 0, nullptr, 0},
  {"Settings", PR_RCA, 0x0F, 0x00, 0xF3, 0, nullptr, 0},
  {"Ch_next", PR_RCA, 0x0F, 0x00, 0xB4, 0, nullptr, 0},
  {"Ch_prev", PR_RCA, 0x0F, 0x00, 0x34, 0, nullptr, 0},
  {"Info", PR_RCA, 0x0F, 0x00, 0x3C, 0, nullptr, 0},
  {"List", PR_RCA, 0x0F, 0x00, 0x86, 0, nullptr, 0},
  {"0", PR_RCA, 0x0F, 0x00, 0x0C, 0, nullptr, 0},
  {"1", PR_RCA, 0x0F, 0x00, 0x8C, 0, nullptr, 0},
  {"2", PR_RCA, 0x0F, 0x00, 0x4C, 0, nullptr, 0},
  {"3", PR_RCA, 0x0F, 0x00, 0xCC, 0, nullptr, 0},
  {"4", PR_RCA, 0x0F, 0x00, 0x2C, 0, nullptr, 0},
  {"5", PR_RCA, 0x0F, 0x00, 0xAC, 0, nullptr, 0},
  {"6", PR_RCA, 0x0F, 0x00, 0x6C, 0, nullptr, 0},
  {"7", PR_RCA, 0x0F, 0x00, 0xEC, 0, nullptr, 0},
  {"8", PR_RCA, 0x0F, 0x00, 0x1C, 0, nullptr, 0},
  {"9", PR_RCA, 0x0F, 0x00, 0x9C, 0, nullptr, 0},
  {"Exit", PR_RCA, 0x0F, 0x00, 0x60, 0, nullptr, 0},
  {"Language", PR_RCA, 0x0F, 0x00, 0xFB, 0, nullptr, 0},
  {"Guide", PR_RCA, 0x0F, 0x00, 0x58, 0, nullptr, 0},
  {"Text", PR_RCA, 0x0F, 0x00, 0x78, 0, nullptr, 0},
  {"Subtitles", PR_RCA, 0x0F, 0x00, 0x01, 0, nullptr, 0},
  {"Red", PR_RCA, 0x0F, 0x00, 0x00, 0, nullptr, 0},
  {"Green", PR_RCA, 0x0F, 0x00, 0x17, 0, nullptr, 0},
  {"Yellow", PR_RCA, 0x0F, 0x00, 0x27, 0, nullptr, 0},
  {"Blue", PR_RCA, 0x0F, 0x00, 0x1B, 0, nullptr, 0},
  {"Rewind", PR_RCA, 0x0F, 0x00, 0xB8, 0, nullptr, 0},
  {"Pause", PR_RCA, 0x0F, 0x00, 0x98, 0, nullptr, 0},
  {"Play", PR_RCA, 0x0F, 0x00, 0xA8, 0, nullptr, 0},
  {"Forward", PR_RCA, 0x0F, 0x00, 0x38, 0, nullptr, 0},
  {"Zoom", PR_RCA, 0x0F, 0x00, 0x09, 0, nullptr, 0},
  {"Record", PR_RCA, 0x0F, 0x00, 0xF8, 0, nullptr, 0},
  {"Freeview", PR_RCA, 0x0F, 0x00, 0x57, 0, nullptr, 0},
  {"Netflix", PR_RCA, 0x0F, 0x00, 0xF7, 0, nullptr, 0},
};
static const BBtn b_19[] = {
  {"Power", PR_RCA, 0x0F, 0x00, 0x54, 0, nullptr, 0},
  {"Vol_up", PR_RCA, 0x0F, 0x00, 0xF4, 0, nullptr, 0},
  {"Vol_dn", PR_RCA, 0x0F, 0x00, 0x74, 0, nullptr, 0},
  {"Mute", PR_RCA, 0x0F, 0x00, 0xFC, 0, nullptr, 0},
  {"Settings", PR_RCA, 0x0F, 0x00, 0xF3, 0, nullptr, 0},
  {"Home", PR_RCA, 0x0F, 0x00, 0x10, 0, nullptr, 0},
  {"Up", PR_RCA, 0x0F, 0x00, 0x9A, 0, nullptr, 0},
  {"Down", PR_RCA, 0x0F, 0x00, 0x1A, 0, nullptr, 0},
  {"Left", PR_RCA, 0x0F, 0x00, 0x6A, 0, nullptr, 0},
  {"Right", PR_RCA, 0x0F, 0x00, 0xEA, 0, nullptr, 0},
  {"Select", PR_RCA, 0x0F, 0x00, 0x2F, 0, nullptr, 0},
  {"Back", PR_RCA, 0x0F, 0x00, 0xE4, 0, nullptr, 0},
  {"Mystery", PR_RCA, 0x0F, 0x00, 0x37, 0, nullptr, 0},
  {"Bookmark", PR_RCA, 0x0F, 0x00, 0x86, 0, nullptr, 0},
  {"Tv", PR_RCA, 0x0F, 0x00, 0x58, 0, nullptr, 0},
  {"Tv services", PR_RCA, 0x0F, 0x00, 0xFE, 0, nullptr, 0},
  {"Recents", PR_RCA, 0x0F, 0x00, 0x3E, 0, nullptr, 0},
  {"Keyboard", PR_RCA, 0x0F, 0x00, 0xB3, 0, nullptr, 0},
  {"Netflix", PR_RCA, 0x0F, 0x00, 0xF7, 0, nullptr, 0},
  {"YT", PR_RCA, 0x0F, 0x00, 0x47, 0, nullptr, 0},
  {"Prime Video", PR_RCA, 0x0F, 0x00, 0x83, 0, nullptr, 0},
  {"TCL Channel", PR_RCA, 0x0F, 0x00, 0xC7, 0, nullptr, 0},
  {"Assistant", PR_RCA, 0x0F, 0x00, 0x3A, 0, nullptr, 0},
};
static const BBtn b_20[] = {
  {"Power", PR_RCA, 0x0F, 0x00, 0x54, 0, nullptr, 0},
  {"Input", PR_RCA, 0x0F, 0x00, 0xC5, 0, nullptr, 0},
  {"Menu", PR_RCA, 0x0F, 0x00, 0x10, 0, nullptr, 0},
  {"List", PR_RCA, 0x0F, 0x00, 0x78, 0, nullptr, 0},
  {"Info", PR_RCA, 0x0F, 0x00, 0x3C, 0, nullptr, 0},
  {"Back", PR_RCA, 0x0F, 0x00, 0xE4, 0, nullptr, 0},
  {"Ok", PR_RCA, 0x0F, 0x00, 0x2F, 0, nullptr, 0},
  {"Up", PR_RCA, 0x0F, 0x00, 0x9A, 0, nullptr, 0},
  {"Down", PR_RCA, 0x0F, 0x00, 0x1A, 0, nullptr, 0},
  {"Left", PR_RCA, 0x0F, 0x00, 0x6A, 0, nullptr, 0},
  {"Right", PR_RCA, 0x0F, 0x00, 0xEA, 0, nullptr, 0},
  {"Fast_fo", PR_RCA, 0x0F, 0x00, 0x38, 0, nullptr, 0},
  {"Fast_ba", PR_RCA, 0x0F, 0x00, 0xB8, 0, nullptr, 0},
  {"Play_pa", PR_RCA, 0x0F, 0x00, 0xA8, 0, nullptr, 0},
  {"Stop", PR_RCA, 0x0F, 0x00, 0xF8, 0, nullptr, 0},
  {"Mute", PR_RCA, 0x0F, 0x00, 0xFC, 0, nullptr, 0},
  {"Vol_up", PR_RCA, 0x0F, 0x00, 0xF4, 0, nullptr, 0},
  {"Vol_dn", PR_RCA, 0x0F, 0x00, 0x74, 0, nullptr, 0},
  {"Ch_next", PR_RCA, 0x0F, 0x00, 0xB4, 0, nullptr, 0},
  {"Ch_prev", PR_RCA, 0x0F, 0x00, 0x34, 0, nullptr, 0},
  {"Guide", PR_RCA, 0x0F, 0x00, 0x58, 0, nullptr, 0},
  {"Exit", PR_RCA, 0x0F, 0x00, 0x60, 0, nullptr, 0},
};
static const BBtn b_21[] = {
  {"Power", PR_RCA, 0x0F, 0x00, 0x54, 0, nullptr, 0},
  {"Mute", PR_RCA, 0x0F, 0x00, 0xFC, 0, nullptr, 0},
  {"Ch_next", PR_RCA, 0x0F, 0x00, 0xB4, 0, nullptr, 0},
  {"Ch_prev", PR_RCA, 0x0F, 0x00, 0x34, 0, nullptr, 0},
  {"Vol_up", PR_RCA, 0x0F, 0x00, 0xF4, 0, nullptr, 0},
  {"Vol_dn", PR_RCA, 0x0F, 0x00, 0x74, 0, nullptr, 0},
  {"1", PR_RCA, 0x0F, 0x00, 0x8C, 0, nullptr, 0},
  {"2", PR_RCA, 0x0F, 0x00, 0x4C, 0, nullptr, 0},
  {"3", PR_RCA, 0x0F, 0x00, 0xCC, 0, nullptr, 0},
  {"4", PR_RCA, 0x0F, 0x00, 0x2C, 0, nullptr, 0},
  {"5", PR_RCA, 0x0F, 0x00, 0xAC, 0, nullptr, 0},
  {"6", PR_RCA, 0x0F, 0x00, 0x6C, 0, nullptr, 0},
  {"7", PR_RCA, 0x0F, 0x00, 0xEC, 0, nullptr, 0},
  {"8", PR_RCA, 0x0F, 0x00, 0x1C, 0, nullptr, 0},
  {"9", PR_RCA, 0x0F, 0x00, 0x9C, 0, nullptr, 0},
  {"0", PR_RCA, 0x0F, 0x00, 0x0C, 0, nullptr, 0},
  {"Source", PR_RCA, 0x0F, 0x00, 0xC5, 0, nullptr, 0},
  {"Guide", PR_RCA, 0x0F, 0x00, 0x58, 0, nullptr, 0},
  {"Menu", PR_RCA, 0x0F, 0x00, 0x10, 0, nullptr, 0},
  {"Exit", PR_RCA, 0x0F, 0x00, 0x60, 0, nullptr, 0},
  {"Arrow_up", PR_RCA, 0x0F, 0x00, 0x9A, 0, nullptr, 0},
  {"Arrow_down", PR_RCA, 0x0F, 0x00, 0x1A, 0, nullptr, 0},
  {"Arrow_left", PR_RCA, 0x0F, 0x00, 0x6A, 0, nullptr, 0},
  {"Arrow_right", PR_RCA, 0x0F, 0x00, 0xEA, 0, nullptr, 0},
  {"Ok", PR_RCA, 0x0F, 0x00, 0x2F, 0, nullptr, 0},
  {"Option", PR_RCA, 0x0F, 0x00, 0x37, 0, nullptr, 0},
  {"Return", PR_RCA, 0x0F, 0x00, 0xE4, 0, nullptr, 0},
  {"Smarttv", PR_RCA, 0x0F, 0x00, 0x57, 0, nullptr, 0},
  {"Youtube", PR_RCA, 0x0F, 0x00, 0x47, 0, nullptr, 0},
  {"Text", PR_RCA, 0x0F, 0x00, 0x78, 0, nullptr, 0},
  {"Subtitle", PR_RCA, 0x0F, 0x00, 0x01, 0, nullptr, 0},
  {"List", PR_RCA, 0x0F, 0x00, 0x86, 0, nullptr, 0},
  {"Info", PR_RCA, 0x0F, 0x00, 0x3C, 0, nullptr, 0},
  {"Red", PR_RCA, 0x0F, 0x00, 0x00, 0, nullptr, 0},
  {"Green", PR_RCA, 0x0F, 0x00, 0x17, 0, nullptr, 0},
  {"Yellow", PR_RCA, 0x0F, 0x00, 0x27, 0, nullptr, 0},
  {"Blue", PR_RCA, 0x0F, 0x00, 0x1B, 0, nullptr, 0},
};
static const BBtn b_22[] = {
  {"Power", PR_NECEXT, 0xEA, 0xC7, 0x97, 0, nullptr, 0},
  {"Vol_up", PR_NECEXT, 0xEA, 0xC7, 0x0F, 0, nullptr, 0},
  {"Vol_dn", PR_NECEXT, 0xEA, 0xC7, 0x10, 0, nullptr, 0},
  {"Mute", PR_NECEXT, 0xEA, 0xC7, 0x20, 0, nullptr, 0},
  {"Home", PR_NECEXT, 0xEA, 0xC7, 0x03, 0, nullptr, 0},
  {"Back", PR_NECEXT, 0xEA, 0xC7, 0x66, 0, nullptr, 0},
  {"Up", PR_NECEXT, 0xEA, 0xC7, 0x19, 0, nullptr, 0},
  {"Down", PR_NECEXT, 0xEA, 0xC7, 0x33, 0, nullptr, 0},
  {"Left", PR_NECEXT, 0xEA, 0xC7, 0x1E, 0, nullptr, 0},
  {"Right", PR_NECEXT, 0xEA, 0xC7, 0x2D, 0, nullptr, 0},
  {"Ok", PR_NECEXT, 0xEA, 0xC7, 0x2A, 0, nullptr, 0},
  {"Instant_replay", PR_NECEXT, 0xEA, 0xC7, 0x78, 0, nullptr, 0},
  {"Star", PR_NECEXT, 0xEA, 0xC7, 0x61, 0, nullptr, 0},
  {"Play/pause", PR_NECEXT, 0xEA, 0xC7, 0x4C, 0, nullptr, 0},
  {"Rewind", PR_NECEXT, 0xEA, 0xC7, 0x34, 0, nullptr, 0},
  {"Fast-forward", PR_NECEXT, 0xEA, 0xC7, 0x55, 0, nullptr, 0},
  {"Prime", PR_NECEXT, 0xEA, 0xC7, 0x4B, 0, nullptr, 0},
  {"Disney+", PR_NECEXT, 0xEA, 0xC7, 0x0C, 0, nullptr, 0},
  {"Espn", PR_NECEXT, 0xEA, 0xC7, 0x72, 0, nullptr, 0},
  {"Hulu", PR_NECEXT, 0xEA, 0xC7, 0x4D, 0, nullptr, 0},
  {"Netflix", PR_NECEXT, 0xEA, 0xC7, 0x52, 0, nullptr, 0},
  {"Roku_channel", PR_NECEXT, 0xEA, 0xC7, 0x6E, 0, nullptr, 0},
  {"Youtube", PR_NECEXT, 0xEA, 0xC7, 0x56, 0, nullptr, 0},
  {"Apple_tv", PR_NECEXT, 0xEA, 0xC7, 0x77, 0, nullptr, 0},
};
static const BRemote rem_23[] = {
  {"65C635K", b_18, 45},
  {"43S446", b_19, 23},
  {"40S615", b_20, 22},
  {"LED49D2930", b_21, 37},
  {"Roku TV", b_22, 24},
};
static const BBtn b_24[] = {
  {"Power", PR_SIRC, 0x01, 0x00, 0x15, 0, nullptr, 0},
  {"Ch_next", PR_SIRC, 0x01, 0x00, 0x10, 0, nullptr, 0},
  {"Ch_prev", PR_SIRC, 0x01, 0x00, 0x11, 0, nullptr, 0},
  {"Vol_up", PR_SIRC, 0x01, 0x00, 0x12, 0, nullptr, 0},
  {"Vol_dn", PR_SIRC, 0x01, 0x00, 0x13, 0, nullptr, 0},
  {"Source", PR_SIRC, 0x01, 0x00, 0x25, 0, nullptr, 0},
  {"Sync_/_menu", PR_SIRC15, 0x1A, 0x00, 0x58, 0, nullptr, 0},
  {"Digital/analog", PR_SIRC15, 0x77, 0x00, 0x0D, 0, nullptr, 0},
  {"Tv/radio", PR_SIRC15, 0x1A, 0x00, 0x57, 0, nullptr, 0},
  {"Football", PR_SIRC15, 0x1A, 0x00, 0x76, 0, nullptr, 0},
  {"1", PR_SIRC, 0x01, 0x00, 0x00, 0, nullptr, 0},
  {"2", PR_SIRC, 0x01, 0x00, 0x01, 0, nullptr, 0},
  {"3", PR_SIRC, 0x01, 0x00, 0x02, 0, nullptr, 0},
  {"4", PR_SIRC, 0x01, 0x00, 0x03, 0, nullptr, 0},
  {"5", PR_SIRC, 0x01, 0x00, 0x04, 0, nullptr, 0},
  {"6", PR_SIRC, 0x01, 0x00, 0x05, 0, nullptr, 0},
  {"7", PR_SIRC, 0x01, 0x00, 0x06, 0, nullptr, 0},
  {"8", PR_SIRC, 0x01, 0x00, 0x07, 0, nullptr, 0},
  {"9", PR_SIRC, 0x01, 0x00, 0x08, 0, nullptr, 0},
  {"0", PR_SIRC, 0x01, 0x00, 0x09, 0, nullptr, 0},
  {"Exit", PR_SIRC, 0x01, 0x00, 0x63, 0, nullptr, 0},
  {"Tele", PR_SIRC, 0x01, 0x00, 0x3F, 0, nullptr, 0},
  {"Red", PR_SIRC15, 0x97, 0x00, 0x25, 0, nullptr, 0},
  {"Green", PR_SIRC15, 0x97, 0x00, 0x26, 0, nullptr, 0},
  {"Yellow", PR_SIRC15, 0x97, 0x00, 0x27, 0, nullptr, 0},
  {"Blue", PR_SIRC15, 0x97, 0x00, 0x24, 0, nullptr, 0},
  {"Tv", PR_SIRC, 0x01, 0x00, 0x24, 0, nullptr, 0},
  {"Action", PR_SIRC15, 0xC4, 0x00, 0x4B, 0, nullptr, 0},
  {"Guide", PR_SIRC15, 0xA4, 0x00, 0x5B, 0, nullptr, 0},
  {"Back", PR_SIRC15, 0x97, 0x00, 0x23, 0, nullptr, 0},
  {"Home", PR_SIRC, 0x01, 0x00, 0x60, 0, nullptr, 0},
  {"Discover", PR_SIRC15, 0x1A, 0x00, 0x73, 0, nullptr, 0},
  {"Up", PR_SIRC, 0x01, 0x00, 0x74, 0, nullptr, 0},
  {"Down", PR_SIRC, 0x01, 0x00, 0x75, 0, nullptr, 0},
  {"Left", PR_SIRC, 0x01, 0x00, 0x34, 0, nullptr, 0},
  {"Right", PR_SIRC, 0x01, 0x00, 0x33, 0, nullptr, 0},
  {"Ok", PR_SIRC, 0x01, 0x00, 0x65, 0, nullptr, 0},
  {"Ref", PR_SIRC, 0x01, 0x00, 0x3B, 0, nullptr, 0},
  {"Mute", PR_SIRC, 0x01, 0x00, 0x14, 0, nullptr, 0},
  {"Audio", PR_SIRC, 0x01, 0x00, 0x17, 0, nullptr, 0},
  {"Sub", PR_SIRC15, 0x97, 0x00, 0x28, 0, nullptr, 0},
  {"Wide", PR_SIRC15, 0xA4, 0x00, 0x3D, 0, nullptr, 0},
  {"Bbw", PR_SIRC15, 0x97, 0x00, 0x1B, 0, nullptr, 0},
  {"Play", PR_SIRC15, 0x97, 0x00, 0x1A, 0, nullptr, 0},
  {"Ffw", PR_SIRC15, 0x97, 0x00, 0x1C, 0, nullptr, 0},
  {"Bw", PR_SIRC15, 0x97, 0x00, 0x3C, 0, nullptr, 0},
  {"Pause", PR_SIRC15, 0x97, 0x00, 0x19, 0, nullptr, 0},
  {"Fw", PR_SIRC15, 0x97, 0x00, 0x3D, 0, nullptr, 0},
  {"Rec", PR_SIRC15, 0x97, 0x00, 0x20, 0, nullptr, 0},
  {"Stop", PR_SIRC15, 0x97, 0x00, 0x18, 0, nullptr, 0},
  {"Titlelist", PR_SIRC15, 0x1A, 0x00, 0x65, 0, nullptr, 0},
};
static const BBtn b_25[] = {
  {"Power", PR_SIRC, 0x01, 0x00, 0x15, 0, nullptr, 0},
  {"Source", PR_SIRC, 0x01, 0x00, 0x25, 0, nullptr, 0},
  {"Vol_up", PR_SIRC, 0x01, 0x00, 0x12, 0, nullptr, 0},
  {"Vol_dn", PR_SIRC, 0x01, 0x00, 0x13, 0, nullptr, 0},
  {"Mute", PR_SIRC, 0x01, 0x00, 0x14, 0, nullptr, 0},
  {"Ch_next", PR_SIRC, 0x01, 0x00, 0x10, 0, nullptr, 0},
  {"Ch_prev", PR_SIRC, 0x01, 0x00, 0x11, 0, nullptr, 0},
  {"Track_id", PR_SIRC15, 0x1A, 0x00, 0x7E, 0, nullptr, 0},
  {"Prev", PR_SIRC15, 0x97, 0x00, 0x3C, 0, nullptr, 0},
  {"Pause", PR_SIRC15, 0x97, 0x00, 0x19, 0, nullptr, 0},
  {"Next", PR_SIRC15, 0x97, 0x00, 0x3D, 0, nullptr, 0},
  {"I-manual", PR_SIRC15, 0x1A, 0x00, 0x7B, 0, nullptr, 0},
  {"Rwd", PR_SIRC15, 0x97, 0x00, 0x1B, 0, nullptr, 0},
  {"Play", PR_SIRC15, 0x97, 0x00, 0x1A, 0, nullptr, 0},
  {"Fwd", PR_SIRC15, 0x97, 0x00, 0x1C, 0, nullptr, 0},
  {"Screen_mode", PR_SIRC15, 0xA4, 0x00, 0x3D, 0, nullptr, 0},
  {"Stop", PR_SIRC15, 0x97, 0x00, 0x18, 0, nullptr, 0},
  {"Rec", PR_SIRC15, 0x97, 0x00, 0x20, 0, nullptr, 0},
  {"Digital/analog", PR_SIRC15, 0x77, 0x00, 0x0D, 0, nullptr, 0},
  {"Exit", PR_SIRC, 0x01, 0x00, 0x63, 0, nullptr, 0},
  {"Scene", PR_SIRC15, 0x1A, 0x00, 0x78, 0, nullptr, 0},
  {"Internet_video", PR_SIRC15, 0x1A, 0x00, 0x79, 0, nullptr, 0},
  {"Sync_menu", PR_SIRC15, 0x1A, 0x00, 0x58, 0, nullptr, 0},
  {"Guide", PR_SIRC15, 0xA4, 0x00, 0x5B, 0, nullptr, 0},
  {"Return/back", PR_SIRC15, 0x97, 0x00, 0x23, 0, nullptr, 0},
  {"Home", PR_SIRC, 0x01, 0x00, 0x60, 0, nullptr, 0},
  {"Options", PR_SIRC15, 0x97, 0x00, 0x36, 0, nullptr, 0},
  {"Info", PR_SIRC, 0x01, 0x00, 0x3A, 0, nullptr, 0},
  {"Up", PR_SIRC, 0x01, 0x00, 0x74, 0, nullptr, 0},
  {"Down", PR_SIRC, 0x01, 0x00, 0x75, 0, nullptr, 0},
  {"Left", PR_SIRC, 0x01, 0x00, 0x34, 0, nullptr, 0},
  {"Right", PR_SIRC, 0x01, 0x00, 0x33, 0, nullptr, 0},
  {"Ok", PR_SIRC, 0x01, 0x00, 0x65, 0, nullptr, 0},
  {"Red", PR_SIRC15, 0x97, 0x00, 0x25, 0, nullptr, 0},
  {"Green", PR_SIRC15, 0x97, 0x00, 0x26, 0, nullptr, 0},
  {"Yellow", PR_SIRC15, 0x97, 0x00, 0x27, 0, nullptr, 0},
  {"Blue", PR_SIRC15, 0x97, 0x00, 0x24, 0, nullptr, 0},
  {"1", PR_SIRC, 0x01, 0x00, 0x00, 0, nullptr, 0},
  {"2", PR_SIRC, 0x01, 0x00, 0x01, 0, nullptr, 0},
  {"3", PR_SIRC, 0x01, 0x00, 0x02, 0, nullptr, 0},
  {"4", PR_SIRC, 0x01, 0x00, 0x03, 0, nullptr, 0},
  {"5", PR_SIRC, 0x01, 0x00, 0x04, 0, nullptr, 0},
  {"6", PR_SIRC, 0x01, 0x00, 0x05, 0, nullptr, 0},
  {"7", PR_SIRC, 0x01, 0x00, 0x06, 0, nullptr, 0},
  {"8", PR_SIRC, 0x01, 0x00, 0x07, 0, nullptr, 0},
  {"9", PR_SIRC, 0x01, 0x00, 0x08, 0, nullptr, 0},
  {"0", PR_SIRC, 0x01, 0x00, 0x09, 0, nullptr, 0},
  {"Text", PR_SIRC, 0x01, 0x00, 0x3F, 0, nullptr, 0},
  {"Subtitle", PR_SIRC15, 0x97, 0x00, 0x28, 0, nullptr, 0},
  {"Audio", PR_SIRC, 0x01, 0x00, 0x17, 0, nullptr, 0},
};
static const BBtn b_26[] = {
  {"Power", PR_SIRC, 0x01, 0x00, 0x15, 0, nullptr, 0},
  {"Input", PR_SIRC, 0x01, 0x00, 0x25, 0, nullptr, 0},
  {"Home", PR_SIRC, 0x01, 0x00, 0x60, 0, nullptr, 0},
  {"Apps", PR_SIRC15, 0xC4, 0x00, 0x2A, 0, nullptr, 0},
  {"Tv", PR_SIRC, 0x01, 0x00, 0x24, 0, nullptr, 0},
  {"Left", PR_SIRC, 0x01, 0x00, 0x34, 0, nullptr, 0},
  {"Right", PR_SIRC, 0x01, 0x00, 0x33, 0, nullptr, 0},
  {"Up", PR_SIRC, 0x01, 0x00, 0x74, 0, nullptr, 0},
  {"Down", PR_SIRC, 0x01, 0x00, 0x75, 0, nullptr, 0},
  {"Enter", PR_SIRC, 0x01, 0x00, 0x65, 0, nullptr, 0},
  {"Back", PR_SIRC15, 0x97, 0x00, 0x23, 0, nullptr, 0},
  {"Mute", PR_SIRC, 0x01, 0x00, 0x14, 0, nullptr, 0},
  {"Vol_up", PR_SIRC, 0x01, 0x00, 0x12, 0, nullptr, 0},
  {"Vol_dn", PR_SIRC, 0x01, 0x00, 0x13, 0, nullptr, 0},
  {"Ch_next", PR_SIRC, 0x01, 0x00, 0x10, 0, nullptr, 0},
  {"Ch_prev", PR_SIRC, 0x01, 0x00, 0x11, 0, nullptr, 0},
  {"Play", PR_SIRC15, 0x97, 0x00, 0x1A, 0, nullptr, 0},
  {"Pause", PR_SIRC15, 0x97, 0x00, 0x19, 0, nullptr, 0},
  {"Stop", PR_SIRC15, 0x97, 0x00, 0x18, 0, nullptr, 0},
  {"Fwd", PR_SIRC15, 0x97, 0x00, 0x1C, 0, nullptr, 0},
  {"Rew", PR_SIRC15, 0x97, 0x00, 0x1B, 0, nullptr, 0},
  {"Prev", PR_SIRC15, 0x97, 0x00, 0x3C, 0, nullptr, 0},
  {"Next", PR_SIRC15, 0x97, 0x00, 0x3D, 0, nullptr, 0},
  {"Rec", PR_SIRC15, 0x97, 0x00, 0x20, 0, nullptr, 0},
  {"Netflix", PR_SIRC15, 0x1A, 0x00, 0x7C, 0, nullptr, 0},
  {"Google_play", PR_SIRC15, 0xC4, 0x00, 0x46, 0, nullptr, 0},
  {"Red", PR_SIRC15, 0x97, 0x00, 0x25, 0, nullptr, 0},
  {"Green", PR_SIRC15, 0x97, 0x00, 0x26, 0, nullptr, 0},
  {"Yellow", PR_SIRC15, 0x97, 0x00, 0x27, 0, nullptr, 0},
  {"Blue", PR_SIRC15, 0x97, 0x00, 0x24, 0, nullptr, 0},
  {"Action_menu", PR_SIRC15, 0xC4, 0x00, 0x4B, 0, nullptr, 0},
  {"Guide", PR_SIRC15, 0xA4, 0x00, 0x5B, 0, nullptr, 0},
  {"Help", PR_SIRC15, 0xC4, 0x00, 0x4D, 0, nullptr, 0},
  {"Title_list", PR_SIRC15, 0x1A, 0x00, 0x65, 0, nullptr, 0},
  {"Audio", PR_SIRC, 0x01, 0x00, 0x17, 0, nullptr, 0},
  {"Screen___", PR_SIRC15, 0x97, 0x00, 0x28, 0, nullptr, 0},
  {"Swap", PR_SIRC, 0x01, 0x00, 0x3B, 0, nullptr, 0},
  {"Dig_analo", PR_SIRC15, 0x77, 0x00, 0x0D, 0, nullptr, 0},
  {"Tv_radio", PR_SIRC15, 0x1A, 0x00, 0x57, 0, nullptr, 0},
  {"Exit", PR_SIRC, 0x01, 0x00, 0x63, 0, nullptr, 0},
  {"Ext_box_menu", PR_SIRC15, 0xC4, 0x00, 0x49, 0, nullptr, 0},
  {"1", PR_SIRC, 0x01, 0x00, 0x00, 0, nullptr, 0},
  {"2", PR_SIRC, 0x01, 0x00, 0x01, 0, nullptr, 0},
  {"3", PR_SIRC, 0x01, 0x00, 0x02, 0, nullptr, 0},
  {"4", PR_SIRC, 0x01, 0x00, 0x03, 0, nullptr, 0},
  {"5", PR_SIRC, 0x01, 0x00, 0x04, 0, nullptr, 0},
  {"6", PR_SIRC, 0x01, 0x00, 0x05, 0, nullptr, 0},
  {"7", PR_SIRC, 0x01, 0x00, 0x06, 0, nullptr, 0},
  {"8", PR_SIRC, 0x01, 0x00, 0x07, 0, nullptr, 0},
  {"9", PR_SIRC, 0x01, 0x00, 0x08, 0, nullptr, 0},
  {"0", PR_SIRC, 0x01, 0x00, 0x09, 0, nullptr, 0},
  {"I_plus", PR_SIRC, 0x01, 0x00, 0x3A, 0, nullptr, 0},
  {"Txt", PR_SIRC, 0x01, 0x00, 0x3F, 0, nullptr, 0},
};
static const BRemote rem_27[] = {
  {"RMT-TX100D", b_24, 51},
  {"RM-ED045", b_25, 50},
  {"Bravia XF80xx", b_26, 53},
};
static const BBtn b_28[] = {
  {"Powa", PR_NECEXT, 0x00, 0xBF, 0x0D, 0, nullptr, 0},
  {"Source", PR_NECEXT, 0x00, 0xBF, 0x12, 0, nullptr, 0},
  {"Antena", PR_NECEXT, 0x00, 0xBF, 0x1B, 0, nullptr, 0},
  {"Bs", PR_NECEXT, 0x00, 0xBF, 0x4C, 0, nullptr, 0},
  {"Cs", PR_NECEXT, 0x00, 0xBF, 0x47, 0, nullptr, 0},
  {"3digit", PR_NECEXT, 0x00, 0xBF, 0x0A, 0, nullptr, 0},
  {"1", PR_NECEXT, 0x00, 0xBF, 0x01, 0, nullptr, 0},
  {"2", PR_NECEXT, 0x00, 0xBF, 0x02, 0, nullptr, 0},
  {"3", PR_NECEXT, 0x00, 0xBF, 0x03, 0, nullptr, 0},
  {"4", PR_NECEXT, 0x00, 0xBF, 0x04, 0, nullptr, 0},
  {"5", PR_NECEXT, 0x00, 0xBF, 0x05, 0, nullptr, 0},
  {"6", PR_NECEXT, 0x00, 0xBF, 0x06, 0, nullptr, 0},
  {"7", PR_NECEXT, 0x00, 0xBF, 0x07, 0, nullptr, 0},
  {"8", PR_NECEXT, 0x00, 0xBF, 0x08, 0, nullptr, 0},
  {"9", PR_NECEXT, 0x00, 0xBF, 0x09, 0, nullptr, 0},
  {"10", PR_NECEXT, 0x00, 0xBF, 0x00, 0, nullptr, 0},
  {"11", PR_NECEXT, 0x00, 0xBF, 0x0B, 0, nullptr, 0},
  {"12", PR_NECEXT, 0x00, 0xBF, 0x1C, 0, nullptr, 0},
  {"Display_info", PR_NECEXT, 0x00, 0xBF, 0x0C, 0, nullptr, 0},
  {"Mute", PR_NECEXT, 0x00, 0xBF, 0x0E, 0, nullptr, 0},
  {"D_data", PR_NECEXT, 0x00, 0xBF, 0x1F, 0, nullptr, 0},
  {"Vol_up", PR_NECEXT, 0x00, 0xBF, 0x44, 0, nullptr, 0},
  {"Vol_dn", PR_NECEXT, 0x00, 0xBF, 0x43, 0, nullptr, 0},
  {"Chanel_up", PR_NECEXT, 0x00, 0xBF, 0x4A, 0, nullptr, 0},
  {"Chanel_down", PR_NECEXT, 0x00, 0xBF, 0x4B, 0, nullptr, 0},
  {"Option", PR_NECEXT, 0x00, 0xBF, 0x14, 0, nullptr, 0},
  {"Guide", PR_NECEXT, 0x00, 0xBF, 0x1D, 0, nullptr, 0},
  {"Menu", PR_NECEXT, 0x00, 0xBF, 0x4F, 0, nullptr, 0},
  {"Back", PR_NECEXT, 0x00, 0xBF, 0x48, 0, nullptr, 0},
  {"Ok", PR_NECEXT, 0x00, 0xBF, 0x15, 0, nullptr, 0},
  {"Up", PR_NECEXT, 0x00, 0xBF, 0x16, 0, nullptr, 0},
  {"Down", PR_NECEXT, 0x00, 0xBF, 0x17, 0, nullptr, 0},
  {"Left", PR_NECEXT, 0x00, 0xBF, 0x19, 0, nullptr, 0},
  {"Right", PR_NECEXT, 0x00, 0xBF, 0x18, 0, nullptr, 0},
  {"Blue", PR_NECEXT, 0x00, 0xBF, 0x55, 0, nullptr, 0},
  {"Red", PR_NECEXT, 0x00, 0xBF, 0x52, 0, nullptr, 0},
  {"Green", PR_NECEXT, 0x00, 0xBF, 0x53, 0, nullptr, 0},
  {"Yellow", PR_NECEXT, 0x00, 0xBF, 0x54, 0, nullptr, 0},
  {"Rec", PR_NECEXT, 0x00, 0xBF, 0x5E, 0, nullptr, 0},
  {"Stop", PR_NECEXT, 0x00, 0xBF, 0x5A, 0, nullptr, 0},
  {"Record_list", PR_NECEXT, 0x00, 0xBF, 0x5D, 0, nullptr, 0},
  {"Backward", PR_NECEXT, 0x00, 0xBF, 0x57, 0, nullptr, 0},
  {"Play", PR_NECEXT, 0x00, 0xBF, 0x1E, 0, nullptr, 0},
  {"Forward", PR_NECEXT, 0x00, 0xBF, 0x56, 0, nullptr, 0},
  {"Previous", PR_NECEXT, 0x00, 0xBF, 0x59, 0, nullptr, 0},
  {"Pause", PR_NECEXT, 0x00, 0xBF, 0x4E, 0, nullptr, 0},
  {"Next", PR_NECEXT, 0x00, 0xBF, 0x58, 0, nullptr, 0},
  {"Equipment_link", PR_NECEXT, 0x00, 0xBF, 0x5F, 0, nullptr, 0},
  {"Search", PR_NECEXT, 0x00, 0xBF, 0x41, 0, nullptr, 0},
  {"Multimedia", PR_NECEXT, 0x00, 0xBF, 0x4D, 0, nullptr, 0},
  {"Voice_switch", PR_NECEXT, 0x00, 0xBF, 0x11, 0, nullptr, 0},
};
static const BBtn b_29[] = {
  {"Power", PR_NECEXT, 0x00, 0xBF, 0x0D, 0, nullptr, 0},
  {"Input", PR_NECEXT, 0x00, 0xBF, 0x12, 0, nullptr, 0},
  {"Vol_up", PR_NECEXT, 0x00, 0xBF, 0x44, 0, nullptr, 0},
  {"Vol_dn", PR_NECEXT, 0x00, 0xBF, 0x43, 0, nullptr, 0},
  {"Ch_next", PR_NECEXT, 0x00, 0xBF, 0x4A, 0, nullptr, 0},
  {"Ch_prev", PR_NECEXT, 0x00, 0xBF, 0x4B, 0, nullptr, 0},
  {"Nav_up", PR_NECEXT, 0x00, 0xBF, 0x16, 0, nullptr, 0},
  {"Nav_dn", PR_NECEXT, 0x00, 0xBF, 0x17, 0, nullptr, 0},
  {"Nav_lft", PR_NECEXT, 0x00, 0xBF, 0x19, 0, nullptr, 0},
  {"Nav_rgt", PR_NECEXT, 0x00, 0xBF, 0x18, 0, nullptr, 0},
  {"Nav_ok", PR_NECEXT, 0x00, 0xBF, 0x15, 0, nullptr, 0},
  {"Nav_setting", PR_NECEXT, 0x00, 0xBF, 0x0F, 0, nullptr, 0},
  {"Nav_menu", PR_NECEXT, 0x00, 0xBF, 0x14, 0, nullptr, 0},
  {"Nav_back", PR_NECEXT, 0x00, 0xBF, 0x48, 0, nullptr, 0},
  {"Nav_exit", PR_NECEXT, 0x00, 0xBF, 0x5C, 0, nullptr, 0},
  {"Num_1", PR_NECEXT, 0x00, 0xBF, 0x01, 0, nullptr, 0},
  {"Num_2", PR_NECEXT, 0x00, 0xBF, 0x02, 0, nullptr, 0},
  {"Num_3", PR_NECEXT, 0x00, 0xBF, 0x03, 0, nullptr, 0},
  {"Num_4", PR_NECEXT, 0x00, 0xBF, 0x04, 0, nullptr, 0},
  {"Num_5", PR_NECEXT, 0x00, 0xBF, 0x05, 0, nullptr, 0},
  {"Num_6", PR_NECEXT, 0x00, 0xBF, 0x06, 0, nullptr, 0},
  {"Num_7", PR_NECEXT, 0x00, 0xBF, 0x07, 0, nullptr, 0},
  {"Num_8", PR_NECEXT, 0x00, 0xBF, 0x08, 0, nullptr, 0},
  {"Num_9", PR_NECEXT, 0x00, 0xBF, 0x09, 0, nullptr, 0},
  {"Num_0", PR_NECEXT, 0x00, 0xBF, 0x00, 0, nullptr, 0},
  {"Mute", PR_NECEXT, 0x00, 0xBF, 0x0E, 0, nullptr, 0},
  {"Home", PR_NECEXT, 0x00, 0xBF, 0x20, 0, nullptr, 0},
  {"Red_a", PR_NECEXT, 0x00, 0xBF, 0x52, 0, nullptr, 0},
  {"Green_b", PR_NECEXT, 0x00, 0xBF, 0x53, 0, nullptr, 0},
  {"Yellow_c", PR_NECEXT, 0x00, 0xBF, 0x54, 0, nullptr, 0},
  {"Blue_d", PR_NECEXT, 0x00, 0xBF, 0x55, 0, nullptr, 0},
  {"Guide", PR_NECEXT, 0x00, 0xBF, 0x3A, 0, nullptr, 0},
  {"Info", PR_NECEXT, 0x00, 0xBF, 0x0C, 0, nullptr, 0},
  {"Sport", PR_NECEXT, 0x00, 0xBF, 0xCF, 0, nullptr, 0},
  {"Pmode", PR_NECEXT, 0x00, 0xBF, 0x10, 0, nullptr, 0},
  {"Smode", PR_NECEXT, 0x00, 0xBF, 0x11, 0, nullptr, 0},
  {"Sleep", PR_NECEXT, 0x00, 0xBF, 0x1A, 0, nullptr, 0},
  {"Chlist", PR_NECEXT, 0x00, 0xBF, 0x21, 0, nullptr, 0},
  {"Add_rew", PR_NECEXT, 0x00, 0xBF, 0x58, 0, nullptr, 0},
  {"Add_play", PR_NECEXT, 0x00, 0xBF, 0xA8, 0, nullptr, 0},
  {"Add_ffd", PR_NECEXT, 0x00, 0xBF, 0x59, 0, nullptr, 0},
  {"Add_stop", PR_NECEXT, 0x00, 0xBF, 0x5A, 0, nullptr, 0},
  {"Add_pause", PR_NECEXT, 0x00, 0xBF, 0xA9, 0, nullptr, 0},
  {"Add_rec", PR_NECEXT, 0x00, 0xBF, 0x5E, 0, nullptr, 0},
  {"Subtitle", PR_NECEXT, 0x00, 0xBF, 0x1F, 0, nullptr, 0},
  {"Language", PR_NECEXT, 0x00, 0xBF, 0xBC, 0, nullptr, 0},
  {"Txt", PR_NECEXT, 0x00, 0xBF, 0x45, 0, nullptr, 0},
  {"Fn_menu", PR_NECEXT, 0x00, 0xBF, 0x5F, 0, nullptr, 0},
  {"Fn_youtube", PR_NECEXT, 0x00, 0xBF, 0xAA, 0, nullptr, 0},
  {"Fn_netflix", PR_NECEXT, 0x00, 0xBF, 0x47, 0, nullptr, 0},
  {"Fn_media", PR_NECEXT, 0x00, 0xBF, 0x33, 0, nullptr, 0},
};
static const BBtn b_30[] = {
  {"Power", PR_NECEXT, 0x00, 0xBF, 0x0D, 0, nullptr, 0},
  {"Input", PR_NECEXT, 0x00, 0xBF, 0x12, 0, nullptr, 0},
  {"Up", PR_NECEXT, 0x00, 0xBF, 0x16, 0, nullptr, 0},
  {"Down", PR_NECEXT, 0x00, 0xBF, 0x17, 0, nullptr, 0},
  {"Left", PR_NECEXT, 0x00, 0xBF, 0x19, 0, nullptr, 0},
  {"Right", PR_NECEXT, 0x00, 0xBF, 0x18, 0, nullptr, 0},
  {"Ok", PR_NECEXT, 0x00, 0xBF, 0x15, 0, nullptr, 0},
  {"Vol_up", PR_NECEXT, 0x00, 0xBF, 0x44, 0, nullptr, 0},
  {"Vol_dn", PR_NECEXT, 0x00, 0xBF, 0x43, 0, nullptr, 0},
  {"Ch_next", PR_NECEXT, 0x00, 0xBF, 0x4A, 0, nullptr, 0},
  {"Ch_prev", PR_NECEXT, 0x00, 0xBF, 0x4B, 0, nullptr, 0},
  {"Home", PR_NECEXT, 0x00, 0xBF, 0x20, 0, nullptr, 0},
  {"Mute", PR_NECEXT, 0x00, 0xBF, 0x0E, 0, nullptr, 0},
  {"Back", PR_NECEXT, 0x00, 0xBF, 0x48, 0, nullptr, 0},
  {"Exit", PR_NECEXT, 0x00, 0xBF, 0x5C, 0, nullptr, 0},
  {"Pause/play", PR_NECEXT, 0x00, 0xBF, 0xCA, 0, nullptr, 0},
  {"Menu", PR_NECEXT, 0x00, 0xBF, 0x14, 0, nullptr, 0},
  {"Subtitles", PR_NECEXT, 0x00, 0xBF, 0x1F, 0, nullptr, 0},
  {"Text", PR_NECEXT, 0x00, 0xBF, 0x45, 0, nullptr, 0},
  {"Info", PR_NECEXT, 0x00, 0xBF, 0x0C, 0, nullptr, 0},
  {"1", PR_NECEXT, 0x00, 0xBF, 0x01, 0, nullptr, 0},
  {"2", PR_NECEXT, 0x00, 0xBF, 0x02, 0, nullptr, 0},
  {"3", PR_NECEXT, 0x00, 0xBF, 0x03, 0, nullptr, 0},
  {"4", PR_NECEXT, 0x00, 0xBF, 0x04, 0, nullptr, 0},
  {"5", PR_NECEXT, 0x00, 0xBF, 0x05, 0, nullptr, 0},
  {"6", PR_NECEXT, 0x00, 0xBF, 0x06, 0, nullptr, 0},
  {"7", PR_NECEXT, 0x00, 0xBF, 0x07, 0, nullptr, 0},
  {"8", PR_NECEXT, 0x00, 0xBF, 0x08, 0, nullptr, 0},
  {"9", PR_NECEXT, 0x00, 0xBF, 0x09, 0, nullptr, 0},
  {"0", PR_NECEXT, 0x00, 0xBF, 0x00, 0, nullptr, 0},
  {"Guide", PR_NECEXT, 0x00, 0xBF, 0x3A, 0, nullptr, 0},
  {"Chlist", PR_NECEXT, 0x00, 0xBF, 0x21, 0, nullptr, 0},
  {"Red", PR_NECEXT, 0x00, 0xBF, 0x52, 0, nullptr, 0},
  {"Green", PR_NECEXT, 0x00, 0xBF, 0x53, 0, nullptr, 0},
  {"Yellow", PR_NECEXT, 0x00, 0xBF, 0x54, 0, nullptr, 0},
  {"Blue", PR_NECEXT, 0x00, 0xBF, 0x55, 0, nullptr, 0},
  {"Disney+", PR_NECEXT, 0x00, 0xBF, 0x6A, 0, nullptr, 0},
  {"Youtube", PR_NECEXT, 0x00, 0xBF, 0xAA, 0, nullptr, 0},
  {"Amazonprime", PR_NECEXT, 0x00, 0xBF, 0xBB, 0, nullptr, 0},
  {"Stan", PR_NECEXT, 0x00, 0xBF, 0xB0, 0, nullptr, 0},
  {"Kayo", PR_NECEXT, 0x00, 0xBF, 0xB8, 0, nullptr, 0},
  {"Deezer", PR_NECEXT, 0x00, 0xBF, 0x66, 0, nullptr, 0},
  {"Nba", PR_NECEXT, 0x00, 0xBA, 0x01, 0, nullptr, 0},
  {"Abc_iview", PR_NECEXT, 0x00, 0xBF, 0xB1, 0, nullptr, 0},
  {"Kid", PR_NECEXT, 0x00, 0xBA, 0x25, 0, nullptr, 0},
  {"Netflix", PR_NECEXT, 0x00, 0xBF, 0x2D, 0, nullptr, 0},
  {"Vidaa_tv", PR_NECEXT, 0x00, 0xBA, 0x23, 0, nullptr, 0},
  {"Binge", PR_NECEXT, 0x00, 0xBA, 0x31, 0, nullptr, 0},
};
static const BRemote rem_31[] = {
  {"EN3AH39H", b_28, 51},
  {"EN3Y39H", b_29, 51},
  {"32A4HAU", b_30, 48},
};
static const BBtn b_32[] = {
  {"Power", PR_NECEXT, 0x80, 0xFF, 0x0A, 0, nullptr, 0},
  {"Up", PR_NECEXT, 0x80, 0xFF, 0x00, 0, nullptr, 0},
  {"Down", PR_NECEXT, 0x80, 0xFF, 0x01, 0, nullptr, 0},
  {"Left", PR_NECEXT, 0x80, 0xFF, 0x03, 0, nullptr, 0},
  {"Right", PR_NECEXT, 0x80, 0xFF, 0x02, 0, nullptr, 0},
  {"Ok", PR_NECEXT, 0x80, 0xFF, 0x1F, 0, nullptr, 0},
  {"Back", PR_NECEXT, 0x80, 0xFF, 0x40, 0, nullptr, 0},
  {"Home", PR_NECEXT, 0x80, 0xFF, 0x1C, 0, nullptr, 0},
  {"Menu", PR_NECEXT, 0x80, 0xFF, 0x1A, 0, nullptr, 0},
  {"Info", PR_NECEXT, 0x80, 0xFF, 0x0B, 0, nullptr, 0},
  {"Vol_up", PR_NECEXT, 0x80, 0xFF, 0x44, 0, nullptr, 0},
  {"Vol_dn", PR_NECEXT, 0x80, 0xFF, 0x45, 0, nullptr, 0},
  {"Mute", PR_NECEXT, 0x80, 0xFF, 0x0D, 0, nullptr, 0},
  {"Ch_next", PR_NECEXT, 0x80, 0xFF, 0x4B, 0, nullptr, 0},
  {"Ch_prev", PR_NECEXT, 0x80, 0xFF, 0x4C, 0, nullptr, 0},
  {"Play_pause", PR_NECEXT, 0x80, 0xFF, 0x46, 0, nullptr, 0},
  {"Stop", PR_NECEXT, 0x80, 0xFF, 0x41, 0, nullptr, 0},
  {"Rewind", PR_NECEXT, 0x80, 0xFF, 0x5E, 0, nullptr, 0},
  {"Forward", PR_NECEXT, 0x80, 0xFF, 0x4A, 0, nullptr, 0},
  {"Guide", PR_NECEXT, 0x80, 0xFF, 0x1E, 0, nullptr, 0},
  {"Audio", PR_NECEXT, 0x80, 0xFF, 0x5F, 0, nullptr, 0},
  {"Favorite", PR_NECEXT, 0x80, 0xFF, 0x1B, 0, nullptr, 0},
  {"1", PR_NECEXT, 0x80, 0xFF, 0x11, 0, nullptr, 0},
  {"2", PR_NECEXT, 0x80, 0xFF, 0x12, 0, nullptr, 0},
  {"3", PR_NECEXT, 0x80, 0xFF, 0x13, 0, nullptr, 0},
  {"4", PR_NECEXT, 0x80, 0xFF, 0x14, 0, nullptr, 0},
  {"5", PR_NECEXT, 0x80, 0xFF, 0x15, 0, nullptr, 0},
  {"6", PR_NECEXT, 0x80, 0xFF, 0x16, 0, nullptr, 0},
  {"7", PR_NECEXT, 0x80, 0xFF, 0x17, 0, nullptr, 0},
  {"8", PR_NECEXT, 0x80, 0xFF, 0x18, 0, nullptr, 0},
  {"9", PR_NECEXT, 0x80, 0xFF, 0x19, 0, nullptr, 0},
  {"0", PR_NECEXT, 0x80, 0xFF, 0x10, 0, nullptr, 0},
};
static const BRemote rem_33[] = {
  {"HTV 8", b_32, 32},
};
static const BBrand brand_34[] = {
  {"Samsung", rem_5, 5},
  {"LG", rem_11, 5},
  {"Philips", rem_17, 5},
  {"TCL", rem_23, 5},
  {"Sony", rem_27, 3},
  {"Hisense", rem_31, 3},
  {"HTV", rem_33, 1},
};
static const BBtn b_35[] = {
  {"POWER", PR_NECEXT, 0x10, 0xE7, 0x00, 0, nullptr, 0},
  {"Timer", PR_NECEXT, 0x10, 0xE7, 0x01, 0, nullptr, 0},
  {"C_F", PR_NECEXT, 0x10, 0xE7, 0x04, 0, nullptr, 0},
  {"Fan", PR_NECEXT, 0x10, 0xE7, 0x08, 0, nullptr, 0},
  {"Sleep", PR_NECEXT, 0x10, 0xE7, 0x06, 0, nullptr, 0},
  {"Continuous", PR_NECEXT, 0x10, 0xE7, 0x0A, 0, nullptr, 0},
  {"Cool", PR_NECEXT, 0x10, 0xE7, 0x0C, 0, nullptr, 0},
  {"Dry", PR_NECEXT, 0x10, 0xE7, 0x14, 0, nullptr, 0},
  {"TEMP+", PR_NECEXT, 0x10, 0xE7, 0x15, 0, nullptr, 0},
  {"TEMP-", PR_NECEXT, 0x10, 0xE7, 0x0D, 0, nullptr, 0},
  {"High", PR_NECEXT, 0x10, 0xE7, 0x16, 0, nullptr, 0},
  {"Low", PR_NECEXT, 0x10, 0xE7, 0x0E, 0, nullptr, 0},
};
static const BRemote rem_36[] = {
  {"LP1015WNR", b_35, 12},
};
static const uint16_t b_37_r0[] = {619,17787,3032,8883,558,461,532,1453,534,459,535,458,535,458,534,459,533,458,535,457,535,457,535,1449,536,457,535,458,534,1452,559,434,558,461,530,1456,528,1483,503,1483,503,1482,504,1482,504,489,504,489,504,489,504,489,504,465,528,464,528,464,528,464,529,516,476,516,500,492,502,491,502,490,503,490,503,489,504,489,503,489,504,489,503,489,503,489,504,489,504,489,503,489,504,465,528,465,528,465,527,516,476,516,501,492,501,491,502,491,502,490,503,1483,503,1483,503,1482,503,1483,503,2986,2976,8940,503,1459,527,490,503,489,503,516,476,517,500,492,501,491,502,490,503,490,503,1483,503,490,502,490,503,1483,503,490,503,1483,503,1483,503,1483,503,1510,475,1510,501,1485,501,491,502,490,503,490,503,490,502,490,503,490,503,490,503,490,503,490,502,490,503,490,503,490,502,490,502,517,475,517,500,492,501,492,501,492,501,491,502,491,502,490,503,490,502,490,503,490,503,490,502,490,503,490,503,490,502,490,502,490,503,490,502,490,503,517,500,493,500,492,501,492,502,2959,3003,8941,502,1484,502,491,501,491,502,491,501,491,501,491,502,490,503,490,502,490,503,1484,502,517,475,518,499,493,500,1486,500,1485,501,1484,502,491,502,1484,502,1484,502,1484,502,1484,502,1484,501,491,502,1511,500,1486,500,492,501,492,501,491,502,1484,502,1484,502,1484,502,491,502,491,501,491,502,491,501,491,502,1484,502,518,474,519,499,1487,499,1486,500,492,501,492,501,492,500,1485,501,492,501,492,501,491,501,491,502,491,501,491,502,491,501,1512,473,1512,499,1487,500,1486,500};
static const uint16_t b_37_r1[] = {645,17766,3059,8884,533,461,557,1427,560,435,584,433,534,458,534,458,534,458,588,404,587,405,586,1399,586,407,584,408,558,1429,555,1457,502,491,525,1460,528,1458,554,1431,554,1431,555,1431,554,438,555,438,554,439,553,440,553,464,528,464,528,464,529,465,528,465,526,467,526,467,527,465,553,439,554,439,554,438,554,439,554,439,553,439,554,439,553,439,553,439,554,440,552,464,528,464,528,465,528,466,527,466,501,492,525,468,526,466,527,466,553,439,554,439,553,440,552,1433,553,1433,553,2936,3024,8893,552,1458,527,465,528,465,527,467,526,467,500,493,524,468,526,467,526,467,552,1434,552,441,552,441,552,1435,550,465,528,1458,527,1458,528,1459,527,1485,501,1485,500,1486,501,491,527,466,528,465,528,465,527,465,528,465,527,465,528,465,528,465,527,465,528,465,527,466,527,466,527,492,500,492,501,492,500,493,500,493,500,492,526,466,527,465,527,465,527,465,527,466,527,466,527,466,527,465,527,466,526,466,527,466,526,467,526,493,499,493,474,518,499,494,500,493,526,2936,3025,8918,526,1459,527,466,527,466,527,466,526,466,527,466,526,467,526,467,525,467,526,1460,525,493,499,493,498,495,498,495,499,493,500,493,525,1460,527,1460,525,1460,526,1460,525,1460,526,1460,526,468,525,1487,499,1487,497,495,498,495,499,493,500,1486,525,1460,525,1460,525,467,525,467,526,467,525,467,526,468,524,1462,524,468,524,494,498,1488,497,1488,499,494,499,493,525,468,525,1461,524,468,525,468,524,468,525,468,525,468,524,468,525,469,524,494,498,494,499,1488,473,1514,524};
static const uint16_t b_37_r2[] = {620,17864,3008,8909,535,458,535,1450,536,458,535,458,535,458,534,458,534,458,534,458,534,484,508,1476,509,485,507,485,532,1454,533,461,556,437,554,1433,553,1457,529,1457,529,1457,529,1433,553,440,552,491,501,491,476,516,501,492,501,491,503,490,503,489,529,464,529,464,528,464,528,464,529,464,529,464,528,464,529,464,528,464,529,464,529,464,528,465,528,491,476,516,501,492,501,491,503,490,503,489,530,464,528,463,529,464,529,464,528,464,529,464,529,1457,529,1457,529,1458,528,1484,529,2933,3003,8941,501,1485,502,490,527,465,529,464,528,464,529,464,528,464,529,464,529,464,529,1458,528,465,528,464,528,1458,528,1484,476,1510,501,1485,502,490,528,1458,528,1458,528,1458,528,1457,529,1458,528,464,529,1458,528,1484,501,491,476,517,500,492,501,1485,502,1483,529,1457,528,465,527,465,528,465,528,465,527,465,528,465,527,465,528,465,527,1458,528,1485,500,493,500,492,501,491,502,491,527,465,529,465,527,1458,528,465,528,465,527,465,528,465,527,1458,528,1458,528,1485,500,1485,528};
static const uint16_t b_37_r3[] = {619,17878,3008,8908,535,458,535,1451,534,459,534,459,533,459,534,485,507,485,587,404,532,460,533,1451,536,456,537,456,535,1450,561,432,560,433,533,1454,531,1455,530,1456,529,1457,529,1508,501,491,502,491,502,490,503,490,503,489,504,488,504,489,503,489,504,489,504,489,504,488,504,489,504,464,529,464,529,464,529,464,528,516,476,516,477,516,502,491,502,490,503,490,503,489,504,489,503,489,504,489,504,489,504,489,503,489,504,489,503,489,504,464,529,1458,528,1509,476,1509,501,1484,504,2934,3028,8939,504,1482,504,489,503,489,504,489,504,489,503,489,504,489,503,489,504,465,528,1459,527,516,476,516,501,1485,502,1484,503,1483,503,1482,503,489,504,1482,504,1483,503,1482,503,1459,527,1459,527,516,476,1509,501,1485,501,491,502,490,503,489,504,1482,503,1482,503,1483,503,489,504,489,503,489,504,489,503,489,503,490,503,516,477,516,501,1485,502,1484,502,490,503,490,503,490,503,490,503,1483,503,490,503,490,503,489,503,490,503,490,502,490,503,1510,475,1510,500,1485,502,1484,503};
static const uint16_t b_37_r4[] = {619,17852,3007,8909,535,458,534,1451,535,459,534,485,507,485,507,485,507,485,532,460,534,458,535,1450,535,458,560,432,534,1452,533,460,532,462,554,1432,553,1433,553,1434,552,1484,477,1509,502,491,502,490,503,489,529,464,528,465,527,465,528,464,528,464,528,465,528,464,529,465,528,441,552,441,551,465,527,491,502,491,477,516,501,492,501,491,503,490,503,489,529,464,527,465,528,465,528,465,527,465,528,465,528,465,528,464,528,465,528,465,528,465,528,1485,476,1509,501,1485,502,1483,528,2935,3026,8917,527,1458,527,465,528,465,528,465,527,465,528,465,528,465,527,465,528,465,528,1485,476,517,500,492,501,1484,503,1483,529,464,528,1459,527,465,528,1458,528,1459,527,1458,528,1459,526,1486,500,492,500,1486,501,1484,503,490,528,465,528,465,527,1459,527,1459,526,1459,527,465,528,465,527,466,527,466,527,466,526,492,501,492,500,493,500,1485,502,1484,528,1458,527,1459,527,1459,527,1459,527,1459,527,466,527,466,527,466,527,492,500,493,499,493,500,1485,501,1485,527,1459,526,1459,527};
static const uint16_t b_37_r5[] = {619,17846,3032,8910,535,458,534,1450,536,459,534,459,534,458,534,458,534,458,534,459,533,459,533,1477,508,485,507,486,506,1480,530,463,530,463,555,1431,554,1432,553,1432,554,1432,554,1433,552,440,552,441,552,464,528,466,527,466,524,469,525,468,525,466,528,465,553,440,553,439,553,439,553,439,554,439,554,439,554,439,553,440,552,464,528,464,529,464,528,464,529,467,526,467,524,469,524,469,525,467,526,490,528,464,529,464,528,464,529,441,552,464,528,1457,529,1457,529,1458,528,1458,528,2960,3000,8944,475,1510,500,492,501,491,502,491,528,465,528,464,528,465,527,465,528,465,527,1458,528,465,528,465,527,465,528,1458,528,1485,500,1485,500,493,500,1485,502,1484,528,1458,527,1458,528,1458,528,465,528,1458,528,1458,527,465,527,466,526,492,501,1485,500,1485,502,1484,528,465,528,465,527,465,528,465,528,465,527,465,528,1458,527,465,528,1459,527,1485,500,492,500,492,500,493,500,1485,502,491,528,465,528,465,527,466,527,465,528,465,527,465,528,1459,527,1459,527,1459,527,1486,526};
static const uint16_t b_37_r6[] = {646,17838,3060,8912,507,485,507,1478,533,460,534,459,535,459,533,458,534,458,534,458,534,457,535,1450,535,458,560,433,533,1453,532,461,531,490,526,1485,500,1485,502,1484,503,1483,527,1458,528,465,527,465,528,465,528,465,528,465,528,441,551,441,552,441,552,492,500,492,501,492,500,492,501,492,501,491,502,490,528,465,527,465,527,465,527,465,528,465,527,465,528,465,528,465,527,465,528,441,552,465,528,465,527,492,501,492,500,492,501,492,501,491,503,1483,528,1458,527,1458,528,1459,527,2962,2999,8918,527,1458,528,465,527,466,527,492,500,492,476,517,500,492,501,492,501,491,502,1483,529,464,527,466,526,465,528,1459,526,1459,527,1459,527,466,526,1459,527,1486,475,1510,501,1485,502,1484,527,466,526,1459,527,1459,527,466,502,490,527,466,526,1460,527,1459,526,1486,500,493,499,493,500,492,502,492,501,491,502,1484,526,466,526,466,526,1459,527,1460,526,466,526,466,527,466,526,466,526,466,527,1486,499,493,500,493,500,492,501,491,502,491,527,1459,502,1484,526,1460,501,1484,526};
static const uint16_t b_37_r7[] = {618,17670,3058,8911,507,486,532,1453,534,459,534,459,533,459,533,459,533,458,534,458,534,458,534,1450,535,459,558,434,558,1428,557,462,530,464,502,1484,526,1460,552,1434,554,1432,553,1432,554,439,553,439,554,439,554,440,552,441,552,441,551,464,529,466,526,467,525,467,524,468,525,467,527,466,527,466,552,440,553,440,553,440,553,440,553,440,553,440,553,440,553,464,528,464,529,464,529,464,528,465,527,468,525,491,500,493,500,492,502,491,527,442,552,1434,551,1458,528,1458,528,1458,528,2961,3000,8917,528,1458,527,465,528,491,501,492,475,517,500,492,501,492,502,491,527,466,528,1458,527,465,528,465,528,1458,528,465,527,465,527,1458,528,465,527,1485,500,1485,500,1486,501,1485,502,1484,528,465,527,1458,528,1458,528,1458,528,1458,528,465,527,1459,527,1485,500,1485,500,493,500,492,501,491,502,491,527,465,527,466,527,1459,526,465,528,1458,527,1459,527,1459,527,1459,527,1485,475,1511,500,493,500,492,501,491,527,465,528,465,527,466,526,466,526,1459,527,1459,527,1459,526,1459,527};
static const uint16_t b_37_r8[] = {619,16052,3007,8909,535,458,535,1450,536,458,535,458,535,458,534,459,533,459,533,484,508,484,508,1477,508,485,532,460,533,1453,558,435,556,437,555,1432,553,1434,552,1434,552,1433,553,1435,551,441,552,491,501,491,501,492,501,491,503,490,503,489,529,464,529,463,529,464,529,464,529,464,529,464,528,464,529,464,529,464,529,464,528,465,528,491,502,491,501,491,501,492,501,491,503,490,503,489,529,464,528,464,529,464,529,464,528,464,529,464,529,464,529,1458,528,1458,528,1485,501,1484,529,2933,3028,8916,502,1484,527,465,529,464,528,465,527,465,528,465,528,464,528,465,528,465,527,1458,528,465,528,465,528,465,528,491,501,1485,501,1485,502,491,502,1483,529,1457,528,1458,528,465,528,465,528,1458,528,1458,528,1458,528,1485,498,1487,501,1485,502,1484,528,1457,528,1458,528,465,527,465,528,465,528,465,528,465,528,465,527,1459,527,465,528,1485,500,1486,501,492,502,491,527,466,528,1458,527,465,528,465,527,465,528,465,528,465,527,465,527,465,528,1459,527,1485,501,1485,500,1486,527};
static const uint16_t b_37_r9[] = {644,17844,3032,8884,561,458,534,1450,535,458,535,459,533,458,534,458,534,458,534,458,534,458,534,1477,508,485,507,486,530,1456,531,462,530,488,529,1457,504,1482,504,1482,504,1482,504,1458,528,465,528,465,527,516,476,516,501,492,501,491,502,491,502,490,503,490,503,489,503,489,504,489,503,489,504,489,504,489,503,489,504,489,504,465,528,465,528,466,527,516,476,516,500,492,501,492,501,491,503,490,503,490,528,465,503,489,504,489,504,489,504,489,504,1482,504,1482,504,1459,527,1509,503,2959,3002,8942,500,1485,502,491,503,490,528,465,528,464,504,489,528,465,504,489,528,465,527,1458,527,465,504,489,504,489,527,466,527,1485,501,1486,500,492,502,1484,503,1483,528,1458,527,465,527,466,526,1459,527,1459,503,1483,503,1483,527,1486,475,1510,501,1485,502,1484,526,1459,527,465,503,490,527,465,503,490,503,490,503,490,502,1483,503,490,503,1484,526,1486,500,492,501,492,501,491,502,1484,528,465,502,490,526,466,503,490,503,490,502,490,503,490,527,1459,502,1483,503,1510,500,1486,502};
static const uint16_t b_37_r10[] = {645,17873,3032,8912,507,486,507,1478,533,460,534,459,534,458,534,458,534,458,534,458,534,457,535,1449,536,458,560,433,558,1427,532,461,531,489,503,1508,501,1485,502,1484,503,1483,528,1457,504,489,504,489,504,489,527,465,504,489,504,466,527,465,528,465,527,465,551,493,500,492,500,492,502,491,502,491,502,490,503,489,529,464,528,465,503,489,504,489,503,489,504,489,528,465,503,489,504,465,528,466,527,489,504,516,476,516,501,492,501,491,502,491,502,1483,528,1458,526,1459,503,1483,503,2986,2975,8942,526,1459,525,467,503,490,527,466,502,517,500,493,500,492,501,492,501,491,502,1484,528,465,526,466,503,1483,527,1459,527,466,503,1483,502,490,503,1483,527,1486,476,1510,500,492,501,491,502,1484,528,1458,527,1459,503,1483,503,1483,503,1483,503,1483,526,1460,526,1486,500,493,500,492,501,492,501,491,526,466,528,465,502,1484,526,466,503,1484,501,1484,526,466,527,1459,526,466,503,1510,475,517,500,493,500,492,501,492,501,491,526,466,527,466,525,1460,526,1460,501,1484,502,1484,526};
static const uint16_t b_37_r11[] = {646,17838,3113,8831,532,462,556,1427,614,381,614,404,588,404,533,460,532,460,588,403,589,403,589,1397,587,405,586,406,585,1402,582,437,527,465,526,1461,526,1459,553,1433,554,1432,553,1432,554,439,554,439,553,439,554,439,554,440,552,465,528,465,527,466,527,466,501,492,525,468,526,467,526,466,553,440,553,439,553,439,554,440,553,439,554,439,553,440,553,440,553,440,552,440,553,465,527,465,528,465,528,467,526,467,524,468,525,467,527,467,552,440,553,1433,553,1433,553,1433,553,1433,553,2936,3024,8894,551,1459,526,466,527,468,525,467,524,469,524,468,525,468,551,442,551,441,552,1434,551,441,552,441,552,1434,552,1435,551,466,526,1459,527,466,527,1462,524,1462,523,1463,549,443,550,442,551,1459,527,1459,527,1459,527,1459,527,1459,527,1460,526,1460,526,1486,499,1487,500,493,500,493,525,467,526,466,527,466,527,466,526,1460,526,466,526,1460,526,1460,526,466,526,467,526,1487,499,1487,498,494,500,493,525,467,526,467,526,466,526,467,526,467,526,1460,526,1460,526,1460,526,1460,526};
static const uint16_t b_37_r12[] = {648,17862,3036,8909,535,458,534,1451,535,458,534,458,535,458,534,459,533,459,533,458,534,483,509,1476,509,484,531,461,533,1453,533,460,532,461,531,1481,504,1482,504,1482,504,1459,527,1458,528,465,528,516,476,516,477,516,501,492,502,491,502,490,503,489,529,464,504,489,504,489,504,489,504,489,503,489,504,489,504,489,504,465,528,465,527,465,528,516,476,516,477,516,501,492,501,491,503,490,503,490,527,465,503,489,504,489,504,489,504,489,504,489,503,1482,504,1459,527,1483,502,1510,502,2959,3002,8942,501,1485,502,490,503,490,527,465,503,490,502,490,502,490,503,490,502,490,502,1483,503,490,502,490,503,490,503,1510,476,517,500,1486,501,492,501,1484,526,1459,503,1483,503,490,502,490,503,1483,503,1483,503,1483,503,1510,475,1510,500,1486,501,1485,502,1483,528,1458,502,490,503,490,503,490,503,490,503,490,503,490,502,1483,503,490,503,1510,476,1510,500,1486,501,491,502,1484,527,1458,502,490,503,490,502,490,502,491,502,490,503,490,503,490,502,1484,502,1511,474,1511,500,1486,502};
static const uint16_t b_37_r13[] = {698,17823,3010,8907,535,458,535,1451,535,458,535,458,535,458,564,429,590,402,590,402,562,455,536,1449,509,483,534,459,534,1452,560,432,560,433,558,1429,556,1430,555,1431,554,1431,555,1431,554,438,555,490,502,466,526,467,526,466,527,490,503,489,504,489,529,463,530,463,530,463,529,463,530,463,530,463,529,439,554,438,555,438,555,438,554,439,554,439,553,490,502,491,502,491,502,490,503,490,503,489,529,464,529,463,529,464,529,464,529,463,529,464,529,1432,554,1432,554,1433,553,1483,529,2934,3004,8939,502,1484,503,490,503,489,529,464,528,464,529,464,529,464,528,464,529,464,529,1433,553,440,553,440,552,1457,528,491,502,491,501,1485,502,490,503,1483,528,1458,503,1482,528,464,529,464,528,1458,528,1435,551,1458,528,1458,528,1484,501,1485,502,1484,503,1483,528,1457,528,464,529,464,528,465,528,464,529,464,528,465,503,1482,528,465,528,1484,477,1510,500,1485,502,1483,503,1482,528,1458,503,489,504,489,503,489,528,465,503,489,528,465,503,489,528,1458,503,1509,501,1485,501,1484,504};
static const uint16_t b_37_r14[] = {649,17343,3009,8909,534,458,535,1452,534,459,534,485,508,485,508,485,562,431,589,402,533,458,535,1450,536,456,536,456,536,1449,561,432,561,432,560,1427,558,1429,556,1430,555,1483,477,1508,503,490,503,489,504,489,529,463,530,462,530,463,530,463,530,463,530,463,530,463,530,438,555,438,555,438,555,438,555,438,554,490,477,515,502,491,502,490,503,490,503,489,529,463,530,463,529,463,529,463,530,463,530,463,530,463,530,438,555,438,554,438,555,438,555,1483,502,1483,502,1484,503,1483,529,2908,3055,8913,529,1456,530,463,530,463,530,463,530,463,530,438,555,438,555,438,555,438,555,1483,477,516,501,491,502,1484,503,490,504,1482,529,1457,529,463,530,1457,529,1456,530,1432,554,438,555,438,555,1483,502,1484,501,1484,503,1483,529,1457,529,1457,529,464,529,1457,529,1457,529,463,530,439,554,439,554,439,554,490,502,491,476,1509,502,491,502,1483,529,1457,529,464,528,464,529,464,529,1457,528,464,529,464,529,464,529,440,552,440,553,491,501,491,501,1484,502,1484,503,1483,528,1458,528};
static const uint16_t b_37_r15[] = {648,17302,3064,8880,560,434,560,1426,561,432,561,431,590,429,564,428,590,402,590,402,564,428,564,1421,564,429,563,430,561,1424,560,458,533,460,505,1481,530,1457,555,1431,556,1430,555,1430,556,437,556,437,556,437,555,437,556,438,555,438,555,439,554,464,528,464,503,490,527,465,529,464,529,464,553,439,555,437,555,437,556,437,556,437,556,437,556,437,555,438,555,438,554,438,554,439,554,463,529,463,530,464,528,464,527,466,528,465,528,464,554,439,555,1431,555,1431,555,1431,555,1431,554,2934,3030,8889,553,1457,528,464,529,465,528,465,526,467,527,466,527,465,528,464,529,464,554,1431,554,439,554,439,554,438,555,438,554,1432,554,1457,529,464,528,1457,529,1459,526,1460,527,465,528,465,528,1458,554,1431,554,1432,554,1432,554,1433,553,1457,529,1458,528,1460,526,1459,526,467,526,466,527,465,528,465,553,439,553,439,554,1433,553,440,552,1433,553,1458,528,464,529,465,528,465,528,1484,501,468,524,492,501,491,503,466,527,490,528,441,552,464,528,1458,528,1458,528,1458,528,1458,527};
static const uint16_t b_37_r16[] = {676,17279,3092,8852,587,1398,590,404,589,403,590,429,564,428,563,429,563,429,564,428,565,428,564,1421,564,430,562,431,560,1425,560,1453,531,1454,529,465,528,1457,556,1430,557,1429,556,1430,556,436,556,436,557,436,556,437,556,437,556,438,554,462,531,463,529,464,529,464,527,465,528,465,554,438,555,437,556,437,556,437,556,437,556,437,556,437,555,437,556,437,556,437,555,438,555,439,553,1456,530,1457,527,1459,527,465,554,1432,555,1431,555,437,555,437,556,437,556,437,555,437,555,1431,555};
static const uint16_t b_37_r17[] = {644,17300,3066,8880,560,434,559,1425,562,432,561,432,589,429,591,402,590,402,590,402,564,428,564,1422,563,430,562,431,560,1425,559,459,532,461,528,1458,529,1457,530,1457,555,1430,555,1430,556,437,556,437,556,437,556,438,554,438,554,439,554,439,553,440,553,464,528,464,528,465,528,465,528,464,529,463,555,438,555,437,555,438,555,437,556,437,556,437,556,438,555,438,554,439,554,439,553,440,553,464,528,465,528,465,527,465,528,465,528,464,529,464,554,1431,555,1431,555,1431,555,1431,555,2934,3030,8889,553,1457,528,464,529,465,527,465,526,467,527,465,528,465,528,464,529,464,555,1432,553,439,554,438,555,439,553,1432,554,1433,553,1457,529,464,529,1459,526,1459,526,1460,527,465,528,464,554,1433,553,1433,553,1433,553,439,554,439,554,440,552,1458,528,1458,528,1460,526,467,525,467,526,467,526,490,503,466,552,440,553,1433,552,441,552,1434,552,1435,550,441,552,465,527,465,528,1459,526,492,501,492,500,492,501,492,501,491,502,1484,528,465,527,1458,503,1483,527,1459,527,1459,503};
static const uint16_t b_37_r18[] = {645,17302,3062,8909,508,485,532,1454,533,459,534,459,534,459,562,430,563,429,591,401,590,402,562,1422,537,457,535,457,561,1425,560,433,559,460,531,1455,527,1459,528,1483,504,1482,530,1456,529,463,530,463,529,463,530,463,530,439,554,438,554,439,554,439,553,439,554,490,502,491,501,492,501,491,503,490,503,490,503,489,529,464,528,464,529,464,529,464,529,464,528,464,529,464,529,439,554,439,554,439,554,440,553,491,501,491,501,492,501,491,502,491,502,1483,529,1457,528,1457,529,1457,529,2960,3004,8914,528,1433,553,441,552,441,552,464,528,491,502,491,501,492,501,491,503,490,503,1483,529,464,528,464,528,464,529,1458,528,1457,528,1458,528,465,528,1458,528,1485,501,1485,500,492,501,491,503,1483,528,1458,528,1458,527,465,528,464,528,465,527,1458,528,1458,528,1458,527,492,500,492,500,492,501,492,502,491,502,491,502,1483,528,465,527,1458,528,1458,528,465,528,465,527,465,528,1458,528,465,528,465,527,492,500,492,501,1485,502,491,502,491,527,1458,528,1458,527,1459,527,1458,527};
static const uint16_t b_37_r19[] = {697,17252,3062,8880,561,461,532,1453,534,459,534,458,535,458,534,458,589,403,590,402,563,429,563,1423,562,431,561,431,561,1425,559,459,532,460,531,1456,528,1459,528,1482,529,1457,528,1457,529,464,529,464,528,440,553,439,554,438,555,439,553,439,554,439,553,490,502,491,501,491,502,491,502,490,504,489,504,489,529,463,529,464,529,464,529,464,528,464,529,464,529,439,554,439,554,439,553,440,553,440,552,491,501,491,501,492,501,491,502,490,504,489,504,1482,529,1457,529,1457,528,1457,529,2960,3003,8890,552,1433,553,441,552,465,527,491,501,492,501,492,501,491,502,491,502,490,503,1483,528,464,528,465,527,1458,528,465,528,1458,528,1458,527,465,528,1458,528,1485,500,1485,502,491,502,490,503,1483,528,1458,527,1458,528,465,528,465,528,465,527,1458,528,1458,528,1485,501,1485,501,492,501,1485,502,490,503,490,528,464,528,1458,528,465,527,1459,502,1483,503,490,527,465,527,466,527,1485,476,517,500,492,501,492,501,491,502,491,502,490,528,465,503,1483,502,1483,527,1459,527,1459,502};
static const uint16_t b_37_r20[] = {647,17302,3064,8881,535,459,559,1426,561,432,561,432,589,429,591,401,590,402,590,402,564,428,564,1422,563,430,562,431,560,1425,559,433,558,461,504,1482,529,1457,529,1457,555,1430,555,1430,556,437,556,437,556,437,556,437,555,438,554,439,554,439,554,440,553,464,529,464,527,466,528,465,529,464,529,463,555,438,555,437,555,438,555,437,556,437,556,437,555,438,555,438,555,438,554,439,554,440,552,441,552,465,527,465,526,466,528,465,528,464,529,464,554,1432,554,1431,555,1431,555,1431,555,2934,3030,8888,554,1457,529,464,529,464,528,466,527,466,526,466,527,465,528,465,528,464,554,1433,553,439,553,439,554,1432,553,439,554,1433,552,1458,527,465,528,1460,526,1460,525,1461,526,466,527,465,528,1459,552,1433,552,1458,528,465,528,441,552,440,552,1458,528,1458,527,1485,501,1485,501,492,501,1484,503,490,503,490,528,464,528,1459,503,490,503,1483,503,1483,502,490,527,465,503,490,503,1510,500,492,501,492,501,491,502,491,502,490,503,490,528,465,527,1458,527,1459,527,1458,503,1483,503};
static const uint16_t b_37_r21[] = {698,17226,3063,8881,560,461,532,1426,561,459,534,458,535,458,563,429,564,429,590,402,563,429,563,1422,563,431,561,431,560,433,558,434,557,461,530,1456,528,1458,529,1458,529,1458,553,1432,554,439,553,439,554,439,554,438,555,438,555,438,554,439,554,440,553,464,528,466,527,466,526,467,526,466,527,465,528,464,553,439,554,439,554,439,554,440,552,440,553,440,553,439,554,439,553,439,554,440,553,1458,528,467,526,491,501,491,502,491,502,467,526,490,503,1482,529,1457,528,1457,528,1458,528,2961,3003,8890,552,1434,552,464,528,465,528,491,501,492,501,491,502,491,502,490,503,490,503,1483,527,465,528,465,528,1458,528,1458,528,1434,552,1458,528,465,528,1485,500,1485,501,1485,502,490,503,490,528,1458,527,1458,528,1458,528,465,528,465,503,490,528,1458,527,1459,527,1485,501,492,501,491,502,491,502,490,503,490,527,465,528,1458,528,465,528,1458,503,1483,526,466,527,465,528,465,528,1459,526,492,501,492,501,492,501,491,502,491,502,491,502,490,528,1458,528,1458,503,1483,503,1483,503};
static const uint16_t b_37_r22[] = {619,17320,3033,8910,531,461,532,1454,533,460,533,459,535,458,534,459,534,458,590,402,535,457,535,1449,536,457,535,457,535,1452,559,433,559,460,531,1455,529,1483,503,1483,529,1457,529,1456,530,463,530,463,529,463,530,463,529,438,555,438,555,438,554,438,555,490,502,490,501,492,501,491,502,490,503,490,503,489,530,463,529,463,530,463,530,463,530,463,529,463,529,439,554,438,555,438,554,438,554,439,554,463,529,490,501,492,501,491,502,490,503,490,503,1483,529,1456,529,1457,529,1457,529,2960,3004,8913,529,1432,554,439,554,439,554,491,501,491,501,492,501,491,502,491,503,489,529,1458,528,464,528,464,529,1457,529,1457,528,1433,553,1432,554,439,554,1484,501,1484,501,1485,502,490,503,490,528,1457,529,1457,529,1457,529,464,529,464,529,464,529,1433,553,1433,553,1484,501,491,501,492,501,491,502,490,503,490,503,489,529,1457,528,464,529,1457,529,1458,528,464,529,441,552,440,553,1434,551,491,501,492,500,492,501,492,501,491,502,490,503,490,528,1458,528,1458,528,1458,528,1458,528};
static const uint16_t b_37_r23[] = {646,17708,3062,8881,559,434,559,1426,561,432,561,433,588,428,590,402,590,402,589,403,564,428,564,1422,563,430,561,432,559,1426,558,460,531,462,528,1459,528,1458,529,1457,555,1430,555,1431,555,438,554,438,555,438,555,438,554,439,554,439,553,440,553,464,528,465,528,465,527,466,527,465,528,464,529,464,555,438,555,438,555,438,555,438,555,438,555,438,554,438,555,439,553,439,554,440,552,464,528,465,528,465,528,465,527,466,527,465,528,465,528,464,554,1431,555,1432,553,1432,554,1432,553,2935,3029,8889,553,1457,528,465,528,465,527,466,525,467,527,466,527,465,528,465,528,464,554,1432,553,439,554,439,554,1432,554,1433,553,1457,528,1458,528,465,527,1460,525,1461,526,1460,527,465,552,441,553,1432,553,1433,553,1433,552,440,552,441,552,465,527,1458,528,1458,528,1460,525,467,526,467,526,466,527,466,552,465,528,441,552,1433,552,465,527,1458,528,1458,527,465,528,465,528,465,527,1485,500,492,500,493,501,492,501,491,502,491,502,490,528,465,527,1459,527,1458,527,1458,528,1458,527};
static const uint16_t b_37_r24[] = {645,17720,3036,8908,533,459,561,1423,586,407,588,405,588,430,562,431,563,429,564,428,564,428,564,1421,564,429,562,430,561,1424,560,434,557,436,556,1431,554,1457,529,1457,528,1458,554,1431,556,437,556,437,556,437,555,437,556,437,556,437,556,437,555,438,555,438,554,439,554,439,554,464,528,464,529,464,527,465,529,465,528,464,554,438,556,437,556,437,555,437,556,437,555,438,555,437,556,438,555,438,555,438,554,440,553,463,529,464,529,465,527,465,527,1459,528,1458,554,1431,555,1431,554,2934,3029,8888,554,1431,555,439,553,439,553,440,553,464,529,464,528,466,527,465,526,467,526,1459,528,465,553,439,554,439,554,1432,554,1432,553,1432,554,439,554,1457,528,1457,529,1460,526,1459,526,1460,527,466,527,1459,553,1432,554,440,553,439,553,440,553,1433,553,1457,528,1458,528,464,529,464,528,467,526,467,525,468,525,468,525,1484,527,441,553,1433,552,1457,529,441,551,464,529,464,529,1458,528,464,528,465,527,465,528,491,501,491,500,492,501,492,501,1484,502,1484,528,1458,528,1457,528};
static const uint16_t b_37_r25[] = {619,17603,3063,8880,559,434,587,1397,591,404,589,428,565,428,589,403,564,428,564,428,564,428,564,1422,563,430,561,431,560,1451,533,460,505,488,529,1458,529,1457,556,1430,556,1430,556,1430,556,437,556,437,555,437,555,438,555,439,554,440,552,463,529,464,529,464,527,466,527,465,528,465,554,438,555,437,556,437,555,437,555,437,556,437,556,437,556,437,555,438,555,438,555,439,553,464,529,464,528,465,528,465,526,466,527,465,528,465,554,439,554,438,555,1431,555,1431,555,1431,555,1431,554,2934,3030,8890,552,1457,528,464,529,465,528,465,526,466,527,466,527,465,554,439,554,438,555,1431,554,439,554,439,554,1432,554,1433,553,1457,528,1458,528,466,527,1459,526,1460,527,1459,553,439,554,439,553,1432,554,1433,553,1433,553,440,552,464,528,464,528,1458,528,1460,526,1461,524,468,526,467,526,467,551,441,552,440,553,464,528,1457,529,440,553,1457,529,1458,527,465,528,465,528,465,528,1484,501,491,501,492,501,491,502,491,502,491,528,464,528,465,528,1458,528,1458,528,1458,528,1458,527};
static const uint16_t b_37_r26[] = {697,17539,3061,8880,561,458,534,1423,563,458,534,458,534,458,563,430,563,429,590,403,562,430,562,1449,509,483,509,484,532,1454,533,459,559,434,558,1429,555,1431,554,1433,553,1431,555,1431,555,439,553,439,553,440,553,490,502,467,526,491,502,491,503,490,503,489,504,489,529,464,528,464,529,464,529,464,528,464,529,464,529,439,554,439,554,439,553,440,553,441,551,491,501,491,501,492,501,491,502,490,503,490,528,464,528,464,528,465,528,464,528,464,528,1458,528,1433,553,1433,553,1458,529,2959,3004,8940,500,1485,502,491,502,490,503,490,503,489,528,465,528,465,503,489,528,465,528,1458,528,465,527,441,552,1458,528,1485,500,1485,501,1485,502,491,502,1483,528,1458,528,1458,527,465,528,1458,503,490,528,1458,527,1458,528,465,527,492,500,492,501,1485,502,1484,502,1483,528,465,527,465,503,490,527,465,528,465,528,465,526,1459,528,465,527,1459,527,1485,501,492,500,492,501,492,501,1484,503,490,503,490,503,490,527,465,528,465,503,490,502,490,503,1483,527,1459,527,1459,502,1510,502};
static const uint16_t b_37_r27[] = {699,17797,3035,8879,563,458,534,1422,564,458,534,458,535,458,535,458,563,429,590,403,561,431,560,1449,510,483,509,484,532,1453,534,459,558,435,557,1429,555,1431,554,1457,529,1432,554,1432,554,439,553,439,553,440,553,491,501,491,501,491,502,491,502,490,503,489,529,464,529,464,528,464,529,464,528,464,529,464,528,440,553,439,554,439,553,439,554,440,553,464,528,491,501,492,501,491,502,491,502,490,503,490,528,464,528,464,529,464,528,464,529,464,529,1457,528,1433,553,1433,553,1457,530,2959,3004,8939,501,1485,502,491,502,490,503,489,529,464,528,465,528,465,528,465,527,465,528,1458,528,441,552,465,527,1458,528,465,527,492,501,492,500,1485,502,1484,503,1483,528,1458,527,465,527,465,527,1458,528,1458,527,1458,526,467,527,465,528,492,500,1485,501,1485,502,1484,502,490,528,465,527,465,528,465,527,465,528,465,526,466,528,465,503,490,527,1459,502,490,502,517,476,517,500,1485,501,492,501,491,502,490,503,490,528,465,527,465,528,465,527,1459,502,1483,503,1483,503,1484,527};
static const uint16_t b_37_r28[] = {675,17818,3067,8851,590,429,563,1422,563,429,563,431,560,456,536,456,508,485,531,461,561,431,563,1422,564,430,561,431,560,1425,559,434,558,435,557,1430,556,1431,555,1456,529,1457,527,1459,527,465,554,439,555,437,556,437,556,437,555,437,556,437,556,437,556,437,555,437,556,438,555,438,554,439,554,463,530,463,529,464,529,464,527,466,527,465,554,439,555,438,555,437,556,437,555,437,556,437,555,438,555,437,556,438,554,438,555,439,554,463,529,463,529,1458,528,1458,526,1460,553,1433,554,2933,3031,8887,554,1432,554,438,555,438,554,438,554,439,554,439,553,463,530,463,529,463,529,1459,527,466,525,467,526,467,552,440,554,441,552,439,554,1432,553,1432,553,1456,530,1434,552,463,530,464,528,1457,529,1483,503,1483,501,491,528,465,529,464,529,1457,529,1457,529,1456,530,463,530,463,529,464,528,464,529,464,528,1457,529,490,502,491,500,492,500,1485,527,466,528,464,529,464,529,1457,528,464,528,464,528,464,529,464,529,464,528,464,529,464,528,1458,528,1484,502,1484,500,1485,529};
static const uint16_t b_37_r29[] = {675,17799,3065,8852,589,429,563,1422,563,430,562,456,535,456,508,484,508,485,559,433,562,430,564,1421,564,430,561,431,560,1425,559,433,558,435,557,1430,556,1431,555,1457,529,1456,528,1458,528,465,555,438,556,437,556,436,557,436,556,436,556,437,556,436,557,437,556,437,555,437,556,438,555,438,554,462,530,464,529,464,527,466,527,465,554,440,554,438,556,437,556,437,555,437,556,437,555,437,556,437,555,437,556,438,554,438,555,438,555,463,529,463,529,1458,528,1458,526,1459,554,1432,555,2932,3032,8887,554,1431,555,438,554,438,554,438,555,438,555,439,553,463,529,463,530,463,529,1458,526,467,526,467,526,466,553,440,553,439,554,438,555,1432,553,1431,555,1432,554,1432,553,463,529,463,529,1457,529,1460,525,1460,525,467,552,441,553,440,553,1433,553,1432,553,1433,553,463,529,440,553,463,529,464,529,464,529,464,529,1483,502,491,500,492,501,1485,527,465,528,464,529,463,529,1457,529,464,528,463,530,464,529,464,529,464,529,464,529,464,529,1458,528,1484,500,1485,501,1485,529};
static const uint16_t b_37_r30[] = {676,17821,3065,8878,563,430,562,1421,564,456,507,484,508,484,532,460,561,432,563,429,564,429,563,1421,564,430,561,431,560,1425,559,434,558,436,556,1432,554,1456,529,1457,527,1459,554,1431,556,437,556,437,555,437,556,437,556,437,555,437,556,437,555,437,556,438,554,438,555,438,554,463,529,464,528,464,527,466,527,465,554,439,554,438,556,437,556,437,555,437,556,437,556,437,555,437,555,437,556,438,554,438,555,439,553,463,529,463,530,464,529,465,526,1459,527,1459,554,1432,554,1431,555,2934,3030,8887,554,1431,555,438,554,438,555,439,553,463,529,463,530,464,528,466,527,465,526,1460,552,441,553,440,553,1432,554,1432,554,1432,554,1432,553,439,554,1456,530,1456,529,1459,527,466,527,466,525,1460,552,1458,529,1457,529,463,530,463,529,439,554,1433,553,1456,529,1457,529,464,529,464,529,466,526,490,501,492,500,1485,527,1459,528,464,529,463,529,1456,529,464,529,463,530,463,529,1457,528,464,529,464,529,464,529,464,528,491,501,491,500,492,501,1485,527,1458,529,1457,529,1457,529};
static const uint16_t b_37_r31[] = {676,17795,3087,8850,591,403,589,1394,591,429,562,429,562,430,562,430,562,431,562,431,561,431,561,1449,536,457,529,464,530,1456,557,436,557,436,556,1430,556,1430,556,1430,556,1430,555,1431,555,438,555,438,554,463,529,464,529,464,527,466,526,465,553,440,554,438,555,438,555,437,555,437,556,437,555,437,556,437,556,437,556,438,555,438,555,440,553,463,529,463,530,464,528,464,527,466,527,466,552,441,553,439,555,438,555,437,555,438,554,437,555,438,555,1431,555,1431,554,1456,530,1456,555,2908,3053,8891,527,1458,526,466,553,440,554,439,554,438,555,438,554,438,554,438,555,439,554,1432,554,463,529,440,553,463,529,464,528,464,529,466,526,1459,525,1461,551,1458,529,1457,530,463,529,463,529,1456,529,1457,529,1457,529,464,529,464,528,464,529,1483,502,1484,501,1485,527,465,529,464,529,463,530,463,529,464,529,464,528,464,529,1457,529,464,528,1457,529,464,529,465,528,490,502,1484,500,492,501,491,528,465,528,465,528,464,529,464,528,464,529,1457,529,1457,529,1457,528,1458,527};
static const uint16_t b_37_r32[] = {649,17813,3064,8852,590,429,563,1422,563,430,562,456,535,456,508,485,507,485,560,432,563,430,563,1422,563,430,561,431,560,1426,558,434,557,436,556,1431,555,1432,554,1457,528,1457,527,1459,553,439,555,438,556,437,556,437,556,437,555,437,556,437,556,437,555,437,556,437,556,438,554,439,554,463,529,463,530,464,528,464,527,466,527,466,553,439,554,439,554,438,555,437,555,437,556,438,555,438,555,437,556,437,555,438,554,439,554,463,530,463,529,463,530,1458,527,1458,527,1459,554,1432,555,2933,3031,8887,554,1432,554,438,554,439,554,438,554,439,553,463,530,463,530,464,529,464,528,1459,525,468,525,467,526,1460,553,1433,554,1432,553,1432,553,463,530,1433,553,1457,529,1457,528,464,528,490,502,1483,501,1485,501,1484,529,464,529,463,529,463,530,1456,529,1457,529,1457,529,464,529,464,529,464,528,464,529,490,502,1484,500,492,501,1485,528,464,529,1457,529,463,529,464,528,464,529,1457,529,464,529,464,529,464,529,464,529,464,528,491,501,491,502,1484,501,1485,527,1459,528,1457,529};
static const uint16_t b_37_r33[] = {675,17783,3093,8850,589,404,589,1395,591,429,563,429,562,429,563,430,562,429,564,429,563,430,562,1423,561,432,559,434,557,1452,529,464,529,464,554,1432,555,1430,557,1429,556,1430,556,1430,555,437,556,437,555,438,555,438,554,463,529,463,530,464,528,465,527,466,527,465,554,439,554,438,556,437,556,437,555,437,555,437,555,437,555,437,556,437,556,438,554,438,555,463,529,463,530,463,529,464,529,464,527,466,527,465,554,439,554,438,555,437,556,437,555,1431,554,1431,555,1431,555,1432,552,2936,3029,8912,529,1458,528,465,526,467,526,467,526,466,553,439,554,439,554,438,554,438,554,1432,554,439,553,439,554,1432,553,1457,529,1457,529,1459,527,466,525,1461,525,1460,553,1433,553,439,553,439,554,1456,530,1456,530,1457,528,464,529,463,529,464,528,1483,503,1483,501,1485,527,465,529,464,529,463,530,463,529,464,528,464,529,1457,529,1457,529,464,529,1457,528,464,529,465,528,491,501,1484,500,492,501,492,527,465,529,464,529,464,528,464,528,464,529,1457,529,1457,528,1457,529,1458,527};
static const uint16_t b_37_r34[] = {647,17832,3091,8854,562,431,562,1421,590,405,588,405,588,430,588,404,564,429,563,428,564,428,564,1398,587,429,562,430,561,1424,560,433,558,435,556,1456,529,1457,527,1459,528,1457,556,1430,556,436,556,437,556,437,556,437,555,437,556,437,556,437,556,438,555,439,553,439,554,463,529,464,529,464,527,466,527,465,553,439,555,438,555,437,556,437,556,437,555,437,556,437,556,437,555,438,555,438,555,439,554,439,554,463,529,464,529,464,528,465,526,466,527,1458,554,1432,555,1431,554,1431,554,2934,3030,8887,554,1432,554,439,553,440,553,463,529,464,529,465,528,465,526,467,526,466,527,1459,553,439,554,439,554,438,554,1432,554,1431,555,1432,553,440,553,1457,528,1457,529,1459,525,467,525,467,527,1459,553,1433,554,1432,554,439,554,439,553,439,554,1432,554,1457,529,1457,529,464,529,464,529,466,526,467,525,492,501,1460,552,1434,553,1433,553,464,528,1457,529,464,528,464,528,464,529,1457,529,464,529,464,528,491,501,491,500,492,501,492,501,491,502,1484,528,1458,528,1457,529,1457,529};
static const uint16_t b_37_r35[] = {646,17823,3059,8880,561,432,561,1424,589,404,590,404,589,428,590,403,588,404,563,429,563,429,563,1448,537,456,507,485,530,1455,558,434,558,435,557,1429,556,1430,556,1430,555,1430,556,1431,554,439,554,439,554,439,553,464,528,464,527,466,527,465,529,464,529,464,554,438,556,437,555,437,555,438,555,438,555,438,555,437,556,438,554,438,555,439,553,440,553,463,529,464,528,465,526,466,528,465,528,465,528,464,554,439,554,438,554,438,554,438,554,438,555,1431,555,1432,553,1433,553,1457,529,2934,3029,8915,526,1459,526,466,527,465,528,465,553,439,554,438,554,439,553,439,554,439,553,1432,553,439,554,440,552,464,528,464,529,464,528,466,527,1459,526,1460,527,1459,553,1433,553,439,553,439,553,1433,553,1432,554,1457,528,464,528,465,528,465,527,1460,526,1460,525,1460,527,466,552,442,551,440,553,440,553,464,528,440,553,464,529,464,528,1458,528,1458,528,465,527,465,527,491,501,1485,500,492,501,491,502,491,502,490,528,465,528,464,528,465,528,1458,528,1458,528,1458,527,1458,528};
static const uint16_t b_37_r36[] = {675,17817,3065,8850,591,404,588,1394,591,429,562,429,562,430,562,431,561,431,562,431,561,431,561,1449,507,486,530,463,557,1429,558,435,557,436,556,1430,556,1430,556,1430,556,1430,555,1431,555,439,554,462,530,464,529,464,527,466,527,466,552,440,555,438,555,437,556,437,555,437,556,437,555,437,555,437,556,437,556,437,555,438,555,439,554,463,529,463,530,464,529,464,527,466,527,466,553,440,553,439,554,438,555,437,556,437,556,437,556,437,555,438,555,1431,555,1432,554,1456,529,1458,554,2908,3055,8888,526,1460,552,440,554,439,554,439,554,438,554,438,554,438,554,439,554,438,555,1433,552,463,529,463,529,1457,529,1459,527,1483,501,1461,552,441,552,1457,529,1433,552,1433,553,463,529,463,530,1457,529,1457,529,1457,529,465,527,490,501,492,500,1485,527,1458,529,1457,529,464,529,463,530,463,530,464,529,464,528,1457,529,464,529,464,529,1457,528,1484,502,491,500,492,501,491,528,1458,529,464,529,463,529,464,529,464,528,464,529,464,529,464,528,1457,529,1458,528,1458,528,1484,529};
static const uint16_t b_37_r37[] = {619,17847,3064,8851,591,403,590,1393,592,403,589,428,589,403,563,430,562,430,562,430,562,430,562,1448,508,485,507,485,559,1428,559,433,559,434,558,1429,556,1429,557,1429,556,1430,556,1431,555,438,554,462,530,463,530,463,528,465,528,465,528,465,555,438,555,437,556,437,556,437,555,437,555,437,556,437,556,437,556,437,555,438,555,438,555,439,553,463,529,464,528,464,527,466,527,466,553,439,555,438,555,438,555,437,555,437,556,437,556,437,555,438,555,1431,555,1431,555,1456,529,1458,554,2907,3056,8887,526,1459,553,440,554,439,554,438,555,438,554,438,554,438,555,438,555,438,555,1432,554,439,554,463,529,1456,529,1458,528,1458,526,1460,553,440,553,1432,554,1431,554,1432,554,438,554,439,554,1433,553,1456,529,1457,529,466,527,490,502,467,525,1460,552,1435,553,1457,529,463,529,440,553,463,529,463,530,463,530,463,529,1457,529,464,528,1457,529,1483,502,490,501,492,501,491,528,1458,529,464,529,463,529,463,529,463,529,464,529,463,529,464,529,1457,529,1457,529,1460,525,1484,529};
static const uint16_t b_37_r38[] = {619,17840,3066,8853,589,430,563,1422,564,429,563,430,562,455,508,484,508,484,561,431,563,429,565,1420,565,428,564,429,562,1423,561,432,559,434,557,1430,555,1431,555,1456,529,1457,527,1458,529,464,555,438,556,437,556,437,556,436,556,437,555,437,556,437,556,437,555,437,555,438,555,438,555,438,554,440,553,464,528,464,526,466,527,465,528,464,555,438,556,437,556,437,555,437,555,437,556,437,555,437,556,437,556,438,555,438,555,439,553,463,530,463,529,1458,528,1458,527,1458,554,1432,555,2933,3031,8887,554,1431,555,438,554,438,555,438,555,438,554,439,554,463,530,463,529,464,529,1458,526,467,526,466,527,466,553,1432,555,1432,554,1431,555,438,555,1431,555,1432,553,1457,529,464,528,464,529,1459,525,1461,525,1460,552,440,553,440,553,439,553,1432,554,1432,554,1432,553,440,553,463,529,464,529,464,529,464,528,1483,501,1461,526,491,502,1484,528,1457,529,463,529,464,529,464,528,1457,529,464,528,464,528,464,529,464,528,464,529,465,527,491,501,1484,501,1485,502,1484,528,1457,529};
static const uint16_t b_37_r39[] = {650,17834,3065,8851,591,403,590,1394,592,403,589,428,590,402,563,430,562,430,562,430,562,430,562,1448,508,485,507,485,559,1427,559,434,558,435,557,1429,556,1429,556,1429,557,1430,555,1430,556,438,554,439,554,463,529,463,527,465,528,465,528,464,555,438,555,437,556,436,556,436,557,437,556,437,556,437,555,436,556,437,556,438,555,438,554,439,554,462,530,464,529,464,526,466,527,466,553,439,554,438,555,437,556,437,555,437,556,437,555,437,555,437,556,1430,556,1432,554,1456,530,1457,555,2907,3056,8888,526,1459,554,439,555,438,555,438,555,437,555,437,555,438,555,438,554,438,554,1431,554,439,554,463,529,1457,529,1458,528,1458,526,1459,553,439,554,1432,554,1431,555,1431,554,438,555,438,555,1432,553,1457,528,1457,529,464,528,465,526,468,525,1460,552,1434,553,1432,554,439,553,439,553,439,554,439,553,439,554,463,529,464,529,1457,529,1457,528,1460,526,467,524,491,502,491,528,1434,553,440,553,463,529,464,529,463,529,464,529,464,529,464,529,1457,528,1457,529,1457,528,1484,529};
static const uint16_t b_37_r40[] = {676,17811,3066,8852,589,429,563,1422,563,430,561,455,536,456,508,485,508,484,561,432,562,430,563,1422,563,430,561,431,560,1426,559,434,557,436,556,1431,555,1433,553,1457,528,1457,527,1459,551,441,554,438,555,437,556,437,555,437,555,437,556,437,556,437,555,437,555,437,555,438,555,438,554,463,529,463,530,464,528,464,527,466,527,466,553,439,555,438,555,438,555,437,555,437,556,437,555,438,555,437,555,438,555,438,554,439,554,463,529,463,529,463,530,1458,528,1458,526,1459,554,1432,555,2933,3031,8887,554,1431,555,438,554,438,555,438,555,439,553,463,529,463,530,463,529,464,529,1458,526,468,525,467,526,466,553,1433,554,1432,553,1433,553,439,554,1432,553,1456,530,1457,529,464,529,464,528,1483,501,1485,501,1484,528,464,530,464,529,463,529,1457,529,1457,529,1457,529,464,529,464,529,464,529,464,529,464,529,1483,502,491,500,1485,527,1458,529,1457,529,463,529,463,529,464,529,1457,529,464,528,464,529,464,529,464,529,464,528,467,526,491,501,1484,501,1485,527,1458,529,1457,529};
static const uint16_t b_37_r41[] = {675,17793,3089,8850,591,403,589,1394,591,429,562,429,563,430,562,431,561,431,562,431,562,431,561,1449,507,486,529,463,557,1428,558,435,557,436,556,1430,555,1430,556,1430,556,1430,555,1431,555,439,554,463,529,464,529,463,528,465,528,465,553,440,555,438,555,437,556,436,556,437,556,437,556,437,556,437,556,437,556,437,555,438,555,438,555,463,529,463,529,464,529,464,527,466,526,466,553,439,554,438,555,438,555,437,555,438,555,438,555,438,554,438,555,1431,555,1432,554,1456,529,1457,555,2908,3055,8888,526,1460,553,439,554,439,554,438,555,438,554,438,554,438,555,438,554,438,554,1432,554,463,529,464,529,463,529,1458,528,1459,525,1461,551,441,553,1433,554,1456,529,1456,530,463,530,440,552,1456,530,1457,529,1457,528,464,529,490,503,490,501,1485,501,1484,529,1457,530,463,529,464,529,463,530,463,529,464,529,463,529,1457,529,1457,529,1457,529,1484,502,490,501,492,501,492,527,1458,529,464,529,463,529,464,529,464,528,464,529,464,529,464,528,1457,529,1458,528,1458,527,1484,529};
static const BBtn b_37[] = {
  {"On", PR_RAW, 0, 0, 0, 38000, b_37_r0, 349},
  {"Off", PR_RAW, 0, 0, 0, 38000, b_37_r1, 349},
  {"Auto", PR_RAW, 0, 0, 0, 38000, b_37_r2, 233},
  {"Dry", PR_RAW, 0, 0, 0, 38000, b_37_r3, 233},
  {"Fan", PR_RAW, 0, 0, 0, 38000, b_37_r4, 233},
  {"Cool", PR_RAW, 0, 0, 0, 38000, b_37_r5, 233},
  {"Heat", PR_RAW, 0, 0, 0, 38000, b_37_r6, 233},
  {"Fast", PR_RAW, 0, 0, 0, 38000, b_37_r7, 233},
  {"Eco", PR_RAW, 0, 0, 0, 38000, b_37_r8, 233},
  {"Fan auto", PR_RAW, 0, 0, 0, 38000, b_37_r9, 233},
  {"Fan 1", PR_RAW, 0, 0, 0, 38000, b_37_r10, 233},
  {"Fan 2", PR_RAW, 0, 0, 0, 38000, b_37_r11, 233},
  {"Fan 3", PR_RAW, 0, 0, 0, 38000, b_37_r12, 233},
  {"Fan 4", PR_RAW, 0, 0, 0, 38000, b_37_r13, 233},
  {"Display off", PR_RAW, 0, 0, 0, 38000, b_37_r14, 233},
  {"Display on", PR_RAW, 0, 0, 0, 38000, b_37_r15, 233},
  {"Usage kwh", PR_RAW, 0, 0, 0, 38000, b_37_r16, 117},
  {"Beep toggle", PR_RAW, 0, 0, 0, 38000, b_37_r17, 233},
  {"Filter reset", PR_RAW, 0, 0, 0, 38000, b_37_r18, 233},
  {"Clean off", PR_RAW, 0, 0, 0, 38000, b_37_r19, 233},
  {"Clean on", PR_RAW, 0, 0, 0, 38000, b_37_r20, 233},
  {"Quiet on", PR_RAW, 0, 0, 0, 38000, b_37_r21, 233},
  {"Quiet off", PR_RAW, 0, 0, 0, 38000, b_37_r22, 233},
  {"Vert on", PR_RAW, 0, 0, 0, 38000, b_37_r23, 233},
  {"Vert off", PR_RAW, 0, 0, 0, 38000, b_37_r24, 233},
  {"Horiz on", PR_RAW, 0, 0, 0, 38000, b_37_r25, 233},
  {"Horiz off", PR_RAW, 0, 0, 0, 38000, b_37_r26, 233},
  {"16", PR_RAW, 0, 0, 0, 38000, b_37_r27, 233},
  {"17", PR_RAW, 0, 0, 0, 38000, b_37_r28, 233},
  {"18", PR_RAW, 0, 0, 0, 38000, b_37_r29, 233},
  {"19", PR_RAW, 0, 0, 0, 38000, b_37_r30, 233},
  {"20", PR_RAW, 0, 0, 0, 38000, b_37_r31, 233},
  {"21", PR_RAW, 0, 0, 0, 38000, b_37_r32, 233},
  {"22", PR_RAW, 0, 0, 0, 38000, b_37_r33, 233},
  {"23", PR_RAW, 0, 0, 0, 38000, b_37_r34, 233},
  {"24", PR_RAW, 0, 0, 0, 38000, b_37_r35, 233},
  {"25", PR_RAW, 0, 0, 0, 38000, b_37_r36, 233},
  {"26", PR_RAW, 0, 0, 0, 38000, b_37_r37, 233},
  {"27", PR_RAW, 0, 0, 0, 38000, b_37_r38, 233},
  {"28", PR_RAW, 0, 0, 0, 38000, b_37_r39, 233},
  {"29", PR_RAW, 0, 0, 0, 38000, b_37_r40, 233},
  {"30", PR_RAW, 0, 0, 0, 38000, b_37_r41, 233},
};
static const BRemote rem_38[] = {
  {"AR13TYHZCWKN", b_37, 42},
};
static const uint16_t b_39_r0[] = {4459,4369,593,1562,590,487,599,1555,597,481,595,482,594,483,593,485,591,1563,599,1555,596,481,595,482,594,484,592,485,591,486,590,1565,597,479,596,481,594,1559,593,1562,590,1565,597,1557,595,482,594,484,592,485,591,1564,598,1556,596,1559,593,1561,591,1564,598,1556,596,1558,594,1561,591,1564,598,1556,595,1559,593,1561,591,1564,598,1556,596,1559,593,1561,591,486,590,1565,597,1557,595,1559,593,1562,590,488,598,478,598,479,597,5158,4453,4375,597,480,595,1558,594,484,592,1563,589,1565,597,1558,594,1560,592,485,591,487,589,1565,597,1557,594,1560,592,1562,590,1565,597,479,596,1558,594,1561,591,486,590,488,598,478,598,480,596,1558,594,1561,591,1563,599,478,598,479,596,481,595,482,594,484,592,485,591,486,600,478,598,479,597,480,595,481,595,483,593,484,592,485,591,487,589,488,598,1555,596,481,594,483,593,484,592,485,591,1564,598,1556,596,1559,593};
static const uint16_t b_39_r1[] = {4428,4402,570,1584,568,510,566,1588,564,513,563,514,562,542,544,507,569,1586,566,1588,564,513,563,541,535,542,544,533,543,535,541,1588,564,513,563,541,545,1583,569,1586,565,1589,563,514,562,542,544,1584,568,536,540,1589,563,1592,570,1584,568,1587,564,1591,561,1594,568,1586,566,1590,572,1582,570,1585,567,1588,564,1591,561,1594,568,1586,566,1589,573,1592,533,543,1586,566,1589,562,1592,570,533,543,1586,565,1589,563,1592,570,5186,4456,4374,567,510,566,1589,563,541,535,1593,569,1586,565,1589,563,1592,570,533,542,535,541,1587,565,1591,560,1594,568,1586,566,1589,563,541,535,1594,568,1586,566,538,538,539,537,541,535,1593,569,1586,566,537,539,1589,562,515,560,543,543,534,541,536,540,537,539,539,537,514,562,542,544,533,542,534,541,536,540,537,539,539,537,540,546,531,545,533,542,1586,566,537,539,512,564,540,536,1593,569,534,541,536,540,537,539};
static const uint16_t b_39_r2[] = {4426,4404,568,1587,564,538,538,1591,561,543,543,534,542,536,539,537,539,1589,563,1618,544,533,543,535,541,536,540,538,538,539,537,1591,561,543,543,534,542,1586,565,1616,536,1593,569,534,542,536,540,1614,538,1617,545,1583,569,1587,564,1616,536,1593,569,1585,567,1588,564,1591,561,1594,568,1586,566,1588,564,1591,561,1594,568,1587,565,1589,563,1592,570,1585,567,536,540,1589,562,1592,570,1584,568,536,540,1589,563,1591,571,533,542,5187,4424,4405,567,536,540,1588,563,541,535,1593,569,1585,567,1588,574,1581,571,533,542,535,541,1587,565,1616,536,1592,570,1585,567,1588,564,539,537,1592,570,1584,568,536,540,538,538,539,537,1618,544,1610,542,536,540,538,538,539,537,541,545,532,544,533,543,535,541,536,540,537,539,539,537,540,536,542,534,543,543,534,542,536,540,537,539,539,537,540,546,1608,544,534,542,535,541,537,539,1615,537,541,535,543,543,1584,568};
static const uint16_t b_39_r3[] = {4408,4423,570,1585,567,537,539,1590,561,542,544,533,542,535,541,537,539,1589,563,1593,569,534,541,1588,563,539,537,541,545,532,543,534,541,536,539,537,539,1590,562,1593,569,1586,566,538,538,539,537,1592,570,1585,567,1587,565,1590,561,1594,568,1586,565,1590,561,1593,569,1586,566,1589,562,1592,570,1584,568,1587,564,1590,561,1594,568,1586,565,1590,572,1583,568,534,541,1588,564,540,536,1593,569,534,541,1587,564,539,537,1592,570,5186,4455,4374,567,537,539,1590,561,542,544,1584,567,1588,563,1591,560,1594,568,535,541,537,539,1590,561,541,545,1584,568,1587,564,1590,561,1593,569,1586,565,1589,562,540,536,542,544,533,542,1586,566,1588,563,540,536,542,544,533,542,535,540,537,539,538,538,539,537,541,535,542,544,534,541,535,540,537,539,538,537,540,536,541,545,532,543,534,541,536,539,1589,562,540,536,1593,569,534,541,1588,563,540,535,1593,569,534,541};
static const uint16_t b_39_r4[] = {4463,4368,562,1593,569,508,568,1587,564,513,562,515,571,506,569,508,568,1587,564,1590,572,506,570,507,569,509,567,1588,563,513,562,515,571,506,570,508,568,1586,565,1590,561,1594,568,509,567,510,565,1590,562,1593,569,1585,566,1588,595,1560,592,1563,599,1556,595,1559,592,1563,588,1566,596,1559,593,1561,590,1565,597,1558,594,1561,590,1564,598,1556,595,1559,592,485,590,1564,598,1557,594,1560,591,1563,599,478,597,480,595,1559,592,5162,4459,4372,590,487,589,1566,596,482,594,1560,591,1564,587,1567,595,1559,561,515,571,506,570,1585,567,1588,563,1617,545,533,542,1586,565,566,1616,1593,569,1585,567,537,538,512,563,515,560,1594,568,1587,564,513,562,515,560,516,570,508,568,509,567,511,564,513,562,514,561,516,570,508,568,509,566,511,564,513,562,515,560,517,569,508,567,510,565,512,563,1591,560,517,569,508,567,510,565,512,563,1591,560,1595,588,489,586};
static const uint16_t b_39_r5[] = {4453,4378,594,1561,590,487,589,1566,596,481,594,483,592,1562,589,487,589,489,597,1557,594,483,592,485,590,486,590,1565,597,480,564,513,594,483,593,484,591,1564,598,1556,595,1559,592,485,590,486,590,1565,597,1558,593,1561,590,1564,598,1557,594,1560,591,1563,599,1556,595,1559,592,1562,589,488,598,479,596,1558,593,1562,589,487,589,489,597,480,595,1559,592,1562,589,488,598,479,596,481,594,1560,591,1563,599,1556,595,482,593,5162,4458,4372,590,488,598,1556,595,482,594,1561,590,1565,597,480,595,1559,592,1562,589,488,598,1557,595,1560,591,1563,599,478,598,1557,594,1560,591,1563,589,1567,595,482,593,484,591,485,590,1565,597,1557,574,504,592,485,590,486,590,488,598,479,596,481,594,482,593,483,593,485,590,486,589,1565,597,1558,594,484,591,486,589,1565,597,1558,593,1562,589,487,589,489,597,1558,593,1561,590,1565,597,480,595,482,593,483,592,1562,590};
static const uint16_t b_39_r6[] = {4454,4377,594,1560,591,486,589,1565,597,480,595,482,593,484,591,485,590,1564,598,1557,594,1560,591,1563,588,489,597,480,595,482,593,483,592,485,590,487,588,1565,597,1558,593,1562,589,487,588,489,597,1558,593,1561,590,1564,598,1557,594,1560,591,1563,588,1567,595,1560,591,1563,588,1566,596,1559,592,1562,589,1565,597,1558,593,1562,589,1565,597,1557,594,1561,590,486,590,488,598,479,596,1558,593,484,591,1563,588,489,597,1557,594,5161,4459,4371,601,476,589,1565,597,481,594,1560,592,1562,589,1565,597,1558,593,484,591,485,590,487,589,488,598,1556,595,1559,592,1563,588,1566,596,1559,592,1562,589,488,587,489,597,480,595,1559,592,1562,589,488,598,479,596,480,595,482,593,484,591,485,601,476,589,488,598,480,595,481,594,483,592,484,591,486,590,487,588,489,597,480,595,481,594,483,592,1562,589,1565,597,1558,593,483,592,1562,589,488,587,1567,595,482,593};
static const uint16_t b_39_r7[] = {4454,4376,596,1559,592,485,590,1564,587,490,596,482,593,483,592,485,590,1564,587,1567,595,1560,591,1563,588,489,586,490,596,482,593,483,592,485,590,487,588,1566,596,1559,592,1562,589,488,587,490,596,1558,593,1562,589,1565,597,1558,593,1561,590,1565,596,1558,593,1561,590,1564,598,1557,594,1560,591,486,589,488,587,490,596,481,594,482,593,484,591,1563,588,489,597,1558,593,1562,589,487,588,489,597,1558,593,484,591,486,589,5165,4455,4375,596,481,594,1560,591,486,589,1565,597,1558,593,1561,590,1565,597,480,595,482,593,484,591,486,589,1565,597,1558,593,1562,589,1565,597,1558,593,1562,589,488,598,479,596,481,594,1560,591,1564,598,479,596,481,594,482,593,484,591,486,589,487,588,489,597,480,595,482,593,484,591,486,589,1565,597,1558,593,1561,590,1565,597,1558,593,1561,590,487,588,1566,596,482,593,484,623,1531,589,1566,596,482,593,1561,590,1565,597};
static const uint16_t b_39_r8[] = {4454,4376,595,1559,592,485,590,1564,598,479,596,481,594,483,592,484,591,1563,599,1556,595,1559,592,1562,589,488,598,479,596,481,594,482,593,484,591,486,589,1565,597,480,595,482,593,1561,590,486,589,1566,596,481,594,1560,591,1563,588,1566,596,1559,592,1562,589,1566,596,1559,592,1562,589,1565,597,481,594,482,593,484,591,486,589,487,588,489,597,1557,594,483,592,1563,599,478,597,479,596,481,594,1560,591,486,600,1554,597,5157,4453,4377,594,483,592,1562,589,488,598,1557,594,1560,591,1563,588,1567,595,483,592,484,591,486,590,487,588,1566,596,1559,592,1562,589,1565,597,1558,593,1561,590,487,588,1566,596,1559,592,485,590,1564,598,479,596,1559,592,484,591,486,590,487,599,478,598,480,595,481,594,483,592,485,590,486,590,1565,597,1557,594,1560,591,1563,588,1566,596,1559,592,485,590,1564,598,479,596,1558,593,1561,590,1564,598,479,596,1558,593,484,592};
static const uint16_t b_39_r9[] = {4459,4372,589,1565,597,480,595,1559,592,485,590,487,588,488,598,479,596,1558,593,1562,589,1565,597,1558,593,483,593,485,590,486,589,488,598,479,596,480,595,1559,592,485,590,486,589,1565,597,481,594,1559,592,485,590,1564,598,479,596,481,594,483,592,484,591,1563,588,489,597,1558,593,1561,590,486,589,488,598,479,596,481,594,483,592,484,591,1563,599,478,597,480,595,482,593,483,592,485,590,486,589,488,588,489,597,5158,4462,4367,594,483,592,1563,588,488,598,1557,594,1560,591,1563,599,1556,595,482,593,484,591,485,590,487,588,1566,596,1559,592,1562,589,1565,597,1558,593,1562,589,488,598,1556,595,1559,592,485,590,1564,598,479,596,1558,593,484,591,1563,588,1566,596,1559,592,1562,589,488,598,1557,594,482,593,484,591,1563,588,1566,596,1559,592,1563,588,1565,597,1558,593,484,591,1563,588,1566,596,1559,592,1562,589,1565,597,1558,593,1561,590,1564,598};
static const uint16_t b_39_r10[] = {4461,4369,592,1563,599,478,597,1557,594,483,624,453,591,486,589,1565,597,481,594,482,593,484,591,485,590,487,589,1566,596,481,594,483,593,484,591,1563,599,1556,595,1559,592,1562,589,1565,597,1558,593,1561,590,1564,598,1557,594,1560,591,1563,567,1587,596,1559,592,1562,589,1565,597,1557,594,1560,591,1564,598,1556,595,1560,591,1563,588,1566,596,1559,592,1561,590,487,589,1566,596,1558,572,1582,590,487,588,1565,597,481,594,1560,591,5163,4457,4373,588,489,597,1557,594,483,624,1530,590,1565,597,1558,593,483,592,1562,589,1565,597,1558,573,1582,590,1565,597,480,595,1559,592,1562,589,1565,597,480,595,481,594,483,593,484,591,486,589,488,598,479,596,481,594,482,593,484,591,485,590,487,599,478,598,480,595,481,594,483,593,485,590,486,590,488,598,479,596,480,595,482,593,484,591,485,590,1564,598,479,596,481,594,482,593,1561,590,487,588,1566,596,481,594};
static const uint16_t b_39_r11[] = {4409,4420,562,1591,561,517,569,1611,540,510,565,538,538,539,537,1618,533,517,569,534,541,535,540,511,565,539,537,514,562,541,535,1593,569,535,541,1587,564,1616,536,1592,570,1584,568,1587,564,1590,562,1592,570,1585,567,1587,564,1616,536,1593,569,1612,540,1588,563,1591,561,1594,568,1586,566,1615,537,1591,561,1620,542,1586,565,1589,562,1618,544,1585,566,1588,563,514,561,1592,570,1585,567,1587,564,1590,561,1593,569,1585,566,511,564,5190,4430,4399,562,514,561,1592,570,507,569,1586,565,1589,562,1592,570,507,568,1612,539,1588,563,1591,560,1620,542,1586,565,1589,562,1592,570,507,569,1586,565,512,563,539,537,515,560,542,544,533,542,535,540,536,539,537,538,539,537,540,536,542,533,543,543,534,541,535,540,537,538,538,537,540,536,541,534,543,543,533,542,535,540,536,540,538,538,539,536,1617,545,507,569,508,568,536,539,537,539,512,563,540,536,1618,544};
static const BBtn b_39[] = {
  {"POWER", PR_RAW, 0, 0, 0, 38000, b_39_r0, 199},
  {"TEMP-", PR_RAW, 0, 0, 0, 38000, b_39_r1, 198},
  {"TEMP+", PR_RAW, 0, 0, 0, 38000, b_39_r2, 199},
  {"MODE", PR_RAW, 0, 0, 0, 38000, b_39_r3, 199},
  {"Fan", PR_RAW, 0, 0, 0, 38000, b_39_r4, 199},
  {"C_Sense", PR_RAW, 0, 0, 0, 38000, b_39_r5, 199},
  {"Sleep", PR_RAW, 0, 0, 0, 38000, b_39_r6, 199},
  {"Timer Up", PR_RAW, 0, 0, 0, 38000, b_39_r7, 199},
  {"Degree F/C", PR_RAW, 0, 0, 0, 38000, b_39_r8, 199},
  {"Timer Off", PR_RAW, 0, 0, 0, 38000, b_39_r9, 199},
  {"LED Display", PR_RAW, 0, 0, 0, 38000, b_39_r10, 199},
  {"Energy_Saver", PR_RAW, 0, 0, 0, 38000, b_39_r11, 199},
};
static const BRemote rem_40[] = {
  {"MAW05R1", b_39, 12},
};
static const uint16_t b_41_r0[] = {8997,4543,627,1660,627,1659,627,582,627,1660,627,1659,628,1659,628,1684,629,555,628,1659,628,554,629,581,628,1659,628,555,628,582,627,555,628,554,628,581,628,554,628,554,629,581,628,554,628,1659,628,581,628,554,629,554,628,581,628,554,629,554,629,1659,628,581,628,1658,629,554,629,581,628,1659,628,554,629,20037,628,555,628,581,628,554,629,554,629,1659,628,581,628,555,628,554,629,580,629,554,629,556,627,580,629,553,630,556,626,1690,623,554,629,554,629,582,627,555,628,554,628,581,628,556,627,556,627,581,628,555,628,555,628,580,629,554,629,1660,627,1659,628,580,629,555,628,40020,8996,4518,626,1686,627,1659,628,556,627,1658,629,1687,626,1660,627,1661,626,555,627,1685,628,555,628,556,627,1686,627,555,627,555,627,583,652,529,654,530,653,555,654,530,653,530,653,555,654,1633,654,529,654,555,628,556,653,529,654,555,628,556,653,1633,654,1633,654,1660,653,528,655,530,653,1634,652,555,654,19985,653,556,653,529,653,529,653,555,654,529,653,529,654,556,653,530,653,529,653,557,652,529,654,529,654,556,653,530,652,530,653,556,653,529,654,530,653,557,652,528,654,530,653,555,654,1634,653,1634,653,529,654,556,653,529,654,530,653,556,653,1634,653,529,654,1661,652};
static const uint16_t b_41_r1[] = {8995,4545,627,1658,629,1660,627,581,628,554,629,1660,627,1659,628,1685,628,555,628,1659,628,581,628,554,629,1660,627,554,629,581,628,555,628,554,629,581,628,555,628,555,628,581,628,555,628,1660,627,581,628,554,629,555,627,581,628,554,628,556,627,1686,627,555,627,1660,627,557,626,581,628,1658,629,555,628,20037,627,555,628,581,628,555,628,556,627,1687,626,556,627,555,628,582,627,556,627,556,626,582,627,555,628,557,626,581,628,1659,628,555,628,555,628,581,628,554,628,556,627,584,625,556,626,556,627,582,627,557,625,555,627,582,627,555,627,1661,625,1686,627,556,653,1632,655,39992,8996,4518,650,1660,653,1635,627,556,627,583,625,1660,628,1661,626,1660,627,581,628,1658,629,557,625,557,626,1686,627,556,627,555,628,582,627,556,627,556,627,582,627,555,628,557,626,582,627,1661,626,557,626,583,626,556,627,556,627,581,628,556,627,1661,626,1660,627,1687,626,555,628,556,627,1688,625,557,626,20012,626,581,628,556,627,556,626,583,626,556,626,556,627,583,626,556,627,557,626,582,627,555,628,556,627,582,627,556,627,556,627,583,626,556,626,556,627,584,625,556,627,556,627,581,628,1661,626,1661,626,582,627,556,627,555,628,583,626,557,625,1660,627,557,626,583,626};
static const uint16_t b_41_r2[] = {8995,4545,626,554,628,555,627,581,628,1661,625,1659,628,1660,626,581,628,555,627,1660,627,581,628,556,626,1661,625,582,627,556,626,555,627,581,628,555,627,555,628,582,627,556,626,555,627,1687,626,555,628,554,629,581,628,555,627,555,627,581,628,1659,628,555,628,1660,626,581,628,556,627,1659,627,580,629,20008,627,555,628,582,627,556,627,555,627,581,628,556,627,554,628,581,628,557,625,556,626,582,627,555,627,557,626,581,627,1661,626,556,626,582,627,555,627,556,626,581,628,556,626,555,628,581,628,556,627,555,627,583,626,556,626,556,627,1685,628,1659,628,1659,628,1659,628,40017,8992,4544,626,556,626,555,627,582,627,1660,627,1660,626,1660,626,581,628,556,626,1658,629,582,601,582,627,1660,626,556,627,583,626,556,627,556,626,582,627,555,627,555,627,581,628,556,626,1660,627,582,627,555,627,554,629,582,627,555,627,556,626,1687,626,1660,627,1660,627,555,627,582,627,1659,627,555,628,20036,627,556,626,554,628,582,627,555,627,556,627,581,628,556,626,554,628,584,625,557,626,556,627,582,627,555,628,556,626,582,627,556,626,554,629,582,627,556,626,556,626,1685,628,1659,628,556,627,1685,628,555,628,555,627,582,627,556,627,555,627,1661,626,1685,628,556,627};
static const uint16_t b_41_r3[] = {8997,4542,625,1663,624,558,602,606,626,1662,625,1661,626,1660,626,584,625,555,628,1661,626,582,627,557,626,1662,625,582,627,556,627,556,627,584,625,557,626,556,627,583,626,556,627,556,627,1660,626,584,625,556,626,555,628,583,626,556,626,556,627,1687,626,557,626,1661,625,582,627,557,626,1662,625,555,628,20039,625,556,627,582,627,555,627,556,627,582,627,556,626,557,625,582,627,557,626,557,626,585,624,555,628,556,626,582,627,1660,627,557,625,584,625,558,625,556,626,582,627,556,627,556,626,581,628,555,628,555,628,582,627,556,626,557,626,581,628,555,628,556,627,582,627,40020,8970,4542,626,1661,625,555,628,583,626,1661,626,1659,628,1661,626,582,626,556,626,1660,627,582,627,555,627,1660,627,583,626,557,626,555,628,583,626,556,627,556,626,582,627,554,628,558,625,1686,625,559,626,555,628,584,623,560,624,555,628,582,626,1660,628,1660,627,1660,627,582,652,531,652,1633,653,531,652,20012,652,529,654,555,654,529,654,529,654,556,653,529,653,529,654,555,654,529,653,530,652,556,653,529,654,530,653,556,653,530,653,531,652,557,652,531,651,530,652,556,653,1634,653,1634,653,532,651,1661,652,531,651,533,650,556,653,530,652,1636,651,1662,651,1634,653,531,652};
static const uint16_t b_41_r4[] = {8996,4542,603,1684,603,579,604,606,603,1683,604,1685,602,1685,602,607,602,579,604,1684,603,1710,603,1685,602,580,603,580,603,605,604,580,603,580,603,607,602,580,603,580,603,606,603,580,603,1685,602,606,603,579,604,582,601,608,601,580,603,578,605,1711,602,580,602,1684,603,579,604,606,603,1685,602,580,603,20063,603,580,603,606,603,579,604,580,603,607,602,581,602,580,603,606,603,579,604,581,602,608,601,580,603,583,600,607,602,1684,603,580,603,606,603,580,603,580,603,606,603,581,602,579,603,606,603,580,602,580,603,607,602,581,601,580,603,606,603,1684,603,1684,603,1685,602,40046,8997,4516,602,1710,603,580,603,581,602,1710,603,1684,603,1684,603,581,602,606,603,1684,603,1685,602,1684,603,606,603,580,603,580,602,608,601,580,602,580,603,607,602,582,600,580,603,605,604,1683,604,579,603,607,602,581,602,579,603,606,603,582,600,1685,602,1713,573,1710,603,580,602,580,603,1710,603,580,603,20062,603,580,603,581,602,607,602,580,603,580,603,606,603,579,604,580,602,606,603,580,602,580,603,607,627,556,627,555,603,606,603,580,628,556,627,581,603,581,602,580,603,1684,628,1685,603,580,603,1685,602,606,603,580,602,580,603,607,627,1660,602,580,628,1659,603,606,603};
static const uint16_t b_41_r5[] = {8999,4541,604,1685,602,579,604,605,604,1682,605,1684,603,1685,602,606,603,579,604,580,603,607,602,1683,604,581,602,606,603,580,602,580,603,605,604,579,604,578,605,604,605,582,601,579,604,1709,604,579,604,580,602,605,604,578,605,580,603,605,604,1684,603,580,603,1684,603,606,603,580,603,1684,603,605,604,20035,603,580,603,606,603,581,602,578,604,605,604,579,603,579,604,605,604,579,604,579,603,605,604,579,603,579,604,605,604,1683,604,580,603,605,604,578,605,581,602,605,604,580,603,579,604,604,605,579,604,578,605,605,604,578,605,579,603,1710,603,1684,603,579,604,1683,604,40042,8999,4541,604,1684,603,579,604,606,603,1683,604,1684,603,1684,603,606,603,580,603,578,605,605,604,1684,603,579,604,605,578,605,604,579,604,605,578,606,603,580,603,605,578,606,603,577,606,1684,603,605,604,580,603,578,604,606,603,579,604,579,604,1710,603,1684,603,1683,604,579,604,606,603,1682,605,580,603,20063,603,581,602,606,603,580,603,580,603,605,604,578,605,580,603,605,604,579,604,579,604,607,602,579,604,578,605,605,604,583,600,580,603,605,604,580,603,579,604,603,606,1684,602,1685,602,579,604,1710,603,581,602,579,604,606,603,580,603,580,603,1710,603,579,604,580,603};
static const uint16_t b_41_r6[] = {8998,4542,602,579,604,579,603,1710,603,1683,604,1683,604,1683,604,606,603,578,605,1684,603,606,603,579,603,1683,604,605,604,578,605,579,604,606,603,579,604,581,602,606,603,581,602,580,603,1685,602,606,603,579,604,579,604,607,602,582,601,581,602,1709,604,579,604,1685,602,605,604,578,604,1684,603,579,604,20062,601,580,602,606,603,580,602,579,603,605,604,578,604,579,603,605,604,579,604,579,603,606,603,579,604,579,604,606,603,1684,603,580,603,607,602,579,604,581,602,605,604,579,604,580,603,606,603,580,603,580,603,606,603,580,603,1684,603,1682,605,1709,604,579,604,580,603,40043,8998,4542,602,580,602,578,605,1683,604,1709,604,1684,603,1684,603,605,578,606,603,1684,603,580,602,606,603,1683,604,580,603,605,604,580,602,578,605,604,605,580,603,580,603,605,604,578,605,1684,603,605,604,580,602,579,604,605,604,580,603,579,604,1684,603,1710,603,1684,603,579,604,606,603,1684,603,580,603,20061,603,579,604,579,603,606,603,579,604,580,602,606,603,578,605,580,602,605,604,580,602,579,603,606,603,579,603,579,604,606,603,579,604,579,604,606,603,580,603,579,603,1710,603,1684,603,579,604,1682,604,606,603,579,604,579,603,606,603,579,604,1683,604,605,604,1683,604};
static const uint16_t b_41_r7[] = {8996,4543,601,1683,604,580,603,607,602,1684,603,1684,603,1684,603,606,603,580,628,556,601,606,603,1684,602,581,626,583,601,581,602,580,603,607,602,579,604,580,602,606,603,580,628,556,601,1711,602,579,604,580,602,606,628,554,603,580,627,581,603,1685,602,581,602,1685,626,582,627,555,628,1659,628,581,628,20009,604,580,627,582,627,556,602,579,603,606,628,554,627,556,603,606,603,581,626,556,601,607,627,555,603,579,604,606,628,1659,628,556,626,582,626,554,629,555,627,582,627,555,628,554,628,581,603,581,627,553,629,583,626,555,603,580,627,1685,628,1659,628,555,627,1658,628,40019,8997,4542,628,1658,604,580,603,606,603,1684,603,1685,602,1684,603,606,603,580,603,580,602,605,604,1684,603,580,603,606,577,608,601,580,627,583,575,607,627,555,628,582,576,606,603,580,603,1685,626,583,601,581,601,580,602,608,601,580,603,581,626,1685,604,1684,627,1659,628,556,627,582,626,1660,627,556,602,20064,602,581,602,605,604,581,602,580,603,607,602,579,628,556,602,607,602,580,603,580,603,607,602,580,603,580,603,606,603,581,602,580,603,606,628,556,602,581,627,581,603,580,603,581,602,1684,628,1686,603,579,629,555,603,607,602,580,627,1659,604,1711,603,580,603,580,603};
static const BBtn b_41[] = {
  {"Power_on", PR_RAW, 0, 0, 0, 38000, b_41_r0, 279},
  {"Off", PR_RAW, 0, 0, 0, 38000, b_41_r1, 279},
  {"Auto", PR_RAW, 0, 0, 0, 38000, b_41_r2, 279},
  {"25", PR_RAW, 0, 0, 0, 38000, b_41_r3, 279},
  {"23", PR_RAW, 0, 0, 0, 38000, b_41_r4, 279},
  {"20", PR_RAW, 0, 0, 0, 38000, b_41_r5, 279},
  {"Heat_25", PR_RAW, 0, 0, 0, 38000, b_41_r6, 279},
  {"Wind_max", PR_RAW, 0, 0, 0, 38000, b_41_r7, 279},
};
static const BRemote rem_42[] = {
  {"YAPOF", b_41, 8},
};
static const uint16_t b_43_r0[] = {3305,1598,432,411,413,404,410,1198,440,403,411,1197,441,402,412,405,409,408,406,1202,436,1198,440,403,411,406,408,409,405,1229,409,1199,439,404,410,407,407,410,414,403,411,406,408,409,405,412,412,405,409,408,406,411,413,404,410,407,407,410,414,1219,409,409,405,412,412,405,409,408,406,411,413,404,410,407,407,1226,412,405,409,409,405,412,412,405,409,1224,414,1194,434,1201,437,1196,432,1203,435,1198,440,1194,434,1200,438,378,436,408,406,1228,410,381,433,410,414,403,411,406,408,409,405,412,412,405,409,408,406,1228,410,1198,440,403,411,406,408,1199,439,405,409,408,406,411,413,1221,407,410,414,1219,409,409,405,1202,436,1199,439,403,411,406,408,410,414,402,412,405,409,408,406,411,413,404,410,407,407,410,414,403,411,406,408,409,405,412,412,405,409,408,406,411,413,404,410,407,407,410,414,403,411,406,408,409,405,412,412,404,410,408,406,411,413,403,411,407,407,410,414,402,412,405,409,408,406,411,413,404,410,407,407,410,414,403,411,406,408,409,405,412,412,405,409,408,406,1202,436,407,407,410,414,403,411,406,408,1200,438,1195,433,1202,436,406,408,1201,437,405,409};
static const uint16_t b_43_r1[] = {3306,1624,406,411,413,404,410,1224,414,403,411,1223,405,412,412,405,409,408,406,1228,410,1224,414,402,412,406,408,409,405,1229,409,1224,414,403,411,407,407,410,414,402,412,406,408,409,405,412,412,404,410,408,406,411,413,403,411,406,408,409,405,1230,408,408,406,411,413,404,410,407,407,410,414,403,411,406,408,1226,412,405,409,408,406,411,413,404,410,1224,414,403,411,406,408,409,405,412,412,405,409,408,406,1228,410,407,407,1227,411,1222,406,1229,409,1198,440,1220,408,1227,411};
static const uint16_t b_43_r2[] = {3308,1596,432,410,413,404,409,1225,412,404,409,1225,412,405,408,409,404,412,411,1223,414,1220,407,410,414,403,410,407,406,1228,409,1198,439,404,409,408,405,412,411,405,408,409,404,412,411,406,407,409,415,403,410,406,407,410,413,403,410,407,406,1228,409,407,406,411,412,404,409,382,431,412,411,405,408,409,404,1203,434,409,415,376,437,406,407,410,413,1220,407,1227,410,1224,413,1221,406,1229,408,1199,438,1196,441,1220,407,410,414,403,410,1224,413,377,436,407,406,411,412,404,409,408,405,412,411,405,408,409,404,1230,407,1226,411,406,407,410,413,403,410,407,406,384,439,404,409,407,406,1228,409,408,405,411,412,1222,405,412,412,405,408,409,404,412,411,406,407,383,441,403,410,406,407,410,413,403,410,407,406,410,413,404,409,381,432,411,413,404,409,408,405,412,411,405,408,409,404,412,412,405,408,409,404,413,410,406,407,410,414,403,410,407,406,410,413,403,410,407,406,411,413,404,409,408,405,411,413,405,408,408,405,412,411,405,408,409,404,412,411,406,407,409,414,403,410,1223,414,403,410,407,406,1228,409,1225,412,1222,405,1229,408,409,404,386,438,406,407,1227,410};
static const uint16_t b_43_r3[] = {3309,1620,409,409,404,386,438,1223,404,413,410,1223,414,403,410,406,407,410,414,1220,407,1228,409,381,432,411,413,404,409,1225,412,1222,405,412,411,379,434,409,404,412,412,379,434,409,415,403,410,406,407,410,414,403,410,407,406,410,414,404,409,1224,413,378,435,407,406,385,439,378,435,408,405,411,412,405,408,1226,411,405,408,409,404,412,412,406,407,1226,411,1223,414,1194,433,1227,410,1224,413,1221,406,1228,409,1199,438,405,408,409,404,1203,434,409,415,402,411,406,407,410,414,403,410,406,407,410,414,403,410,1198,439,1221,406,411,413,404,409,381,432,411,413,405,408,408,405,1229,408,1200,437,406,407,409,415,1193,434,410,414,377,436,380,433,384,440,403,410,407,406,411,413,404,409,408,405,411,413,404,409,408,405,385,439,405,408,408,405,412,412,405,408,409,404,412,411,406,407,409,404,413,411,406,407,409,415,403,410,406,407,410,414,403,410,407,406,410,414,403,410,407,406,411,412,404,409,408,405,411,413,404,409,408,405,412,411,405,408,408,405,412,411,405,408,409,404,1230,407,409,415,376,437,1223,414,1220,407,1201,436,1198,439,1221,406,1202,435,1199,438,379,434};
static const uint16_t b_43_r4[] = {3310,1593,437,380,434,383,441,1193,435,383,441,1192,436,381,433,384,440,377,437,1197,441,1193,435,383,431,385,439,378,436,1198,440,1194,434,384,440,376,438,379,435,382,442,375,439,378,436,381,433,384,440,377,437,380,434,384,440,376,438,379,435,1199,439,378,436,381,433,384,440,377,437,380,434,383,441,376,438,1196,432,385,439,378,436,381,433,384,440,1194,434,1200,438,1196,432,1202,436,1198,440,1194,434,1200,438,1196,442,375,439,378,436,1198,440,377,437,380,434,383,441,376,438,379,435,382,432,385,439,378,436,1198,440,1194,434,383,441,376,438,379,435,382,432,385,439,378,436,381,433,384,440,1193,435,383,441,1192,436,381,433,385,439,377,437,380,434,383,441,376,438,379,435,382,432,385,439,378,436,381,433,384,440,377,437,380,434,383,441,376,438,379,435,382,432,385,439,378,436,381,433,384,440,376,438,380,434,383,441,375,439,378,436,381,433,384,440,377,437,380,434,383,441,376,438,379,435,382,442,375,439,378,436,381,433,384,440,377,437,380,434,383,441,376,438,379,435,1199,439,378,436,381,433,1201,437,1197,441,1193,435,1199,439,378,436,1198,440,1194,434,383,441};
static const uint16_t b_43_r5[] = {3313,1616,414,403,411,406,408,1200,438,405,409,1199,439,404,410,407,407,410,414,1193,435,1200,438,404,410,408,406,411,413,1194,434,1201,437,405,409,408,406,412,412,404,410,408,406,411,413,403,411,406,408,409,405,412,412,405,409,408,406,411,413,1194,434,410,414,403,411,406,408,409,405,412,412,405,409,408,406,1201,437,406,408,409,415,402,412,405,409,1199,439,1195,433,1201,437,1197,431,1203,435,1199,439,1195,433,1201,437,379,435,409,405,1228,410,407,407,411,413,404,410,407,407,410,414,402,412,405,409,408,406,1228,410,1198,440,376,438,406,408,409,405,412,412,405,409,408,406,1228,410,406,408,1226,412,405,409,1225,413,404,410,407,407,410,414,403,411,406,408,383,431,386,438,405,409,408,406,411,413,404,410,407,407,410,414,403,411,406,408,409,405,412,412,404,410,408,406,411,413,403,411,407,407,409,405,412,412,405,409,408,406,411,413,404,410,407,407,410,414,403,411,406,408,409,405,412,412,405,409,408,406,411,413,403,411,406,408,409,405,412,412,405,409,408,406,411,413,1221,407,410,414,403,411,1196,432,1202,436,1198,440,1194,434,1200,438,405,409,1199,439,404,410};
static const uint16_t b_43_r6[] = {3306,1597,432,410,414,377,437,1197,441,402,412,1197,431,412,412,405,409,382,432,1202,436,1198,440,403,411,380,434,383,441,1194,434,1200,438,405,409,381,433,385,439,404,410,381,432,384,440,377,437,380,434,383,441,376,438,379,435,382,431,412,412,1195,494,323,439,404,410,380,434,384,440,376,438,406,408,383,441,1193,435,408,406,411,413,378,436,381,433,1202,436,1198,440,1194,434,1200,438,1196,432,1203,435,1199,439,1195,433,410,414,403,411,1197,441,402,412,405,409,382,432,412,412,405,409,381,433,411,413,404,410,1198,440,1194,434,409,415,402,412,379,435,382,432,385,439,378,436,408,406,1202,436,1198,440,403,410,1197,441,402,412,405,409,408,406,411,413,378,436,381,432,384,440,377,437,380,434,410,414,376,438,405,409,382,432,385,439,378,436,381,433,411,413,377,437,380,434,383,441,376,438,379,435,382,442,375,439,378,436,382,432,385,439,377,437,381,433,384,440,376,438,380,434,383,441,376,438,379,435,382,432,385,439,378,436,407,407,384,440,377,437,380,434,383,441,402,412,1196,432,412,412,378,436,1199,439,1195,432,1201,437,1197,441,402,412,379,435,1199,439,404,410};
static const uint16_t b_43_r7[] = {3304,1626,413,403,410,407,406,1227,410,407,406,1228,409,381,432,384,440,404,409,1224,413,1221,406,411,413,378,435,407,406,1228,409,1225,412,404,409,408,405,385,439,405,408,408,405,412,412,405,408,409,404,386,438,405,408,409,404,412,412,405,408,1200,437,405,408,382,431,412,412,406,407,409,404,412,412,406,407,1226,411,406,407,409,415,403,410,406,407,1227,410,1224,413,1194,433,1201,436,1224,414,1194,433,1227,410,1198,439,404,409,381,432,1228,409,408,405,411,413,404,409,408,405,411,413,405,408,408,405,412,412,1222,405,1203,434,409,404,412,412,405,408,409,404,412,412,405,408,1226,411,1223,414,1219,408,409,415,1220,407,409,415,376,437,406,407,409,415,376,437,406,407,409,415,402,411,406,407,409,415,402,411,406,407,409,415,403,410,406,407,409,415,403,410,406,407,410,414,403,410,406,407,410,414,403,410,406,407,410,414,403,410,407,406,410,414,403,410,407,406,410,414,403,410,407,406,410,414,404,409,407,406,411,413,404,409,407,406,411,413,404,409,407,406,411,413,404,409,1198,439,404,409,408,405,1228,409,1199,439,1222,405,1228,409,1225,412,1222,405,412,412,405,408};
static const uint16_t b_43_r8[] = {3305,1599,440,403,410,406,407,1201,436,407,406,1227,410,407,406,410,414,403,410,1198,439,1221,406,411,413,404,409,408,405,1228,409,1225,412,378,435,408,405,412,412,405,408,408,405,412,412,405,408,409,404,412,412,405,408,409,404,412,412,406,407,1226,411,406,407,383,441,402,411,406,407,410,414,403,410,406,407,1227,410,406,407,383,441,403,410,407,406,1227,410,1224,413,1221,406,1228,409,1198,439,1195,432,1228,409,1225,412,405,408,382,431,1229,409,382,431,412,412,379,434,383,430,413,411,406,407,409,415,402,411,1223,414,1194,433,410,414,376,437,406,407,410,414,403,410,407,406,410,414,403,410,407,406,1227,410,1224,413,404,409,381,432,411,413,404,409,408,405,411,413,404,409,408,405,411,413,405,408,408,405,411,413,405,408,408,405,412,412,405,408,408,405,412,412,405,408,382,431,412,412,405,408,409,404,412,412,406,407,409,404,412,412,406,407,409,404,413,411,406,407,409,415,402,411,406,407,409,415,403,410,406,407,410,414,403,410,406,407,410,414,403,410,406,407,410,414,1220,407,410,414,403,410,1224,413,1220,407,1227,410,1224,413,404,409,1225,412,378,435,408,405};
static const uint16_t b_43_r9[] = {3314,1616,413,404,409,407,406,1228,409,408,405,1228,409,381,432,411,413,405,408,1199,438,1196,431,412,412,405,408,409,404,1230,407,1226,411,406,407,409,415,402,411,406,407,410,414,403,410,406,407,410,414,403,410,407,406,410,414,404,409,407,406,1228,409,407,406,411,413,404,409,408,405,411,413,404,409,408,405,1229,408,408,405,412,412,405,408,408,405,1229,408,1200,437,1222,405,1229,408,1226,411,1223,414,1220,407,1201,436,380,433,410,414,1221,406,384,440,377,436,407,406,384,440,404,409,408,405,411,413,404,409,1225,412,1222,405,412,412,379,434,408,405,412,412,405,408,409,404,1230,407,409,404,413,411,1223,414,1220,407,409,415,403,410,406,407,410,414,403,410,407,406,410,414,404,409,407,406,410,414,404,409,407,406,411,412,404,409,408,405,411,413,404,409,408,405,411,413,405,408,408,405,411,413,405,408,408,405,412,412,405,408,409,404,412,412,405,408,409,404,412,412,406,407,409,404,413,410,406,407,409,415,403,410,406,407,410,414,403,410,406,407,410,414,403,410,407,406,1228,409,407,406,411,413,1221,406,1202,435,1225,412,1221,406,1229,408,408,405,412,412,405,408};
static const uint16_t b_43_r10[] = {3306,1624,405,412,411,405,408,1226,411,406,407,1226,411,406,407,410,414,403,410,1223,414,1194,433,410,414,404,409,407,406,1228,409,1198,439,404,409,408,405,412,411,405,408,409,404,412,412,406,407,409,404,413,410,406,407,383,441,403,410,407,406,1227,410,407,406,411,412,404,409,408,405,411,413,405,408,408,405,1229,408,408,405,412,411,405,408,409,404,1229,408,1200,437,1223,414,1220,407,1227,410,1224,413,1221,406,1228,409,408,405,412,412,1222,405,412,412,406,407,409,415,403,410,406,407,410,414,403,410,407,406,1227,410,1224,413,404,409,408,405,411,412,405,408,408,405,412,412,405,408,1226,411,406,407,1226,411,1196,441,403,410,407,406,410,414,404,409,407,406,411,413,404,409,408,405,411,412,405,408,408,405,412,411,405,408,409,404,412,412,406,407,409,404,413,410,406,407,410,414,403,410,406,407,410,414,403,410,407,406,411,412,404,409,408,405,411,412,404,409,408,405,412,411,405,408,408,405,412,411,405,408,409,404,413,410,406,407,409,415,403,410,406,407,410,414,403,410,1224,413,403,410,407,406,1228,409,1198,439,1221,406,1228,409,408,405,412,411,405,408,409,404};
static const uint16_t b_43_r11[] = {3314,1616,413,404,409,407,406,1228,409,381,432,1202,435,382,431,385,439,405,408,1226,411,1196,431,386,438,379,434,409,415,1220,407,1227,410,380,433,384,440,403,410,407,406,384,440,404,409,408,405,411,412,404,409,408,405,412,411,405,408,408,405,1229,408,382,431,386,438,405,408,409,404,413,410,406,407,409,415,1220,407,383,441,377,436,407,406,410,414,1221,406,1201,436,1225,412,1222,405,1229,408,1199,438,1196,441,1193,434,383,440,403,410,1224,413,377,436,381,432,411,413,404,409,407,406,411,413,404,409,408,405,1229,408,1226,411,379,434,409,404,412,411,406,407,409,415,402,411,1223,414,1220,407,410,414,1194,433,1228,409,407,406,385,439,404,409,408,405,411,413,405,408,408,405,412,412,405,408,409,404,412,411,406,407,383,441,402,411,406,407,409,415,403,410,406,407,410,414,403,410,407,406,410,413,403,410,407,406,411,413,404,409,408,405,411,413,404,409,408,405,411,413,405,408,408,405,412,412,405,408,409,404,412,412,406,407,409,415,376,437,406,407,409,415,403,410,406,407,1201,436,380,433,410,414,1221,406,1202,435,1198,439,1222,405,1229,408,1226,411,1196,441,1220,407};
static const uint16_t b_43_r12[] = {3308,1622,407,410,413,403,410,1224,413,404,409,1225,412,404,409,408,405,412,411,1222,405,1229,408,409,415,403,410,406,407,1227,410,1224,413,404,409,408,405,411,412,405,408,408,405,412,411,405,408,409,404,412,412,406,407,409,415,403,410,406,407,1227,410,407,406,410,413,404,409,407,406,411,412,404,409,408,405,1229,408,408,405,412,411,405,408,409,404,1230,407,1226,411,1223,414,1220,407,1227,410,1224,413,1195,432,1229,408,409,404,386,438,1223,414,403,410,406,407,410,414,403,410,407,406,410,413,404,409,407,406,1228,409,1225,412,405,408,408,405,412,411,406,407,409,404,413,411,406,407,410,414,1220,407,1227,410,1224,413,404,409,408,405,411,412,405,408,408,405,412,411,405,408,409,404,412,411,406,407,409,415,403,410,406,407,410,414,403,410,407,406,410,413,404,409,407,406,411,412,404,409,408,405,412,411,405,408,409,404,412,411,406,407,409,404,413,411,406,407,409,415,403,410,406,407,410,414,403,410,407,406,410,413,404,409,407,406,411,413,404,409,408,405,411,412,405,408,1226,411,405,408,409,404,1230,407,1226,411,1223,414,1220,407,410,413,1221,406,1228,409,1225,412};
static const uint16_t b_43_r13[] = {3305,1625,414,403,410,407,406,1227,410,407,406,1228,409,408,405,411,412,405,408,1225,412,1222,405,412,411,406,407,409,414,1220,407,1227,410,407,406,411,412,404,409,408,405,411,412,405,408,408,405,412,411,405,408,409,404,412,411,406,407,409,415,1220,407,410,413,403,410,407,406,410,413,404,409,407,406,411,412,1222,405,412,411,405,408,408,405,412,412,1223,404,1229,408,1226,411,1197,440,1194,433,1201,436,1198,439,1195,432,412,411,406,407,1226,411,406,407,410,413,403,410,407,406,411,412,404,409,408,405,411,412,1222,405,1229,408,408,405,412,411,405,408,409,404,413,410,406,407,1227,410,406,407,1227,410,1224,413,1194,433,411,412,405,408,408,405,412,412,405,408,409,404,412,411,406,407,409,415,403,410,406,407,410,413,403,410,407,406,411,412,404,409,408,405,411,412,405,408,408,405,412,411,405,408,409,404,413,410,406,407,409,415,403,410,406,407,410,414,403,410,407,406,410,414,404,409,407,406,411,412,404,409,408,405,412,411,405,408,409,404,412,411,406,407,409,404,413,410,1223,414,403,410,407,406,1227,410,1224,413,1221,406,1202,435,1225,412,405,408,1226,411,1223,414};
static const uint16_t b_43_r14[] = {3306,1624,405,412,412,406,407,1226,411,406,407,1227,410,406,407,410,414,403,410,1224,413,1221,406,411,413,404,409,408,405,1229,408,1225,412,405,408,409,404,412,412,406,407,409,404,413,411,406,407,409,415,403,410,406,407,410,414,403,410,407,406,1227,410,407,406,410,413,404,409,407,406,411,413,404,409,408,405,1228,409,381,432,411,413,405,408,408,405,1203,434,1226,411,1223,414,1193,434,1226,411,1223,414,1220,407,1227,410,407,406,411,413,1221,406,411,413,404,409,408,405,412,412,405,408,409,404,412,412,405,408,1226,411,1223,414,402,411,406,407,409,415,403,410,406,407,410,414,403,410,1224,413,1221,406,1228,409,1224,413,404,409,408,405,412,412,405,408,408,405,412,412,405,408,409,404,412,412,406,407,409,404,413,411,406,407,409,415,403,410,406,407,410,414,403,410,407,406,410,414,403,410,407,406,410,414,404,409,407,406,411,413,404,409,408,405,411,413,404,409,408,405,411,413,405,408,408,405,412,412,405,408,409,404,412,412,405,408,409,404,412,412,406,407,409,404,413,411,1223,414,403,410,406,407,1227,410,1224,413,1221,406,1228,409,407,406,411,413,1222,405,1202,435};
static const uint16_t b_43_r15[] = {3309,1621,409,408,406,411,413,1220,408,409,405,1229,409,408,406,411,413,404,410,1224,414,1220,408,409,405,412,412,405,409,1225,413,1221,407,410,414,403,411,406,408,409,405,412,412,405,409,408,406,411,413,404,410,407,407,410,414,403,411,406,408,1226,412,405,409,408,406,411,413,404,410,407,407,410,404,413,411,1222,406,411,413,404,410,407,407,411,413,1220,408,1226,412,1222,406,1228,410,1198,440,1193,435,1199,439,1195,433,411,413,404,410,1224,414,403,411,406,408,409,405,412,412,405,409,408,406,411,413,404,410,1224,414,1193,435,409,405,412,412,405,409,408,406,411,413,404,410,407,407,1227,411,406,408,409,405,412,412,1221,407,411,413,403,411,407,407,410,404,413,411,405,409,408,406,412,412,404,410,407,407,411,413,403,411,407,407,410,404,413,411,405,409,408,406,411,413,404,410,407,407,410,414,403,411,406,408,409,405,412,412,405,409,408,406,411,413,404,410,407,407,410,414,403,411,406,408,409,405,412,412,405,409,408,406,411,413,404,410,407,407,410,414,403,411,406,408,1226,412,405,409,408,406,411,413,1221,407,1227,411,1222,406,412,412,405,409,408,406,1228,410};
static const uint16_t b_43_r16[] = {3309,1596,434,408,406,411,413,1221,407,410,414,1220,408,409,405,412,412,405,409,1225,413,1194,434,410,414,403,411,406,408,1226,412,1195,433,411,413,404,410,407,407,410,414,403,411,406,408,410,404,413,411,405,409,408,406,412,412,404,410,408,406,1227,411,406,408,409,405,412,412,405,409,408,406,412,412,404,410,1224,414,403,411,406,408,409,405,413,411,1222,406,1202,436,1224,414,1194,434,1200,438,1196,432,1202,436,1198,440,403,411,406,408,1226,412,405,409,409,405,412,412,405,409,408,406,411,413,404,410,407,407,1227,411,1222,406,412,412,405,409,408,406,411,413,404,410,407,407,1227,411,1196,432,412,412,405,409,408,406,1228,410,407,407,410,414,403,411,407,407,410,414,402,412,406,408,409,405,412,412,405,409,408,406,411,413,404,410,407,407,410,414,403,411,406,408,409,405,412,412,405,409,408,406,411,413,404,410,407,407,410,414,403,411,406,408,409,405,412,412,405,409,408,406,411,413,404,410,407,407,410,414,403,411,406,408,409,405,412,412,405,409,408,406,411,413,404,410,1224,414,403,411,406,408,409,405,1229,409,1198,440,1221,407,1201,437,1197,431,1203,435,408,406};
static const uint16_t b_43_r17[] = {3316,1589,430,412,412,405,409,1225,413,404,410,1224,414,376,438,406,408,409,405,1229,409,1225,413,404,410,407,407,410,414,1220,408,1200,438,405,409,408,406,411,413,404,410,407,407,410,414,403,411,406,408,409,405,412,412,405,409,408,406,411,413,1221,407,410,414,403,411,406,408,409,405,412,412,405,409,408,406,1229,409,407,407,410,414,403,411,406,408,1227,411,1196,432,1229,409,1225,413,1221,407,1201,437,1223,405,1229,409,382,432,385,439,1221,407,410,414,403,411,406,408,410,414,402,412,406,408,409,405,412,412,1222,406,1228,410,407,407,410,414,403,411,406,408,409,405,412,412,405,409,408,406,1228,410,407,407,410,414,1220,408,409,405,412,412,405,409,408,406,411,413,404,410,407,407,410,414,403,411,406,408,409,405,412,412,405,409,408,406,411,413,404,410,407,407,410,414,403,411,406,408,409,405,412,412,405,409,408,406,411,413,404,410,407,407,410,414,403,411,406,408,409,405,412,412,405,409,408,406,411,413,404,410,407,407,410,414,403,411,406,408,409,405,413,411,405,409,1226,412,404,410,408,406,411,413,1221,407,1227,411,1223,405,412,412,1222,406,1228,410,407,407};
static const uint16_t b_43_r18[] = {3306,1624,406,411,413,404,410,1224,414,402,412,1222,406,412,412,405,409,408,406,1228,410,1224,414,403,411,406,408,409,405,1229,409,1225,413,404,410,408,406,411,413,404,410,407,407,410,414,403,411,406,408,409,405,412,412,405,409,408,406,411,413,1221,407,410,414,403,411,407,407,410,404,413,411,406,408,409,405,1229,409,408,406,411,413,404,410,407,407,1227,411,1196,432,1203,435,1225,413,1221,407,1227,411,1224,414,1219,409,409,405,412,412,1222,406,411,413,404,410,408,406,411,413,404,410,407,407,410,414,403,411,1223,405,1229,409,408,406,411,413,404,410,407,407,410,414,403,411,1223,405,413,411,1222,406,412,412,405,409,1225,413,404,410,407,407,410,414,403,411,406,408,410,414,402,412,406,408,409,405,412,412,405,409,408,406,411,413,404,410,407,407,410,414,403,411,406,408,409,405,412,412,405,409,408,406,411,413,404,410,407,407,411,413,403,411,407,407,410,414,402,412,406,408,409,405,412,412,405,409,408,406,411,413,404,410,407,407,410,414,403,411,406,408,409,405,412,412,1222,406,411,413,404,410,408,406,1228,410,1223,415,1219,409,1226,412,405,409,1199,439,404,410};
static const uint16_t b_43_r19[] = {3311,1593,437,406,408,409,405,1229,409,408,406,1202,436,407,407,411,413,403,411,1224,414,1220,408,409,405,412,412,405,409,1199,439,1221,407,410,414,403,411,406,408,409,415,402,412,406,408,409,405,412,412,405,409,408,406,411,413,404,410,407,407,1227,411,406,408,409,405,412,412,405,409,408,406,411,413,404,410,1225,413,404,410,407,407,410,414,403,411,1197,431,1229,409,1225,413,1195,433,1228,410,1197,441,1193,435,1226,412,405,409,408,406,1229,409,408,406,411,413,404,410,407,407,410,414,403,411,406,408,409,405,1230,408,1226,412,404,409,408,406,411,413,377,437,381,433,410,414,403,411,1223,405,1230,408,408,406,411,413,1222,406,411,413,404,410,407,407,410,414,403,411,406,408,409,405,412,412,405,409,408,406,411,413,404,410,407,407,410,414,403,411,407,407,410,414,402,412,406,408,409,405,412,412,405,409,408,406,411,413,404,410,407,407,410,414,403,411,406,408,409,405,412,412,405,409,408,406,411,413,404,410,407,407,411,413,403,411,407,407,410,414,403,411,406,408,409,405,1229,409,408,406,411,413,404,410,1225,413,1220,408,1227,411,406,408,409,405,1229,409,408,406};
static const uint16_t b_43_r20[] = {3308,1623,407,410,414,403,411,1223,405,412,412,1222,406,411,413,404,410,408,406,1228,410,1224,414,403,411,406,408,383,441,1220,408,1200,438,405,409,382,432,411,413,404,410,407,407,411,413,404,410,407,407,410,414,403,411,406,408,409,405,412,412,1222,406,411,413,404,410,407,407,411,413,404,410,407,407,410,414,1194,434,409,405,412,412,405,409,408,406,1229,409,1225,413,1221,407,1200,438,1223,405,1229,409,1225,413,1221,407,411,413,378,436,1224,414,377,437,406,408,409,415,402,412,406,408,409,405,412,412,405,409,1225,413,1221,407,410,414,403,411,406,408,383,441,376,438,406,408,1226,412,1222,406,1229,409,381,433,411,413,1221,407,410,414,403,411,406,408,409,405,412,412,405,409,408,406,412,412,404,410,408,406,411,413,404,410,407,407,410,414,403,411,406,408,409,405,412,412,405,409,408,406,411,413,404,410,408,406,411,413,404,410,407,407,410,414,403,411,406,408,409,405,412,412,405,409,409,405,412,412,405,409,408,406,411,413,404,410,407,407,410,414,403,411,407,407,410,414,1193,435,382,432,412,412,405,409,1225,413,1222,406,1228,410,1224,414,1220,408,409,405,412,412};
static const uint16_t b_43_r21[] = {3305,1625,405,412,412,378,436,1225,413,378,436,1224,414,403,410,407,407,410,414,1194,434,1226,412,379,435,408,406,412,412,1196,432,1229,409,407,407,411,413,377,437,407,407,410,414,403,411,406,408,409,405,412,412,405,409,409,405,412,412,405,409,1225,413,404,410,407,407,411,413,403,411,407,407,410,414,403,411,1223,405,412,412,405,409,408,406,412,412,1195,433,1228,410,1224,414,1220,408,1200,438,1223,405,1229,409,1199,439,404,409,381,433,1228,410,407,407,410,414,377,437,380,434,410,414,403,411,406,408,409,405,1203,435,1226,412,404,409,408,406,384,440,404,409,407,407,410,414,403,411,406,408,410,414,1220,408,409,405,1229,409,408,406,385,439,404,410,407,407,411,413,404,410,407,407,410,414,403,411,406,408,409,405,412,412,405,409,409,405,412,412,405,409,408,406,411,413,404,410,407,407,411,413,403,410,407,407,410,414,403,411,406,408,409,405,412,412,405,409,408,406,412,412,405,408,408,406,411,413,404,410,407,407,410,414,403,411,406,408,410,414,402,412,406,408,409,405,1229,409,408,406,411,413,404,410,1225,413,1195,433,1227,411,406,408,1200,438,406,408,409,405};
static const uint16_t b_43_r22[] = {3314,1617,412,404,409,407,407,1228,410,407,407,1227,411,406,408,410,414,402,411,1197,430,1230,408,409,405,412,412,405,408,1225,413,1222,406,411,413,404,409,381,433,411,413,404,410,407,407,410,414,403,410,406,407,410,414,402,412,406,408,409,405,1229,409,382,431,412,412,405,408,408,406,411,413,404,409,407,407,1228,410,407,407,410,414,403,411,406,408,1227,411,1223,405,1229,409,1225,413,1222,406,1228,410,1224,414,1221,407,410,414,403,410,1224,414,403,410,406,408,409,415,402,412,406,408,409,405,412,412,405,409,1225,413,1222,406,411,413,378,436,407,407,410,414,403,411,407,407,1227,411,406,408,409,405,1230,408,409,405,1229,409,408,406,411,413,404,409,408,406,411,413,404,409,407,407,410,414,403,410,407,407,410,414,403,410,406,408,409,405,413,411,406,408,409,405,412,412,405,408,408,406,412,412,405,408,408,405,411,413,404,409,407,407,411,413,404,410,407,407,410,414,403,410,406,408,410,414,402,411,406,408,409,404,412,412,405,409,409,405,412,412,405,409,408,406,411,413,1221,407,411,413,404,409,407,407,1227,411,1223,415,1220,408,1226,412,379,435,409,405,412,412};
static const uint16_t b_43_r23[] = {3310,1621,408,408,406,411,413,1221,406,411,413,1221,406,410,414,404,409,407,406,1227,411,1223,415,403,410,406,408,409,415,1219,408,1226,412,405,409,408,406,412,412,405,408,408,405,411,413,405,408,408,405,411,413,404,409,408,405,411,413,404,409,1224,414,404,409,407,406,410,414,403,410,407,407,410,414,403,410,1223,415,402,411,406,407,409,404,412,412,1223,404,1229,409,1225,413,1195,432,1202,436,1198,440,1221,407,1227,411,407,407,410,414,1220,408,410,414,403,410,406,407,410,414,403,410,406,407,409,405,413,411,1223,405,1229,409,408,406,412,412,405,408,408,406,411,413,405,408,408,405,1228,410,407,407,1228,410,407,406,1227,411,407,407,410,414,403,410,406,407,410,414,403,410,406,408,409,405,413,411,406,408,409,404,412,412,405,408,408,406,412,412,405,408,408,406,411,413,404,409,408,406,411,413,404,409,407,406,411,413,404,409,407,407,410,414,403,410,406,408,410,414,403,410,406,408,409,405,412,412,406,408,409,405,412,412,405,408,408,405,412,412,405,408,408,406,411,413,1222,405,411,413,404,409,407,407,1228,410,1224,414,1220,407,410,414,403,410,406,408,410,414};
static const uint16_t b_43_r24[] = {3309,1621,408,408,405,385,439,1222,405,411,413,1221,406,384,440,404,409,381,432,1228,410,1198,440,403,410,380,433,410,414,1220,407,1227,411,406,407,409,404,386,438,405,409,382,431,412,412,405,408,408,405,412,412,405,408,408,405,411,413,404,409,1198,440,404,409,407,406,410,414,377,436,380,433,410,414,377,437,1224,414,376,437,380,433,409,415,402,411,1223,404,1229,409,1226,412,1196,431,1229,409,1199,439,1195,432,1228,410,408,405,385,439,1221,406,411,413,378,435,407,406,411,413,404,409,407,406,410,414,377,437,1224,414,1220,407,409,415,402,411,406,408,383,430,413,411,406,408,1226,412,1222,405,412,412,1222,405,412,412,1222,405,411,413,404,409,408,406,411,413,404,409,407,407,411,413,404,409,407,406,410,414,404,409,407,406,410,414,403,410,407,406,410,414,403,410,406,407,410,414,403,410,406,407,409,405,413,411,406,408,409,405,412,412,405,408,408,406,412,412,405,408,408,405,411,413,404,409,408,406,411,413,404,409,407,406,411,413,404,409,407,406,410,414,403,410,407,407,1227,411,406,408,409,415,402,411,1223,404,1230,408,1226,412,1222,405,1229,409,1225,413,1222,405};
static const uint16_t b_43_r25[] = {3310,1621,408,408,405,411,413,1222,406,411,413,1195,432,384,440,404,409,407,407,1227,411,1197,441,403,410,406,408,409,415,1220,408,1200,438,379,434,382,431,412,412,378,436,408,406,411,413,404,409,408,406,411,413,404,410,407,407,410,414,403,410,1224,414,403,410,406,408,409,405,386,438,406,408,409,405,412,412,1222,405,412,412,405,408,408,406,411,413,1221,407,1201,437,1224,414,1220,408,1200,438,1223,415,1193,434,1226,412,405,409,382,431,1229,409,408,406,411,413,404,409,408,406,411,413,404,410,407,407,411,413,1221,406,1227,411,406,407,410,414,403,410,406,407,409,405,413,411,406,408,409,405,1229,409,1199,439,405,408,1225,413,404,409,408,405,385,439,404,409,407,407,411,413,404,409,407,407,410,414,403,410,407,406,410,414,403,410,406,408,409,405,413,411,406,408,409,405,412,412,405,409,408,406,412,412,405,408,408,406,411,413,404,409,408,406,411,413,404,409,407,406,411,413,404,409,407,407,410,414,403,410,406,408,410,414,403,410,406,408,409,405,412,412,405,409,408,406,1202,436,381,432,411,413,404,409,1225,413,1221,406,1227,411,380,433,1201,437,1223,415,1220,407};
static const uint16_t b_43_r26[] = {3310,1620,409,407,406,411,413,1221,406,410,414,1220,407,410,414,403,410,407,406,1227,411,1224,414,403,410,407,406,410,414,1220,407,1227,410,406,407,410,414,403,410,406,407,410,414,403,410,406,407,410,414,403,410,406,407,409,415,402,411,406,407,1226,412,406,408,409,404,412,412,405,408,409,404,412,412,405,408,1226,412,405,408,408,405,412,412,405,408,1225,413,1221,406,1228,409,1225,413,1221,406,1201,437,1224,414,1221,406,411,413,404,409,1224,414,404,409,407,406,411,413,404,409,407,406,411,413,404,409,407,406,1228,410,1224,414,404,409,407,406,410,414,404,409,407,406,410,414,1221,406,410,414,1221,406,1227,411,407,406,1201,437,406,407,410,414,403,410,406,407,410,414,403,410,406,407,409,415,402,411,406,408,383,430,413,411,406,408,409,404,412,412,405,408,409,404,412,412,405,408,408,405,412,412,405,408,408,405,412,412,405,408,408,405,411,413,405,408,408,405,411,413,404,409,408,405,411,413,404,409,408,405,411,413,404,409,408,405,411,413,404,409,408,405,411,413,404,409,1225,413,404,409,407,406,411,413,1221,406,1227,410,1224,414,1194,433,410,414,1220,407,1227,410};
static const uint16_t b_43_r27[] = {3309,1594,435,382,431,412,412,1196,431,412,412,1222,405,411,413,404,409,408,405,1229,409,1225,413,404,409,408,405,411,413,1221,406,1228,410,407,406,411,413,404,409,407,406,411,413,404,409,381,432,411,413,404,409,407,406,411,413,404,409,407,406,1228,410,407,406,410,414,377,436,406,407,410,414,403,410,406,407,1200,438,406,407,409,415,376,437,379,434,1226,412,1196,431,1230,408,1226,412,1223,404,1229,409,1199,439,1222,405,412,412,405,408,1226,412,379,434,408,405,412,412,405,408,408,405,412,412,405,408,408,406,1228,410,1199,439,404,409,407,406,411,413,378,435,407,406,411,413,404,409,1224,414,1221,406,1228,409,381,432,1228,409,407,406,410,414,403,410,407,406,410,414,403,410,407,406,410,414,403,410,406,407,410,414,403,410,406,407,409,415,402,411,406,407,409,404,412,412,406,407,409,404,412,412,405,409,409,404,412,412,405,408,408,405,412,412,405,408,408,405,411,413,405,408,408,405,411,413,404,409,408,405,411,413,404,409,408,406,411,413,404,409,407,406,411,413,404,409,1224,414,404,409,407,406,384,440,1221,406,1228,410,1224,414,403,410,380,433,1227,411,1224,414};
static const uint16_t b_43_r28[] = {3311,1619,410,406,407,410,414,1220,407,410,414,1220,407,410,414,403,410,406,407,1227,410,1223,414,403,410,406,407,383,441,1220,407,1200,437,380,433,409,415,403,410,380,433,410,414,403,410,406,407,410,414,403,410,406,407,409,415,403,410,406,407,1227,410,406,407,409,415,402,411,380,433,409,415,403,410,406,407,1227,410,406,407,409,415,403,410,406,407,1227,410,1223,414,1220,407,1227,410,1223,415,1220,407,1227,410,1223,414,403,410,406,407,1227,410,406,407,410,414,403,410,407,406,410,414,403,410,407,406,410,414,1220,407,1201,436,406,407,410,414,403,410,406,407,384,440,403,410,407,406,1227,410,1224,413,1220,407,1227,410,1224,413,404,409,381,432,411,413,404,409,408,405,411,413,404,409,408,405,411,413,404,409,408,405,411,413,404,409,408,405,411,413,404,409,408,405,411,413,404,409,407,406,411,413,404,409,408,405,411,413,404,409,408,405,411,413,404,409,408,405,411,413,404,409,408,405,411,413,404,409,407,406,411,413,404,409,407,406,411,413,404,409,408,405,411,413,404,409,1225,412,404,409,407,406,1228,409,407,406,1228,409,1198,439,404,409,381,432,1229,408,1225,412};
static const uint16_t b_43_r29[] = {3317,1587,431,412,412,405,408,1200,437,405,408,1200,437,405,408,408,405,412,412,1196,431,1203,434,409,415,402,411,405,408,1200,437,1197,440,402,411,406,407,409,415,402,411,406,407,409,415,402,411,406,407,409,415,402,411,406,407,409,415,402,411,1197,440,402,411,406,407,409,415,402,411,406,407,409,415,402,411,1197,440,402,411,406,407,409,415,403,410,1198,439,1194,433,1201,436,1198,439,1195,432,1202,435,1198,439,1195,432,410,414,404,409,1198,439,404,409,407,406,411,413,404,409,407,406,411,413,404,409,407,406,1202,436,1199,438,404,409,407,406,411,413,404,409,408,405,411,413,404,409,408,405,411,413,404,409,408,405,411,413,1196,431,412,412,405,408,408,405,412,412,405,408,408,405,412,412,405,408,408,405,412,412,405,408,408,405,412,412,405,408,408,405,412,412,405,408,408,405,412,412,405,408,408,405,412,412,405,408,409,415,402,411,405,408,409,415,402,411,405,408,409,415,402,411,405,408,409,415,402,411,405,408,409,415,402,411,405,408,409,415,402,411,405,408,409,415,1193,434,409,415,402,411,406,407,409,415,1193,434,1201,436,406,407,1201,436,406,407,1201,436};
static const uint16_t b_43_r30[] = {3314,1616,413,404,409,408,405,1228,409,408,405,1228,409,408,405,412,412,405,408,1226,411,1222,405,412,412,405,408,409,404,1229,408,1199,438,405,408,409,404,412,412,406,407,409,404,413,411,406,407,409,404,413,411,406,407,409,404,413,411,406,407,1227,410,406,407,409,415,403,410,406,407,410,414,403,410,406,407,1227,410,406,407,410,414,403,410,406,407,1227,410,1223,414,1220,407,1227,410,1224,413,1194,433,1201,436,1198,439,404,409,408,405,1228,409,408,405,411,413,404,409,408,405,411,413,405,408,408,405,412,412,1222,405,1229,408,408,405,412,412,405,408,409,404,412,412,405,408,1226,411,405,408,409,404,412,412,405,408,409,404,1229,408,409,404,412,412,406,407,409,404,412,412,406,407,409,404,413,411,406,407,409,404,413,411,406,407,409,415,402,411,406,407,409,415,403,410,406,407,410,414,403,410,406,407,410,414,403,410,406,407,410,414,403,410,406,407,410,414,403,410,406,407,410,414,403,410,406,407,410,414,403,410,406,407,410,414,403,410,406,407,410,414,403,410,407,406,1227,410,407,406,410,414,403,410,407,406,1228,409,1224,413,1221,406,384,440,404,409,1225,412};
static const uint16_t b_43_r31[] = {3307,1623,406,411,413,404,409,1225,412,404,409,1225,412,405,408,408,405,412,412,1222,405,1229,408,409,404,412,412,405,408,1226,411,1223,414,402,411,406,407,409,415,403,410,406,407,410,414,403,410,406,407,410,414,403,410,407,406,410,414,403,410,1224,413,403,410,407,406,410,414,404,409,407,406,411,413,404,409,1225,412,404,409,408,405,411,413,405,408,1225,412,1222,405,1229,408,1226,411,1222,415,1219,408,1200,437,1223,414,403,410,406,407,1227,410,407,406,410,414,403,410,407,406,410,414,404,409,407,406,411,413,1221,406,1228,409,408,405,411,413,405,408,408,405,412,412,405,408,408,405,1229,408,409,404,412,412,405,408,409,404,1230,407,409,404,412,412,406,407,409,415,402,411,406,407,409,415,403,410,406,407,410,414,403,410,406,407,410,414,403,410,406,407,410,414,403,410,407,406,410,414,404,409,407,406,411,413,404,409,408,405,411,413,404,409,408,405,411,413,404,409,408,405,411,413,405,408,408,405,412,412,405,408,408,405,412,411,405,408,409,404,412,412,406,407,409,404,1230,407,409,404,413,411,406,407,409,415,1220,407,1226,411,406,407,410,414,403,410,1224,413};
static const uint16_t b_43_r32[] = {3312,1619,410,380,433,410,414,1221,406,410,414,1221,406,410,414,377,436,407,406,1228,409,1198,439,404,409,408,405,411,413,1222,405,1229,408,408,405,412,412,405,408,409,404,386,438,405,408,409,404,412,412,406,407,409,404,413,411,406,407,409,404,1230,407,409,415,403,410,406,407,410,414,403,410,406,407,410,414,1220,407,410,414,403,410,407,406,410,414,1194,433,1201,436,1224,413,1221,406,1228,409,1198,439,1221,406,1228,409,382,431,412,411,1222,405,412,412,406,407,409,404,412,412,406,407,409,415,402,411,406,407,1227,410,1223,414,403,410,406,407,383,441,403,410,407,406,410,414,1221,406,1228,409,407,406,411,413,404,409,381,432,1228,409,408,405,411,413,404,409,408,405,411,413,405,408,408,405,412,412,405,408,408,405,412,412,405,408,409,404,412,412,405,408,409,404,412,412,406,407,409,404,413,410,406,407,409,415,402,411,406,407,409,415,403,410,406,407,410,414,403,410,406,407,410,414,403,410,406,407,410,414,403,410,407,406,410,414,403,410,407,406,410,414,403,410,407,406,1228,409,407,406,411,413,404,409,381,432,1228,409,1225,412,1221,406,1228,409,1225,412,405,408};
static const uint16_t b_43_r33[] = {3312,1618,411,406,407,409,415,1220,407,409,415,1220,407,410,413,403,410,380,433,1227,410,1224,413,404,409,407,406,411,412,1222,405,1229,408,408,405,412,411,405,408,409,404,412,411,405,408,409,404,412,412,406,407,409,415,402,411,406,407,410,414,1220,407,410,414,403,410,407,406,410,413,403,410,407,406,410,414,1195,432,411,413,378,435,408,405,411,413,1222,405,1229,408,1225,412,1222,405,1229,408,1226,411,1223,414,1220,407,383,440,403,410,1224,413,377,436,407,406,411,413,404,409,407,406,411,412,404,409,408,405,1229,408,1225,412,379,434,409,404,412,412,379,434,409,404,412,411,406,407,409,415,1220,407,409,415,403,410,406,407,1201,436,407,406,410,413,377,436,407,406,410,414,404,409,407,406,411,412,404,409,408,405,411,412,405,408,408,405,412,412,405,408,408,405,412,411,405,408,409,404,412,412,405,408,409,404,412,412,406,407,409,404,413,411,406,407,409,415,403,410,406,407,409,415,403,410,406,407,410,414,403,410,406,407,410,414,403,410,407,406,410,414,404,409,407,406,1228,409,407,406,411,413,378,435,408,405,1228,409,1199,438,405,408,1199,438,1222,405,386,438};
static const uint16_t b_43_r34[] = {3312,1618,411,406,407,409,415,1194,433,383,440,1194,433,410,413,404,409,407,406,1228,409,1199,438,405,408,408,405,412,411,1222,405,1230,407,409,415,402,411,406,407,410,414,403,410,407,406,410,413,403,410,407,406,410,414,404,409,407,406,411,413,1221,406,411,413,404,409,382,431,412,412,405,408,409,404,412,411,1223,404,412,411,406,407,409,415,376,437,1223,414,1220,407,1227,410,1224,413,1221,406,1202,435,1225,412,1222,405,386,438,405,408,1226,411,406,407,409,415,403,410,406,407,410,414,403,410,407,406,410,413,1221,406,1228,409,381,432,411,412,405,408,408,405,412,412,405,408,1226,411,405,408,1226,411,379,434,409,415,376,437,1197,440,403,410,380,433,384,439,377,436,407,406,411,412,404,409,408,405,411,413,404,409,408,405,411,413,405,408,408,405,412,411,405,408,409,404,412,412,405,408,409,404,412,412,406,407,409,415,402,411,406,407,410,414,403,410,406,407,410,414,403,410,406,407,410,414,403,410,407,406,410,413,404,409,407,406,411,413,404,409,408,405,411,412,405,408,1225,412,405,408,408,405,412,412,405,408,1226,411,1223,414,1220,407,383,440,1220,407,384,439};
static const uint16_t b_43_r35[] = {3310,1620,409,381,432,411,413,1196,431,412,412,1196,431,412,412,405,408,409,404,1230,407,1200,437,406,407,409,415,403,410,1197,440,1220,407,384,440,403,410,407,406,411,413,404,409,407,406,411,413,404,409,408,405,411,413,404,409,408,405,411,413,1222,405,412,412,405,408,408,405,412,412,405,408,409,404,412,411,1223,404,412,412,406,407,409,415,402,411,1223,414,1194,433,1227,410,1197,440,1194,433,1201,436,1225,412,1221,406,411,412,378,435,1226,411,405,408,382,431,412,412,406,407,409,415,402,411,406,407,409,415,1220,407,1227,410,406,407,410,413,403,410,407,406,411,413,404,409,407,406,1228,409,1225,412,404,409,382,431,385,439,1222,405,386,438,405,408,409,404,412,412,406,407,409,404,412,412,406,407,409,415,402,411,406,407,409,415,403,410,406,407,410,414,403,410,406,407,410,414,403,410,407,406,410,414,403,410,407,406,410,414,404,409,407,406,411,413,404,409,408,405,411,413,404,409,408,405,411,412,405,408,408,405,412,412,405,408,408,405,412,412,405,408,409,404,412,412,1223,404,412,412,379,434,409,404,413,411,1223,414,1220,407,409,415,376,437,1223,414,403,410};
static const uint16_t b_43_r36[] = {3311,1619,410,408,405,411,412,1222,405,385,438,1222,405,412,411,406,407,383,440,1220,407,1227,410,407,406,410,413,404,409,1225,412,1222,405,412,411,405,408,409,404,412,411,406,407,409,415,402,411,406,407,410,414,403,410,407,406,410,413,404,409,1224,413,404,409,408,405,411,412,405,408,408,405,412,411,405,408,1226,411,406,407,409,414,403,410,406,407,1227,410,1224,413,1221,406,1228,409,1225,412,1222,405,1229,408,1226,411,406,407,410,414,1220,407,410,413,404,409,407,406,411,412,404,409,408,405,412,411,405,408,1226,411,1223,414,402,411,406,407,410,414,403,410,407,406,410,413,1221,406,1228,409,1225,412,405,408,408,405,412,411,1223,404,412,411,406,407,409,415,403,410,406,407,410,413,403,410,407,406,411,412,404,409,408,405,411,412,405,408,408,405,412,411,405,408,409,404,412,411,406,407,409,404,413,410,406,407,410,413,403,410,407,406,410,413,403,410,407,406,411,412,404,409,408,405,411,412,405,408,408,405,412,411,405,408,409,404,412,411,406,407,409,404,413,410,406,407,1201,436,407,406,410,413,404,409,407,406,1228,409,1225,412,1222,405,1229,408,409,404,412,411};
static const uint16_t b_43_r37[] = {3311,1593,436,407,406,410,413,1221,406,411,412,1221,406,411,412,405,408,409,404,1229,408,1226,411,406,407,410,413,403,410,1224,413,1221,406,411,412,404,409,408,405,412,411,405,408,409,404,412,411,406,407,410,414,403,410,406,407,410,413,403,410,1224,413,404,409,408,405,411,412,405,408,408,405,412,411,405,408,1226,411,406,407,410,413,403,410,406,407,1227,410,1224,413,1221,406,1228,409,1199,438,1222,415,1193,434,1200,437,407,406,410,413,1221,406,411,412,405,408,408,405,412,411,405,408,409,404,413,410,406,407,1227,410,1223,414,403,410,407,406,411,412,404,409,408,405,411,412,405,408,408,405,412,411,1223,404,412,411,406,407,1227,410,407,406,410,413,403,410,407,406,411,412,404,409,408,405,411,412,405,408,408,405,412,411,405,408,409,404,413,410,406,407,410,413,403,410,407,406,410,413,404,409,407,406,411,412,404,409,408,405,412,411,405,408,409,404,412,411,405,408,409,404,413,410,406,407,410,413,403,410,406,407,410,413,403,410,407,406,411,412,404,409,408,405,411,412,1222,405,412,411,405,408,409,404,412,411,1223,414,1220,407,410,413,1220,407,411,412,404,409};
static const uint16_t b_43_r38[] = {3312,1618,410,380,433,410,413,1220,407,410,413,1221,406,384,439,404,409,381,432,1229,408,1226,411,405,408,409,404,413,410,1197,440,1220,407,384,439,403,410,407,406,411,412,378,435,408,405,411,412,405,408,408,405,412,411,405,408,409,404,412,411,1223,414,402,411,406,407,410,413,403,410,407,406,410,413,403,410,1224,413,404,409,407,406,411,412,404,409,1199,438,1196,431,1229,408,1226,411,1223,414,1194,433,1227,410,1224,413,404,409,408,405,1229,408,408,405,385,439,405,408,382,431,412,411,406,407,409,415,402,411,1223,414,1220,407,410,413,404,409,381,432,411,412,404,409,408,405,1229,408,408,405,412,411,1222,405,412,411,406,407,1227,410,380,433,410,413,403,410,407,406,410,413,404,409,407,406,411,412,404,409,408,405,412,411,405,408,408,405,412,411,405,408,409,404,413,410,406,407,409,415,403,410,406,407,410,414,403,410,407,406,410,413,404,409,407,406,411,412,404,409,408,405,412,411,405,408,408,405,412,411,405,408,409,404,413,410,406,407,409,415,403,410,406,407,410,413,1220,407,410,413,404,409,407,406,411,412,1221,406,1229,408,1225,412,379,434,409,415,402,411};
static const uint16_t b_43_r39[] = {3314,1615,414,404,409,381,432,1228,409,408,405,1202,435,408,405,412,411,405,408,1226,411,1222,405,412,412,379,434,409,415,1220,407,1227,410,380,433,410,413,403,410,407,406,384,440,404,409,408,405,411,413,404,409,408,405,411,412,405,408,408,405,1229,408,408,405,412,412,405,408,409,404,413,410,406,407,409,415,1220,407,409,415,403,410,406,407,410,413,1221,406,1228,409,1198,439,1195,432,1202,435,1199,438,1222,405,1230,407,383,441,403,410,1197,440,403,410,380,433,410,413,404,409,407,406,411,412,404,409,408,405,1229,408,1225,412,379,434,409,404,412,411,406,407,383,441,402,411,406,407,1227,410,380,433,1227,410,380,433,410,413,1221,406,384,440,404,409,408,405,411,412,405,408,408,405,412,411,405,408,409,404,412,411,405,408,409,404,412,412,406,407,409,404,413,410,406,407,409,415,403,410,406,407,410,414,403,410,406,407,410,414,403,410,407,406,410,413,404,409,407,406,411,412,404,409,408,405,411,412,405,408,408,405,412,411,405,408,408,405,412,412,405,408,409,404,412,412,1223,414,376,437,406,407,383,441,403,410,1223,414,1220,407,384,439,377,436,381,432,411,412};
static const uint16_t b_43_r40[] = {3310,1620,409,408,405,412,411,1223,414,376,437,1197,440,403,410,407,406,384,439,1195,432,1228,409,408,405,412,411,379,434,1226,411,1197,440,403,410,407,406,384,439,404,409,407,406,411,412,404,409,408,405,412,411,405,408,409,404,412,411,406,407,1226,411,406,407,410,414,403,410,407,406,410,413,404,409,407,406,1228,409,408,405,411,412,405,408,408,405,1229,408,1226,411,1223,414,1194,433,1227,410,1198,439,1222,405,1202,435,382,431,386,438,1197,440,403,410,380,433,384,439,404,409,407,406,411,412,404,409,408,405,1229,408,1199,438,406,407,383,440,403,410,406,407,410,413,404,409,1224,413,1195,432,385,438,1196,431,412,411,405,408,1226,411,406,407,384,439,377,436,407,406,384,439,404,409,408,405,411,412,405,408,408,405,412,411,405,408,409,404,412,411,406,407,409,414,403,410,406,407,410,413,403,410,407,406,410,413,404,409,407,406,411,412,404,409,408,405,412,411,405,408,408,405,412,411,405,408,409,414,402,411,406,407,410,413,403,410,407,406,410,413,404,409,407,406,411,412,1195,432,385,439,378,435,408,405,412,411,1196,431,1230,407,1200,437,1224,413,1221,406,1202,435};
static const uint16_t b_43_r41[] = {3313,1617,411,379,434,409,404,1229,408,383,440,1193,434,410,413,377,436,381,432,1228,409,1225,412,405,408,382,431,412,411,1196,441,1220,407,410,413,403,410,381,432,384,440,404,409,408,405,411,412,405,408,408,405,412,411,405,408,409,404,412,411,1223,414,376,437,406,407,410,413,403,410,407,406,411,412,404,409,1225,412,378,435,408,405,385,438,405,408,1226,411,1196,441,1193,434,1227,410,1224,413,1221,406,1202,435,1226,411,379,434,409,414,1193,434,410,413,403,410,380,433,411,412,404,409,408,405,411,412,405,408,1225,412,1196,431,386,437,406,407,383,440,403,410,407,406,410,413,403,410,407,406,1228,409,1225,412,405,408,408,405,1229,408,409,414,402,411,406,407,383,440,403,410,407,406,410,413,404,409,407,406,411,413,404,409,408,405,412,411,405,408,409,404,412,411,405,408,409,414,402,411,406,407,410,414,403,410,407,406,410,413,403,410,407,406,411,412,404,409,408,405,411,412,405,408,408,405,412,411,405,408,409,404,412,411,406,407,409,415,403,410,406,407,410,413,403,410,1224,413,377,436,407,406,385,438,404,409,1225,412,1222,405,386,437,1223,414,1220,407,1227,410};
static const uint16_t b_43_r42[] = {3309,1621,407,383,440,403,410,1224,413,404,409,1225,412,405,408,409,404,386,438,1196,441,1220,407,410,413,403,410,407,406,1228,409,1225,412,405,408,408,405,385,438,379,434,409,404,412,411,406,407,409,414,403,410,406,407,410,413,403,410,407,406,1228,409,381,432,411,412,405,408,408,405,412,411,405,408,409,404,1230,407,409,415,403,410,406,407,410,413,1221,406,1228,409,1225,412,1222,405,1229,408,1226,411,1197,440,1220,407,384,439,404,409,1225,412,378,435,382,431,412,411,406,407,409,414,403,410,406,407,410,413,1220,407,1228,409,407,406,411,412,404,409,408,405,412,411,405,408,1226,411,379,434,1227,410,1197,440,403,410,407,406,1228,409,408,405,385,438,405,408,409,404,412,411,406,407,409,415,402,411,406,407,410,413,403,410,407,406,410,413,404,409,407,406,411,412,404,409,408,405,412,411,405,408,409,404,412,411,406,407,409,414,403,410,406,407,410,413,403,410,407,406,410,413,404,409,407,406,411,412,404,409,408,405,412,411,405,408,409,404,412,411,406,407,409,414,402,411,1223,414,403,410,407,406,410,413,404,409,1225,412,1222,405,1229,408,409,404,1203,434,1227,410};
static const uint16_t b_43_r43[] = {3305,1598,441,376,437,406,407,1227,410,380,433,1228,409,407,406,385,439,378,435,1225,412,1222,405,412,411,406,407,383,440,1220,407,1201,436,407,406,410,413,404,409,407,406,411,412,404,409,408,405,412,411,405,408,408,405,412,411,405,408,409,404,1230,407,383,440,403,410,406,407,410,414,403,410,407,406,410,413,1221,406,411,412,404,409,408,405,412,411,1196,431,1229,408,1200,437,1223,414,1194,433,1201,436,1225,412,1222,405,385,439,379,434,1200,437,406,407,383,440,403,410,406,407,410,413,403,410,407,406,410,413,1221,406,1228,409,408,405,412,411,405,408,409,404,412,411,406,407,409,415,1220,407,1227,410,1224,413,404,409,407,406,1228,409,381,432,385,438,405,408,409,404,412,411,406,407,409,414,402,411,406,407,410,413,403,410,407,406,410,413,404,409,407,406,411,412,404,409,408,405,411,412,405,408,408,405,412,411,405,408,409,404,412,411,406,407,409,415,403,410,406,407,410,414,403,410,407,406,410,413,404,409,407,406,411,412,404,409,408,405,412,411,405,408,408,405,412,411,1223,414,402,411,406,407,409,414,403,410,1197,440,1194,433,384,440,378,435,1225,412,1222,405};
static const BBtn b_43[] = {
  {"On_fan", PR_RAW, 0, 0, 0, 38000, b_43_r0, 259},
  {"Off", PR_RAW, 0, 0, 0, 38000, b_43_r1, 115},
  {"Cool_64", PR_RAW, 0, 0, 0, 38000, b_43_r2, 259},
  {"Cool_66", PR_RAW, 0, 0, 0, 38000, b_43_r3, 259},
  {"Cool_68", PR_RAW, 0, 0, 0, 38000, b_43_r4, 259},
  {"Cool_70", PR_RAW, 0, 0, 0, 38000, b_43_r5, 259},
  {"Cool_72", PR_RAW, 0, 0, 0, 38000, b_43_r6, 259},
  {"Cool_74", PR_RAW, 0, 0, 0, 38000, b_43_r7, 259},
  {"Cool_76", PR_RAW, 0, 0, 0, 38000, b_43_r8, 259},
  {"Cool_78", PR_RAW, 0, 0, 0, 38000, b_43_r9, 259},
  {"Cool_80", PR_RAW, 0, 0, 0, 38000, b_43_r10, 259},
  {"Cool_82", PR_RAW, 0, 0, 0, 38000, b_43_r11, 259},
  {"Cool_84", PR_RAW, 0, 0, 0, 38000, b_43_r12, 259},
  {"Cool_86", PR_RAW, 0, 0, 0, 38000, b_43_r13, 259},
  {"Cool_88", PR_RAW, 0, 0, 0, 38000, b_43_r14, 259},
  {"Dry_64", PR_RAW, 0, 0, 0, 38000, b_43_r15, 259},
  {"Dry_66", PR_RAW, 0, 0, 0, 38000, b_43_r16, 259},
  {"Dry_68", PR_RAW, 0, 0, 0, 38000, b_43_r17, 259},
  {"Dry_70", PR_RAW, 0, 0, 0, 38000, b_43_r18, 259},
  {"Dry_72", PR_RAW, 0, 0, 0, 38000, b_43_r19, 259},
  {"Dry_74", PR_RAW, 0, 0, 0, 38000, b_43_r20, 259},
  {"Dry_76", PR_RAW, 0, 0, 0, 38000, b_43_r21, 259},
  {"Dry_78", PR_RAW, 0, 0, 0, 38000, b_43_r22, 259},
  {"Dry_80", PR_RAW, 0, 0, 0, 38000, b_43_r23, 259},
  {"Dry_82", PR_RAW, 0, 0, 0, 38000, b_43_r24, 259},
  {"Dry_84", PR_RAW, 0, 0, 0, 38000, b_43_r25, 259},
  {"Dry_86", PR_RAW, 0, 0, 0, 38000, b_43_r26, 259},
  {"Dry_88", PR_RAW, 0, 0, 0, 38000, b_43_r27, 259},
  {"Fan_mode", PR_RAW, 0, 0, 0, 38000, b_43_r28, 259},
  {"Heat_60", PR_RAW, 0, 0, 0, 38000, b_43_r29, 259},
  {"Heat_62", PR_RAW, 0, 0, 0, 38000, b_43_r30, 259},
  {"Heat_64", PR_RAW, 0, 0, 0, 38000, b_43_r31, 259},
  {"Heat_66", PR_RAW, 0, 0, 0, 38000, b_43_r32, 259},
  {"Heat_68", PR_RAW, 0, 0, 0, 38000, b_43_r33, 259},
  {"Heat_70", PR_RAW, 0, 0, 0, 38000, b_43_r34, 259},
  {"Heat_72", PR_RAW, 0, 0, 0, 38000, b_43_r35, 259},
  {"Heat_74", PR_RAW, 0, 0, 0, 38000, b_43_r36, 259},
  {"Heat_76", PR_RAW, 0, 0, 0, 38000, b_43_r37, 259},
  {"Heat_78", PR_RAW, 0, 0, 0, 38000, b_43_r38, 259},
  {"Heat_80", PR_RAW, 0, 0, 0, 38000, b_43_r39, 259},
  {"Heat_82", PR_RAW, 0, 0, 0, 38000, b_43_r40, 259},
  {"Heat_84", PR_RAW, 0, 0, 0, 38000, b_43_r41, 259},
  {"Heat_86", PR_RAW, 0, 0, 0, 38000, b_43_r42, 259},
  {"Heat_88", PR_RAW, 0, 0, 0, 38000, b_43_r43, 259},
};
static const BRemote rem_44[] = {
  {"ASU18RLF", b_43, 44},
};
static const uint16_t b_45_r0[] = {3087,1607,488,1064,517,335,492,1087,484,315,512,340,487,1091,490,336,491,338,489,1089,492,333,494,332,485,341,486,340,487,338,489,336,491,339,488,1090,491,334,493,1085,486,340,487,1091,490,1088,493,333,484,343,484,44227,178};
static const uint16_t b_45_r1[] = {3089,1578,516,1063,518,308,519,1058,513,314,513,313,514,1063,518,308,519,310,517,308,519,1059,512,314,513,313,514,311,516,310,517,309,518,311,516,336,491,1061,520,1058,512,313,514,1064,517,1061,520,306,521,306,521};
static const uint16_t b_45_r2[] = {3094,1599,485,1094,487,338,489,1089,492,334,493,332,485,1094,487,338,489,340,487,1092,489,310,517,335,492,333,494,332,485,341,486,339,488,341,486,1093,488,337,490,1088,493,333,494,1084,487,1092,489,337,490,337,490,44225,178};
static const uint16_t b_45_r3[] = {3091,1603,491,1087,494,332,484,1093,488,338,489,337,490,1088,493,333,494,336,491,335,492,1085,486,1093,488,1064,517,336,491,335,492,334,493,336,491,335,492,1086,485,341,486,340,487,339,488,338,489,1089,492,335,492};
static const uint16_t b_45_r4[] = {3092,1602,492,1059,512,341,486,1092,489,337,490,336,491,1087,494,332,485,344,493,1085,486,1093,488,1064,517,1061,520,333,494,332,484,341,486,343,484,1094,487,1091,490,336,491,335,492,334,493,333,484,1094,487,340,487};
static const uint16_t b_45_r5[] = {3094,1600,494,1084,487,339,488,1090,491,335,492,334,493,1085,486,340,487,342,485,1093,488,338,489,336,491,335,492,1086,485,341,486,340,487,342,485,1093,488,338,489,1088,493,333,494,332,485,341,486,1092,489,337,490};
static const uint16_t b_45_r6[] = {3086,1608,486,1092,489,337,490,1088,493,333,494,331,485,1093,488,338,489,340,487,1091,490,336,491,1087,494,332,484,341,486,339,488,338,489,340,487,1092,489,336,491,335,492,1086,485,1094,487,1091,490,337,490,336,491,44230,181};
static const uint16_t b_45_r7[] = {3084,1610,484,1093,488,338,489,1089,492,308,519,333,484,1094,487,339,488,341,486,339,488,1091,490,1088,493,333,494,331,486,340,487,339,488,341,486,339,488,1091,490,335,492,1086,485,1094,487,1090,491,309,518,335,492,44217,174};
static const uint16_t b_45_r8[] = {3092,1576,518,1060,511,342,485,1093,488,338,489,337,490,1062,519,333,494,336,491,335,492,333,494,1084,487,340,487,339,488,338,489,336,491,339,488,337,490,336,491,335,492,1086,485,1094,487,1091,490,336,491,336,491};
static const uint16_t b_45_r9[] = {3089,1579,515,1063,518,334,493,1085,486,340,487,339,488,1089,492,334,493,337,490,1087,494,332,484,1094,487,1065,516,336,491,335,492,334,493,336,491,1086,495,332,484,341,486,340,487,338,489,337,490,1088,493,334,493};
static const uint16_t b_45_r10[] = {3086,1607,487,1091,490,335,492,1086,485,342,485,340,487,1091,490,336,491,338,489,337,490,1088,493,333,484,342,485,340,487,339,488,338,489,340,487,338,489,1089,492,1087,494,331,486,1093,488,1090,491,335,492,335,492,44222,181};
static const BBtn b_45[] = {
  {"Power", PR_RAW, 0, 0, 0, 38000, b_45_r0, 53},
  {"Fan_speed", PR_RAW, 0, 0, 0, 38000, b_45_r1, 51},
  {"Sleep", PR_RAW, 0, 0, 0, 38000, b_45_r2, 53},
  {"Eco", PR_RAW, 0, 0, 0, 38000, b_45_r3, 51},
  {"Timer", PR_RAW, 0, 0, 0, 38000, b_45_r4, 51},
  {"Display", PR_RAW, 0, 0, 0, 38000, b_45_r5, 51},
  {"Up", PR_RAW, 0, 0, 0, 38000, b_45_r6, 53},
  {"Down", PR_RAW, 0, 0, 0, 38000, b_45_r7, 53},
  {"Auto", PR_RAW, 0, 0, 0, 38000, b_45_r8, 51},
  {"Fan_only", PR_RAW, 0, 0, 0, 38000, b_45_r9, 51},
  {"Cool", PR_RAW, 0, 0, 0, 38000, b_45_r10, 53},
};
static const BRemote rem_46[] = {
  {"TCL AC", b_45, 11},
};
static const uint16_t b_47_r0[] = {442,426,442,428,443,425,443,429,442,425,443,24982,3516,1700,443,1296,443,426,442,428,442,426,442,1300,441,426,442,428,443,426,442,425,443,1299,442,426,442,1297,442,1297,442,429,442,1297,442,1297,442,1296,442,1296,443,1300,441,426,442,429,442,1297,441,426,442,428,443,425,443,429,442,425,443,429,442,426,442,429,442,426,442,427,441,428,443,427,441,428,443,425,443,429,442,426,442,429,442,427,441,429,442,425,443,429,442,425,443,428,443,425,443,427,444,425,442,428,443,1296,443,428,443,425,443,1297,442,1297,441,429,442,426,442,429,442,425,443,428,443,426,442,428,443,428,440,430,441,425,443,428,443,427,441,428,443,426,442,1298,440,1297,442,429,442,427,441,429,442,426,442,429,441,425,443,429,442,425,443,429,442,426,442,428,442,426,442,429,442,426,442,429,441,427,441,430,441,426,441,429,442,426,442,428,443,426,442,430,441,427,441,430,441,428,440,429,442,425,443,429,442,426,442,430,441,426,442,429,442,427,441,426,442,428,443,426,442,429,442,426,442,428,443,426,442,430,440,429,442,426,442,429,442,425,443,429,442,426,442,428,443,426,442,1297,442,429,442,1297,442,425,443,428,443,426,442,1297,442,1297,442,429,442,426,442,429,442,425,443,429,441,425,443,1300,441,427,441,425,443,430,441,425,443,430,441,426,442,428,443,426,442,429,442,1297,442,426,442,428,442,1297,442,1298,440,1297,442,1299,442,426,442};
static const uint16_t b_47_r1[] = {440,428,440,430,441,427,441,430,441,427,441,24984,3515,1702,440,1298,441,428,440,430,441,426,442,1301,440,426,442,430,441,428,440,427,441,1301,440,427,441,1298,440,1298,441,431,439,1298,441,1299,440,1298,441,1297,442,1301,440,427,441,430,441,1298,441,427,441,431,440,427,441,430,441,426,442,430,441,427,441,429,442,427,441,428,440,429,442,427,441,430,441,427,441,430,441,428,440,430,441,429,439,1298,441,430,441,426,442,430,441,1298,441,1298,440,430,441,428,440,1298,441,1299,439,1302,439,1298,441,427,441,1298,441,429,442,427,441,429,442,427,441,430,441,427,441,430,441,427,441,430,441,428,440,430,441,427,441,430,441,427,441,1299,439,1297,442,429,442,1297,441,429,441,427,441,430,441,428,440,430,440,426,442,430,441,427,441,430,441,427,441,431,440,426,442,430,440,427,441,431,440,428,440,426,442,429,442,428,440,431,440,427,441,430,441,427,441,433,438,427,441,430,441,427,441,430,441,426,442,430,441,427,441,430,440,427,441,430,441,427,441,430,441,427,441,430,441,427,441,430,441,427,441,430,441,427,441,430,441,427,441,430,441,426,442,431,440,1298,440,428,440,1298,441,430,441,428,440,430,441,1298,441,1299,440,429,442,426,442,430,441,427,441,430,441,428,440,429,442,426,441,430,441,427,441,430,441,427,441,430,441,426,442,430,441,427,441,1298,441,1299,440,1301,440,428,440,430,441,1299,439,1299,440,1299,440};
static const uint16_t b_47_r2[] = {442,427,441,429,442,426,442,429,442,425,443,24982,3516,1702,441,1296,443,426,442,430,441,426,442,1301,441,428,440,429,441,427,441,427,441,1301,440,426,442,1297,442,1297,441,429,442,1297,441,1298,441,1298,440,1297,442,1301,440,427,441,429,442,1298,440,427,441,429,442,426,442,430,441,426,442,430,441,426,442,429,442,426,442,427,441,430,441,426,442,430,441,426,442,430,441,426,442,429,442,427,441,1297,442,430,441,427,441,429,442,427,441,430,441,1298,441,427,441,429,442,1297,442,428,443,427,441,1299,439,1298,441,429,442,427,441,430,441,427,441,429,442,427,441,430,441,426,442,429,442,427,440,430,441,427,441,429,442,426,442,1301,440,1297,441,427,441,1298,441,429,442,425,443,429,442,427,441,429,442,427,441,430,441,427,441,429,442,428,440,430,441,428,440,429,442,426,442,429,442,428,440,426,442,429,442,426,442,430,441,426,442,428,443,427,441,428,442,430,441,426,442,428,443,427,441,429,442,426,442,431,440,427,441,428,440,429,442,427,441,428,443,427,441,428,443,426,442,430,441,426,442,430,441,426,442,429,442,426,442,429,442,427,441,429,441,1297,442,428,443,1297,442,426,442,429,441,427,441,1298,441,1298,441,429,442,426,442,430,441,427,441,430,441,427,441,430,441,427,441,429,442,427,441,430,441,428,440,428,443,428,440,430,441,427,441,430,440,1298,441,426,442,1297,442,1299,442,1298,440,1297,442,1298,441};
static const uint16_t b_47_r3[] = {442,427,441,428,443,427,441,429,442,426,442,24982,3516,1702,441,1297,442,425,443,429,442,426,442,1300,441,427,441,428,443,427,441,426,442,1301,440,426,442,1296,443,1297,441,429,442,1297,442,1297,442,1298,441,1297,441,1300,441,427,441,429,442,1298,441,426,442,430,441,427,441,429,442,427,441,429,442,427,441,429,442,428,440,427,441,430,441,426,442,429,442,426,442,430,441,426,442,429,442,428,440,1297,442,428,443,425,443,430,440,427,441,1301,440,426,442,427,441,429,442,427,441,429,442,428,440,429,442,426,442,1300,441,1297,441,426,442,429,442,426,442,430,441,426,442,430,441,426,442,429,442,427,441,429,442,426,442,429,441,427,441,1297,441,429,442,1299,440,426,442,429,442,427,441,429,442,427,441,429,442,427,440,430,441,425,443,430,441,427,441,429,442,426,442,429,442,427,441,428,442,427,441,429,442,427,441,429,442,427,441,429,442,426,442,431,440,427,441,429,442,426,442,430,441,425,443,429,442,426,442,430,441,427,441,430,441,425,443,429,442,427,441,430,441,426,442,429,441,426,442,429,442,427,441,429,441,426,442,429,442,426,442,430,441,1298,441,425,443,1297,442,428,443,426,442,429,442,1297,442,1298,441,429,442,427,441,429,442,426,442,429,442,426,442,429,442,426,442,426,442,430,441,427,441,429,442,426,442,430,441,426,442,430,441,426,442,429,442,427,441,1298,441,1300,441,426,442,1297,442,430,441};
static const uint16_t b_47_r4[] = {440,426,442,430,441,426,442,429,442,426,442,24982,3516,1700,441,1297,441,430,441,426,442,430,441,1297,442,429,442,425,443,427,443,426,442,1301,440,426,442,1297,442,1297,441,429,442,1296,442,1299,441,1297,442,1296,442,1297,441,429,442,426,442,1298,441,430,441,428,442,427,441,430,441,427,441,430,441,426,442,430,441,426,442,428,442,427,441,429,442,426,442,429,442,426,442,430,441,427,441,428,442,1297,442,429,441,427,441,429,442,427,441,430,441,426,442,429,441,429,442,1298,441,427,441,429,442,1297,442,1298,440,430,441,427,440,429,442,426,442,430,441,426,442,429,441,426,442,429,442,428,442,427,441,428,442,427,441,428,443,1296,442,1297,442,430,441,1296,442,429,442,426,442,430,441,426,442,429,442,426,442,429,442,426,441,429,442,427,441,429,442,426,442,429,442,427,441,429,442,429,441,427,441,429,441,427,441,430,441,427,441,429,442,426,442,428,442,426,442,428,443,426,442,430,441,427,441,428,443,426,442,427,443,430,441,426,442,429,442,426,442,430,440,426,442,428,443,430,440,427,441,429,442,426,442,429,442,427,441,430,441,426,442,429,441,1297,442,426,442,1300,441,426,442,428,443,427,441,1297,442,1299,441,426,442,429,442,426,442,430,441,425,443,429,442,427,441,428,442,430,440,427,441,429,442,427,441,430,441,426,442,429,442,425,442,430,441,1297,442,430,441,1297,441,1297,442,1297,441,429,442,1296,441};
static const uint16_t b_47_r5[] = {442,425,443,430,441,426,442,429,442,426,442,24982,3516,1702,441,1297,441,425,443,429,442,425,443,1300,441,426,442,429,441,425,443,426,442,1299,442,425,443,1297,442,1296,442,429,442,1297,442,1297,442,1296,442,1297,442,1300,441,427,441,429,442,1297,441,426,442,429,442,427,441,428,443,426,442,429,442,426,442,428,442,426,442,426,442,429,442,426,442,429,441,425,443,429,442,427,441,428,443,427,441,1297,442,429,442,426,442,429,442,426,442,1300,441,1298,441,427,441,430,441,1298,441,426,442,429,442,1297,442,1297,441,429,442,426,442,427,441,429,442,428,440,428,443,425,443,429,442,426,442,429,441,429,442,427,441,429,442,426,442,1297,442,1298,440,428,443,426,442,429,442,426,442,428,443,426,442,429,442,426,442,429,442,426,442,429,442,425,443,429,442,426,442,429,442,425,443,431,440,426,442,427,441,429,442,426,442,429,442,427,441,429,442,427,441,428,442,430,441,426,442,430,441,425,443,429,442,426,442,428,443,427,441,426,442,429,442,425,443,429,442,426,442,429,442,426,442,430,441,426,442,429,442,427,441,430,441,426,442,429,442,427,441,429,441,1298,440,429,442,1297,441,426,442,429,442,426,442,1297,442,1297,442,428,443,426,442,430,441,426,442,429,442,426,442,429,442,427,441,429,442,1297,442,426,442,429,442,427,441,429,442,426,442,430,441,427,441,429,442,1297,442,1297,441,1297,441,429,442,426,442,1298,441};
static const uint16_t b_47_r6[] = {442,427,441,429,442,427,441,429,442,427,441,24983,3516,1701,440,1298,441,429,442,427,441,429,442,1296,442,430,441,427,441,429,441,426,442,1301,441,426,442,1298,440,1298,441,429,442,1298,440,1299,442,1297,441,1298,441,1298,441,429,442,426,442,1298,440,431,440,429,441,426,442,429,442,428,440,430,441,426,442,429,442,427,441,430,440,427,441,429,442,426,442,429,441,426,442,429,442,426,442,428,442,1297,441,429,442,427,441,430,441,1299,440,1297,441,429,442,428,442,427,441,429,442,426,442,430,441,1299,440,1298,440,427,441,428,442,429,442,426,442,429,442,427,441,430,440,427,441,429,442,425,442,430,441,428,440,432,439,426,442,1301,440,1298,440,426,442,430,440,429,442,427,441,430,440,427,441,429,442,427,441,430,441,426,441,430,441,426,442,429,442,427,441,430,441,427,441,429,442,429,441,426,442,429,442,426,442,430,441,426,442,430,441,427,441,428,442,427,441,429,441,427,441,430,441,426,442,430,441,426,442,429,441,429,442,426,442,429,442,427,441,429,442,426,442,430,441,428,442,428,440,429,442,426,442,429,442,428,440,429,442,426,442,428,442,1298,441,427,441,1300,442,426,442,429,442,427,441,1297,442,1300,440,426,442,428,443,427,441,430,441,427,441,429,442,426,442,428,442,429,442,426,442,430,441,427,441,430,441,427,441,429,442,425,442,429,442,426,442,429,442,1298,441,428,443,1298,441,1297,441,428,442};
static const uint16_t b_47_r7[] = {439,426,442,429,442,427,441,429,442,427,441,24983,3516,1700,441,1297,442,430,440,427,441,430,440,1298,441,429,442,426,442,428,442,426,442,1300,441,427,441,1298,441,1298,441,430,441,1297,442,1300,440,1298,441,1297,441,1298,441,430,441,426,442,1298,440,430,441,428,442,427,441,429,442,426,442,430,441,426,442,430,441,425,443,428,442,426,442,430,441,426,442,430,440,427,441,429,442,426,442,428,442,1298,441,430,441,427,441,431,440,1298,440,1297,442,430,441,429,441,1297,442,1298,441,1298,441,1298,440,429,442,1298,441,426,442,429,441,429,442,426,442,429,442,427,441,428,443,427,441,429,442,426,441,429,442,426,442,431,440,426,442,1300,441,1297,441,427,441,429,441,429,442,427,441,430,441,427,441,429,442,426,442,429,442,426,441,429,442,427,441,430,441,425,443,430,441,427,441,430,441,429,441,426,442,428,443,426,442,430,441,426,442,429,442,425,443,428,442,427,441,429,442,427,441,430,441,426,442,429,442,427,441,428,442,430,441,427,441,429,442,426,442,430,441,426,442,430,441,429,441,428,440,429,442,427,441,430,441,427,441,429,442,427,441,428,442,1297,442,430,441,1297,442,427,441,429,442,427,441,1297,441,1300,441,427,441,430,441,427,441,429,441,427,441,429,442,426,442,428,442,429,442,426,442,429,442,426,442,430,441,427,441,429,442,425,442,1300,441,1298,441,1298,440,426,442,430,440,1298,440,1298,440,428,442};
static const uint16_t b_47_r8[] = {441,426,442,429,442,427,441,430,441,426,442,24983,3516,1701,440,1298,440,430,441,426,441,430,441,1298,441,429,442,426,442,428,442,427,441,1300,441,427,441,1298,440,1298,441,430,441,1298,441,1299,441,1297,441,1296,443,1297,442,429,442,427,441,1297,442,429,442,429,441,427,441,428,443,427,441,429,442,426,442,428,443,426,442,429,441,427,441,428,443,426,442,431,440,427,441,429,442,427,441,429,441,1297,442,428,442,426,442,429,442,1298,441,1296,443,430,441,429,441,1298,440,1298,441,1297,441,1299,440,429,442,1297,442,427,441,429,441,430,441,426,442,429,441,427,441,429,442,428,440,429,442,428,442,426,442,429,442,427,441,430,441,1297,442,1297,441,427,441,429,441,429,442,426,442,429,442,427,441,429,442,426,442,429,442,426,441,430,441,427,441,430,441,426,442,429,442,426,442,430,441,429,441,427,441,429,442,427,441,430,441,427,441,430,441,426,442,429,441,427,441,429,442,426,442,429,442,426,442,429,442,426,442,428,442,1297,442,430,440,427,441,430,441,426,442,429,442,427,441,429,441,431,440,426,442,429,442,427,441,429,442,426,442,429,442,428,442,1297,442,426,442,1298,440,429,442,427,441,429,442,1298,440,1299,441,427,441,430,441,427,441,429,442,426,442,429,442,427,441,430,440,427,441,430,441,426,442,429,442,426,442,429,442,426,442,428,442,429,442,426,442,429,442,1297,442,427,441,1298,441,1299,442,426,441};
static const uint16_t b_47_r9[] = {440,427,441,429,442,426,442,430,441,427,441,24982,3517,1700,441,1297,441,430,441,426,442,430,441,1297,442,429,442,427,441,428,442,427,441,1300,441,427,441,1297,442,1297,441,430,441,1299,440,1300,440,1296,442,1298,441,1297,441,429,442,426,442,1297,441,430,441,429,441,426,442,429,442,427,441,430,441,426,442,429,442,425,443,429,441,427,441,429,442,427,441,429,442,427,441,429,442,428,440,428,441,1298,441,429,442,426,442,429,442,1298,441,1297,442,429,441,428,442,1297,441,1298,441,1297,442,1297,442,429,442,1298,441,426,442,427,443,430,441,426,442,429,442,427,441,429,442,427,441,429,442,429,441,427,441,428,443,426,442,429,442,1298,440,1296,443,427,441,429,441,428,443,426,442,430,441,426,442,429,442,426,442,429,442,426,441,429,442,427,441,429,442,426,442,429,441,426,442,429,442,428,442,426,442,430,441,427,441,430,441,426,442,430,441,425,443,429,441,427,441,429,442,426,442,429,442,426,442,429,442,426,442,429,441,429,442,427,441,429,441,426,442,429,442,427,441,429,442,427,443,427,441,429,442,426,442,429,442,426,442,430,441,427,441,428,442,1297,441,429,442,1298,441,426,442,430,441,426,442,1297,442,1298,442,426,442,430,441,427,441,429,442,427,441,429,442,427,441,429,441,429,442,1297,442,426,442,429,442,426,442,430,441,425,443,429,441,1297,441,430,441,427,441,1297,442,429,441,1297,442,1297,442,429,441};
static const uint16_t b_47_r10[] = {440,426,442,428,443,425,443,429,442,425,443,24982,3516,1702,440,1297,442,427,444,426,442,429,441,1297,442,428,443,425,443,427,443,424,444,1299,442,425,443,1296,443,1296,443,428,443,1295,444,1298,442,1296,443,1296,443,1296,443,428,443,424,444,1296,443,428,443,428,442,425,443,428,442,425,443,429,442,425,443,429,442,425,443,427,443,425,443,430,441,426,442,430,440,425,443,428,443,425,443,427,443,1296,443,428,443,425,443,428,443,425,442,429,442,426,442,427,443,428,443,1297,441,426,442,428,443,1296,443,1296,443,428,443,425,442,429,442,425,443,428,443,426,442,429,441,426,442,428,443,427,443,425,443,429,442,425,443,428,443,1297,441,1297,442,428,443,424,443,428,443,427,441,429,442,426,442,428,443,425,443,428,443,427,443,426,442,429,442,426,442,429,442,426,442,429,442,425,443,428,442,425,443,428,443,426,442,428,443,426,442,428,443,427,441,428,442,428,443,426,442,428,443,426,442,428,443,426,442,428,443,428,442,424,444,428,442,425,443,427,444,425,443,429,442,426,442,429,441,425,443,428,443,425,443,428,443,425,443,428,443,426,442,427,443,1297,442,428,443,1297,442,426,442,428,443,426,442,1300,441,1295,443,428,443,426,442,428,443,425,443,429,442,425,443,429,442,425,442,428,443,425,443,428,443,426,442,428,443,425,443,429,442,428,442,425,443,1297,442,428,443,1297,442,1296,443,1296,442,429,442,427,443};
static const uint16_t b_47_r11[] = {441,427,441,429,442,427,441,429,442,426,442,24983,3515,1699,442,1297,441,429,442,427,441,429,442,1297,441,429,442,426,442,428,442,426,442,1299,443,425,443,1298,441,1297,442,429,442,1298,441,1299,441,1297,442,1298,441,1296,442,429,442,425,443,1298,441,430,441,428,442,427,441,429,442,426,442,428,443,425,443,431,440,426,442,430,440,426,442,430,441,427,441,429,442,426,442,429,442,426,442,428,442,1297,442,429,442,426,442,429,442,1297,441,1297,442,429,442,428,441,1296,443,1297,441,1297,442,1297,441,429,442,1296,442,426,442,428,442,430,441,426,442,428,443,426,442,429,442,427,441,430,441,428,442,1297,441,1298,440,1297,442,1296,443,1297,441,1299,442,426,442,428,442,427,441,429,442,425,443,430,441,426,442,429,441,426,442,429,441,429,442,426,442,428,443,426,442,429,442,426,442,429,442,426,441,429,442,427,441,429,442,426,442,428,443,426,442,429,442,428,442,427,441,429,442,426,442,429,442,425,443,429,442,426,442,430,440,429,442,426,442,428,443,426,442,428,443,1297,441,426,442,428,442,426,442,429,442,427,441,429,442,426,442,429,442,426,442,428,442,1298,441,429,442,1297,442,428,443,426,442,429,442,1297,442,1296,442,429,442,427,441,430,441,426,442,429,442,426,442,429,442,428,442,426,442,429,442,426,442,430,441,427,441,428,443,426,442,429,441,426,442,1297,441,1300,441,426,442,1297,442,429,441,426,442,1300,441};
static const uint16_t b_47_r12[] = {439,426,442,429,442,426,442,429,442,425,443,24983,3516,1701,440,1297,442,429,442,425,443,429,442,1298,441,429,442,426,442,428,442,427,441,1301,440,426,442,1297,442,1297,442,430,441,1296,442,1299,441,1296,443,1297,441,1298,441,429,442,426,442,1297,442,429,442,429,441,427,441,430,441,426,442,430,441,427,441,429,442,426,442,429,441,426,442,428,443,427,441,429,442,426,442,429,442,427,441,428,442,1297,442,429,442,426,442,430,441,1297,442,1297,441,429,442,429,441,1297,442,1297,441,1297,441,1297,442,429,442,1298,440,426,442,429,441,430,441,427,441,429,442,426,442,429,442,426,442,429,442,429,441,427,441,428,443,426,442,429,442,1298,441,1297,441,426,442,430,440,430,441,426,442,430,440,428,440,429,442,427,441,429,442,425,442,430,441,427,441,429,442,427,441,430,441,425,443,429,442,429,441,426,442,429,442,426,442,430,441,426,442,430,441,426,442,429,441,427,441,429,442,427,441,429,442,426,442,430,441,427,441,429,441,430,441,427,441,429,442,426,442,429,442,1298,441,426,442,429,441,429,442,427,441,430,441,427,441,430,441,426,442,429,442,428,442,1297,442,427,441,1298,440,429,442,427,441,429,442,1297,442,1300,440,425,443,429,442,427,441,429,442,426,442,429,442,427,441,429,441,426,442,1297,441,430,440,426,442,429,442,427,441,430,441,428,442,1298,441,426,442,430,441,1298,441,429,442,427,441,430,441,1297,441};
static const uint16_t b_47_r13[] = {441,426,442,428,443,426,442,429,442,427,441,24982,3517,1700,441,1297,441,429,442,427,441,429,442,1297,442,429,442,428,440,429,441,425,443,1299,442,425,443,1298,441,1298,440,429,442,1297,441,1300,441,1297,442,1297,441,1297,442,429,442,427,441,1298,440,430,441,428,442,426,442,430,441,427,441,429,442,426,442,429,442,427,441,429,441,426,442,428,443,427,441,429,442,426,442,429,442,426,442,428,442,1297,442,430,441,427,441,428,443,1298,441,1298,441,428,443,428,442,1297,442,1297,442,1297,442,1297,441,428,443,1297,441,426,442,428,442,429,442,426,442,428,443,427,441,429,442,426,442,430,441,425,442,430,440,426,442,429,442,426,442,429,442,1298,441,429,442,1297,440,429,442,426,442,429,442,426,442,428,442,427,441,429,441,425,442,430,441,426,442,1300,441,1297,442,426,442,1298,440,428,443,429,440,1298,441,427,441,429,442,426,442,429,442,426,442,428,443,428,442,426,442,429,442,427,441,429,442,427,441,430,441,427,441,429,441,426,442,429,442,426,442,429,442,426,442,1300,441,426,442,429,440,426,442,429,441,427,441,429,442,427,441,430,441,426,442,428,442,1297,442,429,442,1297,441,430,441,426,442,429,442,1297,441,1296,442,428,443,426,442,429,442,426,442,429,442,1297,441,426,442,427,443,430,441,1297,441,427,441,429,442,426,442,429,442,426,442,428,442,430,441,1297,442,1297,442,429,441,427,441,429,442,1297,442,427,443};
static const uint16_t b_47_r14[] = {442,426,442,428,443,426,442,429,442,426,442,24982,3516,1700,441,1297,442,428,443,426,442,429,442,1298,441,428,443,427,441,427,443,425,443,1299,442,426,442,1297,442,1296,442,429,442,1297,442,1299,441,1296,442,1297,442,1298,441,429,442,426,442,1297,442,428,443,427,443,426,442,430,441,426,442,429,442,427,441,429,442,426,442,428,442,425,443,428,443,425,443,429,442,426,442,428,443,426,442,428,442,1297,441,429,442,425,443,429,442,1297,442,1297,442,429,442,428,442,1297,442,1297,442,1296,443,1296,442,429,442,1297,442,427,441,428,442,428,443,427,441,430,441,426,442,429,442,426,442,430,441,428,442,426,442,429,442,426,442,428,442,426,442,1297,442,429,442,1296,442,430,441,426,442,428,442,426,442,429,442,426,442,429,442,426,441,429,442,426,442,1299,442,1297,442,427,441,1296,442,430,441,428,442,1296,443,428,440,429,442,426,442,430,441,427,441,428,443,428,442,426,442,428,443,427,441,428,443,426,442,429,441,426,442,429,441,428,443,426,442,428,443,426,442,429,442,1297,442,426,442,428,442,427,441,428,443,427,441,429,442,427,441,429,442,426,442,428,442,1296,442,429,442,1296,442,429,442,426,442,428,443,1296,443,1297,441,429,442,426,442,1297,441,430,441,426,442,1300,441,426,442,429,441,426,442,1300,442,426,442,430,441,426,442,430,440,427,441,428,442,426,442,1301,440,427,441,1296,443,429,442,426,442,1298,440,429,441};
static const uint16_t b_47_r15[] = {440,425,443,428,443,426,442,429,442,426,442,24982,3517,1701,440,1298,441,429,442,425,443,429,442,1296,443,428,443,426,442,427,443,426,442,1300,441,426,442,1297,441,1297,442,429,442,1297,441,1299,441,1296,443,1298,440,1298,441,428,443,427,441,1297,442,429,442,428,441,425,443,429,442,426,442,429,442,426,442,429,442,427,441,428,442,426,442,428,443,425,443,429,442,426,442,429,442,425,443,427,442,1297,442,429,442,427,441,428,443,1297,441,1298,441,429,441,428,442,1297,442,1297,442,1297,441,1298,440,429,442,1297,441,425,443,429,441,428,442,427,441,429,442,426,442,429,442,426,442,429,442,428,442,425,443,428,443,427,441,429,442,426,442,1297,442,429,441,1296,442,430,441,426,442,429,441,425,443,428,443,426,442,429,442,425,442,1300,441,1297,441,427,441,1296,443,429,442,1297,442,428,443,425,442,1299,442,426,442,429,442,426,442,429,442,426,442,429,442,425,442,429,442,426,442,428,443,426,442,428,443,427,441,429,442,428,442,426,442,428,443,427,441,429,442,426,442,1297,442,429,442,429,441,426,442,428,442,426,442,429,442,427,441,429,442,426,442,428,442,1297,442,430,441,1298,440,426,442,428,443,426,442,1297,442,1299,441,426,442,429,442,1297,441,429,442,426,442,1296,443,428,443,1296,442,428,443,1297,441,426,442,429,442,426,442,429,442,426,442,428,442,1297,442,430,441,425,443,1300,442,426,442,429,442,1297,441,1296,442};
static const uint16_t b_47_r16[] = {442,424,444,428,443,427,441,428,443,426,442,24981,3517,1700,443,1296,443,424,444,427,444,425,443,1298,443,425,443,429,442,426,442,425,443,1300,441,426,442,1297,442,1296,443,428,443,1297,442,1297,442,1295,444,1295,444,1298,443,424,444,428,443,1295,444,425,443,428,443,425,443,427,444,425,443,428,443,424,444,428,443,425,443,425,443,427,444,426,442,428,443,425,443,428,443,425,443,428,443,427,441,1296,443,1299,442,424,444,428,443,1296,442,1295,444,425,443,429,442,1296,443,1296,443,1295,443,1295,444,428,443,1296,442,428,443,427,441,424,444,428,443,425,443,428,443,424,444,428,443,425,443,428,443,425,443,428,443,425,443,429,442,425,443,1296,443,428,443,1296,442,428,443,426,442,427,444,425,443,428,442,425,443,428,443,425,443,428,443,425,443,1295,443,1295,444,1298,443,1296,443,425,443,428,443,424,444,427,443,425,443,427,444,425,443,427,444,425,443,426,442,428,443,425,443,427,444,424,444,428,443,425,443,428,443,425,443,427,444,425,443,428,443,426,442,428,443,424,444,428,443,425,442,429,442,425,443,428,443,425,443,428,443,424,444,427,444,426,442,1296,443,428,443,1295,443,428,443,425,443,428,443,1296,443,1296,443,425,443,428,443,425,443,428,443,425,443,428,443,424,444,428,443,425,443,1297,441,429,442,425,443,427,444,426,442,428,443,425,442,1299,443,1297,442,1296,443,425,443,1299,442,425,443,428,443,426,442};
static const uint16_t b_47_r17[] = {440,427,441,429,442,426,442,428,443,426,442,24982,3516,1701,442,1297,442,426,442,429,442,425,443,1300,441,428,440,430,441,427,441,426,442,1300,441,426,442,1298,440,1297,442,430,440,1297,442,1298,441,1297,442,1296,442,1301,441,426,442,428,443,1296,443,427,441,429,442,428,440,429,442,426,442,430,441,426,442,430,441,426,442,427,441,428,443,426,442,429,442,426,442,429,442,425,443,430,441,426,442,1297,442,1300,441,1297,442,425,443,1298,440,1301,440,426,442,426,442,1300,441,1297,441,1298,441,1298,441,429,442,1298,441,426,442,429,442,425,443,428,443,425,443,429,442,426,442,429,442,426,442,427,441,429,442,426,442,429,442,427,441,429,442,1297,442,430,441,1297,441,426,442,428,443,426,442,428,443,426,442,429,442,426,442,430,441,426,442,428,442,1298,441,1297,441,1297,442,1297,441,429,442,426,442,428,443,426,442,428,442,426,442,429,442,426,442,1298,440,1297,442,1300,441,1297,442,425,443,429,442,426,442,428,443,426,442,429,442,426,442,428,443,427,441,429,441,427,441,429,441,426,442,426,442,429,442,427,441,430,441,426,442,429,442,425,443,428,443,428,442,1297,442,426,442,1297,442,429,442,427,441,429,442,1296,443,1299,440,428,443,425,443,429,442,427,441,428,442,426,442,430,441,427,441,426,442,1300,441,426,442,429,442,427,441,429,442,426,442,427,441,429,442,1298,441,1297,442,1296,442,1300,441,426,442,1297,441,1298,441};
static const uint16_t b_47_r18[] = {443,425,465,405,465,404,442,427,444,424,444,24981,3517,1700,443,1295,443,425,443,427,444,425,443,1299,442,425,443,428,443,425,443,425,443,1298,443,424,444,1297,441,1296,443,427,443,1295,444,1296,443,1295,444,1297,441,1298,443,424,444,427,444,1296,442,425,443,427,444,425,443,428,443,425,443,428,443,425,443,427,444,425,443,425,443,427,444,425,443,427,444,424,444,427,444,425,443,427,444,425,443,1297,441,427,444,424,444,428,443,1295,444,1295,444,428,443,424,444,1296,443,1296,442,1298,443,1296,443,425,443,1296,443,428,443,425,443,428,443,425,443,428,443,425,443,427,444,424,444,428,443,425,442,427,444,424,444,428,443,425,443,428,443,1296,443,428,443,1295,444,424,444,428,443,425,443,428,443,425,443,427,444,425,443,425,443,428,443,424,444,428,443,424,444,428,443,424,444,428,443,424,444,428,443,424,444,428,443,425,443,427,444,424,444,428,443,424,443,427,444,424,444,428,443,425,443,427,444,424,444,428,443,424,444,427,444,425,443,428,443,424,444,428,443,425,443,428,443,426,442,428,443,425,443,427,444,424,444,428,443,425,443,428,443,425,443,1297,442,427,444,1295,443,425,443,428,443,425,443,1295,444,1297,444,424,444,428,443,425,443,428,443,1295,444,424,444,427,444,426,442,428,443,1295,444,424,444,427,444,425,443,427,444,424,444,428,443,1296,443,425,443,428,443,1296,443,427,444,1295,444,1296,443,1296,443};
static const BBtn b_47[] = {
  {"OFF", PR_RAW, 0, 0, 0, 38000, b_47_r0, 319},
  {"COOL", PR_RAW, 0, 0, 0, 38000, b_47_r1, 319},
  {"HEAT", PR_RAW, 0, 0, 0, 38000, b_47_r2, 319},
  {"DRY", PR_RAW, 0, 0, 0, 38000, b_47_r3, 319},
  {"AUTO", PR_RAW, 0, 0, 0, 38000, b_47_r4, 319},
  {"FAN_ONLY", PR_RAW, 0, 0, 0, 38000, b_47_r5, 319},
  {"TEMP+", PR_RAW, 0, 0, 0, 38000, b_47_r6, 319},
  {"TEMP-", PR_RAW, 0, 0, 0, 38000, b_47_r7, 319},
  {"POWERFUL", PR_RAW, 0, 0, 0, 38000, b_47_r8, 319},
  {"COMFORT", PR_RAW, 0, 0, 0, 38000, b_47_r9, 319},
  {"FAN", PR_RAW, 0, 0, 0, 38000, b_47_r10, 319},
  {"SWING", PR_RAW, 0, 0, 0, 38000, b_47_r11, 319},
  {"QUIET", PR_RAW, 0, 0, 0, 38000, b_47_r12, 319},
  {"SLEEP", PR_RAW, 0, 0, 0, 38000, b_47_r13, 319},
  {"ECONOMY", PR_RAW, 0, 0, 0, 38000, b_47_r14, 319},
  {"MOLD PROOF", PR_RAW, 0, 0, 0, 38000, b_47_r15, 319},
  {"TIMER ON", PR_RAW, 0, 0, 0, 38000, b_47_r16, 319},
  {"TIMER OFF", PR_RAW, 0, 0, 0, 38000, b_47_r17, 319},
  {"TIMER CANCEL", PR_RAW, 0, 0, 0, 38000, b_47_r18, 319},
};
static const BRemote rem_48[] = {
  {"ARC480A41", b_47, 19},
};
static const uint16_t b_49_r0[] = {3472,1744,416,457,415,1306,418,463,419,466,416,473,419,474,418,478,414,457,415,458,414,463,419,462,420,465,417,472,420,1316,418,479,413,458,414,459,413,464,418,463,419,466,416,473,419,1318,416,1324,420,1295,418,454,418,459,413,1312,422,463,419,470,422,471,421,475,417,454,418,455,417,460,422,459,413,472,420,469,413,480,412,485,417,453,419,454,418,459,413,468,414,471,421,468,414,479,413,484,418,452,420,453,419,458,414,468,414,471,421,467,415,478,414,483,419,451,421,453,419,1301,412,1312,422,463,419,470,422,471,421,476,416,433,418,10535,3469,1746,414,459,413,1308,415,465,417,468,414,475,417,476,416,481,421,449,413,461,421,455,417,465,417,467,415,474,418,1319,415,482,420,450,422,451,421,457,415,466,416,469,413,476,416,1320,414,1327,417,1297,416,457,415,462,420,1305,419,466,416,473,419,474,418,478,414,457,415,458,414,463,419,462,420,465,417,472,420,473,419,477,415,456,416,1301,412,464,418,463,419,1310,413,1319,415,1321,413,485,417,453,419,454,418,459,413,1312,422,1307,416,472,420,1317,416,480,412,459,413,460,412,465,417,464,418,467,415,474,418,475,417,479,413,1302,422,1295,418,1302,421,1303,421,1308,415,473,419,1318,416,481,421,1293,420,1296,417,460,412,1313,421,1307,416,473,419,473,419,478,414,457,415,458,414,463,419,462,420,465,417,472,420,473,419,477,415,456,416,457,415,1306,418,1307,416,1312,422,467,415,478,414,483,419,451,421,452,420,457,415,467,415,469,413,476,416,1321,413,1328,416,1298,415,458,414,463,419,462,420,465,417,472,420,472,420,477,415,456,416,457,415,462,420,461,421,464,418,470,422,471,421,476,416,454,418,1299,414,463,419,461,421,464,418,471,421,472,420,477,415,1299,414,459,413,464,418,463,419,466,416,473,419,473,419,478,414,457,415,458,414,463,419,462,420,465,417,472,420,473,419,477,415,456,416,457,415,1306,417,1307,416,468,414,1319,415,478,414,483,419,430,421};
static const uint16_t b_49_r1[] = {3473,1716,444,455,417,1304,420,461,421,464,418,471,421,471,421,476,416,455,417,456,416,461,421,460,412,473,419,469,413,1324,420,477,415,455,417,457,415,462,420,461,421,463,419,470,422,1315,419,1321,413,1302,422,451,421,456,416,1309,414,470,422,467,415,478,414,482,420,451,421,452,420,457,415,466,416,469,413,476,416,477,415,481,421,450,412,461,421,456,416,465,417,468,414,474,418,475,417,480,412,458,414,459,413,464,418,463,419,466,416,473,419,474,418,478,414,457,415,458,414,1307,417,1308,416,469,413,476,416,477,415,481,421,428,413,10540,3465,1751,419,454,418,1302,422,459,413,472,420,469,413,480,412,485,417,453,419,454,418,459,413,468,414,471,421,468,414,1322,422,475,417,454,418,455,417,460,412,469,413,472,420,468,414,1323,421,1320,414,1300,413,460,412,465,417,1307,417,468,414,475,417,476,416,481,421,449,413,460,422,455,417,464,418,467,415,474,418,474,418,479,413,458,414,459,413,464,418,463,419,1309,415,1318,416,1321,413,484,418,452,420,453,419,458,414,1311,413,1316,418,471,421,1315,419,478,414,457,415,458,414,463,419,462,420,465,417,472,420,472,420,477,415,1299,414,1302,422,1299,414,1310,414,1315,419,470,422,1315,419,478,414,1300,413,1303,421,456,416,1309,415,1314,420,469,413,480,412,485,417,453,419,454,418,459,413,468,414,471,421,468,414,479,413,484,418,452,420,453,419,1302,422,1303,421,1307,417,473,419,473,419,478,414,457,415,458,414,463,419,462,420,465,417,471,421,1316,418,1322,422,1293,420,452,420,457,415,466,416,469,413,476,416,477,415,482,420,450,422,451,421,456,416,465,417,468,414,475,417,476,416,480,412,459,413,1304,420,457,415,466,416,469,413,476,416,477,415,481,421,1293,420,453,419,458,414,467,415,470,412,477,415,477,415,482,420,450,422,451,421,456,416,465,417,468,414,475,417,476,416,481,421,449,413,1304,420,457,415,1310,414,471,421,1311,413,481,421,475,417,432,419};
static const uint16_t b_49_r2[] = {3466,1750,420,453,419,1302,422,459,413,472,420,469,413,480,412,485,417,453,419,455,417,460,412,469,413,472,420,469,413,1324,420,476,416,455,417,456,416,461,421,460,422,463,419,470,422,1315,419,1322,412,1302,422,452,420,457,415,1310,414,471,421,468,414,479,413,484,418,452,420,453,419,458,414,468,414,471,421,467,415,478,414,483,419,452,420,453,419,458,414,467,415,470,412,477,415,478,414,483,419,451,421,452,420,457,415,466,416,469,413,476,416,477,415,482,420,450,422,451,421,1300,413,1312,412,473,419,470,412,481,421,475,417,432,419,10572,3473,1743,417,456,416,1305,419,462,420,465,417,472,420,473,419,477,415,456,416,457,415,463,419,461,421,464,418,471,421,1316,418,479,413,457,415,459,413,464,418,463,419,466,416,473,419,1317,417,1324,420,1294,419,454,418,459,413,1312,422,463,419,470,422,471,421,476,416,454,418,455,417,461,421,460,412,473,419,469,413,480,422,475,417,453,419,1298,415,462,420,461,421,1308,415,1317,417,1320,414,483,419,451,421,452,420,1301,412,1312,422,1307,417,473,419,1317,417,480,422,449,412,1304,419,1301,412,1312,422,1307,416,1316,418,1319,415,1326,418,453,419,1298,415,462,420,461,421,464,418,1314,420,1317,417,480,422,449,412,460,422,1299,414,467,415,1313,421,468,414,480,412,484,418,453,419,454,418,459,413,468,414,471,421,468,414,479,413,484,418,452,420,453,419,1302,422,1303,421,1308,415,474,418,474,418,479,413,458,414,459,413,464,418,463,419,466,416,473,419,1318,416,1324,420,1295,418,454,418,459,413,468,414,471,421,468,414,479,413,484,418,452,420,454,418,459,413,468,414,471,421,467,415,478,414,483,419,452,420,1297,416,460,422,459,413,472,420,469,413,480,412,484,418,1297,416,456,416,461,421,460,422,463,419,470,422,471,421,476,416,454,418,455,417,460,422,459,413,472,420,469,413,480,412,485,417,453,419,454,418,1303,421,1304,420,466,416,1316,418,476,416,480,422,1271,412};
static const uint16_t b_49_r3[] = {3474,1742,417,456,416,1305,418,462,420,465,417,472,420,473,419,478,414,456,416,458,414,463,419,462,420,465,417,472,420,1316,418,479,413,458,414,459,413,464,418,463,419,466,416,474,418,1318,416,1325,419,1296,417,455,417,460,422,1303,421,464,418,471,421,472,420,477,415,456,416,457,415,462,420,461,421,464,418,471,421,472,420,477,415,455,417,456,416,462,420,461,421,464,418,471,421,471,421,476,416,455,417,456,416,461,421,460,422,463,419,470,422,471,421,476,416,454,418,456,416,1305,419,1306,417,467,415,474,418,475,417,480,412,437,414,10576,3468,1747,413,461,421,1299,414,467,415,470,422,467,415,478,414,483,419,451,421,452,420,458,414,467,415,470,412,477,415,1321,413,485,417,453,419,454,418,459,413,469,413,472,420,469,413,1323,421,1320,414,1301,412,460,422,456,416,1309,414,470,422,467,415,478,414,483,419,451,421,452,420,457,415,467,415,470,412,477,415,478,414,482,420,451,421,1296,417,459,413,468,414,1315,419,1314,420,1317,417,480,422,449,412,460,422,455,417,1308,415,1313,421,469,413,1323,421,476,416,455,417,1300,413,1308,415,1309,414,1314,420,1313,421,1316,418,1323,421,450,422,1295,418,458,414,468,414,471,421,1311,413,1324,420,477,415,456,415,457,415,1306,417,464,418,1311,412,476,416,477,415,482,420,450,422,451,421,456,416,466,416,469,413,476,416,477,415,481,421,450,422,451,421,1300,413,1311,412,1316,418,472,420,473,419,477,415,456,416,457,415,463,419,462,420,465,417,472,420,1316,418,1323,421,1294,419,453,419,458,414,468,414,471,421,467,415,478,414,483,419,452,420,453,419,458,414,467,415,471,421,467,415,478,414,483,419,452,420,1297,416,460,422,459,413,472,420,469,413,480,412,485,417,1297,416,457,415,462,420,461,421,464,418,471,421,472,420,477,415,455,417,457,415,462,420,461,421,464,418,471,421,471,421,476,416,455,417,456,416,461,421,1304,419,465,417,1316,418,476,416,480,422,1271,422};
static const uint16_t b_49_r4[] = {3469,1746,413,460,412,1309,414,466,416,469,413,476,416,477,415,482,420,450,422,451,421,456,416,465,417,468,414,475,417,1320,414,483,419,451,421,452,420,457,415,467,415,470,412,476,416,1321,413,1328,416,1298,415,458,414,463,419,1306,417,467,415,474,418,475,417,480,412,458,414,459,413,465,417,464,418,466,416,473,419,474,418,479,413,457,415,459,413,464,418,463,419,466,416,472,420,473,419,478,414,457,415,458,414,463,419,462,420,465,417,472,420,472,420,477,415,456,416,457,415,1306,418,1307,416,468,414,475,417,476,416,481,421,427,414,10539,3464,1751,419,455,417,1303,420,461,421,464,418,471,421,471,421,476,416,455,417,456,416,461,421,460,422,463,419,470,412,1324,420,477,415,456,416,457,415,462,420,461,421,464,418,471,421,1315,419,1322,422,1293,420,452,420,457,415,1310,414,471,421,468,414,479,413,484,418,452,420,453,419,459,413,468,414,471,421,467,415,478,414,483,419,1295,418,455,417,1303,420,461,421,464,418,1314,420,473,419,1322,422,449,412,1304,419,1301,412,468,414,471,421,1312,422,1315,419,478,414,456,416,1301,412,1309,414,466,416,1313,421,468,414,479,413,484,418,430,421};
static const uint16_t b_49_r5[] = {3469,1747,413,460,412,1309,414,466,416,469,413,476,416,477,415,482,420,450,422,452,420,457,414,466,416,469,413,476,416,1321,412,484,418,452,420,454,418,459,413,468,414,471,421,468,414,1323,421,1319,414,1300,413,460,422,455,417,1308,415,469,413,476,416,477,415,482,420,451,421,452,420,457,414,466,416,469,413,476,416,477,415,482,420,450,422,452,420,457,415,466,416,469,413,476,416,477,415,482,420,450,422,451,421,457,415,466,416,469,413,476,416,477,415,481,421,450,422,451,421,1300,413,1311,412,473,419,469,413,480,422,475,417,432,419,10571,3473,1743,417,456,416,1305,418,462,420,465,417,472,420,473,419,478,414,456,416,458,414,463,419,462,420,465,417,472,420,1316,418,479,413,458,414,459,413,464,418,463,419,466,416,473,419,1318,416,1325,419,1295,418,455,417,460,422,1303,420,464,418,471,421,472,420,477,415,455,417,457,415,462,420,461,421,464,418,471,421,472,420,476,416,1299,414,1302,421,456,416,465,417,1312,411,477,415,1321,413,1328,416,455,417,457,415,1306,417,463,419,466,416,1317,416,1320,413,1327,417,1297,416,1301,412,464,418,464,418,467,415,474,418,1318,416,1325,419,1274,419};
static const uint16_t b_49_r6[] = {3467,1749,420,452,420,1301,412,468,414,472,420,468,414,479,413,484,418,453,419,454,418,459,413,469,413,472,420,469,413,1323,421,476,416,455,417,457,415,462,420,461,421,464,418,471,421,1315,419,1322,422,1293,420,452,420,458,414,1311,412,472,420,469,413,480,412,485,417,453,419,455,417,460,422,459,413,472,420,469,413,480,412,485,417,453,419,455,417,460,412,469,413,472,420,469,413,480,412,485,417,453,419,455,417,460,422,459,413,472,420,469,413,480,412,485,417,453,419,455,417,1304,419,1305,418,466,416,473,419,474,418,479,413,436,415,10538,3465,1751,419,454,418,1303,420,461,421,464,418,471,421,472,420,477,415,455,417,457,415,462,420,461,421,464,418,471,421,1315,418,479,413,457,415,459,412,464,418,463,419,466,416,473,419,1318,415,1325,419,1295,418,455,416,461,421,1303,420,465,417,472,420,473,419,478,414,456,416,458,414,463,419,462,420,465,417,472,420,473,419,478,414,456,416,1301,412,465,417,464,418,1311,412,476,416,477,415,482,420,451,421,452,420,457,415,1310,413,471,421,468,414,1323,421,476,416,455,417,456,416,462,420,461,421,464,418,471,421,471,421,476,416,1299,414,1302,421,1299,414,1311,412,1316,417,471,421,1316,417,479,413,1302,421,1295,418,459,412,1312,421,1307,416,472,420,473,419,478,414,457,415,458,414,464,418,463,419,466,416,473,419,473,419,478,414,457,415,458,414,1307,416,1309,414,1314,419,469,413,480,422,475,417,454,418,455,417,460,422,459,413,473,419,469,413,1324,420,1321,412,1302,421,452,420,457,415,466,416,469,413,476,416,477,415,482,420,451,421,452,420,457,414,467,415,470,412,477,415,478,414,483,419,451,421,1296,417,460,412,469,413,472,420,469,413,480,412,485,417,1297,416,457,415,462,420,461,421,464,418,471,421,472,420,477,415,456,416,457,414,462,420,461,421,464,418,471,421,472,420,477,415,456,416,457,414,1306,417,1307,416,1312,421,1311,412,481,421,1319,414,1279,414};
static const uint16_t b_49_r7[] = {3472,1744,415,457,415,1306,417,464,418,467,415,474,418,475,417,480,412,459,412,460,422,455,416,464,418,467,415,475,417,1319,414,482,420,451,421,452,420,457,415,467,415,470,412,477,415,1321,413,1328,416,1299,414,459,412,464,418,1307,416,469,413,476,416,477,415,481,421,450,422,451,421,456,415,466,416,469,413,476,416,477,415,482,420,450,422,451,421,457,415,466,416,469,413,476,416,477,415,482,420,450,422,452,420,457,415,466,416,469,413,476,416,477,415,482,420,450,422,452,420,1301,412,1312,422,463,419,470,422,471,421,476,416,433,418,10535,3467,1749,421,452,420,1301,412,469,413,472,420,469,413,480,412,484,418,453,419,454,418,459,413,469,413,472,420,469,413,1324,420,477,415,455,416,457,415,462,420,461,421,464,418,471,421,1316,418,1322,422,1293,420,453,419,458,413,1311,412,473,419,469,413,480,422,475,417,454,418,455,416,460,422,459,413,472,420,469,413,480,422,475,417,1298,415,1301,412,465,417,464,418,467,415,474,418,1318,415,1325,419,453,419,1298,415,1305,418,463,419,466,416,1316,417,1319,414,483,419,451,421,453,419,1302,421,459,413,1316,417,1315,419,474,418,479,413,436,415};
static const uint16_t b_49_r8[] = {3471,1745,414,458,414,1307,416,464,418,467,415,474,418,475,417,480,412,459,413,460,412,465,417,464,418,467,415,474,418,1319,415,482,420,450,422,451,421,457,415,466,416,469,413,476,416,1320,414,1327,417,1298,415,457,415,463,419,1305,418,467,415,474,418,475,417,480,412,458,414,459,413,465,417,464,418,467,415,474,418,474,418,479,413,458,414,459,413,464,418,463,419,466,416,473,419,474,418,479,413,457,415,458,414,464,418,463,419,466,416,473,419,473,419,478,414,457,415,458,414,1307,416,1308,416,469,413,476,416,477,415,482,420,429,412,10578,3466,1749,421,452,420,1301,412,469,413,472,420,469,413,479,413,484,418,453,419,454,418,459,413,468,414,471,421,468,414,1323,421,476,416,455,417,456,416,461,421,460,412,473,419,470,412,1324,420,1321,413,1302,421,451,421,457,415,1309,414,471,421,468,414,479,413,483,419,452,420,453,419,458,414,467,415,470,422,467,415,478,414,483,419,452,420,1297,416,460,422,459,413,1316,418,1315,418,1318,416,481,421,450,411,461,421,456,416,1309,414,1314,420,469,413,1324,420,477,415,456,416,1301,412,1308,415,1309,414,1314,420,1313,421,1316,418,1323,421,450,422,1295,418,1302,421,1303,420,1309,414,474,418,1319,414,482,420,1294,419,1298,415,461,421,460,422,1307,416,473,419,473,419,478,414,457,415,458,414,463,419,462,420,465,417,472,420,473,419,478,414,457,415,458,414,1307,416,1308,415,1313,421,468,414,479,413,484,418,453,419,454,418,459,413,468,414,471,421,468,414,1323,421,1319,415,1300,413,460,422,455,417,464,418,468,414,475,417,475,417,480,412,459,413,460,422,455,417,464,418,467,415,474,418,475,417,480,412,459,413,1304,419,457,415,466,416,469,413,476,416,477,415,482,420,1294,419,454,418,459,413,468,414,471,421,468,414,479,413,484,418,453,419,454,418,459,413,468,414,471,421,468,414,479,413,484,418,453,419,1297,416,461,421,460,422,463,419,1314,420,473,419,478,414,435,416};
static const uint16_t b_49_r9[] = {3472,1744,415,457,415,1306,418,464,418,467,415,474,418,475,417,479,413,458,414,459,413,464,418,463,419,466,416,473,419,1318,415,481,421,450,412,461,421,456,416,465,417,468,414,475,417,1320,414,1327,417,1297,416,457,415,462,420,1305,418,467,415,474,418,474,418,479,413,458,414,459,413,464,418,463,419,466,416,473,419,474,418,479,413,458,414,459,413,464,418,463,419,466,416,473,419,474,418,479,413,457,415,459,413,464,418,463,419,466,416,473,419,474,418,478,414,457,415,458,414,1307,416,1309,414,470,422,467,415,478,414,483,419,430,421,10532,3471,1744,415,458,414,1306,417,464,418,467,415,474,418,475,417,480,412,458,414,460,412,465,417,464,418,467,415,474,418,1319,414,482,420,450,422,451,421,457,415,466,416,469,413,476,416,1321,413,1328,416,1298,415,458,414,463,419,1306,417,467,415,474,418,475,417,480,412,459,413,460,412,465,417,464,418,467,415,474,418,475,417,480,412,458,414,1303,420,457,415,466,416,1313,421,1312,412,1324,420,478,414,456,416,458,414,463,419,1306,417,1311,412,476,416,1321,412,484,418,453,419,1298,415,1305,418,1306,417,1311,412,1320,414,1323,421,1320,414,457,415,1302,422,1299,414,1311,412,1316,418,1315,419,1318,416,481,421,450,422,1295,418,458,414,467,415,1314,420,469,413,480,422,475,417,454,418,455,417,460,422,459,413,472,420,469,413,480,412,485,417,453,419,455,417,1304,419,1305,418,1310,413,475,417,476,416,481,421,449,412,461,421,456,416,465,417,468,414,475,417,1320,413,1327,417,1298,415,458,414,463,419,462,420,465,417,472,420,473,419,478,414,456,416,458,414,463,419,462,420,465,417,472,420,473,419,477,415,456,416,1301,412,465,417,464,418,467,415,474,418,475,417,480,412,1302,421,451,421,457,415,466,416,469,413,476,416,477,415,482,420,450,422,451,421,457,415,466,416,469,413,476,416,477,415,481,421,450,422,1295,418,458,414,468,414,471,421,467,415,1322,422,475,417,1276,417};
static const uint16_t b_49_r10[] = {3466,1751,419,454,418,1303,421,460,422,463,419,470,412,481,421,475,417,454,418,455,417,460,422,459,413,472,420,469,413,1324,420,477,415,456,416,457,415,462,420,461,421,464,418,471,421,1316,418,1322,422,1293,420,452,420,458,414,1311,412,472,420,469,413,480,412,485,417,453,419,455,417,460,412,469,413,472,420,469,413,480,412,484,418,453,419,454,418,459,413,469,413,472,420,468,414,479,413,484,418,453,419,454,418,459,413,468,414,471,421,468,414,479,413,484,418,452,420,454,418,1302,422,1303,421,465,417,472,420,473,419,478,414,435,416,10574,3471,1745,415,459,413,1308,415,465,417,468,414,475,417,476,416,481,421,449,413,461,421,456,416,465,417,468,414,475,417,1319,415,483,419,451,421,452,420,458,414,467,415,470,412,477,415,1321,413,1328,416,1299,414,458,414,464,418,1306,418,468,414,475,417,476,416,480,422,449,412,460,422,455,417,465,417,468,414,475,417,476,416,480,422,1293,420,452,420,457,415,1310,413,1315,419,1314,420,473,419,478,414,1301,412,460,422,1299,414,467,415,470,412,1321,413,1324,420,477,415,456,416,457,415,462,420,1305,419,466,416,1317,417,476,416,1325,419,430,421};
static const uint16_t b_49_r11[] = {3466,1751,419,454,418,1303,420,460,422,463,419,470,422,471,421,476,416,455,417,456,416,461,421,460,422,463,419,470,422,1315,419,478,414,457,415,458,413,463,419,463,419,466,416,473,419,1317,416,1324,420,1295,418,455,416,460,422,1303,420,464,418,471,421,472,420,477,415,456,416,457,415,462,420,462,420,465,417,472,420,473,419,477,415,456,415,457,414,463,419,462,420,465,417,472,420,473,419,478,414,456,416,458,414,463,419,462,420,465,417,472,420,473,419,478,414,456,415,458,414,1307,416,1308,415,470,412,477,415,478,414,483,419,430,421,10532,3470,1745,414,459,413,1308,415,465,417,469,413,476,416,477,415,482,420,450,422,451,421,457,414,466,416,469,413,476,416,1321,412,484,418,453,419,454,418,459,413,469,413,472,420,469,413,1323,421,1320,413,1301,412,461,421,456,415,1309,414,471,421,467,415,479,413,483,419,452,420,453,419,459,413,468,414,471,421,468,414,479,413,484,418,452,420,1297,416,461,421,460,422,1307,416,1316,418,1319,414,482,420,451,421,452,420,458,414,1311,412,1316,417,471,421,1316,417,479,413,458,413,1303,420,1300,413,1312,421,1307,416,1316,417,1319,414,1326,418,453,419,1298,415,462,420,462,420,465,417,1315,418,1318,415,482,420,451,421,1296,417,459,412,469,413,1316,417,471,421,472,420,477,415,456,416,457,415,462,420,461,421,464,418,471,421,472,420,477,415,456,416,457,415,1306,417,1307,416,1312,421,468,414,479,413,484,418,453,419,454,418,459,413,468,414,472,420,468,414,1323,421,1320,413,1301,412,461,421,456,415,465,417,468,414,476,416,477,415,481,421,450,422,451,421,456,416,466,416,469,413,476,416,477,415,482,420,450,422,1295,418,459,413,468,414,471,421,468,414,479,413,484,418,1297,416,456,416,462,420,461,421,464,418,471,421,472,420,477,415,455,416,457,415,462,420,461,421,464,418,471,421,472,420,477,415,456,416,1300,413,1308,415,466,416,469,413,1319,414,479,413,484,418,1275,418};
static const uint16_t b_49_r12[] = {3468,1748,422,451,421,1300,413,468,414,471,421,468,414,479,413,484,418,452,420,454,418,459,412,468,414,471,421,468,414,1323,421,476,416,455,416,456,415,462,420,461,421,464,418,471,421,1316,417,1323,421,1293,420,453,419,459,412,1312,421,463,419,470,422,471,421,476,416,455,417,456,415,461,421,460,422,463,419,471,421,471,421,476,416,455,416,456,415,462,420,461,421,464,418,471,421,472,420,476,416,455,417,457,415,462,420,461,421,464,418,471,421,472,420,477,415,455,417,457,414,1306,417,1307,416,469,413,476,416,477,415,482,420,429,412,10541,3471,1745,414,458,413,1307,416,465,417,468,414,475,417,476,416,481,421,450,422,451,421,456,416,466,416,469,413,476,416,1320,413,484,418,452,420,454,418,459,412,468,414,471,421,468,414,1323,421,1320,413,1301,412,461,421,456,415,1309,414,471,421,468,414,479,413,483,419,452,420,453,419,459,412,468,414,471,421,468,414,479,413,484,418,452,420,1297,416,461,421,460,422,1307,416,1316,417,1319,414,483,419,451,421,453,419,458,414,1311,412,1316,417,472,420,1316,417,480,412,459,412,1304,419,1301,412,1312,422,1307,416,1317,416,1320,413,1327,417,454,418,1299,414,463,419,462,420,465,417,1316,417,1319,414,483,419,452,420,453,419,1302,421,459,413,1316,417,472,420,473,419,478,414,456,416,458,414,463,419,462,420,465,417,472,420,473,419,478,414,457,414,458,413,1307,416,1308,415,1314,419,469,413,480,422,475,417,454,418,455,416,461,421,460,412,473,419,470,412,1324,420,1321,412,1302,421,452,420,457,415,466,416,470,412,477,415,478,414,483,419,451,421,452,420,458,413,467,415,470,422,467,415,478,414,483,419,452,420,1297,416,460,422,459,413,473,419,469,413,481,421,475,417,1298,415,458,414,463,419,462,420,465,417,472,420,473,419,478,414,457,415,458,413,463,419,462,420,465,417,472,420,473,419,478,414,457,414,458,413,464,418,1307,416,468,414,1319,414,478,414,483,419,1274,419};
static const BBtn b_49[] = {
  {"Off", PR_RAW, 0, 0, 0, 38000, b_49_r0, 439},
  {"POWER_ON", PR_RAW, 0, 0, 0, 38000, b_49_r1, 439},
  {"TEMP+", PR_RAW, 0, 0, 0, 38000, b_49_r2, 439},
  {"TEMP-", PR_RAW, 0, 0, 0, 38000, b_49_r3, 439},
  {"ECONAVI", PR_RAW, 0, 0, 0, 38000, b_49_r4, 263},
  {"AUTO/COMFORT", PR_RAW, 0, 0, 0, 38000, b_49_r5, 263},
  {"MODE", PR_RAW, 0, 0, 0, 38000, b_49_r6, 439},
  {"NANO-G", PR_RAW, 0, 0, 0, 38000, b_49_r7, 263},
  {"MILD DRY COOL", PR_RAW, 0, 0, 0, 38000, b_49_r8, 439},
  {"FAN SPD", PR_RAW, 0, 0, 0, 38000, b_49_r9, 439},
  {"PWR QUIET", PR_RAW, 0, 0, 0, 38000, b_49_r10, 263},
  {"AIR SWG UP", PR_RAW, 0, 0, 0, 38000, b_49_r11, 439},
  {"AIR SWG DWN", PR_RAW, 0, 0, 0, 38000, b_49_r12, 439},
};
static const BRemote rem_50[] = {
  {"CWA75C4179", b_49, 13},
};
static const uint16_t b_51_r0[] = {3094,3056,3095,4432,577,1651,570,535,575,1652,569,536,574,530,570,1657,575,1652,569,536,574,1652,569,536,574,1652,569,1657,575,530,570,535,575,1651,570,535,575,1650,571,1655,576,1650,571,534,576,529,571,534,576,528,572,533,577,527,573,532,568,536,574,530,570,534,576,528,572,532,578,526,574,531,569,1655,577,529,571,533,577,528,572,533,577,527,573,531,569,1656,576,529,571,1655,577,528,572,532,578,526,574,531,569,536,574,529,571,534,576,528,572,532,568,536,574,530,570,534,576,528,572,532,578,526,574,1651,570,534,576,528,572,533,577,527,573,532,568,536,574,530,570,534,576,528,572,532,568,536,574,530,570,534,576,528,572,532,568,536,574,530,570,534,576,528,572,532,568,536,574,530,570,534,576,528,572,532,568,536,574,530,570,534,576,528,572,532,568,536,574,530,570,534,576,528,572,532,568,536,574,529,571,534,576,527,573,531,569,536,574,529,571,1653,578,526,574,1652,569,536,574,529,571,1655,576,1649,572,1653,579,1647,574,531,569,1657,574};
static const uint16_t b_51_r1[] = {3086,3063,3089,4438,571,1657,575,529,571,1656,576,529,571,534,576,1650,571,1655,577,527,573,1654,578,526,574,1653,569,1657,575,530,570,536,574,530,570,534,576,1648,573,1653,569,1658,574,530,570,535,575,530,570,534,576,527,573,531,569,535,575,529,571,533,577,526,574,530,570,534,576,528,572,532,568,536,574,529,571,533,578,526,574,530,570,534,576,528,572,1652,569,534,577,1649,573,532,579,526,574,530,570,534,576,527,573,531,569,535,575,528,572,532,568,536,574,529,571,533,577,526,574,530,570,534,577,1647,574,530,570,535,575,529,571,532,568,536,575,529,571,533,577,526,574,530,570,533,577,527,573,530,570,534,576,527,573,531,569,535,575,528,572,532,568,535,575,529,571,532,568,536,574,529,571,533,577,526,574,530,570,533,577,527,573,530,570,534,576,527,573,531,569,534,576,527,573,531,569,535,575,528,572,531,569,535,575,528,572,532,568,535,576,1648,573,531,569,1655,577,1648,573,1651,570,1654,578,1647,574,1651,570,533,577,1648,573,1651,571};
static const uint16_t b_51_r2[] = {3088,3063,3087,4442,576,1652,569,536,574,1654,577,527,573,533,577,1650,571,1656,575,530,570,535,575,531,569,536,574,530,570,535,575,529,571,1655,576,528,572,1656,575,1651,570,1657,574,531,569,537,573,532,578,527,573,532,568,536,574,531,569,535,575,530,570,535,575,529,571,534,576,528,572,533,577,1649,572,532,578,528,572,533,577,528,572,532,578,527,572,1652,569,536,574,1653,568,536,574,531,569,537,573,531,569,536,574,530,570,534,576,528,572,533,577,527,573,532,578,526,574,531,569,536,574,530,570,1656,575,529,571,535,575,530,570,535,575,529,571,533,577,528,572,532,578,526,574,531,569,536,574,530,570,535,575,529,571,534,576,528,572,533,577,527,573,531,569,536,574,531,569,535,575,530,570,534,576,529,571,533,577,528,572,532,578,527,573,531,569,536,574,530,570,535,575,529,571,534,576,528,572,532,578,527,573,531,569,536,574,530,570,534,576,528,572,533,577,1647,574,1653,578,526,574,531,579,526,574,1652,569,535,575,530,570,1656,575};
static const uint16_t b_51_r3[] = {3096,3055,3095,4433,574,1654,577,527,573,1655,576,529,571,534,576,1650,571,1657,574,530,570,536,574,530,570,535,575,1651,570,535,575,530,570,1656,575,530,570,1656,575,1652,569,1658,573,532,578,527,573,532,568,536,574,531,569,535,575,530,570,534,576,528,572,533,577,527,573,532,578,526,574,531,569,1656,575,530,570,535,575,530,570,534,576,528,572,533,577,1649,572,532,578,1648,573,532,578,527,573,532,578,526,574,531,569,535,575,530,570,534,576,528,572,533,577,527,573,532,578,526,574,531,569,536,574,1651,570,535,575,530,570,534,576,529,571,533,577,527,573,532,578,526,574,531,569,535,575,530,570,534,576,529,571,533,577,527,573,532,578,526,574,531,569,535,575,530,570,534,576,528,572,533,577,527,573,532,578,526,574,531,569,535,575,529,571,534,576,528,572,533,577,527,572,531,569,536,574,530,570,535,575,529,571,534,576,528,572,532,578,527,573,531,569,536,574,1651,570,1657,574,531,569,536,574,1652,569,1657,574,531,569,536,574,1652,569};
static const uint16_t b_51_r4[] = {3096,3055,3095,4434,573,1655,576,529,571,1656,575,530,570,536,574,1653,578,1648,573,533,577,528,572,533,577,1649,572,533,577,529,571,533,577,1649,572,533,577,1650,571,1656,575,1652,569,536,574,532,578,526,573,531,569,536,574,531,569,536,574,530,570,535,575,529,571,534,576,529,571,534,576,528,572,1654,577,528,572,534,576,528,572,533,577,528,572,533,577,1649,572,533,577,1649,572,533,577,529,571,533,577,527,573,532,578,526,574,531,569,536,574,530,570,535,575,530,570,534,576,529,571,534,576,528,572,1654,577,527,573,533,577,528,572,532,578,526,574,531,569,536,574,531,569,535,575,530,570,534,576,529,571,533,577,528,572,532,578,527,572,531,569,536,574,530,570,535,575,529,571,534,576,528,572,533,577,527,573,532,578,526,574,531,569,536,574,530,570,535,575,529,571,534,576,528,572,532,578,527,573,532,568,536,574,531,569,535,575,530,570,534,576,529,571,533,577,1649,572,1654,577,528,572,1655,576,528,572,1655,576,528,572,534,576,1649,572};
static const uint16_t b_51_r5[] = {3087,3063,3087,4441,577,1652,569,536,574,1653,578,527,573,532,578,1649,572,1654,577,528,572,533,577,528,572,1654,577,1649,572,533,577,528,572,1655,576,528,572,1655,576,1650,571,1656,575,530,570,535,575,530,570,535,575,529,571,534,576,528,572,533,577,527,573,532,568,536,574,531,569,535,575,530,570,1655,576,529,571,534,576,529,571,534,576,528,572,532,578,1647,574,531,569,1657,574,531,569,536,574,531,569,536,574,530,570,534,576,529,571,533,577,527,573,532,578,526,574,531,569,535,575,530,570,534,576,1649,572,533,577,528,572,533,577,528,572,532,578,526,574,531,569,535,575,529,571,534,576,528,572,533,577,527,573,531,569,536,574,530,570,535,575,529,571,533,577,527,573,532,578,526,574,531,569,535,575,529,571,534,576,528,572,533,577,527,573,532,568,536,574,530,570,535,575,529,571,534,576,528,572,532,578,527,573,531,569,536,574,530,570,534,576,529,571,533,577,1648,573,1653,578,526,574,1653,578,1648,573,1654,577,527,573,533,577,1649,572};
static const uint16_t b_51_r6[] = {3092,3058,3091,4463,544,1657,574,530,570,1658,573,532,578,526,574,1653,578,1649,572,533,577,528,572,1655,576,529,571,534,576,528,572,533,577,1649,572,533,577,1649,572,1655,576,1651,570,535,575,529,571,534,576,529,571,533,577,527,573,532,578,526,574,531,569,535,575,530,570,534,576,529,571,533,577,1649,571,533,577,527,573,532,578,526,574,531,569,535,575,1651,570,535,575,1651,570,535,575,529,571,534,576,528,572,533,577,527,573,532,568,536,574,530,570,535,575,529,571,534,576,528,572,532,578,526,574,1653,578,526,574,531,569,536,574,530,570,534,576,529,571,533,577,527,573,532,578,526,573,531,569,536,574,530,570,534,576,529,571,533,577,527,573,532,578,526,573,531,569,535,575,530,570,534,576,528,572,533,577,527,573,532,578,526,574,531,569,535,575,529,571,534,576,528,572,532,578,527,572,531,569,536,574,530,570,535,575,529,571,533,577,527,573,532,578,526,573,1652,569,1657,574,1653,578,526,573,531,569,1658,573,531,569,536,574,1652,569};
static const uint16_t b_51_r7[] = {3091,3059,3090,4437,570,1658,573,532,578,1649,572,533,577,528,572,1655,576,1650,571,534,576,530,570,1656,575,529,571,1656,575,530,570,536,574,1651,570,535,575,1651,569,1657,574,1653,578,527,573,532,578,527,573,532,578,526,573,531,569,535,575,529,571,534,576,528,572,533,577,527,573,532,568,536,574,1651,570,535,575,530,570,535,575,530,569,534,576,528,572,1654,577,527,573,1654,577,527,572,533,577,527,573,532,578,526,574,531,569,535,575,529,570,534,576,529,571,533,577,527,573,532,578,526,574,531,569,1656,575,529,571,535,575,529,571,534,576,528,572,533,577,527,572,531,569,536,574,530,570,535,575,529,571,533,577,528,572,532,578,526,573,531,569,535,575,529,571,534,576,528,572,532,578,526,574,531,569,535,575,530,570,534,576,528,572,533,577,527,573,531,569,536,574,530,570,535,575,529,571,533,577,527,573,532,568,536,574,530,570,535,575,529,571,534,576,528,572,1653,578,1647,573,1653,578,526,573,1653,578,1648,572,532,578,527,573,1653,578};
static const uint16_t b_51_r8[] = {3089,3061,3088,4440,577,1650,570,534,576,1651,569,536,574,531,569,1658,573,1653,578,527,573,533,577,1649,571,1655,576,529,571,534,576,530,570,1655,576,529,571,1656,575,1651,569,1657,574,531,569,536,574,532,578,526,573,531,569,536,574,530,570,535,575,529,571,533,577,528,572,532,578,527,572,531,569,1657,574,530,570,535,575,531,569,536,574,530,570,534,576,1649,571,533,577,1649,572,533,577,528,572,533,577,528,572,532,578,526,574,531,569,535,575,529,571,534,576,528,571,533,577,527,573,532,568,536,574,1651,569,535,575,530,570,535,575,530,570,534,576,528,572,533,577,527,573,531,568,536,574,530,569,535,575,529,571,534,576,528,572,533,577,527,572,531,569,536,574,530,569,535,575,529,571,533,577,528,572,533,577,527,573,531,569,536,574,530,570,535,575,529,571,533,577,527,573,532,578,526,573,531,569,535,575,529,571,534,576,528,572,532,578,526,574,531,569,536,574,1650,570,1655,576,1650,571,1656,575,530,570,1657,574,530,570,535,575,1651,570};
static const uint16_t b_51_r9[] = {3093,3057,3092,4435,572,1656,575,529,571,1657,574,531,569,536,574,1653,578,1648,572,532,578,528,572,1654,577,1649,571,1656,575,529,571,535,575,1651,569,535,575,1651,570,1657,574,1653,578,526,573,532,578,527,573,532,578,526,574,530,570,535,575,529,571,534,576,528,572,533,577,527,573,532,568,536,574,1651,569,535,575,531,569,536,574,530,570,535,575,530,570,1655,576,528,572,1655,576,528,572,534,576,528,572,533,577,527,572,531,569,536,574,530,570,534,576,528,572,533,577,527,572,532,578,526,573,531,569,1656,575,529,570,535,575,529,571,534,576,528,572,532,578,527,572,531,569,536,574,530,570,534,576,528,572,533,577,527,573,532,568,536,574,530,570,535,575,529,570,534,576,528,572,532,578,526,573,531,569,535,575,530,570,534,576,528,572,533,577,527,572,531,569,536,574,530,570,534,576,529,571,533,577,527,573,532,568,536,574,530,570,535,575,529,571,533,577,527,573,1652,568,1657,574,1652,568,1657,574,1652,579,1647,573,532,578,526,573,1652,569};
static const uint16_t b_51_r10[] = {3090,3060,3089,4438,569,1659,572,532,578,1649,572,534,576,529,571,1656,575,1651,570,535,575,1652,569,536,574,531,569,536,574,531,569,535,575,1651,570,534,576,1651,570,1657,574,1652,569,536,574,532,578,527,573,531,569,536,574,530,570,534,576,529,571,533,577,528,572,532,578,526,574,531,569,536,574,1651,570,534,576,530,570,535,575,529,571,534,576,528,572,1653,578,527,572,1653,578,527,573,533,577,527,573,531,569,536,574,530,570,534,576,528,572,533,577,527,573,532,568,536,574,530,570,535,575,529,571,1654,577,527,573,533,577,528,572,532,568,536,574,530,570,535,575,529,571,533,577,527,573,532,578,526,573,531,569,535,575,529,571,533,577,528,572,532,578,526,574,531,569,535,575,529,571,534,576,528,572,533,577,527,573,531,569,536,574,530,570,535,575,529,571,533,577,527,573,532,568,536,574,530,570,535,575,529,571,533,577,527,573,532,568,536,574,530,570,535,575,1649,572,533,577,528,572,533,577,527,573,1652,569,535,575,531,569,1656,575};
static const uint16_t b_51_r11[] = {3095,3054,3095,4432,575,1652,579,526,574,1653,578,527,572,532,578,1649,572,1654,577,528,572,1655,576,529,571,534,576,1651,570,535,575,529,571,1655,576,529,571,1655,576,1650,571,1655,576,529,571,534,576,529,571,534,576,528,572,533,577,527,573,531,569,536,574,530,570,535,575,529,571,533,577,527,573,1652,569,536,574,530,570,536,574,530,570,535,575,529,571,1654,577,527,573,1653,578,526,573,531,569,536,574,531,569,535,575,529,571,534,576,528,572,532,578,526,574,530,570,535,575,529,571,533,577,527,573,1652,569,536,574,530,570,536,574,530,570,535,575,529,571,533,577,527,573,531,569,536,574,530,570,534,576,528,572,532,578,526,573,530,570,535,575,529,571,533,577,527,572,531,569,536,574,530,570,534,576,528,572,532,578,526,573,531,569,535,575,529,571,533,577,527,573,532,568,536,574,530,570,534,576,528,572,532,578,526,574,531,569,535,575,529,571,533,577,527,573,1652,569,535,575,530,570,535,575,1650,571,1654,577,528,572,532,578,1648,573};
static const uint16_t b_51_r12[] = {3096,3053,3086,4441,577,1651,570,534,576,1651,570,535,575,530,570,1657,574,1651,570,535,575,1652,569,536,574,1652,569,536,574,531,569,536,574,1651,570,534,576,1650,571,1656,575,1651,570,535,575,530,570,535,575,530,570,534,576,528,572,532,578,526,574,531,569,535,575,529,571,534,576,528,572,532,578,1647,574,530,570,536,574,530,570,535,575,529,571,534,576,1648,573,532,578,1648,573,531,569,536,574,531,569,536,574,530,570,534,576,528,572,532,578,526,574,530,570,535,575,529,571,533,577,527,573,532,568,1656,575,530,570,535,575,529,571,534,576,528,572,532,578,526,573,530,570,534,576,528,572,533,577,527,573,531,569,535,575,529,571,534,576,528,572,532,578,526,574,530,570,535,575,529,571,533,577,527,573,531,569,535,575,529,571,534,576,528,572,532,568,536,574,530,570,534,576,528,572,532,578,526,574,531,569,535,575,529,571,533,577,527,573,531,569,536,574,530,570,1654,577,527,573,532,578,1647,574,530,570,1656,575,529,571,534,576,1649,572};
static const uint16_t b_51_r13[] = {3096,3054,3095,4433,574,1654,577,528,572,1655,576,529,571,535,575,1652,569,1658,573,532,578,1649,572,533,577,1650,571,1656,575,530,570,535,575,1652,569,535,575,1652,569,1658,573,1653,578,527,573,533,577,528,572,533,577,527,573,532,578,526,574,531,569,536,574,530,570,535,575,529,571,534,576,528,572,1654,577,527,573,533,577,528,572,533,577,527,573,532,568,1657,574,530,570,1658,573,531,569,536,574,531,569,536,574,530,570,535,575,529,571,534,576,528,572,533,577,527,573,532,578,526,574,531,569,536,574,1651,570,535,575,530,570,535,575,530,570,534,576,528,572,533,577,527,573,532,578,526,574,531,569,535,575,530,570,534,576,529,571,533,577,528,572,532,578,526,574,531,569,536,574,530,570,535,575,529,571,534,576,528,572,533,577,527,573,532,568,536,574,531,569,535,575,529,571,534,576,528,572,533,577,527,573,532,578,526,573,531,569,536,574,530,570,535,575,529,571,533,577,528,572,532,578,1647,574,1653,578,1648,573,532,578,527,573,533,577};
static const uint16_t b_51_r14[] = {3095,3055,3094,4435,572,1656,575,530,570,1658,573,532,578,527,573,1655,576,1650,570,535,575,1652,569,1658,573,533,577,527,573,533,577,528,572,1654,577,528,572,1655,576,1651,569,1657,574,531,569,537,573,532,578,527,573,532,578,526,573,531,568,536,574,531,569,536,574,530,569,535,575,529,571,534,576,1649,572,533,577,528,572,534,576,529,571,534,576,528,572,1653,578,527,573,1654,577,528,571,533,577,528,572,533,577,528,572,532,578,527,572,532,568,536,574,531,568,535,575,530,570,534,576,529,571,534,576,1648,573,533,577,527,573,533,577,528,572,533,577,527,572,532,568,536,574,531,569,535,575,529,571,534,576,528,572,533,577,527,573,532,578,526,573,531,569,536,574,530,570,535,575,529,571,534,576,528,572,533,577,527,573,532,568,536,574,530,570,535,575,529,571,534,576,528,572,533,577,527,573,532,578,526,574,531,569,536,574,530,570,534,576,529,571,533,577,528,572,532,578,526,573,1651,570,535,575,530,570,1657,574,530,570,535,575,529,571};
static const uint16_t b_51_r15[] = {3097,3053,3096,4432,575,1654,577,528,572,1656,575,530,569,536,574,1653,578,1649,571,533,577,1651,570,1657,574,531,568,1658,573,532,578,527,573,1654,577,528,572,1655,576,1650,570,1656,575,531,569,536,574,532,578,527,572,532,567,537,573,531,569,536,574,530,570,535,575,529,571,534,576,529,571,534,576,1649,571,533,577,528,572,534,576,528,572,533,577,527,572,1653,578,526,573,1653,578,527,573,532,578,527,573,532,578,527,573,531,569,536,574,531,569,535,575,529,571,534,576,529,571,533,577,528,572,533,577,1647,573,532,578,526,574,532,578,527,572,532,578,526,573,531,569,536,574,530,570,535,575,530,570,535,575,529,571,534,576,528,572,533,577,528,572,532,578,527,572,531,569,536,574,531,569,535,575,530,570,535,575,529,571,534,576,528,572,533,577,527,573,532,568,536,574,531,569,535,575,530,570,534,576,529,571,533,577,527,573,532,578,526,573,531,569,536,574,530,570,535,575,529,571,1655,576,529,571,1655,576,1650,570,534,576,529,571,535,575};
static const uint16_t b_51_r16[] = {3087,3063,3086,4441,577,1652,569,536,574,1653,578,527,573,533,577,1649,572,1655,576,529,571,1656,575,1652,569,1658,573,532,578,527,573,533,577,1649,572,533,577,1650,571,1655,576,1651,570,536,574,530,570,536,574,531,569,536,574,530,570,535,575,529,571,534,576,528,572,533,577,527,573,532,578,526,574,1652,569,536,574,531,569,537,573,531,569,536,574,530,570,1655,576,529,571,1655,576,529,571,534,576,529,571,534,576,528,572,533,577,527,573,532,568,536,574,530,570,535,575,529,571,534,576,529,571,533,577,1648,573,532,578,527,573,533,577,527,573,532,578,526,573,531,569,536,574,530,569,535,575,529,571,534,576,528,572,533,577,527,573,532,568,536,574,531,569,535,575,530,570,534,576,529,571,533,577,528,572,532,578,526,574,531,569,536,574,530,570,535,575,529,571,534,576,528,572,533,577,527,573,532,578,526,574,531,569,536,574,530,570,535,575,529,571,534,576,528,572,533,577,527,573,1652,569,1658,573,532,578,1648,573,532,578,527,573,532,578};
static const BBtn b_51[] = {
  {"POWER_ON", PR_RAW, 0, 0, 0, 38000, b_51_r0, 229},
  {"Off", PR_RAW, 0, 0, 0, 38000, b_51_r1, 229},
  {"TEMP_16", PR_RAW, 0, 0, 0, 38000, b_51_r2, 229},
  {"TEMP_17", PR_RAW, 0, 0, 0, 38000, b_51_r3, 229},
  {"TEMP_18", PR_RAW, 0, 0, 0, 38000, b_51_r4, 229},
  {"TEMP_19", PR_RAW, 0, 0, 0, 38000, b_51_r5, 229},
  {"TEMP_20", PR_RAW, 0, 0, 0, 38000, b_51_r6, 229},
  {"TEMP_21", PR_RAW, 0, 0, 0, 38000, b_51_r7, 229},
  {"TEMP_22", PR_RAW, 0, 0, 0, 38000, b_51_r8, 229},
  {"TEMP_23", PR_RAW, 0, 0, 0, 38000, b_51_r9, 229},
  {"TEMP_24", PR_RAW, 0, 0, 0, 38000, b_51_r10, 229},
  {"TEMP_25", PR_RAW, 0, 0, 0, 38000, b_51_r11, 229},
  {"TEMP_26", PR_RAW, 0, 0, 0, 38000, b_51_r12, 229},
  {"TEMP_27", PR_RAW, 0, 0, 0, 38000, b_51_r13, 229},
  {"TEMP_28", PR_RAW, 0, 0, 0, 38000, b_51_r14, 229},
  {"TEMP_29", PR_RAW, 0, 0, 0, 38000, b_51_r15, 229},
  {"TEMP_30", PR_RAW, 0, 0, 0, 38000, b_51_r16, 229},
};
static const BRemote rem_52[] = {
  {"ESV09CRO", b_51, 17},
};
static const uint16_t b_53_r0[] = {8364,4223,621,1958,1115,1478,593,1986,1082,1566,1072,1497,576,2003,1069,1513,1069,1541,1070,1505,1069,1505,1069,1497,1070,1550,1069,1530,1045,1522,551,2028,1045,1582,1044,1530,1044,1522,1045,1530,1044,1566,1045,1530,1045,1530,550,2021,550,2064,1044,1530,1044,1523,1043,1531,1044,1566,1045,1531,1043,1531,1044,1523,1044,1575,1043,1531,1044,1523,1044,1531,1044,1567,1044,1531,1043,1531,1044,1524,1043,1575,1043,1532,1043,1524,1043,1532,1043,1568,1042,1532,1043,1532,1043,1524,1043,1576,1042,1532,1043,1524,1043,1532,1042,1569,1042,1533,1016,1558,1042,1525,1042,1577,1016,1558,523,2048,1042,1525,547,2071,1041,1533,523,2049,522,2049,522};
static const uint16_t b_53_r1[] = {8362,4223,595,1983,1116,1480,592,1987,1081,1567,1070,1524,550,2029,1043,1540,1042,1568,1043,1532,549,2030,1042,1540,1042,1568,1042,1532,1042,1532,549,2022,549,2065,1043,1528,1043,1532,1043,1524,1042,1576,1042,1532,1042,1525,548,2030,549,2082,1042,1524,1042,1533,1042,1525,1042,1576,1042,1533,1042,1525,1041,1533,1042,1569,1042,1533,1042,1533,1042,1525,1041,1577,1041,1533,1042,1525,1041,1534,1041,1569,1042,1533,1041,1534,1040,1526,1041,1578,1041,1534,1041,1526,1040,1534,1041,1570,1041,1534,1015,1560,1015,1552,1015,1604,1040,1535,1040,1527,1039,1535,1014,1597,1013,1561,1014,1561,1013,1554,519,2129,987,1554,544,2036,518,2093,987};
static const uint16_t b_53_r2[] = {8390,4203,594,1992,1117,1467,621,1977,1084,1547,1077,1526,551,2020,1044,1522,1044,1574,1044,1530,551,2020,1044,1522,1045,1574,1045,1530,1044,1522,551,2028,551,2080,1044,1523,1043,1531,1044,1523,1044,1575,1043,1531,550,2021,1043,1523,550,2073,1043,1523,1043,1531,1044,1523,1043,1575,1043,1531,1043,1523,1044,1531,1043,1567,1043,1531,1044,1532,1043,1523,1043,1576,1043,1532,1042,1528,1042,1528,1043,1568,1042,1532,1043,1532,1043,1524,1042,1576,1042,1533,1042,1524,1042,1532,1043,1569,1016,1558,1017,1558,1041,1526,1017,1603,1015,1558,1017,1551,1015,1559,1016,1595,1015,1559,1016,1559,1015,1551,522,2102,1015,1551,522,2058,1014,1568,1014};
static const uint16_t b_53_r3[] = {8360,4258,565,2020,1088,1493,593,1977,1083,1549,1073,1529,552,2019,1046,1521,1045,1573,1046,1529,552,2019,1046,1521,1045,1573,1046,1529,1046,1521,551,2027,552,2079,1046,1521,1045,1529,1045,1521,1046,1574,1045,1529,551,2020,1045,1522,1044,1574,1045,1530,1045,1522,1044,1530,1045,1565,1045,1530,1044,1530,1045,1522,1045,1574,1044,1530,1044,1523,1044,1531,1043,1566,1044,1531,1044,1531,1044,1523,1044,1575,1044,1531,1043,1523,1044,1531,1044,1567,1043,1531,1044,1531,1044,1523,1044,1575,1044,1531,1043,1524,1043,1532,1042,1567,1043,1532,1043,1532,1043,1524,1042,1577,1042,1532,1043,1524,1042,1533,522,2092,1042,1533,522,2048,1017,1550,548};
static const uint16_t b_53_r4[] = {8371,4213,623,1984,1090,1475,596,1983,1088,1590,1050,1520,550,2030,1043,1538,1045,1566,1044,1530,550,2029,1044,1538,1045,1566,1044,1530,1045,1530,550,2021,549,2065,1044,1531,1044,1523,1043,1531,1044,1567,1043,1531,549,2030,1043,1539,1044,1567,1044,1531,1043,1531,1043,1523,1044,1575,1043,1531,1044,1524,1042,1532,1043,1568,1042,1532,1043,1533,1041,1550,1016,1602,1016,1558,1017,1550,1016,1558,1017,1594,1016,1558,1016,1558,1016,1550,1017,1602,1016,1558,1017,1550,1016,1559,1015,1594,1016,1559,1016,1558,1016,1551,521,2101,1016,1551,1016,1559,521,2049,1016,1595,1016,1559,1015,1559,1015,1551,1016,1603,1015,1559,1016,1551,521,2058,520};
static const uint16_t b_53_r5[] = {8377,4204,623,1959,1117,1480,592,1987,1082,1566,1073,1522,550,2029,1043,1539,1043,1567,1044,1532,549,2029,1043,1540,1042,1568,1043,1532,1042,1532,549,2022,549,2066,1042,1532,1042,1524,1043,1532,1043,1568,1042,1532,549,2030,1042,1540,1042,1568,1042,1532,1042,1533,1042,1525,1041,1576,1042,1533,1042,1525,1042,1533,1042,1569,1041,1533,1042,1533,1042,1525,1042,1577,1041,1533,1041,1526,1041,1533,1042,1569,1042,1534,1041,1533,1041,1526,1041,1578,1040,1534,1041,1526,1040,1534,1041,1570,1040,1534,1041,1534,1041,1526,547,2076,1040,1526,1040,1534,547,2024,547,2068,1041,1534,1039,1528,1040,1534,1041,1570,1039,1535,1015,1560,521,2051,1013};
static const BBtn b_53[] = {
  {"0n", PR_RAW, 0, 0, 0, 38000, b_53_r0, 129},
  {"Mod", PR_RAW, 0, 0, 0, 38000, b_53_r1, 129},
  {"Up", PR_RAW, 0, 0, 0, 38000, b_53_r2, 129},
  {"Dow", PR_RAW, 0, 0, 0, 38000, b_53_r3, 129},
  {"Went", PR_RAW, 0, 0, 0, 38000, b_53_r4, 129},
  {"air", PR_RAW, 0, 0, 0, 38000, b_53_r5, 129},
};
static const BRemote rem_54[] = {
  {"Orlen", b_53, 6},
};
static const uint16_t b_55_r0[] = {8990,4555,587,1668,588,1672,588,551,586,553,588,555,589,559,588,564,587,1678,589,542,588,1672,587,1676,587,553,587,555,588,561,586,564,587,553,587,543,587,545,588,1675,588,552,589,557,587,559,589,564,587,552,588,544,586,1672,588,549,588,555,586,557,587,559,589,563,588,553,587,544,586,545,589,549,588,553,588,556,588,561,586,564,587,554,587,543,587,546,588,550,587,553,588,557,587,560,588,564,587,536,587,7995,587,543,587,546,587,550,587,554,613,530,614,534,613,538,613,1655,612,517,613,521,612,524,613,528,613,532,612,535,612,539,612,529,612,517,613,520,614,524,613,528,612,532,612,535,612,537,613,527,613,517,613,520,613,524,613,528,612,532,612,535,613,538,613,528,613,517,613,521,613,524,613,527,614,532,612,534,613,537,614,527,613,517,613,520,613,524,613,527,613,531,613,533,614,538,612,527,613,517,613,520,614,524,613,527,613,530,614,534,614,538,613,526,614,515,614,1647,612,1652,611,528,612,532,612,532,615,537,614,1635,587,7996,613,516,614,521,613,523,614,527,613,530,614,534,613,538,613,527,613,1643,614,520,613,524,613,528,612,531,612,534,613,537,613,527,614,518,612,520,613,523,614,527,613,531,613,533,614,538,613,526,614,516,614,519,614,523,614,527,613,530,614,533,614,537,614,526,614,517,613,519,614,524,613,1653,613,530,614,534,613,537,614,526,614,516,614,520,613,523,614,526,614,530,614,534,613,537,614,527,613,1642,614,520,613,523,614,1652,615,529,614,534,613,537,613,510,612};
static const uint16_t b_55_r1[] = {8990,4559,610,1647,610,1650,610,529,608,530,585,560,610,537,611,540,586,1684,609,520,610,1651,610,1655,610,529,587,558,587,563,610,542,585,556,610,521,584,548,586,553,584,556,585,560,610,536,586,566,585,556,585,545,586,1676,585,552,585,557,584,559,585,562,586,567,584,1683,610,520,586,548,585,553,585,555,586,559,585,563,585,567,584,555,586,544,586,549,585,552,585,556,585,559,585,563,585,566,585,540,583,8000,585,545,585,550,584,551,586,556,585,560,584,562,586,567,585,1683,585,544,586,549,585,553,584,555,586,559,585,564,584,566,585,556,585,545,585,549,585,552,585,557,584,560,584,564,584,567,585,554,587,545,585,549,584,552,585,556,584,558,586,563,585,566,585,557,584,545,586,549,585,553,584,556,585,559,585,564,583,566,585,555,585,547,583,548,585,552,585,556,584,558,586,563,584,567,584,555,585,545,585,548,585,552,585,555,586,560,584,563,585,565,586,555,585,545,585,1676,584,552,585,556,584,558,586,564,584,566,586,538,585,8001,584,545,585,548,586,553,584,557,584,558,586,563,585,566,585,557,584,546,584,1675,585,1680,584,556,585,560,584,563,585,566,585,555,586,546,584,549,585,552,585,556,585,559,585,563,585,567,584,556,585,546,584,549,585,552,585,555,586,559,585,564,584,566,585,555,586,546,584,548,586,552,585,1683,584,559,585,564,584,567,584,556,585,545,585,548,586,552,585,557,583,559,585,563,585,566,585,556,585,545,585,1676,585,1680,585,1683,585,559,585,563,585,566,585,539,583};
static const uint16_t b_55_r2[] = {8995,4558,564,1692,565,1696,565,573,565,576,565,582,562,583,565,588,563,1705,563,564,567,1697,564,1700,565,576,565,579,565,582,566,587,565,578,563,566,565,569,565,571,566,578,563,580,564,584,564,587,564,576,565,1693,564,1696,565,572,566,577,564,1710,562,1710,565,1714,565,576,565,566,564,570,564,573,564,575,566,580,565,585,563,586,565,578,563,566,564,571,563,573,565,577,564,581,564,585,563,586,565,560,563,8022,564,566,564,569,565,573,564,578,563,580,565,584,564,589,562,1703,565,566,565,569,565,575,563,577,564,579,565,583,565,587,564,576,565,565,565,570,564,574,563,575,566,580,564,585,563,587,565,577,564,566,564,569,565,574,564,577,564,580,564,583,565,586,565,576,565,569,562,569,565,573,564,576,565,579,565,583,565,586,565,576,565,566,564,569,565,573,564,577,564,581,563,584,564,587,564,578,563,566,565,569,565,573,564,576,565,580,564,583,564,587,564,578,563,1692,565,1696,564,573,564,576,565,1708,564,1709,566,1715,563,1685,565,8023,564,566,564,569,565,573,564,576,565,580,564,582,565,587,564,575,565,565,565,1696,564,1700,564,577,564,580,565,584,564,587,564,577,564,565,565,570,564,572,565,577,564,580,565,582,566,587,564,576,565,566,564,570,564,573,565,576,565,582,563,584,564,586,566,576,564,566,565,569,565,573,565,1704,564,580,565,584,564,587,565,577,565,565,566,570,565,573,565,576,566,581,564,584,564,585,566,577,564,566,564,1697,564,1701,564,1704,564,580,565,584,564,586,566,559,589};
static const uint16_t b_55_r3[] = {8996,4560,587,1671,587,1674,587,548,590,551,590,555,589,560,588,564,588,1680,588,543,588,1674,587,1676,589,555,586,557,587,560,588,564,587,553,588,1669,589,547,587,550,588,552,589,556,588,558,590,563,588,553,588,542,589,547,587,1676,589,551,590,1684,588,1690,585,1691,588,554,587,543,588,548,586,551,587,553,588,557,588,560,588,564,588,555,586,542,589,546,588,549,589,553,588,556,589,561,587,563,588,535,588,8001,588,542,589,547,587,549,589,552,589,556,589,560,588,564,588,1681,588,542,588,546,588,550,588,553,588,557,588,558,590,564,588,553,589,542,588,547,587,549,589,553,588,558,588,559,589,563,589,553,588,543,587,546,588,549,588,554,587,556,588,559,589,565,587,553,588,541,589,547,587,549,588,553,588,556,588,561,587,564,587,553,588,546,585,546,588,550,588,552,589,556,588,561,587,565,586,555,586,542,588,546,588,548,589,555,586,557,587,561,587,563,588,552,589,1671,587,546,588,1677,588,553,588,1683,588,1687,587,1691,588,1663,587,8002,587,543,588,545,589,549,588,553,587,556,588,559,589,564,588,552,589,543,587,1673,588,1676,588,553,588,556,589,561,587,562,589,552,589,542,588,546,588,549,588,553,587,557,587,560,587,563,588,552,588,543,587,546,587,550,587,553,588,556,588,561,587,563,588,552,589,542,588,545,589,550,587,1679,588,556,588,560,588,563,588,553,588,542,588,545,589,549,589,553,588,556,588,559,589,564,588,553,587,543,587,1672,589,1677,587,1680,587,555,589,559,589,563,588,535,615};
static const uint16_t b_55_r4[] = {8993,4556,563,1694,562,1698,563,576,561,577,564,583,561,586,561,590,561,1706,562,568,562,1697,563,1702,562,579,561,581,563,586,562,590,561,579,561,568,562,571,562,575,562,577,564,583,561,585,562,589,562,577,564,569,561,1697,563,576,561,1706,561,582,562,1713,561,1716,562,1706,562,568,562,571,563,574,563,577,563,582,562,585,563,588,563,579,561,569,561,573,561,574,563,578,562,582,562,585,563,589,562,561,562,8021,562,567,563,572,562,574,563,579,562,582,562,585,563,588,563,1705,563,568,562,571,562,575,562,578,563,582,562,585,562,589,562,577,563,567,563,570,563,574,563,577,564,582,562,585,562,589,562,577,563,567,563,571,562,574,563,576,565,582,562,586,561,588,563,577,564,567,563,571,562,575,562,577,563,580,564,586,561,589,562,577,563,568,562,571,562,575,563,578,562,582,562,586,562,588,563,578,563,568,562,573,561,574,563,579,562,582,562,585,563,588,563,578,562,569,561,1698,562,575,562,1704,563,582,563,1711,563,1714,563,561,562,8021,562,567,563,571,562,574,563,577,564,581,563,586,562,588,562,578,562,1695,561,572,562,575,562,578,562,1709,562,585,563,589,562,578,563,568,562,572,562,575,562,577,563,581,563,585,562,589,562,578,563,568,562,571,562,574,563,578,563,581,563,585,562,588,563,577,563,567,563,571,562,574,563,1704,563,581,563,586,562,588,563,578,562,567,563,572,562,574,563,578,563,581,563,587,561,589,562,579,561,1694,563,572,562,574,563,1704,563,1708,563,586,563,589,562,560,562};
static const uint16_t b_55_r5[] = {8996,4559,585,1673,584,1677,585,552,585,556,585,559,586,563,585,566,586,1683,585,544,586,1674,587,1680,585,554,587,558,587,563,585,566,585,555,586,1671,586,549,585,554,583,557,584,559,585,563,585,565,586,554,587,544,586,1676,585,551,587,1684,584,558,587,1691,585,1694,586,1684,584,545,586,549,585,553,585,555,586,558,586,563,585,565,587,555,586,547,584,549,585,552,586,554,587,558,587,562,586,566,586,538,585,8005,585,545,586,549,585,552,586,556,585,558,586,563,585,566,585,1683,585,545,586,548,586,553,585,554,587,558,586,562,587,566,586,555,586,544,587,548,587,552,586,555,586,559,586,563,585,566,586,555,586,544,587,547,587,551,586,556,585,560,584,563,585,566,585,555,586,545,585,548,586,552,585,556,585,559,586,562,586,565,587,557,584,545,585,549,585,551,586,555,586,558,586,563,585,566,585,556,585,545,585,547,587,551,586,555,586,559,585,563,584,567,584,556,585,1671,586,1676,584,552,585,1682,586,559,585,1689,585,1692,586,538,584,8004,584,544,586,549,585,552,585,555,585,558,586,563,585,567,584,555,586,1672,586,548,586,552,585,557,584,1686,585,562,586,566,586,555,586,546,584,548,586,553,584,554,587,559,586,561,587,565,586,556,585,544,586,548,586,552,586,556,585,559,585,562,586,567,584,555,586,545,586,548,586,552,585,1682,586,559,586,563,585,567,584,556,585,545,586,549,585,552,585,555,586,559,585,563,585,566,585,556,585,1672,585,548,586,552,585,1683,584,1686,585,563,585,566,585,538,560};
static const uint16_t b_55_r6[] = {8987,4557,584,1670,585,1674,585,551,585,555,586,558,585,560,587,565,585,1681,585,545,584,1674,585,1678,584,555,585,558,586,562,585,566,584,554,585,545,585,1675,584,549,588,555,585,558,586,562,586,565,585,555,585,546,584,1676,585,551,586,1682,585,558,586,1689,586,1693,585,1682,586,545,585,548,586,553,584,555,585,557,587,561,586,565,586,556,585,544,587,549,585,551,587,554,587,557,587,561,587,566,585,538,585,7999,585,545,585,549,584,550,587,555,586,558,586,562,586,565,586,1682,586,544,586,548,586,551,586,555,586,558,586,561,586,565,586,555,586,544,586,548,586,553,584,555,586,558,586,563,585,566,585,554,587,545,586,548,586,553,584,555,586,557,587,562,586,565,586,555,586,545,585,547,586,551,586,556,585,559,585,562,585,565,586,555,586,544,586,549,585,552,585,554,587,558,586,562,586,566,586,555,585,544,586,549,585,552,586,556,584,559,585,563,585,565,587,555,586,546,585,547,587,552,585,1683,584,559,585,1690,585,1693,585,537,562,8023,585,545,585,549,585,551,586,555,585,558,586,562,586,567,584,554,586,1672,585,548,585,552,585,557,583,1685,586,562,586,564,587,555,585,544,586,548,586,552,585,555,585,559,585,561,586,565,586,555,585,545,585,548,585,551,586,555,585,558,586,562,585,564,587,555,585,545,585,549,561,576,583,1682,585,559,585,562,585,566,585,555,585,545,585,548,585,553,584,555,586,559,585,562,585,566,585,557,583,1671,586,548,585,553,584,1681,562,1709,585,562,584,567,584,539,560};
static const uint16_t b_55_r7[] = {8991,4557,586,1670,586,1677,584,552,585,556,584,557,587,563,585,566,585,1681,586,545,585,1674,586,1677,586,553,588,559,585,563,584,567,584,555,585,1673,584,1675,585,552,585,554,587,559,585,562,586,566,585,555,585,545,585,1674,586,550,587,1683,584,558,586,1689,585,1692,585,1683,584,544,586,549,585,551,586,557,583,559,585,562,586,566,585,556,584,544,586,549,584,552,585,555,586,558,586,562,586,566,585,537,563,8024,584,544,586,548,586,551,586,555,585,558,586,563,585,566,585,1683,585,545,585,547,586,551,586,554,587,558,586,563,584,565,586,555,586,545,585,549,585,551,586,555,586,559,585,562,585,566,585,555,585,544,586,548,586,551,586,555,585,558,586,563,585,566,585,555,586,546,584,548,585,552,585,555,586,559,585,563,585,567,585,556,585,544,587,547,587,552,585,554,587,560,584,563,585,565,586,555,585,546,584,548,586,551,586,555,586,559,586,562,585,567,585,557,584,1671,585,549,584,551,586,1681,586,558,585,1689,585,1692,585,538,562,8022,584,545,584,548,586,552,585,555,585,558,563,586,585,567,583,557,584,1673,584,548,562,575,585,555,562,1708,585,564,583,567,584,555,585,544,562,571,562,576,584,556,561,583,584,561,563,589,585,557,561,568,585,548,584,554,583,556,562,583,583,562,585,567,561,578,562,568,562,572,561,574,563,1706,583,560,561,584,563,589,562,579,562,568,562,571,563,575,561,579,584,560,583,563,585,566,562,578,562,1694,562,571,562,575,562,1707,561,1709,561,586,561,589,562,561,561};
static const uint16_t b_55_r8[] = {8990,4556,585,1671,585,1676,584,552,585,555,585,558,586,562,585,567,584,1682,585,545,585,1674,585,1679,583,554,586,558,586,562,585,566,585,555,585,545,585,548,585,551,586,556,585,561,583,562,611,541,610,1658,610,519,611,1648,612,525,612,530,610,532,612,536,611,538,613,528,612,518,612,522,611,526,611,529,611,533,611,536,611,540,611,529,612,519,611,523,611,526,611,529,611,533,611,537,610,539,612,511,611,7971,612,517,613,521,612,525,612,529,611,532,611,537,610,540,611,1655,611,519,611,523,610,526,611,529,611,532,612,536,611,540,611,528,612,519,611,522,611,525,612,530,611,533,611,535,587,1692,610,529,586,546,584,548,610,528,585,555,585,560,585,564,584,566,585,556,584,546,584,548,586,553,584,557,583,558,586,562,586,565,586,555,585,546,584,548,585,551,586,556,584,558,586,562,585,565,586,555,586,545,585,548,586,552,585,555,585,559,585,562,586,565,586,556,585,545,585,1675,585,552,585,557,584,560,584,563,584,1694,584,538,585,8001,584,545,585,549,585,552,585,556,585,560,584,562,585,566,585,555,586,1672,585,1675,585,1679,585,556,585,559,585,563,585,566,585,555,586,545,585,549,585,552,585,555,585,560,584,563,584,566,585,555,586,546,584,549,585,552,585,554,586,559,585,563,585,566,585,556,584,545,585,549,584,552,585,1681,585,558,585,563,584,566,585,555,586,544,586,548,585,552,585,555,586,559,585,562,585,566,585,555,585,1671,586,1675,586,1680,583,1683,584,559,585,564,584,566,585,538,583};
static const uint16_t b_55_r9[] = {8991,4557,562,1691,565,1695,565,574,563,576,564,579,565,583,565,586,565,1701,565,566,564,1697,562,1698,565,577,563,580,564,584,564,586,565,576,564,566,564,569,565,573,564,575,565,580,564,582,565,586,565,577,563,565,564,1696,564,572,565,576,564,581,563,583,564,586,565,1703,564,565,565,569,564,574,563,576,564,580,563,582,565,590,561,578,562,566,564,571,562,573,564,576,564,582,561,584,563,587,564,559,564,8018,563,564,566,570,563,573,564,577,563,581,563,583,564,1713,564,1703,563,566,564,569,564,571,566,577,563,579,565,584,563,586,564,578,562,565,565,569,563,572,564,577,563,582,562,583,564,586,565,575,565,567,563,569,564,572,565,576,564,580,564,583,564,587,563,577,563,565,565,569,564,574,562,576,564,579,565,583,564,587,564,576,564,567,562,569,564,574,563,577,563,579,565,582,565,587,563,575,565,567,563,568,565,572,565,576,564,579,565,583,564,586,564,577,563,564,565,1696,563,574,562,575,565,579,564,582,564,1713,564,558,564,8016,563,566,563,570,563,574,563,577,563,580,564,583,564,588,563,575,565,566,564,569,565,573,564,577,563,580,564,584,564,586,564,575,565,565,564,569,564,572,564,576,564,581,562,582,565,587,563,576,564,566,563,569,564,572,564,576,563,579,564,582,565,587,563,575,565,565,564,569,564,573,563,1703,563,580,564,583,564,588,562,576,564,565,564,569,563,572,564,577,563,579,564,583,564,587,564,575,565,565,564,569,564,572,564,1702,564,580,564,583,564,587,564,559,588};
static const uint16_t b_55_r10[] = {8991,4556,586,1667,589,1671,588,549,588,553,588,555,589,559,588,562,589,1681,585,543,587,1672,587,1673,590,550,591,555,589,559,589,561,590,551,590,540,590,544,590,547,590,552,588,557,587,588,559,563,588,551,589,542,588,1669,591,547,590,550,590,554,589,559,588,562,589,551,590,541,589,545,589,547,590,551,589,555,589,558,589,560,591,553,587,541,589,543,590,546,591,550,591,553,591,558,589,564,587,534,589,7993,590,540,590,544,589,549,588,552,589,555,589,559,588,1688,590,1679,588,542,588,546,588,548,589,552,588,556,588,559,588,562,589,551,589,542,588,544,589,547,590,551,589,554,590,559,588,562,589,550,591,542,588,545,589,548,589,551,590,555,590,559,589,562,589,550,590,541,589,545,588,547,590,551,589,555,589,561,586,561,590,552,588,541,589,547,586,548,589,552,588,556,588,558,589,562,589,551,589,541,589,545,588,548,589,551,589,556,588,559,588,563,587,552,589,541,589,1671,588,548,589,552,589,555,589,558,589,1690,587,1660,589,7992,590,540,590,545,588,547,590,552,588,554,589,559,588,561,589,550,590,541,588,1671,588,548,589,551,589,554,590,557,590,563,588,552,588,542,588,545,588,548,589,553,587,555,589,559,588,561,590,552,589,542,588,545,589,547,590,551,590,555,589,558,589,563,588,550,591,541,589,544,589,548,589,1679,587,554,590,558,589,561,590,552,588,542,588,545,588,546,591,553,587,555,588,558,590,563,587,552,588,542,588,1672,588,548,589,1679,588,556,588,558,589,563,588,534,588};
static const uint16_t b_55_r11[] = {8991,4559,563,1693,564,1698,562,575,562,577,564,580,564,585,562,588,563,1702,565,566,564,1695,566,1703,561,577,564,582,562,583,565,586,565,576,565,565,565,570,564,573,564,575,565,579,565,582,565,586,565,576,565,567,563,1697,563,573,564,576,565,580,564,583,565,588,563,577,563,567,563,571,562,573,564,576,564,580,564,583,564,587,564,576,564,567,563,570,563,574,563,577,563,580,564,584,564,587,564,561,562,8019,565,565,565,569,564,573,564,578,563,581,563,584,564,1713,565,1703,565,567,563,569,564,574,563,577,563,582,562,585,563,586,565,577,564,566,564,570,564,572,565,577,563,580,564,584,564,586,565,576,564,565,565,569,565,572,566,576,564,578,566,583,565,586,565,576,565,565,565,570,564,572,565,576,565,580,564,583,564,588,563,576,564,565,565,570,564,571,566,576,565,579,565,583,565,587,564,577,564,566,565,570,564,573,564,576,565,579,565,583,564,586,565,577,564,565,565,1696,564,574,563,575,565,580,564,585,562,1713,565,1685,565,8023,564,565,565,570,563,573,564,576,564,579,565,584,564,587,564,577,563,566,564,1695,565,574,563,578,563,580,564,584,564,587,564,576,564,566,564,570,563,576,561,578,562,580,564,583,564,586,565,577,563,566,564,569,564,572,565,578,562,580,564,585,562,586,565,1703,564,567,563,569,564,573,565,1702,565,580,564,583,565,587,564,577,563,566,564,570,564,572,565,577,564,579,565,583,564,586,565,577,564,566,565,1697,563,573,564,1704,564,580,564,585,563,588,563,1685,590};
static const uint16_t b_55_r12[] = {8993,4559,565,1693,564,1697,563,572,565,577,564,580,564,584,564,586,566,1704,565,566,565,1698,563,1701,564,576,565,581,563,584,564,588,563,576,565,568,563,569,565,573,564,576,565,579,565,585,563,588,563,576,565,565,565,1697,564,574,563,577,564,1709,562,584,564,588,563,577,564,566,564,569,564,573,564,576,565,580,565,585,563,588,563,575,566,566,564,570,564,573,565,577,564,580,564,584,564,587,564,559,564,8021,565,567,563,569,565,573,564,577,564,581,564,583,565,1715,563,1704,564,566,564,570,563,574,563,576,564,581,563,582,566,586,565,577,563,566,565,569,565,573,565,578,563,580,564,584,564,587,564,576,565,567,563,569,565,573,564,577,564,581,564,584,564,586,566,577,564,565,565,569,564,574,564,577,564,580,565,584,564,588,563,577,564,567,563,570,564,573,564,578,563,581,563,583,565,587,564,576,565,565,565,568,566,573,564,577,564,579,565,583,565,587,564,577,564,565,565,1696,565,573,564,578,563,1707,564,584,563,1714,564,1685,564,8022,563,567,563,569,565,573,564,577,564,580,564,585,563,586,565,576,565,566,564,1697,563,573,564,577,564,579,565,583,565,587,563,578,562,565,565,570,564,572,565,577,563,581,563,584,563,586,565,577,563,566,564,569,565,572,565,576,565,580,564,582,566,587,564,577,563,565,565,570,563,573,564,1703,563,580,564,583,564,586,565,577,563,566,563,570,563,573,563,577,563,580,564,583,564,588,563,577,564,565,565,1696,564,572,565,1704,564,581,563,584,564,588,563,559,589};
static const uint16_t b_55_r13[] = {8993,4558,564,1693,564,1697,564,574,563,577,564,580,564,583,565,587,565,1703,565,566,564,1697,563,1703,561,578,563,580,564,583,565,588,563,576,565,566,564,569,565,575,563,576,565,579,565,583,565,588,563,577,564,566,564,1696,564,575,562,576,565,583,561,1711,563,586,565,576,565,567,563,570,564,574,563,576,565,580,564,585,562,586,565,576,564,567,564,570,564,573,564,576,564,581,563,584,564,587,564,560,563,8021,563,566,564,570,564,573,564,576,564,579,565,583,565,1716,561,1702,566,564,566,569,565,573,564,576,565,579,565,584,564,586,565,575,566,565,565,568,565,572,565,577,563,579,565,583,565,586,588,553,588,541,565,569,589,549,564,576,565,579,589,559,589,561,590,551,590,540,590,545,589,549,588,551,589,555,589,558,590,561,590,550,590,541,589,544,590,548,589,552,589,555,589,557,590,562,589,552,589,541,589,544,590,548,589,551,590,555,589,558,589,562,589,552,588,540,590,1671,590,548,589,551,590,555,590,1686,589,1688,590,1661,565,8019,589,540,590,544,590,548,589,551,590,554,590,558,590,562,589,551,590,541,590,1671,589,548,589,552,589,555,589,559,589,562,589,551,590,541,590,545,589,548,590,551,590,555,589,558,590,562,589,551,590,541,590,545,589,548,589,552,589,554,590,558,590,561,590,551,589,541,589,544,589,548,589,1678,589,554,590,558,589,562,589,551,589,541,589,545,589,548,589,552,589,555,589,558,589,561,590,551,589,541,589,1671,589,547,589,1677,590,554,590,557,590,561,590,533,590};
static const uint16_t b_55_r14[] = {8989,4558,564,1692,564,1695,565,572,565,576,564,579,565,583,564,587,564,1703,564,565,564,1695,565,1699,564,575,566,580,564,583,564,586,565,577,563,565,565,570,563,572,565,576,564,579,565,584,564,589,562,576,564,566,563,1696,564,571,566,577,563,580,564,1710,564,585,566,577,563,566,564,569,564,572,565,575,565,579,565,583,564,586,565,575,565,566,564,570,563,572,565,576,564,580,564,583,564,587,564,558,565,8016,564,565,565,569,564,572,565,577,563,581,563,583,565,1713,564,1704,563,565,565,569,564,572,565,576,564,578,565,582,566,586,565,576,564,565,565,568,565,573,564,575,565,579,565,583,565,586,565,576,565,565,565,569,565,572,565,575,589,556,564,583,565,587,564,575,566,565,565,569,564,572,565,576,564,579,565,582,565,586,565,577,563,565,565,569,565,572,565,576,565,579,565,583,564,586,589,552,565,566,564,569,564,573,565,576,565,578,566,582,565,586,565,577,564,565,565,1696,565,572,565,576,588,556,588,1685,589,1689,587,1661,566,8020,564,565,565,569,565,572,565,576,588,555,565,582,566,587,564,576,565,565,565,1695,566,573,565,577,564,579,589,560,564,586,589,552,565,566,565,569,588,549,565,575,566,579,589,558,589,563,565,576,565,565,565,570,564,572,565,576,565,580,564,583,565,586,565,1703,588,543,564,569,589,548,566,1703,589,555,588,560,564,587,588,552,565,565,589,545,588,549,588,552,566,579,565,582,589,563,564,577,588,542,564,1696,588,549,588,1678,590,556,588,559,588,562,589,1661,590};
static const uint16_t b_55_r15[] = {8989,4558,564,1693,564,1695,565,574,563,577,564,580,564,584,564,587,564,1702,564,565,565,1694,566,1699,564,575,565,580,564,583,564,586,565,577,564,565,565,569,565,572,565,576,564,580,564,582,565,588,563,576,564,565,565,1695,565,573,564,575,566,1704,566,1711,563,587,564,576,564,565,565,569,564,573,564,576,564,579,565,583,564,586,565,576,564,565,565,570,563,573,564,576,564,579,565,583,564,586,565,559,564,8019,564,565,565,568,565,572,565,576,564,580,564,583,565,1713,564,1702,564,565,565,569,564,573,564,576,565,579,565,583,564,586,565,576,565,565,565,569,564,573,564,576,564,580,564,582,565,585,566,576,564,565,565,569,564,572,565,576,564,578,566,583,564,586,565,576,564,566,564,569,565,572,565,576,564,580,564,583,564,586,565,576,565,566,564,568,565,572,565,575,565,578,566,582,565,586,565,577,564,564,566,569,564,571,566,576,565,580,564,583,564,587,563,575,589,541,588,1671,589,548,589,551,566,1706,565,1710,588,1691,564,1685,565,8018,589,541,565,568,566,574,587,552,565,579,589,558,566,586,589,551,566,565,589,1671,589,548,588,552,589,556,587,559,589,562,565,575,565,565,565,568,565,572,588,551,589,555,565,583,588,562,589,553,586,542,588,545,564,572,565,575,566,579,588,559,589,562,589,551,589,542,564,569,589,548,565,1702,589,555,589,559,565,586,589,551,589,541,565,569,565,571,590,552,588,555,589,559,588,563,588,551,589,540,590,1671,589,547,589,1678,589,554,590,559,589,561,589,534,589};
static const uint16_t b_55_r16[] = {8985,4556,565,1693,564,1695,564,572,564,576,564,579,565,582,565,587,564,1701,565,565,565,1695,564,1699,565,577,563,580,564,582,565,586,565,577,564,566,564,569,564,572,565,576,565,579,565,582,565,586,565,576,564,565,565,1696,563,571,566,576,564,1706,563,1710,563,587,564,575,565,565,565,569,564,572,565,576,565,579,565,583,564,586,565,576,564,564,565,569,564,572,565,576,564,579,565,582,565,587,564,558,565,8018,564,567,563,569,564,573,564,576,564,580,564,584,563,1713,564,1702,565,566,564,568,566,573,564,577,563,580,564,584,563,587,564,575,565,566,564,570,564,572,565,576,564,580,563,584,563,588,563,576,564,565,564,569,564,573,563,577,564,581,563,585,563,586,565,577,564,566,564,570,564,573,564,577,563,581,563,583,564,586,565,576,564,566,564,570,563,574,563,577,563,581,563,583,564,587,564,577,564,566,564,570,563,573,564,575,565,580,564,583,564,588,563,576,564,567,563,1697,563,573,564,575,565,1708,562,1710,563,1713,564,1685,563,8017,563,566,564,568,565,573,564,577,563,580,564,584,563,587,563,576,564,566,564,1696,563,573,564,576,564,579,565,583,564,587,563,576,564,565,564,570,563,573,564,577,563,579,564,583,564,587,564,576,564,564,565,569,564,574,562,577,563,580,564,584,563,586,565,1702,565,566,564,568,565,573,564,1702,564,580,563,583,564,587,564,576,565,566,564,569,564,572,565,577,563,579,565,583,564,587,564,576,564,566,564,1697,563,573,564,1703,564,581,563,584,564,588,563,1686,588};
static const uint16_t b_55_r17[] = {8988,4557,564,1692,588,1672,564,574,587,553,587,555,589,560,563,587,564,1703,563,567,587,1672,587,1676,587,553,587,556,564,584,587,564,563,576,564,568,586,545,564,574,587,554,562,579,588,560,563,587,588,551,565,565,564,1696,563,573,564,576,564,579,565,583,564,1713,565,576,564,566,564,570,563,573,564,576,565,580,564,585,563,589,562,577,563,568,562,571,562,572,565,577,563,579,564,582,565,588,562,560,563,8019,562,567,563,570,563,575,562,577,563,581,563,584,563,1714,564,1704,563,565,565,570,564,574,564,576,565,581,563,583,564,589,562,576,565,566,564,570,564,573,564,577,564,580,564,585,563,587,564,576,564,566,564,570,563,573,564,576,564,580,564,584,563,589,562,576,564,566,563,571,563,573,564,577,563,579,565,582,565,589,562,577,564,566,564,570,563,572,565,576,565,579,565,583,564,587,563,577,563,566,564,570,563,572,565,576,564,580,564,584,563,587,564,577,563,566,564,1695,565,573,564,578,563,581,563,585,563,587,564,1687,561,8018,563,567,563,570,563,573,564,577,563,580,564,583,564,588,563,576,564,567,563,1696,564,573,564,576,564,581,563,583,564,586,565,577,564,567,563,570,563,572,565,579,562,580,564,585,563,587,564,577,563,566,564,571,563,573,564,577,564,579,565,585,563,587,564,577,564,566,564,571,562,572,565,1704,563,580,564,583,565,588,563,576,565,566,564,571,563,573,564,577,564,579,565,583,565,587,563,576,564,566,564,1696,564,573,564,1704,563,580,564,583,565,587,564,559,589};
static const uint16_t b_55_r18[] = {8989,4558,564,1693,564,1697,563,573,564,577,564,580,564,584,564,586,565,1704,564,567,564,1695,565,1699,565,578,563,580,564,583,565,587,564,577,564,566,564,570,564,572,566,577,565,580,565,584,564,588,564,576,565,567,563,1698,563,574,564,576,565,580,565,582,565,1713,565,576,565,566,564,569,565,574,563,577,564,580,564,583,565,587,564,578,563,566,564,569,565,574,563,576,564,580,564,583,565,586,565,560,564,8023,564,567,563,569,565,573,564,576,565,581,563,585,563,1714,564,1704,563,566,564,569,564,574,563,577,563,579,565,584,564,587,564,577,563,566,564,569,565,574,563,577,564,581,563,584,564,586,565,576,564,567,563,570,563,573,564,576,565,579,565,583,564,587,563,575,565,566,564,569,564,572,565,576,565,579,565,583,565,588,563,578,562,565,564,571,562,574,562,577,563,581,563,582,565,587,564,576,564,565,565,570,563,573,564,576,564,580,564,583,565,587,564,577,563,566,564,1697,563,573,564,578,563,581,563,584,563,587,564,1688,562,8022,563,566,564,570,563,573,564,577,564,580,564,585,563,588,563,576,565,567,564,1697,563,574,563,577,564,580,565,584,564,587,564,577,564,566,564,570,564,574,563,576,564,580,564,583,564,588,563,576,564,566,565,569,565,572,565,576,565,581,563,584,564,587,565,1703,565,565,565,570,564,573,564,1704,563,579,565,584,564,587,565,577,564,566,564,570,564,573,564,578,563,580,564,584,564,588,563,576,564,565,565,1695,565,573,564,1702,565,580,564,584,563,586,565,1685,590};
static const uint16_t b_55_r19[] = {8990,4557,566,1692,564,1695,565,572,565,577,564,579,565,585,563,587,564,1702,565,567,563,1696,564,1698,566,577,564,579,565,583,564,586,565,576,564,566,564,569,564,572,565,576,564,580,564,583,564,586,565,576,564,565,565,1695,565,572,565,575,565,1706,565,583,564,1712,565,574,566,565,565,569,565,572,565,576,565,579,565,583,564,587,564,576,565,566,564,570,564,574,563,575,565,581,563,583,564,586,565,558,565,8018,564,566,564,569,564,572,566,576,564,580,565,582,566,1713,565,1703,565,566,564,569,565,573,564,575,566,580,564,583,565,587,564,577,564,565,565,569,564,572,565,575,565,580,564,582,566,586,565,576,565,566,565,569,565,572,565,575,565,579,565,582,566,588,563,576,565,565,565,569,565,573,564,576,565,580,565,584,564,588,563,576,565,566,564,570,564,573,564,576,565,579,565,583,564,586,565,576,565,566,564,569,564,572,565,575,565,580,564,582,566,585,566,575,565,566,564,1696,564,572,565,576,565,1705,565,582,565,586,565,1684,565,8020,564,566,564,569,564,572,565,575,565,580,564,583,564,587,564,575,565,565,565,1695,565,573,564,576,564,579,565,582,565,586,565,576,565,565,565,569,565,573,564,575,565,579,565,583,565,587,564,576,565,565,565,569,565,572,565,576,564,578,566,583,564,586,565,575,566,565,565,569,564,573,564,1703,564,579,565,582,565,586,565,576,565,566,565,569,564,572,565,576,564,579,565,583,565,587,564,576,564,565,565,1695,565,572,565,1703,564,580,564,582,565,586,565,559,589};
static const uint16_t b_55_r20[] = {8989,4559,586,1668,589,1672,589,548,589,553,588,556,588,559,588,563,588,1678,589,541,589,1672,588,1674,590,551,590,554,590,558,590,562,589,553,588,541,589,545,589,548,589,551,589,554,590,558,589,562,589,551,590,540,590,1671,590,546,591,552,589,1683,589,558,590,1688,589,552,589,542,589,543,591,547,590,552,589,555,589,559,589,562,589,551,590,541,589,544,590,548,589,551,590,554,590,558,590,562,590,535,565,8021,589,541,589,544,590,548,589,551,590,555,589,558,589,1688,590,1678,589,541,589,545,589,549,588,551,590,555,589,557,590,562,590,552,589,540,590,544,590,548,589,551,590,555,590,559,588,563,588,551,590,541,589,544,590,548,589,551,590,555,589,558,590,561,590,552,589,541,589,545,589,548,589,552,589,555,590,559,589,561,590,552,588,541,589,544,590,548,589,552,589,555,589,558,590,562,589,551,590,541,589,545,589,548,589,552,589,555,589,559,589,561,590,552,589,541,589,1671,590,548,589,552,589,1683,588,558,590,562,589,1662,564,8020,589,541,589,545,589,547,590,551,590,555,589,559,589,562,589,551,590,541,589,1672,589,548,589,552,589,556,588,559,589,561,590,552,589,541,590,545,589,547,590,552,589,556,588,558,590,562,590,551,590,541,589,545,589,548,589,552,589,555,589,559,589,562,589,1678,590,541,589,545,589,548,589,1677,590,554,590,558,589,561,590,552,588,541,589,543,590,548,589,551,590,555,589,558,590,561,590,551,590,539,591,1671,589,547,590,1677,590,554,590,558,590,561,590,1661,590};
static const uint16_t b_55_r21[] = {8995,4560,562,1694,563,1696,564,573,564,576,565,581,563,583,565,587,564,1703,565,566,564,1696,565,1701,564,576,565,580,565,583,565,587,564,576,565,566,565,571,563,572,565,577,564,580,564,584,564,588,563,576,564,566,564,1696,564,573,564,575,566,580,564,1710,564,1712,566,577,564,566,564,570,564,573,564,578,563,580,564,584,564,587,564,579,562,566,565,571,563,574,563,578,563,581,564,584,564,587,564,559,564,8023,563,566,564,569,565,572,565,576,565,581,563,583,565,1715,563,1704,564,565,565,570,564,573,565,577,564,579,565,584,564,587,564,577,564,566,565,570,564,572,565,575,565,580,564,583,565,588,564,577,564,566,565,569,565,573,565,577,564,579,565,586,562,587,564,578,563,567,563,570,564,574,563,577,564,580,564,584,563,587,564,577,564,566,564,569,564,574,563,577,563,580,564,585,562,586,566,576,564,567,563,569,565,573,564,577,564,581,563,583,565,588,563,576,565,567,563,1697,563,573,564,578,563,579,565,1710,565,587,564,1685,565,8021,564,566,564,569,564,573,564,577,564,580,564,584,564,588,563,576,564,566,564,1698,562,575,562,578,563,579,566,583,564,587,564,577,564,566,564,569,564,573,564,576,564,580,564,583,565,587,564,576,564,565,565,569,564,574,563,577,563,580,564,584,564,587,564,577,564,566,564,570,564,574,563,1704,563,580,564,584,564,588,563,576,564,567,563,570,564,574,563,579,562,579,565,584,564,588,564,578,563,567,563,1697,564,573,565,1704,564,579,565,584,564,586,566,559,589};
static const uint16_t b_55_r22[] = {8994,4558,590,1668,589,1672,588,548,589,553,588,557,587,559,589,561,590,1678,590,541,589,1671,566,1699,589,553,588,555,590,559,589,562,589,552,589,541,590,545,589,548,590,550,591,556,589,557,591,562,589,551,590,541,589,1671,590,547,590,552,589,1682,589,1686,588,1691,587,553,588,541,589,545,589,549,588,552,589,555,590,558,590,563,588,552,589,541,589,544,590,547,590,552,589,555,565,583,589,563,588,534,565,8020,589,540,590,545,589,548,589,550,591,556,588,559,589,1689,589,1679,590,541,590,545,589,549,589,552,589,555,589,558,590,563,588,551,590,541,589,544,590,548,589,551,590,557,587,558,590,562,589,551,589,540,590,544,589,548,589,551,589,554,590,559,589,562,590,551,589,541,589,545,588,548,589,552,589,555,590,558,589,562,589,552,589,541,589,544,590,549,589,551,590,555,590,558,590,562,589,551,589,541,589,544,589,550,587,554,587,554,590,558,590,563,588,551,589,540,590,1672,588,547,590,551,589,1681,589,1685,589,561,590,1661,564,8020,589,541,589,544,590,548,589,551,590,555,589,559,589,563,588,552,589,541,589,1671,589,549,588,552,589,555,589,559,588,562,589,552,589,540,590,544,590,548,589,551,590,556,588,559,589,562,589,551,590,541,589,544,590,548,589,551,589,556,588,558,590,562,589,551,589,541,589,545,588,549,588,1679,589,555,589,558,590,562,589,550,591,542,588,544,590,548,589,551,589,555,589,559,588,562,589,551,590,542,588,1671,589,547,590,1678,589,555,589,558,590,562,589,534,590};
static const uint16_t b_55_r23[] = {8988,4557,588,1667,589,1671,589,547,590,550,590,555,589,556,591,561,590,1678,589,541,589,1671,589,1675,589,550,591,556,588,558,590,562,589,551,589,539,591,543,590,548,589,552,588,555,589,558,589,564,587,551,590,540,590,1670,590,549,588,551,589,1680,590,1684,590,1687,590,550,590,540,589,544,589,547,590,552,588,554,590,557,590,562,589,552,588,540,590,544,589,547,589,551,589,554,589,558,590,561,590,534,564,8018,588,540,590,544,589,547,590,551,589,554,590,558,589,1687,589,1677,590,540,590,544,589,547,590,551,589,554,589,558,589,561,589,550,589,540,590,545,587,547,589,551,589,554,589,557,590,560,590,550,590,541,589,544,589,547,589,551,589,554,589,557,590,562,588,552,588,540,589,544,589,548,589,550,590,554,589,557,590,561,590,551,589,540,590,543,589,547,589,552,588,554,589,558,589,561,589,551,589,540,589,544,589,547,589,550,590,555,589,557,590,561,590,551,589,540,589,1670,589,546,590,552,589,1681,589,1684,589,561,589,1660,564,8017,589,540,589,543,590,548,589,551,589,554,590,558,590,561,590,551,589,541,589,1669,590,547,589,551,589,554,590,558,589,561,589,550,590,540,590,544,589,547,590,551,589,554,590,558,589,562,589,551,589,540,590,543,590,548,589,552,588,554,590,558,589,561,590,1677,590,540,590,544,589,547,589,1677,590,554,590,557,590,562,589,551,589,540,590,544,589,547,590,552,588,554,590,558,589,562,589,551,589,540,590,1669,591,547,590,1677,590,554,590,558,589,561,590,1660,589};
static const uint16_t b_55_r24[] = {8992,4560,563,1693,563,1696,565,573,565,577,564,580,564,583,564,585,566,1702,565,565,565,1695,564,1699,564,576,564,579,565,582,566,588,563,577,563,566,564,569,565,573,564,576,564,580,564,583,564,586,565,576,564,566,564,1695,565,573,564,576,565,581,563,583,565,587,564,1704,562,565,565,569,564,572,565,576,564,579,565,583,565,588,563,577,564,564,566,568,565,572,565,575,566,579,565,583,565,587,564,559,564,8022,564,566,564,569,565,572,565,576,564,579,565,582,565,1715,563,1702,566,566,564,570,564,572,565,576,565,579,565,582,565,586,565,576,565,566,564,570,564,573,564,577,564,580,564,584,564,586,565,575,565,567,563,570,564,572,565,575,565,581,563,583,565,587,564,576,565,565,565,570,564,573,564,577,564,580,564,582,565,587,564,576,565,566,565,569,565,573,564,576,565,581,564,583,565,587,564,576,565,565,565,569,565,573,564,576,565,579,565,583,564,587,565,577,564,565,565,1696,564,573,564,576,564,579,565,583,564,1713,564,560,563,8020,563,565,565,569,565,573,564,576,564,580,564,583,565,587,565,576,565,566,565,1696,565,573,564,576,565,580,564,582,566,587,564,576,565,565,565,569,565,572,565,576,564,579,565,583,564,586,565,576,565,564,566,569,565,572,565,575,565,579,565,583,564,587,564,576,565,565,565,568,565,573,564,1704,563,580,564,583,564,587,564,576,564,565,565,569,565,572,565,576,564,580,564,583,564,586,565,576,564,565,564,1696,564,572,565,1702,564,579,565,583,564,586,565,559,588};
static const uint16_t b_55_r25[] = {8991,4556,590,1667,590,1672,588,546,591,551,590,555,588,558,589,561,590,1677,589,540,590,1669,590,1674,589,552,588,555,589,557,590,561,590,550,591,540,590,543,590,548,588,550,590,554,589,557,590,561,590,550,590,540,590,1671,589,547,590,550,591,554,590,558,590,561,590,1678,590,540,590,544,590,547,590,550,591,554,590,558,589,561,590,550,591,541,589,544,589,546,591,550,590,554,590,558,590,562,589,533,566,8018,590,540,590,544,589,546,591,550,590,554,590,557,590,1687,590,1677,590,540,590,543,590,547,590,550,590,554,590,557,590,562,589,551,590,540,590,543,591,548,589,550,590,554,590,557,590,561,590,551,589,540,590,545,589,547,590,551,589,554,590,557,590,562,589,550,590,540,590,545,589,547,590,551,590,555,589,557,591,560,591,550,590,541,589,542,591,547,590,549,592,554,590,557,591,561,590,551,590,539,590,543,591,546,591,550,590,555,589,558,589,561,590,550,590,540,590,1669,591,547,590,550,590,554,590,557,590,1687,590,533,565,8017,590,540,590,543,591,547,590,550,591,553,591,558,590,560,590,551,590,539,591,1670,590,546,591,550,590,554,590,557,590,560,591,550,590,540,590,544,589,547,590,550,591,554,590,557,590,561,590,551,590,540,590,543,590,547,590,550,590,554,590,556,591,561,590,1677,590,540,590,544,589,547,590,1678,589,554,590,557,590,561,590,550,590,540,590,544,589,546,590,550,590,554,589,557,591,560,591,550,590,540,590,1670,590,547,590,1677,590,554,590,557,590,560,591,1659,591};
static const uint16_t b_55_r26[] = {8989,4557,589,1667,589,1670,590,547,590,551,590,554,590,558,589,562,589,1678,589,540,590,1671,589,1674,589,550,590,555,589,560,587,562,589,551,589,540,590,544,589,547,590,550,590,555,589,557,590,561,590,550,591,540,590,1670,589,547,590,550,590,1680,590,557,590,560,590,1677,590,540,590,543,590,547,590,552,589,554,590,558,589,560,591,552,588,540,590,544,590,547,590,550,591,554,590,558,590,561,589,533,565,8020,588,540,589,543,591,548,589,551,589,554,590,558,589,1688,589,1677,590,540,590,544,589,547,590,551,589,553,591,558,589,561,590,551,589,540,590,543,590,548,589,550,591,554,590,558,589,561,590,551,590,541,589,543,590,547,590,550,590,554,590,558,589,561,590,550,590,541,589,544,589,546,591,550,590,553,591,557,590,561,590,550,590,540,590,543,590,547,590,550,591,554,590,558,589,561,590,550,590,540,590,544,589,547,590,551,590,554,590,558,590,561,590,552,589,540,590,1670,590,547,590,551,590,1680,591,558,590,1688,590,533,565,8017,590,540,590,544,589,547,590,550,590,554,590,557,590,562,589,550,590,540,590,1669,591,547,590,551,589,553,591,557,590,560,590,550,590,539,590,543,590,547,590,550,590,553,590,556,591,561,590,549,591,541,589,543,590,547,589,551,589,554,590,557,590,562,589,550,590,539,590,544,589,546,590,1676,590,554,590,557,590,560,591,550,590,539,590,543,590,547,590,551,589,553,591,557,590,561,590,550,590,539,591,1670,590,546,591,1677,590,553,590,558,589,560,590,533,589};
static const uint16_t b_55_r27[] = {8991,4556,591,1666,590,1670,591,547,590,550,590,554,590,557,590,561,590,1678,589,540,590,1670,590,1673,591,550,590,554,590,557,590,561,589,550,591,541,589,543,590,548,589,550,591,554,590,558,590,561,590,550,590,540,590,1670,590,547,590,550,590,1679,591,557,590,560,591,1678,590,540,590,543,590,547,590,550,590,554,590,557,591,562,588,550,590,540,590,543,590,548,589,551,590,554,590,557,590,560,591,533,589,7994,590,540,590,544,589,547,590,550,590,553,591,558,589,1687,590,1676,591,539,591,543,590,547,590,550,590,554,590,557,590,561,590,549,591,540,590,543,590,547,590,550,590,555,589,557,590,561,589,550,590,540,590,545,588,546,591,550,591,554,590,558,589,560,590,550,590,539,591,544,589,547,590,550,590,554,590,557,591,561,590,550,590,540,590,545,589,546,590,550,590,554,590,558,589,561,590,551,590,540,590,543,590,546,591,550,590,554,590,556,591,561,590,551,589,541,589,1670,590,547,590,551,590,1680,590,557,590,1687,590,533,589,7995,590,540,590,543,590,548,589,551,589,554,590,558,590,561,590,551,589,539,591,1670,590,547,589,550,590,553,591,557,590,561,590,550,591,540,590,543,591,547,590,551,590,554,590,558,590,561,590,550,591,540,590,544,590,547,590,550,590,554,590,558,590,562,589,1678,590,540,590,543,591,547,590,1677,591,554,590,558,590,561,591,550,591,541,590,543,591,548,590,550,591,554,590,558,590,561,590,551,590,540,590,1670,591,547,590,1677,590,554,591,557,591,560,592,1659,591};
static const uint16_t b_55_r28[] = {8992,4558,591,1668,590,1671,590,548,590,551,590,553,592,558,590,560,592,1678,591,541,590,1673,589,1675,590,550,591,555,590,558,590,560,592,550,591,540,590,543,591,547,591,551,590,554,591,558,590,561,591,551,590,540,590,1669,592,548,590,550,591,554,590,1684,591,562,589,1678,590,540,590,544,590,546,591,551,590,555,590,557,591,561,590,552,589,541,589,544,590,547,591,551,590,554,590,557,591,561,591,533,566,8020,590,539,591,544,590,547,590,550,591,555,590,558,589,1687,591,1677,591,540,590,543,591,547,591,550,591,555,590,558,590,561,590,551,590,540,590,543,590,547,590,551,590,554,590,558,590,561,590,551,590,540,590,543,591,547,591,551,590,554,591,558,590,561,590,551,590,540,590,544,590,548,589,551,590,555,589,557,591,561,591,550,591,541,590,545,589,547,591,550,591,555,590,557,591,562,590,552,589,540,590,544,590,547,590,551,590,555,590,558,590,562,589,551,590,540,590,1671,590,547,591,551,590,555,590,1685,590,1688,590,532,567,8021,590,540,590,544,590,546,591,550,591,554,590,558,590,561,591,550,591,540,590,1670,590,548,590,550,591,554,590,557,591,561,590,551,590,540,591,544,590,547,591,551,590,554,590,558,590,560,591,550,591,540,590,543,591,547,591,551,590,555,590,557,591,560,591,550,590,541,589,543,591,547,590,1677,590,553,592,558,589,561,590,551,590,540,590,543,591,548,590,551,590,554,590,557,590,561,590,550,590,540,590,1671,589,547,590,1677,590,554,590,558,590,561,590,533,590};
static const uint16_t b_55_r29[] = {8994,4557,591,1666,590,1670,590,547,590,550,590,553,591,556,591,561,590,1676,590,540,590,1669,591,1674,590,549,591,554,590,557,591,560,591,550,590,539,591,543,591,547,590,549,591,554,590,559,589,562,589,550,591,540,590,1672,589,547,590,550,590,553,591,1683,591,561,589,1677,590,540,590,544,590,547,590,551,589,554,590,559,589,560,591,550,590,540,590,545,588,546,591,550,590,554,590,557,590,560,591,533,590,7995,590,540,590,544,590,546,591,550,590,553,591,559,588,1687,590,1676,590,540,590,543,590,548,589,551,589,554,590,558,589,561,590,550,591,539,591,543,591,547,590,551,589,554,590,557,591,561,590,550,590,540,590,544,590,546,591,550,591,553,591,557,590,562,588,550,590,539,591,542,591,547,590,551,590,553,591,557,590,560,590,550,590,540,590,543,590,546,590,551,589,553,591,557,590,560,591,550,590,541,588,543,590,547,590,550,590,553,590,557,590,561,589,550,590,539,590,1670,589,547,590,551,589,554,589,1683,589,1687,589,533,589,7993,589,540,590,542,591,547,590,551,589,554,590,557,590,560,591,550,590,539,590,1669,590,546,591,550,590,554,590,557,590,560,591,551,589,540,590,543,591,546,591,550,590,555,589,557,591,561,590,551,590,540,590,543,590,547,591,551,590,554,590,558,590,561,590,1677,591,540,590,543,591,547,590,1676,591,554,590,558,590,561,590,551,589,539,591,543,590,547,590,551,590,553,591,557,591,561,590,550,591,540,591,1670,591,547,590,1677,591,554,590,557,590,561,590,1661,589};
static const uint16_t b_55_r30[] = {8989,4558,590,1666,591,1671,589,547,590,551,590,554,590,558,589,561,590,1676,591,540,590,1671,590,1673,591,550,591,554,590,557,591,561,591,550,591,540,590,544,590,547,591,552,589,555,590,558,590,561,590,550,590,540,590,1671,590,548,589,551,589,1681,590,1683,590,561,590,1677,590,540,590,544,590,546,591,550,590,554,590,557,590,562,589,550,591,541,590,543,590,548,589,550,590,553,591,557,591,561,590,532,566,8020,589,539,591,543,590,547,591,551,590,554,590,557,591,1687,590,1678,589,540,591,543,591,547,590,550,591,554,590,558,590,563,589,552,589,541,589,543,591,547,590,551,590,554,590,558,590,561,591,551,590,540,590,543,591,547,590,551,590,554,591,557,591,561,590,550,591,540,590,544,590,547,590,550,590,555,589,558,589,561,590,550,591,541,589,544,590,547,590,551,590,554,590,557,590,561,590,551,590,540,590,544,590,547,590,551,590,554,590,558,590,560,592,551,590,540,590,1671,590,547,590,551,590,1681,589,1684,590,1688,590,533,589,7995,590,540,591,543,591,546,591,551,589,554,590,557,590,560,591,550,591,541,589,1670,591,547,590,550,591,554,590,558,590,561,591,551,590,541,589,543,591,547,590,551,590,553,591,557,591,561,590,550,591,540,590,543,591,547,590,551,590,555,589,557,591,562,590,551,590,540,590,543,590,547,590,1677,590,554,590,557,591,561,590,550,591,540,590,544,590,546,591,551,590,553,591,557,591,561,590,550,591,540,591,1670,591,547,590,1678,590,555,589,558,590,561,590,532,591};
static const uint16_t b_55_r31[] = {8989,4557,563,1695,561,1697,562,574,563,577,563,579,565,583,564,586,565,1702,565,566,564,1694,566,1700,563,576,564,580,564,585,562,587,564,576,564,565,565,568,565,572,565,576,564,578,566,584,563,586,565,576,564,567,563,1696,564,573,564,577,563,579,565,584,563,1713,564,1704,562,565,565,568,565,572,564,577,563,580,563,583,564,586,565,576,564,565,565,571,563,572,565,578,563,579,565,584,563,586,564,560,563,8014,564,566,563,568,565,572,564,578,562,579,564,583,564,1711,565,1701,564,567,562,568,565,573,563,576,564,580,563,582,564,587,563,576,564,566,563,569,564,573,563,576,563,578,565,582,565,585,565,576,564,565,564,568,565,573,564,576,564,579,564,583,564,586,565,576,564,566,564,570,563,572,564,576,564,580,563,583,564,587,563,577,563,565,565,568,565,573,564,576,564,580,564,584,563,586,565,576,565,565,565,569,564,573,564,577,564,579,565,583,564,586,565,576,564,565,565,1696,564,573,564,576,564,580,563,583,565,586,565,559,564,8019,563,565,565,570,564,572,565,576,565,579,565,583,564,586,565,577,563,565,565,1696,564,572,565,576,565,579,565,582,566,587,564,575,565,564,566,570,563,572,565,577,563,580,564,583,564,586,564,576,564,566,563,569,564,573,564,576,565,579,565,584,564,587,564,576,564,565,565,569,564,574,563,1702,564,579,565,583,564,587,564,576,564,565,565,570,563,573,564,576,564,580,564,583,564,586,565,575,565,566,564,1696,564,572,565,1703,564,580,564,584,563,586,565,559,589};
static const uint16_t b_55_r32[] = {8989,4557,564,1692,565,1699,561,573,564,576,564,580,564,584,563,589,562,1702,564,565,564,1696,564,1698,565,576,564,580,563,584,563,587,563,577,563,566,564,570,563,573,563,577,563,580,564,584,563,586,565,577,563,566,564,1696,563,572,565,577,563,582,562,584,563,1712,565,1703,564,567,563,569,564,574,562,576,564,580,563,583,564,587,563,577,563,565,565,572,562,572,565,577,563,581,563,585,563,586,565,559,564,8022,562,566,564,571,562,572,565,576,564,580,564,583,564,1714,563,1702,565,567,563,569,564,574,563,576,564,580,563,585,562,586,564,575,565,565,565,569,565,573,564,576,564,580,564,584,563,587,564,577,563,565,565,569,564,574,562,576,564,580,564,582,565,587,564,576,564,567,563,569,564,573,564,577,564,580,564,584,563,586,565,576,564,566,564,568,565,573,564,575,565,581,563,583,564,587,563,575,565,565,565,570,563,573,563,575,565,579,564,584,563,586,564,576,564,565,564,1696,563,573,563,576,564,580,564,583,564,587,564,560,563,8017,563,566,563,570,563,572,564,576,564,579,564,583,564,588,563,577,563,565,565,1697,563,573,564,576,564,580,564,584,563,586,565,577,564,565,565,569,564,574,563,576,564,581,563,583,564,587,564,576,564,566,563,570,563,574,563,577,563,579,565,583,564,586,565,1702,565,566,564,569,564,572,564,1702,564,579,564,583,564,587,563,576,564,565,565,570,563,572,564,576,564,578,565,582,565,588,563,576,564,566,563,1695,564,573,564,1704,563,579,565,582,565,586,564,1685,589};
static const uint16_t b_55_r33[] = {8990,4558,588,1668,565,1695,589,548,589,552,588,556,588,559,589,563,588,1678,589,541,589,1671,589,1674,590,551,589,555,589,557,591,561,590,551,589,541,589,544,589,548,589,551,590,555,589,558,589,561,590,551,589,542,589,1671,589,547,590,552,588,1681,589,558,589,1688,590,1678,589,540,590,544,590,547,590,550,590,554,590,558,590,561,590,551,590,541,589,544,589,547,590,551,590,556,588,558,590,564,587,533,566,8019,590,540,590,544,589,546,591,550,590,554,590,559,588,1688,589,1677,589,540,590,544,589,547,590,552,588,554,590,558,589,561,589,550,590,540,590,545,588,546,591,550,590,554,590,558,590,562,589,550,590,540,590,543,590,547,590,552,588,553,591,559,588,561,589,550,590,540,590,543,590,547,590,551,589,554,590,558,589,561,590,550,590,539,591,544,590,548,589,550,590,553,591,557,590,562,589,550,590,539,591,544,590,547,590,550,590,554,590,558,589,561,589,551,589,540,590,1671,589,547,590,551,589,1681,590,558,589,561,590,533,565,8016,590,540,589,543,590,547,589,550,590,554,590,557,590,561,590,550,590,541,589,1669,590,547,590,551,589,554,589,557,590,561,589,551,589,540,590,543,590,546,590,551,589,554,590,559,588,559,591,550,591,540,590,544,589,547,589,550,590,554,590,557,590,561,590,551,589,540,590,544,589,546,591,1676,591,554,590,558,589,561,590,551,589,540,590,544,589,548,588,550,591,554,590,557,590,561,590,551,589,540,590,1670,590,547,590,1678,589,554,590,557,590,562,589,533,590};
static const uint16_t b_55_r34[] = {8991,4560,589,1669,589,1671,589,548,589,550,590,555,589,559,589,563,588,1679,589,541,589,1673,588,1675,589,553,587,555,589,558,590,562,589,552,589,542,588,546,589,548,590,550,591,556,589,558,589,563,588,553,588,541,590,1672,565,572,566,575,566,1706,590,559,565,1712,566,1702,566,565,565,569,565,572,565,577,564,578,566,582,565,586,565,575,565,565,565,568,565,572,565,576,564,580,564,583,564,587,564,559,564,8018,565,565,565,568,565,572,565,576,564,580,564,582,565,1714,564,1703,565,566,564,569,564,572,565,576,564,580,564,582,565,587,564,576,565,565,564,570,564,573,564,576,565,580,564,583,565,587,564,576,564,566,564,569,565,572,565,576,565,579,565,583,565,587,564,576,564,566,564,568,565,572,565,576,565,579,565,583,565,586,565,577,564,565,565,569,565,572,565,576,564,579,565,582,565,586,565,576,564,566,564,569,564,573,564,575,566,579,565,583,564,586,565,576,564,566,564,1694,566,572,565,576,564,1705,565,582,566,586,565,558,565,8018,563,564,565,569,565,572,565,576,564,579,564,582,566,585,566,576,564,565,564,1695,565,572,565,575,566,578,566,583,565,586,565,575,565,566,564,569,564,573,564,576,564,579,565,584,564,586,565,576,565,565,566,569,564,572,565,576,564,579,565,583,565,587,564,1704,564,566,564,569,565,572,565,1703,566,579,565,583,565,586,565,576,565,564,566,569,565,572,565,575,565,580,564,583,564,587,564,575,565,566,564,1695,565,572,565,1703,565,580,564,583,565,586,565,1684,590};
static const uint16_t b_55_r35[] = {8993,4560,564,1694,563,1697,564,574,563,576,565,580,564,584,564,587,564,1702,566,566,565,1696,565,1700,564,578,563,580,564,583,565,587,564,577,563,567,563,569,565,574,563,577,564,580,564,582,566,586,565,578,563,566,564,1697,564,574,563,577,563,580,564,1711,564,1713,565,1703,564,566,564,569,565,572,565,577,564,581,564,583,565,586,565,576,565,566,564,570,564,573,564,576,565,579,565,584,564,588,563,560,564,8021,564,566,564,570,564,573,564,577,564,580,564,583,564,1713,564,1703,565,566,564,570,564,573,564,577,563,579,565,584,563,587,564,576,564,567,563,570,563,572,565,576,565,580,564,584,564,586,565,576,564,565,565,570,564,574,563,576,564,581,563,584,564,586,565,577,563,567,563,569,564,574,563,576,565,581,563,582,565,586,565,576,565,566,564,570,564,572,565,577,564,581,563,584,564,587,564,576,565,567,563,568,566,573,564,577,564,580,564,583,564,586,565,576,564,566,564,1697,563,573,564,576,564,579,565,1711,563,586,565,559,564,8018,565,567,563,569,565,573,564,577,564,579,565,583,564,586,565,576,565,567,563,1695,564,573,564,576,565,580,564,584,563,586,565,575,565,566,564,570,564,572,565,577,563,580,564,583,564,587,564,577,564,565,565,569,564,573,564,576,564,579,565,583,565,588,564,576,565,565,565,570,564,573,565,1703,564,580,564,584,564,587,564,576,564,565,565,570,564,573,564,577,564,580,564,584,564,587,564,576,565,566,565,1696,565,573,564,1703,564,579,565,584,564,586,565,558,590};
static const uint16_t b_55_r36[] = {8987,4555,560,1694,561,1698,561,574,562,578,562,584,560,586,561,590,560,1705,561,567,563,1698,561,1703,559,577,563,579,564,586,561,588,563,578,562,568,562,572,561,574,563,580,561,582,562,587,561,591,560,579,561,568,562,1699,561,576,561,578,562,581,562,586,561,589,561,580,560,567,563,571,562,576,561,580,561,582,562,587,560,590,561,579,561,567,562,571,562,575,562,578,562,581,563,586,561,588,563,559,563,8017,563,568,561,571,562,574,562,578,562,582,561,585,561,590,561,1702,564,567,562,572,561,574,562,580,560,581,562,584,563,589,562,578,562,569,561,573,561,575,561,577,563,582,562,586,561,589,561,577,563,569,561,571,562,574,562,578,562,582,561,586,561,590,561,579,561,567,563,571,562,575,562,577,563,582,561,585,562,589,562,577,563,568,562,571,562,575,562,578,563,582,562,585,562,589,562,578,562,569,561,571,562,575,562,579,561,581,562,585,562,588,563,578,562,568,562,1697,563,576,561,578,562,580,564,585,562,588,562,1687,562,8017,561,568,561,571,562,576,561,578,562,581,562,585,562,588,563,579,562,569,561,572,562,575,562,579,562,582,562,585,563,589,562,578,562,568,562,571,562,574,563,579,562,582,562,585,563,589,562,580,561,569,561,572,562,574,563,578,562,582,562,584,564,589,562,578,562,567,563,571,563,575,562,1705,562,583,561,584,563,589,562,579,562,568,562,571,562,574,563,578,563,581,563,586,562,588,563,578,563,568,562,572,562,574,563,1706,561,581,563,585,562,588,563,561,561};
static const uint16_t b_55_r37[] = {8990,4558,585,1672,585,1675,585,552,585,556,584,560,584,563,584,566,585,1683,584,544,586,1675,585,1679,585,555,586,558,586,562,585,565,586,556,585,545,585,548,586,552,585,556,585,559,585,561,587,566,584,556,584,546,584,1677,583,551,586,1681,586,559,585,563,584,565,586,556,584,545,585,1675,585,552,585,556,585,560,584,563,584,566,585,555,586,545,585,549,584,552,585,556,585,559,585,563,585,565,586,537,586,8000,585,546,584,549,610,526,610,532,610,533,611,537,611,539,612,1657,611,519,612,522,612,527,610,529,612,534,610,537,611,540,611,529,611,518,612,522,612,526,611,528,612,533,611,536,611,540,611,529,611,519,611,523,610,526,611,529,612,532,612,535,612,539,612,529,611,518,612,522,612,527,610,529,611,532,612,536,611,539,611,528,612,518,612,521,612,526,611,527,613,531,613,535,612,539,612,529,611,519,611,521,612,525,612,528,613,532,612,536,611,538,613,528,612,519,611,521,613,526,611,1657,611,532,612,536,612,539,612,1638,612,7973,612,517,613,522,612,526,611,529,612,531,613,536,612,539,612,529,612,1645,612,522,611,1653,611,528,612,532,612,534,613,539,612,528,612,517,613,522,611,525,612,530,611,531,613,536,612,539,612,527,613,517,613,521,612,523,614,527,613,531,613,535,613,538,613,527,613,518,612,521,612,524,613,1654,613,530,614,534,613,537,614,527,614,517,613,520,613,523,614,526,614,531,613,534,614,537,614,527,613,1643,614,519,615,1650,613,1654,612,530,614,534,614,537,614,510,612};
static const uint16_t b_55_r38[] = {8992,4557,562,1693,563,1698,562,574,563,577,564,581,562,586,561,589,562,1705,562,568,562,1698,561,1702,561,578,563,582,562,586,562,589,562,579,561,568,562,570,563,576,561,579,562,581,563,589,558,587,564,579,561,569,561,1698,562,574,563,1707,559,1709,561,1712,562,589,562,579,561,569,561,571,563,1703,561,578,562,583,561,586,561,588,563,579,562,569,561,571,562,574,563,579,561,580,564,586,561,588,563,561,562,8020,561,569,560,571,562,575,562,579,561,581,563,585,563,588,563,1704,562,568,562,572,561,575,562,578,562,583,561,585,563,589,562,579,561,568,562,572,561,575,561,577,563,581,563,585,562,590,561,578,562,569,561,572,561,574,563,578,562,581,563,586,561,589,562,578,562,568,562,570,563,575,561,578,562,582,561,587,560,589,562,579,561,566,564,571,563,575,562,579,562,582,562,585,562,588,563,578,563,567,563,570,563,576,561,578,562,582,562,585,562,590,561,578,563,568,562,1699,561,1701,563,1705,562,1709,562,1714,562,587,564,1687,562,8022,561,568,562,571,563,575,562,578,563,582,562,585,563,588,563,579,562,1695,561,571,562,1701,562,578,562,581,563,585,563,589,562,577,563,568,562,572,561,575,562,578,562,582,562,585,562,589,562,579,561,568,562,571,563,576,561,578,563,582,562,585,563,589,562,578,562,567,563,571,563,574,563,1707,560,582,562,585,562,589,562,579,562,569,561,572,562,575,562,579,561,583,561,585,562,589,562,577,563,1693,563,569,565,1702,562,1705,562,582,562,586,561,590,561,560,562};
static const uint16_t b_55_r39[] = {8990,4553,589,1668,589,1671,589,549,588,552,589,555,589,558,589,562,590,1679,588,541,589,1672,588,1676,588,552,589,556,588,560,588,562,589,553,587,544,586,546,588,549,588,553,588,555,589,560,588,562,589,552,589,544,586,1673,587,549,588,1678,588,556,588,559,589,1690,588,552,589,541,589,1673,587,1677,586,554,587,557,587,559,589,564,587,553,588,542,588,545,589,549,588,553,588,557,587,561,586,562,589,536,587,7998,587,542,588,545,588,550,587,554,587,557,587,559,589,563,588,1680,587,542,588,546,587,549,588,553,587,557,587,560,587,564,586,552,588,542,588,545,588,550,586,553,587,556,588,560,587,563,588,553,587,542,588,547,587,550,587,552,588,555,589,560,587,564,587,553,587,543,587,546,587,549,588,552,589,557,587,560,587,563,588,552,588,542,588,546,587,549,588,553,587,556,587,560,588,563,588,553,587,542,588,545,588,549,588,552,589,556,588,560,587,562,588,552,588,541,589,545,588,1678,585,1679,588,556,588,560,587,1689,588,1661,588,7994,586,542,588,546,587,549,587,553,587,556,588,558,589,563,588,553,587,1668,587,546,587,1676,587,553,587,556,587,559,588,564,587,552,588,541,588,546,587,550,586,551,589,555,588,559,588,562,588,552,588,542,587,544,588,548,588,552,588,556,587,559,588,564,586,554,585,543,587,545,587,550,587,1678,587,555,588,559,588,563,587,553,587,543,586,545,588,548,589,551,589,556,588,559,588,563,588,554,586,1669,587,546,587,1675,587,1679,587,556,587,561,586,563,588,535,614};
static const uint16_t b_55_r40[] = {8988,4555,586,1667,589,1671,589,548,588,552,588,555,588,558,589,563,588,1682,585,540,589,1671,589,1675,588,551,589,555,589,559,589,564,587,551,589,541,589,546,587,549,588,552,588,556,588,561,586,561,590,551,589,542,588,1671,589,548,589,1677,590,555,589,560,588,1690,588,552,589,541,589,544,589,548,589,1680,587,556,588,558,589,563,588,552,588,542,588,544,589,548,589,553,587,555,589,558,589,561,590,536,586,7995,587,541,589,545,589,549,587,554,586,555,589,558,589,564,587,1680,587,541,589,543,590,549,588,551,589,556,588,558,589,562,589,553,587,541,589,545,588,548,589,553,587,557,587,558,589,562,589,552,589,542,588,545,588,549,588,552,589,555,589,559,588,563,588,552,588,542,588,544,590,548,589,550,591,555,589,558,589,563,588,553,588,541,589,545,589,550,587,551,589,555,589,559,588,564,587,552,589,543,587,545,588,548,589,552,588,557,587,558,589,561,590,551,589,542,588,1670,590,549,588,551,589,555,589,559,588,1688,589,1662,588,7997,587,540,590,544,589,549,588,551,590,556,588,558,589,562,589,554,586,1669,587,545,588,1674,590,551,590,556,588,560,587,565,586,550,591,542,588,545,589,549,588,551,590,554,590,558,589,562,588,552,588,542,588,545,589,548,589,551,590,556,588,559,588,563,588,552,589,542,588,544,590,548,589,1678,590,555,589,561,586,562,589,551,589,540,589,546,587,548,588,551,589,555,588,559,588,561,590,551,589,1668,588,545,588,1676,588,1679,588,555,589,560,588,561,590,534,588};
static const uint16_t b_55_r41[] = {8986,4553,589,1667,588,1670,589,548,588,551,589,555,588,558,589,562,589,1678,588,541,589,1671,588,1674,589,553,587,554,590,559,589,562,589,550,590,540,589,544,589,547,590,552,588,554,589,558,589,563,587,553,587,541,588,1670,589,546,591,1677,589,1682,588,557,590,1689,588,553,588,540,590,1671,589,549,588,1680,587,556,588,558,589,562,589,552,589,542,588,546,588,548,589,551,589,556,588,558,589,563,588,534,589,7996,587,542,588,546,588,550,587,552,588,555,589,560,587,563,588,1682,585,543,587,547,586,550,587,553,587,556,588,561,586,562,589,554,586,542,588,547,587,550,587,553,588,556,588,560,587,562,589,554,586,542,588,546,587,551,585,553,588,556,588,559,589,563,588,553,587,542,588,546,587,549,587,553,587,556,588,560,587,564,587,552,588,542,588,545,588,550,587,554,587,556,588,560,587,563,588,552,588,543,586,545,588,549,588,554,587,557,586,560,587,564,587,552,588,542,588,546,587,550,587,553,587,1684,586,560,587,1691,587,1663,586,7997,587,542,588,546,587,550,587,553,587,556,588,559,588,564,587,553,588,1670,587,547,586,1676,587,554,587,557,587,561,587,564,587,553,587,543,587,547,587,549,587,552,588,556,588,560,587,564,587,553,587,542,588,546,587,550,586,552,587,557,586,560,587,564,587,553,587,543,587,546,587,550,586,1680,586,556,588,559,589,562,589,554,586,542,588,546,587,550,587,553,587,557,613,533,587,564,613,526,614,1643,586,546,614,1649,613,1652,614,530,613,533,614,537,613,509,613};
static const uint16_t b_55_r42[] = {8989,4558,611,1645,611,1649,611,526,611,530,610,534,610,536,611,540,611,1656,611,518,612,1649,611,1651,612,529,611,532,611,537,611,540,610,529,612,517,613,522,611,524,613,528,612,532,612,537,610,538,612,530,610,518,611,1648,612,526,611,1654,612,532,611,1663,610,1666,612,529,612,520,610,523,610,1652,611,529,611,1658,611,536,611,539,612,530,610,520,610,522,612,526,611,529,611,532,612,537,610,539,612,512,584,7998,610,519,610,523,610,525,612,530,610,533,611,537,610,541,610,1657,610,520,610,523,610,526,611,530,610,532,586,563,610,541,610,530,611,519,586,548,585,552,585,556,609,534,585,562,585,566,585,556,584,545,584,548,585,553,583,556,584,559,585,561,586,566,584,556,584,544,586,549,584,552,585,556,584,559,585,563,584,565,586,556,585,544,586,548,585,551,585,556,584,559,584,562,585,567,583,555,585,545,585,548,585,552,584,556,584,559,585,561,586,566,584,556,584,545,585,1674,585,1680,583,1682,584,1685,585,1689,584,1691,585,1664,585,7995,585,544,585,549,584,553,584,554,586,559,585,562,585,567,584,556,584,1673,583,550,583,1678,584,555,585,559,585,564,583,565,585,556,584,546,584,549,584,553,584,554,586,558,586,562,585,565,585,556,584,546,584,549,584,552,585,555,585,560,584,562,585,566,585,556,584,546,584,548,585,552,585,1681,585,560,584,563,584,566,585,555,585,546,584,549,584,553,584,556,584,559,585,563,584,566,584,555,585,1670,586,548,585,1678,584,1681,584,559,584,563,584,566,585,538,582};
static const uint16_t b_55_r43[] = {8991,4556,587,1668,588,1671,588,548,589,551,590,555,589,557,590,562,589,1679,588,542,588,1674,586,1677,586,551,589,554,590,559,588,561,590,552,589,1667,590,1671,590,548,589,553,587,555,589,558,589,563,588,550,590,544,586,1671,589,547,590,1678,589,555,589,1686,588,1688,589,1679,588,541,589,1672,588,1675,589,1680,588,1682,588,561,586,563,588,551,590,542,588,544,590,549,588,551,590,555,589,558,589,561,590,533,565,8020,589,540,590,545,589,547,590,552,589,557,587,558,590,561,590,1679,588,541,589,544,590,548,589,554,587,554,590,559,589,561,590,552,588,542,588,544,589,550,588,552,589,554,590,558,590,562,589,552,589,540,590,544,589,549,588,551,590,558,586,559,589,564,587,551,589,541,589,545,588,550,587,551,590,556,588,558,590,566,586,552,589,542,588,544,590,548,589,552,589,554,590,557,591,561,590,551,589,543,587,544,590,548,590,551,590,556,588,559,589,562,589,551,590,1668,590,1673,588,1675,589,551,590,1682,589,1685,590,1689,590,536,563,8024,588,542,589,547,587,547,590,551,590,555,589,557,591,561,590,551,590,1668,589,544,589,1674,590,551,589,554,590,559,589,563,588,551,590,540,590,543,590,547,590,552,589,555,589,558,589,562,589,552,589,541,589,543,590,547,590,551,589,555,589,559,588,562,589,551,590,541,589,544,590,549,588,1678,589,556,588,557,590,562,589,552,589,542,589,544,589,548,589,550,590,554,590,560,587,562,589,551,589,1668,589,544,590,1674,589,1679,588,555,589,558,590,562,589,533,590};
static const uint16_t b_55_r44[] = {8990,4557,587,1670,587,1674,587,552,586,553,588,558,587,561,587,564,587,1682,586,543,587,1674,587,1679,612,529,612,531,587,562,613,538,613,528,613,518,612,521,612,523,614,527,613,532,612,534,614,539,612,527,614,517,613,1648,612,526,611,1656,612,532,612,1663,612,1667,612,529,612,519,612,523,610,525,612,529,612,533,611,536,612,539,612,527,614,518,612,521,613,525,612,529,612,532,613,535,612,539,612,511,612,7973,613,517,613,521,613,527,610,528,613,531,613,1661,613,537,614,1653,588,543,587,546,588,551,587,554,587,557,588,560,588,564,588,553,588,544,586,546,588,550,587,553,588,557,587,559,589,563,589,553,588,542,588,547,587,549,588,553,587,555,589,560,588,563,588,553,587,542,588,547,587,549,588,554,587,558,586,560,588,563,588,553,588,543,588,546,587,549,588,553,588,556,588,561,587,563,588,553,588,542,588,546,588,550,588,553,587,556,588,560,588,563,588,553,588,542,588,1673,588,549,588,1679,588,556,588,560,588,1690,587,1662,587,7997,587,542,588,545,589,549,588,553,588,555,589,560,588,563,588,552,589,542,588,544,590,550,587,552,589,556,588,559,589,563,588,552,589,541,590,546,588,547,590,552,589,556,588,560,588,563,589,552,588,542,588,545,589,550,587,551,590,556,588,559,589,562,589,554,586,541,589,545,589,549,588,1678,590,555,589,559,589,564,587,552,588,541,589,546,588,549,588,552,589,555,589,560,588,563,588,552,589,542,589,545,589,549,588,1678,589,555,589,560,588,563,588,535,587};
static const uint16_t b_55_r45[] = {8987,4554,587,1668,587,1672,587,548,588,552,588,556,588,559,588,563,588,1677,589,543,586,1669,589,1675,587,553,587,556,587,559,588,562,589,552,588,1668,587,1670,589,547,589,1678,588,554,589,559,588,561,590,552,588,541,588,1671,589,550,586,1678,589,555,589,1684,589,1689,587,552,588,541,589,546,587,548,588,551,589,556,587,560,587,562,589,552,588,541,588,546,587,549,588,551,589,556,587,558,589,563,587,535,587,7990,589,541,588,544,589,549,588,551,589,554,589,558,589,562,589,1678,588,540,589,544,589,549,587,552,588,554,589,558,588,563,588,552,588,541,589,544,589,549,587,552,588,557,587,558,589,564,586,551,589,541,588,545,588,547,589,551,589,555,588,560,587,562,588,551,589,542,588,544,589,550,587,552,588,555,588,559,588,563,587,552,588,540,590,544,589,548,589,552,588,555,588,559,588,563,587,552,588,542,587,544,589,548,588,551,589,556,588,559,588,562,588,552,588,1668,588,544,589,548,588,552,588,556,587,1685,588,1687,589,1659,589,7991,587,542,587,545,588,549,588,552,588,554,590,559,588,563,587,552,588,1667,588,1670,588,549,587,552,587,555,588,559,588,561,589,552,587,542,587,545,588,551,585,551,589,554,589,558,589,562,588,551,589,541,588,543,590,548,588,552,588,556,588,560,587,563,588,551,589,541,588,545,588,547,589,1678,587,555,588,558,588,563,587,551,589,540,589,545,588,549,587,552,588,555,588,558,589,563,587,551,589,1667,587,1671,587,549,587,1677,588,555,588,559,588,563,587,534,587};
static const BBtn b_55[] = {
  {"Power", PR_RAW, 0, 0, 0, 38000, b_55_r0, 343},
  {"Mode Cold", PR_RAW, 0, 0, 0, 38000, b_55_r1, 343},
  {"Mode Dry", PR_RAW, 0, 0, 0, 38000, b_55_r2, 343},
  {"Mode Fan", PR_RAW, 0, 0, 0, 38000, b_55_r3, 343},
  {"FAN Auto", PR_RAW, 0, 0, 0, 38000, b_55_r4, 343},
  {"FAN Max", PR_RAW, 0, 0, 0, 38000, b_55_r5, 343},
  {"FAN Med", PR_RAW, 0, 0, 0, 38000, b_55_r6, 343},
  {"FAN Low", PR_RAW, 0, 0, 0, 38000, b_55_r7, 343},
  {"Blade", PR_RAW, 0, 0, 0, 38000, b_55_r8, 343},
  {"Fahrenheit", PR_RAW, 0, 0, 0, 38000, b_55_r9, 343},
  {"61f", PR_RAW, 0, 0, 0, 38000, b_55_r10, 343},
  {"62f", PR_RAW, 0, 0, 0, 38000, b_55_r11, 343},
  {"63f", PR_RAW, 0, 0, 0, 38000, b_55_r12, 343},
  {"64f", PR_RAW, 0, 0, 0, 38000, b_55_r13, 343},
  {"65f", PR_RAW, 0, 0, 0, 38000, b_55_r14, 343},
  {"66f", PR_RAW, 0, 0, 0, 38000, b_55_r15, 343},
  {"67f", PR_RAW, 0, 0, 0, 38000, b_55_r16, 343},
  {"68f", PR_RAW, 0, 0, 0, 38000, b_55_r17, 343},
  {"69f", PR_RAW, 0, 0, 0, 38000, b_55_r18, 343},
  {"70f", PR_RAW, 0, 0, 0, 38000, b_55_r19, 343},
  {"71f", PR_RAW, 0, 0, 0, 38000, b_55_r20, 343},
  {"72f", PR_RAW, 0, 0, 0, 38000, b_55_r21, 343},
  {"73f", PR_RAW, 0, 0, 0, 38000, b_55_r22, 343},
  {"74f", PR_RAW, 0, 0, 0, 38000, b_55_r23, 343},
  {"75f", PR_RAW, 0, 0, 0, 38000, b_55_r24, 343},
  {"76f", PR_RAW, 0, 0, 0, 38000, b_55_r25, 343},
  {"77f", PR_RAW, 0, 0, 0, 38000, b_55_r26, 343},
  {"78f", PR_RAW, 0, 0, 0, 38000, b_55_r27, 343},
  {"79f", PR_RAW, 0, 0, 0, 38000, b_55_r28, 343},
  {"80f", PR_RAW, 0, 0, 0, 38000, b_55_r29, 343},
  {"81f", PR_RAW, 0, 0, 0, 38000, b_55_r30, 343},
  {"82f", PR_RAW, 0, 0, 0, 38000, b_55_r31, 343},
  {"83f", PR_RAW, 0, 0, 0, 38000, b_55_r32, 343},
  {"84f", PR_RAW, 0, 0, 0, 38000, b_55_r33, 343},
  {"85f", PR_RAW, 0, 0, 0, 38000, b_55_r34, 343},
  {"86f", PR_RAW, 0, 0, 0, 38000, b_55_r35, 343},
  {"Sleep off", PR_RAW, 0, 0, 0, 38000, b_55_r36, 343},
  {"Sleep 1h", PR_RAW, 0, 0, 0, 38000, b_55_r37, 343},
  {"Sleep 2h", PR_RAW, 0, 0, 0, 38000, b_55_r38, 343},
  {"Sleep 3h", PR_RAW, 0, 0, 0, 38000, b_55_r39, 343},
  {"Sleep 4h", PR_RAW, 0, 0, 0, 38000, b_55_r40, 343},
  {"Sleep 5h", PR_RAW, 0, 0, 0, 38000, b_55_r41, 343},
  {"Sleep 10h", PR_RAW, 0, 0, 0, 38000, b_55_r42, 343},
  {"Sleep 20h", PR_RAW, 0, 0, 0, 38000, b_55_r43, 343},
  {"Light", PR_RAW, 0, 0, 0, 38000, b_55_r44, 343},
  {"Standby", PR_RAW, 0, 0, 0, 38000, b_55_r45, 343},
};
static const BRemote rem_56[] = {
  {"DG11J1-99", b_55, 46},
};
static const uint16_t b_57_r0[] = {4414,4350,566,1579,568,504,569,1576,571,501,572,500,563,535,538,507,566,1579,568,1578,569,529,544,501,572,500,563,509,564,507,566,532,541,1578,569,503,570,1574,563,1583,564,508,565,1580,567,1579,568,1577,570,529,544,1575,572,1573,564,1582,565,1581,566,1579,568,1578,569,1576,571,1575,572,1573,564,1582,565,1581,566,1579,568,1578,569,1577,570,1575,572,1574,563,509,564,1582,565,1606,541,505,568,530,543,502,572,501,562,1609,538,5170,4410,4354,562,536,537,1608,539,507,566,1580,567,1578,569,1577,570,1575,572,527,536,510,563,1582,565,1580,567,1579,568,1577,570,1576,571,1575,572,526,537,1583,564,508,565,507,566,1579,568,504,569,503,570,528,545,1574,563,510,564,508,565,507,566,506,567,504,569,503,570,502,571,500,563,536,537,508,565,507,566,505,568,530,543,503,570,501,572,526,537,1582,565,507,566,506,567,1579,568,1577,570,1576,571,1574,573,500,563};
static const uint16_t b_57_r1[] = {4487,4275,568,1577,570,501,573,1573,564,508,565,506,567,504,569,502,571,1574,563,1582,565,507,566,505,568,529,544,1574,563,509,565,1580,567,1578,569,502,572,1573,564,1581,566,506,567,1577,570,1575,572,1572,565,507,566,1579,568,1576,571,1574,563,1582,565,1580,567,1577,570,1575,572,1573,564,1581,566,1579,568,1577,570,1574,563,1582,565,1580,567,1578,569,1575,572,500,563,1582,565,1579,568,504,569,1575,572,1573,564,508,565,506,567,5164,4406,4354,573,499,564,1581,566,506,567,1577,570,1575,562,1583,564,1580,567,505,568,503,570,1574,563,1582,565,1580,567,505,568,1576,571,500,563,509,565,1580,567,504,569,502,571,1573,564,508,565,506,567,505,568,1576,571,500,563,509,565,507,566,505,568,503,570,501,573,499,564,508,565,532,541,504,569,528,545,526,537,509,564,507,566,505,568,503,571,1573,564,508,565,506,567,1577,570,502,571,500,563,1581,566,1579,568};
static const uint16_t b_57_r2[] = {4410,4351,565,1580,567,505,568,1577,570,501,572,500,563,535,538,507,566,1578,569,1575,572,500,563,509,564,1580,567,505,568,503,570,1575,562,1583,564,507,566,1579,568,1603,544,501,572,1573,564,1581,566,1578,569,503,570,1575,562,1583,564,1580,567,1578,569,1576,571,1574,563,1582,565,1580,567,1578,569,1576,571,1574,563,1582,565,1580,567,1578,569,1576,571,1573,564,509,564,1580,567,1578,569,1576,571,1574,563,1582,565,533,540,505,568,5163,4406,4354,562,510,563,1581,566,506,567,1577,570,1575,572,1573,564,1581,566,506,567,504,569,1575,572,1573,564,508,565,1580,567,1577,570,502,571,500,563,1582,565,506,567,505,568,1576,571,501,562,509,564,508,565,1579,568,503,570,502,571,500,563,535,538,507,566,505,568,503,570,528,545,526,537,534,539,506,567,505,568,529,544,527,546,499,564,508,565,1579,568,504,569,502,571,500,563,509,564,533,540,1578,569,1576,571};
static const uint16_t b_57_r3[] = {4408,4354,573,1599,538,534,539,1580,567,531,542,503,570,528,545,526,537,1608,539,1605,542,504,569,529,544,1574,563,535,538,534,539,1578,569,1576,571,501,572,1599,538,1581,566,506,567,1577,570,1575,572,1573,564,1581,566,1579,568,1577,570,1575,572,1573,564,1582,565,1580,567,1578,569,1576,571,1574,563,1582,565,1580,567,1578,569,1576,571,1574,563,1583,564,1581,566,506,567,1577,570,1575,572,1573,564,1582,565,1580,567,505,568,1576,571,5162,4407,4353,563,535,538,1581,566,506,567,1603,544,1575,572,1573,564,1581,566,507,566,505,568,1577,570,1574,573,500,563,1581,566,1579,568,505,568,503,570,1574,563,510,563,508,565,1580,567,531,542,503,570,501,562,536,537,508,565,532,541,505,568,529,544,527,546,526,537,534,539,533,540,531,542,529,544,527,536,536,537,534,539,532,541,531,542,503,570,1573,564,509,564,507,566,531,542,530,543,502,571,1573,564,508,565};
static const uint16_t b_57_r4[] = {4406,4356,571,1574,563,509,564,1581,566,506,567,504,569,529,544,501,562,1582,565,1580,567,505,568,503,570,1575,562,510,563,508,565,1580,567,1604,543,529,544,1574,563,1582,565,507,566,1579,568,1577,570,1575,572,500,563,1582,565,1579,568,1577,570,1575,572,1573,564,1581,566,1579,568,1577,570,1575,572,1573,564,1581,566,1579,568,1577,570,1575,572,1573,564,1582,565,506,567,1578,569,1576,571,1574,563,1582,565,1580,567,505,568,503,570,5162,4408,4354,562,535,538,1581,566,505,568,1577,570,1575,572,1573,564,1581,566,506,567,505,568,1576,571,1573,564,509,564,1580,567,1578,569,503,570,501,562,1583,564,507,566,506,567,1577,570,502,571,500,563,509,564,1580,567,505,568,503,570,501,572,499,564,508,565,506,567,531,542,503,570,501,562,536,537,534,539,506,567,504,569,529,544,527,536,510,564,1580,567,505,568,503,570,501,572,526,537,508,565,1579,568,1577,570};
static const uint16_t b_57_r5[] = {4405,4358,569,1577,570,502,571,1574,563,509,564,508,565,507,566,505,568,1577,570,1574,573,500,563,509,564,507,566,505,568,530,543,1575,572,526,537,509,564,1580,567,1578,569,1576,571,501,572,500,563,1582,565,507,566,1578,569,1576,571,1574,563,1583,564,1607,540,1579,568,1577,570,1575,572,1573,564,1581,566,1579,568,1577,570,1575,572,1573,564,1582,565,1580,567,505,568,1577,570,1601,546,1573,564,508,565,1579,568,1577,570,1575,572,5161,4408,4353,563,509,564,1580,567,505,568,1577,570,1575,572,1572,565,1581,566,506,567,504,569,1576,571,1573,564,1582,565,1580,567,1578,569,503,570,1574,563,1583,564,508,565,507,566,505,568,1576,571,1574,563,510,563,1581,566,532,541,504,569,529,544,501,562,510,563,508,565,533,540,505,568,503,570,501,562,536,537,534,539,506,567,531,542,529,544,527,546,1572,565,508,565,506,567,504,569,1576,571,500,563,509,564,507,566};
static const uint16_t b_57_r6[] = {4407,4355,571,1574,563,509,564,1581,566,506,567,505,568,530,543,528,545,1574,563,1583,564,508,565,506,567,505,568,503,570,502,571,1573,564,509,564,507,566,1579,568,1603,544,1575,572,500,563,536,537,1581,566,506,567,1578,569,1576,571,1574,563,1583,564,1581,566,1580,567,1578,569,1576,571,1575,572,526,537,509,564,507,566,532,541,504,569,503,570,1574,563,510,563,508,565,1580,567,1578,569,503,570,1575,572,1573,564,509,564,5168,4411,4351,565,507,566,1579,568,504,569,1576,571,1574,573,1573,564,1581,566,507,566,505,568,1577,570,1575,572,1574,563,1582,565,1581,566,506,567,1578,569,1576,571,501,572,500,563,509,564,1580,567,1578,569,504,569,1576,571,501,562,510,563,508,565,507,566,531,542,530,543,502,571,527,536,510,563,1581,566,1579,568,1578,569,1576,571,1575,572,1573,564,509,564,1581,566,1579,568,504,569,503,570,1574,563,510,563,508,565,1580,567};
static const uint16_t b_57_r7[] = {4415,4348,568,1578,569,503,570,1575,572,500,563,510,563,508,565,533,540,1578,569,1576,571,527,546,500,563,509,564,533,540,532,541,1603,544,502,571,500,563,1582,565,1580,567,1578,569,504,569,502,571,1574,563,509,564,1581,566,506,567,504,569,529,544,501,572,500,563,509,564,1580,567,1578,569,529,544,501,572,500,563,509,564,507,566,1578,569,1576,571,501,572,1573,564,508,565,1606,541,504,569,1576,571,501,572,1573,564,5169,4410,4351,565,507,566,1579,568,504,569,1575,572,1573,564,1582,565,1580,567,505,568,503,570,1575,572,1573,564,1581,566,1580,567,1578,569,503,570,1575,572,1573,564,534,539,507,566,505,568,1577,570,1575,572,500,563,1582,565,507,566,1579,568,1577,570,1575,572,1573,564,1582,565,1580,567,505,568,504,569,1576,571,1574,563,1582,565,1580,567,1579,568,504,569,503,570,1574,563,509,564,1581,566,506,567,1578,569,503,570,1574,563,510,563};
static const uint16_t b_57_r8[] = {4413,4375,541,1579,568,504,569,1576,571,501,562,510,563,534,539,507,566,1578,569,1577,570,1575,572,500,563,509,564,508,565,506,567,1578,569,502,571,501,562,1583,564,1581,566,1579,568,504,569,503,570,1574,563,510,563,1607,540,506,567,505,568,503,570,502,571,1573,564,508,565,1580,567,1578,569,503,570,502,571,500,563,535,538,507,566,1579,568,1577,570,502,571,500,563,536,537,1581,566,506,567,504,569,503,570,1574,563,5170,4409,4379,537,509,564,1581,566,506,567,1577,570,1575,572,1573,564,1582,565,507,566,505,568,504,569,1575,572,1573,564,1582,565,1580,567,505,568,1576,571,1574,563,509,564,508,565,532,541,1577,570,1575,572,500,563,1582,565,507,566,1578,569,1576,571,1574,562,1583,564,508,565,1579,568,504,569,502,571,1574,563,1582,565,1580,567,1578,569,1576,571,501,562,510,563,1581,566,1579,568,1577,570,501,572,1573,564,1581,566,1579,568,504,569};
static const uint16_t b_57_r9[] = {4413,4349,566,1580,567,505,568,1577,570,502,571,501,572,526,537,1582,565,507,566,506,567,504,569,503,570,501,562,510,563,535,538,507,566,1579,568,1577,570,1575,572,1573,564,1582,565,1581,566,1579,568,1578,569,1576,571,1574,563,1583,564,1582,565,1580,567,1578,569,1577,570,1575,572,1573,564,1582,565,1581,566,1579,568,1578,569,1576,571,1574,563,1583,564,1581,566,506,567,1604,543,1576,571,1574,563,1583,564,1581,566,506,567,505,568,5164,4405,4357,569,502,571,1574,563,510,563,1582,565,1580,567,1578,569,503,570,1575,572,1573,564,1582,565,1580,567,1579,568,1577,570,1575,572,1573,564,509,564,508,565,506,567,505,568,503,570,502,571,526,537,509,564,508,565,506,567,505,568,503,570,501,572,500,563,509,564,507,566,506,567,504,569,503,570,501,572,499,564,508,565,507,566,505,568,504,569,1575,572,500,563,509,564,507,566,506,567,504,569,1576,571,1574,563};
static const uint16_t b_57_r10[] = {4409,4353,563,1583,564,508,565,1580,567,506,567,504,569,1576,571,501,572,500,563,1582,565,1580,567,505,568,504,569,529,544,501,572,1573,564,508,565,507,566,1578,569,1576,571,1575,572,500,563,509,564,1580,567,532,541,1577,570,1575,572,1573,564,1581,566,1580,567,1578,569,1576,571,1575,572,500,563,509,564,1580,567,1604,543,503,570,528,545,1573,563,509,564,1580,567,1578,569,1576,571,1574,563,1583,564,1581,566,1579,568,1577,570,5162,4407,4355,571,500,563,1582,565,507,566,1579,568,1577,570,502,571,1600,536,1582,565,507,566,506,567,1577,570,1575,572,1573,564,1582,565,507,566,1579,568,1577,570,502,571,500,563,509,564,1581,566,1579,568,504,569,1575,572,500,563,509,564,508,565,506,567,505,568,503,570,502,571,526,537,1582,565,1580,567,505,568,503,570,1575,572,1572,565,508,565,1580,567,504,569,503,570,501,572,500,563,509,564,507,566,505,568,504,569};
static const uint16_t b_57_r11[] = {4409,4355,571,1574,562,536,537,1582,565,533,540,506,567,531,542,1576,571,527,546,500,563,509,564,507,566,532,541,1604,543,502,571,501,562,510,563,1582,565,1579,568,1578,569,1576,571,1600,547,1573,564,1581,566,1580,567,1578,569,1602,545,1575,572,1573,564,1582,565,1580,567,1578,569,1577,570,1575,572,1573,564,1582,565,1581,566,1605,542,1577,570,1576,571,1574,573,526,537,1582,565,1580,567,1579,568,504,569,1576,571,501,572,1573,564,5169,4410,4352,563,508,565,1580,567,506,567,1577,570,1576,571,1574,562,510,563,1581,566,1580,567,1578,569,1576,571,1575,572,500,563,1582,565,1580,567,1579,568,504,569,529,544,528,545,500,563,509,564,508,565,506,567,531,542,529,544,502,571,500,563,509,564,507,566,506,567,531,542,529,544,528,545,526,537,535,538,507,566,506,567,504,569,503,570,502,571,1573,564,508,565,507,566,505,568,1577,570,502,571,1574,563,509,564};
static const uint16_t b_57_r12[] = {4393,4432,529,1624,530,546,531,1625,529,547,530,547,529,547,529,546,531,1623,531,547,530,547,530,548,529,548,529,547,530,547,530,1626,528,547,530,547,529,1626,528,1625,529,546,531,1625,529,1625,529,1624,530,550,527,1624,530,1625,529,1625,529,1625,529,1624,530,1624,530,1625,529,1624,530,1623,531,1624,530,1623,531,1624,530,1624,530,1624,529,1623,531,1623,531,1624,530,1625,529,1624,530,547,529,547,530,546,530,1625,528,1624,529,5223,4395,4431,529,546,531,1624,529,546,530,1625,528,1625,529,1623,531,1624,530,547,529,1624,529,1625,529,1625,528,1625,529,1624,530,1623,531,547,530,1623,531,1623,530,547,529,547,530,1624,529,546,530,547,530,548,528,1625,529,547,530,546,531,546,530,547,530,547,530,546,531,547,530,546,530,547,530,547,530,545,531,547,530,547,530,546,530,547,530,547,529,547,529,547,530,546,531,1623,531,1625,529,1624,530,548,528,547,530};
static const BBtn b_57[] = {
  {"POWER", PR_RAW, 0, 0, 0, 38000, b_57_r0, 199},
  {"MODE", PR_RAW, 0, 0, 0, 38000, b_57_r1, 199},
  {"Fan Speed", PR_RAW, 0, 0, 0, 38000, b_57_r2, 199},
  {"TEMP+", PR_RAW, 0, 0, 0, 38000, b_57_r3, 199},
  {"TEMP-", PR_RAW, 0, 0, 0, 38000, b_57_r4, 199},
  {"Short Cut", PR_RAW, 0, 0, 0, 38000, b_57_r5, 199},
  {"Timer On", PR_RAW, 0, 0, 0, 38000, b_57_r6, 199},
  {"Timer Off", PR_RAW, 0, 0, 0, 38000, b_57_r7, 199},
  {"Sleep", PR_RAW, 0, 0, 0, 38000, b_57_r8, 199},
  {"SWING", PR_RAW, 0, 0, 0, 38000, b_57_r9, 199},
  {"MyTemp", PR_RAW, 0, 0, 0, 38000, b_57_r10, 199},
  {"LED", PR_RAW, 0, 0, 0, 38000, b_57_r11, 199},
  {"Off", PR_RAW, 0, 0, 0, 38000, b_57_r12, 199},
};
static const BRemote rem_58[] = {
  {"RG57H4", b_57, 13},
};
static const uint16_t b_59_r0[] = {3202,1591,383,411,383,1206,382,413,381,413,381,1207,381,412,382,1207,381,414,380,413,381,1209,379,1209,389,1199,389,406,387,1200,388,406,388,1201,387,1201,387,1202,386,409,385,409,385,411,383,409,385,1204,384,1205,383,411,383,1206,382,413,381,1206,382,1208,380,414,380,414,380,415,389,1198,379,416,388,1201,387,405,389,406,388,1201,387,1202,386,1202,386,408,386,1204,384,1206,382,410,384,1205,383,1207,381,1206,382,1207,381,1207,381,415,389,403,380,1208,380,415,389,405,389,405,389,406,388,1200,388,1201,387,1203,385,407,386,1202,386,1205,383,1203,385,1204,384,412,382,412,382,412,382,1206,382,413,381,413,381,414,380,413,381,1208,380,1208,380,415,389,1199,389,1200,388,1200,388,1201,387,1202,386,410,384,408,386,1202,386,409,385,410,384,411,383,410,384,411,383,1206,382,1206,382,1206,382,1208,380,1210,388,403,380,1210,388,1200,388,405,389,406,388,406,388,406,388,407,387,1203,385,408,386,409,385,1203,385,1203,385,410,384,1205,383,1207,381,411,383,1206,382,1206,382,413,381,414,380,1210,388,404,379,415,379,1209,389,405,389,406,388,1201,387,1201,387,1201,387,1202,386,1204,384,1203,385,1204,384,1205,383,412,382,412,382,413,381,412,382,412,382,414,380,414,380,413,381,414,380,1209,389,1199,389,1199,389,1200,388,1201,387,1201,387,408,386,1201,387,408,385,409,385,410,384,410,384,410,384,411,383,1205,383};
static const uint16_t b_59_r1[] = {3199,1594,380,414,380,1208,379,415,389,405,389,1201,386,407,386,1202,385,409,384,408,385,1203,384,1203,384,1204,383,410,383,1206,381,412,382,1208,379,1207,380,1209,389,404,390,406,387,405,389,406,387,1201,386,1202,385,408,385,1204,383,409,384,1204,383,1205,382,412,382,411,382,413,380,1206,382,414,380,1208,379,414,379,416,388,1201,386,1201,386,1201,386,408,385,1202,385,1204,383,1204,383,1206,381,1205,382,1207,380,1207,380,1208,390,405,388,405,389,406,387,406,387,406,387,407,386,408,385,1202,385,1204,383,1203,384,411,382,1205,382,1205,382,1207,380,1207,381,414,390,404,379,414,380,1210,388,406,387,408,385,406,387,408,385,1202,385,1203,384,409,384,1205,382,1205,382,1206,381,1206,381,1208,379,415,389,404,389,1199,388,407,386,406,387,407,386,408,385,409,384,1202,385,1204,383,1204,383,1204,383,1205,382,412,381,1208,379,1208,379,415,389,404,390,406,387,406,387,407,386,1200,387,409,384,408,385,1202,385,1205,383,410,383,1205,382,1205,382,412,381,1207,380,1207,380,415,389,404,379,1209,389,406,387,405,388,1200,387,408,385,408,385,1202,385,1204,383,1204,383,1204,383,1208,379,1207,380,1207,380,1208,379,416,388,405,388,407,386,407,386,407,386,407,386,407,386,408,385,408,385,1204,383,1204,383,1205,382,1205,382,1207,380,1208,379,414,379,1210,388,406,387,406,387,406,387,407,386,407,386,409,384,1203,384};
static const uint16_t b_59_r2[] = {3198,1595,389,404,379,1209,389,405,388,406,387,1200,387,407,386,1202,385,409,384,410,383,1203,384,1204,383,1179,408,413,380,1207,380,414,379,1209,389,1172,415,1200,387,406,387,409,384,408,385,409,384,1204,383,1205,382,410,383,1206,381,412,381,1206,381,1183,415,404,389,405,388,406,387,1200,387,406,387,1202,385,408,385,409,384,1204,383,1204,383,1205,382,412,381,1206,381,1181,406,414,390,1199,388,1173,414,1175,412,1175,412,1177,410,409,384,409,384,1205,382,410,383,411,382,412,381,412,382,412,381,1207,380,1209,389,405,389,1199,388,1174,413,1175,412,1175,412,1177,410,410,383,409,384,1205,382,412,381,412,381,413,380,413,380,1208,379,1207,380,414,379,1209,389,1173,414,1176,411,1177,410,1178,409,409,384,410,383,1206,381,411,382,412,381,412,382,413,381,413,380,1208,379,1208,379,1183,415,1173,414,1175,412,407,386,1203,384,1177,410,410,383,412,381,412,381,412,381,412,381,1207,380,414,379,414,379,1208,390,1199,388,405,388,1199,388,1200,387,409,384,1202,385,1177,410,410,383,412,381,1206,381,411,382,413,380,1207,380,413,380,414,380,1208,390,1199,388,1175,412,1175,412,1176,411,1179,408,1178,409,1179,408,412,381,413,380,414,379,414,379,415,389,404,379,414,379,416,388,405,389,1201,386,1200,387,1201,386,1177,410,1177,410,1179,408,411,382,1208,379,413,380,413,381,413,380,415,389,404,389,405,389,1199,388};
static const uint16_t b_59_r3[] = {3200,1592,382,412,381,1206,381,414,379,414,379,1208,379,416,388,1200,387,406,387,407,386,1202,385,1176,411,1178,409,410,383,1179,408,411,382,1182,416,1172,415,1172,415,404,389,406,387,407,386,408,385,1201,386,1177,410,409,384,1179,408,412,381,1179,408,1181,406,413,380,413,380,414,379,1209,389,405,388,1199,388,406,387,408,385,1202,385,1179,408,1178,409,412,381,1180,407,1182,405,414,379,1182,416,1174,413,1174,413,1176,411,1176,411,410,383,410,383,1204,383,412,381,412,381,412,381,413,380,1209,389,1172,415,1174,413,406,387,1174,413,1177,410,1177,410,1179,408,410,383,412,381,413,380,1206,381,413,380,414,379,414,379,415,389,1199,388,1175,412,407,386,1177,410,1178,409,1178,409,1179,408,1180,407,413,380,414,379,1208,379,415,389,405,388,407,386,406,387,407,386,1201,386,1177,410,1178,409,1179,408,1180,407,412,381,1180,407,1182,405,416,388,405,388,406,387,407,386,407,386,1201,386,409,384,409,384,1204,383,1179,408,411,382,1180,407,1182,405,416,388,1172,415,1173,414,406,387,407,386,1201,386,409,384,410,383,1203,384,410,383,412,381,1206,381,1183,415,1173,414,1173,414,1174,413,1175,412,1178,409,1178,409,410,383,411,382,411,382,412,381,412,381,413,380,413,380,416,388,403,380,1208,379,1184,414,1175,412,1175,412,1176,411,1177,410,411,382,1178,409,411,382,412,381,413,380,413,380,413,380,413,380,1208,379};
static const uint16_t b_59_r4[] = {3197,1595,390,404,379,1210,388,406,388,406,388,1201,386,407,386,1202,386,408,385,409,384,1205,383,1204,383,1206,382,412,381,1206,381,413,381,1207,381,1208,380,1209,389,405,389,406,387,405,389,407,387,1200,388,1201,386,408,385,1203,384,412,382,1205,383,1204,384,412,382,412,382,412,382,1207,381,413,381,1208,380,414,380,414,380,1209,389,1199,389,1201,386,1200,387,1202,385,408,385,409,384,1204,384,1205,383,1205,382,1205,383,412,382,413,380,1207,381,1209,389,406,388,405,389,405,389,405,389,1200,387,1203,384,1201,386,409,384,1203,384,1205,382,1205,383,1205,383,411,383,412,382,412,382,1207,380,414,380,415,389,404,379,417,387,1199,389,1199,389,1201,386,1204,384,1203,384,1203,384,1203,384,1204,384,411,382,412,382,412,382,412,382,413,380,413,381,414,380,414,380,1209,389,1199,389,1199,389,1200,387,1201,386,408,385,1203,385,1203,384,409,384,412,381,410,383,413,381,411,383,1206,382,413,381,413,380,1207,381,1209,389,404,379,1209,389,1199,389,407,386,1201,386,1202,385,408,385,410,384,1203,384,410,383,411,383,1204,384,412,382,412,382,1206,381,1207,380,1208,379,1211,387,1199,389,1201,386,1201,386,1202,385,408,385,410,383,409,385,409,385,410,384,410,384,410,383,411,383,412,382,1207,381,1206,382,1209,389,1197,380,1210,388,1199,389,406,387,1200,387,408,385,407,386,408,385,409,384,408,385,409,384,1204,384};
static const uint16_t b_59_r5[] = {3199,1594,380,414,379,1208,379,415,389,405,388,1200,387,406,387,1200,387,406,387,408,385,1202,385,1177,411,1178,409,410,383,1204,383,411,382,1206,381,1183,415,1172,405,416,388,405,388,405,389,406,387,1200,387,1174,413,409,384,1202,385,409,384,1203,384,1179,408,412,381,412,382,413,380,1206,382,413,381,1208,379,414,379,414,380,1209,389,1174,413,1176,411,1176,411,1177,410,410,383,410,383,1204,383,1179,408,1180,407,1181,406,414,379,414,380,1208,380,1184,414,406,387,405,388,407,386,408,385,1201,386,1203,384,1177,410,411,382,1205,382,1179,408,1181,406,1181,406,414,380,414,380,414,380,1210,388,406,387,406,387,406,387,408,385,1201,386,1176,411,1178,409,1179,408,1180,407,1180,407,1180,407,1182,405,415,389,405,388,405,389,405,389,406,387,406,387,407,386,407,386,1202,385,1176,411,1177,411,1179,409,1178,409,411,383,1205,383,1181,406,414,380,414,379,414,379,415,389,406,387,1200,387,406,387,406,387,407,386,1201,387,408,385,1202,385,1178,409,410,383,1204,383,1180,407,1181,406,413,380,1207,380,414,379,415,389,1199,388,405,388,409,384,1201,386,1176,411,1176,411,1178,409,1178,410,1179,408,1182,405,1181,406,413,381,415,389,404,390,404,379,415,389,406,387,405,389,406,387,406,387,1200,388,1175,412,1177,410,1177,410,1178,410,1179,408,412,382,1206,381,413,381,413,380,414,380,415,389,405,389,404,390,1200,387};
static const uint16_t b_59_r6[] = {3202,1591,383,411,382,1179,408,412,381,413,380,1181,406,415,389,1173,414,405,388,406,387,1174,413,1175,412,1177,410,409,384,1178,409,410,383,1181,406,1182,405,1182,405,414,379,415,389,405,388,405,388,1200,387,1175,412,407,386,1177,410,409,384,1177,410,1178,409,411,382,412,381,412,381,1181,406,414,380,1181,406,415,389,405,389,1174,413,1175,412,1175,412,1178,409,1177,410,409,384,410,383,1180,407,1180,407,1182,405,1182,405,415,389,405,388,1173,414,1175,412,408,385,407,386,409,384,410,383,1204,383,1178,409,1180,407,412,381,1206,381,1182,405,1183,415,1173,414,406,387,407,386,407,386,1174,414,408,385,408,385,410,383,409,384,1204,383,1179,408,1180,407,1181,406,1183,415,1173,415,1173,414,1175,412,407,386,407,386,409,384,408,385,408,385,409,384,410,383,410,383,1205,382,1180,407,1181,406,1183,415,1171,406,1184,414,405,388,1174,413,407,386,407,386,407,386,408,385,410,383,409,384,1203,384,410,383,411,382,1179,408,412,381,1207,380,1182,405,1183,415,404,390,1173,414,1175,412,408,385,1201,386,408,385,409,384,409,384,1178,409,411,382,1180,407,1180,407,1182,405,1183,415,1173,414,1174,413,1175,412,1177,410,409,384,408,386,409,384,410,383,411,382,411,382,411,383,412,381,413,380,1207,380,1182,405,1183,415,1174,413,1173,414,1174,413,407,386,1176,411,408,385,409,384,410,383,410,383,412,382,411,382,1206,381};
static const uint16_t b_59_r7[] = {3197,1570,414,405,388,1174,413,408,385,409,384,1177,410,409,384,1178,409,411,382,411,382,1181,406,1182,405,1183,415,405,388,1174,413,406,387,1176,411,1177,410,1177,410,412,381,411,382,412,381,412,381,1181,406,1183,415,404,389,1173,414,405,388,1175,412,1175,412,408,385,410,383,411,382,1179,408,411,382,1180,407,415,389,403,380,1183,415,1174,413,1174,413,1176,411,1176,411,408,385,409,384,1179,408,1180,407,1181,406,1183,415,406,387,405,388,1173,414,1175,412,407,386,409,384,408,385,411,382,1178,409,1180,407,1181,406,413,380,1182,405,1183,415,1174,413,1175,412,408,385,408,385,408,385,1178,409,409,384,410,383,412,381,411,382,1181,406,1182,405,1183,415,1173,414,1174,413,1175,412,1177,410,1177,410,411,382,410,383,412,381,413,380,412,381,412,381,414,379,415,389,1173,414,404,389,1174,413,1174,413,408,385,1176,411,410,383,1178,409,410,383,1179,408,413,380,414,390,1172,405,415,389,1174,413,405,388,406,387,1175,412,407,386,1176,411,1178,409,1180,407,411,382,1180,407,1183,415,403,380,1183,415,406,387,406,387,406,387,1175,412,409,384,1177,410,1178,409,1180,407,1180,407,1181,406,1182,416,1174,413,1174,413,407,386,409,384,408,385,410,383,409,384,410,383,412,381,411,382,412,381,1180,407,1181,406,1183,415,1173,414,1176,411,1175,412,410,383,1177,410,409,384,410,383,411,382,411,382,412,381,413,380,1181,406};
static const uint16_t b_59_r8[] = {3199,1593,381,413,380,1208,379,415,389,405,388,1200,387,408,385,1176,411,408,385,408,385,1203,384,1178,409,1179,408,413,380,1207,380,414,379,1182,416,1173,414,1174,413,407,386,408,385,408,385,408,385,1203,384,1179,408,411,382,1180,407,412,381,1181,406,1183,415,405,388,406,387,406,387,1200,387,408,385,1203,384,410,383,410,383,1205,382,1179,408,1181,406,413,380,1182,416,1176,411,405,388,1174,413,1177,410,1177,410,1177,410,1179,408,411,382,412,381,1206,381,413,380,414,379,416,388,405,388,405,388,406,387,406,387,1200,387,1177,410,1177,410,1179,408,1179,408,1181,406,1181,406,1182,405,415,389,406,387,408,385,407,386,408,385,1202,385,1178,409,1178,409,1179,408,1181,406,1182,405,1182,416,1173,414,406,387,406,387,406,387,407,386,408,385,409,384,411,382,410,383,1204,383,1181,406,1180,407,1182,416,1172,405,416,388,405,388,1200,387,407,386,408,385,409,384,409,384,409,384,1203,384,1179,408,412,381,1182,405,1182,405,414,379,1182,416,1175,412,406,387,409,384,1201,386,408,385,409,384,1204,383,411,382,411,382,1206,381,1181,406,413,380,1182,416,1175,412,1175,412,1175,412,1176,411,1177,410,1178,409,1180,407,413,380,412,381,414,379,413,380,414,379,414,379,415,389,405,388,405,388,1199,388,1176,411,1176,411,1177,410,1179,408,1181,406,413,380,1180,407,413,380,416,388,404,389,405,388,405,389,406,387,1200,387};
static const uint16_t b_59_r9[] = {3197,1570,414,406,387,1174,413,406,387,408,385,1176,411,409,384,1177,410,412,381,410,383,1180,407,1181,406,1183,415,404,379,1183,415,405,388,1175,412,1176,411,1176,411,409,384,411,382,410,383,411,382,1180,407,1180,407,414,379,1182,405,416,388,1173,414,1175,412,407,386,408,385,408,385,1177,410,410,383,1178,409,411,382,412,381,1181,406,1182,405,1183,415,406,387,1174,413,1175,412,407,386,1176,411,1178,409,1178,409,1180,407,1181,406,415,389,405,388,1173,414,405,388,406,387,407,386,407,386,407,386,408,385,409,384,1178,409,1179,408,1180,407,1181,406,1183,415,1172,415,1174,413,1174,413,408,385,382,411,409,384,409,384,409,384,411,382,1179,408,1180,407,1181,406,1182,416,1173,414,1174,413,1175,412,1177,410,383,410,410,383,410,383,385,408,412,381,385,408,386,407,1182,405,1182,416,1174,413,1176,411,1177,410,408,385,383,410,1178,409,410,383,385,408,411,382,386,407,412,381,1182,405,1183,415,405,388,1173,414,1174,413,381,412,1177,410,1176,411,409,384,410,383,1180,407,412,381,386,407,1182,405,414,390,404,379,1183,415,1174,413,406,387,1175,412,1177,410,1179,408,1178,409,1181,406,1183,415,1171,406,1183,415,405,388,406,387,407,386,408,385,407,386,409,384,408,385,409,384,411,382,1178,409,1179,408,1181,406,1181,406,1182,416,1173,414,407,386,1175,412,407,386,408,385,409,384,409,384,410,383,411,382,1179,408};
static const uint16_t b_59_r10[] = {3204,1564,410,385,408,1179,408,387,406,387,406,1181,417,379,414,1173,414,380,413,382,411,1174,413,1175,412,1176,411,385,408,1178,409,385,408,1181,406,1181,417,1171,416,378,415,379,414,379,414,380,413,1175,412,1176,411,382,411,1178,409,384,409,1180,407,1179,408,387,406,388,416,378,415,1173,414,379,414,1174,413,382,411,382,411,1176,411,1177,410,1178,409,385,408,1180,407,1181,406,388,405,1182,416,1175,412,1174,413,1175,412,1176,411,385,408,384,409,1179,408,411,382,386,407,386,407,389,415,376,407,388,416,379,414,1174,413,1175,412,1175,412,1177,462,1125,410,1179,408,1181,406,1181,406,387,406,388,416,379,414,378,415,379,414,1174,413,381,412,1177,410,1177,410,1178,409,1179,408,1182,416,1172,415,377,416,1174,413,380,413,379,414,380,413,380,413,381,412,381,412,1177,410,1178,409,1179,408,1181,417,1170,407,389,415,378,415,1173,414,379,414,380,413,380,413,381,412,381,412,1178,409,1178,409,384,409,1179,408,1180,407,387,417,1172,415,1173,414,379,414,380,413,1175,412,381,412,383,410,1177,410,384,409,385,408,1179,408,1180,407,387,406,1183,415,1173,414,1174,413,1175,412,1176,411,1177,410,1179,408,1179,408,387,406,386,407,387,406,388,416,377,416,379,414,378,415,379,414,381,413,1174,413,1176,411,1177,410,1178,409,1180,407,1182,416,377,406,1181,406,390,414,379,414,378,415,379,414,406,387,380,413,1175,412};
static const uint16_t b_59_r11[] = {3195,1597,388,407,386,1201,387,409,385,408,385,1204,383,410,384,1205,383,411,383,411,383,1205,383,1206,382,1207,381,414,380,1208,380,415,389,1198,379,1209,389,1200,388,406,387,406,388,408,385,407,386,1202,386,1203,384,409,385,1205,383,410,383,1205,383,1205,383,413,381,414,380,413,381,1208,380,416,388,1198,379,415,389,405,389,1201,387,1201,387,1201,386,407,386,1202,386,1202,385,410,384,1204,384,1204,383,1206,381,1206,381,1207,381,413,381,414,380,1208,380,415,389,405,389,406,388,405,389,1201,386,1201,387,1202,385,408,385,1203,385,1204,383,1205,382,1206,382,412,381,414,380,414,380,1208,380,414,380,416,388,404,379,415,389,1199,389,1200,387,1200,387,1201,387,1202,385,1202,386,1204,384,1204,383,411,383,412,382,412,382,413,381,413,381,412,382,413,381,414,380,1208,380,1209,389,1198,390,1200,387,1201,387,407,386,1202,385,1202,385,410,384,409,385,411,383,411,383,411,383,1205,383,413,381,412,382,1208,380,1208,380,414,380,1208,380,1209,389,406,387,1200,388,1201,386,407,386,409,384,1203,384,410,384,410,383,1205,383,410,384,411,383,1205,382,1207,381,1207,381,1207,381,1211,387,1199,389,1201,386,1200,387,407,387,407,386,408,385,410,383,410,384,410,384,410,383,410,383,412,382,1206,382,1206,382,1208,380,1207,381,1208,380,1210,388,405,389,1200,388,406,388,407,386,407,386,407,387,408,386,408,386,1203,385};
static const uint16_t b_59_r12[] = {3201,1564,410,411,382,1180,407,413,380,413,380,1182,405,414,379,1184,414,405,388,406,387,1175,412,1176,411,1177,410,409,384,1179,408,411,382,1181,406,1181,406,1182,405,415,389,405,388,405,388,406,387,1176,411,1175,412,408,385,1179,408,409,384,1179,408,1180,407,414,390,402,381,414,379,1183,415,405,388,1175,412,406,387,407,386,1175,412,1177,410,1178,409,411,382,1178,409,1180,407,414,379,1182,405,1183,415,1174,413,1174,413,1176,411,408,385,409,384,1177,410,411,382,410,383,412,381,412,381,412,381,413,380,413,380,1182,405,1184,414,1174,413,1175,412,1177,410,1177,410,1177,410,1179,408,412,381,412,381,412,381,414,379,414,379,414,379,415,389,1172,415,1174,413,1177,410,1175,412,1177,410,1179,408,1178,409,1180,407,413,380,413,380,414,379,414,379,414,379,415,389,1172,415,1174,413,1176,411,1176,411,1178,409,409,384,410,383,1179,408,412,381,412,381,413,380,414,379,415,389,1172,415,1173,414,406,387,1176,411,1176,411,409,384,1177,410,1178,409,412,381,411,382,1182,416,403,380,415,389,1172,415,405,388,405,388,1173,414,1176,411,408,385,1177,410,1179,408,1179,408,1179,408,1180,407,1182,405,1182,416,1173,414,406,387,408,385,407,386,408,385,408,385,408,385,409,384,410,383,410,383,1204,383,1180,407,1181,406,1182,405,1183,415,1174,413,407,386,1201,386,409,384,409,384,410,383,410,383,410,383,411,382,1180,407};
static const uint16_t b_59_r13[] = {3198,1569,415,378,415,1173,414,380,413,380,413,1175,412,382,411,1178,409,385,408,384,409,1180,407,1180,407,1181,406,388,405,1183,415,379,414,1174,413,1175,412,1178,409,383,410,384,409,385,408,385,408,1180,407,1181,406,389,415,1173,414,381,412,1174,413,1175,412,382,411,382,411,384,409,1178,409,385,408,1180,407,387,406,387,406,1182,405,1183,415,1173,414,380,413,1175,412,1176,411,383,410,1178,409,1179,408,1181,406,1183,415,1173,414,378,415,380,413,1174,413,381,412,382,411,382,411,384,409,383,410,383,410,384,409,1180,407,1180,407,1181,406,1183,415,1173,414,1175,412,1177,410,1177,410,384,409,384,409,386,407,385,408,386,407,1181,406,1182,416,378,415,1172,415,1174,413,1175,412,1176,411,1177,410,385,408,384,409,1179,408,386,407,387,406,388,416,378,415,378,405,1184,414,1174,413,1177,410,1179,408,1178,409,384,409,386,407,1181,406,386,407,388,405,388,405,388,405,389,415,1173,414,1174,413,380,413,1177,410,1176,411,384,409,1178,409,1179,408,387,406,386,407,1183,415,379,414,380,413,1173,414,381,412,381,412,1177,410,1178,409,385,408,1180,407,1180,407,1181,406,1183,415,1173,414,1175,412,1175,412,1176,411,383,410,383,410,384,409,385,408,386,407,386,407,386,407,386,407,387,406,1182,416,1173,414,1174,413,1176,411,1177,410,1177,410,384,409,1179,408,385,408,386,407,387,406,388,416,378,415,378,415,1173,414};
static const BBtn b_59[] = {
  {"POWER_ON", PR_RAW, 0, 0, 0, 38000, b_59_r0, 307},
  {"Off", PR_RAW, 0, 0, 0, 38000, b_59_r1, 307},
  {"TEMP+", PR_RAW, 0, 0, 0, 38000, b_59_r2, 307},
  {"TEMP-", PR_RAW, 0, 0, 0, 38000, b_59_r3, 307},
  {"MODE", PR_RAW, 0, 0, 0, 38000, b_59_r4, 307},
  {"LEFT_RIGHT", PR_RAW, 0, 0, 0, 38000, b_59_r5, 307},
  {"UP_DOWN", PR_RAW, 0, 0, 0, 38000, b_59_r6, 307},
  {"3D_AUTO", PR_RAW, 0, 0, 0, 38000, b_59_r7, 307},
  {"FAN_0SPEED", PR_RAW, 0, 0, 0, 38000, b_59_r8, 307},
  {"FAN_1SPEED", PR_RAW, 0, 0, 0, 38000, b_59_r9, 307},
  {"FAN_2SPEED", PR_RAW, 0, 0, 0, 38000, b_59_r10, 307},
  {"FAN_3SPEED", PR_RAW, 0, 0, 0, 38000, b_59_r11, 307},
  {"FAN_4SPEED", PR_RAW, 0, 0, 0, 38000, b_59_r12, 307},
  {"FAN_5SPEED", PR_RAW, 0, 0, 0, 38000, b_59_r13, 307},
};
static const BRemote rem_60[] = {
  {"SRK35ZS-W", b_59, 14},
};
static const uint16_t b_61_r0[] = {3027,3093,3029,4469,541,1675,542,557,542,1675,542,557,543,557,542,1675,542,1675,542,557,542,1674,543,557,542,556,543,556,543,1673,544,557,542,1674,542,557,542,556,543,557,542,557,542,558,541,557,543,557,542,557,542,557,543,555,544,557,542,557,542,557,542,556,543,558,541,557,542,556,544,558,541,1674,542,558,541,557,542,556,543,557,542,557,542,555,544,557,543,557,542,1674,542,556,543,557,542,557,542,557,542,558,541,557,542,557,542,556,543,556,543,556,543,556,543,556,543,557,542,1674,542,557,542,556,543,558,541,557,542,557,542,559,541,559,540,557,542,556,543,558,542,557,542,556,543,557,542,558,541,558,541,556,543,558,541,557,542,557,542,557,542,556,543,557,542,557,542,558,541,557,542,557,542,558,541,557,542,557,542,558,541,558,541,557,542,556,543,557,542,557,542,556,543,558,541,558,541,557,542,559,540,556,543,557,542,557,542,556,543,1676,540,558,541,1673,543,557,542,556,543,557,542,1675,541,557,542,1675,541,558,541,1674,542};
static const uint16_t b_61_r1[] = {3026,3097,3026,4471,542,1676,541,557,542,1675,542,559,540,556,543,1676,541,1675,542,558,541,1675,542,556,543,557,542,558,541,557,542,557,542,557,542,558,542,557,542,557,542,557,542,559,540,557,542,557,542,557,542,557,542,558,541,557,542,558,541,558,541,557,542,557,542,557,542,557,542,556,543,557,542,557,542,557,542,556,543,557,542,558,541,557,542,557,542,557,542,1674,542,557,542,556,543,557,542,557,542,558,542,557,542,557,542,557,542,556,543,557,542,557,542,557,542,557,542,1674,542,557,542,556,543,557,542,556,543,557,542,556,543,557,542,557,542,558,541,557,542,556,543,557,542,557,542,556,543,557,542,557,542,557,542,559,540,555,544,557,542,557,542,558,541,556,543,558,541,557,542,557,542,557,542,558,541,557,542,558,541,557,542,557,542,556,543,556,543,558,541,556,543,556,543,558,541,557,543,557,542,557,542,558,541,557,542,556,543,1673,543,557,542,1674,542,1675,541,1674,542,557,542,557,542,1673,543,556,543,1675,541,1674,542};
static const uint16_t b_61_r2[] = {3030,3095,3029,4469,545,1673,544,553,547,1673,544,555,545,554,545,1672,545,1671,546,556,544,1671,546,553,547,554,545,1672,545,1672,545,554,546,1671,545,553,546,553,546,554,545,554,545,553,547,553,546,555,544,554,545,554,545,554,545,555,545,554,545,554,545,553,546,553,547,554,546,554,545,554,545,1672,545,553,546,556,543,554,545,553,546,553,546,553,546,554,545,554,545,1671,545,554,546,554,545,554,545,555,544,555,545,554,546,553,546,554,545,553,546,554,545,553,546,555,544,553,546,1671,545,553,546,554,545,555,544,555,544,553,546,555,544,553,546,553,547,553,547,554,545,554,545,555,544,553,546,554,545,554,545,554,545,553,546,553,547,552,547,554,545,554,545,554,545,554,545,553,547,554,545,555,544,553,546,555,545,554,545,554,545,554,546,553,546,555,545,554,546,553,546,552,547,553,546,554,545,553,546,553,546,556,543,554,545,553,546,554,545,553,547,554,546,554,545,554,545,553,546,1671,545,553,546,553,546,554,545,554,546,553,546};
static const uint16_t b_61_r3[] = {3027,3095,3028,4468,542,1676,542,556,544,1674,543,556,543,555,545,1673,544,1674,543,556,544,1672,544,556,543,556,543,557,543,1672,545,556,544,1673,543,557,542,555,544,555,544,556,543,555,545,555,544,555,545,555,544,557,542,554,545,556,544,555,544,555,545,554,546,553,545,555,545,555,544,555,544,1672,544,555,545,555,544,555,544,554,545,555,544,556,543,554,545,556,543,1672,545,555,544,555,544,555,545,555,545,554,545,555,544,555,545,556,543,556,543,555,544,554,545,555,544,555,544,1672,545,557,542,556,544,555,544,555,544,554,545,554,545,555,545,555,544,554,546,555,544,555,544,555,545,554,545,554,545,554,545,555,544,555,544,554,545,554,545,556,543,554,545,555,544,554,545,555,544,554,546,554,546,555,545,553,546,554,545,554,545,555,544,554,545,554,545,555,544,554,545,553,546,554,545,556,543,553,546,557,542,554,545,556,543,554,545,554,545,554,545,555,545,1670,546,555,544,555,544,554,545,1671,545,555,545,554,545,554,545,1671,545};
static const uint16_t b_61_r4[] = {3026,3096,3028,4472,541,1676,541,557,542,1674,543,558,542,558,541,1674,543,1674,543,557,542,556,543,1675,542,1675,542,1676,541,557,542,557,542,1674,543,558,541,557,542,558,541,557,542,557,542,556,543,557,542,558,541,557,543,557,542,557,542,556,544,557,542,558,542,557,542,556,543,557,543,556,543,1674,543,556,543,556,543,556,544,558,541,557,543,557,542,556,543,558,542,1673,543,557,542,557,542,556,544,557,543,557,542,557,543,557,542,558,541,557,542,557,543,556,543,556,544,556,543,556,544,557,543,1672,544,557,542,557,543,557,543,557,543,557,543,557,542,559,540,556,544,556,544,557,542,557,543,557,542,557,542,556,544,557,542,557,542,557,543,557,542,556,544,557,542,557,543,557,543,556,544,557,543,557,543,558,542,557,543,556,543,559,540,557,543,557,543,557,542,556,544,558,541,558,542,557,543,557,542,557,542,557,543,558,542,557,542,557,542,1674,542,1674,542,557,543,1675,542,558,541,557,542,1674,541,1673,543,1675,541,1675,541,557,543};
static const uint16_t b_61_r5[] = {3052,3073,3051,4445,569,1649,569,530,570,1649,568,530,570,530,570,1648,569,1648,570,530,569,1650,543,554,570,530,569,530,571,1649,568,530,569,1648,570,530,570,530,569,530,569,530,570,532,568,530,570,530,569,529,546,554,570,530,570,530,570,530,570,530,569,530,570,530,570,530,569,531,569,530,569,1649,568,529,547,554,570,529,546,556,567,530,546,555,569,531,569,531,569,1648,569,530,570,530,569,530,546,554,570,531,569,531,569,530,569,530,569,531,569,529,570,531,569,530,570,529,571,1648,544,554,570,530,569,531,569,529,570,530,569,530,570,529,570,531,544,555,568,531,569,531,569,530,570,529,570,530,570,530,570,530,570,530,570,529,546,555,569,530,569,530,569,532,569,530,569,531,568,530,569,531,569,529,571,529,570,531,569,530,570,531,569,531,568,530,570,530,545,555,569,529,571,529,570,530,570,531,569,531,568,531,569,530,570,530,569,530,570,1647,570,1647,570,531,569,529,570,531,569,529,569,1648,570,530,569,1648,570,1646,545,555,545};
static const uint16_t b_61_r6[] = {3029,3095,3028,4472,541,1674,543,556,544,1673,544,555,545,554,546,1673,544,1673,544,556,544,1674,543,555,545,557,542,555,544,556,544,556,544,1673,544,557,543,557,543,555,545,555,545,556,544,555,544,556,544,556,544,555,544,557,543,555,545,555,545,555,544,556,544,556,543,556,543,556,543,555,544,1673,544,556,544,556,543,555,545,556,543,556,544,557,542,1673,544,555,545,1673,544,556,544,556,544,555,544,556,543,555,544,556,544,556,543,555,545,556,544,555,544,555,545,554,545,557,543,556,543,1674,543,556,543,557,543,556,543,555,545,554,545,555,545,556,544,555,544,555,545,555,544,557,543,555,544,556,544,555,545,555,544,555,545,555,544,554,546,555,545,555,545,555,545,556,543,555,545,557,542,555,544,556,543,555,544,556,544,555,544,556,544,556,544,555,544,555,545,556,543,554,545,556,544,555,544,555,545,556,544,555,544,555,545,555,544,556,544,1673,543,1673,544,555,544,556,544,1673,543,556,544,556,544,1674,542,1673,544,1673,544,555,544};
static const uint16_t b_61_r7[] = {3025,3098,3025,4472,566,1651,566,531,569,1651,566,531,568,532,568,1652,565,1651,566,532,568,1650,567,535,565,532,568,531,569,1651,567,533,567,1649,569,531,569,534,566,532,568,532,568,531,569,529,571,532,568,530,569,531,569,530,570,530,570,531,569,529,570,531,569,532,567,529,571,529,571,530,570,1647,570,529,571,529,570,529,571,529,571,529,571,529,571,530,570,529,571,1646,571,530,569,529,571,529,571,529,571,529,571,1647,570,528,571,528,572,529,570,529,571,528,572,528,571,528,572,1645,572,528,571,527,573,528,571,528,572,530,570,529,570,528,572,528,571,529,571,528,572,528,572,527,572,529,570,529,571,528,571,528,571,527,573,528,571,529,570,528,572,528,572,528,571,530,570,528,571,528,572,529,570,528,572,529,570,528,571,528,572,529,571,529,570,530,570,529,570,527,573,529,571,528,572,528,571,529,570,528,572,528,571,528,572,527,573,1646,571,528,571,528,572,529,571,1646,571,528,572,529,571,1646,571,1647,570,528,572,529,570,529,571};
static const BBtn b_61[] = {
  {"On", PR_RAW, 0, 0, 0, 38000, b_61_r0, 229},
  {"Off", PR_RAW, 0, 0, 0, 38000, b_61_r1, 229},
  {"25C", PR_RAW, 0, 0, 0, 38000, b_61_r2, 229},
  {"24C", PR_RAW, 0, 0, 0, 38000, b_61_r3, 229},
  {"Cool", PR_RAW, 0, 0, 0, 38000, b_61_r4, 229},
  {"Heat", PR_RAW, 0, 0, 0, 38000, b_61_r5, 229},
  {"Dry", PR_RAW, 0, 0, 0, 38000, b_61_r6, 229},
  {"Quiet", PR_RAW, 0, 0, 0, 38000, b_61_r7, 229},
};
static const BRemote rem_62[] = {
  {"AS18GD3HRA", b_61, 8},
};
static const uint16_t b_63_r0[] = {3826,1855,504,434,506,1381,507,433,507,1383,505,433,507,1381,507,433,507,1382,506,433,507,1383,505,435,505,1381,507,1383,505,433,507,1382,506,433,507,1382,506,1382,506,1381,507,1383,505,433,507,433,507,1382,506,1382,506,433,507,434,506,434,505,434,506,1383,505,434,506,435,505,433,507,1381,507,434,506,433,507,435,505,437,503,434,505,434,506,436,504,1381,507,436,504,435,505,433,507,1385,503,434,506,436,504,434,506,435,505,433,507,1383,505,437,503,1381,507,1384,504,434,506,434,506,434,506,436,504,434,506,435,505,433,507,434,506,433,507,433,507,434,506,434,505,434,506,1382,506,435,505,434,506,433,507,435,505,434,506,434,506,433,507,434,506,433,507,433,507,434,506,1383,505,434,506,435,505,433,507,438,502,434,506,435,505,435,505,435,505,436,504,433,507,1383,505,433,507,1382,506,1382,506,1383,505,1384,504,1382,506,434,506,435,505,436,504,1383,505,435,505,435,505,434,506};
static const uint16_t b_63_r1[] = {3827,1854,505,433,507,1382,506,434,506,1383,505,434,506,1410,478,433,507,1381,507,433,507,1383,505,435,505,1382,505,1383,505,435,505,1382,506,435,505,1383,505,1382,506,1384,504,1381,507,434,506,434,506,1382,506,1382,506,432,508,434,506,436,504,433,507,1382,506,435,505,434,506,436,504,1381,507,1383,505,434,506,1382,506,1381,507,434,506,1381,507,1381,507,1383,505,435,505,434,506,435,505,433,507,1383,505,435,505,435,505,434,506,1381,507,433,507,435,505,434,506,1382,506,433,507,434,506,433,507,438,502,434,506,433,507,434,506,434,506,432,508,435,505,434,506,433,507,433,507,1387,501,435,505,436,504,433,507,433,507,435,505,433,507,434,506,434,506,435,505,435,505,432,508,1410,478,461,479,432,508,435,505,434,506,433,507,436,504,434,506,434,506,433,507,435,505,1383,505,435,505,1381,507,1381,507,1382,506,1382,506,1381,507,435,505,433,507,433,507,461,478,1383,505,433,507,434,506};
static const uint16_t b_63_r2[] = {3778,1905,506,434,506,1381,507,436,504,1381,507,435,505,1382,506,432,508,1380,508,433,507,1381,507,432,508,1380,508,1381,507,432,508,1380,508,432,508,1380,508,1380,508,1380,508,1380,508,433,507,432,508,1380,508,1380,508,432,508,431,509,432,508,433,507,1380,508,432,508,432,508,431,509,433,507,1380,508,434,506,1380,508,1380,508,434,506,1381,507,1380,508,1380,508,433,507,431,509,433,507,1381,507,1381,507,432,508,431,509,431,509,1381,507,431,509,432,508,432,508,1381,507,431,509,432,508,432,508,432,508,432,508,432,508,435,505,432,508,432,508,431,509,432,508,432,508,434,506,1379,509,432,508,432,508,433,507,431,509,433,507,432,508,433,507,432,508,432,508,432,508,431,509,1380,508,432,508,432,508,1380,508,431,509,433,507,432,508,432,508,432,508,431,509,432,508,1381,507,431,509,1382,506,1380,508,1380,508,1380,508,1380,507,434,506,433,507,433,507,431,509,1380,508,1380,508,432,508};
static const uint16_t b_63_r3[] = {3828,1855,504,431,508,1382,506,434,506,1382,506,434,506,1381,507,432,508,1381,507,434,506,1381,560,381,506,1381,507,1410,478,433,507,1382,506,436,504,1381,507,1382,506,1409,479,1382,506,433,507,433,507,1381,507,1383,505,435,505,434,506,432,508,433,507,1381,507,433,507,435,505,432,508,1381,507,1382,506,433,507,1382,506,1380,508,433,507,1382,506,1379,509,1381,507,432,508,433,507,433,507,1381,507,1380,508,433,507,433,507,432,508,1380,508,432,508,432,508,434,506,1380,508,432,508,432,508,432,508,432,508,434,506,434,506,433,507,433,507,434,506,432,508,433,507,432,508,435,505,1383,505,433,507,433,507,434,506,433,507,433,507,432,508,433,507,434,506,433,507,433,507,432,508,1382,506,432,508,431,509,1381,507,433,507,434,506,434,506,432,508,433,507,434,506,433,507,1380,508,431,509,1381,507,1409,479,1382,506,1383,505,1381,507,435,505,433,507,433,507,1382,506,1380,508,1382,506,433,507};
static const uint16_t b_63_r4[] = {3828,1855,504,433,507,1380,508,433,507,1381,507,436,504,1381,507,432,508,1381,507,432,508,1380,508,434,506,1384,504,1409,479,434,506,1380,508,431,509,1380,508,1381,507,1385,503,1380,508,432,508,433,507,1381,507,1380,508,430,510,432,508,433,507,432,508,1381,507,432,508,432,508,432,508,1380,508,1380,508,433,507,1381,507,1380,508,432,508,1379,509,1378,510,1379,509,431,509,432,508,432,508,432,508,1379,509,1381,507,432,508,433,507,1381,507,430,510,434,506,432,508,1381,507,432,508,431,509,431,509,432,508,433,507,432,508,431,509,431,509,431,509,432,508,433,507,432,508,431,509,1382,506,431,509,432,508,432,508,432,508,430,510,431,509,431,509,431,509,432,508,433,507,431,509,1380,508,432,508,431,509,1379,509,431,509,432,508,432,508,432,508,431,509,430,510,431,509,1379,509,431,509,1380,508,1380,508,1379,509,1380,508,1379,509,432,508,431,509,431,509,431,509,1378,510,431,509,432,508};
static const uint16_t b_63_r5[] = {3777,1903,508,434,505,1381,507,432,508,1378,510,433,507,1379,509,432,508,1379,509,433,507,1382,506,432,508,1380,508,1381,507,433,507,1381,507,433,507,1381,507,1381,507,1379,509,1380,508,432,508,431,509,1380,508,1382,506,432,508,431,509,432,508,432,508,1380,508,432,508,433,507,432,508,1380,508,1381,507,432,508,1380,508,1381,507,431,509,1379,509,1381,507,1380,508,432,508,432,508,431,509,1380,508,1381,507,1380,508,431,509,432,508,1380,508,432,508,432,508,432,508,1379,509,431,509,432,508,432,508,431,509,432,508,1379,509,432,508,432,508,436,504,432,508,431,509,433,507,432,508,1379,509,433,507,432,508,431,509,432,508,432,508,433,507,433,507,432,508,431,509,433,507,432,508,1381,507,432,508,432,508,433,507,432,508,432,508,432,508,432,508,432,508,432,508,431,509,433,507,432,508,1380,508,1379,509,1381,507,1379,509,1380,508,432,508,433,507,433,507,1380,508,1380,508,432,508,1380,508};
static const uint16_t b_63_r6[] = {3827,1853,506,433,507,1382,506,436,504,1382,506,432,508,1381,507,435,505,1383,505,433,507,1381,560,379,561,1327,561,1328,560,380,506,1381,560,379,561,1356,531,1330,557,1328,507,1383,505,461,479,433,507,1382,506,1382,506,461,479,433,507,434,506,433,507,1382,506,433,507,433,507,432,508,1385,503,1382,506,434,506,1382,506,1381,507,436,504,1381,507,1381,507,1380,508,433,507,436,504,432,508,434,506,433,507,432,508,1380,508,433,507,1380,508,431,509,432,508,432,508,1380,508,431,509,432,508,1380,508,432,508,433,507,432,508,435,505,1381,507,433,507,1383,505,433,507,433,507,433,507,1409,479,432,508,432,508,434,506,432,508,432,508,433,507,434,506,432,508,432,508,433,506,433,507,1380,508,432,508,433,507,432,508,433,507,433,507,432,508,432,508,432,508,432,508,433,507,1380,508,433,507,1382,506,1381,507,1381,507,1380,508,1380,561,378,561,380,560,380,560,1328,560,1327,561,379,561,379,561};
static const uint16_t b_63_r7[] = {3777,1904,507,432,508,1382,506,435,505,1380,508,433,507,1382,506,434,506,1409,479,434,506,1409,479,432,508,1382,506,1383,505,432,508,1381,507,434,506,1381,507,1382,506,1380,508,1380,508,433,507,434,506,1381,507,1380,508,433,507,431,509,432,508,432,508,1382,506,432,508,432,508,433,507,1380,508,1381,507,432,508,1381,507,1380,508,431,509,1382,506,1380,508,1379,509,433,507,431,509,431,509,431,509,1379,509,1380,508,431,509,432,508,1380,508,431,509,430,510,431,509,1380,508,431,509,430,510,431,509,431,509,431,509,432,508,430,510,430,510,430,510,431,509,430,510,430,510,431,509,1379,509,431,509,431,509,431,509,431,509,431,509,431,509,431,509,431,509,430,510,430,510,431,509,1379,509,1379,509,432,508,431,509,430,509,430,510,431,509,431,509,431,509,431,509,431,508,1381,507,431,509,1379,509,1379,509,1382,506,1378,510,1379,509,431,509,431,509,431,509,1379,509,1378,510,1378,510,430,510};
static const uint16_t b_63_r8[] = {3778,1903,508,432,508,1380,508,431,509,1379,509,430,510,1379,509,431,509,1382,506,432,508,1378,510,431,509,1379,509,1381,507,431,509,1379,509,432,508,1379,509,1379,509,1380,508,1381,507,431,509,431,509,1380,508,1379,509,430,510,431,509,431,509,432,508,1379,509,430,510,432,508,431,508,1379,509,430,510,1379,509,1381,507,430,509,432,508,431,509,431,509,1378,510,431,509,431,509,431,509,1380,508,1378,510,432,508,430,510,1379,509,1380,508,431,509,432,508,432,508,1379,509,432,508,431,509,431,509,432,508,431,509,431,509,431,508,431,509,432,508,431,509,431,509,431,509,431,509,1381,507,430,510,431,509,431,509,431,509,431,509,431,509,431,509,430,510,431,509,431,509,432,508,1378,510,431,509,431,509,430,510,431,509,432,508,431,509,431,509,430,510,431,509,431,509,1379,509,431,509,1379,509,1380,508,1379,509,1379,509,1379,509,432,508,431,509,431,509,1379,509,431,509,431,509,1379,509};
static const uint16_t b_63_r9[] = {3829,1851,508,436,504,1382,506,434,506,1381,507,435,505,1409,479,435,505,1382,506,434,506,1382,506,433,507,1385,503,1381,506,433,507,1384,504,434,506,1382,506,1382,506,1382,506,1381,507,432,508,434,506,1382,506,1383,505,438,502,434,506,434,506,436,504,1383,505,434,506,433,507,434,506,1382,506,1382,506,435,505,1383,505,1382,506,434,506,1381,507,1384,504,1382,506,433,507,435,505,432,508,434,506,435,505,433,507,1380,508,433,507,1381,507,433,560,379,561,379,561,1331,557,379,561,379,561,379,561,379,561,380,560,380,560,380,560,378,562,1328,506,1381,507,434,506,433,507,432,508,1381,507,432,508,434,506,432,508,431,509,431,509,431,509,432,508,431,509,432,508,433,507,433,507,1379,509,432,508,1382,506,1381,507,1379,509,1379,509,430,510,1380,508,1379,509,430,510,432,508,1378,510,431,509,1380,508,1379,509,1380,507,1380,508,1381,507,433,507,433,507,431,509,1380,508,1381,507,1380,508,431,509};
static const uint16_t b_63_r10[] = {3828,1852,507,433,507,1380,508,461,479,1382,506,433,507,1383,505,433,507,1380,508,434,506,1383,505,434,506,1384,504,1381,507,434,506,1382,506,434,506,1383,505,1382,559,1329,559,1327,561,379,561,381,559,1327,561,1329,559,379,561,379,560,379,561,379,561,1329,559,380,560,379,561,379,561,1328,560,1329,559,379,561,1328,559,1329,559,378,562,1330,558,1328,560,1328,560,381,559,379,561,378,562,380,560,380,560,380,560,1328,560,380,560,1328,560,383,557,379,561,380,560,1327,507,434,559,381,559,379,507,433,507,434,506,434,506,433,507,434,506,433,560,1328,507,433,507,433,507,433,507,1382,506,433,507,432,508,432,508,432,508,434,506,433,507,433,507,434,506,434,506,432,508,433,507,1381,507,431,509,1381,507,1381,507,1380,508,1381,507,431,509,1381,507,1381,507,432,508,433,507,1409,479,432,508,1379,509,1379,509,1382,506,1380,508,1380,508,432,508,433,507,432,508,1382,506,1379,509,432,508,432,508};
static const uint16_t b_63_r11[] = {3827,1880,532,380,507,1382,506,433,507,1381,507,433,507,1384,504,433,507,1381,507,434,506,1384,504,434,506,1382,506,1381,507,434,506,1382,506,432,508,1382,506,1381,507,1383,505,1383,505,433,507,431,509,1381,507,1379,509,433,507,433,507,433,507,433,507,1381,507,432,508,431,509,431,509,1381,507,1380,508,432,508,1380,508,1380,508,431,509,1379,509,1379,509,1379,509,431,509,433,507,433,507,431,509,431,509,431,509,1380,508,431,509,1379,509,432,508,432,508,433,507,1379,509,432,508,433,507,432,508,430,510,432,508,431,509,432,508,432,508,432,508,430,510,432,508,431,509,433,507,1380,508,431,509,431,509,432,508,435,505,431,509,432,508,430,510,431,509,430,510,431,509,432,508,1379,509,431,508,433,507,432,508,432,508,430,510,431,509,1379,509,1379,509,431,509,432,508,1380,508,432,508,1380,508,1380,508,1380,508,1380,508,1379,509,432,508,432,508,431,509,431,509,431,509,1379,509,432,508};
static const uint16_t b_63_r12[] = {3827,1855,505,434,506,1383,505,434,506,1382,506,434,506,1383,505,435,505,1383,505,433,507,1383,505,435,505,1382,506,1383,505,434,506,1383,505,433,506,1382,506,1384,504,1383,505,1382,506,435,505,434,506,1381,507,1383,505,434,506,434,506,434,506,436,504,1382,506,434,506,433,507,433,507,1382,506,1380,508,434,506,1385,503,1383,505,435,505,1382,506,1381,507,1382,506,433,507,434,506,432,508,1382,506,1381,507,434,506,432,508,433,507,1381,507,436,504,434,506,1380,508,1383,505,433,507,433,507,435,505,434,506,433,507,434,506,434,506,435,505,434,506,433,507,434,506,433,507,433,507,1383,505,434,506,435,505,433,507,433,507,437,503,434,506,434,506,434,506,435,505,434,506,434,506,1382,506,1383,504,434,506,1382,506,434,506,436,504,434,506,435,505,434,506,434,506,436,504,1383,505,435,505,1385,503,1383,505,1382,506,1383,505,1383,505,434,506,434,506,435,505,1383,505,1383,505,1385,503,435,505};
static const uint16_t b_63_r13[] = {3777,1903,510,431,509,1378,510,431,509,1379,509,431,509,1380,508,430,510,1379,509,431,509,1378,509,431,509,1379,509,1380,508,430,510,1379,509,431,509,1380,508,1379,509,1379,509,1379,509,431,509,431,509,1379,509,1381,507,433,507,432,508,431,509,431,509,1379,509,433,506,432,508,432,508,1380,508,1380,508,431,509,1380,508,1379,509,431,509,1379,509,1384,504,1380,508,432,508,431,509,432,508,1382,506,1382,506,432,508,432,508,431,509,1380,508,431,509,433,507,432,508,1379,509,431,509,431,509,432,508,431,509,431,509,432,508,431,509,431,509,430,510,431,509,1380,508,1378,510,1378,510,1379,509,431,509,431,509,431,509,431,509,432,508,431,509,431,509,430,510,430,510,431,509,430,510,1378,510,431,509,1379,509,1379,509,431,509,430,510,432,508,430,510,431,509,431,509,431,509,1380,508,430,510,1379,509,1378,510,1380,508,1379,509,1379,509,430,510,430,510,431,509,430,510,1379,509,431,509,430,510};
static const BBtn b_63[] = {
  {"ON", PR_RAW, 0, 0, 0, 38000, b_63_r0, 211},
  {"Off", PR_RAW, 0, 0, 0, 38000, b_63_r1, 211},
  {"TEMP DWN", PR_RAW, 0, 0, 0, 38000, b_63_r2, 211},
  {"TEMP UP", PR_RAW, 0, 0, 0, 38000, b_63_r3, 211},
  {"Lights", PR_RAW, 0, 0, 0, 38000, b_63_r4, 211},
  {"Ion", PR_RAW, 0, 0, 0, 38000, b_63_r5, 211},
  {"1 HR OFF", PR_RAW, 0, 0, 0, 38000, b_63_r6, 211},
  {"MEGA COOL", PR_RAW, 0, 0, 0, 38000, b_63_r7, 211},
  {"Mode", PR_RAW, 0, 0, 0, 38000, b_63_r8, 211},
  {"ON Timer", PR_RAW, 0, 0, 0, 38000, b_63_r9, 211},
  {"OFF Timer", PR_RAW, 0, 0, 0, 38000, b_63_r10, 211},
  {"Cancel", PR_RAW, 0, 0, 0, 38000, b_63_r11, 211},
  {"Fan", PR_RAW, 0, 0, 0, 38000, b_63_r12, 211},
  {"Louvers", PR_RAW, 0, 0, 0, 38000, b_63_r13, 211},
};
static const BRemote rem_64[] = {
  {"CVP10MX", b_63, 14},
};
static const BBrand brand_65[] = {
  {"LG", rem_36, 1},
  {"Samsung", rem_38, 1},
  {"Midea", rem_40, 1},
  {"Gree", rem_42, 1},
  {"Fujitsu", rem_44, 1},
  {"TCL", rem_46, 1},
  {"Daikin", rem_48, 1},
  {"Panasonic", rem_50, 1},
  {"Electrolux", rem_52, 1},
  {"Carrier", rem_54, 1},
  {"Hisense", rem_56, 1},
  {"Toshiba", rem_58, 1},
  {"Mitsubishi", rem_60, 1},
  {"Haier", rem_62, 1},
  {"Sharp", rem_64, 1},
};

static const BCat BUILTIN_CATS[] = {
  {"TVs", brand_34, 7},
  {"Ar-condicionado", brand_65, 15},
};
static const int NUM_BUILTIN_CATS = sizeof(BUILTIN_CATS) / sizeof(BUILTIN_CATS[0]);
