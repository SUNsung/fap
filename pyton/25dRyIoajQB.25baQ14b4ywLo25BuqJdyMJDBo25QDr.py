
        
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
    
        if probe_nat:
        pteredor_is_running = False
        log = Log()
        log.write('qualified: %s\nNAT type: %s' % (prober.qualified, prober.nat_type))
        log.close()
    return prober
    
        def eval_servers(self):
        if self.nat_type is 'null':
            self.nat_type = self.nat_type_probe()
        elif self.nat_type is 'probing':
            print('Is probing NAT type now, pleace wait...')
        while self.nat_type is 'probing':
            time.sleep(0.1)
        if not self.qualified:
            print('This device can not use teredo tunnel, the NAT type is %s!' % prober.nat_type)
            return []
        print('Starting evaluate servers...')
        self.clear()
        eval_list = []
        queue_obj = queue.Queue()
        for server_ip in self.server_ip_list:
            thread.start_new_thread(self._eval_servers, (server_ip, queue_obj))
        for _ in self.server_ip_list:
            eval_list.append(queue_obj.get())
        return eval_list
    
    A tree.RewriteCardinalityException is raised, when the parsers hits a
cardinality mismatch during AST construction. Although this is basically a
bug in your grammar, it can only be detected at runtime.
    
    # Predefined token types
EOR_TOKEN_TYPE = 1
    
            return [token.text for token in tokens]