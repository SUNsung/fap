
        
                import_command = 'security add-trusted-cert -d -r trustRoot -k /Library/Keychains/System.keychain ../../../../data/gae_proxy/CA.crt'# % certfile.decode('utf-8')
        if exist_ca_sha1:
            delete_ca_command = 'security delete-certificate -Z %s' % exist_ca_sha1
            exec_command = '%s;%s' % (delete_ca_command, import_command)
        else:
            exec_command = import_command
    
            self._checking_lock.acquire()
        self._checking_num -= 1
        self._checking_lock.release()
    
        logging.info('%s '%s %s %s' - -', environ['REMOTE_ADDR'], method, url, 'HTTP/1.1')
    #logging.info('request headers=%s', headers)
    
        def __init__(self, expecting, input, inserted):
        MismatchedTokenException.__init__(self, expecting, input)
    
            What can follow that specific nested ref to atom?  Exactly ')'
        as you can see by looking at the derivation of this specific
        input.  Contrast this with the FOLLOW(atom)={'+',')',';','.'}.