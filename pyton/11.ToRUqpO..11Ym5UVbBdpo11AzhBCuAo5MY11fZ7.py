
        
                    warn(
                Warning(
                    'The blueprint was already registered once '
                    'but is getting modified now.  These changes '
                    'will not show up.'
                )
            )
        self.deferred_functions.append(func)
    
            :param namespace: a configuration namespace
        :param lowercase: a flag indicating if the keys of the resulting
                          dictionary should be lowercase
        :param trim_namespace: a flag indicating if the keys of the resulting
                          dictionary should not include the namespace
    
        if args and kwargs:
        raise TypeError('jsonify() behavior undefined when passed both args and kwargs')
    elif len(args) == 1:  # single args are passed directly to dumps()
        data = args[0]
    else:
        data = args or kwargs
    
        s.register(Tag2, index=None)
    assert isinstance(s.order[-1], Tag2)

    
        @app.route('/')
    def index():
        return flask.render_template('simple_template.html', whiskey=42)
    
        @possible_keys
    def test_delitem(self, key):
        del self.case_insensitive_dict[key]
        assert key not in self.case_insensitive_dict
    
        def _handle_requests(self):
        for _ in range(self.requests_to_handle):
            sock = self._accept_connection()
            if not sock:
                break
    
        def test_autoset_header_values_are_native(self, httpbin):
        data = 'this is a string'
        length = '16'
        req = requests.Request('POST', httpbin('post'), data=data)
        p = req.prepare()
    
            if isinstance(timeout, tuple):
            try:
                connect, read = timeout
                timeout = TimeoutSauce(connect=connect, read=read)
            except ValueError as e:
                # this may raise a string formatting error.
                err = ('Invalid timeout {}. Pass a (connect, read) '
                       'timeout tuple, or a single float to set '
                       'both timeouts to the same value'.format(timeout))
                raise ValueError(err)
        elif isinstance(timeout, TimeoutSauce):
            pass
        else:
            timeout = TimeoutSauce(connect=timeout, read=timeout)
    
            for field, val in fields:
            if isinstance(val, basestring) or not hasattr(val, '__iter__'):
                val = [val]
            for v in val:
                if v is not None:
                    # Don't call str() on bytestrings: in Py3 it all goes wrong.
                    if not isinstance(v, bytes):
                        v = str(v)
    
        def test_server_finishes_when_no_connections(self):
        '''the server thread exits even if there are no connections'''
        server = Server.basic_response_server()
        with server:
            pass
    
        # Check urllib3 for compatibility.
    major, minor, patch = urllib3_version  # noqa: F811
    major, minor, patch = int(major), int(minor), int(patch)
    # urllib3 >= 1.21.1, <= 1.25
    assert major == 1
    assert minor >= 21
    assert minor <= 25
    
    scaler = StandardScaler()
X_train = scaler.fit_transform(X_train)
X_test = scaler.transform(X_test)
    
        Notes
    -----
    NaNs are ignored in the algorithm.
    
    First, we fix a training set and increase the number of
samples. Then we plot the computation time as function of
the number of samples.
    
    from sklearn.utils import check_random_state
