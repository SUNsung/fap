
        
        
    {    # Options that need a file parameter
    'download-archive': ['--require-parameter'],
    'cookies': ['--require-parameter'],
    'load-info': ['--require-parameter'],
    'batch-file': ['--require-parameter'],
}
    
    new_version = {}
    
        with io.open(infile, encoding='utf-8') as inf:
        readme = inf.read()
    
    import io
import optparse
import os
import sys
    
            params = get_params(test_case.get('params', {}))
        params['outtmpl'] = tname + '_' + params['outtmpl']
        if is_playlist and 'playlist' not in test_case:
            params.setdefault('extract_flat', 'in_playlist')
            params.setdefault('skip_download', True)
    
        def test_socks4(self):
        self.assertTrue(isinstance(self._get_ip('socks4'), compat_str))
    
        dct = dict(__instancecheck__=_check, __subclasscheck__=_check)
    meta = type('ABCBase', (type, ), dct)
    return meta(name, tuple(), dct)
    
        ('border-top-style: dotted',
     {'border': {'top': {'style': 'mediumDashDotDot'}}}),
    ('border-top-style: dotted; border-top-width: thin',
     {'border': {'top': {'style': 'dotted'}}}),
    ('border-top-style: dashed',
     {'border': {'top': {'style': 'mediumDashed'}}}),
    ('border-top-style: dashed; border-top-width: thin',
     {'border': {'top': {'style': 'dashed'}}}),
    ('border-top-style: double',
     {'border': {'top': {'style': 'double'}}}),
    # - color
    ('border-style: solid; border-color: #0000ff',
     {'border': {'top': {'style': 'medium', 'color': '0000FF'},
                 'right': {'style': 'medium', 'color': '0000FF'},
                 'bottom': {'style': 'medium', 'color': '0000FF'},
                 'left': {'style': 'medium', 'color': '0000FF'}}}),
    ('border-top-style: double; border-top-color: blue',
     {'border': {'top': {'style': 'double', 'color': '0000FF'}}}),
    ('border-top-style: solid; border-top-color: #06c',
     {'border': {'top': {'style': 'medium', 'color': '0066CC'}}}),
    # ALIGNMENT
    # - horizontal
    ('text-align: center',
     {'alignment': {'horizontal': 'center'}}),
    ('text-align: left',
     {'alignment': {'horizontal': 'left'}}),
    ('text-align: right',
     {'alignment': {'horizontal': 'right'}}),
    ('text-align: justify',
     {'alignment': {'horizontal': 'justify'}}),
    # - vertical
    ('vertical-align: top',
     {'alignment': {'vertical': 'top'}}),
    ('vertical-align: text-top',
     {'alignment': {'vertical': 'top'}}),
    ('vertical-align: middle',
     {'alignment': {'vertical': 'center'}}),
    ('vertical-align: bottom',
     {'alignment': {'vertical': 'bottom'}}),
    ('vertical-align: text-bottom',
     {'alignment': {'vertical': 'bottom'}}),
    # - wrap_text
    ('white-space: nowrap',
     {'alignment': {'wrap_text': False}}),
    ('white-space: pre',
     {'alignment': {'wrap_text': False}}),
    ('white-space: pre-line',
     {'alignment': {'wrap_text': False}}),
    ('white-space: normal',
     {'alignment': {'wrap_text': True}}),
    # NUMBER FORMAT
    ('number-format: 0%',
     {'number_format': {'format_code': '0%'}}),
])
def test_css_to_excel(css, expected):
    convert = CSSToExcelConverter()
    assert expected == convert(css)
    
            # explicitly ensure file was compressed.
        with tm.decompress_file(path, compression) as fh:
            result = fh.read().decode('utf8')
        assert_frame_equal(df, pd.read_json(result))
    
    
def test_bin32():
    header = b'\xc6'
    data = b'x' * 65536
    b = packb(data, use_bin_type=True)
    assert len(b) == len(data) + 5
    assert b[0:1] == header
    assert b[1:5] == b'\x00\x01\x00\x00'
    assert b[5:] == data
    assert unpackb(b) == data
    
        # 40 ok for read_size=1024, while 50 introduces errors
    # 7000 ok for read_size=1024*1024, while 8000 leads to glibc detected ***
    # python: double free or corruption (!prev):
    
    
  def Start( self ):
    request_data = BuildRequestData()
    request_data.update( { 'filetypes': self.filetypes } )
    self._response = self.PostDataToHandler( request_data,
                                             'semantic_completion_available' )
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def LevelWarnings_test():
  opts = _JavaFilter( { 'level' : 'warning' } )
  f = _CreateFilterForTypes( opts, [ 'java' ] )
    
        try:
      result = self.fn( *self.args, **self.kwargs )
    except BaseException:
      e = sys.exc_info()[ 1 ]
      self.future.set_exception( e )
    else:
      self.future.set_result( result )
    
            self._invoke_callbacks()
        return True
    
    |======================= In-process =====================|== Out-of-process ==|
    
    import functools
import time
import timeit
import sys
    
    def with_thread_pool_executor():
    with ThreadPoolExecutor(10) as executor:
        return list(executor.map(is_prime, PRIMES))