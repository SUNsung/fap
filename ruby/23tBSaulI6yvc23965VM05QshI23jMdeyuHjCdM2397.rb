
        
                def test_url_missing_scheme
          spec = resolve 'foo'
          assert_equal({
            'database' => 'foo' }, spec)
        end
    
        # This isn't strictly necessary for the test, but a little bit of
    # knowledge of internals allows us to make failures far more likely.
    model.define_singleton_method(:define_attribute) do |*args|
      Thread.pass
      super(*args)
    end
    
      def test_distinct_count_with_group_by_and_order_and_limit
    assert_equal({ 6 => 2 }, Account.group(:firm_id).distinct.order('1 DESC').limit(1).count)
  end
    
      test 'broadcasting_for with an array' do
    assert_equal 'Room#1-Campfire:Room#2-Campfire', ChatChannel.broadcasting_for([ Room.new(1), Room.new(2) ])
  end
    
          msg
    end
    
      def deliver_digest
    NotificationMailer.digest(user.account).deliver_now!
    user.touch(:last_emailed_at)
  end
end

    
      private
    
        keys.each do |key|
      value = env[key]
      s = '#{key}: #{value}'
      case key
      when 'CC', 'CXX', 'LD'
        s << ' => #{Pathname.new(value).realpath}' if File.symlink?(value)
      end
      f.puts s
    end
  end
end

    
      def execute
    validate_params
    source = File.join(File.dirname(__FILE__), 'templates', '#{type}-plugin')
    @target_path = File.join(path, full_plugin_name)
    FileUtils.mkdir(@target_path)
    puts ' Creating #{@target_path}'
    
        i0, s0 = index, []
    if has_terminal?('-', false, index)
      r2 = instantiate_node(SyntaxNode,input, index...(index + 1))
      @index += 1
    else
      terminal_parse_failure('-')
      r2 = nil
    end
    if r2
      r1 = r2
    else
      r1 = instantiate_node(SyntaxNode,input, index...index)
    end
    s0 << r1
    if r1
      s3, i3 = [], index
      loop do
        if has_terminal?('\G[0-9]', true, index)
          r4 = true
          @index += 1
        else
          r4 = nil
        end
        if r4
          s3 << r4
        else
          break
        end
      end
      if s3.empty?
        @index = i3
        r3 = nil
      else
        r3 = instantiate_node(SyntaxNode,input, i3...index, s3)
      end
      s0 << r3
      if r3
        i6, s6 = index, []
        if has_terminal?('.', false, index)
          r7 = instantiate_node(SyntaxNode,input, index...(index + 1))
          @index += 1
        else
          terminal_parse_failure('.')
          r7 = nil
        end
        s6 << r7
        if r7
          s8, i8 = [], index
          loop do
            if has_terminal?('\G[0-9]', true, index)
              r9 = true
              @index += 1
            else
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
          r6.extend(Number0)
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
      end
    end
    if s0.last
      r0 = instantiate_node(LogStash::Config::AST::Number,input, i0...index, s0)
      r0.extend(Number1)
    else
      @index = i0
      r0 = nil
    end