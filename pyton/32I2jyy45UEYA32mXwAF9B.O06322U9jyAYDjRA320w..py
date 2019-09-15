
        
            def test_binary_suppresses_when_not_terminal_but_pretty(self, httpbin):
        env = MockEnvironment(stdin_isatty=True, stdout_isatty=False)
        r = http('--pretty=all', 'GET', httpbin + '/bytes/1024?seed=1', env=env)
        assert BINARY_SUPPRESSED_NOTICE.decode() in r
    
    <https://github.com/Homebrew/homebrew-core/blob/master/Formula/httpie.rb>
    
        def iter_lines(self, chunk_size: int) -> Iterable[bytes]:
        '''Return an iterator over the body yielding (`line`, `line_feed`).'''
        raise NotImplementedError()
    
        '''
    mime, encoding = mimetypes.guess_type(filename, strict=False)
    if mime:
        content_type = mime
        if encoding:
            content_type = '%s; charset=%s' % (mime, encoding)
        return content_type

    
    # MCP 2.x version patten for location (datacenter) names.
#
# Note that this is not a totally reliable way of determining MCP version.
# Unfortunately, libcloud's NodeLocation currently makes no provision for extended properties.
# At some point we may therefore want to either enhance libcloud or enable overriding mcp_version
# by specifying it in the module parameters.
MCP_2_LOCATION_NAME_PATTERN = re.compile(r'.*MCP\s?2.*')
    
            if v2_api_token and clc_alias:
            self.clc._LOGIN_TOKEN_V2 = v2_api_token
            self.clc._V2_ENABLED = True
            self.clc.ALIAS = clc_alias
        elif v2_api_username and v2_api_passwd:
            self.clc.v2.SetCredentials(
                api_username=v2_api_username,
                api_passwd=v2_api_passwd)
        else:
            return self.module.fail_json(
                msg='You must set the CLC_V2_API_USERNAME and CLC_V2_API_PASSWD '
                    'environment variables')
    
    
def absent(dest, username, check_mode):
    ''' Ensures user is absent
    
    
class LdapPasswd(LdapGeneric):
    def __init__(self, module):
        LdapGeneric.__init__(self, module)
    
        except Exception as ex:
        module.fail_json(msg=ex.message)
    
    
ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['preview'],
                    'supported_by': 'community'}
    
            module.exit_json(changed=changed, **response)
    except Exception as e:
        module.fail_json(msg=str(e))
    
        if not has_boolean_value(module, name):
        module.fail_json(msg='SELinux boolean %s does not exist.' % name)
    
    print(__doc__)
    
    plt.matshow(fit_data, cmap=plt.cm.Blues)
plt.title('After biclustering; rearranged to show biclusters')
    
    # Author: Gael Varoquaux <gael dot varoquaux at normalesup dot org>
# License: BSD 3 clause
    
    # #############################################################################
# Compute clustering
print('Compute unstructured hierarchical clustering...')
st = time.time()
ward = AgglomerativeClustering(n_clusters=6, linkage='ward').fit(X)
elapsed_time = time.time() - st
label = ward.labels_
print('Elapsed time: %.2fs' % elapsed_time)
print('Number of points: %i' % label.size)
    
    plt.subplot(224)
plt.scatter(X_train_r[:, 1], Y_train_r[:, 1], label='train',
            marker='o', c='b', s=25)
plt.scatter(X_test_r[:, 1], Y_test_r[:, 1], label='test',
            marker='o', c='r', s=25)
plt.xlabel('x scores')
plt.ylabel('y scores')
plt.title('Comp. 2: X vs Y (test corr = %.2f)' %
          np.corrcoef(X_test_r[:, 1], Y_test_r[:, 1])[0, 1])
plt.xticks(())
plt.yticks(())
plt.legend(loc='best')
    
    plt.show()

    
            # put all lines in the file into a Python list
        strings = f.readlines()
        
        # above line leaves trailing newline characters; strip them out
        strings = [x.strip(u'\n') for x in strings]
        
        # remove empty-lines and comments
        strings = [x for x in strings if x and not x.startswith(u'#')]
        
        # insert empty string since all are being removed
        strings.insert(0, u'')