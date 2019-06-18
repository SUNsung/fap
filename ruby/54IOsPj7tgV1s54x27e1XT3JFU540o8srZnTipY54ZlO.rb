
        
            assert_block do
      case {a: 0}
      in C(a: 0)
      else
        true
      end
    end
    
        builtin_curves.each do |curve_name, comment|
      # Oakley curves and X25519 are not suitable for signing and causes
      # FIPS-selftest failure on some environment, so skip for now.
      next if ['Oakley', 'X25519'].any? { |n| curve_name.start_with?(n) }
    
    describe 'Socket#connect_nonblock' do
  SocketSpecs.each_ip_protocol do |family, ip_address|
    describe 'using a DGRAM socket' do
      before do
        @server   = Socket.new(family, :DGRAM)
        @client   = Socket.new(family, :DGRAM)
        @sockaddr = Socket.sockaddr_in(0, ip_address)
    
        def on_op(tok, data)
      case tok
      when '&', '|', '!', '!=', '!~'
        case @lex_state
        when EXPR_FNAME, EXPR_DOT
          @lex_state = EXPR_ARG
        else
          @lex_state = EXPR_BEG
        end
      when '<<'
        # TODO next token?
        case @lex_state
        when EXPR_FNAME, EXPR_DOT
          @lex_state = EXPR_ARG
        else
          @lex_state = EXPR_BEG
        end
      when '?'
        @lex_state = EXPR_BEG
      when '&&', '||', '+=', '-=', '*=', '**=',
           '&=', '|=', '^=', '<<=', '>>=', '||=', '&&='
        @lex_state = EXPR_BEG
      when '::'
        case @lex_state
        when EXPR_ARG, EXPR_CMDARG
          @lex_state = EXPR_DOT
        when EXPR_FNAME, EXPR_DOT
          @lex_state = EXPR_ARG
        else
          @lex_state = EXPR_BEG
        end
      else
        case @lex_state
        when EXPR_FNAME, EXPR_DOT
          @lex_state = EXPR_ARG
        else
          @lex_state = EXPR_BEG
        end
      end
      data << Token.new(lineno, column, __method__, tok, @lex_state)
    end
    
        assert @top_level.method_list.empty?
    
        assert_write('\0a\0\r\0b\0\r#{un}\0c#{un}', 'wt:utf-16be#{enc}', a)
    assert_write('\x85\x35', 'wt:utf-16be#{enc}', e)
    assert_write('\x00\xa2', 'wt:utf-16be#{enc}', u8)
    assert_write('a\rb\r#{n}c#{n}', 'wt:iso-2022-jp#{enc}', a)
    assert_write('\e$B\x42\x22\e(B', 'wt:iso-2022-jp#{enc}', e)
    assert_write('\e$B\x21\x71\e(B', 'wt:iso-2022-jp#{enc}', u8)
    
      module Inspect
    module M
      Integer = refine(Integer) {}
    end
  end
    
      def test_copy_stream_strio_len
    src = StringIO.new('abcd')
    dst = StringIO.new
    ret = IO.copy_stream(src, dst, 3)
    assert_equal(3, ret)
    assert_equal('abc', dst.string)
    assert_equal(3, src.pos)
  end
    
          spec['version'] = Bootstrap::VERSION
    
        def silence_log
      @silence = true
      yield
    ensure
      @silence = false
    end
  end
end

    
    class NodeMincerTest < Minitest::Test
  DUMMY_PATH = 'test/dummy_node_mincer'
    
              def render_order(result)
            if result.success?
              render_serialized_payload { serialized_current_order }
            else
              render_error_payload(result.error)
            end
          end
    
                return if after_update_attributes
    
    shared_examples_for 'a project hook' do
  let(:project) { FactoryBot.build(:project) }
    
        it 'removes settings from args' do
      described_class.parse_settings(args)
      expect(args).to eq(['one'])
    end
  end
    
      def is_pane
    @actual.is_a? Tmuxinator::Pane
  end
end

    
    def tmux_config(options = {})
  standard_options = [
    'assume-paste-time 1',
    'bell-action any',
    'bell-on-alert off',
  ]
    
      describe '#xdg' do
    it 'is $XDG_CONFIG_HOME/tmuxinator' do
      expect(described_class.xdg).to eq '#{XDG['CONFIG_HOME']}/tmuxinator'
    end
  end
    
          settings.map! do |setting|
        parts = setting.split('=')
        [parts[0], parts[1]]
      end