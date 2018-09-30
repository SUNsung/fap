
        
                  if options['multiple']
            add_default_name_and_id_for_value(@checked_value, options)
            options.delete('multiple')
          else
            add_default_name_and_id(options)
          end
    
                # Prepend a hidden field to make sure something will be sent back to the
            # server if all radio buttons are unchecked.
            if options.fetch('include_hidden', true)
              hidden_field + rendered_collection
            else
              rendered_collection
            end
          end
    
            def render
          options = @options.stringify_keys
          options['size'] = options['maxlength'] unless options.key?('size')
          options['type'] ||= field_type
          options['value'] = options.fetch('value') { value_before_type_cast } unless field_type == 'file'
          add_default_name_and_id(options)
          tag('input', options)
        end
    
        module ClassMethods
      def inherited(klass) # :nodoc:
        super
        klass._write_layout_method
      end
    
        def initialize_copy(other)
      @paths = other.paths.dup
      self
    end
    
    describe 'Kernel#srand' do
  it 'needs to be reviewed for spec completeness'
end

    
      it 'transfers control to the innermost catch block waiting for the same sympol' do
    one = two = three = 0
    catch :duplicate do
      catch :duplicate do
        catch :duplicate do
          one = 1
          throw :duplicate
        end
        two = 2
        throw :duplicate
      end
      three = 3
      throw :duplicate
    end
    [one, two, three].should == [1, 2, 3]
  end
    
    # grab name/url pairings from README.md
readme = File.open('README.md', 'r')
contents = readme.read
matches = contents.scan(/\* (.*) (http.*)/)
    
    require 'rex/proto/ipmi/utils'
    
        data =
      [0x00, 0x00, 0x00, 0x00].pack('C*') +
      bmc_session_id +
      console_random_id +
      [
        0x14, 0x00, 0x00,
        username.length
      ].pack('C*') +
      username
    
              case protocol
          when 'tcp'
            self.connection = create_tcp_connection
          when 'udp'
            raise ::NotImplementedError, 'Kerberos Client: UDP not supported'
          else
            raise ::RuntimeError, 'Kerberos Client: unknown transport protocol'
          end
    
                k3 = OpenSSL::HMAC.digest('MD5', k1, checksum)
    
              # Encodes a Rex::Proto::Kerberos::Model::AuthorizationData into an ASN.1 String
          #
          # @return [String]
          def encode
            seqs = []
            elements.each do |elem|
              elems = []
              type_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_type(elem[:type])], 0, :CONTEXT_SPECIFIC)
              elems << type_asn1
              data_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_data(elem[:data])], 1, :CONTEXT_SPECIFIC)
              elems << data_asn1
              seqs << OpenSSL::ASN1::Sequence.new(elems)
            end
    
              # Decodes the type from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_type(input)
            input.value[0].value.to_i
          end
    
              # Encodes the pvno field
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_pvno
            bn = OpenSSL::BN.new(pvno.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
        def register_sprockets
      Sprockets.append_path(stylesheets_path)
      Sprockets.append_path(fonts_path)
      Sprockets.append_path(javascripts_path)
    end
  end
end
    
      desc 'update main and version in bower.json'
  task :generate do
    require 'bootstrap-sass'
    Dir.chdir Bootstrap.gem_path do
      spec       = JSON.parse(File.read 'bower.json')
    
        # .btn { ... } -> @mixin btn { ... }; .btn { @include btn }
    def extract_mixins_from_selectors(file, selectors_to_mixins)
      selectors_to_mixins.each do |selector, mixin|
        file = replace_rules file, Regexp.escape(selector), prefix: false do |selector_css|
          log_transform '#{selector} { ... } -> @mixin #{mixin} { ... }; #{selector} { @include #{mixin} } ', from: 'extract_mixins_from_selectors'
          <<-SCSS
// [converter] extracted from `#{selector}` for libsass compatibility
@mixin #{mixin} {#{unwrap_rule_block(selector_css)}
}
// [converter] extracted as `@mixin #{mixin}` for libsass compatibility
#{selector} {
  @include #{mixin};
}
          SCSS
        end
      end
      file
    end
    
      # Disable automatic flushing of the log to improve performance.
  # config.autoflush_log = false