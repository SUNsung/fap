
        
          def set_account
    @account = Account.find_local!(params[:account_username])
  end
    
      def set_account
    @account = Account.find(params[:id])
  end
    
      #
  # Initializes an HTTP packet header class that inherits from a Hash base
  # class.
  #
  def initialize
    self.dcase_hash = {}
    
          if chall.nil?
        dprint('REGAUTH: No challenge data received')
        return
      end
    
              # Encodes the realm field
          #
          # @return [String]
          def encode_realm
            encoded = ''
            encoded << [realm.length].pack('N')
            encoded << realm
    
    module Rex
  module Proto
    module Kerberos
      module CredentialCache
        # This class provides a representation of credential times stored in the Kerberos Credential Cache.
        class Time < Element
          # @!attribute auth_time
          #   @return [Integer]
          attr_accessor :auth_time
          # @!attribute start_time
          #   @return [Integer]
          attr_accessor :start_time
          # @!attribute end_time
          #   @return [Integer]
          attr_accessor :end_time
          # @!attribute renew_till
          #   @return [Integer]
          attr_accessor :renew_till
    
    module Rex
  module Proto
    module Kerberos
      module Model
        # This class provides a representation of a principal, an asset (e.g., a
        # workstation user or a network server) on a network.
        class Element
    
              # Decodes the ticket field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Rex::Proto::Kerberos::Type::Ticket]
          def decode_ticket(input)
            Rex::Proto::Kerberos::Model::Ticket.decode(input.value[0])
          end
    
      it 'returns the merged `ConfigPart#config_string`' do
    expect(subject.config_string).to eq(ordered_config_parts.collect(&:text).join('\n'))
  end
    
        desc 'Generate a valid ssh-config'
    task :ssh_config do
      require 'json'
      # Loop until the Vagrant box finishes SSH bootstrap
      raw_ssh_config = Stud.try(50.times, LogStash::CommandExecutor::CommandError) do
          LogStash::VagrantHelpers.fetch_config.stdout.split('\n');
      end
      parsed_ssh_config = LogStash::VagrantHelpers.parse(raw_ssh_config)
      File.write('.vm_ssh_config', parsed_ssh_config.to_json)
    end
    
          it 'display a list of installed plugins' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --installed')
        expect(result.stdout.split('\n').size).to be > 1
      end