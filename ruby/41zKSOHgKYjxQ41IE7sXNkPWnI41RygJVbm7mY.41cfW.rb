
        
            version '1' do
      self.release = '1.12.6'
      self.base_url = 'http://coffeescript.org/v1/'
    
        version '3' do
      self.release = '3.5.17'
      self.base_url = 'https://github.com/d3/d3-3.x-api-reference/blob/master/'
      self.root_path = 'API-Reference.md'
    
        version '2.0' do
      self.release = '2.0.5'
      self.dir = '/Users/Thibaut/DevDocs/Docs/Django20'
      self.base_url = 'https://docs.djangoproject.com/en/2.0/'
    end
    
        version '1.4' do
      self.release = '1.4.5'
      self.base_urls = [
        'https://hexdocs.pm/elixir/#{release}/',
        'https://hexdocs.pm/eex/#{release}/',
        'https://hexdocs.pm/ex_unit/#{release}/',
        'https://hexdocs.pm/iex/#{release}/',
        'https://hexdocs.pm/logger/#{release}/',
        'https://hexdocs.pm/mix/#{release}/',
        'https://elixir-lang.org/getting-started/'
      ]
    end
    
        options[:only_patterns] = [
      /\Abook\/first-edition\//,
      /\Areference\//,
      /\Acollections\//,
      /\Astd\// ]
    
        def initialize(name = nil, path = nil, type = nil)
      self.name = name
      self.path = path
      self.type = type
    
        def as_json
      @pages
    end
    
        def merge!(hash)
      return super unless hash.is_a? Hash
      hash.assert_valid_keys URI::Generic::COMPONENT
      hash.each_pair do |key, value|
        send '#{key}=', value
      end
      self
    end
    
          args.last.is_a?(Hash) ? args.push(options.merge(args.pop)) : args.push(options)
      use middleware, *args, &block
    end
    
        # Tells you if this is considered to be a valid
    # OmniAuth AuthHash. The requirements for that
    # are that it has a provider name, a uid, and a
    # valid info hash. See InfoHash#valid? for
    # more details there.
    def valid?
      uid? && provider? && info? && info.valid?
    end
    
      def request_phase
    options[:mutate_on_request].call(options) if options[:mutate_on_request]
    @fail = fail!(options[:failure]) if options[:failure]
    @last_env = env
    return @fail if @fail
    raise('Request Phase')
  end
    
        it 'displays the nickname if no name, first, or last is available' do
      subject.info.name = nil
      %w[first_name last_name].each { |k| subject.info[k] = nil }
      expect(subject.info.name).to eq('meatbag')
    end
    
    namespace :perf do
  task :setup do
    require 'omniauth'
    require 'rack/test'
    app = Rack::Builder.new do |b|
      b.use Rack::Session::Cookie, :secret => 'abc123'
      b.use OmniAuth::Strategies::Developer
      b.run lambda { |_env| [200, {}, ['Not Found']] }
    end.to_app
    @app = Rack::MockRequest.new(app)
    
          it 'has the right filename and line number in the backtrace' do
        expect(subject.backtrace.first.filename).to eq('foo.rb')
        expect(subject.backtrace.first.line).to eq(123)
      end
    end
    
    module BetterErrors
  # @private
  class StackFrame
    def self.from_exception(exception)
      RaisedException.new(exception).backtrace
    end
    
              it 'returns a JSON error' do
            expect(error_page).to receive(:do_variables).and_return(html: '<content>')
            expect(json_body).to match(
              'html' => '<content>',
            )
          end
        end
      end
    end
  end
end

    
    def gemfiles
  @gemfiles ||= Dir[File.dirname(__FILE__) + '/gemfiles/*.gemfile']
end
    
          output, prompt, filled = repl.send_input 'end'
      if RUBY_VERSION >= '2.1.0'
        expect(output).to eq('=> :f\n')
      else
        expect(output).to eq('=> nil\n')
      end
      expect(prompt).to eq('>>')
      expect(filled).to eq('')
    end