
        
        FORWARD_SLASH = '/'.freeze
    
    STDOUT.sync = true
    
                  Jekyll.logger.info 'LiveReload address:',
                                 'http://#{opts['host']}:#{opts['livereload_port']}'
            end
          end
          @thread.abort_on_exception = true
        end
    
            # Mounts a shared folder.
        #
        # This method should create, mount, and properly set permissions
        # on the shared folder. This method should also properly
        # adhere to any configuration values such as `shared_folder_uid`
        # on `config.vm`.
        #
        # @param [String] name The name of the shared folder.
        # @param [String] guestpath The path on the machine which the user
        #   wants the folder mounted.
        # @param [Hash] options Additional options for the shared folder
        #   which can be honored.
        def mount_shared_folder(name, guestpath, options)
          raise BaseError, _key: :unsupported_shared_folder
        end
    
            # This is the method called to provision the system. This method
        # is expected to do whatever necessary to provision the system (create files,
        # SSH, etc.)
        def provision!
        end
    
            # This contains all the guests and their parents.
        #
        # @return [Registry<Symbol, Array<Class, Symbol>>]
        attr_reader :guests
    
            # This returns any automatically detected errors.
        #
        # @return [Array<String>]
        def _detected_errors
          return [] if !@__invalid_methods || @__invalid_methods.empty?
          return [I18n.t('vagrant.config.common.bad_field',
                         fields: @__invalid_methods.to_a.sort.join(', '))]
        end
    
        if self.junk_headers
      while str.length < 4096
        if self.fold
          str << 'X-#{Rex::Text.rand_text_alphanumeric(rand(30) + 5)}:\r\n\t#{Rex::Text.rand_text_alphanumeric(rand(1024) + 1)}\r\n'
        else
          str << 'X-#{Rex::Text.rand_text_alphanumeric(rand(30) + 5)}: #{Rex::Text.rand_text_alphanumeric(rand(1024) + 1)}\r\n'
        end
      end
    end
    
              # Encodes the realm field
          #
          # @return [String]
          def encode_realm
            encoded = ''
            encoded << [realm.length].pack('N')
            encoded << realm
    
              # Rex::Proto::Kerberos::Model::ApReq decoding isn't supported
          #
          # @raise [NotImplementedError]
          def decode(input)
            raise ::NotImplementedError, 'AP-REQ decoding not supported'
          end
    
              # @!attribute type
          #   @return [Integer] The algorithm used to generate the checksum
          attr_accessor :type
          # @!attribute checksum
          #   @return [String] The checksum itself
          attr_accessor :checksum
    
              # Decodes the req_body from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Rex::Proto::Kerberos::Model::KdcRequestBody]
          def decode_asn1_req_body(input)
            Rex::Proto::Kerberos::Model::KdcRequestBody.decode(input.value[0])
          end
        end
      end
    end
  end
end

    
              # Decodes the Rex::Proto::Kerberos::Model::KrbError from an input
          #
          # @param input [String, OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [self] if decoding succeeds
          # @raise [RuntimeError] if decoding doesn't succeed
          def decode(input)
            case input
            when String
              decode_string(input)
            when OpenSSL::ASN1::ASN1Data
              decode_asn1(input)
            else
              raise ::RuntimeError, 'Failed to decode KrbError, invalid input'
            end
    
            def initialize(argv)
          @pod_name = argv.shift_argument
          @short_output = argv.flag?('short')
          super
        end
    
    Given(/^I make (\d+) deployments$/) do |count|
  step 'all linked files exists in shared path'
    
      def run_vagrant_command(command)
    stdout, stderr, status = vagrant_cli_command('ssh -c #{command.inspect}')
    return [stdout, stderr] if status.success?
    raise VagrantSSHCommandError, status
  end
end
    
        def dry_run
      ['--dry-run', '-n',
       'Do a dry run without executing actions',
       lambda do |_value|
         Configuration.env.set(:sshkit_backend, SSHKit::Backend::Printer)
       end]
    end
    
            def set(key, value)
          pval = @properties[key]
          if pval.is_a?(Hash) && value.is_a?(Hash)
            pval.merge!(value)
          elsif pval.is_a?(Set) && value.is_a?(Set)
            pval.merge(value)
          elsif pval.is_a?(Array) && value.is_a?(Array)
            pval.concat value
          else
            @properties[key] = value
          end
        end
    
          def remember_location(key)
        location = caller.find do |line|
          IGNORED_LOCATIONS.none? { |i| line.include?(i) }
        end
        (locations[key] ||= []) << location
      end
    
            def show
          authorize! :read, @order, order_token
          @address = find_address
          respond_with(@address)
        end
    
            def new; end
    
            def find_property
          @property = Spree::Property.accessible_by(current_ability, :read).find(params[:id])
        rescue ActiveRecord::RecordNotFound
          @property = Spree::Property.accessible_by(current_ability, :read).find_by!(name: params[:id])
        end
    
            def create
          @order = Spree::Order.find_by!(number: params.fetch(:shipment).fetch(:order_id))
          authorize! :read, @order
          authorize! :create, Shipment
          quantity = params[:quantity].to_i
          @shipment = @order.shipments.create(stock_location_id: params.fetch(:stock_location_id))