
        
            @property
    @abstractmethod
    def value(self):
        pass
    
            (2016-01, url0), 1
        (2016-01, url0), 1
        (2016-01, url1), 1
        '''
        url = self.extract_url(line)
        period = self.extract_year_month(line)
        yield (period, url), 1
    
        def get(self, key):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                return item.value
        raise KeyError('Key not found')
    
        def parse_query(self, query):
        '''Remove markup, break text into terms, deal with typos,
        normalize capitalization, convert to use boolean operations.
        '''
        ...
    
        def reduce_priority_link_to_crawl(self, url):
        '''Reduce the priority of a link in `links_to_crawl` to avoid cycles.'''
        pass
    
        Requests that produced this error are safe to retry.
    '''
    
        if implementation == 'CPython':
        implementation_version = platform.python_version()
    elif implementation == 'PyPy':
        implementation_version = '%s.%s.%s' % (sys.pypy_version_info.major,
                                               sys.pypy_version_info.minor,
                                               sys.pypy_version_info.micro)
        if sys.pypy_version_info.releaselevel != 'final':
            implementation_version = ''.join([
                implementation_version, sys.pypy_version_info.releaselevel
            ])
    elif implementation == 'Jython':
        implementation_version = platform.python_version()  # Complete Guess
    elif implementation == 'IronPython':
        implementation_version = platform.python_version()  # Complete Guess
    else:
        implementation_version = 'Unknown'
    
    
class Server(threading.Thread):
    '''Dummy server using for unit testing'''
    WAIT_EVENT_TIMEOUT = 5
    
    # The reST default role (used for this markup: `text`) to use for all
# documents.
#default_role = None
    
        def test_is_filename(self):
        assert unquote_header_value(''\\\\Comp\\Res'', True) == '\\\\Comp\\Res'
    
        close_server = threading.Event()
    server = Server(digest_response_handler, wait_to_close_event=close_server)
    
    :copyright: (c) 2012 by Kenneth Reitz.
:license: Apache2, see LICENSE for more details.
'''
    
            http_error_msg = ''
        if isinstance(self.reason, bytes):
            # We attempt to decode utf-8 first because some servers
            # choose to localize their reason strings. If the string
            # isn't utf-8, we fall back to iso-8859-1 for all other
            # encodings. (See PR #3538)
            try:
                reason = self.reason.decode('utf-8')
            except UnicodeDecodeError:
                reason = self.reason.decode('iso-8859-1')
        else:
            reason = self.reason
    
        if args.show_plot:
        plt.plot(*zip(*timings))
        plt.title('Average time taken running isotonic regression')
        plt.xlabel('Number of observations')
        plt.ylabel('Time (s)')
        plt.axis('tight')
        plt.loglog()
        plt.show()

    
                gc.collect()
            print('- benchmarking LassoLars')
            clf = LassoLars(alpha=alpha, fit_intercept=False,
                            normalize=False, precompute=precompute)
            tstart = time()
            clf.fit(X, Y)
            lars_lasso_results.append(time() - tstart)
    
    
@ignore_warnings
def benchmark(metrics=tuple(v for k, v in sorted(METRICS.items())),
              formats=tuple(v for k, v in sorted(FORMATS.items())),
              samples=1000, classes=4, density=.2,
              n_times=5):
    '''Times metric calculations for a number of inputs
    
        #------------------------------------------------------------
    # varying N
    N_results_build = dict([(alg, np.zeros(len(Nrange)))
                            for alg in algorithms])
    N_results_query = dict([(alg, np.zeros(len(Nrange)))
                            for alg in algorithms])
    
    from time import time
    
                short_text_filename = os.path.join(short_text_lang_folder,
                                               '%s_%04d.txt' % (lang, j))
            print('Writing %s' % short_text_filename)
            open(short_text_filename, 'wb').write(
                small_content.encode('utf-8', 'ignore'))
            j += 1
            if j >= 1000:
                break
    
                appid = random.choice(self.working_appid_list)
            return str(appid)
        else:
            for _ in xrange(0, 10):
                appid = self.public_appid.get()
                if appid in self.out_of_quota_appids or appid in self.not_exist_appids:
                    continue
                else:
                    return appid
            return None
    
        def _test_host(self, url):
        try:
            header = {
                'user-agent': 'Mozilla/5.0 (Windows NT 6.1; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Safari/537.36',
                'accept': 'application/json, text/javascript, */*; q=0.01',
                'accept-encoding': 'gzip, deflate, sdch',
                'accept-language': 'en-US,en;q=0.8,ja;q=0.6,zh-CN;q=0.4,zh;q=0.2',
                'connection': 'keep-alive'
                }
            response = self.http_client.request('HEAD', url, header, '', read_payload=False)
            if response:
                return True
        except Exception as e:
            if __name__ == '__main__':
                xlog.exception('test %s e:%r', url, e)
    
    
