
        
            def handle_ssl_error!(e)
      # SSL errors are very common when the Ruby or OpenSSL installation is somehow broken
      # We want to show a nice error message to the user here
      # We have over 20 GitHub issues just for this one error:
      #   https://github.com/fastlane/fastlane/search?q=errno%3D0+state%3DSSLv3+read+server&type=Issues
      suggest_ruby_reinstall(e)
      display_user_error!(e, e.to_s)
    end
    
          def self.example_code
        [
          'add_git_tag # simple tag with default values',
          'add_git_tag(
            grouping: 'fastlane-builds',
            prefix: 'v',
            postfix: '-RC1',
            build_number: 123
          )',
          '# Alternatively, you can specify your own tag. Note that if you do specify a tag, all other arguments are ignored.
          add_git_tag(
            tag: 'my_custom_tag'
          )'
        ]
      end
    
            expect(result).to eq('git tag -am #{message.shellescape} #{tag.shellescape}')
      end
    
          context 'when specify output_file options' do
        it 'adds redirect file to command' do
          result = Fastlane::FastFile.new.parse('lane :test do
            swiftlint(
              output_file: '#{output_file}'
            )
          end').runner.execute(:test)
    
          EOS
      login!
    end
    
          return unless user == 'caskroom'
    
        # 100 continue counter
    self.count_100 = 0
  end
    
              # Encrypts the Rex::Proto::Kerberos::Model::AuthorizationData
          #
          # @param etype [Integer] the crypto schema to encrypt
          # @param key [String] the key to encrypt
          # @return [String] the encrypted result
          # @raise [NotImplementedError] if encryption schema isn't supported
          def encrypt(etype, key)
            data = self.encode
    
              # Decodes the key_expiration field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Time]
          def decode_key_expiration(input)
            input.value[0].value
          end
    
        def lotus?
      defined?(::Lotus)
    end
    
        @save_to.each { |_, v| FileUtils.mkdir_p(v) }
    
        def str_to_byte_pos(pos)
      @s.string.slice(0, pos).bytesize
    end
  end
end
    
        # opening brace position from +from+ (search backwards)
    def open_brace_pos(css, from, depth = 0)
      s = CharStringScanner.new(css[0..from].reverse)
      while (b = s.scan_next(BRACE_RE_REVERSE))
        depth += (b == '{' ? +1 : -1)
        break if depth.zero?
      end
      raise 'matching { brace not found' unless depth.zero?
      from - s.pos + 1
    end
    }
    }
    
        def log_status(status)
      puts bold status
    end
    
    # include would include the module in Object
# extend only extends the `main` object
extend Sinatra::Delegator
    
      # set version
  content.sub! /(s\.version.*=\s+).*/, '\\1\'#{Rack::Protection::VERSION}\''
    
            # See if it's actually a masked token or not. We should be able
        # to handle any unmasked tokens that we've issued without error.
    
            private
    
              Spree::Cart::AddItem.call(order: @shipment.order,
                                    variant: variant,
                                    quantity: quantity,
                                    options: { shipment: @shipment })