from sklearn.metrics.pairwise import pairwise_distances
from sklearn.metrics.pairwise import pairwise_kernels
    
                gc.collect()
            print('max_iter', max_iter)
            print('- benchmarking A-SGD')
            clf = SGDRegressor(alpha=alpha / n_train, fit_intercept=False,
                               max_iter=max_iter, learning_rate='invscaling',
                               eta0=.002, power_t=0.05, tol=1e-3,
                               average=(max_iter * n_train // 2))
    
    Does two benchmarks
    
        try:
        fn = inspect.getsourcefile(obj)
    except Exception:
        fn = None
    if not fn:
        try:
            fn = inspect.getsourcefile(sys.modules[obj.__module__])
        except Exception:
            fn = None
    if not fn:
        return
    
    
if __name__ == '__main__':
    # NOTE: we put the following in a 'if __name__ == '__main__'' protected
    # block to be able to use a multi-core grid search that also works under
    # Windows, see: http://docs.python.org/library/multiprocessing.html#windows
    # The multiprocessing module is used as the backend of joblib.Parallel
    # that is used when n_jobs != 1 in GridSearchCV
    
    plt.figure(2)  # 'banana' shape
plt.title('Outlier detection on a real data set (boston housing)')
plt.scatter(X2[:, 0], X2[:, 1], color='black')
plt.xlim((xx2.min(), xx2.max()))
plt.ylim((yy2.min(), yy2.max()))
plt.legend((legend2_values_list[0].collections[0],
            legend2_values_list[1].collections[0],
            legend2_values_list[2].collections[0]),
           (legend2_keys_list[0], legend2_keys_list[1], legend2_keys_list[2]),
           loc='upper center',
           prop=matplotlib.font_manager.FontProperties(size=12))
plt.ylabel('% lower status of the population')
plt.xlabel('average number of rooms per dwelling')
    
        def close(self):
        self.closed = True
    
        @support.cpython_only
    @unittest.skipUnless(hasattr(os, 'pipe2'), 'test needs os.pipe2()')
    @support.requires_linux_version(2, 6, 27)
    def test_pipe2_c_limits(self):
        # Issue 15989
        import _testcapi
        self.assertRaises(OverflowError, os.pipe2, _testcapi.INT_MAX + 1)
        self.assertRaises(OverflowError, os.pipe2, _testcapi.UINT_MAX + 1)
    
    import sys
import socket
from socket import _GLOBAL_DEFAULT_TIMEOUT
    
    >>> from nntplib import NNTP
>>> s = NNTP('news')
>>> resp, count, first, last, name = s.group('comp.lang.python')
>>> print('Group', name, 'has', count, 'articles, range', first, 'to', last)
Group comp.lang.python has 51 articles, range 5770 to 5821
>>> resp, subs = s.xhdr('subject', '{0}-{1}'.format(first, last))
>>> resp = s.quit()
>>>
    
    def run_latency_tests(max_threads):
    for task in latency_tasks:
        print('Background CPU task:', task.__doc__)
        print()
        func, args = task()
        nthreads = 0
        while nthreads <= max_threads:
            results = run_latency_test(func, args, nthreads)
            n = len(results)
            # We print out milliseconds
            lats = [1000 * (t2 - t1) for (t1, t2) in results]
            #print(list(map(int, lats)))
            avg = sum(lats) / n
            dev = (sum((x - avg) ** 2 for x in lats) / n) ** 0.5
            print('CPU threads=%d: %d ms. (std dev: %d ms.)' % (nthreads, avg, dev), end='')
            print()
            #print('    [... from %d samples]' % n)
            nthreads += 1
        print()
    
                return STARTUPINFO(dwFlags=self.dwFlags,
                               hStdInput=self.hStdInput,
                               hStdOutput=self.hStdOutput,
                               hStdError=self.hStdError,
                               wShowWindow=self.wShowWindow,
                               lpAttributeList=attr_list)
    
            # Adding model 'EventTag'
        db.create_table(u'tagstore_eventtag', (
            ('project_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')()),
            ('environment_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')()),
            ('key', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                to=orm['tagstore.TagKey'], db_column='key')),
            ('event_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')()),
            ('date_added', self.gf('django.db.models.fields.DateTimeField')(
                db_index=True)),
            ('group_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')()),
            ('id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(primary_key=True)),
            ('value', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                to=orm['tagstore.TagValue'], db_column='value')),
        ))
        db.send_create_signal('tagstore', ['EventTag'])
    
            # Adding unique constraint on 'EventTag', fields ['event_id', 'key', 'value']
        db.create_unique(u'tagstore_eventtag', ['event_id', 'key_id', 'value_id'])
    
        >>> list(shingle(2, ('foo', 'bar', 'baz')))
    [('foo', 'bar'), ('bar', 'baz')]
    '''
    return itertools.izip(
        *map(
            lambda i__iterator: advance(i__iterator[0], i__iterator[1]),
            enumerate(itertools.tee(iterator, n)),
        )
    )
    
    *TL;DR
Encapsulates how a set of objects interact.
'''
    
    
class HexViewer:
    def update(self, subject):
        print(u'HexViewer: Subject %s has data 0x%x' % (subject.name, subject.data))
    
    
class SuperUserSpecification(CompositeSpecification):
    def is_satisfied_by(self, candidate):
        return getattr(candidate, 'super_user', False)
    
        >>> Order(1000, discount_strategy=on_sale_discount)
    <Price: 1000, price after discount: 730.0>
    '''
    
    *What does this example do?
This particular implementation abstracts the creation of a pet and
does so depending on the factory we chose (Dog or Cat, or random_animal)
This works because both Dog/Cat and random_animal respect a common
interface (callable for creation and .speak()).
Now my application can create pets abstractly and decide later,
based on my own criteria, dogs over cats.
    
        def localize(self, msg):
        '''We'll punt if we don't have a translation'''
        return self.translations.get(msg, msg)
    
    
def main():
    shapes = (CircleShape(1, 2, 3, DrawingAPI1()), CircleShape(5, 7, 11, DrawingAPI2()))
    
    
# Complex computer parts
class CPU(object):
    '''
    Simple CPU representation.
    '''
    def freeze(self):
        print('Freezing processor.')