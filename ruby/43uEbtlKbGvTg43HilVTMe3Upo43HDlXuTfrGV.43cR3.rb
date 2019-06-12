
        
        require 'erb'
    
          attr_accessor :page, :layout, :content, :paginator
      attr_accessor :highlighter_prefix, :highlighter_suffix
    
        # [Boolean] Set if the variable is to be converted to a shell-escaped String when provided as a Hash or Array
    # Allows items expected to be strings used in shell arguments to be alternatively provided as a Hash or Array for better readability and auto-escaped for us.
    attr_accessor :allow_shell_conversion
    
            expect(FastlaneCore::CertChecker.install_wwdr_certificate).to be(true)
      end
    end
  end
end

    
      it 'imports a scenario that does not exist yet' do
    visit new_scenario_imports_path
    attach_file('Option 2: Upload a Scenario JSON File', File.join(Rails.root, 'data/default_scenario.json'))
    click_on 'Start Import'
    expect(page).to have_text('This scenario has a few agents to get you started. Feel free to change them or delete them as you see fit!')
    expect(page).not_to have_text('This Scenario already exists in your system.')
    check('I confirm that I want to import these Agents.')
    click_on 'Finish Import'
    expect(page).to have_text('Import successful!')
  end
    
        it 'returns a correct icon tag for other services' do
      icon = omniauth_provider_icon(:'37signals')
      expect(icon).to be_html_safe
      elem = Nokogiri(icon).at('i.fa.fa-lock')
      expect(elem).to be_a Nokogiri::XML::Element
    end
  end
    
          it 'generates a DOT script' do
        expect(agents_dot(@agents)).to match(%r{
          \A
          digraph \x20 'Agent \x20 Event \x20 Flow' \{
            node \[ [^\]]+ \];
            edge \[ [^\]]+ \];
            (?<foo>\w+) \[label=foo\];
            \k<foo> -> (?<bar1>\w+) \[style=dashed\];
            \k<foo> -> (?<bar2>\w+) \[color='\#999999'\];
            \k<bar1> \[label=bar1\];
            \k<bar2> \[label=bar2,style='rounded,dashed',color='\#999999',fontcolor='\#999999'\];
            \k<bar2> -> (?<bar3>\w+) \[style=dashed,color='\#999999'\];
            \k<bar3> \[label=bar3\];
          \}
          \z
        }x)
      end
    
          expect(@scheduler.scheduler_agent_jobs.map(&:scheduler_agent)).to eq([@agent1])
    end
  end
end

    
      describe '#recursively_interpolate_jsonpaths' do
    it 'interpolates all string values in a structure' do
      struct = {
        :int => 5,
        :string => 'this <escape $.works>',
        :array => ['<works>', 'now', '<$.there.world>'],
        :deep => {
          :string => 'hello <there.world>',
          :hello => :world
        }
      }
      data = { :there => { :world => 'WORLD' }, :works => 'should work' }
      expect(Utils.recursively_interpolate_jsonpaths(struct, data)).to eq({
        :int => 5,
        :string => 'this should+work',
        :array => ['should work', 'now', 'WORLD'],
        :deep => {
          :string => 'hello WORLD',
          :hello => :world
        }
      })
    end
  end
    
        it 'updates Agents' last_error_log_at when an error is logged' do
      AgentLog.log_for_agent(agents(:jane_website_agent), 'some message', :level => 3, :outbound_event => events(:jane_website_agent_event))
      expect(agents(:jane_website_agent).reload.last_error_log_at).to be_nil
    
      def auth_options
    { scope: resource_name, recall: '#{controller_path}#new' }
  end
    
          def remember_me_is_active?(resource)
        return false unless resource.respond_to?(:remember_me)
        scope = Devise::Mapping.find_scope!(resource)
        _, token, generated_at = cookies.signed[remember_key(resource, scope)]
        resource.remember_me?(token, generated_at)
      end
    
          generate_helpers!(Devise::URL_HELPERS)
    
            # Removes reset_password token
        def clear_reset_password_token
          self.reset_password_token = nil
          self.reset_password_sent_at = nil
        end
    
          # If the record is persisted, remove the remember token (but only if
      # it exists), and save the record without validations.
      def forget_me!
        return unless persisted?
        self.remember_token = nil if respond_to?(:remember_token)
        self.remember_created_at = nil if self.class.expire_all_remember_me_on_sign_out
        save(validate: false)
      end
    
        # This returns whether the guest is ready to work. If this returns
    # `false`, then {#detect!} should be called in order to detect the
    # guest OS.
    #
    # @return [Boolean]
    def ready?
      !!capability_host_chain
    end
  end
