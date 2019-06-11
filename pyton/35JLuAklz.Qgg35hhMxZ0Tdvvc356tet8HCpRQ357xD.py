
        
        
class DoubleHash(HashTable):
    '''
        Hash Table example with open addressing and Double Hash
    '''
    def __init__(self, *args, **kwargs):
        super().__init__(*args, **kwargs)
    
    
class QuadraticProbing(HashTable):
    '''
        Basic Hash Table example with open addressing using Quadratic Probing 
    '''
    def __init__(self, *args, **kwargs):
        super().__init__(*args, **kwargs)
    
            self.__prepare__(len(A), len(B))
    
    This is a pure Python implementation of Dynamic Programming solution to the longest increasing subsequence of a given sequence.
    
    for i, n in enumerate(n_samples):
    for j, p in enumerate(n_features):
        X = np.random.normal(size=(n, p))
        t0 = time.time()
        ward.fit(X)
        scikits_time[j, i] = time.time() - t0
        t0 = time.time()
        hierarchy.ward(X)
        scipy_time[j, i] = time.time() - t0
    
                tstart = time()
            clf.fit(X_train, y_train)
            asgd_results[i, j, 0] = mean_squared_error(clf.predict(X_test),
                                                       y_test)
            asgd_results[i, j, 1] = time() - tstart
    
        scikit_classifier_results.append(
        delta.seconds + delta.microseconds / mu_second)
    
    digits = datasets.load_digits()
images = digits.images
X = np.reshape(images, (len(images), -1))
connectivity = grid_to_graph(*images[0].shape)
    
    # #############################################################################
# Plot result
fig = plt.figure()
ax = p3.Axes3D(fig)
ax.view_init(7, -80)
for l in np.unique(label):
    ax.scatter(X[label == l, 0], X[label == l, 1], X[label == l, 2],
               color=plt.cm.jet(float(l) / np.max(label + 1)),
               s=20, edgecolor='k')
plt.title('With connectivity constraints (time %.2fs)' % elapsed_time)
    
    from . import abc as resources_abc
from contextlib import contextmanager, suppress
from importlib import import_module
from importlib.abc import ResourceLoader
from io import BytesIO, TextIOWrapper
from pathlib import Path
from types import ModuleType
from typing import Iterable, Iterator, Optional, Set, Union   # noqa: F401
from typing import cast
from typing.io import BinaryIO, TextIO
from zipimport import ZipImportError
    
    # Now add the related image to the html part.
with open('roasted-asparagus.jpg', 'rb') as img:
    msg.get_payload()[1].add_related(img.read(), 'image', 'jpeg',
                                     cid=asparagus_cid)
    
    ##
    
        # Create queues
    task_queue = Queue()
    done_queue = Queue()
    
    con = sqlite3.connect(':memory:')
con.isolation_level = None
cur = con.cursor()
    
    from __future__ import absolute_import, unicode_literals
import sys
from operator import itemgetter
from collections import defaultdict
import jieba.posseg
from .tfidf import KeywordExtractor
from .._compat import *
    
    
PrevStatus = {
    'B': 'ES',
    'M': 'MB',
    'S': 'SE',
    'E': 'BM'
}
    
    if opt.topK is None:
    topK = 10
else:
    topK = int(opt.topK)
    
    import jieba
import jieba.analyse
from optparse import OptionParser
    
    import jieba
import time
import glob
import sys
import os
import random
    
    cat abc.txt | python jiebacmd.py | sort | uniq -c | sort -nr -k1 | head -100
    
    
    
    from .charsetprober import CharSetProber
from .enums import ProbingState, MachineState
    
    EUCJP_CHAR_LEN_TABLE = (2, 2, 2, 3, 1, 0)
    
        def reset(self):
        '''
        Reset the UniversalDetector and all of its probers back to their
        initial states.  This is called by ``__init__``, so you only need to
        call this directly in between analyses of different documents.
        '''
        self.result = {'encoding': None, 'confidence': 0.0, 'language': None}
        self.done = False
        self._got_data = False
        self._has_win_bytes = False
        self._input_state = InputState.PURE_ASCII
        self._last_char = b''
        if self._esc_charset_prober:
            self._esc_charset_prober.reset()
        for prober in self._charset_probers:
            prober.reset()
    
            if self.state == ProbingState.DETECTING:
            if self.get_confidence() > self.SHORTCUT_THRESHOLD:
                self._state = ProbingState.FOUND_IT