
        
        
def commit_role(name, rawtext, text, lineno, inliner, options={}, content=[]):
    ref = 'https://github.com/scrapy/scrapy/commit/' + text
    set_classes(options)
    node = nodes.reference(rawtext, 'commit ' + text, refuri=ref, **options)
    return [node], []
    
    
class QPSSpider(Spider):
    
        inproject = inside_project()
    cmds = _get_commands_dict(settings, inproject)
    cmdname = _pop_command_name(argv)
    parser = optparse.OptionParser(formatter=optparse.TitledHelpFormatter(), \
        conflict_handler='resolve')
    if not cmdname:
        _print_commands(settings, inproject)
        sys.exit(0)
    elif cmdname not in cmds:
        _print_unknown_command(settings, cmdname, inproject)
        sys.exit(2)
    
    
class Command(ScrapyCommand):
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('--spider', dest='spider',
            help='use this spider')
        parser.add_option('--headers', dest='headers', action='store_true', \
            help='print response HTTP headers instead of body')
        parser.add_option('--no-redirect', dest='no_redirect', action='store_true', \
            default=False, help='do not handle HTTP 3xx status codes and print response as-is')
    
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
    
    The matching from server ftp command return codes to html response codes is defined in the
CODE_MAPPING attribute of the handler class. The key 'default' is used for any code
that is not explicitly present among the map keys. You may need to overwrite this
mapping if want a different behaviour than default.