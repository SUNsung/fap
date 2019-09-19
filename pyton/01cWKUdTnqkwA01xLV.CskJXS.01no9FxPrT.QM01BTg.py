
        
        
class KBHit:
    ''' Creates a KBHit object that you can call to do various keyboard things. '''
    def __init__(self, is_gui=False):
        self.is_gui = is_gui
        if os.name == 'nt' or self.is_gui:
            pass
        else:
            # Save the terminal settings
            self.file_desc = sys.stdin.fileno()
            self.new_term = termios.tcgetattr(self.file_desc)
            self.old_term = termios.tcgetattr(self.file_desc)
    
        # forward ops are all ops that are candidates for recomputation
    fwd_ops = ge.get_forward_walk_ops([x.op for x in xs],
                                      inclusive=True,
                                      within_ops=bwd_ops)
    debug_print('fwd_ops: {}'.format(fwd_ops))
    
    
_HELPTEXT = 'Options for matching the histograms between the source and destination faces'
    
            For actions that occur identically for each frame (e.g. blend_box), constants can
        be placed into self.func_constants to be compiled at launch, then referenced for
        each face. '''
    def __init__(self, mask_type, output_size, predicted_available=False, **kwargs):
        super().__init__(mask_type, output_size, predicted_available, **kwargs)
        self.mask = self.get_mask() if not self.skip else None
    
        def get_erosion_kernel(self, mask):
        ''' Get the erosion kernel '''
        erosion_ratio = self.config['erosion'] / 100
        mask_radius = np.sqrt(np.sum(mask)) / 2
        kernel_size = max(1, int(abs(erosion_ratio * mask_radius)))
        erosion_kernel = cv2.getStructuringElement(  # pylint: disable=no-member
            cv2.MORPH_ELLIPSE,  # pylint: disable=no-member
            (kernel_size, kernel_size))
        logger.trace('erosion_kernel shape: %s', erosion_kernel.shape)
        return erosion_kernel
    
            # clip/scale the pixel intensities to [0, 255] if they fall
        # outside this range
        light = self._scale_array(light, clip=clip)
        col_a = self._scale_array(col_a, clip=clip)
        col_b = self._scale_array(col_b, clip=clip)
    
        @staticmethod
    def process(old_face, new_face, raw_mask):
        height, width, _ = old_face.shape
        height = height // 2
        width = width // 2
    
            # Process start and duration arguments
        self.start = self.parse_time(self.args.start)
        self.end = self.parse_time(self.args.end)
        if not self.__check_equals_time(self.args.end, '00:00:00'):
            self.duration = self.__get_duration(self.start, self.end)
        else:
            self.duration = self.parse_time(str(self.args.duration))
        # If fps was left blank in gui, set it to default -1.0 value
        if self.args.fps == '':
            self.args.fps = str(-1.0)
    
                status = response['status']
            change = response['id']
            while status == 'pending':
                request = changes.get(project=self.project_id, managedZone=zone_id, changeId=change)
                response = request.execute()
                status = response['status']
        except googleapiclient_errors.Error as e:
            logger.error('Encountered error adding TXT record: %s', e)
            raise errors.PluginError('Error communicating with the Google Cloud DNS API: {0}'
                                     .format(e))
    
            :param str record_name: The record name for which to find the closest SOA record.
        :returns: The domain, if found.
        :rtype: str
        :raises certbot.errors.PluginError: if no SOA record can be found.
        '''
    
                x_values = X._prep_values()
            y_values = Y._prep_values()
            with np.errstate(all='ignore'):
                cov = _cov(x_values, y_values)
                x_var = _cov(x_values, x_values)
                y_var = _cov(y_values, y_values)
                corr = cov / _zsqrt(x_var * y_var)
            return X._wrap_result(corr)
    
        def time_frame_add(self, use_numexpr, threads):
        self.df + self.df2
    
        goal_time = 0.2
    
    
  def _OnCompleteDone_FixIt( self ):
    completions = self._GetCompletionsUserMayHaveCompleted()
    fixit_completions = [ _GetFixItCompletion( c ) for c in completions ]
    fixit_completions = [ f for f in fixit_completions if f ]
    if not fixit_completions:
      return
    
    
class CommandRequest( BaseRequest ):
  def __init__( self,
                arguments,
                buffer_command = 'same-buffer',
                extra_data = None ):
    super( CommandRequest, self ).__init__()
    self._arguments = _EnsureBackwardsCompatibility( arguments )
    self._command = arguments and arguments[ 0 ]
    self._buffer_command = buffer_command
    self._extra_data = extra_data
    self._response = None
    
    
def WaitUntilReady( timeout = 5 ):
  expiration = time.time() + timeout
  while True:
    try:
      if time.time() > expiration:
        raise RuntimeError( 'Waited for the server to be ready '
                            'for {0} seconds, aborting.'.format( timeout ) )
      if _IsReady():
        return
    except requests.exceptions.ConnectionError:
      pass
    finally:
      time.sleep( 0.1 )
    
        with patch( 'ycm.youcompleteme.SendCommandRequest' ) as send_request:
      ycm.SendCommandRequest( [ 'ft=ycm:ident', 'GoTo' ], '', False, 1, 1 )
      send_request.assert_called_once_with( *expected_args )
    
    
  def Response( self ):
    if self._cached_response:
      return self._cached_response
    
    import logging
    
    
def _ConnectGroupChildren( group_name_to_group ):
  def GetParentNames( group ):
    links_to     = 'links to '
    parent_names = []
    for line in group.lines:
      if line.startswith( links_to ):
        parent_names.append( line[ len( links_to ): ] )
    return parent_names
    
    from ycm.tests import PathToTestFile, YouCompleteMeInstance
from ycmd.responses import ServerError
    
      def submit( self, fn, *args, **kwargs ):
    with self._shutdown_lock:
      if self._shutdown:
        raise RuntimeError( 'cannot schedule new futures after shutdown' )
    
            Raises:
            CancelledError: If the future was cancelled.
            TimeoutError: If the future didn't finish executing before the given
                timeout.
            Exception: If the call raised then that exception will be raised.
        '''
        with self._condition:
            if self._state in [CANCELLED, CANCELLED_AND_NOTIFIED]:
                raise CancelledError()
            elif self._state == FINISHED:
                return self.__get_result()
    
        >>> Point = namedtuple('Point', 'x y')
    >>> Point.__doc__                   # docstring for the new class
    'Point(x, y)'
    >>> p = Point(11, y=22)             # instantiate with positional args or keywords
    >>> p[0] + p[1]                     # indexable like a plain tuple
    33
    >>> x, y = p                        # unpack like a regular tuple
    >>> x, y
    (11, 22)
    >>> p.x + p.y                       # fields also accessable by name
    33
    >>> d = p._asdict()                 # convert to a dictionary
    >>> d['x']
    11
    >>> Point(**d)                      # convert from a dictionary
    Point(x=11, y=22)
    >>> p._replace(x=100)               # _replace() is like str.replace() but targets named fields
    Point(x=100, y=22)