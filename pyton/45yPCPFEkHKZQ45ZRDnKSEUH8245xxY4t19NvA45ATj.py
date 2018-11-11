
        
            # TODO: decoder/encoder should accept cls? Otherwise, subclassing
    # JSONObjectWithFields is tricky...
    header_cls = Header
    header = jose.Field(
        'header', omitempty=True, default=header_cls(),
        decoder=header_cls.from_json)
    
    # generate_private_key requires cryptography>=0.5
key = jose.JWKRSA(key=rsa.generate_private_key(
    public_exponent=65537,
    key_size=BITS,
    backend=default_backend()))
acme = client.Client(DIRECTORY_URL, key)
    
    
def unique_id():
    ''' Returns an unique id to be used as a VirtualHost identifier'''
    return binascii.hexlify(os.urandom(16)).decode('utf-8')

    
            # Force reload if files were modified
        # This is needed to recalculate augeas directive span
        if save_files:
            for sf in save_files:
                self.aug.remove('/files/'+sf)
            self.aug.load()
        if title and not temporary:
            self.finalize_checkpoint(title)
    
            for achall in self.achalls:
            achall_addrs = self._get_addrs(achall)
            addrs.update(achall_addrs)
    
      return filters

    
    
@contextlib.contextmanager
def UserOptions( options ):
  old_vim_options = test_utils.VIM_OPTIONS.copy()
  test_utils.VIM_OPTIONS.update( DEFAULT_CLIENT_OPTIONS )
  test_utils.VIM_OPTIONS.update( options )
  try:
    yield
  finally:
    test_utils.VIM_OPTIONS = old_vim_options
    
    
@YouCompleteMeInstance( { 'g:ycm_open_loclist_on_ycm_diags': 1 } )
@patch( 'ycm.youcompleteme.YouCompleteMe.FiletypeCompleterExistsForFiletype',
        return_value = True )
@patch( 'ycm.vimsupport.PostVimMessage', new_callable = ExtendedMock )
@patch( 'ycm.vimsupport.SetLocationListForWindow', new_callable = ExtendedMock )
@patch( 'ycm.vimsupport.OpenLocationList', new_callable = ExtendedMock )
def YouCompleteMe_ShowDiagnostics_DiagnosticsFound_OpenLocationList_test(
  ycm,
  open_location_list,
  set_location_list_for_window,
  post_vim_message,
  *args ):
    
      if parsed_args.coverage:
    nosetests_args += [ '--with-coverage',
                        '--cover-erase',
                        '--cover-package=ycm',
                        '--cover-html' ]