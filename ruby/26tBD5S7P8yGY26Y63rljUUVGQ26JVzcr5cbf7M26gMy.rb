
        
          setup do
    @old_escape_html_entities_in_json = ActiveSupport.escape_html_entities_in_json
    ActiveSupport.escape_html_entities_in_json = true
    @template = self
    @request = Class.new do
      def send_early_hints(links) end
    end.new
  end
    
        # fun/games_helper.rb
    assert_includes methods, :stratego
    
        def with_test_route_set
      with_routing do |set|
        set.draw do
          match '/', to: 'web_service_test/test#assign_parameters', via: :all
        end
        yield
      end
    end
end

    
        private
      # 'Deserialize' the mailer class name by hand in case another argument
      # (like a Global ID reference) raised DeserializationError.
      def mailer_class
        if mailer = Array(@serialized_arguments).first || Array(arguments).first
          mailer.constantize
        end
      end
    
            case method
        when NilClass
          raise 'Delivery method cannot be nil'
        when Symbol
          if klass = delivery_methods[method]
            mail.delivery_method(klass, (send(:'#{method}_settings') || {}).merge(options || {}))
          else
            raise 'Invalid delivery method #{method.inspect}'
          end
        else
          mail.delivery_method(method)
        end
    
      # Skips the current run on Rubinius using Minitest::Assertions#skip
  private def rubinius_skip(message = '')
    skip message if RUBY_ENGINE == 'rbx'
  end
  # Skips the current run on JRuby using Minitest::Assertions#skip
  private def jruby_skip(message = '')
    skip message if defined?(JRUBY_VERSION)
  end
end

    
        mod_time_contents = Time.at 1306527039
    
                def delete_if
              block_given? or return enum_for(__method__) { size }
              n = @hash.size
              super
              @keys = nil if @hash.size != n
              self
            end
    
      it 'decodes the remaining doubles when passed the '*' modifier after another directive' do
    array = '@\x15333333@\x22ffffff'.unpack(unpack_format()+unpack_format('*'))
    array.should == [5.3, 9.2]
  end
    
          opts.on('-s', '--stdin', :NONE,
              'Read input from standard input instead of an input file.',
              'This is the default if no input file is specified. Requires --from.') do
        @options[:input] = $stdin
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
    
        def render(context)
      if parts = @text.match(/([a-zA-Z\d]*) (.*)/)
        gist, file = parts[1].strip, parts[2].strip
      else
        gist, file = @text.strip, ''
      end
      if gist.empty?
        ''
      else
        script_url = script_url_for gist, file
        code       = get_cached_gist(gist, file) || get_gist_from_web(gist, file)
        html_output_for script_url, code
      end
    end
    
        def clear
      @attachments = Hash.new { |h,k| h[k] = {} }
    end
    
        def scaling dst, ratio
      if ratio.horizontal? || ratio.square?
        [ '%dx' % dst.width, ratio.width ]
      else
        [ 'x%d' % dst.height, ratio.height ]
      end
    end
    
              @subject.send(@attachment_name).post_processing = false
          @subject.send(@attachment_name).assign(file)
          @subject.valid?
          @subject.errors[:'#{@attachment_name}_file_size'].blank?
        ensure
          @subject.send(@attachment_name).post_processing = true
        end