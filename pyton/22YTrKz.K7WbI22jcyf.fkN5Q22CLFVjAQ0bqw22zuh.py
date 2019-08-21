
        
                #Check Certs Dir
        if not os.path.exists(CertUtil.ca_certdir):
            os.makedirs(CertUtil.ca_certdir)
    
            log.write('\n>: %s\n------------------------------------' % cmd)
        out = run(cmd)
        log.write(out)
        outs.append(out)
    log.close()
    return '\r\n'.join(outs)
    
        def __init__(self, expecting, input):
        RecognitionException.__init__(self, input)