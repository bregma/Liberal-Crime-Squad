#
# This file is part of Liberal Crime Squad.
#
# Liberal Crime Squad is free software: you can redistribute it and/or
# modify it under the terms of the GNU General Public License
# as published by the Free Software Foundation, either version 2
# of the License, or (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.
#

ACLOCAL_AMFLAGS = -I config.m4
AM_MAKEFLAGS = --no-print-directory
SUBDIRS = lib src tests

lcsdir = $(datadir)/lcs
artdir = $(lcsdir)/art
mididir = $(artdir)/midi
oggdir = $(artdir)/ogg
appdir = $(datadir)/applications

dist_art_DATA = art/abort.cmv art/anchor.cmv art/glamshow.cmv art/lacops.cmv\
 art/newscast.cmv\
 \
 art/largecap.cpc art/newspic.cpc art/newstops.cpc\
 \
 art/armors.xml art/augmentations.xml art/armsdealer.xml art/clips.xml \
 art/creatures.xml art/deptstore.xml art/loot.xml art/masks.xml art/oubliette.xml\
 art/pawnshop.xml art/vehicles.xml art/weapons.xml\
 \
 art/licenses.txt art/sitemaps.txt\
 \
 art/mapCSV_Bank_Specials.csv art/mapCSV_Bank_Tiles.csv\
 art/mapCSV_BarAndGrill_Specials.csv art/mapCSV_BarAndGrill_Tiles.csv\
 art/mapCSV_BombShelter_Specials.csv art/mapCSV_BombShelter_Tiles.csv\
 art/mapCSV_Bunker_Specials.csv art/mapCSV_Bunker_Tiles.csv\
 art/mapCSV_Courthouse_Specials.csv art/mapCSV_Courthouse_Tiles.csv\
 art/mapCSV_NuclearPlant_Specials.csv art/mapCSV_NuclearPlant_Tiles.csv\
 art/mapCSV_WhiteHouse_Specials.csv art/mapCSV_WhiteHouse_Tiles.csv\
 art/mapCSV_WhiteHouse2_Specials.csv art/mapCSV_WhiteHouse2_Tiles.csv\
 art/mapCSV_WhiteHouse3_Specials.csv art/mapCSV_WhiteHouse3_Tiles.csv

dist_midi_DATA = \
 art/midi/abort.mid art/midi/activate.mid art/midi/alarmed.mid art/midi/anchor.mid\
 art/midi/basemode.mid art/midi/carchase.mid art/midi/cartheft.mid art/midi/dating.mid\
 art/midi/defeat.mid art/midi/disbanded.mid art/midi/elections.mid art/midi/finances.mid\
 art/midi/footchase.mid art/midi/glamshow.mid art/midi/heavycombat.mid art/midi/interrogation.mid\
 art/midi/lacops.mid art/midi/liberalagenda.mid art/midi/newgame.mid art/midi/newscast.mid\
 art/midi/newspaper.mid art/midi/reaganified.mid art/midi/recruiting.mid art/midi/reviewmode.mid\
 art/midi/shopping.mid art/midi/siege.mid art/midi/sitemode.mid art/midi/sleepers.mid\
 art/midi/stalinized.mid art/midi/stopevil.mid art/midi/suspicious.mid art/midi/titlemode.mid\
 art/midi/trial.mid art/midi/victory.mid

dist_ogg_DATA = \
 art/ogg/abort.ogg art/ogg/activate.ogg art/ogg/alarmed.ogg art/ogg/anchor.ogg\
 art/ogg/basemode.ogg art/ogg/carchase.ogg art/ogg/cartheft.ogg art/ogg/dating.ogg\
 art/ogg/defeat.ogg art/ogg/disbanded.ogg art/ogg/elections.ogg art/ogg/finances.ogg\
 art/ogg/footchase.ogg art/ogg/glamshow.ogg art/ogg/heavycombat.ogg art/ogg/interrogation.ogg\
 art/ogg/lacops.ogg art/ogg/liberalagenda.ogg art/ogg/newgame.ogg art/ogg/newscast.ogg\
 art/ogg/newspaper.ogg art/ogg/reaganified.ogg art/ogg/recruiting.ogg art/ogg/reviewmode.ogg\
 art/ogg/shopping.ogg art/ogg/siege.ogg art/ogg/sitemode.ogg art/ogg/sleepers.ogg\
 art/ogg/stalinized.ogg art/ogg/stopevil.ogg art/ogg/suspicious.ogg art/ogg/titlemode.ogg\
 art/ogg/trial.ogg art/ogg/victory.ogg


dist_app_DATA = crimesquad.desktop

#man_MANS = man/crimesquad.6
dist_man_MANS = man/crimesquad.6
EXTRA_DIST = \
 AUTHORS \
 COPYING \
 INSTALL \
 README.md \
 docs/conventions.txt \
 docs/cpcimageformat.txt \
 docs/CrimeSquadManual.txt \
 config.aux/tap-driver.sh
