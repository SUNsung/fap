
        
        
def get_db():
    '''Connect to the application's configured database. The connection
    is unique for each request and will be reused if this is called
    again.
    '''
    if 'db' not in g:
        g.db = sqlite3.connect(
            current_app.config['DATABASE'],
            detect_types=sqlite3.PARSE_DECLTYPES
        )
        g.db.row_factory = sqlite3.Row
    
        # test that the user was inserted into the database
    with app.app_context():
        assert get_db().execute(
            'select * from user where username = 'a'',
        ).fetchone() is not None
    
    
def test_create(client, auth, app):
    auth.login()
    assert client.get('/create').status_code == 200
    client.post('/create', data={'title': 'created', 'body': ''})
    
    import pytest
from flaskr.db import get_db
    
    :copyright: © 2010 by the Pallets team.
:license: BSD, see LICENSE for more details.
'''
import codecs
import io
import uuid
from datetime import date, datetime
from flask.globals import current_app, request
from flask._compat import text_type, PY2
    
    from flask._compat import iteritems, text_type
from flask.json import dumps, loads
    
        Implements the bridge to Jinja2.
    
        if base_url is None:
        http_host = app.config.get('SERVER_NAME') or 'localhost'
        app_root = app.config['APPLICATION_ROOT']
    
            # put all lines in the file into a Python list
        strings = f.readlines()
        
        # above line leaves trailing newline characters; strip them out
        strings = [x.strip(u'\n') for x in strings]
        
        # remove empty-lines and comments
        strings = [x for x in strings if x and not x.startswith(u'#')]
        
        # insert empty string since all are being removed
        strings.insert(0, u'')
    
        def test_basic_exception(self):
        def f(p):
            1/0
        f_ident = ident(f)
        self.check_events(f, [(1, 'call', f_ident),
                              (1, 'return', f_ident),
                              ])
    
                for name in rest.split(sep):
                if not name or name == '.':
                    # current dir
                    continue
                if name == '..':
                    # parent dir
                    path, _, _ = path.rpartition(sep)
                    continue
                newpath = path + sep + name
                if newpath in seen:
                    # Already seen this path
                    path = seen[newpath]
                    if path is not None:
                        # use cached value
                        continue
                    # The symlink is not resolved, so we must have a symlink loop.
                    raise RuntimeError('Symlink loop from %r' % newpath)
                # Resolve the symbolic link
                try:
                    target = accessor.readlink(newpath)
                except OSError as e:
                    if e.errno != EINVAL and strict:
                        raise
                    # Not a symlink, or non-strict mode. We just leave the path
                    # untouched.
                    path = newpath
                else:
                    seen[newpath] = None # not resolved symlink
                    path = _resolve(path, target)
                    seen[newpath] = path # resolved symlink
    
        def test_str_subclass(self):
        self._check_str_subclass('c:')
        self._check_str_subclass('c:a')
        self._check_str_subclass('c:a\\b.txt')
        self._check_str_subclass('c:\\')
        self._check_str_subclass('c:\\a')
        self._check_str_subclass('c:\\a\\b.txt')
        self._check_str_subclass('\\\\some\\share')
        self._check_str_subclass('\\\\some\\share\\a')
        self._check_str_subclass('\\\\some\\share\\a\\b.txt')
    
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
    
        def persistent_load(self, pid):
        # This method is invoked whenever a persistent ID is encountered.
        # Here, pid is the tuple returned by DBPickler.
        cursor = self.connection.cursor()
        type_tag, key_id = pid
        if type_tag == 'MemoRecord':
            # Fetch the referenced record from the database and return it.
            cursor.execute('SELECT * FROM memos WHERE key=?', (str(key_id),))
            key, task = cursor.fetchone()
            return MemoRecord(key, task)
        else:
            # Always raises an error if you cannot return the correct object.
            # Otherwise, the unpickler will think None is the object referenced
            # by the persistent ID.
            raise pickle.UnpicklingError('unsupported persistent object')
    
    def handleSlideshow(slideshow):
    print('<html>')
    handleSlideshowTitle(slideshow.getElementsByTagName('title')[0])
    slides = slideshow.getElementsByTagName('slide')
    handleToc(slides)
    handleSlides(slides)
    print('</html>')
    
    ##
    
    #
#
#
    
    if __name__ == '__main__':
  Main()

    
    
def SendShutdownRequest():
  request = ShutdownRequest()
  # This is a blocking call.
  request.Start()

    
          if line[ 0 ] == ' ' or line[ 0 ] == '\t':
        current_group.lines.append( line.strip() )
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
        open_filename.assert_has_exact_calls( [
      call( ycm._server_stdout, { 'size': 12,
                                  'watch': True,
                                  'fix': True,
                                  'focus': False,
                                  'position': 'end' } )
    ] )
    close_buffers_for_filename.assert_has_exact_calls( [
      call( ycm._client_logfile )
    ] )
    
      def _adjust_thread_count( self ):
    # When the executor gets lost, the weakref callback will wake up
    # the worker threads.
    def weakref_cb( _, q=self._work_queue ):
      q.put( None )
    # TODO(bquinlan): Should avoid creating new threads if there are more
    # idle threads than items in the work queue.
    if len( self._threads ) < self._max_workers:
      t = threading.Thread( target=_worker,
                            args=( weakref.ref( self, weakref_cb ),
                                   self._work_queue ) )
      t.daemon = True
      t.start()
      self._threads.add( t )
    
    '''Functions for evaluating results on Cityscapes.'''
    
    
def cityscapes_to_coco_all_random(cityscapes_id):
    lookup = {
        0: -1,  # ... background
        1: -1,  # bicycle
        2: -1,  # car
        3: -1,  # person (ignore)
        4: -1,  # train
        5: -1,  # truck
        6: -1,  # motorcycle
        7: -1,  # bus
        8: -1,  # rider (ignore)
    }
    return lookup[cityscapes_id]

    
            if cfg.MODEL.MASK_ON:
            # Add the mask head
            head_loss_gradients['mask'] = _add_roi_mask_head(
                model, add_roi_mask_head_func, blob_conv, dim_conv,
                spatial_scale_conv
            )
    
    from collections import namedtuple
import logging
import numpy as np
import threading
    
        # Base Fast R-CNN blobs
    blob_dict = dict(
        labels_int32=sampled_labels.astype(np.int32, copy=False),
        rois=sampled_rois,
        bbox_targets=bbox_targets,
        bbox_inside_weights=bbox_inside_weights,
        bbox_outside_weights=bbox_outside_weights
    )