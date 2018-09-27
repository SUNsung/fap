
        
            Ensures that the post exists and that the logged in user is the
    author of the post.
    '''
    get_post(id)
    db = get_db()
    db.execute('DELETE FROM post WHERE id = ?', (id,))
    db.commit()
    return redirect(url_for('blog.index'))

    
        :copyright: © 2010 by the Pallets team.
    :license: BSD, see LICENSE for more details.
'''
    
        Either you can fill the config from a config file::
    
            buf.append('  Make sure to directly send your %s-request to this URL '
                   'since we can\'t make browsers or HTTP clients redirect '
                   'with form data reliably or without user interaction.' %
                   request.method)
        buf.append('\n\nNote: this exception is only raised in debug mode')
        AssertionError.__init__(self, ''.join(buf).encode('utf-8'))
    
        if dataset_name == 'shuttle':
        dataset = fetch_mldata('shuttle')
        X = dataset.data
        y = dataset.target
        # we remove data with label 4
        # normal data are then those of class 1
        s = (y != 4)
        X = X[s, :]
        y = y[s]
        y = (y != 1).astype(int)
    
    Line #      Hits         Time  Per Hit   % Time  Line Contents
==============================================================
    51                                           @profile
    52                                           def benchmark_dense_predict():
    53       301          640      2.1      0.1      for _ in range(300):
    54       300       532339   1774.5     99.9          clf.predict(X_test)
    
        bench = {'vectorizer': Vectorizer.__name__}
    params = {'analyzer': analyzer, 'ngram_range': ngram_range}
    bench.update(params)
    dt = timeit.repeat(run_vectorizer(Vectorizer, text, **params),
                       number=1,
                       repeat=n_repeat)
    bench['time'] = '{:.2f} (+-{:.2f})'.format(np.mean(dt), np.std(dt))
    
            if opts.logfile:
            self.settings.set('LOG_ENABLED', True, priority='cmdline')
            self.settings.set('LOG_FILE', opts.logfile, priority='cmdline')
    
    
class _BenchServer(object):
    
        def process_options(self, args, opts):
        ScrapyCommand.process_options(self, args, opts)
        try:
            opts.spargs = arglist_to_dict(opts.spargs)
        except ValueError:
            raise UsageError('Invalid -a value, use -a NAME=VALUE', print_help=False)
        if opts.output:
            if opts.output == '-':
                self.settings.set('FEED_URI', 'stdout:', priority='cmdline')
            else:
                self.settings.set('FEED_URI', opts.output, priority='cmdline')
            feed_exporters = without_none_values(
                self.settings.getwithbase('FEED_EXPORTERS'))
            valid_output_formats = feed_exporters.keys()
            if not opts.output_format:
                opts.output_format = os.path.splitext(opts.output)[1].replace('.', '')
            if opts.output_format not in valid_output_formats:
                raise UsageError('Unrecognized output format '%s', set one'
                                 ' using the '-t' switch or as a file extension'
                                 ' from the supported list %s' % (opts.output_format,
                                                                  tuple(valid_output_formats)))
            self.settings.set('FEED_FORMAT', opts.output_format, priority='cmdline')
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-l', '--list', dest='list', action='store_true',
            help='List available templates')
        parser.add_option('-e', '--edit', dest='edit', action='store_true',
            help='Edit spider after creating it')
        parser.add_option('-d', '--dump', dest='dump', metavar='TEMPLATE',
            help='Dump template to standard output')
        parser.add_option('-t', '--template', dest='template', default='basic',
            help='Uses a custom template.')
        parser.add_option('--force', dest='force', action='store_true',
            help='If the spider already exists, overwrite it with the template')
    
        def post_process(self, output):
        occurrences = 0
        for x in output:
            if isinstance(x, self.obj_type):
                occurrences += 1
    
    
    @implementer(IPolicyForHTTPS)
    class BrowserLikeContextFactory(ScrapyClientContextFactory):
        '''
        Twisted-recommended context factory for web clients.
    
        @callback
    def pressed_more_than_satisfied(now):
        '''Handle the LiteJet's switch's button pressed >= held_more_than.'''
        call_action()
    
    CONF_HOURS = 'hours'
CONF_MINUTES = 'minutes'
CONF_SECONDS = 'seconds'
    
    from homeassistant.components.http import HomeAssistantView
from homeassistant.config import async_check_ha_config_file
    
        return True
    
    import voluptuous as vol
    
            url = '{}/cgi-bin/luci/rpc/sys'.format(self.origin)
    
        for device in new_devices:
        dev_id = (
            id(device.gateway), device.node_id, device.child_id,
            device.value_type)
        async_dispatcher_connect(
            hass, mysensors.const.SIGNAL_CALLBACK.format(*dev_id),
            device.async_update_callback)