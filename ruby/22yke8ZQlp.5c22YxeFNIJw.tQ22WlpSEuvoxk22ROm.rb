
        
          setup do
    @old_escape_html_entities_in_json = ActiveSupport.escape_html_entities_in_json
    ActiveSupport.escape_html_entities_in_json = true
    @template = self
    @request = Class.new do
      def send_early_hints(links) end
    end.new
  end
    
                  when_connected do
                send_command('unsubscribe')
                @raw_client = nil
              end
            end
    
    class TestResponseTest < ActiveSupport::TestCase
  def assert_response_code_range(range, predicate)
    response = ActionDispatch::TestResponse.new
    (0..599).each do |status|
      response.status = status
      assert_equal range.include?(status), response.send(predicate),
                   'ActionDispatch::TestResponse.new(#{status}).#{predicate}'
    end
  end
    
        test 'the middleware stack is exposed as 'middleware' in the controller' do
      result = @app.call(env_for('/'))
      assert_equal 'First!', result[1]['Middleware-Order']
    end
    
          def handle_exception_with_mailer_class(exception)
        if klass = mailer_class
          klass.handle_exception exception
        else
          raise exception
        end
      end
  end
end

    
        included do
      # Do not make this inheritable, because we always want it to propagate
      cattr_accessor :raise_delivery_errors, default: true
      cattr_accessor :perform_deliveries, default: true
      cattr_accessor :deliver_later_queue_name, default: :mailers
    
          indentation = ' ' * indent
      sentences.map! { |sentence|
        '#{indentation}#{sentence.join(' ')}'
      }.join '\n'
    end
  end
end

    
            def restore_test_deliveries
          restore_delivery_method
          ActionMailer::Base.perform_deliveries = @old_perform_deliveries
        end
    
        AssertSelectMailer.test('<div><p>foo</p><p>bar</p></div>').deliver_now
    assert_select_email do
      assert_select 'div:root' do
        assert_select 'p:first-child', 'foo'
        assert_select 'p:last-child', 'bar'
      end
    end
  end
    
      test 'undefined delivery methods raises errors' do
    DeliveryMailer.delivery_method = nil
    error = assert_raise RuntimeError do
      DeliveryMailer.welcome.deliver_now
    end
    assert_equal 'Delivery method cannot be nil', error.message
  end
    
    # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
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
    
    # You can also do other things. Examples:
# https://github.com/tmm1/stackprof/blob/master/bin/stackprof
report = StackProf::Report.new(Marshal.load(IO.binread(PROF_OUTPUT_FILE)))
report.print_text(
  options[:sort],
  options[:limit],
  options[:select_files],
  options[:reject_files],
  options[:select_names],
  options[:reject_names]
)
    
            parsed_expr = parse_expression(expression)
        @context.stack do
          groups = input.group_by do |item|
            @context[variable] = item
            parsed_expr.render(@context)
          end
          grouped_array(groups)
        end
      end
    
          def render!(*args)
        measure_time do
          measure_bytes do
            @template.render!(*args)
          end
        end
      end
    
        it 'accepts #{method} requests with whitelisted Origin' do
      mock_app do
        use Rack::Protection::HttpOrigin, :origin_whitelist => ['http://www.friend.com']
        run DummyApp
      end
      expect(send(method.downcase, '/', {}, 'HTTP_ORIGIN' => 'http://www.friend.com')).to be_ok
    end
  end
end
