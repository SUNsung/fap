
        
            def display_user_error!(e, message)
      if FastlaneCore::Globals.verbose?
        # with stack trace
        reraise_formatted!(e, message)
      else
        # without stack trace
        action_completed(@program[:name], status: FastlaneCore::ActionCompletionStatus::USER_ERROR, exception: e)
        abort('\n[!] #{message}'.red)
      end
    end
    
          it 'allows you to specify the commit where to add the tag' do
        tag = '2.0.0'
        commit = 'beta_tag'
        message = 'message'
    
          description
    end
    
          it 'should shell escape keychain names when checking for installation' do
        expect(FastlaneCore::CertChecker).to receive(:wwdr_keychain).and_return(keychain_name)
        expect(FastlaneCore::Helper).to receive(:backticks).with(name_regex, anything).and_return('')
    
    def expect_correct_implementation_to_be_called(obj, method, os)
  if method == :shellescape
    # String.shellescape => CrossplatformShellwords.shellescape => ...
    expect(obj).to receive(:shellescape).and_call_original
    expect(CrossplatformShellwords).to receive(:shellescape).with(obj).and_call_original
    if os == 'windows'
      # WindowsShellwords.shellescape
      expect(WindowsShellwords).to receive(:shellescape).with(obj).and_call_original
      expect(Shellwords).not_to(receive(:escape))
    else
      # Shellswords.escape
      expect(Shellwords).to receive(:escape).with(obj).and_call_original
      expect(WindowsShellwords).not_to(receive(:shellescape))
    end
  elsif method == :shelljoin
    # Array.shelljoin => CrossplatformShellwords.shelljoin => CrossplatformShellwords.shellescape ...
    expect(obj).to receive(:shelljoin).and_call_original
    expect(CrossplatformShellwords).to receive(:shelljoin).with(obj).and_call_original
    expect(CrossplatformShellwords).to receive(:shellescape).at_least(:once).and_call_original
  end
end

    
    exec_arr = ['fastlane', tool_name] + ARGV
    
        # Finds a machine where the UUID is prefixed by the given string.
    #
    # @return [Hash]
    def find_by_prefix(prefix)
      @machines.each do |uuid, data|
        return data.merge('id' => uuid) if uuid.start_with?(prefix)
      end
    
            # Defines additional command line commands available by key. The key
        # becomes the subcommand, so if you register a command 'foo' then
        # 'vagrant foo' becomes available.
        #
        # @param [String] name Subcommand key.
        def self.command(name=UNSET_VALUE, &block)
          data[:command] ||= Registry.new
    
                    raise Errors::VMNoMatchError if machines.empty?
              else
                # String name, just look for a specific VM
                @logger.debug('Finding machine that match name: #{name}')
                machines << get_machine.call(name.to_sym)
                raise Errors::VMNotFoundError, name: name if !machines[0]
              end
            end
          else
            # No name was given, so we return every VM in the order
            # configured.
            @logger.debug('Loading all machines...')
            machines = @env.machine_names.map do |machine_name|
              get_machine.call(machine_name)
            end
          end
    
            # This contains all the synced folder implementations by name.
        #
        # @return [Registry<Symbol, Array<Class, Integer>>]
        attr_reader :synced_folders
    
    
    
    
    {    if (bt.className == 'condensed') {
      bt.className = 'expanded';
      toggler.innerHTML = '(condense)';
    } else {
      bt.className = 'condensed';
      toggler.innerHTML = '(expand)';
    }
  }
  //-->
  </script>
    
          def cookie_paths(path)
        path = '/' if path.to_s.empty?
        paths = []
        Pathname.new(path).descend { |p| paths << p.to_s }
        paths
      end
    
        it 'Reads referrer from Host header when Referer header is relative' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => '/valid'}
      expect(subject.referrer(env)).to eq('foo.com')
    end