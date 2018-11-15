
        
        FORMATS = {
    'sequences': lambda y: [list(np.flatnonzero(s)) for s in y],
    'dense': lambda y: y,
    'csr': lambda y: sp.csr_matrix(y),
    'csc': lambda y: sp.csc_matrix(y),
}
    
    from sklearn.cluster.k_means_ import KMeans, MiniBatchKMeans
    
            ax.set_xlabel('n_samples')
        ax.set_ylabel('n_features')
        ax.set_zlabel('Time (s)')
        ax.set_zlim3d(0.0, max_time * 1.1)
        ax.set_title(label)
        # ax.legend()
        i += 1
    plt.show()

    
    
def euclidean_distances(X, n_jobs):
    return pairwise_distances(X, metric='euclidean', n_jobs=n_jobs)
    
        ###########################################################################
    # Set custom reservoir based method
    sampling_algorithm['custom-pool'] = \
        lambda n_population, n_samples, random_state=None: \
            sample_without_replacement(n_population,
                                       n_samples,
                                       method='pool',
                                       random_state=random_state)
    
    
class settingslist_node(nodes.General, nodes.Element):
    pass
    
    def _iter_command_classes(module_name):
    # TODO: add `name` attribute to commands and and merge this function with
    # scrapy.utils.spider.iter_spider_classes
    for module in walk_modules(module_name):
        for obj in vars(module).values():
            if inspect.isclass(obj) and \
                    issubclass(obj, ScrapyCommand) and \
                    obj.__module__ == module.__name__ and \
                    not obj == ScrapyCommand:
                yield obj
    
        def start_requests(self):
        qargs = {'total': self.total, 'show': self.show}
        url = '{}?{}'.format(self.baseurl, urlencode(qargs, doseq=1))
        return [scrapy.Request(url, dont_filter=True)]
    
        def run(self, args, opts):
        if len(args) != 1 or not is_url(args[0]):
            raise UsageError()
        cb = lambda x: self._print_response(x, opts)
        request = Request(args[0], callback=cb, dont_filter=True)
        # by default, let the framework handle redirects,
        # i.e. command handles all codes expect 3xx
        if not opts.no_redirect:
            request.meta['handle_httpstatus_list'] = SequenceExclude(range(300, 400))
        else:
            request.meta['handle_httpstatus_all'] = True
    
        def update_vars(self, vars):
        '''You can use this function to update the Scrapy objects that will be
        available in the shell
        '''
        pass
    
    
if __name__ == '__main__':
    unittest.main()  # pragma: no cover

    
    regr = acme.register()
logging.info('Auto-accepting TOS: %s', regr.terms_of_service)
acme.agree_to_tos(regr)
logging.debug(regr)
    
        .. note:: This does not need to be accurate in order for the client to
        run.  This simply keeps things clean if the user decides to revert
        changes.
    .. warning:: If all deps are not included, it may cause incorrect parsing
        behavior, due to enable_mod's shortcut for updating the parser's
        currently defined modules (`.ApacheParser.add_mod`)
        This would only present a major problem in extremely atypical
        configs that use ifmod for the missing deps.
    
        def _get_addrs(self, achall):
        '''Return the Apache addresses needed for TLS-SNI-01.'''
        # TODO: Checkout _default_ rules.
        addrs = set()
        default_addr = obj.Addr(('*', str(
            self.configurator.config.tls_sni_01_port)))
    
        def do_something(self, something):
        return 'Doing %s' % something
    
    
class ConcreteHandler2(Handler):
    def _handle(self, request):
        if 10 < request <= 20:
            print('request {} handled in handler 2'.format(request))
            return True
    
    In other programming languages, a more complex arrangement is sometimes
necessary. In particular, you cannot have polymorphic behaviour in a constructor in C++ -
see https://stackoverflow.com/questions/1453131/how-can-i-get-polymorphic-behavior-in-a-c-constructor
- which means this Python technique will not work. The polymorphism
required has to be provided by an external, already constructed
instance of a different class.
    
    production code which is untestable:
    
    
class Controller(object):
    def __init__(self, blackboard):
        self.blackboard = blackboard