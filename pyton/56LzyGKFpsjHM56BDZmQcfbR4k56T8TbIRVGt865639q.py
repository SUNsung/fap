
        
            scrapy runspider qpsclient.py --loglevel=INFO --set RANDOMIZE_DOWNLOAD_DELAY=0 --set CONCURRENT_REQUESTS=50 -a qps=10 -a latency=0.3
    
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
    
        def run(self, args, opts):
        if opts.verbose:
            versions = scrapy_components_versions()
            width = max(len(n) for (n, _) in versions)
            patt = '%-{}s : %s'.format(width)
            for name, version in versions:
                print(patt % (name, version))
        else:
            print('Scrapy %s' % scrapy.__version__)
    
        def __init__(self, settings):
        if not settings.getbool('AJAXCRAWL_ENABLED'):
            raise NotConfigured
    
    
if __name__ == '__main__':
    unittest.main()

    
    
def build_generic_rfcn_model(model, add_conv_body_func, dim_reduce=None):
    # TODO(rbg): fold this function into build_generic_detection_model
    def _single_gpu_build_func(model):
        '''Builds the model on a single GPU. Can be called in a loop over GPUs
        with name and device scoping to create a data parallel model.'''
        blob, dim, spatial_scale = add_conv_body_func(model)
        if not model.train:
            model.conv_body_net = model.net.Clone('conv_body_net')
        rfcn_heads.add_rfcn_outputs(model, blob, dim, dim_reduce, spatial_scale)
        if model.train:
            loss_gradients = fast_rcnn_heads.add_fast_rcnn_losses(model)
        return loss_gradients if model.train else None
    
    try:
    # compatible for python2
    from urllib2 import urlopen
    from urllib2 import HTTPError
    from urllib2 import URLError
except ImportError:
    # compatible for python3
    from urllib.request import urlopen
    from urllib.error import HTTPError
    from urllib.error import URLError