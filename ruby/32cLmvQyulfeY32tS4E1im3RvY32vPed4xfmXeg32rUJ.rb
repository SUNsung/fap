
        
          #
  # Overrides the builtin 'each' operator to avoid the following exception on Ruby 1.9.2+
  #    'can't add a new key into hash during iteration'
  #
  def each(&block)
    list = []
    self.keys.sort.each do |sidx|
      list << [sidx, self[sidx]]
    end
    list.each(&block)
  end
    
          update_uri_parts
    else
      raise RuntimeError, 'Invalid request command string', caller
    end
  end
    
    # Supported
IAX_SUPPORTED_CODECS  = IAX_CODEC_G711_MULAW | IAX_CODEC_G711_ALAW | IAX_CODEC_LINEAR_PCM
    
                k1 = OpenSSL::HMAC.digest('MD5', key, [msg_type].pack('V'))
            k3 = OpenSSL::HMAC.digest('MD5', k1, checksum)
    
              # Decodes the kvno from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_kvno(input)
            input.value[0].value.to_i
          end
    
    module Rex
  module Proto
    module Kerberos
      module Model
        # This class provides a representation of a Kerberos EncryptionKey data
        # definition
        class EncryptionKey < Element
    
              # Encodes the Rex::Proto::Kerberos::Model::KdcRequest into an ASN.1 String
          #
          # @return [String]
          def encode
            pvno_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_pvno], 1, :CONTEXT_SPECIFIC)
            msg_type_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_msg_type], 2, :CONTEXT_SPECIFIC)
            pa_data_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_pa_data], 3, :CONTEXT_SPECIFIC)
            req_body_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_req_body], 4, :CONTEXT_SPECIFIC)
            seq = OpenSSL::ASN1::Sequence.new([pvno_asn1, msg_type_asn1, pa_data_asn1, req_body_asn1])
            seq_asn1 = OpenSSL::ASN1::ASN1Data.new([seq], msg_type, :APPLICATION)
            seq_asn1.to_der
          end
    
    DEPRECATION
    
          # @see Base#\_retrieve
      def _retrieve(key, version, sha)
        return unless File.readable?(path_to(key))
        begin
          File.open(path_to(key), 'rb') do |f|
            if f.readline('\n').strip == version && f.readline('\n').strip == sha
              return f.read
            end
          end
          File.unlink path_to(key)
        rescue Errno::ENOENT
          # Already deleted. Race condition?
        end
        nil
      rescue EOFError, TypeError, ArgumentError => e
        Sass::Util.sass_warn 'Warning. Error encountered while reading cache #{path_to(key)}: #{e}'
      end
    
        def write_output(text, destination)
      if destination.is_a?(String)
        open_file(destination, 'w') {|file| file.write(text)}
      else
        destination.write(text)
      end
    end
    
          # Get the cache key pair for the given Sass URI.
      # The URI need not be checked for validity.
      #
      # The only strict requirement is that the returned pair of strings
      # uniquely identify the file at the given URI.
      # However, the first component generally corresponds roughly to the directory,
      # and the second to the basename, of the URI.
      #
      # Note that keys must be unique *across importers*.
      # Thus it's probably a good idea to include the importer name
      # at the beginning of the first component.
      #
      # @param uri [String] A URI known to be valid for this importer.
      # @param options [{Symbol => Object}] Options for the Sass file
      #   containing the `@import` currently being checked.
      # @return [(String, String)] The key pair which uniquely identifies
      #   the file at the given URI.
      def key(uri, options)
        Sass::Util.abstract(self)
      end
    
          def public_url(name, sourcemap_directory)
        file_pathname = Sass::Util.cleanpath(File.absolute_path(name, @root))
        return Sass::Util.file_uri_from_path(file_pathname) if sourcemap_directory.nil?
    
    desc 'Clean up files.'
task :clean do |t|
  FileUtils.rm_rf 'doc'
  FileUtils.rm_rf 'tmp'
  FileUtils.rm_rf 'pkg'
  FileUtils.rm_rf 'public'
  FileUtils.rm 'test/debug.log' rescue nil
  FileUtils.rm 'test/paperclip.db' rescue nil
  Dir.glob('paperclip-*.gem').each{|f| FileUtils.rm f }
end
