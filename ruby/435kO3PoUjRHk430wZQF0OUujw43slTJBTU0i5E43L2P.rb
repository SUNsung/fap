
        
        describe Deliver::HtmlGenerator do
  let(:generator) { Deliver::HtmlGenerator.new }
    
          def task_available?(task)
        load_all_tasks
        return tasks.collect(&:title).include?(task)
      end
    
          it 'does set the output directory' do
        result = Fastlane::FastFile.new.parse('lane :test do
            cloc(output_directory: '/tmp')
          end').runner.execute(:test)
    
              If there is multiple cache for various versions of the requested pod,
          you will be asked which one to clean. Use `--all` to clean them all.
    
    @@ chat
<pre id='chat'></pre>
<form>
  <input id='msg' placeholder='type message here...' />
</form>
    
        it 'redirects requests with duplicate session cookies' do
      get '/', {}, 'HTTP_COOKIE' => 'rack.session=EVIL_SESSION_TOKEN; rack.session=SESSION_TOKEN'
      expect(last_response).to be_redirect
      expect(last_response.location).to eq('/')
    end
    
      context 'escaping' do
    it 'escapes html entities' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['foo']]]
      end
      get '/', :foo => '<bar>'
      expect(body).to eq('&lt;bar&gt;')
    end
    
      it 'should set the X-Frame-Options' do
    expect(get('/', {}, 'wants' => 'text/html').headers['X-Frame-Options']).to eq('SAMEORIGIN')
  end
    
        mock_app do
      use Rack::Head
      use(Rack::Config) { |e| e['rack.session'] ||= {}}
      use detector
      use klass
      run DummyApp
    end
    
              if @address.update_attributes(address_params)
            respond_with(@address, default_template: :show)
          else
            invalid_resource!(@address)
          end
        end
    
            def create
          authorize! :create, StockMovement
          @stock_movement = scope.new(stock_movement_params)
          if @stock_movement.save
            respond_with(@stock_movement, status: 201, default_template: :show)
          else
            invalid_resource!(@stock_movement)
          end
        end
    
            def each_unnecessary_space_match(node, &blk)
          each_match_range(
            contents_range(node),
            MULTIPLE_SPACES_BETWEEN_ITEMS_REGEX,
            &blk
          )
        end
      end
    end
  end
end

    
    module RuboCop
  module Cop
    module Performance
      # This cop identifies the use of `Regexp#match` or `String#match`, which
      # returns `#<MatchData>`/`nil`. The return value of `=~` is an integral
      # index/`nil` and is more performant.
      #
      # @example
      #   # bad
      #   do_something if str.match(/regex/)
      #   while regex.match('str')
      #     do_something
      #   end
      #
      #   # good
      #   method(str =~ /regex/)
      #   return value unless regex =~ 'str'
      class RedundantMatch < Cop
        MSG = 'Use `=~` in places where the `MatchData` returned by ' \
              '`#match` will not be used.'.freeze
    
        context 'opening brace on same line as first element' do
      context 'last element has a trailing comma' do
        it 'autocorrects closing brace on different line from last element' do
          new_source = autocorrect_source(['#{prefix}#{open}#{a}, # a',
                                           '#{b}, # b',
                                           close,
                                           suffix])