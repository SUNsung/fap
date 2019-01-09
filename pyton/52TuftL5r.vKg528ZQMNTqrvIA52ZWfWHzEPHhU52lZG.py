
        
                sans = set(sans) if sans else set()
        sans.add(commonname)
        if isip:
            sans = 'IP: ' + commonname
        else:
            sans = 'DNS: %s, DNS: *.%s' % (commonname,  commonname)
        cert.add_extensions([OpenSSL.crypto.X509Extension(b'subjectAltName', True, sans)])
    
            
        if input is not None:
            self.input = input
            self.index = input.index()
    
    
    def getInputStream(self):
        return None
    
        return result