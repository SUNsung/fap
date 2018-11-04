      # Creates a {Vagrant::Environment} for this entry.
      #
      # @return [Vagrant::Environment]
      def vagrant_env(home_path, **opts)
        Vagrant::Util::SilenceWarnings.silence! do
          Environment.new({
            cwd: @vagrantfile_path,
            home_path: home_path,
            local_data_path: @local_data_path,
            vagrantfile_name: @vagrantfile_name,
          }.merge(opts))
        end
      end
    
            # This is the method called to when the system is being destroyed
        # and allows the provisioners to engage in any cleanup tasks necessary.
        def cleanup
        end
      end
    end
  end
end

    
            # Executes a command on the remote machine with administrative
        # privileges. See {#execute} for documentation, as the API is the
        # same.
        #
        # @see #execute
        def sudo(command, opts=nil)
        end
    
              @registered.each do |plugin|
            plugin.components.provider_capabilities.each do |provider, caps|
              results[provider].merge!(caps)
            end
          end
    
      #
  # Parses a header from a string.
  #
  # XXX - Putting : in a header value breaks this badly
  def from_s(header)
    reset
    
              # Decodes the Rex::Proto::Kerberos::Model::Element from the input. This
          # method has been designed to be overridden by subclasses.
          #
          # @raise [NoMethodError]
          def decode(input)
            raise ::NoMethodError, 'Method designed to be overridden'
          end
    
              # Decodes the srealm field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [String]
          def decode_srealm(input)
            input.value[0].value
          end
    
              # Decodes the cname field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Rex::Proto::Kerberos::Model::PrincipalName]
          def decode_cname(input)
            Rex::Proto::Kerberos::Model::PrincipalName.decode(input.value[0])
          end
    
    Then(/^references in the remote repo are listed$/) do
  expect(@output).to include('refs/heads/master')
end
    
    Given(/^file '(.*?)' does not exist in shared path$/) do |file|
  file_shared_path = TestApp.shared_path.join(file)
  run_vagrant_command('mkdir -p #{TestApp.shared_path}')
  run_vagrant_command('touch #{file_shared_path} && rm #{file_shared_path}')
end
    
          super
    end
    
          private
    
          def servers_by_key
        @servers_by_key ||= {}
      end