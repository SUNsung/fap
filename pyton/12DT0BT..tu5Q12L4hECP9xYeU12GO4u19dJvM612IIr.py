
        
            parser = argparse.ArgumentParser(description='Start a new Shippable run.')
    
        def _get_having_obj(self, col, op, eq):
        cond = None
        if op == '==':
            if col in self.column_names:
                cond = DimSelector(dimension=col, value=eq)
            else:
                cond = Aggregation(col) == eq
        elif op == '>':
            cond = Aggregation(col) > eq
        elif op == '<':
            cond = Aggregation(col) < eq
    
        def test_select_from_values(self):
        query = 'SELECT * FROM VALUES (13, 42)'
        self.assertFalse(self.extract_tables(query))
    
        def pre_add(self, cluster):
        security.merge_perm(sm, 'database_access', cluster.perm)
    
    import logging
    
        This configures the context with just a URL
    and not an Engine, though an Engine is acceptable
    here as well.  By skipping the Engine creation
    we don't even need a DBAPI to be available.
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# No imports from `future` because when this is loaded, sys.path hasn't been set
# up yet!
    
        # For pickling to work, the __module__ variable needs to be set to the frame
    # where the named tuple is created.  Bypass this step in enviroments where
    # sys._getframe is not defined (Jython for example).
    if hasattr(_sys, '_getframe'):
        result.__module__ = _sys._getframe(1).f_globals.get('__name__', '__main__')
    
    from concurrent.futures import ThreadPoolExecutor, ProcessPoolExecutor
    
    
  def Done( self ):
    return bool( self._response_future ) and self._response_future.done()
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def MergeMultipleFiletypes_test():
    
    
def KeywordsFromSyntaxListOutput_ContainedArgAllowed_test():
  assert_that( syntax_parse._KeywordsFromSyntaxListOutput( '''
phpFunctions   xxx contained gzclose yaz_syntax html_entity_decode fbsql_read_blob png2wbmp mssql_init cpdf_set_title gztell fbsql_insert_id empty cpdf_restore mysql_field_type closelog swftext ldap_search curl_errno gmp_div_r mssql_data_seek getmyinode printer_draw_pie mcve_initconn ncurses_getmaxyx defined
                   contained replace_child has_attributes specified insertdocument assign node_name hwstat addshape get_attribute_node html_dump_mem userlist
                   links to Function''' ), # noqa
              has_items( 'gzclose', 'userlist', 'ldap_search' ) )
    
    from ycm.tests.test_utils import MockVimModule
MockVimModule()