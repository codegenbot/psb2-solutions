/*
Create a function that takes a value (string) representing a number
and returns the closest integer to it. If the number is equidistant
from two integers, round it away from zero.

Examples
>>> closest_integer("10")
10
>>> closest_integer("15.3")
15

Note:
Rounding away from zero means that if the given number is equidistant
from two integers, the one you should return is the one that is the
farthest from zero. For example closest_integer("14.5") should
return 15 and closest_integer("-14.5") should return -15.
*/
#include<stdio.h>
#include<math.h>
#include<string>
using namespace std;
int closest_integer(string value){
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	int m = 0;
	int n = 0;
	int o = 0;
	int p = 0;
	int q = 0;
	int r = 0;
	int s = 0;
	int t = 0;
	int u = 0;
	int v = 0;
	int w = 0;
	int x = 0;
	int y = 0;
	int z = 0;
	int aa = 0;
	int ab = 0;
	int ac = 0;
	int ad = 0;
	int ae = 0;
	int af = 0;
	int ag = 0;
	int ah = 0;
	int ai = 0;
	int aj = 0;
	int ak = 0;
	int al = 0;
	int am = 0;
	int an = 0;
	int ao = 0;
	int ap = 0;
	int aq = 0;
	int ar = 0;
	int as = 0;
	int at = 0;
	int au = 0;
	int av = 0;
	int aw = 0;
	int ax = 0;
	int ay = 0;
	int az = 0;
	int ba = 0;
	int bb = 0;
	int bc = 0;
	int bd = 0;
	int be = 0;
	int bf = 0;
	int bg = 0;
	int bh = 0;
	int bi = 0;
	int bj = 0;
	int bk = 0;
	int bl = 0;
	int bm = 0;
	int bn = 0;
	int bo = 0;
	int bp = 0;
	int bq = 0;
	int br = 0;
	int bs = 0;
	int bt = 0;
	int bu = 0;
	int bv = 0;
	int bw = 0;
	int bx = 0;
	int by = 0;
	int bz = 0;
	int ca = 0;
	int cb = 0;
	int cc = 0;
	int cd = 0;
	int ce = 0;
	int cf = 0;
	int cg = 0;
	int ch = 0;
	int ci = 0;
	int cj = 0;
	int ck = 0;
	int cl = 0;
	int cm = 0;
	int cn = 0;
	int co = 0;
	int cp = 0;
	int cq = 0;
	int cr = 0;
	int cs = 0;
	int ct = 0;
	int cu = 0;
	int cv = 0;
	int cw = 0;
	int cx = 0;
	int cy = 0;
	int cz = 0;
	int da = 0;
	int db = 0;
	int dc = 0;
	int dd = 0;
	int de = 0;
	int df = 0;
	int dg = 0;
	int dh = 0;
	int di = 0;
	int dj = 0;
	int dk = 0;
	int dl = 0;
	int dm = 0;
	int dn = 0;
	int do = 0;
	int dp = 0;
	int dq = 0;
	int dr = 0;
	int ds = 0;
	int dt = 0;
	int du = 0;
	int dv = 0;
	int dw = 0;
	int dx = 0;
	int dy = 0;
	int dz = 0;
	int ea = 0;
	int eb = 0;
	int ec = 0;
	int ed = 0;
	int ee = 0;
	int ef = 0;
	int eg = 0;
	int eh = 0;
	int ei = 0;
	int ej = 0;
	int ek = 0;
	int el = 0;
	int em = 0;
	int en = 0;
	int eo = 0;
	int ep = 0;
	int eq = 0;
	int er = 0;
	int es = 0;
	int et = 0;
	int eu = 0;
	int ev = 0;
	int ew = 0;
	int ex = 0;
	int ey = 0;
	int ez = 0;
	int fa = 0;
	int fb = 0;
	int fc = 0;
	int fd = 0;
	int fe = 0;
	int ff = 0;
	int fg = 0;
	int fh = 0;
	int fi = 0;
	int fj = 0;
	int fk = 0;
	int fl = 0;
	int fm = 0;
	int fn = 0;
	int fo = 0;
	int fp = 0;
	int fq = 0;
	int fr = 0;
	int fs = 0;
	int ft = 0;
	int fu = 0;
	int fv = 0;
	int fw = 0;
	int fx = 0;
	int fy = 0;
	int fz = 0;
	int ga = 0;
	int gb = 0;
	int gc = 0;
	int gd = 0;
	int ge = 0;
	int gf = 0;
	int gg = 0;
	int gh = 0;
	int gi = 0;
	int gj = 0;
	int gk = 0;
	int gl = 0;
	int gm = 0;
	int gn = 0;
	int go = 0;
	int gp = 0;
	int gq = 0;
	int gr = 0;
	int gs = 0;
	int gt = 0;
	int gu = 0;
	int gv = 0;
	int gw = 0;
	int gx = 0;
	int gy = 0;
	int gz = 0;
	int ha = 0;
	int hb = 0;
	int hc = 0;
	int hd = 0;
	int he = 0;
	int hf = 0;
	int hg = 0;
	int hh = 0;
	int hi = 0;
	int hj = 0;
	int hk = 0;
	int hl = 0;
	int hm = 0;
	int hn = 0;
	int ho = 0;
	int hp = 0;
	int hq = 0;
	int hr = 0;
	int hs = 0;
	int ht = 0;
	int hu = 0;
	int hv = 0;
	int hw = 0;
	int hx = 0;
	int hy = 0;
	int hz = 0;
	int ia = 0;
	int ib = 0;
	int ic = 0;
	int id = 0;
	int ie = 0;
	int if = 0;
	int ig = 0;
	int ih = 0;
	int ii = 0;
	int ij = 0;
	int ik = 0;
	int il = 0;
	int im = 0;
	int ip = 0;
	int iq = 0;
}
