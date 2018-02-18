
        
            def long_desc(self):
        '''A long description of the command. Return short description when not
        available. It cannot contain newlines, since contents will be formatted
        by optparser which removes newlines and wraps text.
        '''
        return self.short_desc()
    
    from six.moves.urllib.parse import urlencode
    
            infos = []
        if not self.wasSuccessful():
            write('FAILED')
            failed, errored = map(len, (self.failures, self.errors))
            if failed:
                infos.append('failures=%d' % failed)
            if errored:
                infos.append('errors=%d' % errored)
        else:
            write('OK')
    
            try:
            spidercls = self.crawler_process.spider_loader.load(name)
        except KeyError:
            pass
        else:
            # if spider already exists and not --force then halt
            if not opts.force:
                print('Spider %r already exists in module:' % name)
                print('  %s' % spidercls.__module__)
                return
        template_file = self._find_template(opts.template)
        if template_file:
            self._genspider(module, name, domain, opts.template, template_file)
            if opts.edit:
                self.exitcode = os.system('scrapy edit '%s'' % name)
    
    
class CallCenter(object):
    
        def take_spot(self, spot):
        self.spots_taken.append(spot)
    
        def __init__(self, seller_category_map, seller_category_overrides_map):
        self.seller_category_map = seller_category_map
        self.seller_category_overrides_map = seller_category_overrides_map
    
    
class HitCounts(MRJob):
    
    - RecognitionException
  - MismatchedRangeException
  - MismatchedSetException
    - MismatchedNotSetException
    .
  - MismatchedTokenException
  - MismatchedTreeNodeException
  - NoViableAltException
  - EarlyExitException
  - FailedPredicateException
  .
.
    
                    if c >= self.min[s] and c <= self.max[s]:
                    # move to next state
                    snext = self.transition[s][c-self.min[s]]
                    #print 'in range, next state = %d' % snext
                    
                    if snext < 0:
                        #print 'not a normal transition'
                        # was in range but not a normal transition
                        # must check EOT, which is like the else clause.
                        # eot[s]>=0 indicates that an EOT edge goes to another
                        # state.
                        if self.eot[s] >= 0: # EOT Transition to accept state?
                            #print 'EOT trans to accept state %d' % self.eot[s]
                            
                            s = self.eot[s]
                            input.consume()
                            # TODO: I had this as return accept[eot[s]]
                            # which assumed here that the EOT edge always
                            # went to an accept...faster to do this, but
                            # what about predicated edges coming from EOT
                            # target?
                            continue
    
    
class MismatchedRangeException(RecognitionException):
    '''@brief The next token does not match a range of expected types.'''
    
    
    def getCharIndex(self):
        '''What is the index of the current character of lookahead?'''
        
        return self.input.index()
    
    
class UnsafeThreadPoolExecutor(_base.Executor):
    def __init__(self, max_workers):
        '''Initializes a new ThreadPoolExecutor instance.
    
    if __name__ == '__main__':
    main()

    
        if not self._response_future or self._event_name != 'FileReadyToParse':
      return []
    
    
  def Start( self ):
    request_data = BuildRequestData()
    request_data.update( { 'filetypes': self.filetypes } )
    with HandleServerException():
      self._response = self.PostDataToHandler( request_data,
                                               'semantic_completion_available' )
    
    
  def IsAllowed( self, diagnostic ):
    # NOTE: a diagnostic IsAllowed() ONLY if NO filters match it
    for filterMatches in self._filters:
      if filterMatches( diagnostic ):
        return False
    
    
def FormatDebugInfoResponse_Completer_ServerRunningWithHost_test():
  response = deepcopy( GENERIC_RESPONSE )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Completer name completer debug information:\n'
      '  Server name running at: http://127.0.0.1:1234\n'
      '  Server name process ID: 12345\n'
      '  Server name executable: /path/to/executable\n'
      '  Server name logfiles:\n'
      '    /path/to/stdout/logfile\n'
      '    /path/to/stderr/logfile\n'
      '  Server name key: value\n'
      '  Key: value\n'
    )
  )