if __name__ == '__main__':
    try:
        main({})
    except Exception:
        traceback.print_exc(file=sys.stdout)
    except KeyboardInterrupt:
        terminate()
        sys.exit()

    
            p = random.choice(self.plus)
    
    	# The current Token when an error occurred.  Since not all streams
	# can retrieve the ith Token, we have to track the Token object.
	# For parsers.  Even when it's a tree parser, token might be set.
        self.token = None
    
    
    {
    {     Then in the rules, you can execute
        Token t,u;
        ...
        input.insertAfter(t, 'text to put after t');}
        input.insertAfter(u, 'text after u');}
        System.out.println(tokens.toString());
    
    _cache = {}  # ordered!
    
        colon = _get_colon(s)
    
            if username:
            # Try to guess user home directory.  By default all users
            # directories are located in the same place and are named by
            # corresponding usernames.  If current user home directory points
            # to nonstandard place, this guess is likely wrong.
            if os.environ['USERNAME'] != username:
                drv, root, parts = self.parse_parts((userhome,))
                if parts[-1] != os.environ['USERNAME']:
                    raise RuntimeError('Can't determine home directory '
                                       'for %r' % username)
                parts[-1] = username
                if drv or root:
                    userhome = drv + root + self.join(parts[1:])
                else:
                    userhome = self.join(parts)
        return userhome
    
            self.assertIs(self.pathmodule.exists(filename + '\udfff'), False)
        self.assertIs(self.pathmodule.exists(bfilename + b'\xff'), False)
        self.assertIs(self.pathmodule.exists(filename + '\x00'), False)
        self.assertIs(self.pathmodule.exists(bfilename + b'\x00'), False)
    
                os.symlink(ABSTFN+'1', ABSTFN+'2')
            os.symlink(ABSTFN+'2', ABSTFN+'1')
            self.assertEqual(realpath(ABSTFN+'1'), ABSTFN+'1')
            self.assertEqual(realpath(ABSTFN+'2'), ABSTFN+'2')
    
        def test_bpo20891(self):
        '''
        bpo-20891: Calling PyGILState_Ensure in a non-Python thread before
        calling PyEval_InitThreads() must not crash. PyGILState_Ensure() must
        call PyEval_InitThreads() for us in this case.
        '''
        out, err = self.run_embedded_interpreter('bpo20891')
        self.assertEqual(out, '')
        self.assertEqual(err, '')
    
    
def test_suite():
    return unittest.makeSuite(BuildTestCase)
    
    @unittest.skipIf(getattr(bdist_wininst, '_unsupported', False),
    'bdist_wininst is not supported in this install')
class BuildWinInstTestCase(support.TempdirManager,
                           support.LoggingSilencer,
                           unittest.TestCase):
    
            self._set_uname(('Darwin', 'macziade', '8.11.1',
                   ('Darwin Kernel Version 8.11.1: '
                    'Wed Oct 10 18:23:28 PDT 2007; '
                    'root:xnu-792.25.20~1/RELEASE_I386'), 'i386'))
        _osx_support._remove_original_values(get_config_vars())
        get_config_vars()['MACOSX_DEPLOYMENT_TARGET'] = '10.3'