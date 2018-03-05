    return len(cmd) > 1 and 'x' in cmd[1]
    
    
def jsonify(result, format=False):
    ''' format JSON output (uncompressed or uncompressed) '''
    
            try:
            parts = role_name.split('.')
            user_name = '.'.join(parts[0:-1])
            role_name = parts[-1]
            if notify:
                display.display('- downloading role '%s', owned by %s' % (role_name, user_name))
        except:
            raise AnsibleError('Invalid role name (%s). Specify role as format: username.rolename' % role_name)