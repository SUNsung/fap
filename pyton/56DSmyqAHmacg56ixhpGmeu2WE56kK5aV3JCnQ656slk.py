
        
        
def side_effect(old_cmd, command):
    with tarfile.TarFile(_tar_file(old_cmd.script_parts)[0]) as archive:
        for file in archive.getnames():
            try:
                os.remove(file)
            except OSError:
                # does not try to remove directories as we cannot know if they
                # already existed before
                pass

    
    # This view is called from FlatpageFallbackMiddleware.process_response
# when a 404 is raised, which often means CsrfViewMiddleware.process_view
# has not been called even if CsrfViewMiddleware is installed. So we need
# to use @csrf_protect, in case the template needs {% csrf_token %}.
# However, we can't just wrap this view; if no matching flatpage exists,
# or a redirect is required for authentication, the 404 needs to be returned
# without any CSRF checks. Therefore, we only
# CSRF protect the internal implementation.
    
    Data comes from a random square matrix.
    
            plot_batch_times(all_times, n_components, batch_sizes, data)
        # RandomizedPCA error is always worse (approx 100x) than other PCA
        # tests
        plot_batch_errors(all_errors, n_components, batch_sizes, data)
    
        for i, NN in enumerate(Nrange):
        print('N = %i (%i out of %i)' % (NN, i + 1, len(Nrange)))
        X = get_data(NN, D, dataset)
        for algorithm in algorithms:
            nbrs = neighbors.NearestNeighbors(n_neighbors=min(NN, k),
                                              algorithm=algorithm,
                                              leaf_size=leaf_size)
            t0 = time()
            nbrs.fit(X)
            t1 = time()
            nbrs.kneighbors(X)
            t2 = time()
    
        ###########################################################################
    # Set custom reservoir based method
    sampling_algorithm['custom-reservoir-sampling'] = \
        lambda n_population, n_samples, random_state=None: \
            sample_without_replacement(n_population,
                                       n_samples,
                                       method='reservoir_sampling',
                                       random_state=random_state)
    
        n = 10
    step = 10000
    n_samples = 10000
    dim = 10
    n_classes = 10
    for i in range(n):
        print('============================================')
        print('Entering iteration %s of %s' % (i, n))
        print('============================================')
        n_samples += step
        X = np.random.randn(n_samples, dim)
        Y = np.random.randint(0, n_classes, (n_samples,))
        bench_scikit_tree_classifier(X, Y)
        Y = np.random.randn(n_samples)
        bench_scikit_tree_regressor(X, Y)
    
        # decode the payload explicitly as UTF-8 since lxml is confused for some
    # reason
    with codecs.open(html_filename,'r','utf-8') as html_file:
        html_content = html_file.read()
    tree = ElementTree(lxml.html.document_fromstring(html_content))
    i = 0
    j = 0
    for p in tree.findall('//p'):
        content = p.text_content()
        if len(content) < 100:
            # skip paragraphs that are too short - probably too noisy and not
            # representative of the actual language
            continue
    
    The experiment is performed on an artificial dataset for binary classification
with 100.000 samples (1.000 of them are used for model fitting) with 20
features. Of the 20 features, only 2 are informative and 10 are redundant. The
first figure shows the estimated probabilities obtained with logistic
regression, Gaussian naive Bayes, and Gaussian naive Bayes with both isotonic
calibration and sigmoid calibration. The calibration performance is evaluated
with Brier score, reported in the legend (the smaller the better). One can
observe here that logistic regression is well calibrated while raw Gaussian
naive Bayes performs very badly. This is because of the redundant features
which violate the assumption of feature-independence and result in an overly
confident classifier, which is indicated by the typical transposed-sigmoid
curve.
    
    plt.figure(figsize=(3 * 2, n_classifiers * 2))
plt.subplots_adjust(bottom=.2, top=.95)
    
    plots = []
