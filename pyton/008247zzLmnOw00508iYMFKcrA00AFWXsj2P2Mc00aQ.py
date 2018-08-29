
        
            def __init__(self, license_plate):
        super(Car, self).__init__(VehicleSize.COMPACT, license_plate, spot_size=1)
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-a', dest='spargs', action='append', default=[], metavar='NAME=VALUE',
                          help='set spider argument (may be repeated)')
        parser.add_option('-o', '--output', metavar='FILE',
                          help='dump scraped items into FILE (use - for stdout)')
        parser.add_option('-t', '--output-format', metavar='FORMAT',
                          help='format to use for dumping items with -o')
    
        def _find_template(self, template):
        template_file = join(self.templates_dir, '%s.tmpl' % template)
        if exists(template_file):
            return template_file
        print('Unable to find template: %s\n' % template)
        print('Use 'scrapy genspider --list' to see all available templates.')
    
        def add_items(self, lvl, new_items):
        old_items = self.items.get(lvl, [])
        self.items[lvl] = old_items + new_items
    
    
class Slot(object):
    '''Downloader slot'''