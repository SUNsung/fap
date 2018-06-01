
        
        if __name__ == '__main__':
    main()

    
    
def assertGreaterEqual(self, got, expected, msg=None):
    if not (got >= expected):
        if msg is None:
            msg = '%r not greater than or equal to %r' % (got, expected)
        self.assertTrue(got >= expected, msg)
    
    
class RtspFD(FileDownloader):
    def real_download(self, filename, info_dict):
        url = info_dict['url']
        self.report_destination(filename)
        tmpfilename = self.temp_name(filename)
    
        return sorted(
        filter(lambda ie: ie.is_suitable(age_limit), gen_extractors()),
        key=lambda ie: ie.IE_NAME.lower())
    
            webpage = self._download_webpage(url, playlist_id)
        title = self._html_search_regex(
            r'<h1 class='playlist-name'[^>]*?>(.*?)</h1>', webpage, 'title')
        description = self._html_search_regex(
            r'<p class='excerpt'[^>]*?>(.*?)</p>',
            webpage, 'description', fatal=False)
        urls = re.findall(
            r'<li class='lecture-preview'>\s*?<a target='_blank' href='([^']+)'>',
            webpage)
        entries = [self.url_result(u) for u in urls]
    
        _TEST = {
        'url': 'http://www.anitube.se/video/36621',
        'md5': '59d0eeae28ea0bc8c05e7af429998d43',
        'info_dict': {
            'id': '36621',
            'ext': 'mp4',
            'title': 'Recorder to Randoseru 01',
            'duration': 180.19,
        },
        'skip': 'Blocked in the US',
    }
    
            if args.test_results:
            path = os.path.join(output_dir, '%s/test.json' % job_number)
            url = 'https://api.shippable.com/jobs/%s/jobTestReports' % job_id
            download(args, headers, path, url)
            extract_contents(args, path, os.path.join(output_dir, '%s/test' % job_number))
    
        'hostport': re.compile(
        r'''^
            ((?:                        # We want to match:
                [^:\[\]]                # (a non-range character
                |                       # ...or...
                \[[^\]]*\]              # a complete bracketed expression)
            )*)                         # repeated as many times as possible
            :([0-9]+)                   # followed by a port number
            $
        ''', re.X
    ),
    
        @mock.patch('pkg_resources.get_distribution', side_effect=build_distribution)
    def test_check_minimum_pkg_version(self, mockobj):
        self.assertTrue(check_min_pkg_version('foobar', '0.4.0'))
        self.assertTrue(check_min_pkg_version('foobar', '0.5.0'))
        self.assertFalse(check_min_pkg_version('foobar', '0.6.0'))
    
    import os
import re
    
    #############################################
from __future__ import (absolute_import, division, print_function)
__metaclass__ = type
    
    
class TextTestResult(_TextTestResult):
    def printSummary(self, start, stop):
        write = self.stream.write
        writeln = self.stream.writeln
    
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