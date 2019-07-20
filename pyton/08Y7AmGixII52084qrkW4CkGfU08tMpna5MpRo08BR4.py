
        
        usage:
    
        def long_desc(self):
        '''A long description of the command. Return short description when not
        available. It cannot contain newlines, since contents will be formatted
        by optparser which removes newlines and wraps text.
        '''
        return self.short_desc()
    
            if not assertion:
            if self.min_bound == self.max_bound:
                expected = self.min_bound
            else:
                expected = '%s..%s' % (self.min_bound, self.max_bound)
    
            def _identityVerifyingInfoCallback(self, connection, where, ret):
            if where & SSL_CB_HANDSHAKE_START:
                set_tlsext_host_name(connection, self._hostnameBytes)
            elif where & SSL_CB_HANDSHAKE_DONE:
                try:
                    verifyHostname(connection, self._hostnameASCII)
                except verification_errors as e:
                    logger.warning(
                        'Remote certificate is not valid for hostname '{}'; {}'.format(
                            self._hostnameASCII, e))
    
    
# XXX: move it to w3lib?
_ajax_crawlable_re = re.compile(six.u(r'<meta\s+name=['\']fragment['\']\s+content=['\']!['\']/?>'))
def _has_ajaxcrawlable_meta(text):
    '''
    >>> _has_ajaxcrawlable_meta('<html><head><meta name='fragment'  content='!'/></head><body></body></html>')
    True
    >>> _has_ajaxcrawlable_meta('<html><head><meta name='fragment' content='!'></head></html>')
    True
    >>> _has_ajaxcrawlable_meta('<html><head><!--<meta name='fragment'  content='!'/>--></head><body></body></html>')
    False
    >>> _has_ajaxcrawlable_meta('<html></html>')
    False
    '''
    
        long_description = README,
    
    site_info = 'baomihua.com'
download = baomihua_download
download_playlist = playlist_not_supported('baomihua')

    
    site_info = 'CBS.com'
download = cbs_download
download_playlist = playlist_not_supported('cbs')

    
        title = match1(html, r'&title=([^&]+)')
    
                    mapping = KBaseMapping(base=int(base))
                sym_to_name = {}
                for no in range(int(size), 0, -1):
                    no_in_base = mapping.mapping(no)
                    val = names[no] if no < len(names) and names[no] else no_in_base
                    sym_to_name[no_in_base] = val
    
        def del_queue(self, name):
        ''' remove a queue from the manager '''
        logger.debug('QueueManager deleting: '%s'', name)
        del self.queues[name]
        logger.debug('QueueManager deleted: '%s'', name)
    
                self.add_item(section=section,
                          title='option_1',
                          datatype=bool,
                          default=False,
                          info='sect_1 option_1 information')
        '''
        raise NotImplementedError
    
        The following keys are expected for the _DEFAULTS <metadata> dict:
        datatype:  [required] A python type class. This limits the type of data that can be
                   provided in the .ini file and ensures that the value is returned in the
                   correct type to faceswap. Valid datatypes are: <class 'int'>, <class 'float'>,
                   <class 'str'>, <class 'bool'>.
        default:   [required] The default value for this option.
        info:      [required] A string describing what this option does.
        choices:   [optional] If this option's datatype is of <class 'str'> then valid
                   selections can be defined here. This validates the option and also enables
                   a combobox / radio option in the GUI.
        gui_radio: [optional] If <choices> are defined, this indicates that the GUI should use
                   radio buttons rather than a combobox to display this option.
        min_max:   [partial] For <class 'int'> and <class 'float'> datatypes this is required
                   otherwise it is ignored. Should be a tuple of min and max accepted values.
                   This is used for controlling the GUI slider range. Values are not enforced.
        rounding:  [partial] For <class 'int'> and <class 'float'> datatypes this is
                   required otherwise it is ignored. Used for the GUI slider. For floats, this
                   is the number of decimal places to display. For ints this is the step size.
        fixed:     [optional] [train only]. Training configurations are fixed when the model is
                   created, and then reloaded from the state file. Marking an item as fixed=False
                   indicates that this value can be changed for existing models, and will override
                   the value saved in the state file with the updated value in config. If not
                   provided this will default to True.
'''
    
        Defaults files should be named <plugin_name>_defaults.py
    Any items placed into this file will automatically get added to the relevant config .ini files
    within the faceswap/config folder.
    
        def run(self, new_face):
        ''' Perform selected adjustment on face '''
        logger.trace('Performing scaling adjustment')
        # Remove Mask for processing
        reinsert_mask = False
        if new_face.shape[2] == 4:
            reinsert_mask = True
            final_mask = new_face[:, :, -1]
            new_face = new_face[:, :, :3]
        new_face = self.process(new_face)
        new_face = np.clip(new_face, 0.0, 1.0)
        if reinsert_mask and new_face.shape[2] != 4:
            # Reinsert Mask
            new_face = np.concatenate((new_face, np.expand_dims(final_mask, axis=-1)), -1)
        logger.trace('Performed scaling adjustment')
        return new_face
