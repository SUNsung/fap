
        
        puts 'Deduping #{links.size} links...'
    
      %w(GET HEAD POST PUT DELETE).each do |method|
    it 'accepts #{method} requests when allow_if is true' do
      mock_app do
        use Rack::Protection::HttpOrigin, :allow_if => lambda{|env| env.has_key?('HTTP_ORIGIN') }
        run DummyApp
      end
      expect(send(method.downcase, '/', {}, 'HTTP_ORIGIN' => 'http://any.domain.com')).to be_ok
    end
  end
    
      it 'accepts a session without changes to tracked parameters' do
    session = {:foo => :bar}
    get '/', {}, 'rack.session' => session
    get '/', {}, 'rack.session' => session
    expect(session[:foo]).to eq(:bar)
  end
    
      config.include Rack::Test::Methods
  config.include SpecHelpers
end
    
        expect_any_instance_of(detector).to receive(:call).with(
      hash_including('foo.bar' => 42)
    ).and_call_original
    
      private
    # Use callbacks to share common setup or constraints between actions.
    def set_book
      @book = Book.find(params[:id])
    end
    
            def initialize(name, declaration_node, scope)
          unless VARIABLE_DECLARATION_TYPES.include?(declaration_node.type)
            raise ArgumentError,
                  'Node type must be any of #{VARIABLE_DECLARATION_TYPES}, ' \
                  'passed #{declaration_node.type}'
          end
    
    module RuboCop
  module Cop
    module Lint
      # This cop checks that there are no repeated conditions
      # used in case 'when' expressions.
      #
      # @example
      #
      #   # bad
      #
      #   case x
      #   when 'first'
      #     do_something
      #   when 'first'
      #     do_something_else
      #   end
      #
      # @example
      #
      #   # good
      #
      #   case x
      #   when 'first'
      #     do_something
      #   when 'second'
      #     do_something_else
      #   end
      class DuplicateCaseCondition < Cop
        MSG = 'Duplicate `when` condition detected.'.freeze