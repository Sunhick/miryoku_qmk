// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

// ─── Tap-Hold Behavior ───────────────────────────────────────────

// Base tapping term (applies to index/middle fingers)
#define TAPPING_TERM 200

// Enable per-key tapping term overrides
#define TAPPING_TERM_PER_KEY

// Permissive hold: if you tap another key while holding a mod-tap,
// the mod-tap becomes the modifier (hold) immediately
#define PERMISSIVE_HOLD

// Quick tap: if you tap a key and then tap it again within this window,
// the second tap outputs the tap keycode (enables key repeat)
// Set to same as TAPPING_TERM or slightly lower
#define QUICK_TAP_TERM 120

// Enable per-key quick tap if you want different values per finger
#define QUICK_TAP_TERM_PER_KEY
