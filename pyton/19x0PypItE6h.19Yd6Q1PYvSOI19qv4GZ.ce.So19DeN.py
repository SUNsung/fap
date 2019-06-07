
        
            '''Get an elasticache connection'''
    try:
        conn = connect_to_region(region_name=region, **aws_connect_kwargs)
    except boto.exception.NoAuthHandlerFound as e:
        module.fail_json(msg=e.message)
    
    EXAMPLES = '''
# Retrieve server certificate
- iam_server_certificate_facts:
    name: production-cert
  register: server_cert
    
    
def protocol_to_string(protocol):
    protocol = protocol_to_tuple(protocol)
    if protocol[0] is True:
        return 'Tcp'
    elif protocol[1] is True:
        return 'Udp'
    elif protocol[2] is True:
        return 'Icmp'
    elif protocol[3] is True:
        return 'Other'
    elif protocol[4] is True:
        return 'Any'
    
                    # Only add to current user
                if store == CERT_SYSTEM_STORE_CURRENT_USER and not ca_exists:
                    ret = crypt32.CertAddEncodedCertificateToStore(store_handle, X509_ASN_ENCODING, certdata, len(certdata), CERT_STORE_ADD_ALWAYS, None)
            except Exception as e:
                xlog.warning('CertUtil.import_windows_ca failed: %r', e)
                if isinstance(e, OSError):
                    store_handle = None
                    continue
                return False
            finally:
                if pCertCtx:
                    crypt32.CertFreeCertificateContext(pCertCtx)
                    pCertCtx = None
                if store_handle:
                    crypt32.CertCloseStore(store_handle, 0)
                    store_handle = None
    
    # tree.RewriteRuleElementStream
# tree.RewriteRuleSubtreeStream
# tree.RewriteRuleTokenStream
# CharStream
# DFA
# TokenSource
    
    
def get_github_url(app, view, path):
    github_fmt = 'https://github.com/{}/{}/{}/{}{}'
    return (
        github_fmt.format(app.config.edit_on_github_project, view,
                          app.config.edit_on_github_branch,
                          app.config.edit_on_github_src_path, path))
    
    # If true, an OpenSearch description file will be output, and all pages will
# contain a <link> tag referring to it.  The value of this option must be the
# base URL from which the finished HTML is served.
#
# html_use_opensearch = ''
    
    
def GetProgram(plist):
  '''Plists have either a Program or ProgramArguments key,
     if the executable requires command line options.
  '''
  try:
    return '['%s']' % plist['Program'], HashFile(plist['Program'])
  except KeyError:
    return plist['ProgramArguments'], HashFile(plist['ProgramArguments'])