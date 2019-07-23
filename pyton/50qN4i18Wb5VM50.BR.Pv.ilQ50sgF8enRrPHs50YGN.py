
        
                    def __setitem__(self, k, v):
                value[k] = v
    
    For example the `llc` program is in package `llvm` so this:
    yay -S llc
should be:
    yay -S llvm
'''
    
        @pytest.fixture(autouse=True)
    def shell_aliases(self):
        os.environ['TF_SHELL_ALIASES'] = (
            'alias fuck=\'eval $(thefuck $(fc -ln -1))\'\n'
            'alias l=\'ls -CF\'\n'
            'alias la=\'ls -A\'\n'
            'alias ll=\'ls -alF\'')
    
        def test_how_to_configure(self, shell):
        assert shell.how_to_configure() is None
    
    
@pytest.mark.parametrize('script, pyenv_cmd', [
    ('pyenv globe', 'globe'),
    ('pyenv intall 3.8.0', 'intall'),
    ('pyenv list', 'list'),
])
def test_match(script, pyenv_cmd, output):
    assert match(Command(script, output=output))
    
    
@classmethod
def get_args(cls, dist, header=None):
    '''
    Yield write_script() argument tuples for a distribution's
    console_scripts and gui_scripts entry points.
    '''
    if header is None:
        header = cls.get_header()
    spec = str(dist.as_requirement())
    for type_ in 'console', 'gui':
        group = type_ + '_scripts'
        for name, ep in dist.get_entry_map(group).items():
            # ensure_safe_name
            if re.search(r'[\\/]', name):
                raise ValueError('Path separators not allowed in script names')
            script_text = TEMPLATE.format(
                          ep.module_name, ep.attrs[0], '.'.join(ep.attrs),
                          spec, group, name)
            args = cls._get_script_args(type_, name, header, script_text)
            for res in args:
                yield res
    
        # If we have user_data in completions (8.0.1493 or later), then we would
    # only ever return max. 1 completion here. However, if we had to guess, it
    # is possible that we matched multiple completion items (e.g. for overloads,
    # or similar classes in multiple packages). In any case, rather than
    # prompting the user and disturbing her workflow, we just apply the first
    # one. This might be wrong, but the solution is to use a (very) new version
    # of Vim which supports user_data on completion items
    fixit_completion = fixit_completions[ 0 ]
    
    # The default options which are required for a working YouCompleteMe object.
DEFAULT_CLIENT_OPTIONS = {
  # YCM options
  'g:ycm_log_level': 'info',
  'g:ycm_keep_logfiles': 0,
  'g:ycm_extra_conf_vim_data': [],
  'g:ycm_server_python_interpreter': '',
  'g:ycm_show_diagnostics_ui': 1,
  'g:ycm_enable_diagnostic_signs': 1,
  'g:ycm_enable_diagnostic_highlighting': 0,
  'g:ycm_echo_current_diagnostic': 1,
  'g:ycm_filter_diagnostics': {},
  'g:ycm_always_populate_location_list': 0,
  'g:ycm_collect_identifiers_from_tags_files': 0,
  'g:ycm_seed_identifiers_with_syntax': 0,
  'g:ycm_goto_buffer_command': 'same-buffer',
  # ycmd options
  'g:ycm_auto_trigger': 1,
  'g:ycm_min_num_of_chars_for_completion': 2,
  'g:ycm_semantic_triggers': {},
  'g:ycm_filetype_specific_completion_to_disable': { 'gitcommit': 1 },
  'g:ycm_max_num_candidates': 50,
  'g:ycm_max_diagnostics_to_display': 30
}
    
    
  def _ConvertDiagListToDict( self ):
    self._line_to_diags = defaultdict( list )
    for diag in self._diagnostics:
      location = diag[ 'location' ]
      bufnr = vimsupport.GetBufferNumberForFilename( location[ 'filepath' ] )
      if bufnr == self._bufnr:
        line_number = location[ 'line_num' ]
        self._line_to_diags[ line_number ].append( diag )
    
    
@patch( 'ycm.client.messages_request.PostVimMessage',
        new_callable = ExtendedMock )
def HandlePollResponse_MultipleMessagesAndDiagnostics_test( post_vim_message ):
  diagnostics_handler = ExtendedMock()
  messages = [
    { 'filepath': 'foo', 'diagnostics': [ 'PLACEHOLDER1' ] },
    { 'message': 'On the first day of Christmas, my VimScript gave to me' },
    { 'filepath': 'bar', 'diagnostics': [ 'PLACEHOLDER2' ] },
    { 'message': 'A test file in a Command-T' },
    { 'filepath': 'baz', 'diagnostics': [ 'PLACEHOLDER3' ] },
    { 'message': 'On the second day of Christmas, my VimScript gave to me' },
    { 'filepath': 'foo', 'diagnostics': [ 'PLACEHOLDER4' ] },
    { 'message': 'Two popup menus, and a test file in a Command-T' },
  ]
  assert_that( _HandlePollResponse( messages, diagnostics_handler ),
               equal_to( True ) )
  diagnostics_handler.UpdateWithNewDiagnosticsForFile.assert_has_exact_calls( [
    call( 'foo', [ 'PLACEHOLDER1' ] ),
    call( 'bar', [ 'PLACEHOLDER2' ] ),
    call( 'baz', [ 'PLACEHOLDER3' ] ),
    call( 'foo', [ 'PLACEHOLDER4' ] )
  ] )
    
        def _start_queue_management_thread(self):
        # When the executor gets lost, the weakref callback will wake up
        # the queue management thread.
        def weakref_cb(_, q=self._result_queue):
            q.put(None)
        if self._queue_management_thread is None:
            self._queue_management_thread = threading.Thread(
                    target=_queue_management_worker,
                    args=(weakref.ref(self, weakref_cb),
                          self._processes,
                          self._pending_work_items,
                          self._work_ids,
                          self._call_queue,
                          self._result_queue))
            self._queue_management_thread.daemon = True
            self._queue_management_thread.start()
            _threads_queues[self._queue_management_thread] = self._result_queue