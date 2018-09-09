
        
        
class HasKey(PostgresSimpleLookup):
    lookup_name = 'has_key'
    operator = '?'
    prepare_rhs = False
    
        def load(self):
        try:
            session_data = self._cache.get(self.cache_key)
        except Exception:
            # Some backends (e.g. memcache) raise an exception on invalid
            # cache keys. If this happens, reset the session. See #17810.
            session_data = None
        if session_data is not None:
            return session_data
        self._session_key = None
        return {}
    
        def exists(self, session_key):
        return session_key and (self.cache_key_prefix + session_key) in self._cache or super().exists(session_key)
    
        req_protocol = request.scheme
    req_site = get_current_site(request)
    
            print('Training %s ... ' % name, end='')
        t0 = time()
        clf.fit(X_train, y_train)
        train_time[name] = time() - t0
        t0 = time()
        y_pred = clf.predict(X_test)
        test_time[name] = time() - t0
        accuracy[name] = accuracy_score(y_test, y_pred)
        print('done')
    
        it = 0
    results = defaultdict(lambda: [])
    chunk = 100
    
        for i, kk in enumerate(krange):
        print('k = %i (%i out of %i)' % (kk, i + 1, len(krange)))
        for algorithm in algorithms:
            nbrs = neighbors.NearestNeighbors(n_neighbors=kk,
                                              algorithm=algorithm,
                                              leaf_size=leaf_size)
            t0 = time()
            nbrs.fit(X)
            t1 = time()
            nbrs.kneighbors(X)
            t2 = time()
    
    for i, n in enumerate(n_samples):
    for j, p in enumerate(n_features):
        X = np.random.normal(size=(n, p))
        t0 = time.time()
        ward.fit(X)
        scikits_time[j, i] = time.time() - t0
        t0 = time.time()
        hierarchy.ward(X)
        scipy_time[j, i] = time.time() - t0
    
    print('='*80 + '\n#' + '    Text vectorizers benchmark' + '\n' + '='*80 + '\n')
print('Using a subset of the 20 newsrgoups dataset ({} documents).'
      .format(len(text)))
print('This benchmarks runs in ~20 min ...')
    
        def test_class(self):
        class C: 'New-style class'
        c = C()
    
        def persistent_id(self, obj):
        # Instead of pickling MemoRecord as a regular class instance, we emit a
        # persistent ID.
        if isinstance(obj, MemoRecord):
            # Here, our persistent ID is simply a tuple, containing a tag and a
            # key, which refers to a specific record in the database.
            return ('MemoRecord', obj.key)
        else:
            # If obj does not have a persistent ID, return None. This means obj
            # needs to be pickled as usual.
            return None
    
    
def main():
    parser = ArgumentParser(description='''\
Send the contents of a directory as a MIME message.
Unless the -o option is given, the email is sent by forwarding to your local
SMTP server, which then does the normal delivery process.  Your local machine
must be running an SMTP server.
''')
    parser.add_argument('-d', '--directory',
                        help='''Mail the contents of the specified directory,
                        otherwise use the current directory.  Only the regular
                        files in the directory are sent, and we don't recurse to
                        subdirectories.''')
    parser.add_argument('-o', '--output',
                        metavar='FILE',
                        help='''Print the composed message to FILE instead of
                        sending the message to the SMTP server.''')
    parser.add_argument('-s', '--sender', required=True,
                        help='The value of the From: header (required)')
    parser.add_argument('-r', '--recipient', required=True,
                        action='append', metavar='RECIPIENT',
                        default=[], dest='recipients',
                        help='A To: header value (at least one required)')
    args = parser.parse_args()
    directory = args.directory
    if not directory:
        directory = '.'
    # Create the message
    msg = EmailMessage()
    msg['Subject'] = 'Contents of directory %s' % os.path.abspath(directory)
    msg['To'] = ', '.join(args.recipients)
    msg['From'] = args.sender
    msg.preamble = 'You will not see this in a MIME-aware mail reader.\n'
    
    ans = input('View full message?')
if ans.lower()[0] == 'n':
    sys.exit()