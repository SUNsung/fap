
        
            @pytest.fixture(autouse=True)
    def Popen(self, mocker):
        mock = mocker.patch('thefuck.shells.tcsh.Popen')
        mock.return_value.stdout.read.return_value = (
            b'fuck\teval $(thefuck $(fc -ln -1))\n'
            b'l\tls -CF\n'
            b'la\tls -A\n'
            b'll\tls -alF')
        return mock
    
        def _get_version(self):
        '''Returns the version of the current shell'''
        proc = Popen(['bash', '-c', 'echo $BASH_VERSION'],
                     stdout=PIPE, stderr=DEVNULL)
        return proc.stdout.read().decode('utf-8').strip()

    
    misspelled_subcommand = '''\
az provider: 'lis' is not in the 'az provider' command group. See 'az provider --help'.