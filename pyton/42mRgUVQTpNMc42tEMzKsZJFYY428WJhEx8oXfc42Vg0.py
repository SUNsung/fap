
        
            def prepare_value(self, value):
        if isinstance(value, datetime.datetime):
            value = to_current_timezone(value)
        return value
    
        def as_oracle(self, compiler, connection, **extra_context):
        if self.output_field.get_internal_type() == 'DurationField':
            expression = self.get_source_expressions()[0]
            options = self._get_repr_options()
            from django.db.backends.oracle.functions import IntervalToSeconds, SecondsToInterval
            return compiler.compile(
                SecondsToInterval(self.__class__(IntervalToSeconds(expression), **options))
            )
        return super().as_sql(compiler, connection, **extra_context)
    
        def test_filtered_aggregate_ref_subquery_annotation(self):
        aggs = Author.objects.annotate(
            earliest_book_year=Subquery(
                Book.objects.filter(
                    contact__pk=OuterRef('pk'),
                ).order_by('pubdate').values('pubdate__year')[:1]
            ),
        ).aggregate(
            cnt=Count('pk', filter=Q(earliest_book_year=2008)),
        )
        self.assertEqual(aggs['cnt'], 2)

    
        def test_get_version(self):
        expect = '1.0.0'
        ops = FakePostGISOperations(expect)
        actual = ops.postgis_lib_version()
        self.assertEqual(expect, actual)
    
        def test_no_location_enabled(self):
        '''Behavior is correct if --no-location switch is specified. See #16903.'''
        management.call_command('makemessages', locale=[LOCALE], verbosity=0, no_location=True)
        self.assertTrue(os.path.exists(self.PO_FILE))
        self.assertLocationCommentNotPresent(self.PO_FILE, None, 'test.html')
    
        @classmethod
    def ensure_registered(cls):
        '''
        Attempt to register all the data source drivers.
        '''
        # Only register all if the driver counts are 0 (or else all drivers
        # will be registered over and over again)
        if not vcapi.get_driver_count():
            vcapi.register_all()
        if not rcapi.get_driver_count():
            rcapi.register_all()
    
        @property
    def value(self):
        'Return an integer contained in this field.'
        return self.as_int(self._bit64)
    
            content += new_content
    
    if is_py2:
    from urllib import (
        quote, unquote, quote_plus, unquote_plus, urlencode, getproxies,
        proxy_bypass, proxy_bypass_environment, getproxies_environment)
    from urlparse import urlparse, urlunparse, urljoin, urlsplit, urldefrag
    from urllib2 import parse_http_list
    import cookielib
    from Cookie import Morsel
    from StringIO import StringIO
    # Keep OrderedDict for backwards compatibility.
    from collections import Callable, Mapping, MutableMapping, OrderedDict
    
            # Verify Authorization is sent correctly again, and return 200 OK.
        request_content = consume_socket_content(sock, timeout=0.5)
        assert expected_digest in request_content
        sock.send(text_200)
    
                sock.close()
    
    from .compat import StringIO, cStringIO
    
        :param url: URL for the new :class:`Request` object.
    :param \*\*kwargs: Optional arguments that ``request`` takes. If
        `allow_redirects` is not provided, it will be set to `False` (as
        opposed to the default :meth:`request` behavior).
    :return: :class:`Response <Response>` object
    :rtype: requests.Response
    '''
    
    Also, by evaluating log marginal likelihood (L) of
these models, we can determine which one is better.
It can be concluded that the model with larger L is more likely.
'''
print(__doc__)
    
        m : int
        Index of the row of X to be swapped.
    
                tstart = time()
            clf.fit(X_train, y_train)
            sgd_results[i, j, 0] = mean_squared_error(clf.predict(X_test),
                                                      y_test)
            sgd_results[i, j, 1] = time() - tstart
    
    '''
print(__doc__)