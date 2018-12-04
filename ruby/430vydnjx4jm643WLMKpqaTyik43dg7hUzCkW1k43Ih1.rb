
        
              # This method returns an HTML safe string similar to what <tt>Array#join</tt>
      # would return. The array is flattened, and all items, including
      # the supplied separator, are HTML escaped unless they are HTML
      # safe, and the returned string is marked as HTML safe.
      #
      #   safe_join([raw('<p>foo</p>'), '<p>bar</p>'], '<br />')
      #   # => '<p>foo</p>&lt;br /&gt;&lt;p&gt;bar&lt;/p&gt;'
      #
      #   safe_join([raw('<p>foo</p>'), raw('<p>bar</p>')], raw('<br />'))
      #   # => '<p>foo</p><br /><p>bar</p>'
      #
      def safe_join(array, sep = $,)
        sep = ERB::Util.unwrapped_html_escape(sep)
    
              def value
            if @allow_method_names_outside_object
              object.public_send @method_name if object && object.respond_to?(@method_name)
            else
              object.public_send @method_name if object
            end
          end
    
            class RadioButtonBuilder < Builder # :nodoc:
          def radio_button(extra_html_options = {})
            html_options = extra_html_options.merge(@input_html_options)
            html_options[:skip_default_ids] = false
            @template_object.radio_button(@object_name, @method_name, @value, html_options)
          end
        end
    
                  Time.utc(
                default[:year], default[:month], default[:day],
                default[:hour], default[:min], default[:sec]
              )
            end
          end
      end
    end
  end
end

    
            def render
          options = @options.stringify_keys
          options['size'] = options['maxlength'] unless options.key?('size')
          options['type'] ||= field_type
          options['value'] = options.fetch('value') { value_before_type_cast } unless field_type == 'file'
          add_default_name_and_id(options)
          tag('input', options)
        end
    
    module ActionView #:nodoc:
  # = Action View PathSet
  #
  # This class is used to store and access paths in Action View. A number of
  # operations are defined so that you can search among the paths in this
  # set and also perform operations on other +PathSet+ objects.
  #
  # A +LookupContext+ will use a +PathSet+ to store the paths in its context.
  class PathSet #:nodoc:
    include Enumerable
    
        initializer 'action_view.default_enforce_utf8' do |app|
      ActiveSupport.on_load(:action_view) do
        default_enforce_utf8 = app.config.action_view.delete(:default_enforce_utf8)
        unless default_enforce_utf8.nil?
          ActionView::Helpers::FormTagHelper.default_enforce_utf8 = default_enforce_utf8
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
    
              theme.create!
          Jekyll.logger.info 'Your new Jekyll theme, #{theme.name.cyan},' \
                             ' is ready for you in #{theme.path.to_s.cyan}!'
          Jekyll.logger.info 'For help getting started, read #{theme.path}/README.md.'
        end
        # rubocop:enable Metrics/AbcSize
      end
    end
  end
end

    
              @highlighter = begin
            if @config.key?('enable_coderay') && @config['enable_coderay']
              Jekyll::Deprecator.deprecation_message(
                'You are using 'enable_coderay', ' \
                'use syntax_highlighter: coderay in your configuration file.'
              )
    
    Group.user_trust_level_change!(-1, TrustLevel[4])
    
              @bar2 = Agents::DotBar.new(name: 'bar2').tap { |agent|
            agent.user = users(:bob)
            agent.sources << @foo
            agent.propagate_immediately = true
            agent.disabled = true
            agent.save!
          },
    
            it 'creates new Agents, even if one already exists with the given guid (so that we don't overwrite a user's work outside of the scenario)' do
          agents(:bob_weather_agent).update_attribute :guid, 'a-weather-agent'
    
      it 'provides hash-style access to its properties with both symbol and string keys' do
    expect(location[:lat]).to be_a Float
    expect(location[:lat]).to eq 2.0
    expect(location['lat']).to be_a Float
    expect(location['lat']).to eq 2.0
  end
    
        ##
    # Push a large number of jobs to Redis. This method cuts out the redis
    # network round trip latency.  I wouldn't recommend pushing more than
    # 1000 per call but YMMV based on network quality, size of job args, etc.
    # A large number of jobs can cause a bit of Redis command processing latency.
    #
    # Takes the same arguments as #push except that args is expected to be
    # an Array of Arrays.  All other keys are duplicated for each job.  Each job
    # is run through the client middleware pipeline and each job gets its own Job ID
    # as normal.
    #
    # Returns an array of the of pushed jobs' jids.  The number of jobs pushed can be less
    # than the number given if the middleware stopped processing for one or more jobs.
    def push_bulk(items)
      arg = items['args'].first
      return [] unless arg # no jobs to push
      raise ArgumentError, 'Bulk arguments must be an Array of Arrays: [[1], [2]]' if !arg.is_a?(Array)
    
          def deliver(msg)
        if msg.respond_to?(:deliver_now)
          # Rails 4.2/5.0
          msg.deliver_now
        else
          # Rails 3.2/4.0/4.1
          msg.deliver
        end
      end
    end
    
          def __set_test_mode(mode)
        if block_given?
          current_mode = self.__test_mode
          begin
            self.__test_mode = mode
            yield
          ensure
            self.__test_mode = current_mode
          end
        else
          self.__test_mode = mode
        end
      end
    
        def json(payload)
      [200, { 'Content-Type' => 'application/json', 'Cache-Control' => 'no-cache' }, [Sidekiq.dump_json(payload)]]
    end
    
    module Sidekiq
  module WebRouter
    GET = 'GET'
    DELETE = 'DELETE'
    POST = 'POST'
    PUT = 'PUT'
    PATCH = 'PATCH'
    HEAD = 'HEAD'