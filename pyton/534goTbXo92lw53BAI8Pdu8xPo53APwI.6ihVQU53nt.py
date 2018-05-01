
        
        
@for_app('tar')
def match(command):
    return ('-C' not in command.script
            and _is_tar_extract(command.script)
            and _tar_file(command.script_parts) is not None)
    
        def start_requests(self):
        qargs = {'total': self.total, 'show': self.show}
        url = '{}?{}'.format(self.baseurl, urlencode(qargs, doseq=1))
        return [scrapy.Request(url, dont_filter=True)]
    
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
    
        def clear_spots(self):
        for spot in self.spots_taken:
            spot.remove_vehicle(self)
        self.spots_taken = []
    
            Emit key value pairs of the form:
    
            # put all lines in the file into a Python list
        strings = f.readlines()
        
        # above line leaves trailing newline characters; strip them out
        strings = [x.strip(u'\n') for x in strings]
        
        # remove empty-lines and comments
        strings = [x for x in strings if x and not x.startswith(u'#')]
        
        # insert empty string since all are being removed
        strings.insert(0, u'')
    
            if nextchar == ''':
            return parse_string(string, idx + 1, strict)
        elif nextchar == '{':
            return parse_object((string, idx + 1), strict,
                _scan_once, object_hook, object_pairs_hook, memo)
        elif nextchar == '[':
            return parse_array((string, idx + 1), _scan_once)
        elif nextchar == 'n' and string[idx:idx + 4] == 'null':
            return None, idx + 4
        elif nextchar == 't' and string[idx:idx + 4] == 'true':
            return True, idx + 4
        elif nextchar == 'f' and string[idx:idx + 5] == 'false':
            return False, idx + 5
    }
    
    # Response numbers that are followed by additional text (e.g. article)
_LONGRESP = {
    '100',   # HELP
    '101',   # CAPABILITIES
    '211',   # LISTGROUP   (also not multi-line with GROUP)
    '215',   # LIST
    '220',   # ARTICLE
    '221',   # HEAD, XHDR
    '222',   # BODY
    '224',   # OVER, XOVER
    '225',   # HDR
    '230',   # NEWNEWS
    '231',   # NEWGROUPS
    '282',   # XGTITLE
}
    
    subsystem_details = {
    # -s flag        : (C entry point template), (is it __main__?), (is it a DLL?)
    'console'        : (None,                    1,                 0),
    'windows'        : (WINMAINTEMPLATE,         1,                 0),
    'service'        : (SERVICETEMPLATE,         0,                 0),
    'com_dll'        : ('',                      0,                 1),
}
    
        # __set__ and __get__ should raise a TypeError in case their self
    # argument is not a ctype instance.
    def test___set__(self):
        class MyCStruct(Structure):
            _fields_ = (('field', c_int),)
        self.assertRaises(TypeError,
                          MyCStruct.field.__set__, 'wrong type self', 42)
    
                # empty iterator
            for i in range(1, len(orig)):
                next(itorig)
            d = pickle.dumps((itorig, orig), proto)
            it, a = pickle.loads(d)
            a[:] = data
            self.assertEqual(type(it), type(itorig))
            self.assertEqual(list(it), [])
    
                def data_received(self, data):
                body.append(data)
    
            # Callbacks execute in the order they were registered.
        self.assertEqual(list(range(3)), self.history)
        c.notify(1)
        self.loop_briefly()
        self.assertEqual(list(range(4)), self.history)
        c.notify(2)
        self.loop_briefly()
        self.assertEqual(list(range(6)), self.history)