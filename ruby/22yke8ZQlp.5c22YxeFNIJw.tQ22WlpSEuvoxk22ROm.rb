
        
            def filter_const(name)
      if name.is_a? Array
        name.map &method(:filter_const)
      else
        Docs.const_get '#{name}_filter'.camelize
      end
    end
    
        def initialize(name = nil, path = nil, type = nil)
      self.name = name
      self.path = path
      self.type = type
    
            css('pre.prettyprint').each do |node|
          node.content = node.content.strip
          node['data-language'] = 'dart' if node['class'].include?('dart')
          node['data-language'] = 'html' if node.content.start_with?('<')
          node.remove_attribute('class')
        end
    
        if resource.errors.empty?
      set_flash_message!(:notice, :confirmed)
      respond_with_navigational(resource){ redirect_to after_confirmation_path_for(resource_name, resource) }
    else
      respond_with_navigational(resource.errors, status: :unprocessable_entity){ render :new }
    end
  end
    
      def failure_message
    exception = request.respond_to?(:get_header) ? request.get_header('omniauth.error') : request.env['omniauth.error']
    error   = exception.error_reason if exception.respond_to?(:error_reason)
    error ||= exception.error        if exception.respond_to?(:error)
    error ||= (request.respond_to?(:get_header) ? request.get_header('omniauth.error.type') : request.env['omniauth.error.type']).to_s
    error.to_s.humanize if error
  end
    
      protected
    
          # If the record is persisted, remove the remember token (but only if
      # it exists), and save the record without validations.
      def forget_me!
        return unless persisted?
        self.remember_token = nil if respond_to?(:remember_token)
        self.remember_created_at = nil if self.class.expire_all_remember_me_on_sign_out
        save(validate: false)
      end
    
        # Register callbacks
    self.listener.on_client_connect_proc = Proc.new { |cli|
      on_client_connect(cli)
    }
    self.listener.on_client_data_proc = Proc.new { |cli|
      on_client_data(cli)
    }
    
        data =
    [   # Maximum access
      0x00, 0x00,
      # Reserved
      0x00, 0x00
    ].pack('C*') +
    console_session_id +
    [
      0x00, 0x00, 0x00, 0x08,
      # Cipher 0
      0x00, 0x00, 0x00, 0x00,
      0x01, 0x00, 0x00, 0x08,
      # Cipher 0
      0x00, 0x00, 0x00, 0x00,
      0x02, 0x00, 0x00, 0x08,
      # No Encryption
      0x00, 0x00, 0x00, 0x00
    ].pack('C*')
    
              # Decodes the value from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [String]
          def decode_value(input)
            input.value[0].value
          end
    
                self
          end
    
    Given(/config stage file has line '(.*?)'/) do |line|
  TestApp.append_to_deploy_file(line)
end
    
      def test_file_exists(path)
    exists?('f', path)
  end
    
          sshkit.use_format(*format_args)
    end
  end
end

    
            def lvalue(key)
          key.to_s.chomp('=').to_sym
        end
      end
    end
  end
end

    
          def add_host(host, properties={})
        new_host = Server[host]
        new_host.port = properties[:port] if properties.key?(:port)
        # This matching logic must stay in sync with `Server#matches?`.
        key = ServerKey.new(new_host.hostname, new_host.port)
        existing = servers_by_key[key]
        if existing
          existing.user = new_host.user if new_host.user
          existing.with(properties)
        else
          servers_by_key[key] = new_host.with(properties)
        end
      end
    
        headers = get('/', {}, 'wants' => 'text/html').headers
    expect(headers['Content-Security-Policy']).to eq('connect-src 'self'; default-src none; img-src 'self'; script-src 'self'; style-src 'self'')
  end
    
          # Returns an array of all the when branches in the `case` statement.
      #
      # @return [Array<WhenNode>] an array of `when` nodes
      def when_branches
        node_parts[1...-1]
      end
    
          # This is used for duck typing with `pair` nodes which also appear as
      # `hash` elements.
      #
      # @return [false]
      def colon?
        false
      end
    
        def handle_switch(cop_names, names, disabled, extras, comment)
      cop_names.each do |name|
        names[name] ||= 0
        if disabled
          names[name] += 1
        elsif names[name] > 0
          names[name] -= 1
        else
          extras << [comment, name]
        end
      end
    end
  end
end
