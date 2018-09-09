
        
                        pCertCtx = crypt32.CertFindCertificateInStore(store_handle, X509_ASN_ENCODING, 0, CERT_FIND_SUBJECT_STR, common_name, None)
                while pCertCtx:
                    certCtx = CERT_CONTEXT.from_address(pCertCtx)
                    _certdata = ctypes.string_at(certCtx.pbCertEncoded, certCtx.cbCertEncoded)
                    if _certdata == certdata:
                        ca_exists = True
                        xlog.debug('XX-Net CA already exists')
                    else:
                        cert =  OpenSSL.crypto.load_certificate(OpenSSL.crypto.FILETYPE_ASN1, _certdata)
                        if hasattr(cert, 'get_subject'):
                             cert = cert.get_subject()
                        cert_name = next((v for k, v in cert.get_components() if k == 'CN'), '')
                        if cert_name == common_name:
                            ret = crypt32.CertDeleteCertificateFromStore(crypt32.CertDuplicateCertificateContext(pCertCtx))
                            if ret == 1:
                                xlog.debug('Invalid Windows CA %r has been removed', common_name)
                            elif ret == 0 and store == CERT_SYSTEM_STORE_LOCAL_MACHINE:
                                # to elevate
                                break
                    pCertCtx = crypt32.CertFindCertificateInStore(store_handle, X509_ASN_ENCODING, 0, CERT_FIND_SUBJECT_STR, common_name, pCertCtx)
    
        for qualified, server, _, _ in server_list:
        if qualified:
            best_server = server[0]
            break
    log = Log()
    if best_server:
        log.write('best server is: %s.' % best_server)
    else:
        xlog.warning('no server detected, return default: teredo.remlab.net.')
        log.write('no server detected, return default: teredo.remlab.net.')
        best_server = 'teredo.remlab.net'
    log.close()
    return best_server
    
        server_list = ['teredo.remlab.net','win1710.ipv6.microsoft.com']
    prober = teredo_prober(server_list, probe_nat=False)
    prober.timeout = 4
    server_ip_list = prober.server_ip_list.copy()
    server_ip = server_ip_list.pop()
    for _ in range(2):
        print(prober.qualify_loop(server_ip))
        prober.rs_cone_flag = prober.rs_cone_flag ^ 1
    server_ip = server_ip_list.pop()
    for _ in range(2):
        print(prober.qualify_loop(server_ip))
        prober.rs_cone_flag = prober.rs_cone_flag ^ 1
#    prober.close()
    
    
from xlog import getLogger
xlog = getLogger('gae_proxy')
xlog.set_buffer(1000)
    
    
class SniManager(object):
    plus = ['-', '', '.']
    end = ['com', 'net', 'ml', 'org', 'us']
    
    - CommonTokenStream: A basic and most commonly used TokenStream
  implementation.
- TokenRewriteStream: A modification of CommonTokenStream that allows the
  stream to be altered (by the Parser). See the 'tweak' example for a usecase.
    
    
    
        ANTLR generates code that throws exceptions upon recognition error and
    also generates code to catch these exceptions in each rule.  If you
    want to quit upon first error, you can turn off the automatic error
    handling mechanism using rulecatch action, but you still need to
    override methods mismatch and recoverFromMismatchSet.
    
    In general, the recognition exceptions can track where in a grammar a
    problem occurred and/or what was the expected input.  While the parser
    knows its state (such as current input symbol and line info) that
    state can change before the exception is reported so current token index
    is computed and stored at exception time.  From this info, you can
    perhaps print an entire line of input not just a single token, for example.
    Better to just say the recognizer had a problem and then let the parser
    figure out a fancy report.
    
    '''
    
    
    def skip(self):
        '''
        Instruct the lexer to skip creating a token for current lexer rule
        and look for another token.  nextToken() knows to keep looking when
        a lexer rule finishes with token set to SKIP_TOKEN.  Recall that
        if token==null at end of any token rule, it creates one for you
        and emits it.
        '''
        
        self._state.token = SKIP_TOKEN
    
                with open('htmlout.html', 'w') as out:
                out.write(header)