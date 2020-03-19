# Local machine
s_libcaddr      = 0x7fffff030000
s_setbufaddr    = 0x7fffff09fdbd
s_openaddr      = 0x7fffff127030
s_readaddr      = 0x7fffff127250
s_writeaddr     = 0x7fffff1272b0
s_rdigdt        = 0x7fffff12738b
s_rsigdt        = 0x7fffff128c40
s_rdxgdt        = 0x7fffff1450a6

print(s_rdigdt - s_openaddr)
print(s_rsigdt - s_openaddr)
print(s_rdxgdt - s_openaddr)

# ubuntu VM
openaddr    = 0x7ffff7b04000
readaddr    = 0x7ffff7b04220
writeaddr   = 0x7ffff7b04280
rdigdt      = 0x7ffff7b0435b
rsigdt      = 0x7ffff7b05c00
rdxgdt      = 0x7ffff7b22066

print(rdigdt - openaddr)
print(rsigdt - openaddr)
print(rdxgdt - openaddr)
