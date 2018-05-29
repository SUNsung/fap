
        
                self.assertTrue(self.addr_default.conflicts(self.addr))
        self.assertTrue(self.addr_default.conflicts(self.addr1))
        self.assertTrue(self.addr_default.conflicts(self.addr_defined))
    
        >>> from fractions import Fraction as F
    >>> _sum([F(2, 3), F(7, 5), F(1, 4), F(5, 6)])
    (<class 'fractions.Fraction'>, Fraction(63, 20), 4)
    
    if __name__ == '__main__':
    if len(sys.argv) < 2:
        zones = TZInfo.zonelist()
        for z in zones:
            print(z)
        sys.exit()
    filepath = sys.argv[1]
    if not filepath.startswith('/'):
        filepath = os.path.join('/usr/share/zoneinfo', filepath)
    with open(filepath, 'rb') as fileobj:
        tzi = TZInfo.fromfile(fileobj)
    tzi.dump(sys.stdout)

    
        def _getoverviewfmt(self):
        '''Internal: get the overview format. Queries the server if not
        already done, else returns the cached value.'''
        try:
            return self._cachedoverviewfmt
        except AttributeError:
            pass
        try:
            resp, lines = self._longcmdstring('LIST OVERVIEW.FMT')
        except NNTPPermanentError:
            # Not supported by server?
            fmt = _DEFAULT_OVERVIEW_FMT[:]
        else:
            fmt = _parse_overview_fmt(lines)
        self._cachedoverviewfmt = fmt
        return fmt
    
                def main():
                for i in test_gen():
                    lno = 10
                lno = 11
        '''
        modules = { TEST_MODULE: code }
        with create_modules(modules):
            self.expect_set = [
                ('line', 2, 'tfunc_import'),
                    break_in_func('test_gen', TEST_MODULE_FNAME),
                ('None', 2, 'tfunc_import'),             ('continue', ),
                ('line', 3, 'test_gen', ({1:1}, [])),    ('next', ),
                ('line', 4, 'test_gen'),                 ('next', ),
                ('line', 5, 'test_gen'),                 ('next', ),
                ('line', 6, 'test_gen'),                 ('next', ),
                ('exception', 9, 'main', StopIteration), ('step', ),
                ('line', 11, 'main'),                    ('quit', ),
    
            self.assertRaises(xml.dom.NamespaceErr, doc.renameNode, attr,
                          'http://xml.python.org/ns', 'xmlns')
        self.checkRenameNodeSharedConstraints(doc, attr)
        doc.unlink()
    
    from xml.dom.NodeFilter import NodeFilter
    
    def main():
    for name, fn in [('sequential', sequential),
                     ('processes', with_process_pool_executor),
                     ('threads', with_thread_pool_executor)]:
        sys.stdout.write('%s: ' % name.ljust(12))
        start = time.time()
        if fn() != [True] * len(PRIMES):
            sys.stdout.write('failed\n')
        else:
            sys.stdout.write('%.2f seconds\n' % (time.time() - start))
    
    
def ExtractKeywordsFromGroup_KeywordMiddle_test():
  assert_that( syntax_parse._ExtractKeywordsFromGroup(
                 syntax_parse.SyntaxGroup( '', [
                   'foo contained bar',
                   'zoo goo'
                 ] ) ),
               contains_inanyorder( 'foo', 'contained', 'bar', 'zoo', 'goo' ) )
    
    def api_type(subtype = ''):
    return 'api-' + subtype if subtype else 'api'
    
        def pre(self):
        super(APIv1LoginController, self).pre()
        c.extension = 'json'
        set_extension(request.environ, 'json')
    
            '''
        err = None
        if 'name' in notes_json and notes_json['name'] != friend:
            # The 'name' in the JSON is optional, but if present, must
            # match the username from the URL
            err = errors.RedditError('BAD_USERNAME', fields='name')
        if 'note' in notes_json and not c.user.gold:
            err = errors.RedditError('GOLD_REQUIRED', fields='note')
        if err:
            self.on_validation_error(err)
    
                if links:
                kw = {}
                if wrapper:
                    links = wrap_links(links, wrapper = wrapper)
                else:
                    links = wrap_links(links)
                links = list(links)
                links = max(links, key = lambda x: x._score) if links else None
            if not links and wrapper:
                return wrapper(None)
            return links
            # note: even if _by_url successed or a link was passed in,
            # it is possible link_listing.things is empty if the
            # link(s) is/are members of a private reddit
            # return the link with the highest score (if more than 1)
        except:
            #we don't want to return 500s in other people's pages.
            import traceback
            g.log.debug('FULLPATH: get_link error in buttons code')
            g.log.debug(traceback.format_exc())
            if wrapper:
                return wrapper(None)
    
            Responds with a 120x50 `image/png` which should be displayed
        to the user.
    
        def send503(self):
        retry_after = request.environ.get('retry_after')
        if retry_after:
            response.headers['Retry-After'] = str(retry_after)
        return request.environ['usable_error_content']
    
        def GET_cachehealth(self):
        results = {}
        behaviors = {
            # Passed on to poll(2) in milliseconds
            'connect_timeout': 1000,
            # Passed on to setsockopt(2) in microseconds
            'receive_timeout': int(1e6),
            'send_timeout': int(1e6),
        }
        for server in cache._CACHE_SERVERS:
            try:
                if server.startswith('udp:'):
                    # libmemcached doesn't support UDP get/fetch operations
                    continue
                mc = pylibmc.Client([server], behaviors=behaviors)
                # it's ok that not all caches are mcrouter, we'll just ignore
                # the miss either way
                mc.get('__mcrouter__.version')
                results[server] = 'OK'
            except pylibmc.Error as e:
                g.log.warning('Health check for %s FAILED: %s', server, e)
                results[server] = 'FAILED %s' % e
        return json.dumps(results)
