
        
        README_FILE = 'README.md'
helptext = sys.stdin.read()
    
    
def gettestcases(include_onlymatching=False):
    for ie in youtube_dl.extractor.gen_extractors():
        for tc in ie.get_testcases(include_onlymatching):
            yield tc
    
        def test_youporn(self):
        self._assert_restricted(
            'http://www.youporn.com/watch/505835/sex-ed-is-it-safe-to-masturbate-daily/',
            '505835.mp4', 2, old_age=25)
    
    
if __name__ == '__main__':
    unittest.main()

    
        def _real_extract(self, url):
        video_id = self._match_id(url)
    
            return {
            'id': video_id,
            'url': video_url,
            'ext': 'mp4',
            'title': title,
            'description': description,
            'thumbnail': thumbnail,
            'categories': categories,
            'duration': duration,
            'view_count': view_count,
            'age_limit': 18,
        }

    
            '''
        assert all(hasattr(type(self), attr) for attr in kwargs.keys())
        self.__dict__.update(**kwargs)
    
    
def test_follow_all_output_options_used_for_redirects(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 3
    assert HTTP_OK not in r
    
    
# noinspection PyAbstractClass
class BuiltinAuthPlugin(AuthPlugin):
    
    
#######################################################################
# Output processing
#######################################################################
    
        def _process_output_options(self):
        '''Apply defaults to output options, or validate the provided ones.
    
        # Adapters
    def get_transport_plugins(self):
        return [plugin for plugin in self
                if issubclass(plugin, TransportPlugin)]

    
    # This view is called from FlatpageFallbackMiddleware.process_response
# when a 404 is raised, which often means CsrfViewMiddleware.process_view
# has not been called even if CsrfViewMiddleware is installed. So we need
# to use @csrf_protect, in case the template needs {% csrf_token %}.
# However, we can't just wrap this view; if no matching flatpage exists,
# or a redirect is required for authentication, the 404 needs to be returned
# without any CSRF checks. Therefore, we only
# CSRF protect the internal implementation.
    
    from sklearn.datasets.samples_generator import make_regression
    
        if args.plot is not None:
        print('Displaying plot', file=sys.stderr)
        title = ('Multilabel metrics with %s' %
                 ', '.join('{0}={1}'.format(field, getattr(args, field))
                           for field in ['samples', 'classes', 'density']
                           if args.plot != field))
        _plot(results, args.metrics, args.formats, title, steps, args.plot)

    
            ax.xaxis.set_major_locator(ticker.FixedLocator(tick_vals))
        ax.xaxis.set_major_formatter(ticker.FixedFormatter(tick_labels))
    
        An example with a long-untouched module that everyone has
    >>> _linkcode_resolve('py', {'module': 'tty',
    ...                          'fullname': 'setraw'},
    ...                   package='tty',
    ...                   url_fmt='http://hg.python.org/cpython/file/'
    ...                           '{revision}/Lib/{package}/{path}#L{lineno}',
    ...                   revision='xxxx')
    'http://hg.python.org/cpython/file/xxxx/Lib/tty/tty.py#L18'
    '''
    
        def onclick(self, event):
        if event.xdata and event.ydata:
            if event.button == 1:
                self.controller.add_example(event.xdata, event.ydata, 1)
            elif event.button == 3:
                self.controller.add_example(event.xdata, event.ydata, -1)
    
        def on_diagnostics_passed(self):
        super(Suspect, self).send_diagnostics_pass_report()
        super(Suspect, self).clear_alarm()  # loss of redundancy alarm
        super(Suspect, self).next_state('standby')
    
        def tearDown(cls):
        ''' Function/test case scope teardown. '''
        cls.output.close()
        sys.stdout = cls.saved_stdout
    
    production code which is untestable:
    
    
### OUTPUT ###
# <NumObj: -1>
# <NumObj: 0>
# <NumObj: 1>
# <NumObj: 2>
# -- committed
# <NumObj: 3>
# <NumObj: 4>
# <NumObj: 5>
# -- rolled back
# <NumObj: 2>
# -- now doing stuff ...
# -> doing stuff failed!
# Traceback (most recent call last):
# File 'memento.py', line 97, in <module>
#     num_obj.do_stuff()
#   File 'memento.py', line 52, in transaction
#     raise e
#   File 'memento.py', line 49, in transaction
#     return self.method(obj, *args, **kwargs)
#   File 'memento.py', line 70, in do_stuff
#     self.increment()     # <- will fail and rollback
#   File 'memento.py', line 65, in increment
#     self.value += 1
# TypeError: Can't convert 'int' object to str implicitly
# <NumObj: 2>

    
    
class SuperUserSpecification(CompositeSpecification):