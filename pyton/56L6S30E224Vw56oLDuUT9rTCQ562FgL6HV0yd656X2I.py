
        
        import io
import sys
import re
    
            with open(swf_file, 'rb') as swf_f:
            swf_content = swf_f.read()
        swfi = SWFInterpreter(swf_content)
    
    
class ScrapyCommand(object):
    
            @wraps(cb)
        def cb_wrapper(response):
            try:
                output = cb(response)
                output = list(iterate_spider_output(output))
            except:
                case = _create_testcase(method, 'callback')
                results.addError(case, sys.exc_info())
    
            for i in range(0, len(ds_refresh)):
            datasource = ds_refresh[i]
            cols = metadata[i]
            if cols:
                col_objs_list = (
                    session.query(DruidColumn)
                    .filter(DruidColumn.datasource_id == datasource.id)
                    .filter(or_(DruidColumn.column_name == col for col in cols))
                )
                col_objs = {col.column_name: col for col in col_objs_list}
                for col in cols:
                    if col == '__time':  # skip the time column
                        continue
                    col_obj = col_objs.get(col, None)
                    if not col_obj:
                        col_obj = DruidColumn(
                            datasource_id=datasource.id,
                            column_name=col)
                        with session.no_autoflush:
                            session.add(col_obj)
                    datatype = cols[col]['type']
                    if datatype == 'STRING':
                        col_obj.groupby = True
                        col_obj.filterable = True
                    if datatype == 'hyperUnique' or datatype == 'thetaSketch':
                        col_obj.count_distinct = True
                    # Allow sum/min/max for long or double
                    if datatype == 'LONG' or datatype == 'DOUBLE':
                        col_obj.sum = True
                        col_obj.min = True
                        col_obj.max = True
                    col_obj.type = datatype
                    col_obj.datasource = datasource
                datasource.generate_metrics_for(col_objs_list)
        session.commit()
    
        @property
    def data(self):
        d = super(SqlaTable, self).data
        if self.type == 'table':
            grains = self.database.grains() or []
            if grains:
                grains = [(g.name, g.name) for g in grains]
            d['granularity_sqla'] = utils.choicify(self.dttm_cols)
            d['time_grain_sqla'] = grains
        return d
    
            logging.info('Importing %d %s',
                     len(data.get(DRUID_CLUSTERS_KEY, [])),
                     DRUID_CLUSTERS_KEY)
        for datasource in data.get(DRUID_CLUSTERS_KEY, []):
            DruidCluster.import_from_dict(session, datasource, sync=sync)
        session.commit()
    else:
        logging.info('Supplied object is not a dictionary.')

    
         Metrics and columns and datasource will be overrided if exists.
     This function can be used to import/export dashboards between multiple
     superset instances. Audit metadata isn't copies over.
    '''
    make_transient(i_datasource)
    logging.info('Started import of the datasource: {}'.format(
        i_datasource.to_json()))
    
    
template_processors = {}
keys = tuple(globals().keys())
for k in keys:
    o = globals()[k]
    if o and inspect.isclass(o) and issubclass(o, BaseTemplateProcessor):
        template_processors[o.engine] = o
    
        test_suite = 'tests',
    
    site = Bigthink()
download = site.download_by_url

    
    #----------------------------------------------------------------------
def makeMimi(upid):
    '''From http://cdn37.atwikiimg.com/sitescript/pub/dksitescript/FC2.site.js
    Also com.hps.util.fc2.FC2EncrptUtil.makeMimiLocal
    L110'''
    strSeed = 'gGddgPfeaf_gzyr'
    prehash = upid + '_' + strSeed
    return md5(prehash.encode('utf-8')).hexdigest()
    
    
  def Response( self ):
    return {}
    
        with HandleServerException( truncate = True ):
      self._cached_response = JsonFromFuture( self._response_future )
    
    TIMEOUT_SECONDS = 0.1
    
    
def _JavaFilter( config ):
  return { 'filter_diagnostics' : { 'java': config } }
    
            return [('/without_user', WithoutUserHandler),
                ('/with_user', WithUserHandler),
                ('/without_user_module', WithoutUserModuleHandler),
                ('/with_user_module', WithUserModuleHandler)]
    
            p = Popen(
            [sys.executable, '-m', 'testapp'], stdout=subprocess.PIPE,
            cwd=path, env=dict(os.environ, PYTHONPATH=pythonpath),
            universal_newlines=True)
        out = p.communicate()[0]
        self.assertEqual(out, 'Starting\nStarting\n')

    
    from tornado.escape import utf8, to_unicode
from tornado import gen
from tornado.iostream import IOStream
from tornado.log import app_log
from tornado.stack_context import NullContext
from tornado.tcpserver import TCPServer
from tornado.test.util import skipBefore35, skipIfNonUnix, exec_test, unittest
from tornado.testing import AsyncTestCase, ExpectLog, bind_unused_port, gen_test