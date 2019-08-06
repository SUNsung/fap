
        
        from httpie.compat import is_windows
from httpie.config import DEFAULT_CONFIG_DIR, Config
    
    
def repr_dict_nice(d):
    def prepare_dict(d):
        for k, v in d.items():
            if isinstance(v, dict):
                v = dict(prepare_dict(v))
            elif isinstance(v, bytes):
                v = v.decode('utf8')
            elif not isinstance(v, (int, str)):
                v = repr(v)
            yield k, v
    return json.dumps(
        dict(prepare_dict(d)),
        indent=4, sort_keys=True,
    )
    
    
with codecs.open(FILE_PATH, encoding='utf8') as f:
    # Strip because we don't want new lines in the data so that we can
    # easily count occurrences also when embedded in JSON (where the new
    # line would be escaped).
    FILE_CONTENT = f.read().strip()
    
    
def has_docutils():
    try:
        # noinspection PyUnresolvedReferences
        import docutils
        return True
    except ImportError:
        return False
    
    # The reST default role (used for this markup: `text`) to use for all
# documents.
#default_role = None
    
            # Find all people in the image using a trained classifier model
        # Note: You can pass in either a classifier file name or a classifier model instance
        predictions = predict(full_file_path, model_path='trained_knn_model.clf')
    
    print('I found {} face(s) in this photograph.'.format(len(face_locations)))
    
    if __name__ == '__main__':
    app.run(host='0.0.0.0', port=5001, debug=True)

    
        for face_location in face_locations:
        print_result(image_to_check, face_location)
    
    with open('README.rst') as readme_file:
    readme = readme_file.read()
    
    
