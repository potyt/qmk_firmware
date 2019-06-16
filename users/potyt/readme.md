Copyright 2019 pot p@pot.yt @potyt

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

# Overview

This is my personal userspace file.

Heavily based on drashna's code and comments for working out how all
this stuff works - even this readme.

My [DZ60 HPKB Keymap](https://github.com/qmk/qmk_firmware/blob/master/layouts/community/ergodox/drashna/keymap.c#L297)
is an example of a layout that uses this shared code.

## Custom Keycodes

Keycodes are defined in the potyt.h file and need to be included in the
keymap.c files, so that they can be used there.

## Layer Indication

This uses the `layer_state_set_*` command to change the layer color, to
indicate which layer it is on.  This includes the default keymap, as well.

Since this is done via userspace, it is the same between all systems.

Additionally, there is a custom keycode to toggle layer indication. And
all RGB keycodes disable layer indication by default, as well.  This
way, I can leave special effects doing when I want.
