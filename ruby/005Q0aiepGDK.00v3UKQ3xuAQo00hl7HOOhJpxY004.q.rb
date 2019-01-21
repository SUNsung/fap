
        
        # Just a slash
Benchmark.ips do |x|
  path = '/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
    Jekyll::Deprecator.process(ARGV)
    
    #
    
    #
    
          # @see Base#\_store
      def _store(key, version, sha, contents)
        compiled_filename = path_to(key)
        FileUtils.mkdir_p(File.dirname(compiled_filename))
        Sass::Util.atomic_create_and_write_file(compiled_filename) do |f|
          f.puts(version)
          f.puts(sha)
          f.write(contents)
        end
      rescue Errno::EACCES
        # pass
      end
    
          def inherited_hash_reader(name)
        class_eval <<-RUBY, __FILE__, __LINE__ + 1
          def #{name}(name)
            _#{name}(name.tr('_', '-'))
          end
    
        # Returns a string representation of the Sass backtrace.
    #
    # @param default_filename [String] The filename to use for unknown files
    # @see #sass_backtrace
    # @return [String]
    def sass_backtrace_str(default_filename = 'an unknown file')
      lines = message.split('\n')
      msg = lines[0] + lines[1..-1].
        map {|l| '\n' + (' ' * 'Error: '.size) + l}.join
      'Error: #{msg}' +
        sass_backtrace.each_with_index.map do |entry, i|
          '\n        #{i == 0 ? 'on' : 'from'} line #{entry[:line]}' +
            ' of #{entry[:filename] || default_filename}' +
            (entry[:mixin] ? ', in `#{entry[:mixin]}'' : '')
        end.join
    end
    
        def open_file(filename, flag = 'r')
      return if filename.nil?
      flag = 'wb' if @options[:unix_newlines] && flag == 'w'
      file = File.open(filename, flag)
      return file unless block_given?
      yield file
      file.close
    end
    
          if @options[:sourcemap] != :none && @options[:sourcemap_filename]
        relative_sourcemap_path = Sass::Util.relative_path_from(
          @options[:sourcemap_filename], Sass::Util.pathname(@options[:output_filename]).dirname)
        rendered, mapping = engine.render_with_sourcemap(relative_sourcemap_path.to_s)
        write_output(rendered, output)
        write_output(
          mapping.to_json(
            :type => @options[:sourcemap],
            :css_path => @options[:output_filename],
            :sourcemap_path => @options[:sourcemap_filename]) + '\n',
          @options[:sourcemap_filename])
      else
        write_output(engine.render, output)
      end
    rescue Sass::SyntaxError => e
      write_output(Sass::SyntaxError.exception_to_css(e), output) if output.is_a?(String)
      raise e
    ensure
      output.close if output.is_a? File
    end
    
      it 'ignores empty arrays' do
    expect_no_offenses('[]')
  end
    
          it 'does not autocorrect the closing brace' do
        new_source = autocorrect_source(source)
        expect(new_source).to eq([source].join($RS))
      end
    end
    
          # Calls the given block for each `value` node in the `hash` literal.
      # If no block is given, an `Enumerator` is returned.
      #
      # @return [self] if a block is given
      # @return [Enumerator] if no block is given
      def each_value
        return pairs.map(&:value).to_enum unless block_given?
    
          # Returns the body of the `when` node.
      #
      # @return [Node, nil] the body of the `when` node
      def body
        node_parts[-1]
      end
    end
  end
end

    
            def new; end
    
              Spree::Cart::AddItem.call(order: @shipment.order,
                                    variant: variant,
                                    quantity: quantity,
                                    options: { shipment: @shipment })
    
            def show
          @stock_movement = scope.find(params[:id])
          respond_with(@stock_movement)
        end
    
            def destroy
          authorize! :destroy, taxon
          taxon.destroy
          respond_with(taxon, status: 204)
        end
    
              @users = @users.result.page(params[:page]).per(params[:per_page])
          expires_in 15.minutes, public: true
          headers['Surrogate-Control'] = 'max-age=#{15.minutes}'
          respond_with(@users)
        end
    
      def framework_major_version
    framework_version.split('.').first.to_i
  end
end
World(RailsCommandHelpers)

    
        def geometry_string
      begin
        orientation = Paperclip.options[:use_exif_orientation] ?
          '%[exif:orientation]' : '1'
        Paperclip.run(
          Paperclip.options[:is_windows] ? 'magick identify' : 'identify',
          '-format '%wx%h,#{orientation}' :file', {
            :file => '#{path}[0]'
          }, {
            :swallow_stderr => true
          }
        )
      rescue Terrapin::ExitStatusError
        ''
      rescue Terrapin::CommandNotFoundError => e
        raise_because_imagemagick_missing
      end
    end