end

    
            # Upload a file to the remote machine.
        #
        # @param [String] from Path of the file locally to upload.
        # @param [String] to Path of where to save the file on the remote
        #   machine.
        def upload(from, to)
        end
    
        # Register a key with a lazy-loaded value.
    #
    # If a key with the given name already exists, it is overwritten.
    def register(key, &block)
      raise ArgumentError, 'block required' if !block_given?
      @items[key] = block
    end
    
                data_encrypt = Rex::Text::rand_text(8) + data
    
                seq_values.each do |val|
              case val.tag
              when 0
                self.etype = decode_etype(val)
              when 1
                self.kvno = decode_kvno(val)
              when 2
                self.cipher = decode_cipher(val)
              else
                raise ::RuntimeError, 'Failed to decode EncryptedData SEQUENCE'
              end
            end
          end
    
    module Rex
  module Proto
    module Kerberos
      module Model
        # This class provides a representation of a Kerberos KDC-REQ-BODY (request body) data
        # definition
        class KdcRequestBody < Element
          # @!attribute options
          #   @return [Integer] The ticket flags
          attr_accessor :options
          # @!attribute cname
          #   @return [Rex::Proto::Kerberos::Model::PrincipalName] The name part of the client's principal identifier
          attr_accessor :cname
          # @!attribute realm
          #   @return [String] The realm part of the server's principal identifier
          attr_accessor :realm
          # @!attribute sname
          #   @return [Rex::Proto::Kerberos::Model::PrincipalName] The name part of the server's identity
          attr_accessor :sname
          # @!attribute from
          #   @return [Time] Start time when the ticket is to be postdated
          attr_accessor :from
          # @!attribute till
          #   @return [Time] Expiration date requested by the client
          attr_accessor :till
          # @!attribute rtime
          #   @return [Time] Optional requested renew-till time
          attr_accessor :rtime
          # @!attribute nonce
          #   @return [Integer] random number
          attr_accessor :nonce
          # @!attribute etype
          #   @return [Array<Integer>] The desired encryption algorithm to be used in the response
          attr_accessor :etype
          # @!attribute enc_auth_data
          #   @return [Rex::Proto::Kerberos::Model::EncryptedData] An encoding of the desired authorization-data encrypted
          attr_accessor :enc_auth_data
    
              # Decodes the value from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_asn1_value(input)
            input.value[0].value
          end
        end
      end
    end
  end
end
    
        # Populate files + checksums, then write +MANIFEST.
    pkgdata['files'] = {}
    checksums.each do |f, shasum|
      # pkg expands % URL-style escapes, so make sure to escape % as %25
      pkgdata['files']['/' + f.gsub('%', '%25')] = shasum
    end
    
      option '--zonetype', 'ZONETYPE',
    'Set the allowed zone types (global, nonglobal, both)',
    :default => 'value=global value=nonglobal' do |value|
      case @value
      when 'both'
        value = 'value=global value=nonglobal'
      else
        value = 'value=#{value}'
      end
    end # value
    
        File.write(build_path('packlist'), files.sort.join('\n'))
    
        if attributes[:python_pip].nil?
      # no pip, use easy_install
      logger.debug('no pip, defaulting to easy_install', :easy_install => attributes[:python_easyinstall])
      safesystem(attributes[:python_easyinstall], '-i',
                 attributes[:python_pypi], '--editable', '-U',
                 '--build-directory', target, want_pkg)
    else
      logger.debug('using pip', :pip => attributes[:python_pip])
      # TODO: Support older versions of pip
      safesystem(attributes[:python_pip], 'download', '--no-clean', '--no-deps', '--no-binary', ':all:', '-i', attributes[:python_pypi], '--build', target,  want_pkg)
    end
    
        def tmux_window_command_prefix
      '#{project.tmux} send-keys -t #{project.name}:#{index + project.base_index}'
    end
    
            expect(project.startup_window).to eq('sample:8')
      end
    end
  end
    
      return captured_stdout.string, captured_stderr.string
ensure
  $stdout = orig_stdout
  $stderr = orig_stderr
end
    
        def debug(name = nil, *args)
      # project-config takes precedence over a named project in the case that
      # both are provided.
      if options['project-config']
        args.unshift name if name
        name = nil
      end