
        
        '''
    The approach taken is explained below. I decided to do it simply.
    Initially I was considering parsing the data into some sort of
    structure and then generating an appropriate README. I am still
    considering doing it - but for now this should work. The only issue
    I see is that it only sorts the entries at the lowest level, and that
    the order of the top-level contents do not match the order of the actual
    entries.
    
    import re
    
    __all__ = ['__version__', 'version_info', 'twisted_version',
           'Spider', 'Request', 'FormRequest', 'Selector', 'Item', 'Field']
    
    def _print_header(settings, inproject):
    if inproject:
        print('Scrapy %s - project: %s\n' % (scrapy.__version__, \
            settings['BOT_NAME']))
    else:
        print('Scrapy %s - no active project\n' % scrapy.__version__)
    
    
class _BenchServer(object):
    
        def _find_template(self, template):
        template_file = join(self.templates_dir, '%s.tmpl' % template)
        if exists(template_file):
            return template_file
        print('Unable to find template: %s\n' % template)
        print('Use 'scrapy genspider --list' to see all available templates.')
    
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
            feed_exporters = without_none_values(self.settings.getwithbase('FEED_EXPORTERS'))
            valid_output_formats = feed_exporters.keys()
            if not opts.output_format:
                opts.output_format = os.path.splitext(opts.output)[1].replace('.', '')
            if opts.output_format not in valid_output_formats:
                raise UsageError('Unrecognized output format '%s', set one'
                                 ' using the '-t' switch or as a file extension'
                                 ' from the supported list %s' % (opts.output_format,
                                                                  tuple(valid_output_formats)))
            self.settings.set('FEED_FORMAT', opts.output_format, priority='cmdline')
    
        requires_project = False
    default_settings = {
        'KEEP_ALIVE': True,
        'LOGSTATS_INTERVAL': 0,
        'DUPEFILTER_CLASS': 'scrapy.dupefilters.BaseDupeFilter',
    }
    
            Default OpenSSL method is TLS_METHOD (also called SSLv23_METHOD)
        which allows TLS protocol negotiation.
        '''
        def creatorForNetloc(self, hostname, port):
    
        def _get_handler(self, scheme):
        '''Lazy-load the downloadhandler for a scheme
        only on the first request for that scheme.
        '''
        if scheme in self._handlers:
            return self._handlers[scheme]
        if scheme in self._notconfigured:
            return None
        if scheme not in self._schemes:
            self._notconfigured[scheme] = 'no handler available for that scheme'
            return None
    
    
def main():
    tornado.options.parse_command_line()
    app = Application()
    app.listen(options.port)
    tornado.ioloop.IOLoop.current().start()
    
    import random
import signal
import subprocess
    
        url = options.url + '/updateReports?agent=%s' % options.name
    update_ws = yield websocket_connect(url, None)
    msg = yield update_ws.read_message()
    assert msg is None
    IOLoop.instance().stop()
    
    
application = web.Application([
    (r'/dummy/', DummyHandler),
    (r'/dummyasync/', DummyAsyncHandler),
    (r'/collect/', CollectHandler),
], debug=True)
    
        subprocess.check_call([EASY_INSTALL] + PY_PACKAGES)