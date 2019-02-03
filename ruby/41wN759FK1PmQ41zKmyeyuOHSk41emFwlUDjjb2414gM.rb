
        
                  # Make sure we're only working with one VM if single target
          if options[:single_target] && vms.length != 1
            vm = @env.primary_vm
            raise Errors::MultiVMTargetRequired if !vm
            vms = [vm]
          end
    
              @commands = Registry.new
          @configs = Hash.new { |h, k| h[k] = Registry.new }
          @guests  = Registry.new
          @guest_capabilities = Hash.new { |h, k| h[k] = Registry.new }
          @hosts   = Registry.new
          @host_capabilities = Hash.new { |h, k| h[k] = Registry.new }
          @providers = Registry.new
          @provider_capabilities = Hash.new { |h, k| h[k] = Registry.new }
          @pushes = Registry.new
          @synced_folders = Registry.new
        end
      end
    end
  end
end

    
        # undo folding, kinda ugly but works for now.
    header.gsub!(/:\s*\r\n\s+/smni,': ')
    
      #
  # Initializes an HTTP server as listening on the provided port and
  # hostname.
  #
  def initialize(port = 80, listen_host = '0.0.0.0', ssl = false, context = {},
                 comm = nil, ssl_cert = nil, ssl_compression = false,
                 ssl_cipher = nil)
    self.listen_host     = listen_host
    self.listen_port     = port
    self.ssl             = ssl
    self.context         = context
    self.comm            = comm
    self.ssl_cert        = ssl_cert
    self.ssl_compression = ssl_compression
    self.ssl_cipher      = ssl_cipher
    self.listener        = nil
    self.resources       = {}
    self.server_name     = DefaultServer
  end
    
        self.itime  = ::Time.now
    self.queue  = ::Queue.new
    
                encoded
          end
    
              # Encodes the type field
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_type
            bn = OpenSSL::BN.new(type.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
              # Decodes the e_data from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [String]
          def decode_e_data(input)
            input.value[0].value
          end
        end
      end
    end
  end
end