def load_image_file(file, mode='RGB'):
    '''
    Loads an image file (.jpg, .png, etc) into a numpy array
    
    
# Many subprocess use to process frames.
def process(worker_id, read_frame_list, write_frame_list):
    known_face_encodings = Global.known_face_encodings
    known_face_names = Global.known_face_names
    while not Global.is_exit:
    
        name = 'Unknown'
    
    import face_recognition
from sklearn import svm
import os
    
    IMPORT_MAPPING.update({
    'cPickle': 'pickle',
    '_elementtree': 'xml.etree.ElementTree',
    'FileDialog': 'tkinter.filedialog',
    'SimpleDialog': 'tkinter.simpledialog',
    'DocXMLRPCServer': 'xmlrpc.server',
    'SimpleHTTPServer': 'http.server',
    'CGIHTTPServer': 'http.server',
    # For compatibility with broken pickles saved in old Python 3 versions
    'UserDict': 'collections',
    'UserList': 'collections',
    'UserString': 'collections',
    'whichdb': 'dbm',
    'StringIO':  'io',
    'cStringIO': 'io',
})
    
    
def decistmt(s):
    result = []
    g = tokenize(BytesIO(s.encode('utf-8')).readline)   # tokenize the string
    for toknum, tokval, _, _, _  in g:
        if toknum == NUMBER and '.' in tokval:  # replace NUMBER tokens
            result.extend([
                (NAME, 'Decimal'),
                (OP, '('),
                (STRING, repr(tokval)),
                (OP, ')')
            ])
        else:
            result.append((toknum, tokval))
    return untokenize(result).decode('utf-8')
    
            LDVERSION = LDVERSION.replace('$(VERSION)', VERSION)
        LDVERSION = LDVERSION.replace('$(ABIFLAGS)', ABIFLAGS)
        config_suffix = '-' + LDVERSION
        if getVersionMajorMinor() >= (3, 6):
            config_suffix = config_suffix + '-darwin'
    else:
        config_suffix = ''      # Python 2.x
    
        def __init__(self):
        Thread.__init__(self, name='MainThread', daemon=False)
        self._set_tstate_lock()
        self._started.set()
        self._set_ident()
        if _HAVE_THREAD_NATIVE_ID:
            self._set_native_id()
        with _active_limbo_lock:
            _active[self._ident] = self
    
        def test_scope_isolation_from_global(self):
        expected = {0: None, 1: None, 2: None, 3: None, 4: None, 5: None,
                    6: None, 7: None, 8: None, 9: None}
        actual = {g: None for g in range(10)}
        self.assertEqual(actual, expected)
        self.assertEqual(g, 'Global variable')
    
            Return value is a tuple (type, encoding) where type is None if
        the type can't be guessed (no or unknown suffix) or a string
        of the form type/subtype, usable for a MIME Content-type
        header; and encoding is None for no encoding or the name of
        the program used to encode (e.g. compress or gzip).  The
        mappings are table driven.  Encoding suffixes are case
        sensitive; type suffixes are first tried case sensitive, then
        case insensitive.
    
            NOTE: the 'message id' form isn't supported by XOVER
        '''
        cmd = 'OVER' if 'OVER' in self._caps else 'XOVER'
        if isinstance(message_spec, (tuple, list)):
            start, end = message_spec
            cmd += ' {0}-{1}'.format(start, end or '')
        elif message_spec is not None:
            cmd = cmd + ' ' + message_spec
        resp, lines = self._longcmdstring(cmd, file)
        fmt = self._getoverviewfmt()
        return resp, _parse_overview(lines, fmt)
    
            When the count of unfinished tasks drops to zero, join() unblocks.
        '''
        with self.all_tasks_done:
            while self.unfinished_tasks:
                self.all_tasks_done.wait()
    
            The returned string is always coerced to lower case.  If there is no
        Content-Type header, or if that header has no charset parameter,
        failobj is returned.
        '''
        missing = object()
        charset = self.get_param('charset', missing)
        if charset is missing:
            return failobj
        if isinstance(charset, tuple):
            # RFC 2231 encoded, so decode it, and it better end up as ascii.
            pcharset = charset[0] or 'us-ascii'
            try:
                # LookupError will be raised if the charset isn't known to
                # Python.  UnicodeError will be raised if the encoded text
                # contains a character not in the charset.
                as_bytes = charset[2].encode('raw-unicode-escape')
                charset = str(as_bytes, pcharset)
            except (LookupError, UnicodeError):
                charset = charset[2]
        # charset characters must be in us-ascii range
        try:
            charset.encode('us-ascii')
        except UnicodeError:
            return failobj
        # RFC 2046, $4.1.2 says charsets are not case sensitive
        return charset.lower()
    
                    --===--
                ''')),
    
        # As an early adopter, we sanity check the
    # test.support.import_fresh_module utility function
    def test_pure_python(self):
        self.assertIsNot(original_warnings, self.module)
        self.assertTrue(hasattr(self.module.warn, '__code__'))
    
            # Adding index on 'TagValue', fields ['project_id', '_key', 'last_seen']
        db.create_index(u'tagstore_tagvalue', ['project_id', 'key_id', 'last_seen'])
    
            # Adding index on 'EventTag', fields ['project_id', 'key', 'value']
        db.create_index(u'tagstore_eventtag', ['project_id', 'key_id', 'value_id'])
    
            # Adding index on 'TagValue', fields ['project_id', '_key', 'last_seen']
        db.create_index(u'tagstore_tagvalue', ['project_id', 'key_id', 'last_seen'])
    
        models = {
        'tagstore.eventtag': {
            'Meta': {'unique_together': '(('project_id', 'event_id', 'key', 'value'),)', 'object_name': 'EventTag', 'index_together': '(('project_id', 'key', 'value'), ('group_id', 'key', 'value'))'},
            'date_added': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now', 'db_index': 'True'}),
            'event_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {}),
            'group_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {}),
            'id': ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {'primary_key': 'True'}),
            'key': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagKey']', 'db_column': ''key_id''}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {}),
            'value': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagValue']', 'db_column': ''value_id''})
        },
        'tagstore.grouptagkey': {
            'Meta': {'unique_together': '(('project_id', 'group_id', '_key'),)', 'object_name': 'GroupTagKey'},
            '_key': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagKey']', 'db_column': ''key_id''}),
            'group_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'db_index': 'True'}),
            'id': ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {'primary_key': 'True'}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'db_index': 'True'}),
            'values_seen': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'default': '0'})
        },
        'tagstore.grouptagvalue': {
            'Meta': {'unique_together': '(('project_id', 'group_id', '_key', '_value'),)', 'object_name': 'GroupTagValue', 'index_together': '(('project_id', '_key', '_value', 'last_seen'),)'},
            '_key': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagKey']', 'db_column': ''key_id''}),
            '_value': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagValue']', 'db_column': ''value_id''}),
            'first_seen': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now', 'null': 'True', 'db_index': 'True'}),
            'group_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'db_index': 'True'}),
            'id': ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {'primary_key': 'True'}),
            'last_seen': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now', 'null': 'True', 'db_index': 'True'}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'db_index': 'True'}),
            'times_seen': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'default': '0'})
        },
        'tagstore.tagkey': {
            'Meta': {'unique_together': '(('project_id', 'environment_id', 'key'),)', 'object_name': 'TagKey'},
            'environment_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'null': 'True'}),
            'id': ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {'primary_key': 'True'}),
            'key': ('django.db.models.fields.CharField', [], {'max_length': '32'}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'db_index': 'True'}),
            'status': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'default': '0'}),
            'values_seen': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'default': '0'})
        },
        'tagstore.tagvalue': {
            'Meta': {'unique_together': '(('project_id', '_key', 'value'),)', 'object_name': 'TagValue', 'index_together': '(('project_id', '_key', 'last_seen'),)'},
            '_key': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagKey']', 'db_column': ''key_id''}),
            'data': ('sentry.db.models.fields.gzippeddict.GzippedDictField', [], {'null': 'True', 'blank': 'True'}),
            'first_seen': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now', 'null': 'True', 'db_index': 'True'}),
            'id': ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {'primary_key': 'True'}),
            'last_seen': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now', 'null': 'True', 'db_index': 'True'}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'db_index': 'True'}),
            'times_seen': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'default': '0'}),
            'value': ('django.db.models.fields.CharField', [], {'max_length': '200'})
        }
    }
    
    from datetime import timedelta
from django.db.models import Max
from django.utils import timezone