
        
        module Vagrant
  module Util
    class IO
      # The chunk size for reading from subprocess IO.
      READ_CHUNK_SIZE = 4096
    
          # This deletes the block with the given key if it exists.
      def delete(key)
        key    = Regexp.quote(key)
        regexp = /^#\s*VAGRANT-BEGIN:\s*#{key}$.*^#\s*VAGRANT-END:\s*#{key}$\r?\n?/m
        @value.gsub!(regexp, '')
      end
    
            # Get the proper capability host to check
        cap_host = nil
        if type == :host
          cap_host = @env.host
        else
          with_target_vms([]) do |vm|
            cap_host = case type
                       when :provider
                         vm.provider
                       when :guest
                         vm.guest
                       else
                         raise Vagrant::Errors::CLIInvalidUsage,
                           help: opts.help.chomp
                       end
          end
        end
    
      def test_input_line_number_range
    bug12947 = '[ruby-core:78162] [Bug #12947]'
    ary = b1 = b2 = nil
    EnvUtil.suppress_warning do
      b1 = eval('proc {|i| i if 2..4}')
      b2 = eval('proc {|i| if 2..4; i; end}')
    end
    IO.pipe {|r, w|
      th = Thread.start {(1..5).each {|i| w.puts i};w.close}
      ary = r.map {|i| b1.call(i.chomp)}
      th.join
    }
    assert_equal([nil, '2', '3', '4', nil], ary, bug12947)
    IO.pipe {|r, w|
      th = Thread.start {(1..5).each {|i| w.puts i};w.close}
      ary = r.map {|i| b2.call(i.chomp)}
      th.join
    }
    assert_equal([nil, '2', '3', '4', nil], ary, bug12947)
  end
end

    
        assert_equal Gem::Security::HighSecurity, @cmd.options[:security_policy]
  end
    
        dns = MiniTest::Mock.new
    dns.expect :getresource, target, [String, Object]
    
        warning = /mswin|mingw/ =~ RUBY_PLATFORM ? [] : /shebang line ending with \\r/
    assert_in_out_err([{'RUBYOPT' => nil}], '#!ruby -KU -Eutf-8\r\np \'\u3042\'\r\n',
                      ['\'\u3042\''], warning,
                      encoding: Encoding::UTF_8)
    
          AuthScheme = 'Basic' # :nodoc:
    
        def parse(uri) # :nodoc:
      scheme, userinfo, host, port,
        registry, path, opaque, query, fragment = self.split(uri)
      scheme_list = URI.scheme_list
      if scheme && scheme_list.include?(uc = scheme.upcase)
        scheme_list[uc].new(scheme, userinfo, host, port,
                            registry, path, opaque, query,
                            fragment, self)
      else
        Generic.new(scheme, userinfo, host, port,
                    registry, path, opaque, query,
                    fragment, self)
      end
    end
    
      ## Hangul Algorithm
  def self.hangul_decomp_one(target)
    syllable_index = target.ord - SBASE
    return target if syllable_index < 0 || syllable_index >= SCOUNT
    l = LBASE + syllable_index / NCOUNT
    v = VBASE + (syllable_index % NCOUNT) / TCOUNT
    t = TBASE + syllable_index % TCOUNT
    (t==TBASE ? [l, v] : [l, v, t]).pack('U*') + target[1..-1]
  end
    
      has_one :icon, serializer: ActivityPub::ImageSerializer
    
      describe 'when signed in' do
    let(:user) { Fabricate(:user) }
    
              @assignments = []
          @references = []
          @captured_by_block = false
        end
    
            def each_unnecessary_space_match(node, &blk)
          each_match_range(
            contents_range(node),
            MULTIPLE_SPACES_BETWEEN_ITEMS_REGEX,
            &blk
          )
        end
      end
    end
  end
end

    
              new_source =
            node.receiver.source + ' =~ ' + node.first_argument.source
    
            private
    
            def argument_positions(arguments)
          optarg_positions = []
          arg_positions = []
    
            # @param lines [Array<String>]
        # @param annotations [Array<(Integer, String)>]
        #   each entry is the annotated line number and the annotation text
        #
        # @note annotations are sorted so that reconstructing the annotation
        #   text via {#to_s} is deterministic
        def initialize(lines, annotations)
          @lines       = lines.freeze
          @annotations = annotations.sort.freeze
        end
    
        def register(klass, attachment_name, attachment_options)
      @attachments ||= {}
      @attachments[klass] ||= {}
      @attachments[klass][attachment_name] = attachment_options
    end
    
          class ValidateAttachmentSizeMatcher
        def initialize attachment_name
          @attachment_name = attachment_name
        end
    
          def validate_each(record, attribute, value)
        base_attribute = attribute.to_sym
        attribute = '#{attribute}_content_type'.to_sym
        value = record.send :read_attribute_for_validation, attribute