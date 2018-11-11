
        
        def graceful_require
  Jekyll::External.require_with_graceful_fail('json')
  JSON.pretty_generate(DATA)
end
    
    require 'jekyll'
require 'mercenary'
    
            def initialize(config)
          @main_fallback_highlighter = config['highlighter'] || 'rouge'
          @config = config['kramdown'] || {}
          @highlighter = nil
          setup
        end
    
      def expand_reqs
    formula.recursive_requirements do |dependent, req|
      build = effective_build_options_for(dependent)
      if (req.optional? || req.recommended?) && build.without?(req)
        Requirement.prune
      elsif req.build? && dependent != formula
        Requirement.prune
      elsif req.satisfied? && req.default_formula? && (dep = req.to_dependency).installed?
        deps << dep
        Requirement.prune
      end
    end
  end
    
      def caveats
    caveats = []
    begin
      build, f.build = f.build, Tab.for_formula(f)
      s = f.caveats.to_s
      caveats << s.chomp + '\n' if s.length > 0
    ensure
      f.build = build
    end
    caveats << keg_only_text
    caveats << bash_completion_caveats
    caveats << zsh_completion_caveats
    caveats << fish_completion_caveats
    caveats << plist_caveats
    caveats << python_caveats
    caveats << app_caveats
    caveats << elisp_caveats
    caveats.compact.join('\n')
  end
    
      # Removes any empty directories in the formula's prefix subtree
  # Keeps any empty directions projected by skip_clean
  # Removes any unresolved symlinks
  def prune
    dirs = []
    symlinks = []
    @f.prefix.find do |path|
      if path == @f.libexec || @f.skip_clean?(path)
        Find.prune
      elsif path.symlink?
        symlinks << path
      elsif path.directory?
        dirs << path
      end
    end
    
        @report = Hash.new { |h, k| h[k] = [] }
    return @report unless updated?
    
            # Checks if the target machine is ready for communication. If this
        # returns true, then all the other methods for communicating with
        # the machine are expected to be functional.
        #
        # @return [Boolean]
        def ready?
          false
        end
    
        # Set the manpage date to the existing one if we're checking for changes.
    # This avoids the only change being e.g. a new date.
    date = if args.fail_if_changed? &&
              target.extname == '.1' && target.exist?
      /'(\d{1,2})' '([A-Z][a-z]+) (\d{4})' '#{organisation}' '#{manual}'/ =~ target.read
      Date.parse('#{Regexp.last_match(1)} #{Regexp.last_match(2)} #{Regexp.last_match(3)}')
    else
      Date.today
    end
    date = date.strftime('%Y-%m-%d')
    
          attr_reader :cache_location
    
          # This allows generic Altivec PPC bottles to be supported in some
      # formulae, while also allowing specific bottles in others; e.g.,
      # sometimes a formula has just :tiger_altivec, other times it has
      # :tiger_g4, :tiger_g5, etc.
      def find_altivec_tag(tag)
        return unless tag.to_s =~ /(\w+)_(g4|g4e|g5)$/
    
        false
  end
    
      attr_accessor :caller_name
  attr_accessor :caller_number
  attr_accessor :dtmf
    
      def self.create_ipmi_rakp_1(bmc_session_id, console_random_id, username)
    head = [
      0x06, 0x00, 0xff, 0x07,  # RMCP Header
      0x06,                    # RMCP+ Authentication Type
      PAYLOAD_RAKP1,           # Payload Type
      0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00,
    ].pack('C*')
    
            private
    
              # Encrypts the cipher using RC4-HMAC schema
          #
          # @param data [String] the data to encrypt
          # @param key [String] the key to encrypt
          # @param msg_type [Integer] the message type
          # @return [String] the encrypted data
          def encrypt_rc4_hmac(data, key, msg_type)
            k1 = OpenSSL::HMAC.digest('MD5', key, [msg_type].pack('V'))
    
                elems << OpenSSL::ASN1::ASN1Data.new([encode_options], 0, :CONTEXT_SPECIFIC) if options
            elems << OpenSSL::ASN1::ASN1Data.new([encode_cname], 1, :CONTEXT_SPECIFIC) if cname
            elems << OpenSSL::ASN1::ASN1Data.new([encode_realm], 2, :CONTEXT_SPECIFIC) if realm
            elems << OpenSSL::ASN1::ASN1Data.new([encode_sname], 3, :CONTEXT_SPECIFIC) if sname
            elems << OpenSSL::ASN1::ASN1Data.new([encode_from], 4, :CONTEXT_SPECIFIC) if from
            elems << OpenSSL::ASN1::ASN1Data.new([encode_till], 5, :CONTEXT_SPECIFIC) if till
            elems << OpenSSL::ASN1::ASN1Data.new([encode_rtime], 6, :CONTEXT_SPECIFIC) if rtime
            elems << OpenSSL::ASN1::ASN1Data.new([encode_nonce], 7, :CONTEXT_SPECIFIC) if nonce
            elems << OpenSSL::ASN1::ASN1Data.new([encode_etype], 8, :CONTEXT_SPECIFIC) if etype
            elems << OpenSSL::ASN1::ASN1Data.new([encode_enc_auth_data], 10, :CONTEXT_SPECIFIC) if enc_auth_data
    
              # Decodes the sname field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Rex::Proto::Kerberos::Model::PrincipalName]
          def decode_sname(input)
            Rex::Proto::Kerberos::Model::PrincipalName.decode(input.value[0])
          end
    
          positions = []
      while (rule_start = s.scan_next(rule_start_re))
        pos = s.pos
        positions << (pos - rule_start.length..close_brace_pos(less, pos - 1))
      end
      replace_substrings_at(less, positions, &block)
      less
    end
    
      # Configure static asset server for tests with Cache-Control for performance.
  if config.respond_to?(:serve_static_files)
    # rails >= 4.2
    config.serve_static_files = true
  elsif config.respond_to?(:serve_static_assets)
    # rails < 4.2
    config.serve_static_assets = true
  end
  config.static_cache_control = 'public, max-age=3600'
    
          def line_class(line)
        if line =~ /^@@/
          'gc'
        elsif line =~ /^\+/
          'gi'
        elsif line =~ /^\-/
          'gd'
        else
          ''
        end
      end
    
          def is_create_page
        false
      end
    
          def header_content
        has_header && @header.formatted_data
      end
    
        assert_no_match /Delete this Page/, last_response.body, ''Delete this Page' link not blocked in page template'
    assert_no_match /New/,              last_response.body, ''New' button not blocked in page template'
    assert_no_match /Upload/,           last_response.body, ''Upload' link not blocked in page template'
    assert_no_match /Rename/,           last_response.body, ''Rename' link not blocked in page template'
    assert_no_match /Edit/,             last_response.body, ''Edit' link not blocked in page template'
    
        # test `get %r{/(.+?)/([0-9a-f]{40})} do` in app.rb
    get '/' + page_c.escaped_url_path + '/' + page_c.version.to_s
    assert last_response.ok?
    assert_match /create_msg/, last_response.body
    
      if wiki_options[:plantuml_url]
    Gollum::Filter::PlantUML.configure do |config|
      puts 'Using #{wiki_options[:plantuml_url]} as PlantUML endpoint'
      config.url = wiki_options[:plantuml_url]
    end
  end
    
        # Extract the path string that Gollum::Wiki expects
    def extract_path(file_path)
      return nil if file_path.nil?
      last_slash = file_path.rindex('/')
      if last_slash
        file_path[0, last_slash]
      end
    end
    
    