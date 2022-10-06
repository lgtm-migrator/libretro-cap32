/****************************************************************************
 *  Caprice32 libretro port
 *
 *  Copyright David Colmenero - D_Skywalk (2019-2022)
 *
 *  Redistribution and use of this code or any derivative works are permitted
 *  provided that the following conditions are met:
 *
 *   - Redistributions may not be sold, nor may they be used in a commercial
 *     product or activity.
 *
 *   - Redistributions that are modified from the original source must include the
 *     complete source code, including the source code for all components used by a
 *     binary built from the modified sources. However, as a special exception, the
 *     source code distributed need not include anything that is normally distributed
 *     (in either source or binary form) with the major components (compiler, kernel,
 *     and so on) of the operating system on which the executable runs, unless that
 *     component itself accompanies the executable.
 *
 *   - Redistributions must reproduce the above copyright notice, this list of
 *     conditions and the following disclaimer in the documentation and/or other
 *     materials provided with the distribution.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 *  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 *  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 *  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 *  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 *  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 *  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 *  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 *  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************************/

#include <libretro.h>
#include "database.h"

// clean-cpc-db CRC database
t_file_entry dbinfo[] = {
   { // 1942.rmp
      {0xab928e90},
      {RETROK_3, DB_KEEP, DB_KEEP, RETROK_2, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
      -1,
   },
   { // 1943.rmp
      {0x8769d0b1},
      {RETROK_RSHIFT, RETROK_RETURN, RETROK_2, RETROK_1, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, RETROK_RETURN, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {0, 1, -1, -1, -1, -1, -1, -1, -1, 1, -1, -1, -1, -1},
      -1,
   },
   { // 3D Grand Prix (1985).rmp
      {0xe1e61287},
      {RETROK_SLASH, RETROK_SPACE, DB_KEEP, RETROK_SPACE, RETROK_EXCLAIM, RETROK_EXCLAIM, DB_KEEP, DB_KEEP, RETROK_QUOTE, RETROK_SPACE, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {2, 3, -1, -1, -1, -1, -1, -1, 4, 3, -1, -1, -1, -1},
      -1,
   },
   { // Abadia Del Crimen.rmp
      {0xaa05ed4a, 0xd37cf8e7},
      {RETROK_z, RETROK_s, DB_CLEAN, RETROK_SPACE, DB_CLEAN, DB_CLEAN, RETROK_k, RETROK_l, RETROK_a, RETROK_n, DB_CLEAN, DB_CLEAN, DB_CLEAN, DB_CLEAN},
      {5, 6, -1, 7, -1, -1, 8, 9, 10, 11, -1, -1, -1, -1},
      0,
   },
   { // Abbey Of Crime.rmp
      {0xbf188ce3, 0x6e5f98ff},
      {RETROK_z, RETROK_y, DB_CLEAN, RETROK_SPACE, DB_CLEAN, DB_CLEAN, RETROK_k, RETROK_l, RETROK_a, RETROK_n, DB_CLEAN, DB_CLEAN, DB_CLEAN, DB_CLEAN},
      {12, 13, -1, 14, -1, -1, 15, 16, 17, 18, -1, -1, -1, -1},
      0,
   },
   { // Abu Simbel Profanation (1986).rmp
      {0x7037c06c},
      {RETROK_q, DB_CLEAN, DB_CLEAN, RETROK_2, DB_CLEAN, DB_CLEAN, RETROK_o, RETROK_p, RETROK_a, DB_CLEAN, DB_CLEAN, DB_CLEAN, DB_CLEAN, DB_CLEAN},
      {19, -1, -1, -1, -1, -1, -1, -1, 20, -1, -1, -1, -1, -1},
      -1,
   },
   { // Army Moves (1986).rmp
      {0xe49fc694, 0x3db8fc89},
      {RETROK_RALT, RETROK_2, DB_KEEP, RETROK_3, RETROK_q, RETROK_a, RETROK_o, RETROK_p, RETROK_SPACE, RETROK_1, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {21, 22, -1, -1, -1, -1, -1, -1, 23, 24, -1, -1, -1, -1},
      -1,
   },
   { // Asterix and the Magic Carpet.rmp
      {0x392fbb50, 0x33e38c87, 0x31d37ba2},
      {DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
      1,
   },
   { // Aventura Original.rmp
      {0xb0c8cc9e},
      {DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
      0,
   },
   { // Barbarian (Palace Software) (1987).rmp
      {0xc761e738, 0x60e1f5f0},
      {DB_KEEP, DB_KEEP, DB_KEEP, RETROK_RETURN, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, RETROK_SPACE, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {-1, -1, -1, 25, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
      -1,
   },
   { // Batman (1986).rmp
      {0x814d462},
      {RETROK_KP1, DB_KEEP, DB_KEEP, RETROK_RETURN, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, RETROK_SPACE, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {26, -1, -1, -1, -1, -1, -1, -1, -1, 27, -1, -1, -1, -1},
      -1,
   },
   { // Beach Buggy.rmp
      {0x10bd9015},
      {204, DB_KEEP, DB_KEEP, RETROK_2, DB_CLEAN, DB_KEEP, DB_KEEP, DB_KEEP, 200, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {28, -1, 25, -1, -1, -1, -1, -1, 29, -1, -1, -1, -1, -1},
      -1,
   },
   { // Boloncio (1986).rmp
      {0x5fc8032d},
      {DB_CLEAN, DB_CLEAN, DB_CLEAN, RETROK_s, DB_CLEAN, DB_CLEAN, RETROK_KP1, RETROK_KP3, RETROK_SPACE, DB_CLEAN, DB_CLEAN, DB_CLEAN, DB_CLEAN, DB_CLEAN},
      {-1, -1, -1, 30, -1, -1, -1, -1, 29, -1, -1, -1, -1, -1},
      -1,
   },
   { // Boulder Dash (1985).rmp
      {0x46b5fe2c, 0xfed514e8, 0x474a9722, 0x5ebc61a1, 0x48fcdc1e},
      {RETROK_1, DB_KEEP, DB_KEEP, RETROK_RETURN, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {-1, -1, -1, 25, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
      -1,
   },
   { // Bruce Lee (1984).rmp
      {0xcf73ebd6},
      {DB_KEEP, DB_KEEP, DB_KEEP, RETROK_RETURN, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {-1, -1, -1, 25, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
      -1,
   },
   { // Bubble Bobble 1-2.rmp
      {0x95d9f222, 0xdc214555},
      {RETROK_SPACE, DB_CLEAN, DB_CLEAN, RETROK_1, DB_CLEAN, DB_CLEAN, RETROK_o, RETROK_p, RETROK_q, RETROK_a, DB_CLEAN, DB_CLEAN, DB_CLEAN, DB_CLEAN},
      {31, -1, -1, 32, -1, -1, -1, -1, 29, 33, -1, -1, -1, -1},
      -1,
   },
   { // Chibi Akuma's Episode 1 Invasion (v1.666).rmp
      {0xd851fde0, 0x5c3cfc2c},
      {RETROK_i, RETROK_RETURN, RETROK_p, DB_CLEAN, RETROK_UP, RETROK_DOWN, RETROK_LEFT, RETROK_RIGHT, RETROK_o, DB_CLEAN, DB_CLEAN, DB_CLEAN, DB_CLEAN, DB_CLEAN},
      {34, 1, 35, -1, -1, -1, -1, -1, 36, -1, -1, -1, -1, -1},
      -1,
   },
   { // Cobra - Loriciels.rmp
      {0x504d8d95},
      {DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
      2,
   },
   { // Colossus Mahjong (1987).rmp
      {0xaf529a6a},
      {DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
      3,
   },
   { // Comando Tracer (1988).rmp
      {0x261b785},
      {DB_KEEP, DB_KEEP, DB_KEEP, RETROK_0, RETROK_q, RETROK_a, RETROK_o, RETROK_p, RETROK_SPACE, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {-1, -1, -1, -1, -1, 37, -1, -1, 38, -1, -1, -1, -1, -1},
      -1,
   },
   { // Cutthroats (1984).rmp
      {0x5d21b329},
      {DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
      4,
   },
   { // Donkey Kong.rmp
      {0x9b7c1f2},
      {DB_CLEAN, DB_CLEAN, DB_CLEAN, RETROK_1, RETROK_q, RETROK_a, RETROK_LEFTBRACKET, RETROK_RIGHTBRACKET, RETROK_SPACE, DB_CLEAN, DB_CLEAN, DB_CLEAN, DB_CLEAN, DB_CLEAN},
      {-1, -1, 32, -1, -1, -1, -1, -1, 29, -1, -1, -1, -1, -1},
      -1,
   },
   { // Enchanter (1984).rmp
      {0xcca0759},
      {DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
      5,
   },
   { // Fernando Martin - Basket Master (1987).rmp
      {0x708351db, 0x471c5eac},
      {RETROK_3, DB_KEEP, DB_KEEP, RETROK_1, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, RETROK_SPACE, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
      -1,
   },
   { // Gabrielle(fr).rmp
      {0x20dcbf76},
      {DB_KEEP, DB_KEEP, DB_KEEP, RETROK_SPACE, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {-1, -1, -1, 25, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
      -1,
   },
   { // Game Over (1987).rmp
      {0x4d723f39, 0x8d8e3122},
      {RETROK_RALT, RETROK_2, DB_KEEP, RETROK_3, RETROK_q, RETROK_a, RETROK_o, RETROK_p, RETROK_SPACE, RETROK_1, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {39, 22, -1, -1, -1, -1, -1, -1, 38, 24, -1, -1, -1, -1},
      -1,
   },
   { // Ghostbusters.rmp
      {0xc8149ef6, 0xe71162a4},
      {RETROK_e, RETROK_1, RETROK_3, RETROK_RETURN, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, RETROK_2, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {40, 24, 41, 42, -1, -1, -1, -1, -1, 22, -1, -1, -1, -1},
      -1,
   },
   { // Gnome Ranger (1987).rmp
      {0xb0a79287},
      {DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
      6,
   },
   { // Gryzor.rmp
      {0xa2b01221},
      {DB_KEEP, RETROK_SPACE, DB_KEEP, RETROK_RETURN, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, RETROK_SPACE, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
      -1,
   },
   { // Hair Boy.rmp
      {0xca1ccfa9},
      {DB_KEEP, DB_KEEP, DB_KEEP, RETROK_SPACE, DB_KEEP, DB_KEEP, RETROK_LEFT, RETROK_RIGHT, RETROK_SPACE, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {-1, -1, -1, -1, -1, -1, -1, -1, 29, -1, -1, -1, -1, -1},
      -1,
   },
   { // Harrier Attack (1984).rmp
      {0x762a657},
      {RETROK_SPACE, RETROK_RETURN, RETROK_3, RETROK_2, RETROK_KP_PERIOD, RETROK_KP_ENTER, RETROK_z, RETROK_x, RETROK_KP0, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {43, 42, 41, 22, -1, -1, 44, 45, 46, -1, -1, -1, -1, -1},
      -1,
   },
   { // Head over Hells.rmp
      {0xc613efa0},
      {RETROK_KP1, RETROK_KP5, DB_KEEP, RETROK_RETURN, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, RETROK_KP8, RETROK_SPACE, RETROK_SPACE, DB_KEEP, DB_KEEP},
      {26, 28, -1, -1, -1, -1, -1, -1, -1, 47, 48, 48, -1, -1},
      -1,
   },
   { // Hitchhiker's Guide to the Galaxy, The (1984).rmp
      {0xa523527c},
      {DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
      7,
   },
   { // Ikari Warriors.rmp
      {0x36d943ea, 0xe7df0e60, 0x3e88f3f7},
      {RETROK_t, DB_KEEP, RETROK_2, RETROK_1, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, RETROK_3, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {49, -1, 50, 32, -1, -1, -1, -1, -1, 51, -1, -1, -1, -1},
      -1,
   },
   { // Infidel (1986).rmp
      {0xdc3c19fc},
      {DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
      8,
   },
   { // Jungle Book (1989).rmp
      {0xccc3a70b},
      {DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
      9,
   },
   { // Klax.rmp
      {0x96b53a41},
      {RETROK_a, DB_CLEAN, DB_CLEAN, RETROK_0, DB_CLEAN, DB_CLEAN, RETROK_o, RETROK_p, RETROK_SPACE, RETROK_q, DB_CLEAN, DB_CLEAN, DB_CLEAN, DB_CLEAN},
      {52, -1, -1, -1, -1, -1, -1, -1, 53, 54, -1, -1, -1, -1},
      -1,
   },
   { // Knight Lore.rmp
      {0xa2d5c9db},
      {RETROK_q, RETROK_2, RETROK_3, RETROK_0, DB_CLEAN, DB_CLEAN, RETROK_z, RETROK_x, RETROK_a, RETROK_1, DB_CLEAN, DB_CLEAN, DB_CLEAN, DB_CLEAN},
      {29, 26, -1, -1, -1, -1, 15, 16, 17, 26, -1, -1, -1, -1},
      -1,
   },
   { // Lancelot (1988).rmp
      {0xc5ad3e3e},
      {DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
      6,
   },
   { // Leather Goddesses of Phobos (1986).rmp
      {0xeb127e47},
      {DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
      10,
   },
   { // Manic Miner.rmp
      {0xcd9dbf9c},
      {RETROK_RETURN, DB_KEEP, DB_KEEP, RETROK_RETURN, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
      -1,
   },
   { // Match Day II.rmp
      {0x35c029d5},
      {RETROK_RETURN, DB_KEEP, DB_KEEP, RETROK_RETURN, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
      -1,
   },
   { // Miss Input 1.rmp
      {0xe8d15029},
      {DB_CLEAN, RETROK_m, RETROK_2, RETROK_1, DB_CLEAN, DB_CLEAN, RETROK_o, RETROK_p, RETROK_q, DB_CLEAN, DB_CLEAN, DB_CLEAN, DB_CLEAN, DB_CLEAN},
      {-1, 55, -1, -1, -1, -1, -1, -1, 29, -1, -1, -1, -1, -1},
      -1,
   },
   { // Miss Input 2.rmp
      {0x7c096b33},
      {DB_CLEAN, RETROK_m, RETROK_2, RETROK_1, DB_CLEAN, DB_CLEAN, RETROK_w, RETROK_e, RETROK_q, DB_CLEAN, DB_CLEAN, DB_CLEAN, DB_CLEAN, DB_CLEAN},
      {-1, 55, -1, -1, -1, -1, -1, -1, 29, -1, -1, -1, -1, -1},
      -1,
   },
   { // Murder on the Atlantic (1985).rmp
      {0xb40c5cb2},
      {DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
      11,
   },
   { // Myth (1989).rmp
      {0x4d8464d3},
      {RETROK_j, RETROK_i, DB_CLEAN, RETROK_SPACE, DB_CLEAN, DB_CLEAN, RETROK_q, RETROK_w, RETROK_o, RETROK_i, DB_CLEAN, DB_CLEAN, DB_CLEAN, DB_CLEAN},
      {56, -1, -1, 57, -1, -1, -1, -1, 58, 59, -1, -1, -1, -1},
      -1,
   },
   { // Nanako Descends to Hell.rmp
      {0x6c2cdcea},
      {DB_CLEAN, DB_CLEAN, DB_CLEAN, RETROK_SPACE, RETROK_q, RETROK_a, RETROK_o, RETROK_p, RETROK_SPACE, DB_CLEAN, DB_CLEAN, DB_CLEAN, DB_CLEAN, DB_CLEAN},
      {-1, -1, -1, -1, -1, -1, -1, -1, 60, -1, -1, -1, -1, -1},
      -1,
   },
   { // Navy Moves (1988).rmp
      {0xacf62400, 0x9299697c},
      {RETROK_m, RETROK_2, DB_KEEP, RETROK_3, RETROK_q, RETROK_a, RETROK_o, RETROK_p, RETROK_SPACE, RETROK_1, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {61, 22, -1, -1, -1, -1, -1, -1, 28, 24, -1, -1, -1, -1},
      -1,
   },
   { // Nemesis.rmp
      {0xb35ed50},
      {RETROK_RETURN, RETROK_m, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {62, 55, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
      -1,
   },
   { // Oh Mummy (1984).rmp
      {0x2ff420da, 0x6abd6ce2},
      {DB_KEEP, DB_KEEP, RETROK_c, RETROK_p, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
      -1,
   },
   { // Planetfall (1983).rmp
      {0x9af2061b},
      {DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
      12,
   },
   { // Prince of Persia.rmp
      {0xf964db5d, 0xa14a1e0f, 0xb9d14a6d, 0x18d230b1},
      {DB_KEEP, DB_KEEP, DB_KEEP, RETROK_ESCAPE, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, RETROK_SPACE, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {-1, -1, -1, 35, -1, -1, -1, -1, -1, 63, -1, -1, -1, -1},
      -1,
   },
   { // Robocop.rmp
      {0xb6017864, 0xda1142c4, 0xf70eee66},
      {RETROK_SPACE, RETROK_SPACE, DB_KEEP, RETROK_1, RETROK_q, RETROK_a, RETROK_k, RETROK_l, RETROK_x, RETROK_SPACE, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
      -1,
   },
   { // Rygar (1987).rmp
      {0x558abe44},
      {DB_CLEAN, DB_CLEAN, DB_CLEAN, RETROK_1, RETROK_q, RETROK_a, RETROK_o, RETROK_p, RETROK_SPACE, DB_CLEAN, DB_CLEAN, DB_CLEAN, DB_CLEAN, DB_CLEAN},
      {-1, -1, -1, -1, -1, -1, -1, -1, 64, -1, -1, -1, -1, -1},
      -1,
   },
   { // Secte Noire, La (1990).rmp
      {0x95b94081},
      {DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
      13,
   },
   { // Shinobi.rmp
      {0x6f1e3eb0, 0xbd6c0af},
      {RETROK_SPACE, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {65, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
      -1,
   },
   { // Shinobu.rmp
      {0x37ee404f},
      {DB_KEEP, DB_KEEP, RETROK_ESCAPE, RETROK_g, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
      -1,
   },
   { // Sorcerer (1984)(Infocom)[CPM].rmp
      {0x636a30d8},
      {DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
      14,
   },
   { // Spellbreaker (1985).rmp
      {0xd519f3ce},
      {DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
      15,
   },
   { // Suspended (1983).rmp
      {0x819d6ed7},
      {DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
      16,
   },
   { // Target Renegade.rmp
      {0xe4154a1f},
      {DB_KEEP, DB_KEEP, RETROK_ESCAPE, RETROK_1, RETROK_q, RETROK_a, RETROK_k, RETROK_l, RETROK_SPACE, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {-1, -1, 35, 32, -1, -1, -1, -1, 28, -1, -1, -1, -1, -1},
      -1,
   },
   { // Teenage Mutant Hero Turtles (1990).rmp
      {0xca4f0b5, 0x8dd0cf27},
      {RETROK_s, RETROK_RSHIFT, DB_KEEP, RETROK_1, RETROK_q, RETROK_a, RETROK_o, RETROK_p, RETROK_SPACE, RETROK_RETURN, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {62, 66, -1, -1, -1, -1, -1, -1, 28, 67, -1, -1, -1, -1},
      -1,
   },
   { // Thanatos.rmp
      {0x827e83ac, 0x8d64a322, 0xf9fce391, 0x59d6aef1},
      {DB_CLEAN, DB_CLEAN, DB_CLEAN, RETROK_4, RETROK_a, RETROK_z, RETROK_n, RETROK_m, RETROK_SPACE, DB_CLEAN, DB_CLEAN, DB_CLEAN, DB_CLEAN, DB_CLEAN},
      {-1, -1, -1, -1, -1, -1, -1, -1, 68, -1, -1, -1, -1, -1},
      -1,
   },
   { // Vera Cruz Affair, The (1986).rmp
      {0xd5a4c3f2, 0x4f6b8ae6, 0xd276b5bc},
      {DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
      0,
   },
   { // Wishbringer (1985).rmp
      {0x5332c3ad},
      {DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
      17,
   },
   { // Witness, The (1984).rmp
      {0xb16409a2},
      {DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
      18,
   },
   { // Wonderboy.rmp
      {0xb1026135},
      {204, RETROK_BACKSPACE, RETROK_ESCAPE, RETROK_1, DB_CLEAN, DB_KEEP, DB_KEEP, DB_KEEP, 200, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {-1, 55, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
      -1,
   },
   { // Zork I - The Great Underground Empire (1986).rmp
      {0xa02c3758},
      {DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
      19,
   },
   { // Zork II - The Wizard of Frobozz (1986).rmp
      {0xe0240de6},
      {DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
      20,
   },
   { // Zork III - The Dungeon Master (1986).rmp
      {0xa3fb554f},
      {DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP, DB_KEEP},
      {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
      21,
   },
};

char commands[] = {
   "|CPM\0"
   "|CPM\n~~LOADER\0"
   "RUN\"COBRA.\0"
   "MAHJONG\0"
   "CUTTHROA\0"
   "ENCHANTE\0"
   "RUN\"MENU\0"
   "HITCHHIK\0"
   "INFIDEL\0"
   "RUN\"JUNGLE\0"
   "LEATHERG\0"
   "RUN\"GAME\0"
   "PLANETFA\0"
   "RUN\"SECTE\0"
   "SORCERER\0"
   "SPELLBRE\0"
   "SUSPENDE\0"
   "WISHBRIN\0"
   "WITNESS\0"
   "ZORK1\0"
   "ZORK2\0"
   "ZORK3\0"
};

char input_names[] = {
   "Roll Plane\0"
   "Bomb\0"
   "Break\0"
   "Gear\0"
   "Accelerate\0"
   "Mover Adso\0"
   "Decir Si\0"
   "Start / Dejar Objeto\0"
   "Girar Izquierda\0"
   "Girar Derecha\0"
   "Avanzar\0"
   "Decir No\0"
   "Send Adso Forward\0"
   "Answer Yes\0"
   "Start / Drop Object\0"
   "Turn Counterclockwise\0"
   "Turn Clockwise\0"
   "Move Forward\0"
   "Answer No\0"
   "Long Jump\0"
   "Short Jump\0"
   "Missile Ground\0"
   "Key 2\0"
   "Missile Air\0"
   "Key 1\0"
   "Start\0"
   "Carry\0"
   "Carry And Jump\0"
   "Fire\0"
   "Jump\0"
   "S / Start\0"
   "Bubble\0"
   "Start One Player\0"
   "[A]\0"
   "Fire Left\0"
   "Pause\0"
   "Fire Right\0"
   "Down / Use\0"
   "Shoot\0"
   "Throw Bombs\0"
   "Key E\0"
   "Key 3\0"
   "Return / Confirm\0"
   "Drop Bomb\0"
   "Slow\0"
   "Fast\0"
   "Fire Rocket\0"
   "Swop\0"
   "Get And Jump\0"
   "Toggle\0"
   "Joystick 1 Select\0"
   "Joystick 2 Select\0"
   "Drop Piece\0"
   "Throw Piece\0"
   "Speed Up\0"
   "Music Toggle\0"
   "Small Jump / Kick\0"
   "Start / Select Icon\0"
   "Action / Combo\0"
   "Long Jump / Punch\0"
   "Use\0"
   "Change Weapon\0"
   "Select Weapon\0"
   "Time Left\0"
   "Attack\0"
   "Magic\0"
   "Enter Wagon\0"
   "Special Features\0"
   "Flame\0"
};


// gen hash: 1665059898.9355187

