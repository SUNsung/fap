
        
        # def test_unicode_url_verbose(self):
#     r = http(httpbin.url + '--verbose', u'/get?test=' + UNICODE)
#     assert HTTP_OK in r
    
        def __init__(self, **kwargs):
        '''
        Use keyword arguments to overwrite
        any of the class attributes for this instance.
    
    
def load_text_file(item) -> str:
    path = item.value
    try:
        with open(os.path.expanduser(path), 'rb') as f:
            return f.read().decode()
    except IOError as e:
        raise ParseError(''%s': %s' % (item.orig, e))
    except UnicodeDecodeError:
        raise ParseError(
            ''%s': cannot embed the content of '%s','
            ' not a UTF8 or ASCII-encoded text file'
            % (item.orig, item.value)
        )
    
    
MIME_RE = re.compile(r'^[^/]+/[^/]+$')
    
    
def main():
    package_meta_map = {
        package_name: get_package_meta(package_name)
        for package_name in PACKAGES
    }
    httpie_meta = package_meta_map.pop('httpie')
    print()
    print('  url '{url}''.format(url=httpie_meta['url']))
    print('  sha256 '{sha256}''.format(sha256=httpie_meta['sha256']))
    print()
    for dep_meta in package_meta_map.values():
        print('  resource '{name}' do'.format(name=dep_meta['name']))
        print('    url '{url}''.format(url=dep_meta['url']))
        print('    sha256 '{sha256}''.format(sha256=dep_meta['sha256']))
        print('  end')
        print('')
    
            if isinstance(headers, bytes):
            # Python < 3
            headers = headers.decode('utf8')
        return headers
    
    
def basic_auth(header=BASIC_AUTH_HEADER_VALUE):
    
        def path(self) -> Path:
        '''Return the config file path creating basedir, if needed.'''
        path = self._get_path()
        try:
            path.parent.mkdir(mode=0o700, parents=True)
        except OSError as e:
            if e.errno != errno.EEXIST:
                raise
        return path
    
        Provide both the name and the version of the Python implementation
    currently running. For example, on CPython 2.7.5 it will return
    {'name': 'CPython', 'version': '2.7.5'}.
    
    '''
