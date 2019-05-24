
        
            private
    
        render json: @web_subscription, serializer: REST::WebPushSubscriptionSerializer
  end
    
      def setting
    @_setting ||= ::Web::Setting.where(user: current_user).first_or_initialize(user: current_user)
  end
end

    
      Devise.omniauth_configs.each_key do |provider|
    provides_callback_for provider
  end
    
      def preferred_locale
    http_accept_language.preferred_language_from(available_locales)
  end
    
      def api_throttle_data
    most_limited_type, = request.env['rack.attack.throttle_data'].min_by { |_, v| v[:limit] }
    request.env['rack.attack.throttle_data'][most_limited_type]
  end
    
    
  # Returns a parsed HTML document.
  # Instead of using regexes to parse the HTML body, you should use this and use the Nokogiri API.
  #
  # @see http://www.nokogiri.org/
  # @return [Nokogiri::HTML::Document]
  def get_html_document
    Nokogiri::HTML(self.body)
  end
    
              # Rex::Proto::Kerberos::Model::ApReq decoding isn't supported
          #
          # @raise [NotImplementedError]
          def decode(input)
            raise ::NotImplementedError, 'AP-REQ decoding not supported'
          end
    
              # Encodes the type field
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_type
            bn = OpenSSL::BN.new(type.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
              # Decodes the kvno from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_kvno(input)
            input.value[0].value.to_i
          end
    
              # Decodes the stime field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Time]
          def decode_stime(input)
            input.value[0].value
          end
    
    Vagrant.configure('2') do |config|
  # All Vagrant configuration is done here. The most common configuration
  # options are documented and commented below. For a complete reference,
  # please see the online documentation at vagrantup.com.
    
        pkgdata = {
      'arch' => architecture,
      'name' => name,
      'version' => pkg_version,
      'comment' => description,
      'desc' => description,
      'origin' => pkg_origin,
      'maintainer' => maintainer,
      'www' => url,
      # prefix is required, but it doesn't seem to matter
      'prefix' => '/',
    }
    
      public(:input)
end # class FPM::Package::NPM

    
        if File.exist?(install)
      functions = parse_install_script(install)
      if functions.include?('pre_install')
        self.scripts[:before_install] = functions['pre_install'].join('\n')
      end
      if functions.include?('post_install')
        self.scripts[:after_install] = functions['post_install'].join('\n')
      end
      if functions.include?('pre_upgrade')
        self.scripts[:before_upgrade] = functions['pre_upgrade'].join('\n')
      end
      if functions.include?('post_upgrade')
        self.scripts[:after_upgrade] = functions['post_upgrade'].join('\n')
      end
      if functions.include?('pre_remove')
        self.scripts[:before_remove] = functions['pre_remove'].join('\n')
      end
      if functions.include?('post_remove')
        self.scripts[:after_remove] = functions['post_remove'].join('\n')
      end
      FileUtils.rm(install)
    end
    
            next if attributes[:python_disable_dependency].include?(name)
    
        # use dir to set stuff up properly, mainly so I don't have to reimplement
    # the chdir/prefix stuff special for zip.
    dir = convert(FPM::Package::Dir)
    if attributes[:chdir]
      dir.attributes[:chdir] = File.join(build_path, attributes[:chdir])
    else
      dir.attributes[:chdir] = build_path
    end