names = []
for score_func in score_funcs:
    print('Computing %s for %d values of n_clusters and n_samples=%d'
          % (score_func.__name__, len(n_clusters_range), n_samples))
    
    if (twisted_version.major, twisted_version.minor, twisted_version.micro) >= (15, 5, 0):
    collect_ignore += _py_files('scrapy/xlib/tx')
    
            if opts.nolog:
            self.settings.set('LOG_ENABLED', False, priority='cmdline')
    
    
if __name__ == '__main__':
    unittest.main()  # pragma: no cover

    
    # If true, an OpenSearch description file will be output, and all pages will
# contain a <link> tag referring to it.  The value of this option must be the
# base URL from which the finished HTML is served.
#html_use_opensearch = ''
    
    # The version info for the project you're documenting, acts as replacement for
# |version| and |release|, also used in various other places throughout the
# built documents.
#
# The short X.Y version.
version = '0'
# The full version, including alpha/beta/rc tags.
release = '0'
    
    if __name__ == '__main__':
    unittest.main()  # pragma: no cover

    
        def test_make_frame(self):
        self.dialog.row = 0
        self.dialog.top = self.root
        frame, label = self.dialog.make_frame()
        self.assertEqual(label, '')
        self.assertIsInstance(frame, Frame)
    
    class TZInfo:
    def __init__(self, transitions, type_indices, ttis, abbrs):
        self.transitions = transitions
        self.type_indices = type_indices
        self.ttis = ttis
        self.abbrs = abbrs
    
        def tell(self):
        if self.closed:
            raise ValueError('I/O operation on closed file')
        return self.size_read
    
    NUMBER_RE = re.compile(
    r'(-?(?:0|[1-9]\d*))(\.\d+)?([eE][-+]?\d+)?',
    (re.VERBOSE | re.MULTILINE | re.DOTALL))
    
        def _pre_mailbox_hook(self, f):
        '''Called before writing the mailbox to file f.'''
        babyl = b'BABYL OPTIONS:' + linesep
        babyl += b'Version: 5' + linesep
        labels = self.get_labels()
        labels = (label.encode() for label in labels)
        babyl += b'Labels:' + b','.join(labels) + linesep
        babyl += b'\037'
        f.write(babyl)
    
        # This dictionary maps from (feature,value) to a list of
    # (option,value) pairs that should be set on the Options object.
    # If a (feature,value) setting is not in this dictionary, it is
    # not supported by the DOMBuilder.
    #
    _settings = {
        ('namespace_declarations', 0): [
            ('namespace_declarations', 0)],
        ('namespace_declarations', 1): [
            ('namespace_declarations', 1)],
        ('validation', 0): [
            ('validation', 0)],
        ('external_general_entities', 0): [
            ('external_general_entities', 0)],
        ('external_general_entities', 1): [
            ('external_general_entities', 1)],
        ('external_parameter_entities', 0): [
            ('external_parameter_entities', 0)],
        ('external_parameter_entities', 1): [
            ('external_parameter_entities', 1)],
        ('validate_if_schema', 0): [
            ('validate_if_schema', 0)],
        ('create_entity_ref_nodes', 0): [
            ('create_entity_ref_nodes', 0)],
        ('create_entity_ref_nodes', 1): [
            ('create_entity_ref_nodes', 1)],
        ('entities', 0): [
            ('create_entity_ref_nodes', 0),
            ('entities', 0)],
        ('entities', 1): [
            ('entities', 1)],
        ('whitespace_in_element_content', 0): [
            ('whitespace_in_element_content', 0)],
        ('whitespace_in_element_content', 1): [
            ('whitespace_in_element_content', 1)],
        ('cdata_sections', 0): [
            ('cdata_sections', 0)],
        ('cdata_sections', 1): [
            ('cdata_sections', 1)],
        ('comments', 0): [
            ('comments', 0)],
        ('comments', 1): [
            ('comments', 1)],
        ('charset_overrides_xml_encoding', 0): [
            ('charset_overrides_xml_encoding', 0)],
        ('charset_overrides_xml_encoding', 1): [
            ('charset_overrides_xml_encoding', 1)],
        ('infoset', 0): [],
        ('infoset', 1): [
            ('namespace_declarations', 0),
            ('validate_if_schema', 0),
            ('create_entity_ref_nodes', 0),
            ('entities', 0),
            ('cdata_sections', 0),
            ('datatype_normalization', 1),
            ('whitespace_in_element_content', 1),
            ('comments', 1),
            ('charset_overrides_xml_encoding', 1)],
        ('supported_mediatypes_only', 0): [
            ('supported_mediatypes_only', 0)],
        ('namespaces', 0): [
            ('namespaces', 0)],
        ('namespaces', 1): [
            ('namespaces', 1)],
    }
    
    int main( int argc, char **argv)
{
    PyImport_FrozenModules = _PyImport_FrozenModules;
    return PythonService_main(argc, argv);
}
'''
    
                # generate response
            if dispatch_method is not None:
                response = dispatch_method(method, params)
            else:
                response = self._dispatch(method, params)
            # wrap response in a singleton tuple
            response = (response,)
            response = dumps(response, methodresponse=1,
                             allow_none=self.allow_none, encoding=self.encoding)
        except Fault as fault:
            response = dumps(fault, allow_none=self.allow_none,
                             encoding=self.encoding)
        except:
            # report exception back to server
            exc_type, exc_value, exc_tb = sys.exc_info()
            try:
                response = dumps(
                    Fault(1, '%s:%s' % (exc_type, exc_value)),
                    encoding=self.encoding, allow_none=self.allow_none,
                    )
            finally:
                # Break reference cycle
                exc_type = exc_value = exc_tb = None
    
            test(complex(0., 0.),   '0j')
        test(complex(0., -0.),  '-0j')
        test(complex(-0., 0.),  '(-0+0j)')
        test(complex(-0., -0.), '(-0-0j)')
    
            try:
            result = self.fn(*self.args, **self.kwargs)
        except BaseException:
            e = sys.exc_info()[1]
            self.future.set_exception(e)
        else:
            self.future.set_result(result)
    
    
def SendShutdownRequest():
  request = ShutdownRequest()
  # This is a blocking call.
  request.Start()

    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    def get_api_subtype():
    if is_api() and c.render_style.startswith('api-'):
        return c.render_style[4:]
    
            return user.name in self.stacked_proxy_safe_get(g, 'admins', [])
    
        @csrf_exempt
    @json_validate(
        VRatelimit(rate_ip=True, prefix='rate_register_'),
        signature=VSigned(),
        name=VUname(['user']),
        email=ValidEmail('email'),
        password=VPasswordChange(['passwd', 'passwd2']),
    )
    def POST_register(self, responder, name, email, password, **kwargs):
        kwargs.update(dict(
            controller=self,
            form=responder('noop'),
            responder=responder,
            name=name,
            email=email,
            password=password,
        ))
        return handle_register(**kwargs)
    
        @require_oauth2_scope('mysubreddits')
    @validate(
        VUser(),
    )
    @api_doc(
        section=api_section.account,
        uri='/api/v1/me/karma',
    )
    def GET_karma(self):
        '''Return a breakdown of subreddit karma.'''
        karmas = c.oauth_user.all_karmas(include_old=False)
        resp = KarmaListJsonTemplate().render(karmas)
        return self.api_wrapper(resp.finalize())
    
            def builder_wrapper(thing = None):
            kw = {}
            if not thing:
                kw['url'] = url
                kw['title'] = title
            return ButtonLite(thing,
                              image = 1 if buttonimage is None else buttonimage,
                              target = '_new' if newwindow else '_parent',
                              styled = styled, **kw)
    
    from BeautifulSoup import BeautifulSoup, Tag
    
    
class GoogleTagManagerController(MinimalController):
    def pre(self):
        if request.host != g.media_domain:
            # don't serve up untrusted content except on our
            # specifically untrusted domain
            self.abort404()