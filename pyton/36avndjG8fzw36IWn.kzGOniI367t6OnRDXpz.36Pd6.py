
class InvalidProxyURL(InvalidURL):
    '''The proxy URL provided is invalid.'''
    
        def lower_items(self):
        '''Like iteritems(), but with all lowercase keys.'''
        return (
            (lowerkey, keyval[1])
            for (lowerkey, keyval)
            in self._store.items()
        )
    
        if 'start_method' in data:
        set_start_method(data['start_method'], force=True)
    
            Returns a tuple (None_or_tests_from_file, should_recurse).
        '''
        basename = os.path.basename(full_path)
        if os.path.isfile(full_path):
            if not VALID_MODULE_NAME.match(basename):
                # valid Python identifiers only
                return None, False
            if not self._match_path(basename, full_path, pattern):
                return None, False
            # if the test file matches, load it
            name = self._get_name_from_path(full_path)
            try:
                module = self._get_module_from_name(name)
            except case.SkipTest as e:
                return _make_skipped_test(name, e, self.suiteClass), False
            except:
                error_case, error_message = \
                    _make_failed_import_test(name, self.suiteClass)
                self.errors.append(error_message)
                return error_case, False
            else:
                mod_file = os.path.abspath(
                    getattr(module, '__file__', full_path))
                realpath = _jython_aware_splitext(
                    os.path.realpath(mod_file))
                fullpath_noext = _jython_aware_splitext(
                    os.path.realpath(full_path))
                if realpath.lower() != fullpath_noext.lower():
                    module_dir = os.path.dirname(realpath)
                    mod_name = _jython_aware_splitext(
                        os.path.basename(full_path))
                    expected_dir = os.path.dirname(full_path)
                    msg = ('%r module incorrectly imported from %r. Expected '
                           '%r. Is this module globally installed?')
                    raise ImportError(
                        msg % (mod_name, module_dir, expected_dir))
                return self.loadTestsFromModule(module, pattern=pattern), False
        elif os.path.isdir(full_path):
            if (not namespace and
                not os.path.isfile(os.path.join(full_path, '__init__.py'))):
                return None, False
    
            loader = unittest.TestLoader()
        try:
            loader.loadTestsFromNames(['testcase_1'], m)
        except TypeError:
            pass
        else:
            self.fail('Should have raised TypeError')
    
    
# This contains rename rules that are easy to handle.  We ignore the more
# complex stuff (e.g. mapping the names in the urllib and types modules).
# These rules should be run before import names are fixed.
NAME_MAPPING = {
    ('__builtin__', 'xrange'):     ('builtins', 'range'),
    ('__builtin__', 'reduce'):     ('functools', 'reduce'),
    ('__builtin__', 'intern'):     ('sys', 'intern'),
    ('__builtin__', 'unichr'):     ('builtins', 'chr'),
    ('__builtin__', 'unicode'):    ('builtins', 'str'),
    ('__builtin__', 'long'):       ('builtins', 'int'),
    ('itertools', 'izip'):         ('builtins', 'zip'),
    ('itertools', 'imap'):         ('builtins', 'map'),
    ('itertools', 'ifilter'):      ('builtins', 'filter'),
    ('itertools', 'ifilterfalse'): ('itertools', 'filterfalse'),
    ('itertools', 'izip_longest'): ('itertools', 'zip_longest'),
    ('UserDict', 'IterableUserDict'): ('collections', 'UserDict'),
    ('UserList', 'UserList'): ('collections', 'UserList'),
    ('UserString', 'UserString'): ('collections', 'UserString'),
    ('whichdb', 'whichdb'): ('dbm', 'whichdb'),
    ('_socket', 'fromfd'): ('socket', 'fromfd'),
    ('_multiprocessing', 'Connection'): ('multiprocessing.connection', 'Connection'),
    ('multiprocessing.process', 'Process'): ('multiprocessing.context', 'Process'),
    ('multiprocessing.forking', 'Popen'): ('multiprocessing.popen_fork', 'Popen'),
    ('urllib', 'ContentTooShortError'): ('urllib.error', 'ContentTooShortError'),
    ('urllib', 'getproxies'): ('urllib.request', 'getproxies'),
    ('urllib', 'pathname2url'): ('urllib.request', 'pathname2url'),
    ('urllib', 'quote_plus'): ('urllib.parse', 'quote_plus'),
    ('urllib', 'quote'): ('urllib.parse', 'quote'),
    ('urllib', 'unquote_plus'): ('urllib.parse', 'unquote_plus'),
    ('urllib', 'unquote'): ('urllib.parse', 'unquote'),
    ('urllib', 'url2pathname'): ('urllib.request', 'url2pathname'),
    ('urllib', 'urlcleanup'): ('urllib.request', 'urlcleanup'),
    ('urllib', 'urlencode'): ('urllib.parse', 'urlencode'),
    ('urllib', 'urlopen'): ('urllib.request', 'urlopen'),
    ('urllib', 'urlretrieve'): ('urllib.request', 'urlretrieve'),
    ('urllib2', 'HTTPError'): ('urllib.error', 'HTTPError'),
    ('urllib2', 'URLError'): ('urllib.error', 'URLError'),
}
    
            async def foo():
            async with manager():
                pass
            async with manager() as x:
                pass
            async with manager() as (x, y):
                pass
            async with manager(), manager():
                pass
            async with manager() as x, manager() as y:
                pass
            async with manager() as x, manager():
                pass
            raise Done
    
        def casefold_parts(self, parts):
        return [p.lower() for p in parts]
    
    Cela ressemble à un excellent recipie[1] déjeuner.
    
        for filename in os.listdir(directory):
        path = os.path.join(directory, filename)
        if not os.path.isfile(path):
            continue
        # Guess the content type based on the file's extension.  Encoding
        # will be ignored, although we should check for simple things like
        # gzip'd or compressed files.
        ctype, encoding = mimetypes.guess_type(path)
        if ctype is None or encoding is not None:
            # No guess could be made, or the file is encoded (compressed), so
            # use a generic bag-of-bits type.
            ctype = 'application/octet-stream'
        maintype, subtype = ctype.split('/', 1)
        with open(path, 'rb') as fp:
            msg.add_attachment(fp.read(),
                               maintype=maintype,
                               subtype=subtype,
                               filename=filename)
    # Now send or store the message
    if args.output:
        with open(args.output, 'wb') as fp:
            fp.write(msg.as_bytes(policy=SMTP))
    else:
        with smtplib.SMTP('localhost') as s:
            s.send_message(msg)
    
            print('Ordered results using pool.apply_async():')
        for r in results:
            print('\t', r.get())
        print()
    
    
def makeKeyFiles(name, keySize):
    if os.path.exists('%s_pubkey.txt' % name) or os.path.exists('%s_privkey.txt' % name):
        print('\nWARNING:')
        print(''%s_pubkey.txt' or '%s_privkey.txt' already exists. \n'
              'Use a different name or delete these files and re-run this program.' %
              (name, name))
        sys.exit()
    
    #Some examples
    
    	tvals = [int(2**32 * abs(math.sin(i+1))) for i in range(64)]
    
                self.decision_boundary = X[best_split]
            self.left = Decision_Tree(depth = self.depth - 1, min_leaf_size = self.min_leaf_size)
            self.right = Decision_Tree(depth = self.depth - 1, min_leaf_size = self.min_leaf_size)
            self.left.train(left_X, left_y)
            self.right.train(right_X, right_y)
        else:
            self.prediction = np.mean(y)
    
    def englishFreqMatchScore(message):
    '''
    >>> englishFreqMatchScore('Hello World')
    1
    '''
    freqOrder = getFrequencyOrder(message)
    matchScore = 0
    for commonLetter in ETAOIN[:6]:
        if commonLetter in freqOrder[:6]:
            matchScore += 1