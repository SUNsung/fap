
        
            def samefile(self, other_path):
        '''Return whether other_path is the same or not as this file
        (as returned by os.path.samefile()).
        '''
        st = self.stat()
        try:
            other_st = other_path.stat()
        except AttributeError:
            other_st = os.stat(other_path)
        return os.path.samestat(st, other_st)
    
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
    
        def test_showrefcount(self):
        def run_python(*args):
            # this is similar to assert_python_ok but doesn't strip
            # the refcount from stderr.  It can be replaced once
            # assert_python_ok stops doing that.
            cmd = [sys.executable]
            cmd.extend(args)
            PIPE = subprocess.PIPE
            p = subprocess.Popen(cmd, stdout=PIPE, stderr=PIPE)
            out, err = p.communicate()
            p.stdout.close()
            p.stderr.close()
            rc = p.returncode
            self.assertEqual(rc, 0)
            return rc, out, err
        code = 'import sys; print(sys._xoptions)'
        # normally the refcount is hidden
        rc, out, err = run_python('-c', code)
        self.assertEqual(out.rstrip(), b'{}')
        self.assertEqual(err, b'')
        # '-X showrefcount' shows the refcount, but only in debug builds
        rc, out, err = run_python('-X', 'showrefcount', '-c', code)
        self.assertEqual(out.rstrip(), b'{'showrefcount': True}')
        if Py_DEBUG:
            self.assertRegex(err, br'^\[\d+ refs, \d+ blocks\]')
        else:
            self.assertEqual(err, b'')
    
        def testPeekBytesIO(self):
        with BytesIO(self.DATA) as bio:
            with BZ2File(bio) as bz2f:
                pdata = bz2f.peek()
                self.assertNotEqual(len(pdata), 0)
                self.assertTrue(self.TEXT.startswith(pdata))
                self.assertEqual(bz2f.read(), self.TEXT)
    
    while True:
    line = input()
    if line == '':
        break
    buffer += line
    if sqlite3.complete_statement(buffer):
        try:
            buffer = buffer.strip()
            cur.execute(buffer)
    
    # Register the adapter
sqlite3.register_adapter(Point, adapt_point)
    
    cur.execute('insert into people (name_last, age) values ('Yeltsin',   72)')
cur.execute('insert into people (name_last, age) values ('Putin',     51)')
    
            for item in self.flash_briefings.get(briefing_id, []):
            output = {}
            if item.get(CONF_TITLE) is not None:
                if isinstance(item.get(CONF_TITLE), template.Template):
                    output[ATTR_TITLE_TEXT] = item[CONF_TITLE].async_render()
                else:
                    output[ATTR_TITLE_TEXT] = item.get(CONF_TITLE)
    
            states = dict(state.attributes)
        metric = '{}.{}'.format(prefix, state.domain)
        tags = ['entity:{}'.format(state.entity_id)]
    
        def dweet_event_listener(event):
        '''Listen for new messages on the bus and sends them to Dweet.io.'''
        state = event.data.get('new_state')
        if state is None or state.state in (STATE_UNKNOWN, '') \
                or state.entity_id not in whitelist:
            return
    
            def on_modified(self, event):
            '''File modified.'''
            self.process(event)
    
    # Load some images to compare against
known_obama_image = face_recognition.load_image_file('obama.jpg')
known_biden_image = face_recognition.load_image_file('biden.jpg')
    
        # Return the result as json
    result = {
        'face_found_in_image': face_found,
        'is_picture_of_obama': is_obama
    }
    return jsonify(result)
    
        # macOS will crash due to a bug in libdispatch if you don't use 'forkserver'
    context = multiprocessing
    if 'forkserver' in multiprocessing.get_all_start_methods():
        context = multiprocessing.get_context('forkserver')
    
    # Release handle to the webcam
video_capture.release()
cv2.destroyAllWindows()

    
            # Now let's list all the faces we found in all 128 frames
        for frame_number_in_batch, face_locations in enumerate(batch_of_face_locations):
            number_of_faces_in_frame = len(face_locations)
    
        # Scale down image if it's giant so things run a little faster
    if max(unknown_image.shape) > 1600:
        pil_img = PIL.Image.fromarray(unknown_image)
        pil_img.thumbnail((1600, 1600), PIL.Image.LANCZOS)
        unknown_image = np.array(pil_img)
    
            if file.filename == '':
            return redirect(request.url)