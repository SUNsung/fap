
        
                Number:                    '#990000',        # class: 'm'
    
        @pytest.mark.parametrize('error', [IOError, OSError])
    def test_super_len_tell_ioerror(self, error):
        '''Ensure that if tell gives an IOError super_len doesn't fail'''
        class NoLenBoomFile(object):
            def tell(self):
                raise error()
    
        # Informational.
    100: ('continue',),
    101: ('switching_protocols',),
    102: ('processing',),
    103: ('checkpoint',),
    122: ('uri_too_long', 'request_uri_too_long'),
    200: ('ok', 'okay', 'all_ok', 'all_okay', 'all_good', '\\o/', '✓'),
    201: ('created',),
    202: ('accepted',),
    203: ('non_authoritative_info', 'non_authoritative_information'),
    204: ('no_content',),
    205: ('reset_content', 'reset'),
    206: ('partial_content', 'partial'),
    207: ('multi_status', 'multiple_status', 'multi_stati', 'multiple_stati'),
    208: ('already_reported',),
    226: ('im_used',),
    
        def __init__(self, db):
        self.db = db
        pass
    
        def process_query(self, query):
        query = self.parse_query(query)
        results = self.memory_cache.get(query)
        if results is None:
            results = self.reverse_index_cluster.process_search(query)
            self.memory_cache.set(query, results)
        return results
    
    
if __name__ == '__main__':
    SpendingByCategory.run()

    
    __author__ = 'Brian Quinlan (brian@sweetapp.com)'
    
        # build a new DiagnosticFilter merging all filters
    #  for the provided filetypes
    spec = []
    for filetype in filetypes:
      type_specific = self._all_filters.get( filetype, [] )
      spec.extend( type_specific )
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def _BuildQfListItem( goto_data_item ):
  qf_item = {}
  if 'filepath' in goto_data_item:
    qf_item[ 'filename' ] = ToUnicode( goto_data_item[ 'filepath' ] )
  if 'description' in goto_data_item:
    qf_item[ 'text' ] = ToUnicode( goto_data_item[ 'description' ] )
  if 'line_num' in goto_data_item:
    qf_item[ 'lnum' ] = goto_data_item[ 'line_num' ]
  if 'column_num' in goto_data_item:
    # ycmd returns columns 1-based, and QuickFix lists require 'byte offsets'.
    # See :help getqflist and equivalent comment in
    # vimsupport.ConvertDiagnosticsToQfList.
    #
    # When the Vim help says 'byte index', it really means '1-based column
    # number' (which is somewhat confusing). :help getqflist states 'first
    # column is 1'.
    qf_item[ 'col' ] = goto_data_item[ 'column_num' ]