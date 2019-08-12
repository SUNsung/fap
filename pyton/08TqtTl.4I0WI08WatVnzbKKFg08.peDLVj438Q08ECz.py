
        
                atexit.register(self._db.close)
    
    import pytest
from thefuck.shells import Generic
    
    
@for_app('pyenv')
def get_new_command(command):
    broken = re.findall(r'pyenv: no such command `([^']*)'', command.output)[0]
    matched = [replace_argument(command.script, broken, common_typo)
               for common_typo in COMMON_TYPOS.get(broken, [])]
    matched.extend(replace_command(command, broken, get_pyenv_commands()))
    return matched

    
    (c) 2016, Aaron Christianson
http://github.com/ninjaaron/fast-entry_points
'''
from setuptools.command import easy_install
import re
TEMPLATE = r'''\
# -*- coding: utf-8 -*-
# EASY-INSTALL-ENTRY-SCRIPT: '{3}','{4}','{5}'
__requires__ = '{3}'
import re
import sys
    
    
class FilePathField(ChoiceField):
    def __init__(self, path, *, match=None, recursive=False, allow_files=True,
                 allow_folders=False, **kwargs):
        self.path, self.match, self.recursive = path, match, recursive
        self.allow_files, self.allow_folders = allow_files, allow_folders
        super().__init__(choices=(), **kwargs)
    
    
site.register(TitleCollection, inlines=[TitleInline])
# Test bug #12561 and #12778
# only ModelAdmin media
site.register(Holder, HolderAdmin, inlines=[InnerInline])
# ModelAdmin and Inline media
site.register(Holder2, HolderAdmin, inlines=[InnerInline2, InnerInline2Tabular])
# only Inline media
site.register(Holder3, inlines=[InnerInline3])
    
        class Meta:
        verbose_name = _('user')
        verbose_name_plural = _('users')
        abstract = True
    
        def _resolve_output_field(self):
        source_fields = self.get_source_fields()
        if any(isinstance(s, DecimalField) for s in source_fields):
            return DecimalField()
        if any(isinstance(s, IntegerField) for s in source_fields):
            return FloatField()
        return super()._resolve_output_field() if source_fields else FloatField()

    
    try:
    from django.contrib.gis.db.backends.postgis.operations import PostGISOperations
    HAS_POSTGRES = True
except ImportError:
    HAS_POSTGRES = False
    
        def test_gist_parameters(self):
        index_name = 'integer_array_gist_buffering'
        index = GistIndex(fields=['field'], name=index_name, buffering=True, fillfactor=80)
        with connection.schema_editor() as editor:
            editor.add_index(CharFieldModel, index)
        constraints = self.get_constraints(CharFieldModel._meta.db_table)
        self.assertEqual(constraints[index_name]['type'], GistIndex.suffix)
        self.assertEqual(constraints[index_name]['options'], ['buffering=on', 'fillfactor=80'])
        with connection.schema_editor() as editor:
            editor.remove_index(CharFieldModel, index)
        self.assertNotIn(index_name, self.get_constraints(CharFieldModel._meta.db_table))
    
        def as_datetime(self):
        'Retrieve the Field's value as a tuple of date & time components.'
        if not self.is_set:
            return None
        yy, mm, dd, hh, mn, ss, tz = [c_int() for i in range(7)]
        status = capi.get_field_as_datetime(
            self._feat.ptr, self._index, byref(yy), byref(mm), byref(dd),
            byref(hh), byref(mn), byref(ss), byref(tz))
        if status:
            return (yy, mm, dd, hh, mn, ss, tz)
        else:
            raise GDALException('Unable to retrieve date & time information from the field.')
    
        if isinstance(password, str):
        password = password.encode('latin1')
    
        def initialize_options(self):
        TestCommand.initialize_options(self)
        try:
            from multiprocessing import cpu_count
            self.pytest_args = ['-n', str(cpu_count()), '--boxed']
        except (ImportError, NotImplementedError):
            self.pytest_args = ['-n', '1', '--boxed']
    
        def test_nonhttp_schemes_dont_check_URLs(self):
        test_urls = (
            'data:image/gif;base64,R0lGODlhAQABAHAAACH5BAUAAAAALAAAAAABAAEAAAICRAEAOw==',
            'file:///etc/passwd',
            'magnet:?xt=urn:btih:be08f00302bc2d1d3cfa3af02024fa647a271431',
        )
        for test_url in test_urls:
            req = requests.Request('GET', test_url)
            preq = req.prepare()
            assert test_url == preq.url
    
    if is_py2:
    from urllib import (
        quote, unquote, quote_plus, unquote_plus, urlencode, getproxies,
        proxy_bypass, proxy_bypass_environment, getproxies_environment)
    from urlparse import urlparse, urlunparse, urljoin, urlsplit, urldefrag
    from urllib2 import parse_http_list
    import cookielib
    from Cookie import Morsel
    from StringIO import StringIO
    from collections import Callable, Mapping, MutableMapping, OrderedDict
    
            # it had actual content (not checking for SOCKS protocol for now)
        assert len(fake_proxy.handler_results[0]) > 0
    
        def test_valid(self):
        assert address_in_network('192.168.1.1', '192.168.1.0/24')
    
            #: The amount of time elapsed between sending the request
        #: and the arrival of the response (as a timedelta).
        #: This property specifically measures the time taken between sending
        #: the first byte of the request and finishing parsing the headers. It
        #: is therefore unaffected by consuming the response content or the
        #: value of the ``stream`` keyword argument.
        self.elapsed = datetime.timedelta(0)