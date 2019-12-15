# uncompyle6 version 3.6.0
# Python bytecode 3.4 (3310)
# Decompiled from: Python 3.7.3 (default, Nov 15 2019, 04:04:52) 
# [Clang 11.0.0 (clang-1100.0.33.16)]
# Embedded file name: 100-crackme.py
# Compiled at: 2017-01-05 19:44:37
# Size of source mod 2**32: 195 bytes
pwd = input('Password: ')
ok = 'Zen of Python'
ok = ok + ' C'
ok = ok[1:3] + ok[3] + ok[14] + ok[3] + ok[7:9] + ok[:6][::-1]
if pwd == ok:
    print('OK')
else:
    print('KO')
# okay decompiling a.pyc
