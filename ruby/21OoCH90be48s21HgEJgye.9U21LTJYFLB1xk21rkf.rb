
        
            def to_json
      JSON.generate(as_json)
    end
    
        def release
      context[:release]
    end
    
        attr_accessor :name, :type, :path
    
            def with_redirections
          @redirections = new.fetch_redirections
          yield
        ensure
          @redirections = nil
        end
      end
    
            css('.api-profile-header-structure > li').each do |node|
          node.inner_html = node.inner_html.remove('- ')
        end
    
        change.down do
      Notification.where(type: 'Notifications::MentionedInPost').update_all(type: 'Notifications::Mentioned')
      Mention.where(mentions_container_type: 'Comment').destroy_all
      Notification.where(type: 'Notifications::MentionedInComment').destroy_all
    end
  end
end

    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have path in #{expected.inspect} but was #{actual.current_path.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have path in #{expected.inspect} but it had'
  end
end
    
        it 'generates a jasmine fixture', fixture: true do
      session[:mobile_view] = true
      get :new, format: :mobile
      save_fixture(html_for('body'), 'conversations_new_mobile')
    end
  end
end

    
        # The name of the file in which the exception was raised.
    # This could be `nil` if no filename is available.
    #
    # @return [String, nil]
    def sass_filename
      sass_backtrace.first[:filename]
    end
    
          opts.on('-T', '--to FORMAT',
        'The format to convert to. Can be scss or sass.',
        'By default, this is inferred from the output filename.',
        'If there is none, defaults to sass.') do |name|
        @options[:to] = name.downcase.to_sym
        unless [:scss, :sass].include?(@options[:to])
          raise 'Unknown format for sass-convert --to: #{name}'
        end
      end
    
          # Essentially the inverse of +mask_token+.
      def unmask_token(masked_token)
        # Split the token into the one-time pad and the encrypted
        # value and decrypt it
        token_length = masked_token.length / 2
        one_time_pad = masked_token[0...token_length]
        encrypted_token = masked_token[token_length..-1]
        xor_byte_strings(one_time_pad, encrypted_token)
      end
    
          def react(env)
        result = send(options[:reaction], env)
        result if Array === result and result.size == 3
      end
    
          def accepts?(env)
        cookie_header = env['HTTP_COOKIE']
        cookies = Rack::Utils.parse_query(cookie_header, ';,') { |s| s }
        cookies.each do |k, v|
          if k == session_key && Array(v).size > 1
            bad_cookies << k
          elsif k != session_key && Rack::Utils.unescape(k) == session_key
            bad_cookies << k
          end
        end
        bad_cookies.empty?
      end
    
        assert_no_match /Edit Page/,             last_response.body, ''Edit Page' link not blocked in compare template'
    assert_no_match /Revert Changes/,        last_response.body, ''Revert Changes' link not blocked in compare template'
  end
    
        @view = Precious::Views::Page.new
    @view.instance_variable_set :@page, page
    @view.instance_variable_set :@content, page.formatted_data
    @view.instance_variable_set :@h1_title, false
    
    module Sidekiq
  module Generators # :nodoc:
    class WorkerGenerator < ::Rails::Generators::NamedBase # :nodoc:
      desc 'This generator creates a Sidekiq Worker in app/workers and a corresponding test'
    
            names.inject(Object) do |constant, name|
          constant.const_defined?(name) ? constant.const_get(name) : constant.const_missing(name)
        end
      rescue NameError
        super
      end
    end
  end
end
    
          def inline!(&block)
        __set_test_mode(:inline, &block)
      end
    
          nil
    end
  end