
        
        from sklearn.ensemble import RandomForestClassifier
from sklearn.ensemble import ExtraTreesClassifier
from sklearn.ensemble import AdaBoostClassifier
from sklearn.linear_model import LogisticRegression
from sklearn.naive_bayes import MultinomialNB
    
        if args.plot is not None:
        print('Displaying plot', file=sys.stderr)
        title = ('Multilabel metrics with %s' %
                 ', '.join('{0}={1}'.format(field, getattr(args, field))
                           for field in ['samples', 'classes', 'density']
                           if args.plot != field))
        _plot(results, args.metrics, args.formats, title, steps, args.plot)

    
        for (sbplt, vals, quantity,
         build_time, query_time) in [(311, Nrange, 'N',
                                      N_results_build,
                                      N_results_query),
                                     (312, Drange, 'D',
                                      D_results_build,
                                      D_results_query),
                                     (313, krange, 'k',
                                      k_results_build,
                                      k_results_query)]:
        ax = plt.subplot(sbplt, yscale='log')
        plt.grid(True)
    
        try:
        fn = inspect.getsourcefile(obj)
    except Exception:
        fn = None
    if not fn:
        try:
            fn = inspect.getsourcefile(sys.modules[obj.__module__])
        except Exception:
            fn = None
    if not fn:
        return
    
            #Creating a list of all md files in the current directory
        for temp in glob.glob(os.path.join(loc, operating_sys, '*.md')):
            allmd.append(temp)
    
    
  def Start( self ):
    request_data = BuildRequestData()
    request_data.update( { 'filetypes': self.filetypes } )
    self._response = self.PostDataToHandler( request_data,
                                             'semantic_completion_available' )
    
    
  def Response( self ):
    return {
      'completions': self._results,
      'completion_start_column': self.request_data[ 'start_column' ]
    }
    
            for diags in itervalues( self._line_to_diags ):
          # Insert squiggles in reverse order so that errors overlap warnings.
          for diag in reversed( diags ):
            group = ( 'YcmErrorSection' if _DiagnosticIsError( diag ) else
                      'YcmWarningSection' )
    
    SYNTAX_REGION_ARGUMENT_REGEX = re.compile(
  r'^(?:matchgroup|start)=.*$' )
    
    import contextlib
from nose.tools import eq_, ok_
from mock import patch
    
    
def EndsWithPython_Bad( path ):
  ok_( not _EndsWithPython( path ),
       'Path {0} does end with a Python name.'.format( path ) )
    
    
def BuildCompletionNamespace( namespace = None,
                              insertion_text = 'Test',
                              menu_text = None,
                              extra_menu_info = None,
                              detailed_info = None,
                              kind = None ):
  return BuildCompletion( insertion_text = insertion_text,
                          menu_text = menu_text,
                          extra_menu_info = extra_menu_info,
                          detailed_info = detailed_info,
                          kind = kind,
                          extra_data = {
                            'required_namespace_import': namespace
                          } )
    
                output[ATTR_UPDATE_DATE] = datetime.now().strftime(DATE_FORMAT)
    
    SERVICE_SCHEMA = vol.Schema({
    vol.Required(CONF_NAME): cv.string,
    vol.Required(SERVICE_PARAM): cv.string,
    vol.Optional(SERVICE_CGI, default=SERVICE_DEFAULT_CGI): cv.string,
    vol.Optional(SERVICE_ACTION, default=SERVICE_DEFAULT_ACTION): cv.string,
})
    
        cognito = _cognito(cloud)
    # Workaround for bug in Warrant. PR with fix:
    # https://github.com/capless/warrant/pull/82
    cognito.add_base_attributes()
    try:
        cognito.register(email, password)
    except ClientError as err:
        raise _map_aws_exception(err)
    
            try:
            value = state_helper.state_as_number(state)
        except ValueError:
            _LOGGER.debug(
                'Error sending %s: %s (tags: %s)', metric, state.state, tags)
            return
    
        def get_device_name(self, device):
        '''Return the name of the given device or None if we don't know.'''
        if not self.last_results:
            return None
        for client in self.last_results:
            if client.mac == device:
                return client.ip
        return None
    
        return True
    
            self.success_init = self._update_info()
        _LOGGER.info('Scanner initialized')
    
    MIN_TIME_BETWEEN_UPDATES = timedelta(seconds=1)