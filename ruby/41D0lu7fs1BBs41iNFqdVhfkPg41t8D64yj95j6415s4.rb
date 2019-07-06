
        
          def self.increment!(type, opts = nil)
    perform_increment!(redis_key(type), opts)
  end
    
        def pause
      stop!
      @paused = true
    end
    
          if period_type == :all
        DB.exec <<~SQL
          UPDATE user_stats s
          SET likes_given         = d.likes_given,
              likes_received      = d.likes_received,
              topic_count         = d.topic_count,
              post_count          = d.post_count
    
      def parse(csp_string)
    csp_string.split(';').map do |policy|
      directive, *sources = policy.split
      [directive, sources]
    end.to_h
  end
end

    
        @omniauth.before_request_phase do |env|
      # If the user is trying to reconnect to an existing account, store in session
      request = ActionDispatch::Request.new(env)
      request.session[:auth_reconnect] = !!request.params['reconnect']
    end
  end
    
      def self.languages
    langs = Dir.glob(HIGHLIGHTJS_DIR + 'languages/*.js').map do |path|
      File.basename(path)[0..-8]
    end
    
        def theme_extensions(theme_ids)
      key = 'theme_extensions_#{Theme.transform_ids(theme_ids).join(',')}'
      cache[key] ||= find_theme_extensions(theme_ids)
    end
    
          return response unless html_response?(headers)
      ContentSecurityPolicy.base_url = request.host_with_port if Rails.env.development?
    
        cache_time && last_modified && last_modified <= cache_time
  end
    
    =begin
      +------+-----------+-----------------------------------------+
      | Hex  | Name      | Description                             |
      +------+-----------+-----------------------------------------+
      | 0x01 | NEW       | Initiate a new call                     |
      |      |           |                                         |
      | 0x02 | PING      | Ping request                            |
      |      |           |                                         |
      | 0x03 | PONG      | Ping or poke reply                      |
      |      |           |                                         |
      | 0x04 | ACK       | Explicit acknowledgment                 |
      |      |           |                                         |
      | 0x05 | HANGUP    | Initiate call tear-down                 |
      |      |           |                                         |
      | 0x06 | REJECT    | Reject a call                           |
      |      |           |                                         |
      | 0x07 | ACCEPT    | Accept a call                           |
      |      |           |                                         |
      | 0x08 | AUTHREQ   | Authentication request                  |
      |      |           |                                         |
      | 0x09 | AUTHREP   | Authentication reply                    |
      |      |           |                                         |
      | 0x0a | INVAL     | Invalid message                         |
      |      |           |                                         |
      | 0x0b | LAGRQ     | Lag request                             |
      |      |           |                                         |
      | 0x0c | LAGRP     | Lag reply                               |
      |      |           |                                         |
      | 0x0d | REGREQ    | Registration request                    |
      |      |           |                                         |
      | 0x0e | REGAUTH   | Registration authentication             |
      |      |           |                                         |
      | 0x0f | REGACK    | Registration acknowledgement            |
      |      |           |                                         |
      | 0x10 | REGREJ    | Registration reject                     |
      |      |           |                                         |
      | 0x11 | REGREL    | Registration release                    |
      |      |           |                                         |
      | 0x12 | VNAK      | Video/Voice retransmit request          |
      |      |           |                                         |
      | 0x13 | DPREQ     | Dialplan request                        |
      |      |           |                                         |
      | 0x14 | DPREP     | Dialplan reply                          |
      |      |           |                                         |
      | 0x15 | DIAL      | Dial                                    |
      |      |           |                                         |
      | 0x16 | TXREQ     | Transfer request                        |
      |      |           |                                         |
      | 0x17 | TXCNT     | Transfer connect                        |
      |      |           |                                         |
      | 0x18 | TXACC     | Transfer accept                         |
      |      |           |                                         |
      | 0x19 | TXREADY   | Transfer ready                          |
      |      |           |                                         |
      | 0x1a | TXREL     | Transfer release                        |
      |      |           |                                         |
      | 0x1b | TXREJ     | Transfer reject                         |
      |      |           |                                         |
      | 0x1c | QUELCH    | Halt audio/video [media] transmission   |
      |      |           |                                         |
      | 0x1d | UNQUELCH  | Resume audio/video [media] transmission |
      |      |           |                                         |
      | 0x1e | POKE      | Poke request                            |
      |      |           |                                         |
      | 0x1f | Reserved  | Reserved for future use                 |
      |      |           |                                         |
      | 0x20 | MWI       | Message waiting indication              |
      |      |           |                                         |
      | 0x21 | UNSUPPORT | Unsupported message                     |
      |      |           |                                         |
      | 0x22 | TRANSFER  | Remote transfer request                 |
      |      |           |                                         |
      | 0x23 | Reserved  | Reserved for future use                 |
      |      |           |                                         |
      | 0x24 | Reserved  | Reserved for future use                 |
      |      |           |                                         |
      | 0x25 | Reserved  | Reserved for future use                 |
      +------+-----------+-----------------------------------------+
=end
    
    require 'rex/proto/ipmi/utils'
    
        head + [data.length].pack('v') + data
  end
    
              # Encodes the Rex::Proto::Kerberos::CredentialCache::Time into an String
          #
          # @return [String] encoded time
          def encode
            encoded = ''
            encoded << encode_auth_time
            encoded << encode_start_time
            encoded << encode_end_time
            encoded << encode_renew_time
    
              # Decodes the key from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [EncryptionKey]
          def decode_key(input)
            Rex::Proto::Kerberos::Model::EncryptionKey.decode(input.value[0])
          end
    
              # Decodes the pvno from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_pvno(input)
            input.value[0].value.to_i
          end
    
    puts '\nUnable to find an RSS feed for the following blogs:'
puts '==================================================='
unavailable.each do |b|
  puts '#{b.name} | #{b.web_url}'
end
puts '==================================================='

    
    Then(/^the task is successful$/) do
  expect(@success).to be true
end
    
      def exists?(type, path)
    %Q{[ -#{type} '#{path}' ]}
  end
    
          def resolve
        return if scm_name.nil?
        set(:scm, :git) if using_default_scm?
    
          # Register a validation rule for the given key.
      def validate(key, &validator)
        vs = (validators[key] || [])
        vs << validator
        validators[key] = vs
      end
    
          # Keys that have been set, but which have never been fetched.
      def unused_keys
        keys - fetched_keys
      end
    
      config.vm.define 'debian7' do |debian7|
    debian7.vm.box = 'puppetlabs/centos-7.0-64-puppet'
  end
    
        # Query details about our now-installed package.
    # We do this by using 'npm ls' with json + long enabled to query details
    # about the installed package.
    npm_ls_out = safesystemout(attributes[:npm_bin], 'ls', '--json', '--long', *npm_flags)
    npm_ls = JSON.parse(npm_ls_out)
    name, info = npm_ls['dependencies'].first
    
    
    
        unless safesystem(*args)
      raise 'Command failed while creating payload tar: #{args}'
    end
    payload_tar
  end