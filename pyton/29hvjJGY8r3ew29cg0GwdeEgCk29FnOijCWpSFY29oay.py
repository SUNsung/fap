
        
            def process_options(self, args, opts):
        try:
            self.settings.setdict(arglist_to_dict(opts.set),
                                  priority='cmdline')
        except ValueError:
            raise UsageError('Invalid -s value, use -s NAME=VALUE', print_help=False)
    
        def start_requests(self):
        qargs = {'total': self.total, 'show': self.show}
        url = '{}?{}'.format(self.baseurl, urlencode(qargs, doseq=1))
        return [scrapy.Request(url, dont_filter=True)]
    
            # start checks
        if opts.list:
            for spider, methods in sorted(contract_reqs.items()):
                if not methods and not opts.verbose:
                    continue
                print(spider)
                for method in sorted(methods):
                    print('  * %s' % method)
        else:
            start = time.time()
            self.crawler_process.start()
            stop = time.time()
    
    # Documents to append as an appendix to all manuals.
#latex_appendices = []
    
            '''
        # Check for the root of save problems
        new_errs = self.aug.match('/augeas//error')
        # logger.error('During Save - %s', mod_conf)
        logger.error('Unable to save files: %s. Attempted Save Notes: %s',
                     ', '.join(err[13:len(err) - 6] for err in new_errs
                               # Only new errors caused by recent save
                               if err not in ex_errs), self.save_notes)
    
    
# -- Options for HTML output ----------------------------------------------
    
        def test_duplicate_function_equality(self):
        # Body of `duplicate' is the exact same as self.b
        def duplicate():
            'my docstring'
            return 3
        self.assertNotEqual(self.b, duplicate)
    
        def _testFile(self, filename):
        path = os.path.join(os.path.dirname(__file__), filename)
        TestRoundtrip.check_roundtrip(self, open(path, 'rb'))
    
    
# Is a path a directory?
# This follows symbolic links, so both islink() and isdir()
# can be true for the same path on systems that support symlinks
def isdir(s):
    '''Return true if the pathname refers to an existing directory.'''
    try:
        st = os.stat(s)
    except (OSError, ValueError):
        return False
    return stat.S_ISDIR(st.st_mode)
    
    
def read_text(package: Package,
              resource: Resource,
              encoding: str = 'utf-8',
              errors: str = 'strict') -> str:
    '''Return the decoded string of the resource.