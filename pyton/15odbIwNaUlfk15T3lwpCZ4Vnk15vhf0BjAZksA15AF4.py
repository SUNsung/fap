
        
        
def get_setting_name_and_refid(node):
    '''Extract setting name from directive index node'''
    entry_type, info, refid = node['entries'][0][:3]
    return info.replace('; setting', ''), refid
    
            self.tail.appendleft(delta)
        self.lasttime = now
        self.concurrent += 1
    
    '''
    
    def _print_commands(settings, inproject):
    _print_header(settings, inproject)
    print('Usage:')
    print('  scrapy <command> [options] [args]\n')
    print('Available commands:')
    cmds = _get_commands_dict(settings, inproject)
    for cmdname, cmdclass in sorted(cmds.items()):
        print('  %-13s %s' % (cmdname, cmdclass.short_desc()))
    if not inproject:
        print()
        print('  [ more ]      More commands available when run from project directory')
    print()
    print('Use 'scrapy <command> -h' to see more info about a command')
    
        def help(self):
        '''An extensive help for the command. It will be shown when using the
        'help' command. It can contain newlines, since not post-formatting will
        be applied to its contents.
        '''
        return self.long_desc()
    
        requires_project = True
    
        def run(self, args, opts):
        settings = self.crawler_process.settings
        if opts.get:
            s = settings.get(opts.get)
            if isinstance(s, BaseSettings):
                print(json.dumps(s.copy_to_dict()))
            else:
                print(s)
        elif opts.getbool:
            print(settings.getbool(opts.getbool))
        elif opts.getint:
            print(settings.getint(opts.getint))
        elif opts.getfloat:
            print(settings.getfloat(opts.getfloat))
        elif opts.getlist:
            print(settings.getlist(opts.getlist))

    
            def getCertificateOptions(self):
            # setting verify=True will require you to provide CAs
            # to verify against; in other words: it's not that simple
    
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
    
        @staticmethod
    def import_windows_ca(certfile):
        xlog.debug('Begin to import Windows CA')
        with open(certfile, 'rb') as fp:
            certdata = fp.read()
            if certdata.startswith(b'-----'):
                begin = b'-----BEGIN CERTIFICATE-----'
                end = b'-----END CERTIFICATE-----'
                certdata = base64.b64decode(b''.join(certdata[certdata.find(begin)+len(begin):certdata.find(end)].strip().splitlines()))
        try:
            common_name = OpenSSL.crypto.load_certificate(OpenSSL.crypto.FILETYPE_ASN1, certdata).get_subject().CN
        except Exception as e:
            logging.error('load_certificate(certfile=%r) 失败：%s', certfile, e)
            return -1
    
            Python does not have any size restrictions, but the compilation of
        such large source files seems to be pretty memory hungry. The memory
        consumption of the python process grew to >1.5GB when importing a
        15MB lexer, eating all my swap space and I was to impacient to see,
        if it could finish at all. With packed initializers that are unpacked
        at import time of the lexer module, everything works like a charm.
        
        '''
        
        ret = []
        for i in range(len(string) / 2):
            (n, v) = ord(string[i*2]), ord(string[i*2+1])
    
        
    def getTree(self):
        '''Has a value potentially if output=AST.'''
        return None
    
            Don't actually delete; make op null in list. Easier to walk list.
        Later we can throw as we add to index -> op map.
    
            try:
            value = state_helper.state_as_number(state)
        except ValueError:
            _LOGGER.debug(
                'Error sending %s: %s (tags: %s)', metric, state.state, tags)
            return
    
            if payload_dict:
            payload = '{%s}' % ','.join('{}:{}'.format(key, val)
                                        for key, val in
                                        payload_dict.items())
    
    
class DescriptionXmlView(HomeAssistantView):
    '''Handles requests for the description.xml file.'''