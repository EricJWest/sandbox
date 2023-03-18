#!/usr/bin/env python
# coding: utf-8

# In[ ]:

import time

start = time.time()
print('hello world')
end = time.time()
dt = end - start
dt_min = dt//60
dt_sec = dt%60
print('time = %.4f m %.2f s' % (dt_min, dt_sec))