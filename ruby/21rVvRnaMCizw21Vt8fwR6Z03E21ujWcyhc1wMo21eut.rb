
        
          def failure
    set_flash_message! :alert, :failure, kind: OmniAuth::Utils.camelize(failed_strategy.name), reason: failure_message
    redirect_to after_omniauth_failure_path_for(resource_name)
  end
    
          protected
    
          config.paths['log']             = '#{Msf::Config.log_directory}/#{Rails.env}.log'
      config.paths['config/database'] = [Metasploit::Framework::Database.configurations_pathname.try(:to_path)]
    
      def register_sigs
    self.sigs = {
      :banner		=> /^(\*\s+OK[^\n\r]*)/i,
      :login		=> /^CAPABILITY\s+LOGIN\s+([^\s]+)\s+([^\n\r]+)/i,
      :login_pass => /^CAPABILITY\s+OK\s+(Login[^\n\r]*)/i,
      :login_bad	=> /^CAPABILITY\s+BAD\s+(Login[^\n\r]*)/i,
      :login_fail => /^CAPABILITY\s+NO\s+(Login[^\n\r]*)/i
    }
  end
    
          case matched
      when :webhost
        sessions[s[:session]].merge!({k => matches})
        if(s[:get])
          print_status('HTTP GET: #{s[:session]} http://#{s[:webhost]}#{s[:get]}')
          sessions.delete(s[:session])
          return
        end
      when nil
        # No matches, no saved state
      end # end case matched
    end # end of each_key
  end # end of parse
end # end of URL sniffer
    
    puts '* Closing socket'
    
    classNames.each { |name|
	codez << %Q^
public class #{name} {
	public static void main(String args[]) {
		System.out.println('This is from #{name}.');
	}
}^}
    
    signer._invoke('JarSignerMSF','[Ljava.lang.String;',jarsignerOpts)
    
            self.summary = 'The repl listens to commands on standard input'
        self.description = <<-DESC
          The repl listens to commands on standard input and prints their
          result to standard output.
          It accepts all the other ipc subcommands. The repl will signal the
          end of output with the the ASCII CR+LF `\\n\\r`.
        DESC
    
          describe 'fetching filtered servers by role' do
        subject { dsl.roles(:app, filter: :active) }
    
      # GET /books
  # GET /books.json
  def index
    @books = Book.all
  end
    
            # 'match' is a fairly generic name, so we don't flag it unless we see
        # a string or regexp literal on one side or the other
        def_node_matcher :match_call?, <<-PATTERN
          {(send {str regexp} :match _)
           (send !nil? :match {str regexp})}
        PATTERN
    
            def repeated_condition?(previous, condition)
          previous.any? { |c| c.include?(condition) }
        end
      end
    end
  end
end

    
          def expect_no_offenses(source, file = nil)
        inspect_source(source, file)
    
            protected