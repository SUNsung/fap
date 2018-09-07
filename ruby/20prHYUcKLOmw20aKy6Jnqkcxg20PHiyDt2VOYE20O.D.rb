
        
                @io.puts
        print_exception(exception, status, @indent)
        @io.flush
      end
    
          Utils.safe_glob(site.in_dest_dir, ['**', '*'], File::FNM_DOTMATCH).each do |file|
        next if file =~ HIDDEN_FILE_REGEX || file =~ regex || dirs.include?(file)
        files << file
      end
    
                output.to_s.each_line do |line|
              Jekyll.logger.info('Bundler:'.green, line.strip) unless line.to_s.empty?
            end
    
      # DBM stores ruby objects as a ruby `String`. Hence, when fetching the data,
  # to convert the ruby string back into a ruby `Hash`, the string is converted
  # into a JSON compatible string in `ruby_hash_to_json_string`, where it may
  # later be parsed by `JSON.parse` in the `json_string_to_ruby_hash` method
  #
  # @param  [Hash] ruby `Hash` to be converted to `JSON` string
  # @return [String]
  def ruby_hash_to_json_string(hash)
    hash.to_json
  end
    
              begin
            lineno = frame.lineno-1
            lines = ::File.readlines(frame.filename)
            frame.pre_context_lineno = [lineno-CONTEXT, 0].max
            frame.pre_context = lines[frame.pre_context_lineno...lineno]
            frame.context_line = lines[lineno].chomp
            frame.post_context_lineno = [lineno+CONTEXT, lines.size].min
            frame.post_context = lines[lineno+1..frame.post_context_lineno]
          rescue
          end
    
          def mask_authenticity_token(session)
        token = set_token(session)
        mask_token(token)
      end
    
          def referrer(env)
        ref = env['HTTP_REFERER'].to_s
        return if !options[:allow_empty_referrer] and ref.empty?
        URI.parse(ref).host || Request.new(env).host
      rescue URI::InvalidURIError
      end
    
          def call(env)
        request  = Request.new(env)
        get_was  = handle(request.GET)
        post_was = handle(request.POST) rescue nil
        app.call env
      ensure
        request.GET.replace  get_was  if get_was
        request.POST.replace post_was if post_was
      end
    
        context 'opening brace on same line as first element' do
      it 'allows closing brace on same line from last element' do
        expect_no_offenses(construct(false, false))
      end
    
            expect(new_source).to eq(<<-RUBY.strip_indent)
          def func
            for _ in [1, 2, 3] do
              something
            end
          end
        RUBY
      end
    
            def check(node)
          return unless node.body && node.body.kwbegin_type?
    
      it 'accepts a def with required begin block' do
    expect_no_offenses(<<-RUBY.strip_indent)
      def func
        begin
          ala
        rescue => e
          bala
        end
        something
      end
    RUBY
  end
    
          # The body of the method definition.
      #
      # @note this can be either a `begin` node, if the method body contains
      #       multiple expressions, or any other node, if it contains a single
      #       expression.
      #
      # @return [Node] the body of the method definition
      def body
        node_parts[0]
      end