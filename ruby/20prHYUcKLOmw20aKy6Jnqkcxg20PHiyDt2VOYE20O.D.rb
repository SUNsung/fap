
        
              expect(first_encoding).to eq(Encoding::UTF_8)
      expect(second_encoding).to eq(Encoding::UTF_8)
    end
    
          if id = ids.shift
        result[id] ||= []
        result[id] << @translations[:original_poster]
      end
    
    describe 'translate accelerator' do
  before(:all) do
    @original_i18n_load_path = I18n.load_path.dup
    I18n.load_path += Dir['#{Rails.root}/spec/fixtures/i18n/translate_accelerator.*.yml']
    I18n.reload!
  end
    
          expect(list[:de_AT]).to eq([:de_AT, :de, :en])
      expect(list[:de]).to eq([:de, :en])
      expect(list[:en]).to eq([:en])
    end
    
    describe VagrantPlugins::Chef::Cap::Linux::ChefInstalled do
  include_context 'unit'
    
    describe VagrantPlugins::Chef::Cap::OmniOS::ChefInstalled do
  include_context 'unit'
    
            local_data_pathname = Pathname.new(local_data_path)
        foo_id_file = local_data_pathname.join('machines/foo/virtualbox/id')
        expect(foo_id_file).to be_file
        expect(foo_id_file.read).to eq('foo_id')
    
            # Execute a `docker-compose` command
        def compose_execute(*cmd, **opts, &block)
          synchronized do
            execute('docker-compose', '-f', composition_path.to_s,
              '-p', machine.env.cwd.basename.to_s, *cmd, **opts, &block)
          end
        end
    
      # escape unicode
  content.gsub!(/./) { |c| c.bytesize > 1 ? '\\u{#{c.codepoints.first.to_s(16)}}' : c }
    
            directives.compact.sort.join('; ')
      end
    
        it 'Reads referrer from Host header when Referer header is relative' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => '/valid'}
      expect(subject.referrer(env)).to eq('foo.com')
    end
    
        it 'denies requests with duplicate session cookies' do
      get '/', {}, 'HTTP_COOKIE' => 'rack.session=EVIL_SESSION_TOKEN; rack.session=SESSION_TOKEN'
      expect(last_response).not_to be_ok
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
    
    # This is basically a copy of the original bundler 'bundle' shim
# with the addition of the loading of our Bundler patches that
# modify Bundler's caching behaviour.
    
    module LogStash
  module PluginManager
    class Error < StandardError; end
    
        def self.find_by_name_with_wildcards(pattern)
      re = transform_pattern_into_re(pattern)
      ::Gem::Specification.find_all.select do |specification|
        specification.name =~ re
      end
    end
    
    module LogStash module PluginManager module PackFetchStrategy
  class Repository
    DEFAULT_PACK_URL = 'https://artifacts.elastic.co/downloads/logstash-plugins'
    PACK_EXTENSION = 'zip'
    
          PluginManager.ui.info('Installing file: #{local_file}')
      uncompressed_path = uncompress(local_file)
      PluginManager.ui.debug('Pack uncompressed to #{uncompressed_path}')
      pack = LogStash::PluginManager::PackInstaller::Pack.new(uncompressed_path)
      raise PluginManager::InvalidPackError, 'The pack must contains at least one plugin' unless pack.valid?
    
            get '/', splines: '[{'x':2,'ints':[]},{'x':3,'ints':[4],'obj':{'y':'quack'}}]'
        expect(last_response.status).to eq(200)
        expect(last_response.body).to eq('arrays work')