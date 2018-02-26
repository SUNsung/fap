
        
        new_version = {}
    
        def test_youporn(self):
        self._assert_restricted(
            'http://www.youporn.com/watch/505835/sex-ed-is-it-safe-to-masturbate-daily/',
            '505835.mp4', 2, old_age=25)
    
            if check_executable('mplayer', ['-h']):
            args = [
                'mplayer', '-really-quiet', '-vo', 'null', '-vc', 'dummy',
                '-dumpstream', '-dumpfile', tmpfilename, url]
        elif check_executable('mpv', ['-h']):
            args = [
                'mpv', '-really-quiet', '--vo=null', '--stream-dump=' + tmpfilename, url]
        else:
            self.report_error('MMS or RTSP download detected but neither 'mplayer' nor 'mpv' could be run. Please install any.')
            return False
    
    from .common import InfoExtractor
    
    from httpie.compat import is_windows
from httpie.config import DEFAULT_CONFIG_DIR, Config
    
    
with codecs.open(FILE_PATH, encoding='utf8') as f:
    # Strip because we don't want new lines in the data so that we can
    # easily count occurrences also when embedded in JSON (where the new
    # line would be escaped).
    FILE_CONTENT = f.read().strip()
    
    
def rst_filenames():
    for root, dirnames, filenames in os.walk(os.path.dirname(TESTS_ROOT)):
        if '.tox' not in root:
            for filename in fnmatch.filter(filenames, '*.rst'):
                yield os.path.join(root, filename)
    
        '''
    # The value that should be passed to --auth-type
    # to use this auth plugin. Eg. 'my-auth'
    auth_type = None
    
    # -- Options for LaTeX output ---------------------------------------------
    
    
GIT_SHA = get_git_sha()
version_info = {
    'GIT_SHA': GIT_SHA,
    'version': version_string,
}
print('-==-' * 15)
print('VERSION: ' + version_string)
print('GIT SHA: ' + GIT_SHA)
print('-==-' * 15)
    
        print('Loading [Misc Charts] dashboard')
    data.load_misc_dashboard()
    
    # Provide a callable that receives a tracking_url and returns another
# URL. This is used to translate internal Hadoop job tracker URL
# into a proxied one
TRACKING_URL_TRANSFORMER = lambda x: x  # noqa: E731
    
        '''Interface for Metrics'''
    
            upload_prefix = app.config['CSV_TO_HIVE_UPLOAD_DIRECTORY']
        dest_path = os.path.join(table_name, filename)
    
    
def import_from_dict(session, data, sync=[]):
    '''Imports databases and druid clusters from dictionary'''
    if isinstance(data, dict):
        logging.info('Importing %d %s',
                     len(data.get(DATABASES_KEY, [])),
                     DATABASES_KEY)
        for database in data.get(DATABASES_KEY, []):
            Database.import_from_dict(session, database, sync=sync)
    
            # Compare builtin float conversion with pure Python int_to_float
        # function above.
        test_values = [
            int_dbl_max-1, int_dbl_max, int_dbl_max+1,
            halfway-1, halfway, halfway + 1,
            top_power-1, top_power, top_power+1,
            2*top_power-1, 2*top_power, top_power*top_power,
        ]
        test_values.extend(exact_values)
        for p in range(-4, 8):
            for x in range(-128, 128):
                test_values.append(2**(p+53) + x)
        for value in test_values:
            self.check_float_conversion(value)
            self.check_float_conversion(-value)
    
            side -- 0 or 1 indicating 'from' or 'to' text
        flag -- indicates if difference on line
        linenum -- line number (used for line number column)
        text -- line text to be marked up
        '''
        try:
            linenum = '%d' % linenum
            id = ' id='%s%s'' % (self._prefix[side],linenum)
        except TypeError:
            # handle blank lines where linenum is '>' or ''
            id = ''
        # replace those things that would get confused with HTML symbols
        text=text.replace('&','&amp;').replace('>','&gt;').replace('<','&lt;')
    
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
    
        def _extractname(self, mo):
        return mo.group('name')
    
        def assertFloatsAreIdentical(self, x, y):
        '''assert that floats x and y are identical, in the sense that:
        (1) both x and y are nans, or
        (2) both x and y are infinities, with the same sign, or
        (3) both x and y are zeros, with the same sign, or
        (4) x and y are both finite and nonzero, and x == y