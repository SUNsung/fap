
        
            def set(self, results, query):
        '''Set the result for the given query key in the cache.
    
    
class LookupService(object):
    
        def _clean_req(self, request, method, results):
        ''' stop the request from returning objects and records any errors '''
    
        def __str__(self):
        return (
            '<downloader.Slot concurrency=%r delay=%0.2f randomize_delay=%r '
            'len(active)=%d len(queue)=%d len(transferring)=%d lastseen=%s>' % (
                self.concurrency, self.delay, self.randomize_delay,
                len(self.active), len(self.queue), len(self.transferring),
                datetime.fromtimestamp(self.lastseen).isoformat()
            )
        )
    
        def download_request(self, request, spider):
        p = urlparse_cached(request)
        scheme = 'https' if request.meta.get('is_secure') else 'http'
        bucket = p.hostname
        path = p.path + '?' + p.query if p.query else p.path
        url = '%s://%s.s3.amazonaws.com%s' % (scheme, bucket, path)
        if self.anon:
            request = request.replace(url=url)
        elif self._signer is not None:
            import botocore.awsrequest
            awsrequest = botocore.awsrequest.AWSRequest(
                method=request.method,
                url='%s://s3.amazonaws.com/%s%s' % (scheme, bucket, path),
                headers=request.headers.to_unicode_dict(),
                data=request.body)
            self._signer.add_auth(awsrequest)
            request = request.replace(
                url=url, headers=awsrequest.headers.items())
        else:
            signed_headers = self.conn.make_request(
                    method=request.method,
                    bucket=bucket,
                    key=unquote(p.path),
                    query_args=unquote(p.query),
                    headers=request.headers,
                    data=request.body)
            request = request.replace(url=url, headers=signed_headers)
        return self._download_http(request, spider)

    
            if not isinstance(response, HtmlResponse) or response.status != 200:
            return response
    
    
class BaseDupeFilter(object):
    
    class NotSupported(Exception):
    '''Indicates a feature or method is not supported'''
    pass
    
        def iterkeys(self):
        '''Return an iterator over keys.'''
        self._refresh()
        for key in self._toc:
            try:
                self._lookup(key)
            except KeyError:
                continue
            yield key
    
        def nearest(self, red, green, blue):
        '''Return the name of color nearest (red, green, blue)'''
        # BAW: should we use Voronoi diagrams, Delaunay triangulation, or
        # octree for speeding up the locating of nearest point?  Exhaustive
        # search is inefficient, but seems fast enough.
        nearest = -1
        nearest_name = ''
        for name, aliases in self.__byrgb.values():
            r, g, b = self.__byname[name.lower()]
            rdelta = red - r
            gdelta = green - g
            bdelta = blue - b
            distance = rdelta * rdelta + gdelta * gdelta + bdelta * bdelta
            if nearest == -1 or distance < nearest:
                nearest = distance
                nearest_name = name
        return nearest_name
    
    T_IV2 = dataclasses.InitVar[int]
T_IV3 = dataclasses.InitVar
    
    @dataclass
class IV:
    T_IV4 = InitVar
    iv0: InitVar[int]
    iv1: InitVar
    iv2: T_IV2
    iv3: T_IV3
    not_iv4: T_IV4  # When using string annotations, this field is not recognized as an InitVar.

    
        The decoding-related arguments have the same semantics as those of
    bytes.decode().
    '''
    resource = _normalize_path(resource)
    package = _get_package(package)
    with open_text(package, resource, encoding, errors) as fp:
        return fp.read()
    
            a = range(-2, 3)
        self.assertEqual(a.index(0), 2)
        self.assertEqual(range(1, 10, 3).index(4), 1)
        self.assertEqual(range(1, -10, -3).index(-5), 2)
    
    def scanvars(reader, frame, locals):
    '''Scan one logical line of Python and look up values of variables used.'''
    vars, lasttoken, parent, prefix, value = [], None, None, '', __UNDEF__
    for ttype, token, start, end, line in tokenize.generate_tokens(reader):
        if ttype == tokenize.NEWLINE: break
        if ttype == tokenize.NAME and token not in keyword.kwlist:
            if lasttoken == '.':
                if parent is not __UNDEF__:
                    value = getattr(parent, token, __UNDEF__)
                    vars.append((prefix + token, prefix, value))
            else:
                where, value = lookup(token, frame, locals)
                vars.append((token, where, value))
        elif token == '.':
            prefix += lasttoken + '.'
            parent = value
        else:
            parent, prefix = None, ''
        lasttoken = token
    return vars