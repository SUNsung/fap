
        
              def convert_key(key)
        key.is_a?(Symbol) ? key.to_s : key
      end
    end
  end
end

    
                breakable = false
            if e.is_a?(EOFError)
              # An `EOFError` means this IO object is done!
              breakable = true
            elsif defined?(::IO::WaitReadable) && e.is_a?(::IO::WaitReadable)
              # IO::WaitReadable is only available on Ruby 1.9+
    
              @env.action_runner.run(Vagrant::Action.action_box_remove, {
            box_name:     argv[0],
            box_provider: options[:provider],
            box_version:  options[:version],
            force_confirm_box_remove: options[:force],
            box_remove_all_versions: options[:all],
          })
    
            # Get the proper capability host to check
        cap_host = nil
        if type == :host
          cap_host = @env.host
        else
          with_target_vms([]) do |vm|
            cap_host = case type
                       when :provider
                         vm.provider
                       when :guest
                         vm.guest
                       else
                         raise Vagrant::Errors::CLIInvalidUsage,
                           help: opts.help.chomp
                       end
          end
        end
    
      GEMFILE_EXTENSIONS.each do |extension|
    extension_pathname = root.join('Gemfile#{extension}')
    
          when nil
        # No matches, no saved state
      else
        sessions[s[:session]].merge!({k => matches})
      end # end case matched
    
          when :login_pass
    
      @src.__NR_execve      = __NR_execve
  @src.__NR_getpeername = __NR_getpeername
  @src.__NR_accept      = __NR_accept
  @src.__NR_listen      = __NR_listen
  @src.__NR_bind        = __NR_bind
  @src.__NR_socket      = __NR_socket
  @src.__NR_connect     = __NR_connect
  @src.__NR_close       = __NR_close
  @src.__NR_kfcntl      = __NR_kfcntl
    
          def initialize(pairs = {})
        @pairs = pairs
        pairs.each do |key, value|
          raise 'invalid container key: '#{key.inspect}'' unless VALID_KEYS.include?(key)
          send(:'#{key}=', value)
        end
    
        # Many formulae include 'lib/charset.alias', but it is not strictly needed
    # and will conflict if more than one formula provides it
    observe_file_removal @f.lib/'charset.alias'
    
          it 'identifies that Intel and PowerPC machines can't run each others' executables' do
        allow(Hardware::CPU).to receive(:type).and_return :ppc
        expect(Hardware::CPU.can_run?(:i386)).to be false
        expect(Hardware::CPU.can_run?(:x86_64)).to be false
    
      def create_pull_request(repo, title, head, base, body)
    url = 'https://api.github.com/repos/#{repo}/pulls'
    data = { title: title, head: head, base: base, body: body }
    scopes = CREATE_ISSUE_FORK_OR_PR_SCOPES
    open_api(url, data: data, scopes: scopes)
  end