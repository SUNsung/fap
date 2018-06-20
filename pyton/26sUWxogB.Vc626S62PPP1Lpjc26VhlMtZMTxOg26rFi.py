    if blueprint is not None and seems_fishy:
        info.append('  The template was looked up from an endpoint that '
                    'belongs to the blueprint '%s'.' % blueprint)
        info.append('  Maybe you did not place a template in the right folder?')
        info.append('  See http://flask.pocoo.org/docs/blueprints/#templates')
    
            rv = app.config['SERVER_NAME']
    
        Implements signals based on blinker if available, otherwise
    falls silently back to a noop.
    
    
def test_teardown_with_previous_exception(app):
    buffer = []
    
        rv = app.test_client().get('/', errors_stream=out)
    assert rv.status_code == 500
    assert b'Internal Server Error' in rv.data
    assert not out.getvalue()

    
    
@keras_test
def test_dropout_legacy_interface():
    old_layer = keras.layers.Dropout(p=3, name='drop')
    new_layer_1 = keras.layers.Dropout(rate=3, name='drop')
    new_layer_2 = keras.layers.Dropout(3, name='drop')
    assert json.dumps(old_layer.get_config()) == json.dumps(new_layer_1.get_config())
    assert json.dumps(old_layer.get_config()) == json.dumps(new_layer_2.get_config())
    
        callbacks.set_model(callback_model)
    callbacks.set_params({
        'batch_size': batch_size,
        'epochs': epochs,
        'steps': steps_per_epoch,
        'samples': num_train_samples,
        'verbose': verbose,
        'do_validation': do_validation,
        'metrics': callback_metrics or [],
    })
    callbacks.on_train_begin()
    callback_model.stop_training = False
    for cbk in callbacks:
        cbk.validation_data = val_ins
    
    
@keras_test
def test_dropout():
    layer_test(layers.Dropout,
               kwargs={'rate': 0.5},
               input_shape=(3, 2))
    
            generated = ''
        sentence = text[start_index: start_index + maxlen]
        generated += sentence
        print('----- Generating with seed: '' + sentence + ''')
        sys.stdout.write(generated)
    
        >>> from fractions import Fraction as F
    >>> mean([F(3, 7), F(1, 21), F(5, 3), F(1, 3)])
    Fraction(13, 21)
    
    def pi_decimal():
    '''decimal'''
    D = P.Decimal
    lasts, t, s, n, na, d, da = D(0), D(3), D(3), D(1), D(0), D(0), D(24)
    while s != lasts:
        lasts = s
        n, na = n+na, na+8
        d, da = d+da, da+32
        t = (t * n) / d
        s += t
    return s
    
        def seek(self, pos, whence=0):
        '''Seek to specified position into the chunk.
        Default position is 0 (start of chunk).
        If the file is not seekable, this will result in an error.
        '''
    
    def _sync_flush(f):
    '''Ensure changes to file f are physically on disk.'''
    f.flush()
    if hasattr(os, 'fsync'):
        os.fsync(f.fileno())
    
    

# generic class
class ColorDB:
    def __init__(self, fp):
        lineno = 2
        self.__name = fp.name
        # Maintain several dictionaries for indexing into the color database.
        # Note that while Tk supports RGB intensities of 4, 8, 12, or 16 bits,
        # for now we only support 8 bit intensities.  At least on OpenWindows,
        # all intensities in the /usr/openwin/lib/rgb.txt file are 8-bit
        #
        # key is (red, green, blue) tuple, value is (name, [aliases])
        self.__byrgb = {}
        # key is name, value is (red, green, blue)
        self.__byname = {}
        # all unique names (non-aliases).  built-on demand
        self.__allnames = None
        for line in fp:
            # get this compiled regular expression from derived class
            mo = self._re.match(line)
            if not mo:
                print('Error in', fp.name, ' line', lineno, file=sys.stderr)
                lineno += 1
                continue
            # extract the red, green, blue, and name
            red, green, blue = self._extractrgb(mo)
            name = self._extractname(mo)
            keyname = name.lower()
            # BAW: for now the `name' is just the first named color with the
            # rgb values we find.  Later, we might want to make the two word
            # version the `name', or the CapitalizedVersion, etc.
            key = (red, green, blue)
            foundname, aliases = self.__byrgb.get(key, (name, []))
            if foundname != name and foundname not in aliases:
                aliases.append(name)
            self.__byrgb[key] = (foundname, aliases)
            # add to byname lookup
            self.__byname[keyname] = key
            lineno = lineno + 1
    
            try:
            # Get arguments by reading body of request.
            # We read this in chunks to avoid straining
            # socket.read(); around the 10 or 15Mb mark, some platforms
            # begin to have problems (bug #792570).
            max_chunk_size = 10*1024*1024
            size_remaining = int(self.headers['content-length'])
            L = []
            while size_remaining:
                chunk_size = min(size_remaining, max_chunk_size)
                chunk = self.rfile.read(chunk_size)
                if not chunk:
                    break
                L.append(chunk)
                size_remaining -= len(L[-1])
            data = b''.join(L)
    
    # Examples of VER command output:
#
#   Windows 2000:  Microsoft Windows 2000 [Version 5.00.2195]
#   Windows XP:    Microsoft Windows XP [Version 5.1.2600]
#   Windows Vista: Microsoft Windows [Version 6.0.6002]
#
# Note that the 'Version' string gets localized on different
# Windows versions.
    
            # import x.y.z as w binds z as w
        import test.support as y
        self.assertIs(y, test.support, y.__name__)
    
        def is_resource(self, name):
        # Maybe we could do better, but if we can get the data, it's a
        # resource.  Otherwise it isn't.
        fullname_as_path = self.fullname.replace('.', '/')
        path = f'{fullname_as_path}/{name}'
        try:
            self.zipimporter.get_data(path)
        except OSError:
            return False
        return True
    
            with (yield semaphore.acquire()):
            pass
    
        @gen_test
    def test_read_until_regex_max_bytes_ignores_extra(self):
        rs, ws = yield self.make_iostream_pair()
        closed = Event()
        rs.set_close_callback(closed.set)
        try:
            # Even though data that matches arrives the same packet that
            # puts us over the limit, we fail the request because it was not
            # found within the limit.
            ws.write(b'abcdef')
            with ExpectLog(gen_log, 'Unsatisfiable read'):
                rs.read_until_regex(b'def', max_bytes=5)
                yield closed.wait()
        finally:
            ws.close()
            rs.close()
    
    # Verify that the SSL module has all the modern upgrades. Check for several
# names individually since they were introduced at different versions,
# although they should all be present by Python 3.4 or 2.7.9.
if (not hasattr(ssl, 'SSLContext') or
        not hasattr(ssl, 'create_default_context') or
        not hasattr(ssl, 'match_hostname')):
    raise ImportError('Tornado requires an up-to-date SSL module. This means '
                      'Python 2.7.9+ or 3.4+ (although some distributions have '
                      'backported the necessary changes to older versions).')