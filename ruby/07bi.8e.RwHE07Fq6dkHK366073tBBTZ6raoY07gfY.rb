
        
              # Returns an HTML block tag of type +name+ surrounding the +content+. Add
      # HTML attributes by passing an attributes hash to +options+.
      # Instead of passing the content as an argument, you can also use a block
      # in which case, you pass your +options+ as the second parameter.
      # Set escape to false to disable attribute value escaping.
      # Note: this is legacy syntax, see +tag+ method description for details.
      #
      # ==== Options
      # The +options+ hash can be used with attributes with no value like (<tt>disabled</tt> and
      # <tt>readonly</tt>), which you can give a value of true in the +options+ hash. You can use
      # symbols or strings for the attribute names.
      #
      # ==== Examples
      #   content_tag(:p, 'Hello world!')
      #    # => <p>Hello world!</p>
      #   content_tag(:div, content_tag(:p, 'Hello world!'), class: 'strong')
      #    # => <div class='strong'><p>Hello world!</p></div>
      #   content_tag(:div, 'Hello world!', class: ['strong', 'highlight'])
      #    # => <div class='strong highlight'>Hello world!</div>
      #   content_tag('select', options, multiple: true)
      #    # => <select multiple='multiple'>...options...</select>
      #
      #   <%= content_tag :div, class: 'strong' do -%>
      #     Hello world!
      #   <% end -%>
      #    # => <div class='strong'>Hello world!</div>
      def content_tag(name, content_or_options_with_block = nil, options = nil, escape = true, &block)
        if block_given?
          options = content_or_options_with_block if content_or_options_with_block.is_a?(Hash)
          tag_builder.content_tag_string(name, capture(&block), options, escape)
        else
          tag_builder.content_tag_string(name, content_or_options_with_block, options, escape)
        end
      end
    
            def view_rendered?(view, expected_locals)
          locals_for(view).any? do |actual_locals|
            expected_locals.all? { |key, value| value == actual_locals[key] }
          end
        end
      end
    
      def redirect_to_url
    redirect_to 'http://www.rubyonrails.org/'
  end
    
            @disable_request_forgery_protection = false
        @allow_same_origin_as_host = true
      end
    
              def remove_channel(channel)
            @subscription_lock.synchronize do
              when_connected { send_command('unsubscribe', channel) }
            end
          end
    
            def spec(spec, config = {})
          Resolver.new(config).spec(spec)
        end
    
      test 'helpers' do
    assert_response_code_range 200..299, :successful?
    assert_response_code_range [404],    :not_found?
    assert_response_code_range 300..399, :redirection?
    assert_response_code_range 500..599, :server_error?
    assert_response_code_range 400..499, :client_error?
  end
    
        class TestHalting < ActiveSupport::TestCase
      test 'when a callback sets the response body, the action should not be invoked' do
        controller = SetsResponseBody.new
        controller.process(:index)
        assert_equal 'Success', controller.response_body
      end
    end
    
        actual = ActionController::HttpAuthentication::Token.token_and_options(
      sample_request_without_token_key(token)
    ).first
    
      class TestInheritedMiddleware < TestMiddleware
    def setup
      @app = InheritedController.action(:index)
    end
  end
end

    
        included do
      # Do not make this inheritable, because we always want it to propagate
      cattr_accessor :raise_delivery_errors, default: true
      cattr_accessor :perform_deliveries, default: true
      cattr_accessor :deliver_later_queue_name, default: :mailers
    
          # Make list points stand on their own line
      formatted.gsub!(/[ ]*([*]+) ([^*]*)/) { '  #{$1} #{$2.strip}\n' }
      formatted.gsub!(/[ ]*([#]+) ([^#]*)/) { '  #{$1} #{$2.strip}\n' }
    
          private
        def method_missing(method_name, *args)
          if @mailer.action_methods.include?(method_name.to_s)
            ActionMailer::Parameterized::MessageDelivery.new(@mailer, method_name, @params, *args)
          else
            super
          end
        end
    
            def application_mailer_file_name
          @_application_mailer_file_name ||= if mountable_engine?
            'app/mailers/#{namespaced_path}/application_mailer.rb'
          else
            'app/mailers/application_mailer.rb'
          end
        end
    end
  end
end

    
    CONTENT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
        puts 'GC Stats:'
    GC.start(full_mark: true, immediate_sweep: false)
    puts JSON.pretty_generate(GC.stat)
  end
end
    
    strlen = mimes.keys.max_by(&:length).length
output = ''
output << '# Woah there. Do not edit this file directly.\n'
output << '# This file is generated automatically by script/vendor-mimes.\n\n'
mimes = mimes.sort_by { |k,v| k }
output << mimes.map { |mime,extensions| '#{mime.ljust(strlen)} #{extensions.join(' ')}' }.join('\n')
    
    #
    
          new_theme_name = args.join('_')
      theme = Jekyll::ThemeBuilder.new(new_theme_name, opts)
      if theme.path.exist?
        Jekyll.logger.abort_with 'Conflict:', '#{theme.path} already exists.'
      end
    
          private
      def grouped_array(groups)
        groups.each_with_object([]) do |item, array|
          array << {
            'name'  => item.first,
            'items' => item.last,
            'size'  => item.last.size,
          }
        end
      end
    end
  end
end

    
        context 'with keywords' do
      let(:options) do
        {
          name: { 'en-US' => 'Fastlane Demo' },
          description: { 'en-US' => 'Demo description' },
          keywords: { 'en-US' => 'Some, key, words' }
        }
      end
    
          it 'it increments all targets minor version number' do
        Fastlane::FastFile.new.parse('lane :test do
          increment_version_number(bump_type: 'minor')
        end').runner.execute(:test)
    
        find_union(segments, Project).includes(:namespace).order_id_desc
  end
    
      attr_reader :mmin, :path
    
        context 'when tag exists' do
      it 'returns http success' do
        get :show, params: { id: 'test', max_id: late.id }
        expect(response).to have_http_status(:success)
      end
    
        def name
      object.description
    end