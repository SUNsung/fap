
        
            for release in releases:
        compat_print(release['name'])
        for asset in release['assets']:
            asset_name = asset['name']
            total_bytes += asset['download_count'] * asset['size']
            if all(not re.match(p, asset_name) for p in (
                    r'^youtube-dl$',
                    r'^youtube-dl-\d{4}\.\d{2}\.\d{2}(?:\.\d+)?\.tar\.gz$',
                    r'^youtube-dl\.exe$')):
                continue
            compat_print(
                ' %s size: %s downloads: %d'
                % (asset_name, format_size(asset['size']), asset['download_count']))
    
        # Are checkable fields missing from the test case definition?
    test_info_dict = dict((key, value if not isinstance(value, compat_str) or len(value) < 250 else 'md5:' + md5(value))
                          for key, value in got_dict.items()
                          if value and key in ('id', 'title', 'description', 'uploader', 'upload_date', 'timestamp', 'uploader_id', 'location', 'age_limit'))
    missing_keys = set(test_info_dict.keys()) - set(expected_dict.keys())
    if missing_keys:
        def _repr(v):
            if isinstance(v, compat_str):
                return ''%s'' % v.replace('\\', '\\\\').replace(''', '\\'').replace('\n', '\\n')
            else:
                return repr(v)
        info_dict_str = ''
        if len(missing_keys) != len(expected_dict):
            info_dict_str += ''.join(
                '    %s: %s,\n' % (_repr(k), _repr(v))
                for k, v in test_info_dict.items() if k not in missing_keys)
    
    import os
import subprocess
    
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
    
                raise ContractFail('Returned %s %s, expected %s' % \
                (occurrences, self.obj_name, expected))
    
    # If false, no index is generated.
#html_use_index = True
    
        @classmethod
    def add_parser_arguments(cls, parser):
        '''Adds command line arguments needed by the plugin'''
    
    # Add any paths that contain templates here, relative to this directory.
templates_path = ['_templates']
    
        @mock.patch('certbot.display.enhancements.util')
    def test_redirect(self, mock_util):
        mock_util().menu.return_value = (display_util.OK, 1)
        self.assertTrue(self._call('redirect'))
    
    DOMAIN = 'keyboard'
    
        @patch('{}._get_homehub_data'.format(patch_file), new=_get_homehub_data)
    def test_config_minimal(self):
        '''Test the setup with minimal configuration.'''
        config = {
            'device_tracker': {
                CONF_HOST: 'foo'
            }
        }
        result = bt_home_hub_5.get_scanner(None, config)