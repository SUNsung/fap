
        
              return class_ref
    end
    
          launch_event = builder.new_event(:launch)
      post_thread = client.post_event(launch_event)
      unless post_thread.nil?
        @threads << post_thread
      end
    end
    
          def self.authors
        ['lmirosevic', 'maschall']
      end
    
            message = '#{grouping}/test/#{specified_build_number} (fastlane)'
        tag = '#{grouping}/test/#{specified_build_number}'
        expect(result).to eq('git tag -am #{message.shellescape} #{tag.shellescape}')
      end
    
            expect(result).to eq('appledoc --project-name \'Project Name\' --project-company \'Company\' --docset-install-path \'docs/install/path\' --exit-threshold \'2\' input/dir')
      end
    
        # [String] A description shown to the user
    attr_accessor :description
    
            FastlaneCore::CertChecker.wwdr_certificate_installed?
      end
    
        def resource_params
      params.require(:user).permit(
        :unconfirmed_email
      )
    end
  end
end

    
        self.state = :registered
    
              # Encodes the options field
          #
          # @return [OpenSSL::ASN1::BitString]
          def encode_options
            OpenSSL::ASN1::BitString.new([options].pack('N'))
          end
    
              # Decodes the cname field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Rex::Proto::Kerberos::Model::PrincipalName]
          def decode_cname(input)
            Rex::Proto::Kerberos::Model::PrincipalName.decode(input.value[0])
          end
    
    Gem::Specification.new do |gem|
  gem.name          = 'capistrano'
  gem.version       = Capistrano::VERSION
  gem.authors       = ['Tom Clements', 'Lee Hambley']
  gem.email         = ['seenmyfate@gmail.com', 'lee.hambley@gmail.com']
  gem.description   = 'Capistrano is a utility and framework for executing commands in parallel on multiple remote machines, via SSH.'
  gem.summary       = 'Capistrano - Welcome to easy deployment with Ruby over SSH'
  gem.homepage      = 'http://capistranorb.com/'
    
    Then(/^the release is created$/) do
  run_vagrant_command('ls -g #{TestApp.releases_path}')
end
    
          def print_deprecation_warnings_if_applicable
        if using_default_scm?
          warn_add_git_to_capfile unless scm_plugin_installed?
        elsif built_in_scm_name?
          warn_set_scm_is_deprecated
        elsif third_party_scm_name?
          warn_third_party_scm_must_be_upgraded
        end
      end
    
    module Capistrano
  class Configuration
    class Servers
      include Enumerable
    
          # Internal use only.
      def peek(key, default=nil, &block)
        value = fetch_for(key, default, &block)
        while callable_without_parameters?(value)
          value = (values[key] = value.call)
        end
        value
      end