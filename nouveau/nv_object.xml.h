#ifndef NV_OBJECT_XML
#define NV_OBJECT_XML

/* Autogenerated file, DO NOT EDIT manually!

This file was generated by the rules-ng-ng headergen tool in this git repository:
http://github.com/envytools/envytools/
git clone https://github.com/envytools/envytools.git

The rules-ng-ng source files this header was generated from are:
- /home/michael/src/envytools/rnndb/root.xml                     (    514 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/copyright.xml                (   6452 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/nv_mmio.xml                  (   7086 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/nvchipsets.xml               (   4092 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/bus/pmc.xml                  (  11084 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/bus/pbus.xml                 (  19828 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/nv50_defs.xml                (  16877 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/memory/nv50_vm.xml           (   9860 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/display/nv_vga.xml           (  13113 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/bus/pci.xml                  (  17502 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/fifo/nv01_pfifo.xml          (  10607 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/fifo/nv04_pfifo.xml          (  24125 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/fifo/nv50_pfifo.xml          (  23242 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/fifo/nvc0_pfifo.xml          (  26418 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/memory/nvc0_vm.xml           (   8573 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/pm/nv40_pclock.xml           (   1171 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/pm/nv50_pclock.xml           (  16532 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/pm/nva3_pclock.xml           (   4463 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/display/nv10_pvideo.xml      (    451 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/bus/ptimer.xml               (   2287 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/nv10_pcounter.xml            (   5914 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/nv40_pcounter.xml            (   9692 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/vdec/vpe/pmpeg.xml           (  12766 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/vdec/vpe/pvpe.xml            (    704 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/vdec/vpe/mpeg_fifo.xml       (   2622 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/fifo/nv_object.xml           (  14664 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/vdec/vpe/pme.xml             (   5124 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/display/nv17_ptv.xml         (    458 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/io/pnvio.xml                 (  32034 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/vdec/vpe/pvp1.xml            (   2111 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/vdec/vp2/pvp2.xml            (   1618 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/vdec/vp2/xtensa.xml          (   5386 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/pm/ptherm.xml                (  32292 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/bus/pfuse.xml                (    803 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/bus/punits.xml               (   4193 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/vdec/vp3/pvld.xml            (  13233 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/falcon.xml                   (  16884 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/falcon_crypt.xml             (   3446 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/vdec/vp3/pvdec.xml           (  14115 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/vdec/vp3/pppp.xml            (   8830 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/nv_defs.xml                  (   4399 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/vdec/vp3/pcrypt3.xml         (   1003 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/nv84_punk089.xml             (    449 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/display/nv03_prmvio.xml      (    654 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/memory/nv01_pdma.xml         (   5345 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/memory/nv03_pfb.xml          (   4511 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/memory/nv10_pfb.xml          (  25274 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/memory/nv_pfb.xml            (   1135 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/memory/nvc0_pffb.xml         (   2707 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/io/pstraps.xml               (   8077 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/vdec/vp2/pcrypt2.xml         (   3578 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/vdec/vp2/pbsp.xml            (  10624 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/fifo/pcopy.xml               (   7843 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/display/nva3_pcodec.xml      (    448 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/display/nva3_pkfuse.xml      (    447 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/pm/pdaemon.xml               (  17194 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/memory/nvc0_pbfb.xml         (   2898 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/bus/pibus.xml                (   8356 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/pm/nvc0_pclock.xml           (   7279 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/memory/nvc0_pp2p.xml         (   1946 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/memory/nvc0_pxbar.xml        (   1156 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/memory/nvc0_pmfb.xml         (   3631 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/nvc0_pcounter.xml            (  12613 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/vdec/pvcomp.xml              (   8682 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/vdec/pvenc.xml               (   1233 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/display/nvd9_punk1c3.xml     (    978 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/io/pmedia.xml                (    432 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/nv01_paudio.xml              (   1863 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/extdev/ad1848.xml            (   5260 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nv01_pgraph.xml        (  14241 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nv01_2d.xml            (  36779 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nv03_pgraph.xml        (   4011 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nv04_pgraph.xml        (  11363 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nv50_pgraph.xml        (  54643 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nvc0_pgraph/pgraph.xml (  23719 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nvc0_pgraph/ctxctl.xml (  12648 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nvc0_pgraph/gpc.xml    (   7276 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nvc0_pgraph/tpc.xml    (  15311 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nvc0_pgraph/ppc.xml    (   1170 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nvc0_pgraph/rop.xml    (   2143 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nv03_pdma.xml          (   2293 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/display/nv01_pfb.xml         (   4033 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/display/nv03_pcrtc.xml       (   1114 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/memory/nv01_pram.xml         (   1241 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/io/pchipid.xml               (    494 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/display/nv01_pdac.xml        (   4639 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/io/peeprom.xml               (    703 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/display/nv03_pramdac.xml     (   4455 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/display/nv50_pdisplay.xml    (  38497 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/bus/prm.xml                  (   5098 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/display/nv_evo.xml           (  10560 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/fifo/nv_objects.xml          (   1054 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nv_m2mf.xml            (   2701 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nvc0_m2mf.xml          (   2788 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nv04_dvd.xml           (   3005 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nv03_3d.xml            (   5214 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nv04_3d.xml            (  17770 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nv_3ddefs.xml          (  16394 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nv10_3d.xml            (  18441 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nv20_3d.xml            (  21106 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nv30-40_3d.xml         (  32461 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nv50_2d.xml            (  11441 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nv50_3d.xml            (  65928 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nv50_compute.xml       (  14047 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nvc0_3d.xml            (  59735 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nve4_p2mf.xml          (   2378 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nvc0_compute.xml       (  11150 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nve4_compute.xml       (  10179 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/vdec/vpe/me_fifo.xml         (   1690 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/vdec/vpe/vp1_fifo.xml        (    675 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/vdec/vp2/crypt2_fifo.xml     (   2077 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/fifo/nve4_copy.xml           (   3928 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nv50_texture.xml       (   8648 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nvc0_shaders.xml       (   7409 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/vdec/vpe/mpeg_cmd.xml        (   7682 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/extdev/adt7473.xml           (  11411 bytes, from 2014-01-29 23:36:47)

Copyright (C) 2006-2014 by the following authors:
- Artur Huillet <arthur.huillet@free.fr> (ahuillet)
- Ben Skeggs (darktama, darktama_)
- B. R. <koala_br@users.sourceforge.net> (koala_br)
- Carlos Martin <carlosmn@users.sf.net> (carlosmn)
- Christoph Bumiller <e0425955@student.tuwien.ac.at> (calim, chrisbmr)
- Dawid Gajownik <gajownik@users.sf.net> (gajownik)
- Dmitry Baryshkov
- Dmitry Eremin-Solenikov <lumag@users.sf.net> (lumag)
- EdB <edb_@users.sf.net> (edb_)
- Erik Waling <erikwailing@users.sf.net> (erikwaling)
- Francisco Jerez <currojerez@riseup.net> (curro)
- imirkin <imirkin@users.sf.net> (imirkin)
- jb17bsome <jb17bsome@bellsouth.net> (jb17bsome)
- Jeremy Kolb <kjeremy@users.sf.net> (kjeremy)
- Laurent Carlier <lordheavym@gmail.com> (lordheavy)
- Luca Barbieri <luca@luca-barbieri.com> (lb, lb1)
- Maarten Maathuis <madman2003@gmail.com> (stillunknown)
- Marcin Kościelnicki <koriakin@0x04.net> (mwk, koriakin)
- Mark Carey <mark.carey@gmail.com> (careym)
- Matthieu Castet <matthieu.castet@parrot.com> (mat-c)
- nvidiaman <nvidiaman@users.sf.net> (nvidiaman)
- Patrice Mandin <patmandin@gmail.com> (pmandin, pmdata)
- Pekka Paalanen <pq@iki.fi> (pq, ppaalanen)
- Peter Popov <ironpeter@users.sf.net> (ironpeter)
- Richard Hughes <hughsient@users.sf.net> (hughsient)
- Rudi Cilibrasi <cilibrar@users.sf.net> (cilibrar)
- Serge Martin
- Simon Raffeiner
- Stephane Loeuillet <leroutier@users.sf.net> (leroutier)
- Stephane Marchesin <stephane.marchesin@gmail.com> (marcheu)
- sturmflut <sturmflut@users.sf.net> (sturmflut)
- Sylvain Munaut <tnt@246tNt.com>
- Victor Stinner <victor.stinner@haypocalc.com> (haypo)
- Wladmir van der Laan <laanwj@gmail.com> (miathan6)
- Younes Manton <younes.m@gmail.com> (ymanton)

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice (including the
next paragraph) shall be included in all copies or substantial
portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE COPYRIGHT OWNER(S) AND/OR ITS SUPPLIERS BE
LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/


#define NV01_DMA_FROM_MEMORY					0x00000002
#define NV01_DMA_TO_MEMORY					0x00000003
#define NV01_NULL						0x00000030
#define NV03_DMA_IN_MEMORY					0x0000003d
#define NV01_OP_CLIP						0x00000010
#define NV01_OP_BLEND_AND					0x00000011
#define NV01_BETA						0x00000012
#define NV04_BETA4						0x00000072
#define NV01_OP_ROP_AND						0x00000013
#define NV01_ROP						0x00000014
#define NV03_ROP						0x00000043
#define NV01_OP_CHROMA						0x00000015
#define NV01_OP_PLANE_SWITCH					0x00000016
#define NV01_CHROMA						0x00000017
#define NV04_CHROMA						0x00000057
#define NV01_PATTERN						0x00000018
#define NV04_PATTERN						0x00000044
#define NV01_CLIP						0x00000019
#define NV01_OP_SRCCOPY_AND					0x00000064
#define NV03_OP_SRCCOPY						0x00000065
#define NV04_OP_SRCCOPY_PREMULT					0x00000066
#define NV04_OP_BLEND_PREMULT					0x00000067
#define NV01_POINT						0x0000001a
#define NV01_LINE						0x0000001b
#define NV01_LIN						0x0000001c
#define NV04_LIN						0x0000005c
#define NV30_LIN						0x0000035c
#define NV40_LIN						0x0000305c
#define NV01_TRI						0x0000001d
#define NV04_TRI						0x0000005d
#define NV01_RECT						0x0000001e
#define NV04_RECT						0x0000005e
#define NV01_BLIT						0x0000001f
#define NV04_BLIT						0x0000005f
#define NV15_BLIT						0x0000009f
#define NV01_IFM						0x00000020
#define NV01_IFC						0x00000021
#define NV04_IFC						0x00000061
#define NV05_IFC						0x00000065
#define NV10_IFC						0x0000008a
#define NV30_IFC						0x0000038a
#define NV40_IFC						0x0000308a
#define NV01_BITMAP						0x00000022
#define NV01_ITM						0x00000025
#define NV03_SIFC						0x00000036
#define NV04_SIFC						0x00000076
#define NV05_SIFC						0x00000066
#define NV30_SIFC						0x00000366
#define NV40_SIFC						0x00003066
#define NV03_SIFM						0x00000037
#define NV04_SIFM						0x00000077
#define NV05_SIFM						0x00000063
#define NV10_SIFM						0x00000089
#define NV30_SIFM						0x00000389
#define NV40_SIFM						0x00003089
#define NV50_SIFM						0x00005089
#define NV03_GDI						0x0000004b
#define NV04_GDI						0x0000004a
#define NV04_SURFACE_SWZ					0x00000052
#define NV20_SURFACE_SWZ					0x0000009e
#define NV30_SURFACE_SWZ					0x0000039e
#define NV40_SURFACE_SWZ					0x0000309e
#define NV03_SURFACE_DST					0x00000058
#define NV03_SURFACE_SRC					0x00000059
#define NV04_SURFACE_2D						0x00000042
#define NV10_SURFACE_2D						0x00000062
#define NV30_SURFACE_2D						0x00000362
#define NV40_SURFACE_2D						0x00003062
#define NV50_SURFACE_2D						0x00005062
#define NV04_INDEX						0x00000060
#define NV05_INDEX						0x00000064
#define NV30_INDEX						0x00000364
#define NV40_INDEX						0x00003064
#define NV10_TEXUPLOAD						0x0000007b
#define NV30_TEXUPLOAD						0x0000037b
#define NV40_TEXUPLOAD						0x0000307b
#define NV01_TEXLIN						0x00000023
#define NV01_TEXQUAD						0x00000024
#define NV01_TEXLINBETA						0x00000034
#define NV01_TEXQUADBETA					0x00000035
#define NV04_DVD_SUBPICTURE					0x00000038
#define NV10_DVD_SUBPICTURE					0x00000088
#define NV03_M2MF						0x00000039
#define NV50_M2MF						0x00005039
#define NVC0_M2MF						0x00009039
#define NVE4_P2MF						0x0000a040
#define NVF0_P2MF						0x0000a140
#define NV03_SURFACE_COLOR					0x0000005a
#define NV03_SURFACE_ZETA					0x0000005b
#define NV03_TEXTURED_TRIANGLE					0x00000048
#define NV04_TEXTURED_TRIANGLE					0x00000054
#define NV10_TEXTURED_TRIANGLE					0x00000094
#define NV04_SURFACE_3D						0x00000053
#define NV10_SURFACE_3D						0x00000093
#define NV04_MULTITEX_TRIANGLE					0x00000055
#define NV10_MULTITEX_TRIANGLE					0x00000095
#define NV10_3D							0x00000056
#define NV15_3D							0x00000096
#define NV11_3D							0x00000098
#define NV17_3D							0x00000099
#define NV20_3D							0x00000097
#define NV25_3D							0x00000597
#define NV30_3D							0x00000397
#define NV35_3D							0x00000497
#define NV34_3D							0x00000697
#define NV40_3D							0x00004097
#define NV44_3D							0x00004497
#define NV50_3D							0x00005097
#define NV84_3D							0x00008297
#define NVA0_3D							0x00008397
#define NVA3_3D							0x00008597
#define NVAF_3D							0x00008697
#define NVC0_3D							0x00009097
#define NVC1_3D							0x00009197
#define NVC8_3D							0x00009297
#define NVE4_3D							0x0000a097
#define NVF0_3D							0x0000a197
#define NV50_2D							0x0000502d
#define NVC0_2D							0x0000902d
#define NV50_COMPUTE						0x000050c0
#define NVA3_COMPUTE						0x000085c0
#define NVC0_COMPUTE						0x000090c0
#define NVC8_COMPUTE						0x000092c0
#define NVE4_COMPUTE						0x0000a0c0
#define NVF0_COMPUTE						0x0000a1c0
#define NV84_CRYPT2						0x000074c1
#define NVE4_COPY						0x0000a0b5
#define NV31_MPEG						0x00003174
#define NV84_MPEG						0x00008274
#define NV40_ME							0x00004075
#define NV41_VP1						0x00004176
#define NV01_SUBCHAN__SIZE					0x00008000
#define NV01_SUBCHAN						0x00000000

#define NV01_SUBCHAN_OBJECT					0x00000000

#define NVC0_SUBCHAN_NOP					0x00000008

#define NV84_SUBCHAN_SEMAPHORE_ADDRESS_HIGH			0x00000010

#define NV84_SUBCHAN_SEMAPHORE_ADDRESS_LOW			0x00000014

#define NV84_SUBCHAN_SEMAPHORE_SEQUENCE				0x00000018

#define NV84_SUBCHAN_SEMAPHORE_TRIGGER				0x0000001c
#define NV84_SUBCHAN_SEMAPHORE_TRIGGER_ACTION__MASK		0x0000000f
#define NV84_SUBCHAN_SEMAPHORE_TRIGGER_ACTION__SHIFT		0
#define NV84_SUBCHAN_SEMAPHORE_TRIGGER_ACTION_ACQUIRE_EQUAL	0x00000001
#define NV84_SUBCHAN_SEMAPHORE_TRIGGER_ACTION_RELEASE		0x00000002
#define NV84_SUBCHAN_SEMAPHORE_TRIGGER_ACTION_ACQUIRE_GEQUAL	0x00000004
#define NVC0_SUBCHAN_SEMAPHORE_TRIGGER_ACTION_ACQUIRE_MASK	0x00000008
#define NVC0_SUBCHAN_SEMAPHORE_TRIGGER_YIELD			0x00001000
#define NVC0_SUBCHAN_SEMAPHORE_TRIGGER_UNK20			0x00100000
#define NVC0_SUBCHAN_SEMAPHORE_TRIGGER_SHORT			0x01000000

#define NV84_SUBCHAN_NOTIFY_INTR				0x00000020

#define NV84_SUBCHAN_WRCACHE_FLUSH				0x00000024

#define NVAF_SUBCHAN_UNK28					0x00000028

#define NVAF_SUBCHAN_UNK2C					0x0000002c
#define NVAF_SUBCHAN_UNK2C_UNK0__MASK				0x0fffffff
#define NVAF_SUBCHAN_UNK2C_UNK0__SHIFT				0
#define NVAF_SUBCHAN_UNK2C_UNK28				0x10000000
#define NVAF_SUBCHAN_UNK2C_UNK29__MASK				0xe0000000
#define NVAF_SUBCHAN_UNK2C_UNK29__SHIFT				29
#define NVAF_SUBCHAN_UNK2C_UNK29_UNK0				0x00000000
#define NVAF_SUBCHAN_UNK2C_UNK29_UNK1				0x20000000
#define NVAF_SUBCHAN_UNK2C_UNK29_UNK2				0x40000000

#define NV10_SUBCHAN_REF_CNT					0x00000050

#define NV1A_SUBCHAN_DMA_SEMAPHORE				0x00000060

#define NV1A_SUBCHAN_SEMAPHORE_OFFSET				0x00000064

#define NV1A_SUBCHAN_SEMAPHORE_ACQUIRE				0x00000068

#define NV1A_SUBCHAN_SEMAPHORE_RELEASE				0x0000006c

#define NVC0_SUBCHAN_UNK70					0x00000070

#define NVC0_SUBCHAN_UNK74					0x00000074

#define NVC0_SUBCHAN_UNK78					0x00000078

#define NVC0_SUBCHAN_UNK7C					0x0000007c

#define NV40_SUBCHAN_YIELD					0x00000080

#define NV01_GRAPH						0x00000000

#define NV04_GRAPH_NOP						0x00000100

#define NV04_GRAPH_NOTIFY					0x00000104
#define NV04_GRAPH_NOTIFY_WRITE					0x00000000
#define NV04_GRAPH_NOTIFY_WRITE_AND_AWAKEN			0x00000001

#define NVC0_GRAPH_NOTIFY_ADDRESS_HIGH				0x00000104

#define NVC0_GRAPH_NOTIFY_ADDRESS_LOW				0x00000108

#define NVC0_GRAPH_NOTIFY					0x0000010c
#define NVC0_GRAPH_NOTIFY_WRITE					0x00000000
#define NVC0_GRAPH_NOTIFY_WRITE_AND_AWAKEN			0x00000001

#define NV50_GRAPH_SERIALIZE					0x00000110

#define NVC0_GRAPH_MACRO_CODE_POS				0x00000114

#define NVC0_GRAPH_MACRO_CODE_DATA				0x00000118

#define NVC0_GRAPH_MACRO_ENTRY_POS				0x0000011c

#define NVC0_GRAPH_MACRO_ENTRY_DATA				0x00000120

#define NVC0_GRAPH_MACRO_UNK0124				0x00000124

#define NVA3_GRAPH_UNK0120					0x00000120

#define NVA3_GRAPH_UNK0124					0x00000124

#define NVC0_GRAPH_COND_MASTER_ADDRESS_HIGH			0x00000130

#define NVC0_GRAPH_COND_MASTER_ADDRESS_LOW			0x00000134

#define NVC0_GRAPH_COND_MASTER_MODE				0x00000138
#define NVC0_GRAPH_COND_MASTER_MODE_NEVER			0x00000000
#define NVC0_GRAPH_COND_MASTER_MODE_ALWAYS			0x00000001
#define NVC0_GRAPH_COND_MASTER_MODE_RES_NON_ZERO		0x00000002
#define NVC0_GRAPH_COND_MASTER_MODE_EQUAL			0x00000003
#define NVC0_GRAPH_COND_MASTER_MODE_NOT_EQUAL			0x00000004

#define NVC0_GRAPH_UNK013C					0x0000013c

#define NV40_GRAPH_PM_TRIGGER					0x00000140

#define NVC0_GRAPH_UNK0150					0x00000150

#define NVC0_GRAPH_UNK0154					0x00000154

#define NVC0_GRAPH_SCRATCH(i0)				       (0x00003400 + 0x4*(i0))
#define NVC0_GRAPH_SCRATCH__ESIZE				0x00000004
#define NVC0_GRAPH_SCRATCH__LEN					0x00000080

#define NVC0_GRAPH_MACRO(i0)				       (0x00003800 + 0x8*(i0))
#define NVC0_GRAPH_MACRO__ESIZE					0x00000008
#define NVC0_GRAPH_MACRO__LEN					0x00000080

#define NVC0_GRAPH_MACRO_PARAM(i0)			       (0x00003804 + 0x8*(i0))
#define NVC0_GRAPH_MACRO_PARAM__ESIZE				0x00000008
#define NVC0_GRAPH_MACRO_PARAM__LEN				0x00000080


#endif /* NV_OBJECT_XML */