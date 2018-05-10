  # This allows generic Altivec PPC bottles to be supported in some
  # formulae, while also allowing specific bottles in others; e.g.,
  # sometimes a formula has just :tiger_altivec, other times it has
  # :tiger_g4, :tiger_g5, etc.
  def find_altivec_tag(tag)
    if tag.to_s =~ /(\w+)_(g4|g4e|g5)$/
      altivec_tag = '#{$1}_altivec'.to_sym
      altivec_tag if key?(altivec_tag)
    end
  end
    
      def zsh_completion_caveats
    if keg && keg.completion_installed?(:zsh) then <<-EOS.undent
      zsh completion has been installed to:
        #{HOMEBREW_PREFIX}/share/zsh/site-functions
      EOS
    end
  end
    
      def external_commands
    paths.reduce([]) do |cmds, path|
      Dir['#{path}/brew-*'].each do |file|
        next unless File.executable?(file)
        cmd = File.basename(file, '.rb')[5..-1]
        cmds << cmd unless cmd.include?('.')
      end
      cmds
    end.sort
  end
    
            if msg = blacklisted?(query)
          if count > 0
            puts
            puts 'If you meant #{query.inspect} precisely:'
            puts
          end
          puts msg
        elsif count == 0
          puts 'No formula found for #{query.inspect}.'
          begin
            GitHub.print_pull_requests_matching(query)
          rescue GitHub::Error => e
            SEARCH_ERROR_QUEUE << e
          end
        end
      end
    end
    
        def add_entry(entry)
      if @index.add?(entry.as_json.to_s)
        @entries << entry.dup
        @types[entry.type].count += 1 if entry.type
      end
    end
    
            css('h2:not([id]) a[id]:not([href])').each do |node|
          node.parent['id'] = node['id']
          node.before(node.children).remove
        end
    
              entries << [name, node['id'], type]
        end
    
              node.css('> ul > li > a').each do |link|
            n = link.content
            next if n.start_with?('Ex: ') || n.start_with?('Default ') || n =~ /example/i || IGNORE_ENTRIES.include?(n)
            id = link['href'].remove('#')
            n.downcase!
            n.prepend '#{name}: '
            entries << [n, id]
          end
        end
    
        assert_not_operator(h1, :<, h1)
    assert_not_operator(h1, :<, h2)
    assert_not_operator(h2, :<, h1)
    assert_not_operator(h2, :<, h2)
    
      it 'decodes NaN' do
    # mumble mumble NaN mumble https://bugs.ruby-lang.org/issues/5884
    [nan_value].pack(unpack_format).unpack(unpack_format).first.nan?.should be_true
  end
    
    describe :string_unpack_unicode, shared: true do
  it 'decodes Unicode codepoints as ASCII values' do
    [ ['\x00',      [0]],
      ['\x01',      [1]],
      ['\x08',      [8]],
      ['\x0f',      [15]],
      ['\x18',      [24]],
      ['\x1f',      [31]],
      ['\x7f',      [127]],
      ['\xc2\x80',  [128]],
      ['\xc2\x81',  [129]],
      ['\xc3\xbf',  [255]]
    ].should be_computed_by(:unpack, 'U')
  end
    
        10.times { sleep 0.1 if after_sleep1 != true }
    10.times { sleep 0.1 if t.status and t.status != 'sleep' }
    after_sleep2.should == false # t should be blocked on the second sleep
    t.send(@method)
    
      private
    
      class RateLimitExceededError < Error
    def initialize(reset, error)
      super <<~EOS
        GitHub API Error: #{error}
        Try again in #{pretty_ratelimit_reset(reset)}, or create a personal access token:
          #{ALL_SCOPES_URL}
        and then set the token as: export HOMEBREW_GITHUB_API_TOKEN='your_new_token'
      EOS
    end
    
            <<~EOS
          Homebrew's sbin was not found in your PATH but you have installed
          formulae that put executables in #{HOMEBREW_PREFIX}/sbin.
          Consider setting the PATH for example like so
            #{Utils::Shell.prepend_path_in_profile('#{HOMEBREW_PREFIX}/sbin')}
        EOS
      end
    
      belongs_to :status_message
  has_many :poll_answers, -> { order 'id ASC' }, dependent: :destroy
  has_many :poll_participations, dependent: :destroy
  has_one :author, through: :status_message
    
        def perform
      return User.none unless valid?
    
        i0, s0 = index, []
    r1 = _nt_name
    s0 << r1
    if r1
      r2 = _nt__
      s0 << r2
      if r2
        if has_terminal?('{', false, index)
          r3 = instantiate_node(SyntaxNode,input, index...(index + 1))
          @index += 1
        else
          terminal_parse_failure('{')
          r3 = nil
        end
        s0 << r3
        if r3
          r4 = _nt__
          s0 << r4
          if r4
            i6, s6 = index, []
            r7 = _nt_attribute
            s6 << r7
            if r7
              s8, i8 = [], index
              loop do
                i9, s9 = index, []
                r10 = _nt_whitespace
                s9 << r10
                if r10
                  r11 = _nt__
                  s9 << r11
                  if r11
                    r12 = _nt_attribute
                    s9 << r12
                  end
                end
                if s9.last
                  r9 = instantiate_node(SyntaxNode,input, i9...index, s9)
                  r9.extend(Plugin0)
                else
                  @index = i9
                  r9 = nil
                end
                if r9
                  s8 << r9
                else
                  break
                end
              end
              r8 = instantiate_node(SyntaxNode,input, i8...index, s8)
              s6 << r8
            end
            if s6.last
              r6 = instantiate_node(SyntaxNode,input, i6...index, s6)
              r6.extend(Plugin1)
            else
              @index = i6
              r6 = nil
            end
            if r6
              r5 = r6
            else
              r5 = instantiate_node(SyntaxNode,input, index...index)
            end
            s0 << r5
            if r5
              r13 = _nt__
              s0 << r13
              if r13
                if has_terminal?('}', false, index)
                  r14 = instantiate_node(SyntaxNode,input, index...(index + 1))
                  @index += 1
                else
                  terminal_parse_failure('}')
                  r14 = nil
                end
                s0 << r14
              end
            end
          end
        end
      end
    end
    if s0.last
      r0 = instantiate_node(LogStash::Config::AST::Plugin,input, i0...index, s0)
      r0.extend(Plugin2)
    else
      @index = i0
      r0 = nil
    end