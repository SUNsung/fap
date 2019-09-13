
        
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

    
            # copy part of the graph below current checkpoint node, stopping at
        # other checkpoints nodes
        ops_to_copy = fast_backward_ops(within_ops=fwd_ops,
                                        seed_ops=[r.op for r in ts],
                                        stop_at_ts=checkpoints_other)
        debug_print('Found {} ops to copy within {}, seed {}, stop_at {}'.format(
            len(ops_to_copy), fwd_ops, [r.op for r in ts], checkpoints_other))
        debug_print('ops_to_copy = {}'.format(ops_to_copy))
        if not ops_to_copy:  # we're done!
            break
        _, info = ge.copy_with_input_replacements(ge.sgv(ops_to_copy), {})
        for origin_op, op in info._transformed_ops.items():
            op._set_device(origin_op.node_def.device)
        copied_ops = info._transformed_ops.values()
        debug_print('Copied {} to {}'.format(ops_to_copy, copied_ops))
        ge.reroute_ts(checkpoints_disconnected_other, checkpoints_other, can_modify=copied_ops)
        debug_print('Rewired %s in place of %s restricted to %s',
                    checkpoints_disconnected_other, checkpoints_other, copied_ops)
    
        def status(self):
        ''' Place Status into bottom bar '''
        statusframe = ttk.Frame(self)
        statusframe.pack(side=tk.LEFT, anchor=tk.W, fill=tk.X, expand=False)
    
        def draw_landmarks(self, color_id=3, radius=1):
        ''' Draw the facial landmarks '''
        color = self.colors[color_id]
        for alignment in self.alignments:
            landmarks = alignment['landmarksXY']
            logger.trace('Drawing Landmarks: (landmarks: %s, color: %s, radius: %s)',
                         landmarks, color, radius)
            for (pos_x, pos_y) in landmarks:
                cv2.circle(self.image,  # pylint: disable=no-member
                           (pos_x, pos_y),
                           radius,
                           color,
                           -1)
    
        return True
    
    
  def Response( self ):
    if self._cached_response:
      return self._cached_response
    
    
def _ConnectGroupChildren( group_name_to_group ):
  def GetParentNames( group ):
    links_to     = 'links to '
    parent_names = []
    for line in group.lines:
      if line.startswith( links_to ):
        parent_names.append( line[ len( links_to ): ] )
    return parent_names
    
    
@YouCompleteMeInstance()
@patch( 'ycm.vimsupport.PostVimMessage', new_callable = ExtendedMock )
def SendCompletionRequest_ResponseContainingError_test( ycm, post_vim_message ):
  current_buffer = VimBuffer( 'buffer' )
    
        with patch.object( ycm._message_poll_request,
                       '_response_future',
                       new = MockAsyncServerResponseInProgress() ):
      ycm.OnPeriodicTick() # Uses ycm._message_poll_request ...
  '''
  return mock.MagicMock( wraps = FakeFuture( False ) )
    
        with _AcquireFutures(fs):
        finished = set(
                f for f in fs
                if f._state in [CANCELLED_AND_NOTIFIED, FINISHED])
        pending = set(fs) - finished
        waiter = _create_and_install_waiters(fs, _AS_COMPLETED)
    
        # Parse and validate the field names.  Validation serves two purposes,
    # generating informative error messages and preventing template injection attacks.
    if isinstance(field_names, basestring):
        field_names = field_names.replace(',', ' ').split() # names separated by whitespace and/or commas
    field_names = tuple(map(str, field_names))
    for name in (typename,) + field_names:
        if not all(c.isalnum() or c=='_' for c in name):
            raise ValueError('Type names and field names can only contain alphanumeric characters and underscores: %r' % name)
        if _iskeyword(name):
            raise ValueError('Type names and field names cannot be a keyword: %r' % name)
        if name[0].isdigit():
            raise ValueError('Type names and field names cannot start with a number: %r' % name)
    seen_names = set()
    for name in field_names:
        if name.startswith('_'):
            raise ValueError('Field names cannot start with an underscore: %r' % name)
        if name in seen_names:
            raise ValueError('Encountered duplicate field name: %r' % name)
        seen_names.add(name)