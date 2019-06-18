
        
        class ContentSecurityPolicy
  class Builder
    EXTENDABLE_DIRECTIVES = %i[
      base_uri
      object_src
      script_src
      worker_src
    ].freeze
    
              headers.each do |name, val|
            io.write '#{name}: #{val}\r\n'
          end
    
    Gem::Specification.new do |gem|
  gem.name          = 'capistrano'
  gem.version       = Capistrano::VERSION
  gem.authors       = ['Tom Clements', 'Lee Hambley']
  gem.email         = ['seenmyfate@gmail.com', 'lee.hambley@gmail.com']
  gem.description   = 'Capistrano is a utility and framework for executing commands in parallel on multiple remote machines, via SSH.'
  gem.summary       = 'Capistrano - Welcome to easy deployment with Ruby over SSH'
  gem.homepage      = 'http://capistranorb.com/'
    
    Then(/^(\d+) valid releases are kept/) do |num|
  test = %Q([ $(ls -g #{TestApp.releases_path} | grep -E '[0-9]{14}' | wc -l) == '#{num}' ])
  _, _, status = vagrant_cli_command('ssh -c #{test.shellescape}')
  expect(status).to be_success
end
    
            filter = Object.new
        def filter.filter(servers)
          block.call(servers)
        end
      elsif !filter.respond_to? :filter
        raise TypeError, 'Provided custom filter <#{filter.inspect}> does ' \
                         'not have a public 'filter' method'
      end
      @custom_filters ||= []
      @custom_filters << filter
    end
    
          def value_or_default
        if response.empty?
          default
        else
          response
        end
      end
    
          def initialize(variables)
        super(variables)
        @validators = {}
      end
    
          if prefers_plain_text?(env)
        content_type = 'text/plain'
        body = dump_exception(e)
      else
        content_type = 'text/html'
        body = pretty(env, e)
      end
    
      # insert data
  fields.each do |field, values|
    updated = '  s.#{field} = ['
    updated << values.map { |v| '\n    %p' % v }.join(',')
    updated << '\n  ]'
    content.sub!(/  s\.#{field} = \[\n(    .*\n)*  \]/, updated)
  end
    
          def handle(hash)
        was = hash.dup
        hash.replace escape(hash)
        was
      end
    
        headers = get('/', {}, 'wants' => 'text/html').headers
    expect(headers['Content-Security-Policy']).to eq('connect-src https://api.mybank.com; default-src none; font-src https://cdn.mybank.net; frame-src self; img-src https://cdn.mybank.net; media-src https://cdn.mybank.net; object-src https://cdn.mybank.net; report-uri /my_amazing_csp_report_parser; sandbox allow-scripts; script-src https://cdn.mybank.net; style-src https://cdn.mybank.net')
    expect(headers['Content-Security-Policy-Report-Only']).to be_nil
  end
    
      context 'with default reaction' do
    before(:each) do
      mock_app do
        use Rack::Protection::CookieTossing
        run DummyApp
      end
    end
    
    require 'clamp'
require 'pluginmanager/util'
require 'pluginmanager/gemfile'
require 'pluginmanager/install'
require 'pluginmanager/remove'
require 'pluginmanager/list'
require 'pluginmanager/update'
require 'pluginmanager/pack'
require 'pluginmanager/unpack'
require 'pluginmanager/generate'
require 'pluginmanager/prepare_offline_pack'
require 'pluginmanager/proxy_support'
configure_proxy
    
        if local_gems.size > 0
      if update_all?
        plugins_with_path = local_gems
      else
        plugins_with_path = plugins_arg & local_gems
      end