requests.hooks
~~~~~~~~~~~~~~
    
    import pytest
    
    if is_py2:
    from urllib import (
        quote, unquote, quote_plus, unquote_plus, urlencode, getproxies,
        proxy_bypass, proxy_bypass_environment, getproxies_environment)
    from urlparse import urlparse, urlunparse, urljoin, urlsplit, urldefrag
    from urllib2 import parse_http_list
    import cookielib
    from Cookie import Morsel
    from StringIO import StringIO
    # Keep OrderedDict for backwards compatibility.
    from collections import Callable, Mapping, MutableMapping, OrderedDict
    
            with server as address:
            sock = socket.socket()
            sock.connect(address)
            time.sleep(1.5)
            sock.sendall(b'hehehe, not received')
            sock.close()
    
        :param url: URL for the new :class:`Request` object.
    :param data: (optional) Dictionary, list of tuples, bytes, or file-like
        object to send in the body of the :class:`Request`.
    :param json: (optional) json data to send in the body of the :class:`Request`.
    :param \*\*kwargs: Optional arguments that ``request`` takes.
    :return: :class:`Response <Response>` object
    :rtype: requests.Response
    '''
    
        def test_cookie_second_line_commented_first_line(self):
        lines = (
            b'#print('\xc2\xa3')\n',
            b'# vim: set fileencoding=iso8859-15 :\n',
            b'print('\xe2\x82\xac')\n'
        )
        encoding, consumed_lines = detect_encoding(self.get_readline(lines))
        self.assertEqual(encoding, 'iso8859-15')
        expected = [b'#print('\xc2\xa3')\n', b'# vim: set fileencoding=iso8859-15 :\n']
        self.assertEqual(consumed_lines, expected)
    
    _tuplesize2code = [EMPTY_TUPLE, TUPLE1, TUPLE2, TUPLE3]
    
        # First, if the caller didn't force us into direct or indirect mode,
    # figure out which mode we should be in.  We take a conservative
    # approach: choose direct mode *only* if the current interpreter is
    # in debug mode and optimize is 0.  If we're not in debug mode (-O
    # or -OO), we don't know which level of optimization this
    # interpreter is running with, so we can't do direct
    # byte-compilation and be certain that it's the right thing.  Thus,
    # always compile indirectly if the current interpreter is in either
    # optimize mode, or if either optimization level was requested by
    # the caller.
    if direct is None:
        direct = (__debug__ and optimize == 0)
    
        LOG_EMERG     = 0       #  system is unusable
    LOG_ALERT     = 1       #  action must be taken immediately
    LOG_CRIT      = 2       #  critical conditions
    LOG_ERR       = 3       #  error conditions
    LOG_WARNING   = 4       #  warning conditions
    LOG_NOTICE    = 5       #  normal but significant condition
    LOG_INFO      = 6       #  informational
    LOG_DEBUG     = 7       #  debug-level messages
    
        def submit(self, fn, /, *args, **kwargs):
        with self._shutdown_lock, _global_shutdown_lock:
            if self._broken:
                raise BrokenThreadPool(self._broken)
    
        # clear type cache
    sys._clear_type_cache()
    
              name, _, val = line.partition('=')
          name = name.strip()
          val = val.strip()
          if name == 'set noparent':
            keep_looking = False
          elif name == 'filter':
            cfg_filters.append(val)
          elif name == 'exclude_files':
            # When matching exclude_files pattern, use the base_name of
            # the current file name or the directory name we are processing.
            # For example, if we are checking for lint errors in /foo/bar/baz.cc
            # and we found the .cfg file at /foo/CPPLINT.cfg, then the config
            # file's 'exclude_files' filter is meant to be checked against 'bar'
            # and not 'baz' nor 'bar/baz.cc'.
            if base_name:
              pattern = re.compile(val)
              if pattern.match(base_name):
                _cpplint_state.PrintInfo('Ignoring '%s': file excluded by '
                    ''%s'. File path component '%s' matches pattern '%s'\n' %
                    (filename, cfg_file, base_name, val))
                return False
          elif name == 'linelength':
            global _line_length
            try:
                _line_length = int(val)
            except ValueError:
                _cpplint_state.PrintError('Line length must be numeric.')
          elif name == 'extensions':
              global _valid_extensions
              try:
                  extensions = [ext.strip() for ext in val.split(',')]
                  _valid_extensions = set(extensions)
              except ValueError:
                  sys.stderr.write('Extensions should be a comma-separated list of values;'
                                   'for example: extensions=hpp,cpp\n'
                                   'This could not be parsed: '%s'' % (val,))
          elif name == 'headers':
              global _header_extensions
              try:
                  extensions = [ext.strip() for ext in val.split(',')]
                  _header_extensions = set(extensions)
              except ValueError:
                  sys.stderr.write('Extensions should be a comma-separated list of values;'
                                   'for example: extensions=hpp,cpp\n'
                                   'This could not be parsed: '%s'' % (val,))
          elif name == 'root':
            global _root
            _root = val
          else:
            _cpplint_state.PrintError(
                'Invalid configuration option (%s) in file %s\n' %
                (name, cfg_file))
    
            face = cv2.resize(face,  # pylint:disable=no-member
                          dsize=(self.input_size, self.input_size),
                          interpolation=interpolation)
        return face
    
    
def get_default_mask():
    ''' Set the default mask for cli '''
    masks = get_available_masks()
    default = 'dfl_full'
    default = default if default in masks else masks[0]
    logger.debug(default)
    return default
    
        def load_module(self, filename, module_path, plugin_type):
        ''' Load the defaults module and add defaults '''
        logger.debug('Adding defaults: (filename: %s, module_path: %s, plugin_type: %s',
                     filename, module_path, plugin_type)
        module = os.path.splitext(filename)[0]
        section = '.'.join((plugin_type, module.replace('_defaults', '')))
        logger.debug('Importing defaults module: %s.%s', module_path, module)
        mod = import_module('{}.{}'.format(module_path, module))
        self.add_section(title=section, info=mod._HELPTEXT)  # pylint:disable=protected-access
        for key, val in mod._DEFAULTS.items():  # pylint:disable=protected-access
            self.add_item(section=section, title=key, **val)
        logger.debug('Added defaults: %s', section)

    
        def set_config(self, configfile, config):
        ''' Set the config to either global config or passed in config '''
        section = '.'.join(self.__module__.split('.')[-2:])
        if config is None:
            logger.debug('Loading base config')
            retval = get_config(section, configfile=configfile)
        else:
            logger.debug('Loading passed in config')
            config.section = section
            retval = config.config_dict
            config.section = None
        logger.debug('Config: %s', retval)
        return retval
    
    
class Color(Adjustment):
    ''' Seamless clone the swapped face into the old face with cv2
        NB: This probably isn't the best place for this, but it doesn't work well and
        and does not have a natural home, so here for now.
    '''
    
    
if __name__ == '__main__':
    main()